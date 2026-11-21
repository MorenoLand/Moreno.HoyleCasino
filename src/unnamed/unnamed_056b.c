#include "protos.h"

void f_0056b130(void) /* sub_56B130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b130);
    /* 0056b130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b131: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b133: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b136: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056b139: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b13c: call 0x56ace0 */ r_esp -= 4; W32(r_esp, 0x56b141u); f_0056ace0();
    /* 0056b141: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b148: jmp 0x56b153 */ goto L_0056b153;
L_0056b14a:; BB(0x0056b14a);
    /* 0056b14a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b14d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b150: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b153:; BB(0x0056b153);
    /* 0056b153: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b157: jge 0x56b1a5 */ if ((fS==fO)) goto L_0056b1a5;
L_0056b159:; BB(0x0056b159);
    /* 0056b159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b15b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b15e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b15f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b162: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56b167u); f_0056b950();
    /* 0056b167: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056b16a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b16c: jne 0x56b170 */ if (!fZ) goto L_0056b170;
L_0056b16e:; BB(0x0056b16e);
    /* 0056b16e: jmp 0x56b14a */ goto L_0056b14a;
L_0056b170:; BB(0x0056b170);
    /* 0056b170: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0056b177: jmp 0x56b182 */ goto L_0056b182;
L_0056b179:; BB(0x0056b179);
    /* 0056b179: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b17c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b17f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0056b182:; BB(0x0056b182);
    /* 0056b182: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b186: jge 0x56b1a3 */ if ((fS==fO)) goto L_0056b1a3;
L_0056b188:; BB(0x0056b188);
    /* 0056b188: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b18b: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b18e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b191: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b198: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b19b: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 0056b1a1: jmp 0x56b179 */ goto L_0056b179;
L_0056b1a3:; BB(0x0056b1a3);
    /* 0056b1a3: jmp 0x56b14a */ goto L_0056b14a;
L_0056b1a5:; BB(0x0056b1a5);
    /* 0056b1a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b1ac: jmp 0x56b1b7 */ goto L_0056b1b7;
L_0056b1ae:; BB(0x0056b1ae);
    /* 0056b1ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b1b1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056b1b4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056b1b7:; BB(0x0056b1b7);
    /* 0056b1b7: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b1bb: jge 0x56b1f7 */ if ((fS==fO)) goto L_0056b1f7;
L_0056b1bd:; BB(0x0056b1bd);
    /* 0056b1bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b1c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b1c3: movzx edx, word ptr [ecx + eax*2 + 0x3ac] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x3acu));
    /* 0056b1cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b1cd: je 0x56b1f5 */ if (fZ) goto L_0056b1f5;
L_0056b1cf:; BB(0x0056b1cf);
    /* 0056b1cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b1d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1d3: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056b1d9: call 0x561f00 */ r_esp -= 4; W32(r_esp, 0x56b1deu); f_00561f00();
    /* 0056b1de: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0056b1e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b1e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1e8: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056b1ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b1f0: call 0x56ac70 */ r_esp -= 4; W32(r_esp, 0x56b1f5u); f_0056ac70();
L_0056b1f5:; BB(0x0056b1f5);
    /* 0056b1f5: jmp 0x56b1ae */ goto L_0056b1ae;
L_0056b1f7:; BB(0x0056b1f7);
    /* 0056b1f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b1fe: jmp 0x56b209 */ goto L_0056b209;
L_0056b200:; BB(0x0056b200);
    /* 0056b200: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b203: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b206: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b209:; BB(0x0056b209);
    /* 0056b209: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b20d: jge 0x56b240 */ if ((fS==fO)) goto L_0056b240;
L_0056b20f:; BB(0x0056b20f);
    /* 0056b20f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b211: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b214: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b215: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b218: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56b21du); f_0056b950();
    /* 0056b21d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056b220: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b222: jne 0x56b226 */ if (!fZ) goto L_0056b226;
L_0056b224:; BB(0x0056b224);
    /* 0056b224: jmp 0x56b200 */ goto L_0056b200;
