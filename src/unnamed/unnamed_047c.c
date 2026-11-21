#include "protos.h"

void f_0047caf0(void) /* sub_47CAF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047caf0);
    /* 0047caf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047caf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047caf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047caf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047caf7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cafa: mov eax, dword ptr [eax + 0x418] */ r_eax = R32((u32)(r_eax+0x418u));
    /* 0047cb00: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cb02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cb03: ret  */ FN_RET(0x0047caf0); r_esp += 4; return;
}

void f_0047cb80(void) /* sub_47CB80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cb80);
    /* 0047cb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb81: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cb83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047cb87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cb8a: mov eax, dword ptr [eax + 0x420] */ r_eax = R32((u32)(r_eax+0x420u));
    /* 0047cb90: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cb92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cb93: ret  */ FN_RET(0x0047cb80); r_esp += 4; return;
}

void f_0047cba0(void) /* sub_47CBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cba0);
    /* 0047cba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047cba7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cba9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047cbaf: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x47cbb4u); f_00637810();
    /* 0047cbb4: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047cbb7: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cbb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cbba: ret  */ FN_RET(0x0047cba0); r_esp += 4; return;
}

void f_0047cbe0(void) /* sub_47CBE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cbe0);
    /* 0047cbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cbe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cbe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047cbe7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cbea: mov al, byte ptr [eax + 0x494] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x494u))) & 0xffu);
    /* 0047cbf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cbf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cbf3: ret  */ FN_RET(0x0047cbe0); r_esp += 4; return;
}

void f_0047cc00(void) /* sub_47CC00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cc00);
    /* 0047cc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cc01: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cc03: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047cc06: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0047cc09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047cc10: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0047cc17: jmp 0x47cc22 */ goto L_0047cc22;
L_0047cc19:; BB(0x0047cc19);
    /* 0047cc19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047cc1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047cc1f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0047cc22:; BB(0x0047cc22);
    /* 0047cc22: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047cc26: jge 0x47cc37 */ if ((fS==fO)) goto L_0047cc37;
L_0047cc28:; BB(0x0047cc28);
    /* 0047cc28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047cc2b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047cc2e: mov dword ptr [edx + ecx*4], 0xffffffff */ W32((u32)(r_edx+r_ecx*4), 0xffffffffu);
    /* 0047cc35: jmp 0x47cc19 */ goto L_0047cc19;
L_0047cc37:; BB(0x0047cc37);
    /* 0047cc37: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0047cc3e: jmp 0x47cc49 */ goto L_0047cc49;
L_0047cc40:; BB(0x0047cc40);
    /* 0047cc40: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047cc43: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047cc46: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0047cc49:; BB(0x0047cc49);
    /* 0047cc49: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047cc4d: jge 0x47cc9f */ if ((fS==fO)) goto L_0047cc9f;
L_0047cc4f:; BB(0x0047cc4f);
    /* 0047cc4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047cc52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cc53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047cc56: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47cc5bu); f_0047e390();
    /* 0047cc5b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047cc5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047cc61: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x47cc66u); f_004c61b0();
    /* 0047cc66: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0047cc69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cc6b: jne 0x47cc9d */ if (!fZ) goto L_0047cc9d;
L_0047cc6d:; BB(0x0047cc6d);
    /* 0047cc6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047cc70: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0047cc73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cc74: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47cc79u); f_005dcb00();
    /* 0047cc79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047cc7c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0047cc7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047cc82: cmp dword ptr [edx + 0xc], -1 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cc86: jne 0x47cc9d */ if (!fZ) goto L_0047cc9d;
L_0047cc88:; BB(0x0047cc88);
    /* 0047cc88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cc8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047cc8e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047cc91: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0047cc94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cc97: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047cc9a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047cc9d:; BB(0x0047cc9d);
    /* 0047cc9d: jmp 0x47cc40 */ goto L_0047cc40;
L_0047cc9f:; BB(0x0047cc9f);
    /* 0047cc9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cca2: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cca4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cca5: ret 4 */ FN_RET(0x0047cc00); r_esp += 8; return;
}

void f_0047ccb0(void) /* sub_47CCB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ccb0);
    /* 0047ccb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ccb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ccb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ccb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ccb7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ccbb: jne 0x47ccc1 */ if (!fZ) goto L_0047ccc1;
L_0047ccbd:; BB(0x0047ccbd);
    /* 0047ccbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047ccbf: jmp 0x47cccd */ goto L_0047cccd;
L_0047ccc1:; BB(0x0047ccc1);
    /* 0047ccc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047ccc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ccc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ccc8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47cccdu); f_0047e390();
L_0047cccd:; BB(0x0047cccd);
    /* 0047cccd: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ccd0: ret 4 */ FN_RET(0x0047ccb0); r_esp += 8; return;
}

void f_0047cce0(void) /* sub_47CCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cce0);
    /* 0047cce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cce1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cce3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047cce6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0047cce9: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0047ccec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047cced: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047ccf0: call 0x47cc00 */ r_esp -= 4; W32(r_esp, 0x47ccf5u); f_0047cc00();
    /* 0047ccf5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0047ccf8: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ccfc: jne 0x47cd02 */ if (!fZ) goto L_0047cd02;
L_0047ccfe:; BB(0x0047ccfe);
    /* 0047ccfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047cd00: jmp 0x47cd26 */ goto L_0047cd26;
L_0047cd02:; BB(0x0047cd02);
    /* 0047cd02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047cd05: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047cd08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cd09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cd0b: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x47cd10u); f_0062fc30();
    /* 0047cd10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047cd13: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0047cd16: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047cd19: mov eax, dword ptr [ebp + edx*4 - 0x1c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe4u));
    /* 0047cd1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047cd1e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047cd21: call 0x47ccb0 */ r_esp -= 4; W32(r_esp, 0x47cd26u); f_0047ccb0();
