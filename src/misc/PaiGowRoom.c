#include "protos.h"

void f_0045d1f0(void) /* PaiGowRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d1f0);
    /* 0045d1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d1f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1f5: push 0x69f248 */ { u32 v = 0x69f248u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045d200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d201: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d202: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045d207: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d209: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d20a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045d20d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045d213: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045d216: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d219: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x45d21eu); f_005d7b60();
    /* 0045d21e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045d225: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d228: mov dword ptr [eax], 0x6b9b94 */ W32((u32)(r_eax), 0x6b9b94u);
    /* 0045d22e: push 0x7d1 */ { u32 v = 0x7d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d233: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d236: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x45d23bu); f_005f1ad0();
    /* 0045d23b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d23e: mov dword ptr [0x790734], ecx */ W32((u32)(0x790734u), r_ecx);
    /* 0045d244: mov dword ptr [0x790738], 0 */ W32((u32)(0x790738u), 0x0u);
    /* 0045d24e: mov dword ptr [0x79073c], 0 */ W32((u32)(0x79073cu), 0x0u);
    /* 0045d258: mov dword ptr [0x790740], 0 */ W32((u32)(0x790740u), 0x0u);
    /* 0045d262: mov dword ptr [0x790744], 0 */ W32((u32)(0x790744u), 0x0u);
    /* 0045d26c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045d273: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d276: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045d279: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045d280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d281: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d284: ret  */ FN_RET(0x0045d1f0); r_esp += 4; return;
}

void f_0045d290(void) /* PaiGowRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d290);
    /* 0045d290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d291: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d295: push 0x69f26b */ { u32 v = 0x69f26bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d29a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045d2a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2a1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d2a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045d2a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045d2af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045d2b5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0045d2b8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045d2bb: mov dword ptr [eax], 0x6b9b94 */ W32((u32)(r_eax), 0x6b9b94u);
    /* 0045d2c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045d2c8: mov dword ptr [0x790734], 0 */ W32((u32)(0x790734u), 0x0u);
    /* 0045d2d2: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045d2d8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045d2db: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d2de: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0045d2e1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d2e5: je 0x45d2fa */ if (fZ) goto L_0045d2fa;
L_0045d2e7:; BB(0x0045d2e7);
    /* 0045d2e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d2ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d2ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d2f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045d2f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d2f5u); call_ind(t); }
    /* 0045d2f5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045d2f8: jmp 0x45d301 */ goto L_0045d301;
L_0045d2fa:; BB(0x0045d2fa);
    /* 0045d2fa: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0045d301:; BB(0x0045d301);
    /* 0045d301: mov dword ptr [0x790738], 0 */ W32((u32)(0x790738u), 0x0u);
    /* 0045d30b: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045d311: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045d314: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045d317: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0045d31a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d31e: je 0x45d333 */ if (fZ) goto L_0045d333;
L_0045d320:; BB(0x0045d320);
    /* 0045d320: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d322: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d325: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d327: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d32a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045d32c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d32eu); call_ind(t); }
    /* 0045d32e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045d331: jmp 0x45d33a */ goto L_0045d33a;
L_0045d333:; BB(0x0045d333);
    /* 0045d333: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0045d33a:; BB(0x0045d33a);
    /* 0045d33a: mov dword ptr [0x79073c], 0 */ W32((u32)(0x79073cu), 0x0u);
    /* 0045d344: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045d34a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045d34d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045d350: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0045d353: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d357: je 0x45d36c */ if (fZ) goto L_0045d36c;
L_0045d359:; BB(0x0045d359);
    /* 0045d359: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d35b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d35e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d360: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d363: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045d365: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d367u); call_ind(t); }
    /* 0045d367: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045d36a: jmp 0x45d373 */ goto L_0045d373;
L_0045d36c:; BB(0x0045d36c);
    /* 0045d36c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0045d373:; BB(0x0045d373);
    /* 0045d373: mov dword ptr [0x790740], 0 */ W32((u32)(0x790740u), 0x0u);
    /* 0045d37d: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045d383: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045d386: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045d389: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0045d38c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d390: je 0x45d3a5 */ if (fZ) goto L_0045d3a5;
L_0045d392:; BB(0x0045d392);
    /* 0045d392: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d394: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045d397: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d399: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045d39c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045d39e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d3a0u); call_ind(t); }
    /* 0045d3a0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0045d3a3: jmp 0x45d3ac */ goto L_0045d3ac;
L_0045d3a5:; BB(0x0045d3a5);
    /* 0045d3a5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0045d3ac:; BB(0x0045d3ac);
    /* 0045d3ac: mov dword ptr [0x790744], 0 */ W32((u32)(0x790744u), 0x0u);
    /* 0045d3b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045d3bd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045d3c0: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x45d3c5u); f_005d7bd0();
    /* 0045d3c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045d3c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045d3cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d3d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d3d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d3d3: ret  */ FN_RET(0x0045d290); r_esp += 4; return;
}

void f_0045d3e0(void) /* PaiGowRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d3e0);
    /* 0045d3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3e5: push 0x69f2bd */ { u32 v = 0x69f2bdu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045d3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3f1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d3f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045d3f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045d3ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045d405: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0045d408: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045d40b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x45d410u); f_005d8230();
    /* 0045d410: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d415: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45d41au); f_00686d82();
    /* 0045d41a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d41d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045d420: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045d427: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d42b: je 0x45d43a */ if (fZ) goto L_0045d43a;
L_0045d42d:; BB(0x0045d42d);
    /* 0045d42d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d430: call 0x45f6a0 */ r_esp -= 4; W32(r_esp, 0x45d435u); f_0045f6a0();
    /* 0045d435: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045d438: jmp 0x45d441 */ goto L_0045d441;
L_0045d43a:; BB(0x0045d43a);
    /* 0045d43a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0045d441:; BB(0x0045d441);
    /* 0045d441: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045d444: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045d447: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045d44e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d451: mov dword ptr [0x790738], ecx */ W32((u32)(0x790738u), r_ecx);
    /* 0045d457: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045d45d: call 0x45fe80 */ r_esp -= 4; W32(r_esp, 0x45d462u); f_0045fe80();
    /* 0045d462: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d464: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45d469u); f_00686d82();
    /* 0045d469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d46c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045d46f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045d476: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d47a: je 0x45d489 */ if (fZ) goto L_0045d489;
L_0045d47c:; BB(0x0045d47c);
    /* 0045d47c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045d47f: call 0x45b220 */ r_esp -= 4; W32(r_esp, 0x45d484u); f_0045b220();
    /* 0045d484: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0045d487: jmp 0x45d490 */ goto L_0045d490;
L_0045d489:; BB(0x0045d489);
    /* 0045d489: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0045d490:; BB(0x0045d490);
    /* 0045d490: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045d493: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0045d496: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045d49d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d4a0: mov dword ptr [0x79073c], eax */ W32((u32)(0x79073cu), r_eax);
    /* 0045d4a5: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4aa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45d4afu); f_00686d82();
    /* 0045d4af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d4b2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045d4b5: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0045d4bc: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d4c0: je 0x45d4cf */ if (fZ) goto L_0045d4cf;
L_0045d4c2:; BB(0x0045d4c2);
    /* 0045d4c2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045d4c5: call 0x4576c0 */ r_esp -= 4; W32(r_esp, 0x45d4cau); f_004576c0();
    /* 0045d4ca: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0045d4cd: jmp 0x45d4d6 */ goto L_0045d4d6;
L_0045d4cf:; BB(0x0045d4cf);
    /* 0045d4cf: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0045d4d6:; BB(0x0045d4d6);
    /* 0045d4d6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045d4d9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045d4dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045d4e3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d4e6: mov dword ptr [0x790740], edx */ W32((u32)(0x790740u), r_edx);
    /* 0045d4ec: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045d4f2: call 0x457c30 */ r_esp -= 4; W32(r_esp, 0x45d4f7u); f_00457c30();
    /* 0045d4f7: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4fc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45d501u); f_00686d82();
    /* 0045d501: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d504: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045d507: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0045d50e: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d512: je 0x45d521 */ if (fZ) goto L_0045d521;
