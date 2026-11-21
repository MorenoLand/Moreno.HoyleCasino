#include "protos.h"

void f_005f50c0(void) /* sub_5F50C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f50c0);
    /* 005f50c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f50c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f50c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f50c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f50c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f50ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f50cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f50cf: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005f50d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f50d4u); call_ind(t); }
    /* 005f50d4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f50d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f50d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f50db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f50dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f50df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f50e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f50e4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f50e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f50e9u); call_ind(t); }
    /* 005f50e9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005f50ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f50ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f50f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f50f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f50f5: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005f50f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f50fau); call_ind(t); }
    /* 005f50fa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f50fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f50fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5101: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5f5106u); f_005f53e0();
    /* 005f5106: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5109: ret 0x10 */ FN_RET(0x005f50c0); r_esp += 20; return;
}

void f_005f5460(void) /* sub_5F5460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5460);
    /* 005f5460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5461: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5467: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f546b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f546d: je 0x5f547e */ if (fZ) goto L_005f547e;
L_005f546f:; BB(0x005f546f);
    /* 005f546f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5472: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5474: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5477: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f547a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f547cu); call_ind(t); }
    /* 005f547c: jmp 0x5f548b */ goto L_005f548b;
L_005f547e:; BB(0x005f547e);
    /* 005f547e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5481: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5483: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5486: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005f5489: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f548bu); call_ind(t); }
L_005f548b:; BB(0x005f548b);
    /* 005f548b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f548d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f548e: ret 4 */ FN_RET(0x005f5460); r_esp += 8; return;
}

void f_005f54a0(void) /* sub_5F54A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f54a0);
    /* 005f54a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f54a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f54a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f54a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f54a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f54aa: movzx eax, byte ptr [eax + 0x24] */ r_eax = (u32)R8((u32)(r_eax+0x24u));
    /* 005f54ae: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005f54b0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005f54b2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f54b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f54b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f54b8: ret  */ FN_RET(0x005f54a0); r_esp += 4; return;
}

void f_005f54e0(void) /* sub_5F54E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f54e0);
    /* 005f54e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f54e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f54e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f54e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f54e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f54ea: movzx eax, byte ptr [eax + 0x24] */ r_eax = (u32)R8((u32)(r_eax+0x24u));
    /* 005f54ee: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005f54f0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005f54f2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f54f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f54f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f54f8: ret  */ FN_RET(0x005f54e0); r_esp += 4; return;
}

void f_005f5530(void) /* sub_5F5530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5530);
    /* 005f5530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5531: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5537: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f553a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f553d: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5540: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5543: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005f5546: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5548: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5549: ret 4 */ FN_RET(0x005f5530); r_esp += 8; return;
}

void f_005f5550(void) /* sub_5F5550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5550);
    /* 005f5550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5551: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f555a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f555d: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 005f5560: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f5563: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5566: ret  */ FN_RET(0x005f5550); r_esp += 4; return;
}

void f_005f5570(void) /* sub_5F5570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5570);
    /* 005f5570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5571: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f557a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f557d: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5580: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5583: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 005f5586: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5588: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5589: ret 4 */ FN_RET(0x005f5570); r_esp += 8; return;
}

void f_005f5590(void) /* sub_5F5590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5590);
    /* 005f5590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5591: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f559a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f559d: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005f55a0: sub eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f55a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f55a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f55a6: ret  */ FN_RET(0x005f5590); r_esp += 4; return;
}

void f_005f5620(void) /* sub_5F5620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5620);
    /* 005f5620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5621: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5627: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f562a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f562d: mov byte ptr [eax + 0x44], cl */ W8((u32)(r_eax+0x44u), (u8)r_ecx);
    /* 005f5630: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5632: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5633: ret 4 */ FN_RET(0x005f5620); r_esp += 8; return;
}

void f_005f5940(void) /* sub_5F5940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5940);
    /* 005f5940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5941: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5943: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5946: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f5949: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f594c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5950: je 0x5f59ac */ if (fZ) goto L_005f59ac;
L_005f5952:; BB(0x005f5952);
    /* 005f5952: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5955: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5957: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f595a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005f595d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f5960: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f5963: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5966: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005f5969: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f596c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f596f: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005f5972: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f5975: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5979: jg 0x5f597d */ if ((!fZ&&fS==fO)) goto L_005f597d;
