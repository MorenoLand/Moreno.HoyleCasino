#include "protos.h"

void f_006062a0(void) /* sub_6062A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006062a0);
    /* 006062a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006062a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006062a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006062a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006062a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006062aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006062ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006062ae: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006062b1: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x6062b6u); f_0060c9e0();
    /* 006062b6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006062b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006062bb: jne 0x6062e4 */ if (!fZ) goto L_006062e4;
L_006062bd:; BB(0x006062bd);
    /* 006062bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006062c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006062c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006062c4: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006062c7: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x6062ccu); f_0060c840();
    /* 006062cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006062cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006062d2: mov dword ptr [eax + 0x208], ecx */ W32((u32)(r_eax+0x208u), r_ecx);
    /* 006062d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006062db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006062de: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006062e1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_006062e4:; BB(0x006062e4);
    /* 006062e4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006062e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006062e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006062e9: ret 4 */ FN_RET(0x006062a0); r_esp += 8; return;
}

void f_00606350(void) /* sub_606350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606350);
    /* 00606350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606351: mov ebp, esp */ r_ebp = r_esp;
    /* 00606353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00606357: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060635a: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x60635fu); f_006063e0();
    /* 0060635f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606361: je 0x606374 */ if (fZ) goto L_00606374;
L_00606363:; BB(0x00606363);
    /* 00606363: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00606366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060636a: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060636d: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x606372u); f_0060ca40();
    /* 00606372: jmp 0x606376 */ goto L_00606376;
L_00606374:; BB(0x00606374);
    /* 00606374: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00606376:; BB(0x00606376);
    /* 00606376: mov esp, ebp */ r_esp = r_ebp;
    /* 00606378: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606379: ret 4 */ FN_RET(0x00606350); r_esp += 8; return;
}

void f_00606380(void) /* sub_606380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606380);
    /* 00606380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606381: mov ebp, esp */ r_ebp = r_esp;
    /* 00606383: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606386: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606389: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606390: jmp 0x60639b */ goto L_0060639b;
L_00606392:; BB(0x00606392);
    /* 00606392: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606395: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606398: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060639b:; BB(0x0060639b);
    /* 0060639b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060639e: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x6063a3u); f_006063e0();
    /* 006063a3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006063a6: jge 0x6063d0 */ if ((fS==fO)) goto L_006063d0;
L_006063a8:; BB(0x006063a8);
    /* 006063a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006063ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006063ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006063af: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6063b4u); f_00606350();
    /* 006063b4: mov ecx, eax */ r_ecx = r_eax;
    /* 006063b6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x6063bbu); f_005f5400();
    /* 006063bb: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006063be: jne 0x6063ce */ if (!fZ) goto L_006063ce;
L_006063c0:; BB(0x006063c0);
    /* 006063c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006063c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006063c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006063c7: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6063ccu); f_00606350();
    /* 006063cc: jmp 0x6063d2 */ goto L_006063d2;
L_006063ce:; BB(0x006063ce);
    /* 006063ce: jmp 0x606392 */ goto L_00606392;
L_006063d0:; BB(0x006063d0);
    /* 006063d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006063d2:; BB(0x006063d2);
    /* 006063d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006063d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006063d5: ret 4 */ FN_RET(0x00606380); r_esp += 8; return;
}

void f_006063e0(void) /* sub_6063E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006063e0);
    /* 006063e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006063e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006063e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006063e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006063e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006063ea: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006063ed: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6063f2u); f_0060c9a0();
    /* 006063f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006063f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006063f5: ret  */ FN_RET(0x006063e0); r_esp += 4; return;
}

void f_00606490(void) /* sub_606490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606490);
    /* 00606490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606491: mov ebp, esp */ r_ebp = r_esp;
    /* 00606493: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606496: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606499: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006064a0: jmp 0x6064ab */ goto L_006064ab;
L_006064a2:; BB(0x006064a2);
    /* 006064a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006064a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006064a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006064ab:; BB(0x006064ab);
    /* 006064ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006064ae: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x6064b3u); f_006063e0();
    /* 006064b3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006064b6: jge 0x6064d9 */ if ((fS==fO)) goto L_006064d9;