L_0045d514:; BB(0x0045d514);
    /* 0045d514: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045d517: call 0x44e770 */ r_esp -= 4; W32(r_esp, 0x45d51cu); f_0044e770();
    /* 0045d51c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0045d51f: jmp 0x45d528 */ goto L_0045d528;
L_0045d521:; BB(0x0045d521);
    /* 0045d521: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0045d528:; BB(0x0045d528);
    /* 0045d528: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045d52b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045d52e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045d535: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045d538: mov dword ptr [0x790744], ecx */ W32((u32)(0x790744u), r_ecx);
    /* 0045d53e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d540: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45d545u); f_00686d82();
    /* 0045d545: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d548: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045d54b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0045d552: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d556: je 0x45d573 */ if (fZ) goto L_0045d573;
L_0045d558:; BB(0x0045d558);
    /* 0045d558: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d55a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d55d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x45d562u); f_005fc0d0();
    /* 0045d562: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d565: mov dword ptr [edx], 0x6b9e94 */ W32((u32)(r_edx), 0x6b9e94u);
    /* 0045d56b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0045d56e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0045d571: jmp 0x45d57a */ goto L_0045d57a;
L_0045d573:; BB(0x0045d573);
    /* 0045d573: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0045d57a:; BB(0x0045d57a);
    /* 0045d57a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045d57d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0045d580: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045d587: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045d58a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d58b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045d58e: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x45d593u); f_005f1b70();
    /* 0045d593: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045d596: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045d599: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045d59c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045d59f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045d5a1: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d5a3: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0045d5a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d5a8u); call_ind(t); }
    /* 0045d5a8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045d5ab: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x45d5b0u); f_005d85e0();
    /* 0045d5b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5b2: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045d5b8: call 0x45b260 */ r_esp -= 4; W32(r_esp, 0x45d5bdu); f_0045b260();
    /* 0045d5bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045d5c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045d5c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d5c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d5ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d5cb: ret  */ FN_RET(0x0045d3e0); r_esp += 4; return;
}

void f_0045d5d0(void) /* PaiGowRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d5d0);
    /* 0045d5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d5d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d5d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d5d9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045d5dc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045d5df: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d5e6: je 0x45d5f6 */ if (fZ) goto L_0045d5f6;
L_0045d5e8:; BB(0x0045d5e8);
    /* 0045d5e8: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d5ef: je 0x45d649 */ if (fZ) goto L_0045d649;
L_0045d5f1:; BB(0x0045d5f1);
    /* 0045d5f1: jmp 0x45d67e */ goto L_0045d67e;
L_0045d5f6:; BB(0x0045d5f6);
    /* 0045d5f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5f8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d600: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x45d605u); f_005fe640();
    /* 0045d605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d607: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d60c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d60f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x45d614u); f_005fe640();
    /* 0045d614: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d616: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d61b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d61e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x45d623u); f_005fe640();
    /* 0045d623: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d625: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d62a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d62d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x45d632u); f_005fe640();
    /* 0045d632: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d634: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d636: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d638: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d63d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d640: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x45d645u); f_005fe240();
    /* 0045d645: jmp 0x45d67e */ goto L_0045d67e;
L_0045d649:; BB(0x0045d649);
    /* 0045d649: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d64b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 0045d650: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d653: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x45d658u); f_005fe640();
    /* 0045d658: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65e: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d663: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d666: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x45d66bu); f_005fe240();
    /* 0045d66b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d66d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d66f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d671: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d676: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d679: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x45d67eu); f_005fe240();
L_0045d67e:; BB(0x0045d67e);
    /* 0045d67e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045d681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d682: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d685: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d686: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d689: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x45d68eu); f_005d8670();
    /* 0045d68e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d691: ret 8 */ FN_RET(0x0045d5d0); r_esp += 12; return;
}

void f_0045d6a0(void) /* PaiGowRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d6a0);
    /* 0045d6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d6a7: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6ac: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045d6b2: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x45d6b7u); f_005df2e0();
    /* 0045d6b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6b8: push 0x30e3a1 */ { u32 v = 0x30e3a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d6c0: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x45d6c5u); f_005f1e60();
    /* 0045d6c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d6c8: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x45d6cdu); f_0064e430();
    /* 0045d6cd: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d6cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d6d0: ret  */ FN_RET(0x0045d6a0); r_esp += 4; return;
}

void f_0045d6e0(void) /* PaiGowRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d6e0);
    /* 0045d6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d6e3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d6e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045d6e9: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045d6ee: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045d6f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d6f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d6fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6fb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45d700u); f_005dcb00();
    /* 0045d700: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d705: je 0x45d795 */ if (fZ) goto L_0045d795;
L_0045d70b:; BB(0x0045d70b);
    /* 0045d70b: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045d710: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045d716: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045d719: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045d71c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d71d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45d722u); f_005dcb00();
    /* 0045d722: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d725: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045d728: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d72b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d730u); f_0063aac0();
    /* 0045d730: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045d732: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045d735: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d739: je 0x45d757 */ if (fZ) goto L_0045d757;
L_0045d73b:; BB(0x0045d73b);
    /* 0045d73b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045d73e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d743u); f_0063aac0();
    /* 0045d743: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045d745: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045d748: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d74c: je 0x45d757 */ if (fZ) goto L_0045d757;
L_0045d74e:; BB(0x0045d74e);
    /* 0045d74e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0045d755: jmp 0x45d75e */ goto L_0045d75e;
L_0045d757:; BB(0x0045d757);
    /* 0045d757: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0045d75e:; BB(0x0045d75e);
    /* 0045d75e: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0045d762: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d764: je 0x45d795 */ if (fZ) goto L_0045d795;
L_0045d766:; BB(0x0045d766);
    /* 0045d766: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d769: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045d76c: cmp dword ptr [ebp - 0x24], 0x30e3a2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x30e3a2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d773: je 0x45d777 */ if (fZ) goto L_0045d777;
L_0045d775:; BB(0x0045d775);
    /* 0045d775: jmp 0x45d795 */ goto L_0045d795;
L_0045d777:; BB(0x0045d777);
    /* 0045d777: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045d77d: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 0045d783: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0045d786: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d78a: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045d790: call 0x460b40 */ r_esp -= 4; W32(r_esp, 0x45d795u); f_00460b40();
L_0045d795:; BB(0x0045d795);
    /* 0045d795: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045d798: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d799: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d79c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d79d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045d7a0: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x45d7a5u); f_005dc7d0();
    /* 0045d7a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d7a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d7a8: ret 8 */ FN_RET(0x0045d6e0); r_esp += 12; return;
}

