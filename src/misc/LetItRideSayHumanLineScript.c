#include "protos.h"

void f_00449430(void) /* LetItRideSayHumanLineScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449430);
    /* 00449430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449431: mov ebp, esp */ r_ebp = r_esp;
    /* 00449433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449439: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044943c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x449441u); f_005fc0d0();
    /* 00449441: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449444: mov dword ptr [eax], 0x6b8d0c */ W32((u32)(r_eax), 0x6b8d0cu);
    /* 0044944a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044944d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00449450: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00449453: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449456: mov esp, ebp */ r_esp = r_ebp;
    /* 00449458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449459: ret 4 */ FN_RET(0x00449430); r_esp += 8; return;
}

void f_00449460(void) /* LetItRideSayHumanLineScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449460);
    /* 00449460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449461: mov ebp, esp */ r_ebp = r_esp;
    /* 00449463: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449466: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00449469: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044946e: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00449474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449477: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044947a: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x44947fu); f_005fc360();
    /* 0044947f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00449482: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449486: je 0x449497 */ if (fZ) goto L_00449497;
L_00449488:; BB(0x00449488);
    /* 00449488: cmp dword ptr [ebp - 0x40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044948c: je 0x449572 */ if (fZ) goto L_00449572;
L_00449492:; BB(0x00449492);
    /* 00449492: jmp 0x4495d1 */ goto L_004495d1;
L_00449497:; BB(0x00449497);
    /* 00449497: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449499: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044949c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044949e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004494a1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004494a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4494a6u); call_ind(t); }
    /* 004494a6: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 004494ad: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004494b1: je 0x449542 */ if (fZ) goto L_00449542;
L_004494b7:; BB(0x004494b7);
    /* 004494b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004494ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004494bb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4494c0u); f_005dcb00();
    /* 004494c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004494c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004494c6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004494c9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4494ceu); f_0063aac0();
    /* 004494ce: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004494d0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004494d3: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004494d7: je 0x4494f5 */ if (fZ) goto L_004494f5;
L_004494d9:; BB(0x004494d9);
    /* 004494d9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004494dc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4494e1u); f_0063aac0();
    /* 004494e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004494e3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004494e6: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004494ea: je 0x4494f5 */ if (fZ) goto L_004494f5;
L_004494ec:; BB(0x004494ec);
    /* 004494ec: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004494f3: jmp 0x4494fc */ goto L_004494fc;
L_004494f5:; BB(0x004494f5);
    /* 004494f5: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_004494fc:; BB(0x004494fc);
    /* 004494fc: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 00449500: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449502: je 0x449542 */ if (fZ) goto L_00449542;
L_00449504:; BB(0x00449504);
    /* 00449504: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449507: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0044950a: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00449511: fldz  */ FPUSH(0.0);
    /* 00449513: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00449516: fld1  */ FPUSH(1.0);
    /* 00449518: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044951b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044951e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00449521: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00449524: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449528: je 0x449532 */ if (fZ) goto L_00449532;
L_0044952a:; BB(0x0044952a);
    /* 0044952a: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044952e: je 0x44953b */ if (fZ) goto L_0044953b;
L_00449530:; BB(0x00449530);
    /* 00449530: jmp 0x449542 */ goto L_00449542;
L_00449532:; BB(0x00449532);
    /* 00449532: mov dword ptr [ebp - 0x24], 0x7e8 */ W32((u32)(r_ebp+0xffffffdcu), 0x7e8u);
    /* 00449539: jmp 0x449542 */ goto L_00449542;
L_0044953b:; BB(0x0044953b);
    /* 0044953b: mov dword ptr [ebp - 0x24], 0x7eb */ W32((u32)(r_ebp+0xffffffdcu), 0x7ebu);
L_00449542:; BB(0x00449542);
    /* 00449542: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449546: je 0x449561 */ if (fZ) goto L_00449561;
L_00449548:; BB(0x00449548);
    /* 00449548: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044954a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044954c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044954f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449550: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 00449553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449554: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044955a: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x44955fu); f_00639390();
    /* 0044955f: jmp 0x449570 */ goto L_00449570;
L_00449561:; BB(0x00449561);
    /* 00449561: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449563: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00449566: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00449568: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044956b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0044956e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449570u); call_ind(t); }
L_00449570:; BB(0x00449570);
    /* 00449570: jmp 0x4495d1 */ goto L_004495d1;
L_00449572:; BB(0x00449572);
    /* 00449572: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449578: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0044957e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00449581: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00449584: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449588: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044958b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044958c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044958f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449590: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449596: call 0x44d6a0 */ r_esp -= 4; W32(r_esp, 0x44959bu); f_0044d6a0();
    /* 0044959b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044959e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004495a0: jne 0x4495a4 */ if (!fZ) goto L_004495a4;
L_004495a2:; BB(0x004495a2);
    /* 004495a2: jmp 0x4495d1 */ goto L_004495d1;
L_004495a4:; BB(0x004495a4);
    /* 004495a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004495a6: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 004495ac: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004495af: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4495b4u); f_005fc420();
    /* 004495b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004495b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004495b8: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 004495be: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004495c1: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 004495c7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004495ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004495cc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004495cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4495d1u); call_ind(t); }
L_004495d1:; BB(0x004495d1);
    /* 004495d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004495d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004495d4: ret  */ FN_RET(0x00449460); r_esp += 4; return;
}