L_006064b8:; BB(0x006064b8);
    /* 006064b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006064bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006064bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006064bf: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6064c4u); f_00606350();
    /* 006064c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006064c6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x6064cbu); f_00600230();
    /* 006064cb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006064ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006064d0: je 0x6064d7 */ if (fZ) goto L_006064d7;
L_006064d2:; BB(0x006064d2);
    /* 006064d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006064d5: jmp 0x6064dc */ goto L_006064dc;
L_006064d7:; BB(0x006064d7);
    /* 006064d7: jmp 0x6064a2 */ goto L_006064a2;
L_006064d9:; BB(0x006064d9);
    /* 006064d9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006064dc:; BB(0x006064dc);
    /* 006064dc: mov esp, ebp */ r_esp = r_ebp;
    /* 006064de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006064df: ret  */ FN_RET(0x00606490); r_esp += 4; return;
}

void f_00606570(void) /* sub_606570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606570);
    /* 00606570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606571: mov ebp, esp */ r_ebp = r_esp;
    /* 00606573: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606576: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606579: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606580: jmp 0x60658b */ goto L_0060658b;
L_00606582:; BB(0x00606582);
    /* 00606582: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606585: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606588: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060658b:; BB(0x0060658b);
    /* 0060658b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060658e: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x606593u); f_006063e0();
    /* 00606593: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606596: jge 0x6065c9 */ if ((fS==fO)) goto L_006065c9;
L_00606598:; BB(0x00606598);
    /* 00606598: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060659b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060659c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060659f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6065a4u); f_00606350();
    /* 006065a4: mov ecx, eax */ r_ecx = r_eax;
    /* 006065a6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x6065abu); f_00600230();
    /* 006065ab: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006065ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006065b0: je 0x6065c7 */ if (fZ) goto L_006065c7;
L_006065b2:; BB(0x006065b2);
    /* 006065b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006065b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006065b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006065b9: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6065beu); f_00606350();
    /* 006065be: mov ecx, eax */ r_ecx = r_eax;
    /* 006065c0: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x6065c5u); f_005f5400();
    /* 006065c5: jmp 0x6065cc */ goto L_006065cc;
L_006065c7:; BB(0x006065c7);
    /* 006065c7: jmp 0x606582 */ goto L_00606582;
L_006065c9:; BB(0x006065c9);
    /* 006065c9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006065cc:; BB(0x006065cc);
    /* 006065cc: mov esp, ebp */ r_esp = r_ebp;
    /* 006065ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006065cf: ret  */ FN_RET(0x00606570); r_esp += 4; return;
}

void f_006065d0(void) /* sub_6065D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006065d0);
    /* 006065d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006065d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006065d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006065d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006065d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006065e0: jmp 0x6065eb */ goto L_006065eb;
L_006065e2:; BB(0x006065e2);
    /* 006065e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006065e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006065e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006065eb:; BB(0x006065eb);
    /* 006065eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006065ee: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x6065f3u); f_006063e0();
    /* 006065f3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006065f6: jge 0x606655 */ if ((fS==fO)) goto L_00606655;
L_006065f8:; BB(0x006065f8);
    /* 006065f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006065fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006065fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006065ff: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x606604u); f_00606350();
    /* 00606604: mov ecx, eax */ r_ecx = r_eax;
    /* 00606606: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x60660bu); f_005f5400();
    /* 0060660b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060660e: jne 0x606653 */ if (!fZ) goto L_00606653;
L_00606610:; BB(0x00606610);
    /* 00606610: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606613: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606614: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606617: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x60661cu); f_00606350();
    /* 0060661c: mov ecx, eax */ r_ecx = r_eax;
    /* 0060661e: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x606623u); f_006026d0();
    /* 00606623: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00606626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606628: je 0x606651 */ if (fZ) goto L_00606651;
L_0060662a:; BB(0x0060662a);
    /* 0060662a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060662d: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x606632u); f_006067e0();
    /* 00606632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606635: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606636: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606639: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x60663eu); f_00606350();
    /* 0060663e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00606641: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606644: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00606646: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606649: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0060664f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x606651u); call_ind(t); }
L_00606651:; BB(0x00606651);
    /* 00606651: jmp 0x606655 */ goto L_00606655;
L_00606653:; BB(0x00606653);
    /* 00606653: jmp 0x6065e2 */ goto L_006065e2;