void f_0045d7b0(void) /* PaiGowRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d7b0);
    /* 0045d7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d7b3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d7b6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045d7b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d7c0: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x45d7c5u); f_005d7f40();
    /* 0045d7c5: cmp dword ptr [0x790738], 0 */ {  u32 a = R32((u32)(0x790738u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d7cc: je 0x45d7de */ if (fZ) goto L_0045d7de;
L_0045d7ce:; BB(0x0045d7ce);
    /* 0045d7ce: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045d7d4: call 0x460840 */ r_esp -= 4; W32(r_esp, 0x45d7d9u); f_00460840();
    /* 0045d7d9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045d7dc: jmp 0x45d7e5 */ goto L_0045d7e5;
L_0045d7de:; BB(0x0045d7de);
    /* 0045d7de: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
L_0045d7e5:; BB(0x0045d7e5);
    /* 0045d7e5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045d7e8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d7eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d7ee: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d7f2: jne 0x45d899 */ if (!fZ) goto L_0045d899;
L_0045d7f8:; BB(0x0045d7f8);
    /* 0045d7f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d7fb: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0045d7ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d801: jne 0x45d899 */ if (!fZ) goto L_0045d899;
L_0045d807:; BB(0x0045d807);
    /* 0045d807: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d80b: je 0x45d899 */ if (fZ) goto L_0045d899;
L_0045d811:; BB(0x0045d811);
    /* 0045d811: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d814: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0045d818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d819: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x45d81fu); call_ind(t); }
    /* 0045d81f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d822: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045d825: cmp dword ptr [ebp - 0x20], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d829: je 0x45d82d */ if (fZ) goto L_0045d82d;
L_0045d82b:; BB(0x0045d82b);
    /* 0045d82b: jmp 0x45d899 */ goto L_0045d899;
L_0045d82d:; BB(0x0045d82d);
    /* 0045d82d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d830: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d831: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45d836u); f_005dcb00();
    /* 0045d836: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d83b: je 0x45d899 */ if (fZ) goto L_0045d899;
L_0045d83d:; BB(0x0045d83d);
    /* 0045d83d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d841: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45d846u); f_005dcb00();
    /* 0045d846: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d849: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045d84c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d84f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d854u); f_0063aac0();
    /* 0045d854: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045d856: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045d859: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d85d: je 0x45d87b */ if (fZ) goto L_0045d87b;
L_0045d85f:; BB(0x0045d85f);
    /* 0045d85f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045d862: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d867u); f_0063aac0();
    /* 0045d867: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045d869: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045d86c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d870: je 0x45d87b */ if (fZ) goto L_0045d87b;
L_0045d872:; BB(0x0045d872);
    /* 0045d872: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0045d879: jmp 0x45d882 */ goto L_0045d882;
L_0045d87b:; BB(0x0045d87b);
    /* 0045d87b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0045d882:; BB(0x0045d882);
    /* 0045d882: movzx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 0045d886: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d888: je 0x45d899 */ if (fZ) goto L_0045d899;
L_0045d88a:; BB(0x0045d88a);
    /* 0045d88a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d88e: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045d894: call 0x460b40 */ r_esp -= 4; W32(r_esp, 0x45d899u); f_00460b40();
L_0045d899:; BB(0x0045d899);
    /* 0045d899: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d89c: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0045d8a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8a2: jne 0x45d8e4 */ if (!fZ) goto L_0045d8e4;
L_0045d8a4:; BB(0x0045d8a4);
    /* 0045d8a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d8a7: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8ab: jne 0x45d8e4 */ if (!fZ) goto L_0045d8e4;
L_0045d8ad:; BB(0x0045d8ad);
    /* 0045d8ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045d8b0: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0045d8b4: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8b7: jne 0x45d8e4 */ if (!fZ) goto L_0045d8e4;
L_0045d8b9:; BB(0x0045d8b9);
    /* 0045d8b9: cmp dword ptr [0x790738], 0 */ {  u32 a = R32((u32)(0x790738u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8c0: je 0x45d8e4 */ if (fZ) goto L_0045d8e4;
L_0045d8c2:; BB(0x0045d8c2);
    /* 0045d8c2: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045d8c7: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045d8cd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045d8d0: cmp dword ptr [ebp - 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8d4: je 0x45d8e4 */ if (fZ) goto L_0045d8e4;
L_0045d8d6:; BB(0x0045d8d6);
    /* 0045d8d6: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045d8dc: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0045d8df: call 0x5cb5b0 */ r_esp -= 4; W32(r_esp, 0x45d8e4u); f_005cb5b0();
L_0045d8e4:; BB(0x0045d8e4);
    /* 0045d8e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d8e7: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0045d8eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8ed: jne 0x45d933 */ if (!fZ) goto L_0045d933;
L_0045d8ef:; BB(0x0045d8ef);
    /* 0045d8ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d8f2: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d8f6: jne 0x45d933 */ if (!fZ) goto L_0045d933;
L_0045d8f8:; BB(0x0045d8f8);
    /* 0045d8f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d8fb: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0045d8ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d900: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x45d906u); call_ind(t); }
    /* 0045d906: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d909: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d90c: jne 0x45d933 */ if (!fZ) goto L_0045d933;
L_0045d90e:; BB(0x0045d90e);
    /* 0045d90e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d910: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d915: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d918: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x45d91du); f_005f2a60();
    /* 0045d91d: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d91f: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x45d924u); f_006026d0();
    /* 0045d924: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045d927: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d929: je 0x45d933 */ if (fZ) goto L_0045d933;
L_0045d92b:; BB(0x0045d92b);
    /* 0045d92b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045d92e: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x45d933u); f_005db240();
L_0045d933:; BB(0x0045d933);
    /* 0045d933: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d936: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0045d93a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d93c: jne 0x45d9a6 */ if (!fZ) goto L_0045d9a6;
L_0045d93e:; BB(0x0045d93e);
    /* 0045d93e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045d941: cmp dword ptr [edx + 0x18], 1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d945: jne 0x45d9a6 */ if (!fZ) goto L_0045d9a6;
L_0045d947:; BB(0x0045d947);
    /* 0045d947: cmp dword ptr [0x790740], 0 */ {  u32 a = R32((u32)(0x790740u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d94e: je 0x45d9a6 */ if (fZ) goto L_0045d9a6;
L_0045d950:; BB(0x0045d950);
    /* 0045d950: cmp dword ptr [0x790738], 0 */ {  u32 a = R32((u32)(0x790738u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d957: je 0x45d9a6 */ if (fZ) goto L_0045d9a6;
L_0045d959:; BB(0x0045d959);
    /* 0045d959: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045d95e: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d962: je 0x45d9a6 */ if (fZ) goto L_0045d9a6;
L_0045d964:; BB(0x0045d964);
    /* 0045d964: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045d96a: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d96e: je 0x45d9a6 */ if (fZ) goto L_0045d9a6;
L_0045d970:; BB(0x0045d970);
    /* 0045d970: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045d976: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0045d979: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x45d97eu); f_005f54a0();
    /* 0045d97e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045d981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d983: jne 0x45d99a */ if (!fZ) goto L_0045d99a;
L_0045d985:; BB(0x0045d985);
    /* 0045d985: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045d98b: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0045d98e: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x45d993u); f_005f54a0();
    /* 0045d993: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045d996: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d998: je 0x45d9a6 */ if (fZ) goto L_0045d9a6;
L_0045d99a:; BB(0x0045d99a);
    /* 0045d99a: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045d99f: mov byte ptr [eax + 0x116], 1 */ W8((u32)(r_eax+0x116u), 0x1u);
L_0045d9a6:; BB(0x0045d9a6);
    /* 0045d9a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d9a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d9a9: ret 4 */ FN_RET(0x0045d7b0); r_esp += 8; return;
}

void f_0045d9b0(void) /* PaiGowRoom::vfunc75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d9b0);
    /* 0045d9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d9b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d9b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045d9b9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045d9bc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d9c1u); f_0063aac0();
    /* 0045d9c1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045d9c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045d9c6: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9ca: je 0x45d9e8 */ if (fZ) goto L_0045d9e8;
L_0045d9cc:; BB(0x0045d9cc);
    /* 0045d9cc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045d9cf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d9d4u); f_0063aac0();
    /* 0045d9d4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045d9d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045d9d9: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9dd: je 0x45d9e8 */ if (fZ) goto L_0045d9e8;
L_0045d9df:; BB(0x0045d9df);
    /* 0045d9df: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0045d9e6: jmp 0x45d9ef */ goto L_0045d9ef;
L_0045d9e8:; BB(0x0045d9e8);
    /* 0045d9e8: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0045d9ef:; BB(0x0045d9ef);
    /* 0045d9ef: movzx edx, byte ptr [ebp - 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 0045d9f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9f5: je 0x45da38 */ if (fZ) goto L_0045da38;
L_0045d9f7:; BB(0x0045d9f7);
    /* 0045d9f7: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045d9fc: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0045da02: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045da05: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045da08: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045da0b: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045da0e: jne 0x45da38 */ if (!fZ) goto L_0045da38;
L_0045da10:; BB(0x0045da10);
    /* 0045da10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045da12: push 0x6b9ed8 */ { u32 v = 0x6b9ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045da17: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45da1cu); f_00630f40();
    /* 0045da1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045da1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045da20: push 0x6b9eb4 */ { u32 v = 0x6b9eb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045da25: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45da2au); f_00630f40();
    /* 0045da2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045da2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045da2e: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x45da33u); f_0062ff10();
    /* 0045da33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045da36: jmp 0x45da48 */ goto L_0045da48;
L_0045da38:; BB(0x0045da38);
    /* 0045da38: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045da3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da3c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045da3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da40: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045da43: call 0x5d9f70 */ r_esp -= 4; W32(r_esp, 0x45da48u); f_005d9f70();
L_0045da48:; BB(0x0045da48);
    /* 0045da48: mov esp, ebp */ r_esp = r_ebp;
    /* 0045da4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045da4b: ret 8 */ FN_RET(0x0045d9b0); r_esp += 12; return;
}

void f_0045da50(void) /* PaiGowRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045da50);
    /* 0045da50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045da51: mov ebp, esp */ r_ebp = r_esp;
    /* 0045da53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045da57: cmp dword ptr [0x790738], 0 */ {  u32 a = R32((u32)(0x790738u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045da5e: jne 0x45da64 */ if (!fZ) goto L_0045da64;
L_0045da60:; BB(0x0045da60);
    /* 0045da60: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045da62: jmp 0x45da6f */ goto L_0045da6f;
L_0045da64:; BB(0x0045da64);
    /* 0045da64: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045da6a: call 0x4601b0 */ r_esp -= 4; W32(r_esp, 0x45da6fu); f_004601b0();
L_0045da6f:; BB(0x0045da6f);
    /* 0045da6f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045da71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045da72: ret  */ FN_RET(0x0045da50); r_esp += 4; return;
}

void f_0045da80(void) /* PaiGowRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045da80);
    /* 0045da80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045da81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045da83: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045da86: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045da89: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045da8c: cmp dword ptr [eax + 0x80], 1 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045da93: jne 0x45db6f */ if (!fZ) goto L_0045db6f;
L_0045da99:; BB(0x0045da99);
    /* 0045da99: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045da9f: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 0045daa5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0045daa8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045daab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045daac: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045dab2: call 0x4603a0 */ r_esp -= 4; W32(r_esp, 0x45dab7u); f_004603a0();
    /* 0045dab7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045daba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dabc: je 0x45db38 */ if (fZ) goto L_0045db38;
L_0045dabe:; BB(0x0045dabe);
    /* 0045dabe: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045dac4: call 0x4603f0 */ r_esp -= 4; W32(r_esp, 0x45dac9u); f_004603f0();
    /* 0045dac9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045dacc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045dacf: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 0045dad6: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045dadb: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045dae1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045dae4: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045daea: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045daed: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045daf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045daf3: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045daf6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045daf9: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0045dafd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0045db02: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045db05: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0045db08: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0045db0c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045db0f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045db12: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045db16: jl 0x45db36 */ if ((fS!=fO)) goto L_0045db36;
L_0045db18:; BB(0x0045db18);
    /* 0045db18: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045db1e: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 0045db24: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0045db27: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045db2c: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045db2f: mov byte ptr [eax + 0xf9], 1 */ W8((u32)(r_eax+0xf9u), 0x1u);
L_0045db36:; BB(0x0045db36);
    /* 0045db36: jmp 0x45db50 */ goto L_0045db50;
L_0045db38:; BB(0x0045db38);
    /* 0045db38: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045db3e: call 0x4603f0 */ r_esp -= 4; W32(r_esp, 0x45db43u); f_004603f0();
    /* 0045db43: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045db46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045db49: mov byte ptr [ecx + 0x4a1], 1 */ W8((u32)(r_ecx+0x4a1u), 0x1u);
L_0045db50:; BB(0x0045db50);
    /* 0045db50: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045db53: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x45db58u); f_005db890();
    /* 0045db58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045db5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045db5c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045db5f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045db62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045db65: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045db68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045db6a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045db6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45db6fu); call_ind(t); }
L_0045db6f:; BB(0x0045db6f);
    /* 0045db6f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045db71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045db72: ret  */ FN_RET(0x0045da80); r_esp += 4; return;
}

void f_0045db80(void) /* PaiGowRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045db80);
    /* 0045db80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045db81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045db83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045db84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045db87: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0045db8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db8d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0045db90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045db91: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045db97: call 0x45f8d0 */ r_esp -= 4; W32(r_esp, 0x45db9cu); f_0045f8d0();
    /* 0045db9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045db9f: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x45dba4u); f_005db9b0();
    /* 0045dba4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dba6: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045dbac: call 0x45b260 */ r_esp -= 4; W32(r_esp, 0x45dbb1u); f_0045b260();
    /* 0045dbb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dbb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dbb4: ret 4 */ FN_RET(0x0045db80); r_esp += 8; return;
}

void f_0045dbc0(void) /* PaiGowRoom::vfunc161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dbc0);
    /* 0045dbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dbc3: sub esp, 0x134 */ {  u32 a = r_esp; u32 b = 0x134u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dbc9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045dbce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045dbd0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045dbd3: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 0045dbd9: mov byte ptr [ebp - 0x125], 0 */ W8((u32)(r_ebp+0xfffffedbu), 0x0u);
    /* 0045dbe0: cmp dword ptr [ebp + 0x18], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045dbe7: jl 0x45dbf5 */ if ((fS!=fO)) goto L_0045dbf5;
L_0045dbe9:; BB(0x0045dbe9);
    /* 0045dbe9: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dbeb: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045dbee: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x45dbf3u); f_005ecc60();
    /* 0045dbf3: jmp 0x45dbff */ goto L_0045dbff;
L_0045dbf5:; BB(0x0045dbf5);
    /* 0045dbf5: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dbf7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045dbfa: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x45dbffu); f_005ecc60();
L_0045dbff:; BB(0x0045dbff);
    /* 0045dbff: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0045dc02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc03: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0045dc06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc07: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45dc0cu); f_0064c8a0();
    /* 0045dc0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dc0f: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 0045dc15: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0045dc1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc21: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 0045dc27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc28: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0045dc2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc2f: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0045dc35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc36: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x45dc3bu); f_0064c8d0();
    /* 0045dc3b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dc3e: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 0045dc44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc45: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc4a: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0045dc50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc51: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x45dc57u); call_ind(t); }
    /* 0045dc57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dc5a: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0045dc60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc61: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045dc64: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045dc66: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045dc69: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0045dc6f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45dc71u); call_ind(t); }
    /* 0045dc71: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045dc73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dc76: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045dc78: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45dc7du); f_00686d72();
    /* 0045dc7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dc7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dc80: ret 0x1c */ FN_RET(0x0045dbc0); r_esp += 32; return;
}

void f_0045dc90(void) /* PaiGowRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dc90);
    /* 0045dc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dc93: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dc96: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045dc99: mov dword ptr [ebp - 0x14], 0x1c5 */ W32((u32)(r_ebp+0xffffffecu), 0x1c5u);
    /* 0045dca0: mov dword ptr [ebp - 0x10], 0x4f */ W32((u32)(r_ebp+0xfffffff0u), 0x4fu);
    /* 0045dca7: mov dword ptr [ebp - 0xc], 0x210 */ W32((u32)(r_ebp+0xfffffff4u), 0x210u);
    /* 0045dcae: mov dword ptr [ebp - 8], 0x15 */ W32((u32)(r_ebp+0xfffffff8u), 0x15u);
    /* 0045dcb5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045dcbc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dcbf: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0045dcc3: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dcc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dcc6: ret 4 */ FN_RET(0x0045dc90); r_esp += 8; return;
}

void f_0045dcd0(void) /* PaiGowRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dcd0);
    /* 0045dcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dcd3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dcd6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045dcd9: mov dword ptr [ebp - 0x14], 0x126 */ W32((u32)(r_ebp+0xffffffecu), 0x126u);
    /* 0045dce0: mov dword ptr [ebp - 0x10], 0x12c */ W32((u32)(r_ebp+0xfffffff0u), 0x12cu);
    /* 0045dce7: mov dword ptr [ebp - 0xc], 0x9a */ W32((u32)(r_ebp+0xfffffff4u), 0x9au);
    /* 0045dcee: mov dword ptr [ebp - 8], 0x9a */ W32((u32)(r_ebp+0xfffffff8u), 0x9au);
    /* 0045dcf5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045dcfc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dcff: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0045dd03: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dd05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dd06: ret 4 */ FN_RET(0x0045dcd0); r_esp += 8; return;
}

void f_0045dd10(void) /* PaiGowRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dd10);
    /* 0045dd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd11: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dd13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045dd17: cmp dword ptr [0x790738], 0 */ {  u32 a = R32((u32)(0x790738u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd1e: je 0x45dd2d */ if (fZ) goto L_0045dd2d;
L_0045dd20:; BB(0x0045dd20);
    /* 0045dd20: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045dd26: call 0x4603f0 */ r_esp -= 4; W32(r_esp, 0x45dd2bu); f_004603f0();
    /* 0045dd2b: jmp 0x45dd2f */ goto L_0045dd2f;
L_0045dd2d:; BB(0x0045dd2d);
    /* 0045dd2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045dd2f:; BB(0x0045dd2f);
    /* 0045dd2f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dd31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dd32: ret  */ FN_RET(0x0045dd10); r_esp += 4; return;
}

void f_0045dd40(void) /* PaiGowRoom::vfunc163 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dd40);
    /* 0045dd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dd43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dd46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045dd49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045dd4c: cmp dword ptr [eax + 0x80], 1 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd53: je 0x45dd72 */ if (fZ) goto L_0045dd72;
L_0045dd55:; BB(0x0045dd55);
    /* 0045dd55: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045dd58: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045dd5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045dd5d: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 0045dd63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45dd65u); call_ind(t); }
    /* 0045dd65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045dd68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dd6b: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
L_0045dd72:; BB(0x0045dd72);
    /* 0045dd72: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045dd78: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45dd7du); f_0045b300();
    /* 0045dd7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dd7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dd80: ret  */ FN_RET(0x0045dd40); r_esp += 4; return;
}

void f_0045dd90(void) /* PaiGowRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dd90);
    /* 0045dd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd91: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dd93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dd96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045dd99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045dda0: jmp 0x45ddab */ goto L_0045ddab;
L_0045dda2:; BB(0x0045dda2);
    /* 0045dda2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045dda5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045dda8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045ddab:; BB(0x0045ddab);
    /* 0045ddab: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ddaf: jge 0x45ddd7 */ if ((fS==fO)) goto L_0045ddd7;
L_0045ddb1:; BB(0x0045ddb1);
    /* 0045ddb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ddb4: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045ddba: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0045ddbe: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ddc1: je 0x45ddd5 */ if (fZ) goto L_0045ddd5;
L_0045ddc3:; BB(0x0045ddc3);
    /* 0045ddc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ddc6: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045ddcc: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0045ddd0: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x45ddd5u); f_005cd330();
L_0045ddd5:; BB(0x0045ddd5);
    /* 0045ddd5: jmp 0x45dda2 */ goto L_0045dda2;
L_0045ddd7:; BB(0x0045ddd7);
    /* 0045ddd7: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ddd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ddda: ret 4 */ FN_RET(0x0045dd90); r_esp += 8; return;
}

void f_0045dde0(void) /* PaiGowRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dde0);
    /* 0045dde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dde3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045dde6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045dde9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ddec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dded: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45ddf2u); f_005dcb00();
    /* 0045ddf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ddf5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045ddf8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ddfb: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0045de01: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 0045de04: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0045de08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045de0a: je 0x45df15 */ if (fZ) goto L_0045df15;
L_0045de10:; BB(0x0045de10);
    /* 0045de10: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045de16: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045de19: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045de1e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045de21: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045de23: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0045de29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45de2bu); call_ind(t); }
    /* 0045de2b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045de2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045de30: je 0x45ded1 */ if (fZ) goto L_0045ded1;
L_0045de36:; BB(0x0045de36);
    /* 0045de36: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045de3c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045de3f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045de42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045de45: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045de48: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045de4b: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0045de4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045de51: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045de54: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0045de57: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0045de5b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045de5e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045de61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045de64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045de65: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045de68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045de69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045de6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045de6d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45de72u); f_005dcb00();
    /* 0045de72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045de75: mov ecx, eax */ r_ecx = r_eax;
    /* 0045de77: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x45de7cu); f_005d5cf0();
    /* 0045de7c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045de7f: cmp dword ptr [ecx + 0x80], 1 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045de86: jne 0x45ded1 */ if (!fZ) goto L_0045ded1;
L_0045de88:; BB(0x0045de88);
    /* 0045de88: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045de8e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045de91: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045de94: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045de97: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045de9a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045de9d: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0045dea1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0045dea6: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045dea9: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0045deac: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0045deb0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0045deb3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045deb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045deb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045deba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045debd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045debe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045dec1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dec2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45dec7u); f_005dcb00();
    /* 0045dec7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045deca: mov ecx, eax */ r_ecx = r_eax;
    /* 0045decc: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x45ded1u); f_005d5cf0();
L_0045ded1:; BB(0x0045ded1);
    /* 0045ded1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ded3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ded6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ded7: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045dedd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045dee0: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045dee6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045dee9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045deeb: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0045def1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45def3u); call_ind(t); }
    /* 0045def3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045def5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045def8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045def9: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045deff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045df02: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045df08: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045df0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045df0d: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0045df13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45df15u); call_ind(t); }
L_0045df15:; BB(0x0045df15);
    /* 0045df15: mov esp, ebp */ r_esp = r_ebp;
    /* 0045df17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045df18: ret 4 */ FN_RET(0x0045dde0); r_esp += 8; return;
}

void f_0045df20(void) /* PaiGowRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045df20);
    /* 0045df20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045df21: mov ebp, esp */ r_ebp = r_esp;
    /* 0045df23: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045df26: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0045df29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045df2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045df2d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45df32u); f_0064c8a0();
    /* 0045df32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045df35: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045df38: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0045df3b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045df3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045df41: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045df43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045df46: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0045df49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045df4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045df4d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45df52u); f_005dcb00();
    /* 0045df52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045df55: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045df58: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045df5b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 0045df61: mov byte ptr [ebp - 0x25], dl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_edx);
    /* 0045df64: movzx eax, byte ptr [ebp - 0x25] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 0045df68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045df6a: je 0x45df6e */ if (fZ) goto L_0045df6e;
L_0045df6c:; BB(0x0045df6c);
    /* 0045df6c: jmp 0x45dfe7 */ goto L_0045dfe7;
L_0045df6e:; BB(0x0045df6e);
    /* 0045df6e: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045df74: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045df77: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0045df7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045df7d: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045df80: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045df83: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0045df87: mov eax, 1 */ r_eax = 0x1u;
    /* 0045df8c: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045df8f: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0045df92: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0045df96: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045df99: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0045df9c: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045dfa1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045dfa4: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0045dfa7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045dfaa: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045dfad: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045dfb0: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0045dfb4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045dfb6: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045dfb9: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 0045dfbc: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 0045dfc0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045dfc3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045dfc6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045dfc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dfca: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045dfcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dfce: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0045dfd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dfd2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045dfd5: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45dfdau); f_0064c5c0();
    /* 0045dfda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045dfdc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0045dfdf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045dfe2: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0045dfe4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0045dfe7:; BB(0x0045dfe7);
    /* 0045dfe7: mov esp, ebp */ r_esp = r_ebp;
    /* 0045dfe9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dfea: ret 8 */ FN_RET(0x0045df20); r_esp += 12; return;
}

void f_0045dff0(void) /* PaiGowRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045dff0);
    /* 0045dff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dff1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045dff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045dff7: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045dffd: call 0x45f870 */ r_esp -= 4; W32(r_esp, 0x45e002u); f_0045f870();
    /* 0045e002: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e005: ret  */ FN_RET(0x0045dff0); r_esp += 4; return;
}

void f_0045e010(void) /* PaiGowRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e010);
    /* 0045e010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e011: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e017: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e019: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e01b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e01e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045e021: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e024: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045e027: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045e029: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e02b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045e02e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e030u); call_ind(t); }
    /* 0045e030: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e032: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e033: ret  */ FN_RET(0x0045e010); r_esp += 4; return;
}

void f_0045e040(void) /* PaiGowRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e040);
    /* 0045e040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e041: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e043: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e046: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e047: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e048: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045e04b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e04e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e04f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45e054u); f_005dcb00();
    /* 0045e054: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e057: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 0045e05d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e05e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 0045e064: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e065: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0045e068: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e069: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e06b: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e071: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45e076u); f_0045f830();
    /* 0045e076: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e079: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e07b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45e080u); f_0064c5c0();
    /* 0045e080: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0045e082: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0045e085: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e087: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e08d: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45e092u); f_0045f830();
    /* 0045e092: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 0045e095: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 0045e098: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045e09b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e09c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45e0a1u); f_005dcb00();
    /* 0045e0a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e0a4: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e0a6: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x45e0abu); f_0063b0a0();
    /* 0045e0ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045e0ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e0ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e0af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e0b0: ret 4 */ FN_RET(0x0045e040); r_esp += 8; return;
}

void f_0045e0c0(void) /* PaiGowRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e0c0);
    /* 0045e0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e0c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e0c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0c8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045e0cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e0ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0cf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45e0d4u); f_005dcb00();
    /* 0045e0d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e0d7: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0045e0dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0de: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 0045e0e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0e5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0045e0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045e0ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e0ed: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e0f3: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45e0f8u); f_0045f830();
    /* 0045e0f8: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e0fb: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e0fd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45e102u); f_0064c5c0();
    /* 0045e102: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0045e104: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0045e107: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045e10a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e10b: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e111: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45e116u); f_0045f830();
    /* 0045e116: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0045e119: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0045e11c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e11f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e120: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45e125u); f_005dcb00();
    /* 0045e125: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e128: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e12a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x45e12fu); f_0063b0a0();
    /* 0045e12f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045e130: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e131: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e134: ret 4 */ FN_RET(0x0045e0c0); r_esp += 8; return;
}

void f_0045e140(void) /* PaiGowRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e140);
    /* 0045e140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e141: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e143: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e146: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045e149: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045e14e: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045e154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e157: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e159: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045e15f: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x45e164u); f_005df700();
    /* 0045e164: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045e167: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e169: je 0x45e17a */ if (fZ) goto L_0045e17a;
L_0045e16b:; BB(0x0045e16b);
    /* 0045e16b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e16e: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x45e173u); f_005da7b0();
    /* 0045e173: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045e176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e178: je 0x45e17f */ if (fZ) goto L_0045e17f;
L_0045e17a:; BB(0x0045e17a);
    /* 0045e17a: jmp 0x45e21d */ goto L_0045e21d;
L_0045e17f:; BB(0x0045e17f);
    /* 0045e17f: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0045e182: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e183: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0045e186: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e187: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e18b: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045e191: call 0x452a40 */ r_esp -= 4; W32(r_esp, 0x45e196u); f_00452a40();
    /* 0045e196: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0045e19a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e19b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e19e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e19f: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e1a5: call 0x461360 */ r_esp -= 4; W32(r_esp, 0x45e1aau); f_00461360();
    /* 0045e1aa: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e1b0: mov dword ptr [ecx + 0x11c], eax */ W32((u32)(r_ecx+0x11cu), r_eax);
    /* 0045e1b6: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0045e1ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e1bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e1be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e1bf: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e1c5: call 0x461360 */ r_esp -= 4; W32(r_esp, 0x45e1cau); f_00461360();
    /* 0045e1ca: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e1d0: mov dword ptr [ecx + 0x120], eax */ W32((u32)(r_ecx+0x120u), r_eax);
    /* 0045e1d6: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045e1dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e1df: mov dword ptr [edx + 0x118], eax */ W32((u32)(r_edx+0x118u), r_eax);
    /* 0045e1e5: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e1eb: mov edx, dword ptr [ecx + 0x11c] */ r_edx = R32((u32)(r_ecx+0x11cu));
    /* 0045e1f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e1f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e1f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e1f6: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045e1fc: call 0x458be0 */ r_esp -= 4; W32(r_esp, 0x45e201u); f_00458be0();
    /* 0045e201: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e207: mov edx, dword ptr [ecx + 0x120] */ r_edx = R32((u32)(r_ecx+0x120u));
    /* 0045e20d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e20e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e212: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045e218: call 0x458be0 */ r_esp -= 4; W32(r_esp, 0x45e21du); f_00458be0();
L_0045e21d:; BB(0x0045e21d);
    /* 0045e21d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e21f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e220: ret 4 */ FN_RET(0x0045e140); r_esp += 8; return;
}

void f_0045e230(void) /* PaiGowRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e230);
    /* 0045e230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e231: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e237: mov eax, 0x416 */ r_eax = 0x416u;
    /* 0045e23c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e23e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e23f: ret 4 */ FN_RET(0x0045e230); r_esp += 8; return;
}

