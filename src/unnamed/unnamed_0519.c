#include "protos.h"

void f_005198c0(void) /* sub_5198C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005198c0);
    /* 005198c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005198c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005198c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005198c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005198c7: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005198cc: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005198cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005198d2: add edx, dword ptr [ecx + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005198d5: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 005198d8: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005198dd: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005198e0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005198e3: add edx, dword ptr [ecx + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005198e6: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005198e9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005198ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005198ed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005198f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005198f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005198f4: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x5198f9u); f_005f8420();
    /* 005198f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005198fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005198fc: ret 8 */ FN_RET(0x005198c0); r_esp += 12; return;
}

void f_00519900(void) /* sub_519900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519900);
    /* 00519900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519901: mov ebp, esp */ r_ebp = r_esp;
    /* 00519903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519907: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051990a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051990d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00519910: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00519912: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519915: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00519917: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051991a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0051991d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51991fu); call_ind(t); }
    /* 0051991f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00519922: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519924: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00519927: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0051992a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51992cu); call_ind(t); }
    /* 0051992c: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00519930: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519932: je 0x519943 */ if (fZ) goto L_00519943;
L_00519934:; BB(0x00519934);
    /* 00519934: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519937: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00519939: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051993c: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0051993f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x519941u); call_ind(t); }
    /* 00519941: jmp 0x519950 */ goto L_00519950;
L_00519943:; BB(0x00519943);
    /* 00519943: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00519946: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519948: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051994b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051994e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519950u); call_ind(t); }
L_00519950:; BB(0x00519950);
    /* 00519950: mov esp, ebp */ r_esp = r_ebp;
    /* 00519952: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519953: ret 8 */ FN_RET(0x00519900); r_esp += 12; return;
}

void f_00519960(void) /* sub_519960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519960);
    /* 00519960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519961: mov ebp, esp */ r_ebp = r_esp;
    /* 00519963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519967: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051996a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051996d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00519970: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00519972: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519975: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00519977: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051997a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0051997d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51997fu); call_ind(t); }
    /* 0051997f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00519982: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519984: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00519987: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0051998a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51998cu); call_ind(t); }
    /* 0051998c: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00519990: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519992: je 0x5199a3 */ if (fZ) goto L_005199a3;
L_00519994:; BB(0x00519994);
    /* 00519994: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519997: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00519999: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051999c: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0051999f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5199a1u); call_ind(t); }
    /* 005199a1: jmp 0x5199b0 */ goto L_005199b0;
L_005199a3:; BB(0x005199a3);
    /* 005199a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005199a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005199a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005199ab: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005199ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5199b0u); call_ind(t); }
L_005199b0:; BB(0x005199b0);
    /* 005199b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005199b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005199b3: ret 8 */ FN_RET(0x00519960); r_esp += 12; return;
}

void f_005199c0(void) /* sub_5199C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005199c0);
    /* 005199c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005199c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005199c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005199c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005199c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005199ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005199cd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005199d0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005199d2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005199d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005199d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005199da: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005199dd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5199dfu); call_ind(t); }
    /* 005199df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005199e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005199e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005199e7: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005199ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5199ecu); call_ind(t); }
    /* 005199ec: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005199f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005199f2: je 0x519a03 */ if (fZ) goto L_00519a03;
L_005199f4:; BB(0x005199f4);
    /* 005199f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005199f7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005199f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005199fc: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005199ff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x519a01u); call_ind(t); }
    /* 00519a01: jmp 0x519a10 */ goto L_00519a10;
L_00519a03:; BB(0x00519a03);
    /* 00519a03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00519a06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519a08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00519a0b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00519a0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519a10u); call_ind(t); }
L_00519a10:; BB(0x00519a10);
    /* 00519a10: mov esp, ebp */ r_esp = r_ebp;
    /* 00519a12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519a13: ret 8 */ FN_RET(0x005199c0); r_esp += 12; return;
}

void f_00519a40(void) /* sub_519A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519a40);
    /* 00519a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00519a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519a47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519a4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00519a4d: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 00519a53: mov esp, ebp */ r_esp = r_ebp;
    /* 00519a55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519a56: ret 4 */ FN_RET(0x00519a40); r_esp += 8; return;
}

void f_00519e10(void) /* sub_519E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519e10);
    /* 00519e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00519e13: cmp dword ptr [0x79315c], 0 */ {  u32 a = R32((u32)(0x79315cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519e1a: je 0x519e31 */ if (fZ) goto L_00519e31;
L_00519e1c:; BB(0x00519e1c);
    /* 00519e1c: mov ecx, dword ptr [0x79315c] */ r_ecx = R32((u32)(0x79315cu));
    /* 00519e22: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x519e27u); f_005f8990();
    /* 00519e27: mov dword ptr [0x79315c], 0 */ W32((u32)(0x79315cu), 0x0u);
L_00519e31:; BB(0x00519e31);
    /* 00519e31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519e32: ret  */ FN_RET(0x00519e10); r_esp += 4; return;
}

void f_00519e40(void) /* sub_519E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519e40);
    /* 00519e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00519e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519e44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519e45: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00519e4c: jmp 0x519e57 */ goto L_00519e57;
L_00519e4e:; BB(0x00519e4e);
    /* 00519e4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519e51: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00519e54: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00519e57:; BB(0x00519e57);
    /* 00519e57: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00519e5b: jge 0x519e84 */ if ((fS==fO)) goto L_00519e84;
L_00519e5d:; BB(0x00519e5d);
    /* 00519e5d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00519e60: imul ecx, ecx, 0x180 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x180u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00519e66: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00519e69: imul edx, edx, 0x1c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00519e6c: lea eax, [ecx + edx + 0x7208dc] */ r_eax = (u32)(r_ecx+r_edx+0x7208dcu);
    /* 00519e73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519e76: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00519e79: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519e7c: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 00519e7f: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 00519e82: jmp 0x519e4e */ goto L_00519e4e;
L_00519e84:; BB(0x00519e84);
    /* 00519e84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00519e85: mov esp, ebp */ r_esp = r_ebp;
    /* 00519e87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519e88: ret  */ FN_RET(0x00519e40); r_esp += 4; return;
}