L_00606655:; BB(0x00606655);
    /* 00606655: mov esp, ebp */ r_esp = r_ebp;
    /* 00606657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606658: ret 4 */ FN_RET(0x006065d0); r_esp += 8; return;
}

void f_00606660(void) /* sub_606660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606660);
    /* 00606660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606661: mov ebp, esp */ r_ebp = r_esp;
    /* 00606663: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606666: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606669: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606670: jmp 0x60667b */ goto L_0060667b;
L_00606672:; BB(0x00606672);
    /* 00606672: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606675: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606678: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060667b:; BB(0x0060667b);
    /* 0060667b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060667e: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x606683u); f_006063e0();
    /* 00606683: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606686: jge 0x6066a9 */ if ((fS==fO)) goto L_006066a9;
L_00606688:; BB(0x00606688);
    /* 00606688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060668b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060668c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060668f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x606694u); f_00606350();
    /* 00606694: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00606697: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060669a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060669c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060669f: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 006066a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6066a7u); call_ind(t); }
    /* 006066a7: jmp 0x606672 */ goto L_00606672;
L_006066a9:; BB(0x006066a9);
    /* 006066a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006066ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006066ac: ret  */ FN_RET(0x00606660); r_esp += 4; return;
}

void f_006066b0(void) /* sub_6066B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006066b0);
    /* 006066b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006066b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006066b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006066b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006066b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006066c0: jmp 0x6066cb */ goto L_006066cb;
L_006066c2:; BB(0x006066c2);
    /* 006066c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006066c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006066c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006066cb:; BB(0x006066cb);
    /* 006066cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006066ce: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x6066d3u); f_006063e0();
    /* 006066d3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006066d6: jge 0x606713 */ if ((fS==fO)) goto L_00606713;
L_006066d8:; BB(0x006066d8);
    /* 006066d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006066db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006066dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006066df: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6066e4u); f_00606350();
    /* 006066e4: mov ecx, eax */ r_ecx = r_eax;
    /* 006066e6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x6066ebu); f_005f5400();
    /* 006066eb: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006066ee: jne 0x606711 */ if (!fZ) goto L_00606711;
L_006066f0:; BB(0x006066f0);
    /* 006066f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006066f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006066f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006066f7: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6066fcu); f_00606350();
    /* 006066fc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006066ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606702: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00606704: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606707: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0060670d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60670fu); call_ind(t); }
    /* 0060670f: jmp 0x606713 */ goto L_00606713;
L_00606711:; BB(0x00606711);
    /* 00606711: jmp 0x6066c2 */ goto L_006066c2;
L_00606713:; BB(0x00606713);
    /* 00606713: mov esp, ebp */ r_esp = r_ebp;
    /* 00606715: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606716: ret 4 */ FN_RET(0x006066b0); r_esp += 8; return;
}

void f_00606720(void) /* sub_606720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606720);
    /* 00606720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606721: mov ebp, esp */ r_ebp = r_esp;
    /* 00606723: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606726: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606729: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606730: jmp 0x60673b */ goto L_0060673b;
L_00606732:; BB(0x00606732);
    /* 00606732: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606735: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606738: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060673b:; BB(0x0060673b);
    /* 0060673b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060673e: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x606743u); f_006063e0();
    /* 00606743: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606746: jge 0x606769 */ if ((fS==fO)) goto L_00606769;
L_00606748:; BB(0x00606748);
    /* 00606748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060674b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060674c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060674f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x606754u); f_00606350();
    /* 00606754: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00606757: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060675a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060675c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060675f: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00606765: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x606767u); call_ind(t); }
    /* 00606767: jmp 0x606732 */ goto L_00606732;
L_00606769:; BB(0x00606769);
    /* 00606769: mov esp, ebp */ r_esp = r_ebp;
    /* 0060676b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060676c: ret  */ FN_RET(0x00606720); r_esp += 4; return;
}

void f_00606770(void) /* sub_606770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606770);
    /* 00606770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606771: mov ebp, esp */ r_ebp = r_esp;
    /* 00606773: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606776: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606779: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606780: jmp 0x60678b */ goto L_0060678b;