void f_0045e250(void) /* PaiGowRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e250);
    /* 0045e250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e251: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e257: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045e25d: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x45e262u); f_00636e70();
    /* 0045e262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e264: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e267: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045e26a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x45e26fu); f_005fc420();
    /* 0045e26f: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045e275: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45e27au); f_004587e0();
    /* 0045e27a: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e280: call 0x45ffe0 */ r_esp -= 4; W32(r_esp, 0x45e285u); f_0045ffe0();
    /* 0045e285: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045e28b: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45e290u); f_0045b300();
    /* 0045e290: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e293: ret 8 */ FN_RET(0x0045e250); r_esp += 12; return;
}

void f_0045e2a0(void) /* PaiGowRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e2a0);
    /* 0045e2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e2a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2a5: push 0x69f2e3 */ { u32 v = 0x69f2e3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045e2b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2b1: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e2b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045e2b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e2bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e2bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045e2bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045e2c5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0045e2c8: mov dword ptr [ebp - 0x28], 0x6ba030 */ W32((u32)(r_ebp+0xffffffd8u), 0x6ba030u);
    /* 0045e2cf: mov dword ptr [ebp - 0x24], 0x6ba014 */ W32((u32)(r_ebp+0xffffffdcu), 0x6ba014u);
    /* 0045e2d6: mov dword ptr [ebp - 0x20], 0x6b9ff8 */ W32((u32)(r_ebp+0xffffffe0u), 0x6b9ff8u);
    /* 0045e2dd: mov dword ptr [ebp - 0x1c], 0x6b9fdc */ W32((u32)(r_ebp+0xffffffe4u), 0x6b9fdcu);
    /* 0045e2e4: mov dword ptr [ebp - 0x18], 0x6b9fc0 */ W32((u32)(r_ebp+0xffffffe8u), 0x6b9fc0u);
    /* 0045e2eb: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0045e2f2: jmp 0x45e2fd */ goto L_0045e2fd;
L_0045e2f4:; BB(0x0045e2f4);
    /* 0045e2f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e2f7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e2fa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0045e2fd:; BB(0x0045e2fd);
    /* 0045e2fd: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e301: jge 0x45e34f */ if ((fS==fO)) goto L_0045e34f;
L_0045e303:; BB(0x0045e303);
    /* 0045e303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e305: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e307: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e309: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e30b: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e30d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e30f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e312: mov edx, dword ptr [ebp + ecx*4 - 0x28] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u));
    /* 0045e316: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e317: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45e31cu); f_00630f40();
    /* 0045e31c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e31f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e320: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e322: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e325: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045e328: add eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e32b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e32c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e32e: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e333: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045e336: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045e339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e33a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e33c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045e33f: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x45e344u); f_005f9ef0();
    /* 0045e344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e345: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045e348: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x45e34du); f_005ff5a0();
    /* 0045e34d: jmp 0x45e2f4 */ goto L_0045e2f4;
L_0045e34f:; BB(0x0045e34f);
    /* 0045e34f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e351: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e356: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e35b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e360: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e365: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e367: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e369: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e36b: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e370: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e375: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e377: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e37c: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e37e: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e383: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45e388u); f_00630f40();
    /* 0045e388: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e38b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e38c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0045e38e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e390: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045e393: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x45e398u); f_005fa790();
    /* 0045e398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e399: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045e39c: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x45e3a1u); f_005ff5a0();
    /* 0045e3a1: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45e3abu); f_00686d82();
    /* 0045e3ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045e3ae: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045e3b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045e3b8: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e3bc: je 0x45e3d7 */ if (fZ) goto L_0045e3d7;
L_0045e3be:; BB(0x0045e3be);
    /* 0045e3be: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045e3c1: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x45e3c6u); f_005ec5a0();
    /* 0045e3c6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045e3c9: mov dword ptr [edx], 0x6b9efc */ W32((u32)(r_edx), 0x6b9efcu);
    /* 0045e3cf: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045e3d2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045e3d5: jmp 0x45e3de */ goto L_0045e3de;
L_0045e3d7:; BB(0x0045e3d7);
    /* 0045e3d7: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0045e3de:; BB(0x0045e3de);
    /* 0045e3de: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045e3e1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045e3e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045e3eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3ed: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3ef: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3f1: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3f6: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3fb: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e3fd: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e402: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e404: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e409: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e40b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045e40e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e40f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045e412: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x45e417u); f_005fa5b0();
    /* 0045e417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e418: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045e41b: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x45e420u); f_005ff5a0();
    /* 0045e420: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e422: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045e428: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x45e42du); f_006375d0();
    /* 0045e42d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045e430: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e436: call 0x45f940 */ r_esp -= 4; W32(r_esp, 0x45e43bu); f_0045f940();
    /* 0045e43b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045e43e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e440: je 0x45e462 */ if (fZ) goto L_0045e462;
L_0045e442:; BB(0x0045e442);
    /* 0045e442: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e444: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e44a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e44fu); f_005fb350();
    /* 0045e44f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045e452: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045e455: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045e457: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045e45a: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0045e460: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e462u); call_ind(t); }
L_0045e462:; BB(0x0045e462);
    /* 0045e462: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e465: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 0045e469: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e46b: je 0x45e48d */ if (fZ) goto L_0045e48d;
L_0045e46d:; BB(0x0045e46d);
    /* 0045e46d: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e46f: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e475: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e47au); f_005fb350();
    /* 0045e47a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0045e47d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045e480: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e482: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045e485: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0045e48b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e48du); call_ind(t); }
L_0045e48d:; BB(0x0045e48d);
    /* 0045e48d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e490: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 0045e494: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e496: je 0x45e4b8 */ if (fZ) goto L_0045e4b8;
L_0045e498:; BB(0x0045e498);
    /* 0045e498: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e49a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e4a0: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e4a5u); f_005fb350();
    /* 0045e4a5: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0045e4a8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045e4ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e4ad: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045e4b0: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0045e4b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e4b8u); call_ind(t); }
L_0045e4b8:; BB(0x0045e4b8);
    /* 0045e4b8: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045e4be: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e4c5: je 0x45e51b */ if (fZ) goto L_0045e51b;
L_0045e4c7:; BB(0x0045e4c7);
    /* 0045e4c7: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045e4cd: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 0045e4d3: call 0x45b0f0 */ r_esp -= 4; W32(r_esp, 0x45e4d8u); f_0045b0f0();
    /* 0045e4d8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045e4db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e4dd: je 0x45e4fe */ if (fZ) goto L_0045e4fe;
L_0045e4df:; BB(0x0045e4df);
    /* 0045e4df: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e4e1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045e4e4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e4e9u); f_005fb350();
    /* 0045e4e9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0045e4ec: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045e4ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045e4f1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045e4f4: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0045e4fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e4fcu); call_ind(t); }
    /* 0045e4fc: jmp 0x45e51b */ goto L_0045e51b;
L_0045e4fe:; BB(0x0045e4fe);
    /* 0045e4fe: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e500: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045e503: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e508u); f_005fb350();
    /* 0045e508: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0045e50b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045e50e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045e510: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045e513: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0045e519: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e51bu); call_ind(t); }
L_0045e51b:; BB(0x0045e51b);
    /* 0045e51b: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e521: call 0x45f990 */ r_esp -= 4; W32(r_esp, 0x45e526u); f_0045f990();
    /* 0045e526: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045e529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e52b: je 0x45e54d */ if (fZ) goto L_0045e54d;
L_0045e52d:; BB(0x0045e52d);
    /* 0045e52d: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e52f: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e535: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e53au); f_005fb350();
    /* 0045e53a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0045e53d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045e540: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045e542: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045e545: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0045e54b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45e54du); call_ind(t); }
L_0045e54d:; BB(0x0045e54d);
    /* 0045e54d: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045e553: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x45e558u); f_005da830();
    /* 0045e558: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045e55b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e55d: jne 0x45e57a */ if (!fZ) goto L_0045e57a;
L_0045e55f:; BB(0x0045e55f);
    /* 0045e55f: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045e565: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045e567: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045e56d: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0045e573: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e575u); call_ind(t); }
    /* 0045e575: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e578: jne 0x45e59a */ if (!fZ) goto L_0045e59a;
L_0045e57a:; BB(0x0045e57a);
    /* 0045e57a: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e57c: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e582: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e587u); f_005fb350();
    /* 0045e587: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0045e58a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045e58d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045e58f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045e592: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0045e598: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e59au); call_ind(t); }
L_0045e59a:; BB(0x0045e59a);
    /* 0045e59a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045e59d: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0045e5a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e5a2: je 0x45e5c4 */ if (fZ) goto L_0045e5c4;
L_0045e5a4:; BB(0x0045e5a4);
    /* 0045e5a4: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5a6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e5ac: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e5b1u); f_005fb350();
    /* 0045e5b1: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0045e5b4: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045e5b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e5b9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045e5bc: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0045e5c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e5c4u); call_ind(t); }
L_0045e5c4:; BB(0x0045e5c4);
    /* 0045e5c4: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045e5ca: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x45e5cfu); f_005da830();
    /* 0045e5cf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045e5d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e5d4: je 0x45e616 */ if (fZ) goto L_0045e616;
L_0045e5d6:; BB(0x0045e5d6);
    /* 0045e5d6: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5d8: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e5de: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e5e3u); f_005fb350();
    /* 0045e5e3: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0045e5e6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045e5e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045e5eb: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045e5ee: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0045e5f4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45e5f6u); call_ind(t); }
    /* 0045e5f6: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e5f8: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e5fe: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e603u); f_005fb350();
    /* 0045e603: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0045e606: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0045e609: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e60b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0045e60e: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0045e614: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e616u); call_ind(t); }
L_0045e616:; BB(0x0045e616);
    /* 0045e616: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045e619: cmp dword ptr [ecx + 0x80], 1 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e620: jne 0x45e67f */ if (!fZ) goto L_0045e67f;
L_0045e622:; BB(0x0045e622);
    /* 0045e622: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e624: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e62a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e62fu); f_005fb350();
    /* 0045e62f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0045e632: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045e635: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045e637: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045e63a: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 0045e640: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45e642u); call_ind(t); }
    /* 0045e642: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e644: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e64a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e64fu); f_005fb350();
    /* 0045e64f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0045e652: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0045e655: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e657: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0045e65a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0045e660: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e662u); call_ind(t); }
    /* 0045e662: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e664: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e66a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e66fu); f_005fb350();
    /* 0045e66f: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0045e672: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0045e675: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045e677: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0045e67a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0045e67d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e67fu); call_ind(t); }
L_0045e67f:; BB(0x0045e67f);
    /* 0045e67f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045e682: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 0045e686: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045e689: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045e690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e691: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e694: ret 0x10 */ FN_RET(0x0045e2a0); r_esp += 20; return;
}