L_0056b226:; BB(0x0056b226);
    /* 0056b226: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b229: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b22a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b22d: call 0x56ae50 */ r_esp -= 4; W32(r_esp, 0x56b232u); f_0056ae50();
    /* 0056b232: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b236: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b239: call 0x56aed0 */ r_esp -= 4; W32(r_esp, 0x56b23eu); f_0056aed0();
    /* 0056b23e: jmp 0x56b200 */ goto L_0056b200;
L_0056b240:; BB(0x0056b240);
    /* 0056b240: push 0x6ca254 */ { u32 v = 0x6ca254u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b245: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x56b24au); f_0062fde0();
    /* 0056b24a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b24d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b250: call 0x56b260 */ r_esp -= 4; W32(r_esp, 0x56b255u); f_0056b260();
    /* 0056b255: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b258: ret  */ FN_RET(0x0056b130); r_esp += 4; return;
}

void f_0056b260(void) /* sub_56B260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b260);
    /* 0056b260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b261: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b263: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b266: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056b269: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b270: jmp 0x56b27b */ goto L_0056b27b;
L_0056b272:; BB(0x0056b272);
    /* 0056b272: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b275: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b278: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b27b:; BB(0x0056b27b);
    /* 0056b27b: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b27f: jge 0x56b2a8 */ if ((fS==fO)) goto L_0056b2a8;
L_0056b281:; BB(0x0056b281);
    /* 0056b281: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b283: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b286: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b287: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b28a: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56b28fu); f_0056b950();
    /* 0056b28f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056b292: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b294: jne 0x56b298 */ if (!fZ) goto L_0056b298;
L_0056b296:; BB(0x0056b296);
    /* 0056b296: jmp 0x56b272 */ goto L_0056b272;
L_0056b298:; BB(0x0056b298);
    /* 0056b298: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b29a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b29d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b29e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b2a1: call 0x56b2b0 */ r_esp -= 4; W32(r_esp, 0x56b2a6u); f_0056b2b0();
    /* 0056b2a6: jmp 0x56b272 */ goto L_0056b272;
L_0056b2a8:; BB(0x0056b2a8);
    /* 0056b2a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b2aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b2ab: ret  */ FN_RET(0x0056b260); r_esp += 4; return;
}

void f_0056b2b0(void) /* sub_56B2B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b2b0);
    /* 0056b2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b2b3: sub esp, 0x214 */ {  u32 a = r_esp; u32 b = 0x214u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b2b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056b2be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056b2c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056b2c3: mov dword ptr [ebp - 0x214], ecx */ W32((u32)(r_ebp+0xfffffdecu), r_ecx);
    /* 0056b2c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b2cd: push 0x6ca26c */ { u32 v = 0x6ca26cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056b2d2: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0056b2d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b2d9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x56b2dfu); call_ind(t); }
    /* 0056b2df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b2e2: mov dword ptr [ebp - 0x210], 0 */ W32((u32)(r_ebp+0xfffffdf0u), 0x0u);
    /* 0056b2ec: jmp 0x56b2fd */ goto L_0056b2fd;
L_0056b2ee:; BB(0x0056b2ee);
    /* 0056b2ee: mov edx, dword ptr [ebp - 0x210] */ r_edx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0056b2f4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056b2f7: mov dword ptr [ebp - 0x210], edx */ W32((u32)(r_ebp+0xfffffdf0u), r_edx);
L_0056b2fd:; BB(0x0056b2fd);
    /* 0056b2fd: cmp dword ptr [ebp - 0x210], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b304: jge 0x56b3ba */ if ((fS==fO)) goto L_0056b3ba;
L_0056b30a:; BB(0x0056b30a);
    /* 0056b30a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b30d: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b310: mov ecx, dword ptr [ebp - 0x214] */ r_ecx = R32((u32)(r_ebp+0xfffffdecu));
    /* 0056b316: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056b31d: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0056b323: mov cx, word ptr [edx + eax*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 0056b327: mov word ptr [ebp - 0x20c], cx */ W16((u32)(r_ebp+0xfffffdf4u), (u16)r_ecx);
    /* 0056b32e: movzx edx, word ptr [ebp - 0x20c] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffdf4u));
    /* 0056b335: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b337: jne 0x56b34f */ if (!fZ) goto L_0056b34f;
