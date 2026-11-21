#include "protos.h"

void f_0047b9a0(void) /* sub_47B9A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047b9a0);
    /* 0047b9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047b9a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047b9a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047b9aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b9ad: mov dword ptr [eax + 0x488], ecx */ W32((u32)(r_eax+0x488u), r_ecx);
    /* 0047b9b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0047b9b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047b9b6: ret 4 */ FN_RET(0x0047b9a0); r_esp += 8; return;
}

void f_0047bac0(void) /* sub_47BAC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bac0);
    /* 0047bac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bac7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bac9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bacc: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0047bad2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bad3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bad6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47badbu); f_0047e390();
    /* 0047badb: mov ecx, eax */ r_ecx = r_eax;
    /* 0047badd: call 0x4c70b0 */ r_esp -= 4; W32(r_esp, 0x47bae2u); f_004c70b0();
    /* 0047bae2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bae5: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47baeau); f_0047f950();
    /* 0047baea: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047baed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047baf0: cmp dword ptr [edx + 0x488], eax */ {  u32 a = R32((u32)(r_edx+0x488u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047baf6: jge 0x47bb21 */ if ((fS==fO)) goto L_0047bb21;
L_0047baf8:; BB(0x0047baf8);
    /* 0047baf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bafb: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0047bb01: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047bb04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb07: mov dword ptr [edx + 0x488], ecx */ W32((u32)(r_edx+0x488u), r_ecx);
    /* 0047bb0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb13: mov edx, dword ptr [ecx + 0x488] */ r_edx = R32((u32)(r_ecx+0x488u));
    /* 0047bb19: mov dword ptr [eax + 0x488], edx */ W32((u32)(r_eax+0x488u), r_edx);
    /* 0047bb1f: jmp 0x47bb2e */ goto L_0047bb2e;
L_0047bb21:; BB(0x0047bb21);
    /* 0047bb21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb24: mov dword ptr [eax + 0x488], 0 */ W32((u32)(r_eax+0x488u), 0x0u);
L_0047bb2e:; BB(0x0047bb2e);
    /* 0047bb2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb31: mov edx, dword ptr [ecx + 0x488] */ r_edx = R32((u32)(r_ecx+0x488u));
    /* 0047bb37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bb38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb3b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47bb40u); f_0047e390();
    /* 0047bb40: mov ecx, eax */ r_ecx = r_eax;
    /* 0047bb42: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47bb47u); f_004c6cb0();
    /* 0047bb47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047bb49: jne 0x47bb99 */ if (!fZ) goto L_0047bb99;
L_0047bb4b:; BB(0x0047bb4b);
    /* 0047bb4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb4e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47bb53u); f_0047f950();
    /* 0047bb53: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047bb56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb59: cmp dword ptr [ecx + 0x488], eax */ {  u32 a = R32((u32)(r_ecx+0x488u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047bb5f: jge 0x47bb8a */ if ((fS==fO)) goto L_0047bb8a;
L_0047bb61:; BB(0x0047bb61);
    /* 0047bb61: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb64: mov eax, dword ptr [edx + 0x488] */ r_eax = R32((u32)(r_edx+0x488u));
    /* 0047bb6a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047bb6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb70: mov dword ptr [ecx + 0x488], eax */ W32((u32)(r_ecx+0x488u), r_eax);
    /* 0047bb76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb7c: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0047bb82: mov dword ptr [edx + 0x488], ecx */ W32((u32)(r_edx+0x488u), r_ecx);
    /* 0047bb88: jmp 0x47bb97 */ goto L_0047bb97;
L_0047bb8a:; BB(0x0047bb8a);
    /* 0047bb8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb8d: mov dword ptr [edx + 0x488], 0 */ W32((u32)(r_edx+0x488u), 0x0u);
L_0047bb97:; BB(0x0047bb97);
    /* 0047bb97: jmp 0x47bb2e */ goto L_0047bb2e;
L_0047bb99:; BB(0x0047bb99);
    /* 0047bb99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bb9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bb9e: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0047bba4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bba5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bba8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47bbadu); f_0047e390();
    /* 0047bbad: mov ecx, eax */ r_ecx = r_eax;
    /* 0047bbaf: call 0x4c70b0 */ r_esp -= 4; W32(r_esp, 0x47bbb4u); f_004c70b0();
    /* 0047bbb4: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bbb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bbb7: ret  */ FN_RET(0x0047bac0); r_esp += 4; return;
}

void f_0047bbc0(void) /* sub_47BBC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bbc0);
    /* 0047bbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bbc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bbc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bbc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bbca: mov eax, dword ptr [eax + 0x488] */ r_eax = R32((u32)(r_eax+0x488u));
    /* 0047bbd0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bbd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bbd3: ret  */ FN_RET(0x0047bbc0); r_esp += 4; return;
}

void f_0047bc40(void) /* sub_47BC40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bc40);
    /* 0047bc40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc41: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bc43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bc47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bc4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047bc4d: mov dword ptr [eax + 0x434], ecx */ W32((u32)(r_eax+0x434u), r_ecx);
    /* 0047bc53: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bc55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bc56: ret 4 */ FN_RET(0x0047bc40); r_esp += 8; return;
}

void f_0047bc60(void) /* sub_47BC60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bc60);
    /* 0047bc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc61: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bc63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bc67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bc6a: mov eax, dword ptr [eax + 0x434] */ r_eax = R32((u32)(r_eax+0x434u));
    /* 0047bc70: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bc72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bc73: ret  */ FN_RET(0x0047bc60); r_esp += 4; return;
}

void f_0047bc80(void) /* sub_47BC80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bc80);
    /* 0047bc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bc87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bc8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047bc8d: mov dword ptr [eax + 0x438], ecx */ W32((u32)(r_eax+0x438u), r_ecx);
    /* 0047bc93: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bc95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bc96: ret 4 */ FN_RET(0x0047bc80); r_esp += 8; return;
}

void f_0047bcc0(void) /* sub_47BCC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bcc0);
    /* 0047bcc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bcc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bcc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bcc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bcc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bcca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047bccd: mov dword ptr [eax + 0x43c], ecx */ W32((u32)(r_eax+0x43cu), r_ecx);
    /* 0047bcd3: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bcd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bcd6: ret 4 */ FN_RET(0x0047bcc0); r_esp += 8; return;
}