L_00606782:; BB(0x00606782);
    /* 00606782: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606788: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060678b:; BB(0x0060678b);
    /* 0060678b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060678e: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x606793u); f_006063e0();
    /* 00606793: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606796: jge 0x6067d3 */ if ((fS==fO)) goto L_006067d3;
L_00606798:; BB(0x00606798);
    /* 00606798: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060679b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060679c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060679f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6067a4u); f_00606350();
    /* 006067a4: mov ecx, eax */ r_ecx = r_eax;
    /* 006067a6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x6067abu); f_005f5400();
    /* 006067ab: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067ae: jne 0x6067d1 */ if (!fZ) goto L_006067d1;
L_006067b0:; BB(0x006067b0);
    /* 006067b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006067b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006067b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006067b7: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6067bcu); f_00606350();
    /* 006067bc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006067bf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006067c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006067c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006067c7: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006067cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6067cfu); call_ind(t); }
    /* 006067cf: jmp 0x6067d3 */ goto L_006067d3;
L_006067d1:; BB(0x006067d1);
    /* 006067d1: jmp 0x606782 */ goto L_00606782;
L_006067d3:; BB(0x006067d3);
    /* 006067d3: mov esp, ebp */ r_esp = r_ebp;
    /* 006067d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006067d6: ret 4 */ FN_RET(0x00606770); r_esp += 8; return;
}

void f_006067e0(void) /* sub_6067E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006067e0);
    /* 006067e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006067e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006067e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006067e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006067f0: jmp 0x6067fb */ goto L_006067fb;
L_006067f2:; BB(0x006067f2);
    /* 006067f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006067f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006067f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006067fb:; BB(0x006067fb);
    /* 006067fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006067fe: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x606803u); f_006063e0();
    /* 00606803: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606806: jge 0x606829 */ if ((fS==fO)) goto L_00606829;
L_00606808:; BB(0x00606808);
    /* 00606808: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060680b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060680c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060680f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x606814u); f_00606350();
    /* 00606814: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00606817: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060681a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060681c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060681f: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 00606825: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x606827u); call_ind(t); }
    /* 00606827: jmp 0x6067f2 */ goto L_006067f2;
L_00606829:; BB(0x00606829);
    /* 00606829: mov esp, ebp */ r_esp = r_ebp;
    /* 0060682b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060682c: ret  */ FN_RET(0x006067e0); r_esp += 4; return;
}

void f_00606830(void) /* sub_606830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606830);
    /* 00606830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606831: mov ebp, esp */ r_ebp = r_esp;
    /* 00606833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00606837: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060683a: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060683d: call 0x60ca10 */ r_esp -= 4; W32(r_esp, 0x606842u); f_0060ca10();
    /* 00606842: mov esp, ebp */ r_esp = r_ebp;
    /* 00606844: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606845: ret  */ FN_RET(0x00606830); r_esp += 4; return;
}

void f_00606850(void) /* sub_606850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606850);
    /* 00606850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606851: mov ebp, esp */ r_ebp = r_esp;
    /* 00606853: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606856: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00606859:; BB(0x00606859);
    /* 00606859: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060685c: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x606861u); f_006063e0();
    /* 00606861: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606863: je 0x6068b6 */ if (fZ) goto L_006068b6;
L_00606865:; BB(0x00606865);
    /* 00606865: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606867: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060686a: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x60686fu); f_00606350();
    /* 0060686f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00606872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606875: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606876: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606879: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060687c: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x606881u); f_0060c890();
    /* 00606881: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606884: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00606887: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060688a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060688d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606891: je 0x6068a6 */ if (fZ) goto L_006068a6;
L_00606893:; BB(0x00606893);
    /* 00606893: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00606895: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606898: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060689a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060689d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060689f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6068a1u); call_ind(t); }
    /* 006068a1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006068a4: jmp 0x6068ad */ goto L_006068ad;
L_006068a6:; BB(0x006068a6);
    /* 006068a6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_006068ad:; BB(0x006068ad);
    /* 006068ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006068b4: jmp 0x606859 */ goto L_00606859;
L_006068b6:; BB(0x006068b6);
    /* 006068b6: mov esp, ebp */ r_esp = r_ebp;
    /* 006068b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068b9: ret  */ FN_RET(0x00606850); r_esp += 4; return;
}