L_005f597b:; BB(0x005f597b);
    /* 005f597b: jmp 0x5f599d */ goto L_005f599d;
L_005f597d:; BB(0x005f597d);
    /* 005f597d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5980: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f5983: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f5987: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f598a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f598d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5990: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5993: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f5997: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f599a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f599d:; BB(0x005f599d);
    /* 005f599d: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005f59a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f59a1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f59a4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f59a7: call 0x5f9500 */ r_esp -= 4; W32(r_esp, 0x5f59acu); f_005f9500();
L_005f59ac:; BB(0x005f59ac);
    /* 005f59ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005f59ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f59af: ret 4 */ FN_RET(0x005f5940); r_esp += 8; return;
}

void f_005f5d50(void) /* sub_5F5D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5d50);
    /* 005f5d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5d51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5d53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5d56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f5d59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5d5c: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5d63: je 0x5f5daa */ if (fZ) goto L_005f5daa;
L_005f5d65:; BB(0x005f5d65);
    /* 005f5d65: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5d68: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 005f5d6e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f5d71: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5d74: mov dword ptr [eax + 0x180], 0 */ W32((u32)(r_eax+0x180u), 0x0u);
    /* 005f5d7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5d81: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f5d84: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5d87: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5d8a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5d8e: je 0x5f5da3 */ if (fZ) goto L_005f5da3;
L_005f5d90:; BB(0x005f5d90);
    /* 005f5d90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5d92: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5d95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f5d97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5d9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f5d9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5d9eu); call_ind(t); }
    /* 005f5d9e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f5da1: jmp 0x5f5daa */ goto L_005f5daa;
L_005f5da3:; BB(0x005f5da3);
    /* 005f5da3: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005f5daa:; BB(0x005f5daa);
    /* 005f5daa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5dad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f5db0: mov dword ptr [ecx + 0x180], edx */ W32((u32)(r_ecx+0x180u), r_edx);
    /* 005f5db6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5db9: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5dc0: je 0x5f5de1 */ if (fZ) goto L_005f5de1;
L_005f5dc2:; BB(0x005f5dc2);
    /* 005f5dc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5dc4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5dc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5dc8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5dcb: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 005f5dd1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5dd4: mov ecx, dword ptr [ecx + 0x180] */ r_ecx = R32((u32)(r_ecx+0x180u));
    /* 005f5dda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f5ddc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f5ddf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5de1u); call_ind(t); }
L_005f5de1:; BB(0x005f5de1);
    /* 005f5de1: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5de3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5de4: ret 4 */ FN_RET(0x005f5d50); r_esp += 8; return;
}

void f_005f5df0(void) /* sub_5F5DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5df0);
    /* 005f5df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5df1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5df3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5df6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f5df9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5dfc: cmp dword ptr [eax + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5e03: je 0x5f5e37 */ if (fZ) goto L_005f5e37;
L_005f5e05:; BB(0x005f5e05);
    /* 005f5e05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5e08: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005f5e0e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5e11: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5e14: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f5e17: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5e1b: je 0x5f5e30 */ if (fZ) goto L_005f5e30;
L_005f5e1d:; BB(0x005f5e1d);
    /* 005f5e1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5e1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5e22: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5e24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5e27: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f5e29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5e2bu); call_ind(t); }
    /* 005f5e2b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f5e2e: jmp 0x5f5e37 */ goto L_005f5e37;
L_005f5e30:; BB(0x005f5e30);
    /* 005f5e30: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005f5e37:; BB(0x005f5e37);
    /* 005f5e37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5e3a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f5e3d: mov dword ptr [ecx + 0x17c], edx */ W32((u32)(r_ecx+0x17cu), r_edx);
    /* 005f5e43: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5e46: cmp dword ptr [eax + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5e4d: je 0x5f5e61 */ if (fZ) goto L_005f5e61;
L_005f5e4f:; BB(0x005f5e4f);
    /* 005f5e4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5e52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5e53: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5e56: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f5e5c: call 0x5fc220 */ r_esp -= 4; W32(r_esp, 0x5f5e61u); f_005fc220();
L_005f5e61:; BB(0x005f5e61);
    /* 005f5e61: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5e63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5e64: ret 4 */ FN_RET(0x005f5df0); r_esp += 8; return;
}