L_0056b339:; BB(0x0056b339);
    /* 0056b339: push 0x6ca264 */ { u32 v = 0x6ca264u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b33e: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0056b344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b345: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x56b34au); f_00686ec6();
    /* 0056b34a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b34d: jmp 0x56b3b5 */ goto L_0056b3b5;
L_0056b34f:; BB(0x0056b34f);
    /* 0056b34f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b351: mov cx, word ptr [ebp - 0x20c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffdf4u))) & 0xffffu);
    /* 0056b358: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b359: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x56b35eu); f_00641290();
    /* 0056b35e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b362: mov dx, word ptr [ebp - 0x20c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffdf4u))) & 0xffffu);
    /* 0056b369: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b36a: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56b36fu); f_00641280();
    /* 0056b36f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b373: lea eax, [ebp - 0x208] */ r_eax = (u32)(r_ebp+0xfffffdf8u);
    /* 0056b379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b37a: call 0x6413c0 */ r_esp -= 4; W32(r_esp, 0x56b37fu); f_006413c0();
    /* 0056b37f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b382: cmp dword ptr [ebp - 0x210], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b389: jge 0x56b39f */ if ((fS==fO)) goto L_0056b39f;
L_0056b38b:; BB(0x0056b38b);
    /* 0056b38b: push 0x6ca260 */ { u32 v = 0x6ca260u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b390: lea ecx, [ebp - 0x208] */ r_ecx = (u32)(r_ebp+0xfffffdf8u);
    /* 0056b396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b397: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x56b39cu); f_00686ec6();
    /* 0056b39c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056b39f:; BB(0x0056b39f);
    /* 0056b39f: lea edx, [ebp - 0x208] */ r_edx = (u32)(r_ebp+0xfffffdf8u);
    /* 0056b3a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b3a6: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0056b3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b3ad: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x56b3b2u); f_00686ec6();
    /* 0056b3b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056b3b5:; BB(0x0056b3b5);
    /* 0056b3b5: jmp 0x56b2ee */ goto L_0056b2ee;
L_0056b3ba:; BB(0x0056b3ba);
    /* 0056b3ba: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0056b3be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b3c0: je 0x56b3d6 */ if (fZ) goto L_0056b3d6;
L_0056b3c2:; BB(0x0056b3c2);
    /* 0056b3c2: push 0x6bedd8 */ { u32 v = 0x6bedd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b3c7: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0056b3cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b3ce: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x56b3d3u); f_00686ec6();
    /* 0056b3d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056b3d6:; BB(0x0056b3d6);
    /* 0056b3d6: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0056b3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b3dd: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x56b3e2u); f_0062fde0();
    /* 0056b3e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b3e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b3e8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b3ea: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x56b3efu); f_00686d72();
    /* 0056b3ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b3f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b3f2: ret 8 */ FN_RET(0x0056b2b0); r_esp += 12; return;
}

void f_0056b400(void) /* sub_56B400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b400);
    /* 0056b400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b401: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b403: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b406: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056b409: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056b410: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b417: jmp 0x56b422 */ goto L_0056b422;
L_0056b419:; BB(0x0056b419);
    /* 0056b419: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b41c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b41f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b422:; BB(0x0056b422);
    /* 0056b422: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b426: jge 0x56b44e */ if ((fS==fO)) goto L_0056b44e;
L_0056b428:; BB(0x0056b428);
    /* 0056b428: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b42b: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b42e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b431: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b438: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b43b: movzx edx, word ptr [eax + ecx*2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 0056b43f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b441: je 0x56b44c */ if (fZ) goto L_0056b44c;
L_0056b443:; BB(0x0056b443);
    /* 0056b443: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b446: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b449: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0056b44c:; BB(0x0056b44c);
    /* 0056b44c: jmp 0x56b419 */ goto L_0056b419;
L_0056b44e:; BB(0x0056b44e);
    /* 0056b44e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b451: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b453: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b454: ret 4 */ FN_RET(0x0056b400); r_esp += 8; return;
}

void f_0056b460(void) /* sub_56B460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b460);
    /* 0056b460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b461: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056b467: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b46a: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b46d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b470: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056b477: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056b47a: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0056b47e: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 0056b482: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b484: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b485: ret 0xc */ FN_RET(0x0056b460); r_esp += 16; return;
}

