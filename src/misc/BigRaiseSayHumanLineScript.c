#include "protos.h"

void f_0059e5b0(void) /* BigRaiseSayHumanLineScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e5b0);
    /* 0059e5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e5b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e5b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059e5b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e5b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e5bc: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x59e5c1u); f_005fc0d0();
    /* 0059e5c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e5c4: mov dword ptr [eax], 0x6cf060 */ W32((u32)(r_eax), 0x6cf060u);
    /* 0059e5ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e5cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059e5d0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0059e5d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e5d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e5d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e5d9: ret 4 */ FN_RET(0x0059e5b0); r_esp += 8; return;
}

void f_0059e5e0(void) /* BigRaiseSayHumanLineScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e5e0);
    /* 0059e5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e5e3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e5e6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0059e5e9: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059e5ef: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x59e5f4u); f_005a2020();
    /* 0059e5f4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059e5f7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e5fa: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x59e5ffu); f_005fc360();
    /* 0059e5ff: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0059e602: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e606: je 0x59e617 */ if (fZ) goto L_0059e617;
L_0059e608:; BB(0x0059e608);
    /* 0059e608: cmp dword ptr [ebp - 0x3c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e60c: je 0x59e6f7 */ if (fZ) goto L_0059e6f7;
L_0059e612:; BB(0x0059e612);
    /* 0059e612: jmp 0x59e785 */ goto L_0059e785;
L_0059e617:; BB(0x0059e617);
    /* 0059e617: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e619: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e61c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059e61e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e621: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059e624: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e626u); call_ind(t); }
    /* 0059e626: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0059e62d: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e631: je 0x59e6c4 */ if (fZ) goto L_0059e6c4;
L_0059e637:; BB(0x0059e637);
    /* 0059e637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e63a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e63b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59e640u); f_005dcb00();
    /* 0059e640: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e643: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0059e646: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059e649: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59e64eu); f_0063aac0();
    /* 0059e64e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059e650: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0059e653: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e657: je 0x59e675 */ if (fZ) goto L_0059e675;
L_0059e659:; BB(0x0059e659);
    /* 0059e659: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059e65c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59e661u); f_0063aac0();
    /* 0059e661: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059e663: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0059e666: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e66a: je 0x59e675 */ if (fZ) goto L_0059e675;
L_0059e66c:; BB(0x0059e66c);
    /* 0059e66c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0059e673: jmp 0x59e67c */ goto L_0059e67c;
L_0059e675:; BB(0x0059e675);
    /* 0059e675: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_0059e67c:; BB(0x0059e67c);
    /* 0059e67c: movzx ecx, byte ptr [ebp - 0x40] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc0u));
    /* 0059e680: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e682: je 0x59e6c4 */ if (fZ) goto L_0059e6c4;
L_0059e684:; BB(0x0059e684);
    /* 0059e684: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e687: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0059e68a: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0059e691: fldz  */ FPUSH(0.0);
    /* 0059e693: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0059e696: fld1  */ FPUSH(1.0);
    /* 0059e698: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059e69b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e69e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0059e6a1: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0059e6a4: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e6a8: je 0x59e6b2 */ if (fZ) goto L_0059e6b2;
L_0059e6aa:; BB(0x0059e6aa);
    /* 0059e6aa: cmp dword ptr [ebp - 0x44], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e6ae: je 0x59e6bd */ if (fZ) goto L_0059e6bd;
L_0059e6b0:; BB(0x0059e6b0);
    /* 0059e6b0: jmp 0x59e6c4 */ goto L_0059e6c4;
L_0059e6b2:; BB(0x0059e6b2);
    /* 0059e6b2: mov dword ptr [ebp - 0x24], 0x82e */ W32((u32)(r_ebp+0xffffffdcu), 0x82eu);
    /* 0059e6b9: jmp 0x59e6c4 */ goto L_0059e6c4;
L_0059e6bd:; BB(0x0059e6bd);
    /* 0059e6bd: mov dword ptr [ebp - 0x24], 0x7fd */ W32((u32)(r_ebp+0xffffffdcu), 0x7fdu);
