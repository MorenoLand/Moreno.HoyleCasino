#include "protos.h"

void f_00538440(void) /* sub_538440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538440);
    /* 00538440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538441: mov ebp, esp */ r_ebp = r_esp;
    /* 00538443: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00538446: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538449: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0053844e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00538450: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00538456: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00538459: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53845bu); call_ind(t); }
    /* 0053845b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053845e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538460: je 0x53847a */ if (fZ) goto L_0053847a;
L_00538462:; BB(0x00538462);
    /* 00538462: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00538465: call 0x5384e0 */ r_esp -= 4; W32(r_esp, 0x53846au); f_005384e0();
    /* 0053846a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053846d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053846f: jne 0x53847a */ if (!fZ) goto L_0053847a;
L_00538471:; BB(0x00538471);
    /* 00538471: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00538478: jmp 0x538481 */ goto L_00538481;
L_0053847a:; BB(0x0053847a);
    /* 0053847a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00538481:; BB(0x00538481);
    /* 00538481: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00538484: mov esp, ebp */ r_esp = r_ebp;
    /* 00538486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538487: ret  */ FN_RET(0x00538440); r_esp += 4; return;
}

void f_00538490(void) /* sub_538490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538490);
    /* 00538490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538491: mov ebp, esp */ r_ebp = r_esp;
    /* 00538493: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00538496: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538499: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0053849e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005384a0: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005384a6: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005384a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5384abu); call_ind(t); }
    /* 005384ab: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005384ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005384b0: je 0x5384ca */ if (fZ) goto L_005384ca;
L_005384b2:; BB(0x005384b2);
    /* 005384b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005384b5: call 0x5384e0 */ r_esp -= 4; W32(r_esp, 0x5384bau); f_005384e0();
    /* 005384ba: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005384bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005384bf: je 0x5384ca */ if (fZ) goto L_005384ca;
L_005384c1:; BB(0x005384c1);
    /* 005384c1: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005384c8: jmp 0x5384d1 */ goto L_005384d1;
L_005384ca:; BB(0x005384ca);
    /* 005384ca: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005384d1:; BB(0x005384d1);
    /* 005384d1: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005384d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005384d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005384d7: ret  */ FN_RET(0x00538490); r_esp += 4; return;
}

void f_005384e0(void) /* sub_5384E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005384e0);
    /* 005384e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005384e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005384e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005384e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005384e7: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 005384ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005384ee: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005384f4: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005384f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5384f9u); call_ind(t); }
    /* 005384f9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005384fc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005384fe: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00538500: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538503: mov esp, ebp */ r_esp = r_ebp;
    /* 00538505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538506: ret  */ FN_RET(0x005384e0); r_esp += 4; return;
}

void f_00538510(void) /* sub_538510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538510);
    /* 00538510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538511: mov ebp, esp */ r_ebp = r_esp;
    /* 00538513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538517: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0053851c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053851e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053851f: ret  */ FN_RET(0x00538510); r_esp += 4; return;
}

void f_005385b0(void) /* sub_5385B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005385b0);
    /* 005385b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005385b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005385b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005385b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005385b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005385c0: jmp 0x5385cb */ goto L_005385cb;
L_005385c2:; BB(0x005385c2);
    /* 005385c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005385c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005385c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005385cb:; BB(0x005385cb);
    /* 005385cb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005385cf: jge 0x5385e1 */ if ((fS==fO)) goto L_005385e1;
L_005385d1:; BB(0x005385d1);
    /* 005385d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005385d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005385d7: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 005385df: jmp 0x5385c2 */ goto L_005385c2;
L_005385e1:; BB(0x005385e1);
    /* 005385e1: mov esp, ebp */ r_esp = r_ebp;
    /* 005385e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005385e4: ret  */ FN_RET(0x005385b0); r_esp += 4; return;
}