void f_0056b490(void) /* sub_56B490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b490);
    /* 0056b490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b491: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056b497: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b499: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056b49c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b49d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b4a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b4a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b4a4: call 0x56b460 */ r_esp -= 4; W32(r_esp, 0x56b4a9u); f_0056b460();
    /* 0056b4a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b4ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b4ac: ret 8 */ FN_RET(0x0056b490); r_esp += 12; return;
}

void f_0056b4b0(void) /* sub_56B4B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b4b0);
    /* 0056b4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b4b3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b4b6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056b4bb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056b4bd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056b4c0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056b4c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b4ca: jmp 0x56b4d5 */ goto L_0056b4d5;
L_0056b4cc:; BB(0x0056b4cc);
    /* 0056b4cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b4cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b4d2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b4d5:; BB(0x0056b4d5);
    /* 0056b4d5: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b4d9: jge 0x56b4fc */ if ((fS==fO)) goto L_0056b4fc;
L_0056b4db:; BB(0x0056b4db);
    /* 0056b4db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b4de: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b4e1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056b4e4: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b4eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b4ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b4f1: mov ax, word ptr [eax + edx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 0056b4f5: mov word ptr [ebp + ecx*2 - 0x14], ax */ W16((u32)(r_ebp+r_ecx*2+0xffffffecu), (u16)r_eax);
    /* 0056b4fa: jmp 0x56b4cc */ goto L_0056b4cc;
L_0056b4fc:; BB(0x0056b4fc);
    /* 0056b4fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b503: jmp 0x56b50e */ goto L_0056b50e;
L_0056b505:; BB(0x0056b505);
    /* 0056b505: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b508: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b50b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0056b50e:; BB(0x0056b50e);
    /* 0056b50e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b512: jge 0x56b526 */ if ((fS==fO)) goto L_0056b526;
L_0056b514:; BB(0x0056b514);
    /* 0056b514: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b517: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b518: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b51b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b51c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056b51f: call 0x56b490 */ r_esp -= 4; W32(r_esp, 0x56b524u); f_0056b490();
    /* 0056b524: jmp 0x56b505 */ goto L_0056b505;
L_0056b526:; BB(0x0056b526);
    /* 0056b526: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b52d: jmp 0x56b538 */ goto L_0056b538;
L_0056b52f:; BB(0x0056b52f);
    /* 0056b52f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b532: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b535: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0056b538:; BB(0x0056b538);
    /* 0056b538: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b53c: jge 0x56b555 */ if ((fS==fO)) goto L_0056b555;
L_0056b53e:; BB(0x0056b53e);
    /* 0056b53e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b541: mov ax, word ptr [ebp + edx*2 - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+r_edx*2+0xffffffecu))) & 0xffffu);
    /* 0056b546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b547: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b54a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b54b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056b54e: call 0x56b570 */ r_esp -= 4; W32(r_esp, 0x56b553u); f_0056b570();
    /* 0056b553: jmp 0x56b52f */ goto L_0056b52f;
L_0056b555:; BB(0x0056b555);
    /* 0056b555: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b558: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b55a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x56b55fu); f_00686d72();
    /* 0056b55f: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b561: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b562: ret 4 */ FN_RET(0x0056b4b0); r_esp += 8; return;
}

void f_0056b570(void) /* sub_56B570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b570);
    /* 0056b570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b571: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b573: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b576: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b577: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056b57a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b57d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b57e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b581: call 0x56b400 */ r_esp -= 4; W32(r_esp, 0x56b586u); f_0056b400();
    /* 0056b586: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b588: jne 0x56b5a4 */ if (!fZ) goto L_0056b5a4;
L_0056b58a:; BB(0x0056b58a);
    /* 0056b58a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b58d: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b590: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b593: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0056b597: mov word ptr [edx + ecx + 0xf6], ax */ W16((u32)(r_edx+r_ecx+0xf6u), (u16)r_eax);
    /* 0056b59f: jmp 0x56b6ff */ goto L_0056b6ff;
