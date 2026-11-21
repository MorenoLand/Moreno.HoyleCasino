#include "protos.h"

void f_005943d0(void) /* FourCardPokerSayHumanLineScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005943d0);
    /* 005943d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005943d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005943d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005943d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005943d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005943d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005943dc: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5943e1u); f_005fc0d0();
    /* 005943e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005943e4: mov dword ptr [eax], 0x6ce448 */ W32((u32)(r_eax), 0x6ce448u);
    /* 005943ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005943ed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005943f0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005943f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005943f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005943f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005943f9: ret 4 */ FN_RET(0x005943d0); r_esp += 8; return;
}

void f_00594400(void) /* FourCardPokerSayHumanLineScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00594400);
    /* 00594400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594401: mov ebp, esp */ r_ebp = r_esp;
    /* 00594403: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00594406: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00594409: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059440f: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x594414u); f_00597d30();
    /* 00594414: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00594417: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059441a: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x59441fu); f_005fc360();
    /* 0059441f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00594422: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594426: je 0x594437 */ if (fZ) goto L_00594437;
L_00594428:; BB(0x00594428);
    /* 00594428: cmp dword ptr [ebp - 0x3c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059442c: je 0x594524 */ if (fZ) goto L_00594524;
L_00594432:; BB(0x00594432);
    /* 00594432: jmp 0x59457c */ goto L_0059457c;
L_00594437:; BB(0x00594437);
    /* 00594437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00594439: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059443c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059443e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00594441: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00594444: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x594446u); call_ind(t); }
    /* 00594446: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0059444d: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594451: je 0x5944f4 */ if (fZ) goto L_005944f4;
L_00594457:; BB(0x00594457);
    /* 00594457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059445a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059445b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594460u); f_005dcb00();
    /* 00594460: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594463: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00594466: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00594469: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59446eu); f_0063aac0();
    /* 0059446e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594470: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00594473: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594477: je 0x594495 */ if (fZ) goto L_00594495;
L_00594479:; BB(0x00594479);
    /* 00594479: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059447c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594481u); f_0063aac0();
    /* 00594481: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00594483: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00594486: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059448a: je 0x594495 */ if (fZ) goto L_00594495;
L_0059448c:; BB(0x0059448c);
    /* 0059448c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00594493: jmp 0x59449c */ goto L_0059449c;
L_00594495:; BB(0x00594495);
    /* 00594495: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_0059449c:; BB(0x0059449c);
    /* 0059449c: movzx ecx, byte ptr [ebp - 0x40] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc0u));
    /* 005944a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005944a2: je 0x5944f4 */ if (fZ) goto L_005944f4;
L_005944a4:; BB(0x005944a4);
    /* 005944a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005944a7: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005944aa: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 005944b1: fldz  */ FPUSH(0.0);
    /* 005944b3: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005944b6: fld1  */ FPUSH(1.0);
    /* 005944b8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005944bb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005944be: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005944c1: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005944c4: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005944c8: je 0x5944db */ if (fZ) goto L_005944db;
L_005944ca:; BB(0x005944ca);
    /* 005944ca: cmp dword ptr [ebp - 0x44], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005944ce: je 0x5944d2 */ if (fZ) goto L_005944d2;
L_005944d0:; BB(0x005944d0);
    /* 005944d0: jmp 0x5944f4 */ goto L_005944f4;
L_005944d2:; BB(0x005944d2);
    /* 005944d2: mov dword ptr [ebp - 0x24], 0x82e */ W32((u32)(r_ebp+0xffffffdcu), 0x82eu);
    /* 005944d9: jmp 0x5944f4 */ goto L_005944f4;
L_005944db:; BB(0x005944db);
    /* 005944db: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005944dd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5944e2u); f_0062fbf0();
    /* 005944e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005944e5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005944e7: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005944e9: and eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005944ec: add eax, 0x803 */ {  u32 a = r_eax; u32 b = 0x803u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005944f1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005944f4:; BB(0x005944f4);
    /* 005944f4: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005944f8: je 0x594513 */ if (fZ) goto L_00594513;
L_005944fa:; BB(0x005944fa);
    /* 005944fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005944fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005944fe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00594501: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00594502: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00594505: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594506: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059450c: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x594511u); f_00639390();
    /* 00594511: jmp 0x594522 */ goto L_00594522;
L_00594513:; BB(0x00594513);
    /* 00594513: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00594515: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00594518: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059451a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059451d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00594520: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x594522u); call_ind(t); }
L_00594522:; BB(0x00594522);
    /* 00594522: jmp 0x59457c */ goto L_0059457c;
L_00594524:; BB(0x00594524);
    /* 00594524: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00594527: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059452b: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059452e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059452f: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00594535: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x59453au); f_00597d30();
    /* 0059453a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059453b: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00594541: call 0x597ca0 */ r_esp -= 4; W32(r_esp, 0x594546u); f_00597ca0();
    /* 00594546: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00594549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059454b: jne 0x59454f */ if (!fZ) goto L_0059454f;
L_0059454d:; BB(0x0059454d);
    /* 0059454d: jmp 0x59457c */ goto L_0059457c;
L_0059454f:; BB(0x0059454f);
    /* 0059454f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00594551: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00594557: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059455a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59455fu); f_005fc420();
    /* 0059455f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00594561: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00594563: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00594569: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059456c: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00594572: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00594575: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594577: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059457a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59457cu); call_ind(t); }
L_0059457c:; BB(0x0059457c);
    /* 0059457c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059457e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059457f: ret  */ FN_RET(0x00594400); r_esp += 4; return;
}