void f_0047bd00(void) /* sub_47BD00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bd00);
    /* 0047bd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bd07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bd0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047bd0d: mov dword ptr [eax + 0x440], ecx */ W32((u32)(r_eax+0x440u), r_ecx);
    /* 0047bd13: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bd15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bd16: ret 4 */ FN_RET(0x0047bd00); r_esp += 8; return;
}

void f_0047bd40(void) /* sub_47BD40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bd40);
    /* 0047bd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bd47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bd4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047bd4d: mov dword ptr [eax + 0x444], ecx */ W32((u32)(r_eax+0x444u), r_ecx);
    /* 0047bd53: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bd55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bd56: ret 4 */ FN_RET(0x0047bd40); r_esp += 8; return;
}

void f_0047bd80(void) /* sub_47BD80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bd80);
    /* 0047bd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bd83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bd87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bd8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047bd8d: mov dword ptr [eax + 0x448], ecx */ W32((u32)(r_eax+0x448u), r_ecx);
    /* 0047bd93: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bd95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bd96: ret 4 */ FN_RET(0x0047bd80); r_esp += 8; return;
}

void f_0047bdc0(void) /* sub_47BDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bdc0);
    /* 0047bdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bdc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bdc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bdc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bdca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047bdcd: mov dword ptr [eax + 0x44c], ecx */ W32((u32)(r_eax+0x44cu), r_ecx);
    /* 0047bdd3: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bdd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bdd6: ret 4 */ FN_RET(0x0047bdc0); r_esp += 8; return;
}

