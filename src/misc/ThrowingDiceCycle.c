#include "protos.h"

void f_0042d7e0(void) /* ThrowingDiceCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d7e0);
    /* 0042d7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d7e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d7e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d7e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042d7ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d7eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d7ee: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x42d7f3u); f_006010a0();
    /* 0042d7f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d7f6: mov dword ptr [ecx], 0x6b6de4 */ W32((u32)(r_ecx), 0x6b6de4u);
    /* 0042d7fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d7ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d802: ret 4 */ FN_RET(0x0042d7e0); r_esp += 8; return;
}

void f_0042d810(void) /* ThrowingDiceCycle::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d810);
    /* 0042d810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d811: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d81a: call 0x600e30 */ r_esp -= 4; W32(r_esp, 0x42d81fu); f_00600e30();
    /* 0042d81f: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042d824: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 0042d82a: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42d82fu); f_005eb220();
    /* 0042d82f: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d832: jne 0x42d851 */ if (!fZ) goto L_0042d851;
L_0042d834:; BB(0x0042d834);
    /* 0042d834: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042d83a: call 0x436a90 */ r_esp -= 4; W32(r_esp, 0x42d83fu); f_00436a90();
    /* 0042d83f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042d842: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d844: je 0x42d851 */ if (fZ) goto L_0042d851;
L_0042d846:; BB(0x0042d846);
    /* 0042d846: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042d84c: call 0x436b80 */ r_esp -= 4; W32(r_esp, 0x42d851u); f_00436b80();
L_0042d851:; BB(0x0042d851);
    /* 0042d851: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d853: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d854: ret  */ FN_RET(0x0042d810); r_esp += 4; return;
}

void f_00600540(void) /* ThrowingDiceCycle::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600540);
    /* 00600540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600541: mov ebp, esp */ r_ebp = r_esp;
    /* 00600543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600547: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060054d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x600552u); f_005f3e50();
    /* 00600552: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600555: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00600558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600559: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x60055eu); f_00686eba();
    /* 0060055e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600561: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600564: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00600567: cmp eax, dword ptr [ecx + 0x178] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x178u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060056d: jge 0x600573 */ if ((fS==fO)) goto L_00600573;
L_0060056f:; BB(0x0060056f);
    /* 0060056f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00600571: jmp 0x600586 */ goto L_00600586;
L_00600573:; BB(0x00600573);
    /* 00600573: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00600579: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x60057eu); f_005f3e50();
    /* 0060057e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600581: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00600584: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00600586:; BB(0x00600586);
    /* 00600586: mov esp, ebp */ r_esp = r_ebp;
    /* 00600588: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600589: ret  */ FN_RET(0x00600540); r_esp += 4; return;
}

void f_00600590(void) /* ThrowingDiceCycle::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600590);
    /* 00600590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600591: mov ebp, esp */ r_ebp = r_esp;
    /* 00600593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060059a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060059c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060059f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006005a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6005a4u); call_ind(t); }
    /* 006005a4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006005a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006005a9: je 0x6005be */ if (fZ) goto L_006005be;
L_006005ab:; BB(0x006005ab);
    /* 006005ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005ae: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006005b1: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x6005b6u); f_005eb220();
    /* 006005b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005b9: add eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006005bc: jmp 0x6005c9 */ goto L_006005c9;
L_006005be:; BB(0x006005be);
    /* 006005be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005c1: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006005c4: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x6005c9u); f_005eb220();
L_006005c9:; BB(0x006005c9);
    /* 006005c9: mov esp, ebp */ r_esp = r_ebp;
    /* 006005cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006005cc: ret  */ FN_RET(0x00600590); r_esp += 4; return;
}

void f_006005d0(void) /* ThrowingDiceCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006005d0);
    /* 006005d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006005d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006005d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006005d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006005d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005da: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006005de: je 0x6005f5 */ if (fZ) goto L_006005f5;
L_006005e0:; BB(0x006005e0);
    /* 006005e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006005e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005e5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006005e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005eb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006005ee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006005f0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006005f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6005f5u); call_ind(t); }
L_006005f5:; BB(0x006005f5);
    /* 006005f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005f8: mov byte ptr [ecx + 0x18], 0 */ W8((u32)(r_ecx+0x18u), 0x0u);
    /* 006005fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006005ff: movzx eax, byte ptr [edx + 0x19] */ r_eax = (u32)R8((u32)(r_edx+0x19u));
    /* 00600603: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600605: je 0x60061a */ if (fZ) goto L_0060061a;
L_00600607:; BB(0x00600607);
    /* 00600607: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060060a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060060d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600610: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600613: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600615: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00600618: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60061au); call_ind(t); }
L_0060061a:; BB(0x0060061a);
    /* 0060061a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060061c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060061f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00600622: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x600627u); f_005f5d50();
    /* 00600627: mov esp, ebp */ r_esp = r_ebp;
    /* 00600629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060062a: ret  */ FN_RET(0x006005d0); r_esp += 4; return;
}

void f_006010d0(void) /* ThrowingDiceCycle::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006010d0);
    /* 006010d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006010d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006010d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006010d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006010d7: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 006010da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006010db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006010de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006010df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006010e2: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x6010e7u); f_006004e0();
    /* 006010e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006010ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006010ed: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006010f0: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006010f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006010f6: mov dword ptr [edx + 0xc], 1 */ W32((u32)(r_edx+0xcu), 0x1u);
    /* 006010fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006010ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601100: ret 8 */ FN_RET(0x006010d0); r_esp += 12; return;
}