void f_0045e6a0(void) /* PaiGowRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e6a0);
    /* 0045e6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e6a7: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6a9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e6af: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e6b4u); f_005fb350();
    /* 0045e6b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e6b6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45e6bbu); f_00600230();
    /* 0045e6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6bc: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e6c2: call 0x45f920 */ r_esp -= 4; W32(r_esp, 0x45e6c7u); f_0045f920();
    /* 0045e6c7: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6c9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e6cf: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e6d4u); f_005fb350();
    /* 0045e6d4: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e6d6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45e6dbu); f_00600230();
    /* 0045e6db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6dc: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e6e2: call 0x45f8d0 */ r_esp -= 4; W32(r_esp, 0x45e6e7u); f_0045f8d0();
    /* 0045e6e7: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045e6ec: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e6f3: je 0x45e71f */ if (fZ) goto L_0045e71f;
L_0045e6f5:; BB(0x0045e6f5);
    /* 0045e6f5: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e6f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045e6fa: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e6ffu); f_005fb350();
    /* 0045e6ff: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e701: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45e706u); f_00600230();
    /* 0045e706: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045e709: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e70b: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0045e70e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e70f: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045e714: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0045e71a: call 0x45b0a0 */ r_esp -= 4; W32(r_esp, 0x45e71fu); f_0045b0a0();