L_0056b5a4:; BB(0x0056b5a4);
    /* 0056b5a4: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0056b5a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b5a9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56b5aeu); f_00641280();
    /* 0056b5ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b5b1: mov esi, eax */ r_esi = r_eax;
    /* 0056b5b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056b5b6: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b5b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b5bc: mov cx, word ptr [eax + edx + 0xf6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx+0xf6u))) & 0xffffu);
    /* 0056b5c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b5c5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56b5cau); f_00641280();
    /* 0056b5ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b5cd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b5cf: jg 0x56b634 */ if ((!fZ&&fS==fO)) goto L_0056b634;
L_0056b5d1:; BB(0x0056b5d1);
    /* 0056b5d1: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0056b5d8: jmp 0x56b5e3 */ goto L_0056b5e3;
L_0056b5da:; BB(0x0056b5da);
    /* 0056b5da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b5dd: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056b5e0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056b5e3:; BB(0x0056b5e3);
    /* 0056b5e3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b5e7: jle 0x56b61a */ if ((fZ||fS!=fO)) goto L_0056b61a;
L_0056b5e9:; BB(0x0056b5e9);
    /* 0056b5e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b5ec: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b5ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b5f2: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056b5f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b5fc: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b5ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b602: lea eax, [ecx + eax + 0xf6] */ r_eax = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056b609: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b60c: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b60f: mov dx, word ptr [edx + esi*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_esi*2+0xfffffffeu))) & 0xffffu);
    /* 0056b614: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 0056b618: jmp 0x56b5da */ goto L_0056b5da;
L_0056b61a:; BB(0x0056b61a);
    /* 0056b61a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b61d: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b620: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b623: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0056b627: mov word ptr [ecx + eax + 0xf6], dx */ W16((u32)(r_ecx+r_eax+0xf6u), (u16)r_edx);
    /* 0056b62f: jmp 0x56b6ff */ goto L_0056b6ff;
L_0056b634:; BB(0x0056b634);
    /* 0056b634: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b637: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b638: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b63b: call 0x56b400 */ r_esp -= 4; W32(r_esp, 0x56b640u); f_0056b400();
    /* 0056b640: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056b643: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056b646: jmp 0x56b651 */ goto L_0056b651;
L_0056b648:; BB(0x0056b648);
    /* 0056b648: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b64b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b64e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0056b651:; BB(0x0056b651);
    /* 0056b651: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b655: jle 0x56b6ff */ if ((fZ||fS!=fO)) goto L_0056b6ff;
L_0056b65b:; BB(0x0056b65b);
    /* 0056b65b: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0056b65f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b660: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56b665u); f_00641280();
    /* 0056b665: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b668: mov esi, eax */ r_esi = r_eax;
    /* 0056b66a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b66d: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b670: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b673: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056b67a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b67d: mov cx, word ptr [edx + eax*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 0056b681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b682: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56b687u); f_00641280();
    /* 0056b687: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b68a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b68c: jl 0x56b6fa */ if ((fS!=fO)) goto L_0056b6fa;
L_0056b68e:; BB(0x0056b68e);
    /* 0056b68e: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0056b695: jmp 0x56b6a0 */ goto L_0056b6a0;
L_0056b697:; BB(0x0056b697);
    /* 0056b697: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b69a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056b69d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0056b6a0:; BB(0x0056b6a0);
    /* 0056b6a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b6a3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b6a6: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b6a9: jle 0x56b6dc */ if ((fZ||fS!=fO)) goto L_0056b6dc;
L_0056b6ab:; BB(0x0056b6ab);
    /* 0056b6ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b6ae: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b6b1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b6b4: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b6bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b6be: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b6c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b6c4: lea ecx, [edx + ecx + 0xf6] */ r_ecx = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b6cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b6ce: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b6d1: mov ax, word ptr [eax + esi*2 - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_esi*2+0xfffffffeu))) & 0xffffu);
    /* 0056b6d6: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 0056b6da: jmp 0x56b697 */ goto L_0056b697;
L_0056b6dc:; BB(0x0056b6dc);
    /* 0056b6dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b6df: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b6e2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b6e5: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b6ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b6ef: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0056b6f3: mov word ptr [eax + ecx*2 + 2], dx */ W16((u32)(r_eax+r_ecx*2+0x2u), (u16)r_edx);
    /* 0056b6f8: jmp 0x56b6ff */ goto L_0056b6ff;
L_0056b6fa:; BB(0x0056b6fa);
    /* 0056b6fa: jmp 0x56b648 */ goto L_0056b648;