L_0047cd26:; BB(0x0047cd26);
    /* 0047cd26: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cd28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cd29: ret  */ FN_RET(0x0047cce0); r_esp += 4; return;
}

void f_0047cd30(void) /* sub_47CD30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cd30);
    /* 0047cd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cd31: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cd33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047cd36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0047cd39: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047cd40: jmp 0x47cd4b */ goto L_0047cd4b;
L_0047cd42:; BB(0x0047cd42);
    /* 0047cd42: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047cd45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047cd48: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047cd4b:; BB(0x0047cd4b);
    /* 0047cd4b: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047cd4f: jge 0x47cd88 */ if ((fS==fO)) goto L_0047cd88;
L_0047cd51:; BB(0x0047cd51);
    /* 0047cd51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047cd54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cd55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047cd58: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47cd5du); f_0047e390();
    /* 0047cd5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047cd60: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cd64: je 0x47cd86 */ if (fZ) goto L_0047cd86;
L_0047cd66:; BB(0x0047cd66);
    /* 0047cd66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cd69: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x47cd6eu); f_004c61b0();
    /* 0047cd6e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0047cd71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cd73: jne 0x47cd86 */ if (!fZ) goto L_0047cd86;
L_0047cd75:; BB(0x0047cd75);
    /* 0047cd75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cd78: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47cd7du); f_004c7010();
    /* 0047cd7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cd80: jne 0x47cd86 */ if (!fZ) goto L_0047cd86;
L_0047cd82:; BB(0x0047cd82);
    /* 0047cd82: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047cd84: jmp 0x47cd8a */ goto L_0047cd8a;
L_0047cd86:; BB(0x0047cd86);
    /* 0047cd86: jmp 0x47cd42 */ goto L_0047cd42;
L_0047cd88:; BB(0x0047cd88);
    /* 0047cd88: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0047cd8a:; BB(0x0047cd8a);
    /* 0047cd8a: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cd8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cd8d: ret  */ FN_RET(0x0047cd30); r_esp += 4; return;
}

void f_0047cd90(void) /* sub_47CD90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cd90);
    /* 0047cd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cd91: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cd93: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047cd96: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0047cd99: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0047cd9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047cda0: call 0x47cd30 */ r_esp -= 4; W32(r_esp, 0x47cda5u); f_0047cd30();
    /* 0047cda5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047cda8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cdaa: jne 0x47cdb0 */ if (!fZ) goto L_0047cdb0;
L_0047cdac:; BB(0x0047cdac);
    /* 0047cdac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047cdae: jmp 0x47cdf9 */ goto L_0047cdf9;
L_0047cdb0:; BB(0x0047cdb0);
    /* 0047cdb0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cdb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cdb4: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x47cdb9u); f_0062fc30();
    /* 0047cdb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047cdbc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047cdbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047cdc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cdc3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047cdc6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47cdcbu); f_0047e390();
    /* 0047cdcb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047cdce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047cdd1: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x47cdd6u); f_004c61b0();
    /* 0047cdd6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0047cdd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cddb: jne 0x47cdef */ if (!fZ) goto L_0047cdef;
L_0047cddd:; BB(0x0047cddd);
    /* 0047cddd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047cde0: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47cde5u); f_004c7010();
    /* 0047cde5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cde8: jne 0x47cdef */ if (!fZ) goto L_0047cdef;
L_0047cdea:; BB(0x0047cdea);
    /* 0047cdea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047cded: jmp 0x47cdf9 */ goto L_0047cdf9;
L_0047cdef:; BB(0x0047cdef);
    /* 0047cdef: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0047cdf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cdf5: je 0x47cdb0 */ if (fZ) goto L_0047cdb0;
L_0047cdf7:; BB(0x0047cdf7);
    /* 0047cdf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0047cdf9:; BB(0x0047cdf9);
    /* 0047cdf9: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cdfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cdfc: ret  */ FN_RET(0x0047cd90); r_esp += 4; return;
}

void f_0047ce00(void) /* sub_47CE00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ce00);
    /* 0047ce00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ce01: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ce03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ce04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ce07: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ce0d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x47ce12u); f_005da7b0();
    /* 0047ce12: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047ce15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ce17: je 0x47ce34 */ if (fZ) goto L_0047ce34;
L_0047ce19:; BB(0x0047ce19);
    /* 0047ce19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ce1c: call 0x480d20 */ r_esp -= 4; W32(r_esp, 0x47ce21u); f_00480d20();
    /* 0047ce21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047ce24: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0047ce26: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047ce29: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047ce2b: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0047ce2d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0047ce30: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0047ce32: jmp 0x47ce52 */ goto L_0047ce52;
L_0047ce34:; BB(0x0047ce34);
    /* 0047ce34: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0047ce37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ce38: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047ce3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ce3c: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0047ce42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047ce44: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0047ce4a: mov eax, dword ptr [edx + 0x26c] */ r_eax = R32((u32)(r_edx+0x26cu));
    /* 0047ce50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ce52u); call_ind(t); }
L_0047ce52:; BB(0x0047ce52);
    /* 0047ce52: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ce54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ce55: ret 8 */ FN_RET(0x0047ce00); r_esp += 12; return;
}

void f_0047ce60(void) /* sub_47CE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ce60);
    /* 0047ce60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ce61: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ce63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ce64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ce67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ce6a: mov eax, dword ptr [eax + 0x45c] */ r_eax = R32((u32)(r_eax+0x45cu));
    /* 0047ce70: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ce72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ce73: ret  */ FN_RET(0x0047ce60); r_esp += 4; return;
}