L_0045e71f:; BB(0x0045e71f);
    /* 0045e71f: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e721: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e727: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e72cu); f_005fb350();
    /* 0045e72c: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e72e: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45e733u); f_00600230();
    /* 0045e733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e734: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e73a: call 0x45f890 */ r_esp -= 4; W32(r_esp, 0x45e73fu); f_0045f890();
    /* 0045e73f: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045e745: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x45e74au); f_005da830();
    /* 0045e74a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045e74d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e74f: je 0x45e761 */ if (fZ) goto L_0045e761;
L_0045e751:; BB(0x0045e751);
    /* 0045e751: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045e757: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45e75cu); f_004587e0();
    /* 0045e75c: jmp 0x45e817 */ goto L_0045e817;
L_0045e761:; BB(0x0045e761);
    /* 0045e761: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e763: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e769: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e76eu); f_005fb350();
    /* 0045e76e: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e770: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45e775u); f_00600230();
    /* 0045e775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e776: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e77c: call 0x45f970 */ r_esp -= 4; W32(r_esp, 0x45e781u); f_0045f970();
    /* 0045e781: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045e787: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x45e78cu); f_005da830();
    /* 0045e78c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045e78f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e791: jne 0x45e7d9 */ if (!fZ) goto L_0045e7d9;
