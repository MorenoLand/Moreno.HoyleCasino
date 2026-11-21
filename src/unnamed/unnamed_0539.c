#include "protos.h"

void f_00539a50(void) /* sub_539A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539a50);
    /* 00539a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00539a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539a57: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00539a5d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x539a62u); f_005da7b0();
    /* 00539a62: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00539a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539a67: je 0x539a7f */ if (fZ) goto L_00539a7f;
L_00539a69:; BB(0x00539a69);
    /* 00539a69: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00539a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539a6d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00539a70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539a71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539a75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539a78: call 0x539e90 */ r_esp -= 4; W32(r_esp, 0x539a7du); f_00539e90();
    /* 00539a7d: jmp 0x539a93 */ goto L_00539a93;
L_00539a7f:; BB(0x00539a7f);
    /* 00539a7f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00539a82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539a83: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00539a86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539a87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539a8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539a8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539a8e: call 0x539aa0 */ r_esp -= 4; W32(r_esp, 0x539a93u); f_00539aa0();
L_00539a93:; BB(0x00539a93);
    /* 00539a93: mov esp, ebp */ r_esp = r_ebp;
    /* 00539a95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539a96: ret 0xc */ FN_RET(0x00539a50); r_esp += 16; return;
}

void f_00539aa0(void) /* sub_539AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539aa0);
    /* 00539aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00539aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539aa7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00539aaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539aab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539aae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539aaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539ab2: call 0x539ae0 */ r_esp -= 4; W32(r_esp, 0x539ab7u); f_00539ae0();
    /* 00539ab7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00539aba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539abb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00539abe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539abf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539ac2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539ac3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539ac6: call 0x539ca0 */ r_esp -= 4; W32(r_esp, 0x539acbu); f_00539ca0();
    /* 00539acb: mov esp, ebp */ r_esp = r_ebp;
    /* 00539acd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539ace: ret 0xc */ FN_RET(0x00539aa0); r_esp += 16; return;
}

void f_00539e90(void) /* sub_539E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539e90);
    /* 00539e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00539e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539e97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00539e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539e9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539e9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539e9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539ea2: call 0x53a3c0 */ r_esp -= 4; W32(r_esp, 0x539ea7u); f_0053a3c0();
    /* 00539ea7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00539eaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539eab: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00539eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539eaf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539eb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539eb6: call 0x53a1d0 */ r_esp -= 4; W32(r_esp, 0x539ebbu); f_0053a1d0();
    /* 00539ebb: mov esp, ebp */ r_esp = r_ebp;
    /* 00539ebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539ebe: ret 0xc */ FN_RET(0x00539e90); r_esp += 16; return;
}

void f_00539ed0(void) /* sub_539ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539ed0);
    /* 00539ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00539ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539ed7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539edb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x539ee0u); f_005dcb00();
    /* 00539ee0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539ee3: mov ecx, eax */ r_ecx = r_eax;
    /* 00539ee5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x539eeau); f_005d5a50();
    /* 00539eea: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539eed: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00539eef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00539ef1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539ef3: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00539ef6: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00539ef8: mov esp, ebp */ r_esp = r_ebp;
    /* 00539efa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539efb: ret 8 */ FN_RET(0x00539ed0); r_esp += 12; return;
}

void f_00539f00(void) /* sub_539F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539f00);
    /* 00539f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00539f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539f07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539f0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539f0b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x539f10u); f_005dcb00();
    /* 00539f10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539f13: mov ecx, eax */ r_ecx = r_eax;
    /* 00539f15: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x539f1au); f_005d5a50();
    /* 00539f1a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00539f1d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00539f20: lea ecx, [edx + ecx*2] */ r_ecx = (u32)(r_edx+r_ecx*2);
    /* 00539f23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00539f25: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539f27: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00539f2a: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00539f2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00539f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539f2f: ret 0xc */ FN_RET(0x00539f00); r_esp += 16; return;
}

void f_00539f40(void) /* sub_539F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539f40);
    /* 00539f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00539f43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00539f46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00539f49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539f4b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00539f4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539f50: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539f53: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 00539f59: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00539f60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539f61: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x539f66u); f_00462ba0();
    /* 00539f66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539f69: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00539f6c: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539f70: jle 0x539f79 */ if ((fZ||fS!=fO)) goto L_00539f79;
L_00539f72:; BB(0x00539f72);
    /* 00539f72: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00539f74: jmp 0x53a043 */ goto L_0053a043;
L_00539f79:; BB(0x00539f79);
    /* 00539f79: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00539f7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539f7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539f80: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539f83: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 00539f89: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00539f90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539f91: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x539f96u); f_004630c0();
    /* 00539f96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539f99: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539f9c: jle 0x539fa5 */ if ((fZ||fS!=fO)) goto L_00539fa5;
L_00539f9e:; BB(0x00539f9e);
    /* 00539f9e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00539fa0: jmp 0x53a043 */ goto L_0053a043;
L_00539fa5:; BB(0x00539fa5);
    /* 00539fa5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00539fa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539fa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539fac: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539faf: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 00539fb5: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00539fbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539fbd: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x539fc2u); f_004630c0();
    /* 00539fc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539fc5: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539fc8: jne 0x53a041 */ if (!fZ) goto L_0053a041;
L_00539fca:; BB(0x00539fca);
    /* 00539fca: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00539fcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00539fce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539fd1: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539fd4: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 00539fda: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00539fe1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539fe2: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x539fe7u); f_004630c0();
    /* 00539fe7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539fea: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539fed: jle 0x539ff3 */ if ((fZ||fS!=fO)) goto L_00539ff3;
L_00539fef:; BB(0x00539fef);
    /* 00539fef: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00539ff1: jmp 0x53a043 */ goto L_0053a043;
L_00539ff3:; BB(0x00539ff3);
    /* 00539ff3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00539ff5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00539ff7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539ffa: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539ffd: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053a003: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 0053a00a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a00b: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x53a010u); f_004630c0();
    /* 0053a010: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a013: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a016: jne 0x53a041 */ if (!fZ) goto L_0053a041;
L_0053a018:; BB(0x0053a018);
    /* 0053a018: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a01a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a01c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053a01f: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053a022: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053a028: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 0053a02f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a030: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x53a035u); f_004630c0();
    /* 0053a035: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a038: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a03b: jl 0x53a041 */ if ((fS!=fO)) goto L_0053a041;
L_0053a03d:; BB(0x0053a03d);
    /* 0053a03d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053a03f: jmp 0x53a043 */ goto L_0053a043;
L_0053a041:; BB(0x0053a041);
    /* 0053a041: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0053a043:; BB(0x0053a043);
    /* 0053a043: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a046: ret 4 */ FN_RET(0x00539f40); r_esp += 8; return;
}