L_0056b6ff:; BB(0x0056b6ff);
    /* 0056b6ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b700: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b703: ret 8 */ FN_RET(0x0056b570); r_esp += 12; return;
}

void f_0056b710(void) /* sub_56B710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b710);
    /* 0056b710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b711: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b713: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b716: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056b71b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056b71d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0056b720: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056b723: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b72a: jmp 0x56b735 */ goto L_0056b735;
L_0056b72c:; BB(0x0056b72c);
    /* 0056b72c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b72f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b732: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b735:; BB(0x0056b735);
    /* 0056b735: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b739: jge 0x56b75c */ if ((fS==fO)) goto L_0056b75c;
L_0056b73b:; BB(0x0056b73b);
    /* 0056b73b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b73e: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b741: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056b744: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b74b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b74e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b751: mov ax, word ptr [eax + edx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 0056b755: mov word ptr [ebp + ecx*2 - 0x18], ax */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), (u16)r_eax);
    /* 0056b75a: jmp 0x56b72c */ goto L_0056b72c;
L_0056b75c:; BB(0x0056b75c);
    /* 0056b75c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b75f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b760: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056b763: call 0x56b4b0 */ r_esp -= 4; W32(r_esp, 0x56b768u); f_0056b4b0();
    /* 0056b768: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0056b76e: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0056b774: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056b777: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056b77a: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b77d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056b780: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056b787: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b788: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056b78b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b78c: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 0056b792: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x56b797u); f_005592a0();
    /* 0056b797: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056b79a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0056b79c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056b79f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0056b7a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b7a2: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056b7a8: call 0x5698c0 */ r_esp -= 4; W32(r_esp, 0x56b7adu); f_005698c0();
    /* 0056b7ad: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056b7b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b7b7: jmp 0x56b7c2 */ goto L_0056b7c2;
L_0056b7b9:; BB(0x0056b7b9);
    /* 0056b7b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b7bc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056b7bf: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056b7c2:; BB(0x0056b7c2);
    /* 0056b7c2: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b7c6: jge 0x56b7e9 */ if ((fS==fO)) goto L_0056b7e9;
L_0056b7c8:; BB(0x0056b7c8);
    /* 0056b7c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b7cb: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b7ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056b7d1: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056b7d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b7db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b7de: mov cx, word ptr [ebp + ecx*2 - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xffffffe8u))) & 0xffffu);
    /* 0056b7e3: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 0056b7e7: jmp 0x56b7b9 */ goto L_0056b7b9;
L_0056b7e9:; BB(0x0056b7e9);
    /* 0056b7e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b7ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b7ef: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b7f1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x56b7f6u); f_00686d72();
    /* 0056b7f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b7f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b7f9: ret 8 */ FN_RET(0x0056b710); r_esp += 12; return;
}

void f_0056b800(void) /* sub_56B800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b800);
    /* 0056b800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b801: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b803: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b809: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056b80e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056b810: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056b813: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0056b819: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 0056b823: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0056b82d: push 0x6ca2a0 */ { u32 v = 0x6ca2a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b832: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x56b837u); f_0062fde0();
    /* 0056b837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b83a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b841: jmp 0x56b84c */ goto L_0056b84c;
L_0056b843:; BB(0x0056b843);
    /* 0056b843: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b846: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b849: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b84c:; BB(0x0056b84c);
    /* 0056b84c: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b850: jge 0x56b8ef */ if ((fS==fO)) goto L_0056b8ef;
L_0056b856:; BB(0x0056b856);
    /* 0056b856: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b858: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b85b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b85c: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0056b862: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56b867u); f_0056b950();
    /* 0056b867: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056b86a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b86c: jne 0x56b870 */ if (!fZ) goto L_0056b870;
L_0056b86e:; BB(0x0056b86e);
    /* 0056b86e: jmp 0x56b843 */ goto L_0056b843;
L_0056b870:; BB(0x0056b870);
    /* 0056b870: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0056b876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b877: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b87a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b87b: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0056b881: call 0x56b710 */ r_esp -= 4; W32(r_esp, 0x56b886u); f_0056b710();
    /* 0056b886: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0056b88c: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b893: je 0x56b8ea */ if (fZ) goto L_0056b8ea;