L_0045e793:; BB(0x0045e793);
    /* 0045e793: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0045e798: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045e79a: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045e7a0: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0045e7a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e7a8u); call_ind(t); }
    /* 0045e7a8: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e7ab: je 0x45e7d9 */ if (fZ) goto L_0045e7d9;
L_0045e7ad:; BB(0x0045e7ad);
    /* 0045e7ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e7b0: cmp dword ptr [ecx + 0x80], 1 */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e7b7: je 0x45e7d9 */ if (fZ) goto L_0045e7d9;
L_0045e7b9:; BB(0x0045e7b9);
    /* 0045e7b9: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e7bb: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e7c1: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e7c6u); f_005fb350();
    /* 0045e7c6: mov ecx, eax */ r_ecx = r_eax;
    /* 0045e7c8: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45e7cdu); f_00600230();
    /* 0045e7cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e7ce: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e7d4: call 0x45f9f0 */ r_esp -= 4; W32(r_esp, 0x45e7d9u); f_0045f9f0();
L_0045e7d9:; BB(0x0045e7d9);
    /* 0045e7d9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045e7df: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x45e7e4u); f_00637610();
    /* 0045e7e4: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045e7ea: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45e7efu); f_004587e0();
    /* 0045e7ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e7f2: movzx eax, byte ptr [edx + 0x7c] */ r_eax = (u32)R8((u32)(r_edx+0x7cu));
    /* 0045e7f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e7f8: je 0x45e817 */ if (fZ) goto L_0045e817;
