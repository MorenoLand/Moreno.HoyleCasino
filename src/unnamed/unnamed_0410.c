#include "protos.h"

void f_00410030(void) /* sub_410030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410030);
    /* 00410030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410031: mov ebp, esp */ r_ebp = r_esp;
    /* 00410033: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410036: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00410039: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041003e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00410041: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410046u); f_005eb240();
    /* 00410046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00410048: jl 0x4100b0 */ if ((fS!=fO)) goto L_004100b0;
L_0041004a:; BB(0x0041004a);
    /* 0041004a: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410050: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00410053: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410058u); f_005eb240();
    /* 00410058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0041005a: jl 0x4100b0 */ if ((fS!=fO)) goto L_004100b0;
L_0041005c:; BB(0x0041005c);
    /* 0041005c: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00410062: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00410065: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x41006au); f_005eb240();
    /* 0041006a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0041006c: jl 0x4100b0 */ if ((fS!=fO)) goto L_004100b0;
L_0041006e:; BB(0x0041006e);
    /* 0041006e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00410074: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x410079u); f_00637630();
    /* 00410079: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041007c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041007e: je 0x4100b0 */ if (fZ) goto L_004100b0;
L_00410080:; BB(0x00410080);
    /* 00410080: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 00410087: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410089: jne 0x4100b0 */ if (!fZ) goto L_004100b0;
L_0041008b:; BB(0x0041008b);
    /* 0041008b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041008e: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00410092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410094: jne 0x4100b0 */ if (!fZ) goto L_004100b0;
L_00410096:; BB(0x00410096);
    /* 00410096: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041009c: movzx edx, byte ptr [ecx + 0x4d8] */ r_edx = (u32)R8((u32)(r_ecx+0x4d8u));
    /* 004100a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a5: jne 0x4100b0 */ if (!fZ) goto L_004100b0;
L_004100a7:; BB(0x004100a7);
    /* 004100a7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004100ae: jmp 0x4100b7 */ goto L_004100b7;
L_004100b0:; BB(0x004100b0);
    /* 004100b0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004100b7:; BB(0x004100b7);
    /* 004100b7: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004100ba: mov esp, ebp */ r_esp = r_ebp;
    /* 004100bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004100bd: ret  */ FN_RET(0x00410030); r_esp += 4; return;
}

void f_00410e00(void) /* sub_410E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410e00);
    /* 00410e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00410e03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410e06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00410e09: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410e0e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00410e11: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410e16u); f_005eb240();
    /* 00410e16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00410e18: jl 0x410e80 */ if ((fS!=fO)) goto L_00410e80;
L_00410e1a:; BB(0x00410e1a);
    /* 00410e1a: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410e20: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00410e23: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410e28u); f_005eb240();
    /* 00410e28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00410e2a: jl 0x410e80 */ if ((fS!=fO)) goto L_00410e80;
L_00410e2c:; BB(0x00410e2c);
    /* 00410e2c: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00410e32: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00410e35: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410e3au); f_005eb240();
    /* 00410e3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00410e3c: jl 0x410e80 */ if ((fS!=fO)) goto L_00410e80;
L_00410e3e:; BB(0x00410e3e);
    /* 00410e3e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00410e44: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x410e49u); f_00637630();
    /* 00410e49: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00410e4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410e4e: je 0x410e80 */ if (fZ) goto L_00410e80;
L_00410e50:; BB(0x00410e50);
    /* 00410e50: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 00410e57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410e59: jne 0x410e80 */ if (!fZ) goto L_00410e80;
L_00410e5b:; BB(0x00410e5b);
    /* 00410e5b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410e5e: movzx eax, byte ptr [edx + 0x20] */ r_eax = (u32)R8((u32)(r_edx+0x20u));
    /* 00410e62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410e64: jne 0x410e80 */ if (!fZ) goto L_00410e80;
L_00410e66:; BB(0x00410e66);
    /* 00410e66: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410e6c: movzx edx, byte ptr [ecx + 0x4d8] */ r_edx = (u32)R8((u32)(r_ecx+0x4d8u));
    /* 00410e73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410e75: jne 0x410e80 */ if (!fZ) goto L_00410e80;
L_00410e77:; BB(0x00410e77);
    /* 00410e77: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00410e7e: jmp 0x410e87 */ goto L_00410e87;
L_00410e80:; BB(0x00410e80);
    /* 00410e80: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00410e87:; BB(0x00410e87);
    /* 00410e87: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00410e8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00410e8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410e8d: ret  */ FN_RET(0x00410e00); r_esp += 4; return;
}