L_0059e6c4:; BB(0x0059e6c4);
    /* 0059e6c4: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e6c8: je 0x59e6e3 */ if (fZ) goto L_0059e6e3;
L_0059e6ca:; BB(0x0059e6ca);
    /* 0059e6ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6ce: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e6d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6d2: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0059e6d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6d6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059e6dc: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x59e6e1u); f_00639390();
    /* 0059e6e1: jmp 0x59e6f2 */ goto L_0059e6f2;
L_0059e6e3:; BB(0x0059e6e3);
    /* 0059e6e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6e5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e6e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e6ea: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e6ed: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059e6f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e6f2u); call_ind(t); }
L_0059e6f2:; BB(0x0059e6f2);
    /* 0059e6f2: jmp 0x59e785 */ goto L_0059e785;
L_0059e6f7:; BB(0x0059e6f7);
    /* 0059e6f7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e6fa: cmp dword ptr [ecx + 0x20], 1 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e6fe: je 0x59e70f */ if (fZ) goto L_0059e70f;
L_0059e700:; BB(0x0059e700);
    /* 0059e700: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e703: cmp dword ptr [edx + 0x20], 2 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e707: je 0x59e70f */ if (fZ) goto L_0059e70f;
L_0059e709:; BB(0x0059e709);
    /* 0059e709: mov byte ptr [ebp - 0x45], 0 */ W8((u32)(r_ebp+0xffffffbbu), 0x0u);
    /* 0059e70d: jmp 0x59e713 */ goto L_0059e713;
L_0059e70f:; BB(0x0059e70f);
    /* 0059e70f: mov byte ptr [ebp - 0x45], 1 */ W8((u32)(r_ebp+0xffffffbbu), 0x1u);
L_0059e713:; BB(0x0059e713);
    /* 0059e713: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e716: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e71a: je 0x59e72b */ if (fZ) goto L_0059e72b;
L_0059e71c:; BB(0x0059e71c);
    /* 0059e71c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059e71f: cmp dword ptr [ecx + 0x20], 2 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e723: je 0x59e72b */ if (fZ) goto L_0059e72b;
L_0059e725:; BB(0x0059e725);
    /* 0059e725: mov byte ptr [ebp - 0x46], 0 */ W8((u32)(r_ebp+0xffffffbau), 0x0u);
    /* 0059e729: jmp 0x59e72f */ goto L_0059e72f;
L_0059e72b:; BB(0x0059e72b);
    /* 0059e72b: mov byte ptr [ebp - 0x46], 1 */ W8((u32)(r_ebp+0xffffffbau), 0x1u);
L_0059e72f:; BB(0x0059e72f);
    /* 0059e72f: mov dl, byte ptr [ebp - 0x45] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffbbu))) & 0xffu);
    /* 0059e732: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e733: mov al, byte ptr [ebp - 0x46] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffbau))) & 0xffu);
    /* 0059e736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e737: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059e73d: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x59e742u); f_005a2020();
    /* 0059e742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e743: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059e749: call 0x5a1ea0 */ r_esp -= 4; W32(r_esp, 0x59e74eu); f_005a1ea0();
    /* 0059e74e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059e751: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e753: jne 0x59e757 */ if (!fZ) goto L_0059e757;
L_0059e755:; BB(0x0059e755);
    /* 0059e755: jmp 0x59e785 */ goto L_0059e785;
L_0059e757:; BB(0x0059e757);
    /* 0059e757: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e759: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059e75f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0059e762: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59e767u); f_005fc420();
    /* 0059e767: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e769: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e76b: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059e770: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059e773: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059e779: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059e77c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e77e: mov ecx, eax */ r_ecx = r_eax;
    /* 0059e780: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059e783: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e785u); call_ind(t); }
L_0059e785:; BB(0x0059e785);
    /* 0059e785: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e787: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e788: ret  */ FN_RET(0x0059e5e0); r_esp += 4; return;
}