L_0045e7fa:; BB(0x0045e7fa);
    /* 0045e7fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e7fd: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 0045e801: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045e807: call 0x45ffe0 */ r_esp -= 4; W32(r_esp, 0x45e80cu); f_0045ffe0();
    /* 0045e80c: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045e812: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45e817u); f_0045b300();
L_0045e817:; BB(0x0045e817);
    /* 0045e817: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e819: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e81a: ret 8 */ FN_RET(0x0045e6a0); r_esp += 12; return;
}

void f_0045e820(void) /* PaiGowRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e820);
    /* 0045e820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e821: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e823: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e826: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045e829: mov dword ptr [ebp - 0x28], 0x132 */ W32((u32)(r_ebp+0xffffffd8u), 0x132u);
    /* 0045e830: mov dword ptr [ebp - 0x24], 0xf6 */ W32((u32)(r_ebp+0xffffffdcu), 0xf6u);
    /* 0045e837: mov dword ptr [ebp - 0x20], 0x96 */ W32((u32)(r_ebp+0xffffffe0u), 0x96u);
    /* 0045e83e: mov dword ptr [ebp - 0x1c], 0xf6 */ W32((u32)(r_ebp+0xffffffe4u), 0xf6u);
    /* 0045e845: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 0045e84c: mov dword ptr [ebp - 0x14], 0x4c */ W32((u32)(r_ebp+0xffffffecu), 0x4cu);
    /* 0045e853: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 0045e85a: mov dword ptr [ebp - 0xc], 0x4a */ W32((u32)(r_ebp+0xfffffff4u), 0x4au);
    /* 0045e861: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045e868: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045e86f: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e873: jge 0x45e88d */ if ((fS==fO)) goto L_0045e88d;
L_0045e875:; BB(0x0045e875);
    /* 0045e875: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045e878: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0045e87c: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 0045e880: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e883: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045e885: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0045e888: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e88b: jmp 0x45e8b9 */ goto L_0045e8b9;
L_0045e88d:; BB(0x0045e88d);
    /* 0045e88d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0045e88f: jne 0x45e8a8 */ if (!fZ) goto L_0045e8a8;
L_0045e891:; BB(0x0045e891);
    /* 0045e891: push 0x1e1 */ { u32 v = 0x1e1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e896: push 0x6ba04c */ { u32 v = 0x6ba04cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045e89b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e8a0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x45e8a5u); f_005e9f20();
    /* 0045e8a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045e8a8:; BB(0x0045e8a8);
    /* 0045e8a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e8ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e8ae: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045e8b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e8b3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0045e8b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0045e8b9:; BB(0x0045e8b9);
    /* 0045e8b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e8bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e8bc: ret 8 */ FN_RET(0x0045e820); r_esp += 12; return;
}

void f_0045e900(void) /* PaiGowRoom::vfunc189 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e900);
    /* 0045e900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e901: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e90a: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45e90fu); f_0045e8e0();
    /* 0045e90f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e912: jne 0x45e91d */ if (!fZ) goto L_0045e91d;
L_0045e914:; BB(0x0045e914);
    /* 0045e914: mov eax, 0xa */ r_eax = 0xau;
    /* 0045e919: jmp 0x45e922 */ goto L_0045e922;
L_0045e91d:; BB(0x0045e91d);
    /* 0045e91d: mov eax, 2 */ r_eax = 0x2u;
L_0045e922:; BB(0x0045e922);
    /* 0045e922: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e924: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e925: ret  */ FN_RET(0x0045e900); r_esp += 4; return;
}