L_0056b895:; BB(0x0056b895);
    /* 0056b895: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0056b89b: add edx, dword ptr [ebp - 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056b8a1: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 0056b8a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b8ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8ad: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0056b8b3: call 0x56b2b0 */ r_esp -= 4; W32(r_esp, 0x56b8b8u); f_0056b2b0();
    /* 0056b8b8: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 0056b8be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8bf: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0056b8c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8c6: push 0x6ca278 */ { u32 v = 0x6ca278u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8cb: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0056b8d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8d2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x56b8d8u); call_ind(t); }
    /* 0056b8d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b8db: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0056b8e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8e2: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x56b8e7u); f_0062fde0();
    /* 0056b8e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056b8ea:; BB(0x0056b8ea);
    /* 0056b8ea: jmp 0x56b843 */ goto L_0056b843;
L_0056b8ef:; BB(0x0056b8ef);
    /* 0056b8ef: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0056b8f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b8f8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b8fa: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x56b8ffu); f_00686d72();
    /* 0056b8ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b902: ret  */ FN_RET(0x0056b800); r_esp += 4; return;
}

void f_0056b930(void) /* sub_56B930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b930);
    /* 0056b930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b931: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056b937: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b93a: mov eax, dword ptr [eax + 0x2e4] */ r_eax = R32((u32)(r_eax+0x2e4u));
    /* 0056b940: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b943: ret  */ FN_RET(0x0056b930); r_esp += 4; return;
}

void f_0056b950(void) /* sub_56B950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b950);
    /* 0056b950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b951: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b953: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b956: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056b959: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0056b95d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b95f: jne 0x56b96e */ if (!fZ) goto L_0056b96e;
L_0056b961:; BB(0x0056b961);
    /* 0056b961: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b964: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x56b969u); f_0056b910();
    /* 0056b969: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056b96c: jmp 0x56b979 */ goto L_0056b979;
L_0056b96e:; BB(0x0056b96e);
    /* 0056b96e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b971: call 0x56b930 */ r_esp -= 4; W32(r_esp, 0x56b976u); f_0056b930();
    /* 0056b976: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056b979:; BB(0x0056b979);
    /* 0056b979: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b97c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056b97f: cmp dword ptr [ebp - 0x10], 0x18 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056b983: ja 0x56b9ba */ if ((!fC&&!fZ)) goto L_0056b9ba;
L_0056b985:; BB(0x0056b985);
    /* 0056b985: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056b988: movzx eax, byte ptr [edx + 0x56b9f4] */ r_eax = (u32)R8((u32)(r_edx+0x56b9f4u));
    /* 0056b98f: jmp dword ptr [eax*4 + 0x56b9e0] */ { u32 t = R32((u32)(r_eax*4+0x56b9e0u)); switch (t) { case 0x56b996u: goto L_0056b996; case 0x56b99fu: goto L_0056b99f; case 0x56b9a8u: goto L_0056b9a8; case 0x56b9b1u: goto L_0056b9b1; case 0x56b9bau: goto L_0056b9ba; default: UNSUP(0x0056b98f, "jump table entry is not a known target"); } }
L_0056b996:; BB(0x0056b996);
    /* 0056b996: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056b99d: jmp 0x56b9c1 */ goto L_0056b9c1;
L_0056b99f:; BB(0x0056b99f);
    /* 0056b99f: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0056b9a6: jmp 0x56b9c1 */ goto L_0056b9c1;
L_0056b9a8:; BB(0x0056b9a8);
    /* 0056b9a8: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0056b9af: jmp 0x56b9c1 */ goto L_0056b9c1;
L_0056b9b1:; BB(0x0056b9b1);
    /* 0056b9b1: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0056b9b8: jmp 0x56b9c1 */ goto L_0056b9c1;
L_0056b9ba:; BB(0x0056b9ba);
    /* 0056b9ba: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
L_0056b9c1:; BB(0x0056b9c1);
    /* 0056b9c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b9c4: imul ecx, ecx, 0xc4 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xc4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b9ca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056b9cd: cmp dword ptr [ecx + edx*4 + 0x7484c0], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x7484c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b9d5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0056b9d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b9da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b9db: ret 8 */ FN_RET(0x0056b950); r_esp += 12; return;
}

