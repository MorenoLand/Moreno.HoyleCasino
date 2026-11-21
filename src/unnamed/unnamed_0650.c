#include "protos.h"

void f_00650310(void) /* sub_650310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650310);
    /* 00650310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650311: mov ebp, esp */ r_ebp = r_esp;
    /* 00650313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650316: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650319: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065031c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650320: je 0x650337 */ if (fZ) goto L_00650337;
L_00650322:; BB(0x00650322);
    /* 00650322: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650325: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00650328: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065032c: je 0x650337 */ if (fZ) goto L_00650337;
L_0065032e:; BB(0x0065032e);
    /* 0065032e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00650335: jmp 0x65033e */ goto L_0065033e;
L_00650337:; BB(0x00650337);
    /* 00650337: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0065033e:; BB(0x0065033e);
    /* 0065033e: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00650341: mov esp, ebp */ r_esp = r_ebp;
    /* 00650343: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650344: ret  */ FN_RET(0x00650310); r_esp += 4; return;
}

void f_00650400(void) /* sub_650400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650400);
    /* 00650400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650401: mov ebp, esp */ r_ebp = r_esp;
    /* 00650403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650405: push 0x6ac2b3 */ { u32 v = 0x6ac2b3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065040a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00650410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650411: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650414: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00650419: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065041b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065041c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065041f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00650425: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00650428: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 0065042f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650432: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x650437u); f_005f2870();
    /* 00650437: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065043d: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x650442u); f_00637630();
    /* 00650442: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00650445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650447: je 0x65045f */ if (fZ) goto L_0065045f;
L_00650449:; BB(0x00650449);
    /* 00650449: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 00650450: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650452: jne 0x65045f */ if (!fZ) goto L_0065045f;
L_00650454:; BB(0x00650454);
    /* 00650454: movzx edx, byte ptr [0x795f95] */ r_edx = (u32)R8((u32)(0x795f95u));
    /* 0065045b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065045d: je 0x650479 */ if (fZ) goto L_00650479;
L_0065045f:; BB(0x0065045f);
    /* 0065045f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650463: je 0x650474 */ if (fZ) goto L_00650474;
L_00650465:; BB(0x00650465);
    /* 00650465: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650467: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065046a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065046c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065046f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00650472: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650474u); call_ind(t); }
L_00650474:; BB(0x00650474);
    /* 00650474: jmp 0x650530 */ goto L_00650530;
L_00650479:; BB(0x00650479);
    /* 00650479: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065047f: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x650484u); f_00637670();
    /* 00650484: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00650487: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650489: je 0x6504ba */ if (fZ) goto L_006504ba;
L_0065048b:; BB(0x0065048b);
    /* 0065048b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00650491: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00650494: call 0x60a950 */ r_esp -= 4; W32(r_esp, 0x650499u); f_0060a950();
    /* 00650499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065049b: je 0x6504ba */ if (fZ) goto L_006504ba;
L_0065049d:; BB(0x0065049d);
    /* 0065049d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006504a3: call 0x5f4760 */ r_esp -= 4; W32(r_esp, 0x6504a8u); f_005f4760();
    /* 006504a8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006504ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006504ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006504af: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006504b5: call 0x5f4780 */ r_esp -= 4; W32(r_esp, 0x6504bau); f_005f4780();
L_006504ba:; BB(0x006504ba);
    /* 006504ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006504bd: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006504c1: jne 0x65050a */ if (!fZ) goto L_0065050a;
L_006504c3:; BB(0x006504c3);
    /* 006504c3: push 0x2b0 */ { u32 v = 0x2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006504c8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6504cdu); f_00686d82();
    /* 006504cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006504d0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006504d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006504da: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006504de: je 0x6504ed */ if (fZ) goto L_006504ed;
L_006504e0:; BB(0x006504e0);
    /* 006504e0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006504e3: call 0x678900 */ r_esp -= 4; W32(r_esp, 0x6504e8u); f_00678900();
    /* 006504e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006504eb: jmp 0x6504f4 */ goto L_006504f4;
L_006504ed:; BB(0x006504ed);
    /* 006504ed: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006504f4:; BB(0x006504f4);
    /* 006504f4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006504f7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006504fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00650501: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650504: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00650507: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
L_0065050a:; BB(0x0065050a);
    /* 0065050a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065050d: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00650510: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650513: mov dword ptr [eax + 0x2a4], ecx */ W32((u32)(r_eax+0x2a4u), r_ecx);
    /* 00650519: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0065051c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065051d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00650520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650521: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650524: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650525: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650528: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0065052b: call 0x6795f0 */ r_esp -= 4; W32(r_esp, 0x650530u); f_006795f0();
L_00650530:; BB(0x00650530);
    /* 00650530: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650533: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065053a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065053b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065053d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065053e: ret 0xc */ FN_RET(0x00650400); r_esp += 16; return;
}

void f_00650550(void) /* sub_650550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650550);
    /* 00650550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650551: mov ebp, esp */ r_ebp = r_esp;
    /* 00650553: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650556: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00650559: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065055c: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650560: jne 0x650564 */ if (!fZ) goto L_00650564;
L_00650562:; BB(0x00650562);
    /* 00650562: jmp 0x6505b4 */ goto L_006505b4;
L_00650564:; BB(0x00650564);
    /* 00650564: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00650567: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650568: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065056b: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0065056e: call 0x679aa0 */ r_esp -= 4; W32(r_esp, 0x650573u); f_00679aa0();
    /* 00650573: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00650577: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650579: je 0x6505b4 */ if (fZ) goto L_006505b4;
L_0065057b:; BB(0x0065057b);
    /* 0065057b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065057e: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00650581: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00650584: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00650587: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065058a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065058e: je 0x6505a3 */ if (fZ) goto L_006505a3;
L_00650590:; BB(0x00650590);
    /* 00650590: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650592: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650595: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650597: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065059a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065059c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65059eu); call_ind(t); }
    /* 0065059e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006505a1: jmp 0x6505aa */ goto L_006505aa;
L_006505a3:; BB(0x006505a3);
    /* 006505a3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_006505aa:; BB(0x006505aa);
    /* 006505aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006505ad: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_006505b4:; BB(0x006505b4);
    /* 006505b4: mov esp, ebp */ r_esp = r_ebp;
    /* 006505b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006505b7: ret 4 */ FN_RET(0x00650550); r_esp += 8; return;
}

