#include "protos.h"

void f_0062d120(void) /* sub_62D120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d120);
    /* 0062d120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d121: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d127: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d12a: cmp dword ptr [eax + 0x2e8], 0 */ {  u32 a = R32((u32)(r_eax+0x2e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d131: je 0x62d19c */ if (fZ) goto L_0062d19c;
L_0062d133:; BB(0x0062d133);
    /* 0062d133: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d136: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d13c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d13d: call 0x6841d8 */ r_esp -= 4; W32(r_esp, 0x62d142u); f_006841d8();
    /* 0062d142: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d145: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d148: call 0x62d690 */ r_esp -= 4; W32(r_esp, 0x62d14du); f_0062d690();
    /* 0062d14d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d14f: push 0x1009 */ { u32 v = 0x1009u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d154: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d157: mov ecx, dword ptr [eax + 0x2e8] */ r_ecx = R32((u32)(r_eax+0x2e8u));
    /* 0062d15d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d15e: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x62d163u); f_006841ae();
    /* 0062d163: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d166: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d169: mov dword ptr [edx + 0x2e8], 0 */ W32((u32)(r_edx+0x2e8u), 0x0u);
    /* 0062d173: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d176: mov dword ptr [eax + 0x2e4], 0 */ W32((u32)(r_eax+0x2e4u), 0x0u);
    /* 0062d180: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d183: mov dword ptr [ecx + 0x2e0], 0 */ W32((u32)(r_ecx+0x2e0u), 0x0u);
    /* 0062d18d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d190: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062d193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d194: call 0x684240 */ r_esp -= 4; W32(r_esp, 0x62d199u); f_00684240();
    /* 0062d199: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062d19c:; BB(0x0062d19c);
    /* 0062d19c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d19f: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d1a2: je 0x62d1b3 */ if (fZ) goto L_0062d1b3;
L_0062d1a4:; BB(0x0062d1a4);
    /* 0062d1a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d1a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062d1a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d1aa: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x62d1b0u); call_ind(t); }
    /* 0062d1b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062d1b3:; BB(0x0062d1b3);
    /* 0062d1b3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062d1b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d1b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d1b8: ret  */ FN_RET(0x0062d120); r_esp += 4; return;
}

void f_0062d310(void) /* sub_62D310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d310);
    /* 0062d310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d311: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d31a: call 0x62d3b0 */ r_esp -= 4; W32(r_esp, 0x62d31fu); f_0062d3b0();
    /* 0062d31f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d324: je 0x62d32a */ if (fZ) goto L_0062d32a;
L_0062d326:; BB(0x0062d326);
    /* 0062d326: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062d328: jmp 0x62d3a9 */ goto L_0062d3a9;
L_0062d32a:; BB(0x0062d32a);
    /* 0062d32a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d32d: mov edx, dword ptr [ecx + 0x2e0] */ r_edx = R32((u32)(r_ecx+0x2e0u));
    /* 0062d333: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d334: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d337: call 0x62d580 */ r_esp -= 4; W32(r_esp, 0x62d33cu); f_0062d580();
    /* 0062d33c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d33f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d341: jne 0x62d347 */ if (!fZ) goto L_0062d347;
L_0062d343:; BB(0x0062d343);
    /* 0062d343: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d345: jmp 0x62d3a9 */ goto L_0062d3a9;
L_0062d347:; BB(0x0062d347);
    /* 0062d347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d34a: mov edx, dword ptr [ecx + 0x2e4] */ r_edx = R32((u32)(r_ecx+0x2e4u));
    /* 0062d350: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d351: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d354: call 0x62d580 */ r_esp -= 4; W32(r_esp, 0x62d359u); f_0062d580();
    /* 0062d359: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d35c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d35e: jne 0x62d364 */ if (!fZ) goto L_0062d364;
L_0062d360:; BB(0x0062d360);
    /* 0062d360: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d362: jmp 0x62d3a9 */ goto L_0062d3a9;
L_0062d364:; BB(0x0062d364);
    /* 0062d364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d367: add ecx, 0x2e0 */ {  u32 a = r_ecx; u32 b = 0x2e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d36d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d36e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d370: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d373: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0062d379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d37a: call 0x6841fc */ r_esp -= 4; W32(r_esp, 0x62d37fu); f_006841fc();
    /* 0062d37f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d382: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d385: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d38b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d38c: call 0x6841de */ r_esp -= 4; W32(r_esp, 0x62d391u); f_006841de();
    /* 0062d391: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d394: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d397: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d39cu); f_0062d710();
    /* 0062d39c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d39f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d3a1: jne 0x62d3a7 */ if (!fZ) goto L_0062d3a7;
L_0062d3a3:; BB(0x0062d3a3);
    /* 0062d3a3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d3a5: jmp 0x62d3a9 */ goto L_0062d3a9;
L_0062d3a7:; BB(0x0062d3a7);
    /* 0062d3a7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062d3a9:; BB(0x0062d3a9);
    /* 0062d3a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d3ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d3ac: ret  */ FN_RET(0x0062d310); r_esp += 4; return;
}

void f_0062d3b0(void) /* sub_62D3B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d3b0);
    /* 0062d3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d3b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d3b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062d3b9: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0062d3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d3bd: push 0x1010 */ { u32 v = 0x1010u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d3c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d3c5: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d3cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d3cc: call 0x6841cc */ r_esp -= 4; W32(r_esp, 0x62d3d1u); f_006841cc();
    /* 0062d3d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d3d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062d3d6: cmp dword ptr [ebp - 4], 0x1012 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1012u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d3dd: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0062d3e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d3e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d3e3: ret  */ FN_RET(0x0062d3b0); r_esp += 4; return;
}

void f_0062d3f0(void) /* sub_62D3F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d3f0);
    /* 0062d3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d3f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d3f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062d3f9: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0062d3fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d3fd: push 0x1010 */ { u32 v = 0x1010u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d402: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d405: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d40b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d40c: call 0x6841cc */ r_esp -= 4; W32(r_esp, 0x62d411u); f_006841cc();
    /* 0062d411: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d414: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062d416: cmp dword ptr [ebp - 4], 0x1014 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1014u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d41d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0062d420: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d422: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d423: ret  */ FN_RET(0x0062d3f0); r_esp += 4; return;
}

void f_0062d470(void) /* sub_62D470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d470);
    /* 0062d470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d471: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d473: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d476: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062d479: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0062d47d: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0062d480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d481: push 0x1016 */ { u32 v = 0x1016u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d486: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d489: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d48f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d490: call 0x6841cc */ r_esp -= 4; W32(r_esp, 0x62d495u); f_006841cc();
    /* 0062d495: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d498: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062d49c: jle 0x62d4ab */ if ((fZ||fS!=fO)) goto L_0062d4ab;
L_0062d49e:; BB(0x0062d49e);
    /* 0062d49e: push 0x6d9964 */ { u32 v = 0x6d9964u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4a3: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62d4a8u); f_0062fde0();
    /* 0062d4a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062d4ab:; BB(0x0062d4ab);
    /* 0062d4ab: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062d4af: jle 0x62d52f */ if ((fZ||fS!=fO)) goto L_0062d52f;
L_0062d4b1:; BB(0x0062d4b1);
    /* 0062d4b1: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062d4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d4ba: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d4c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4c1: call 0x684202 */ r_esp -= 4; W32(r_esp, 0x62d4c6u); f_00684202();
    /* 0062d4c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d4c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d4cc: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d4d1u); f_0062d710();
    /* 0062d4d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d4d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d4d6: jne 0x62d4df */ if (!fZ) goto L_0062d4df;
L_0062d4d8:; BB(0x0062d4d8);
    /* 0062d4d8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d4da: jmp 0x62d57b */ goto L_0062d57b;
L_0062d4df:; BB(0x0062d4df);
    /* 0062d4df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d4e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d4e6: call 0x62d580 */ r_esp -= 4; W32(r_esp, 0x62d4ebu); f_0062d580();
    /* 0062d4eb: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0062d4ee: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0062d4f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d4f4: je 0x62d50e */ if (fZ) goto L_0062d50e;
L_0062d4f6:; BB(0x0062d4f6);
    /* 0062d4f6: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062d4f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d4fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d4ff: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d505: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d506: call 0x6841fc */ r_esp -= 4; W32(r_esp, 0x62d50bu); f_006841fc();
    /* 0062d50b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062d50e:; BB(0x0062d50e);
    /* 0062d50e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d511: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d516u); f_0062d710();
    /* 0062d516: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d519: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d51b: jne 0x62d521 */ if (!fZ) goto L_0062d521;
L_0062d51d:; BB(0x0062d51d);
    /* 0062d51d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d51f: jmp 0x62d57b */ goto L_0062d57b;
L_0062d521:; BB(0x0062d521);
    /* 0062d521: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d524: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d527: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062d52a: jmp 0x62d4ab */ goto L_0062d4ab;
L_0062d52f:; BB(0x0062d52f);
    /* 0062d52f: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0062d533: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d535: je 0x62d578 */ if (fZ) goto L_0062d578;
L_0062d537:; BB(0x0062d537);
    /* 0062d537: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d53a: call 0x62d3f0 */ r_esp -= 4; W32(r_esp, 0x62d53fu); f_0062d3f0();
    /* 0062d53f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d542: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d544: je 0x62d578 */ if (fZ) goto L_0062d578;
L_0062d546:; BB(0x0062d546);
    /* 0062d546: push 0x6d993c */ { u32 v = 0x6d993cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d54b: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62d550u); f_0062fde0();
    /* 0062d550: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d553: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d556: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d55c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d55d: call 0x6841de */ r_esp -= 4; W32(r_esp, 0x62d562u); f_006841de();
    /* 0062d562: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d565: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d568: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d56du); f_0062d710();
    /* 0062d56d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062d570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d572: jne 0x62d578 */ if (!fZ) goto L_0062d578;
L_0062d574:; BB(0x0062d574);
    /* 0062d574: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d576: jmp 0x62d57b */ goto L_0062d57b;
L_0062d578:; BB(0x0062d578);
    /* 0062d578: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
L_0062d57b:; BB(0x0062d57b);
    /* 0062d57b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d57d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d57e: ret  */ FN_RET(0x0062d470); r_esp += 4; return;
}

void f_0062d580(void) /* sub_62D580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d580);
    /* 0062d580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d581: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d583: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d586: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062d589: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0062d590: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0062d597:; BB(0x0062d597);
    /* 0062d597: cmp dword ptr [ebp - 8], 0x40000 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x40000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062d59e: jge 0x62d637 */ if ((fS==fO)) goto L_0062d637;
L_0062d5a4:; BB(0x0062d5a4);
    /* 0062d5a4: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0062d5a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d5af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5b0: mov edx, 0x40000 */ r_edx = 0x40000u;
    /* 0062d5b5: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062d5b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d5bc: add eax, 0x15eee20 */ {  u32 a = r_eax; u32 b = 0x15eee20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062d5c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d5c5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d5c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d5c9: call 0x685e50 */ r_esp -= 4; W32(r_esp, 0x62d5ceu); f_00685e50();
    /* 0062d5ce: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d5d1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062d5d4: mov edx, 0x40000 */ r_edx = 0x40000u;
    /* 0062d5d9: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062d5dc: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062d5df: jle 0x62d5e8 */ if ((fZ||fS!=fO)) goto L_0062d5e8;
L_0062d5e1:; BB(0x0062d5e1);
    /* 0062d5e1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d5e3: jmp 0x62d682 */ goto L_0062d682;
L_0062d5e8:; BB(0x0062d5e8);
    /* 0062d5e8: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062d5ec: jle 0x62d5f9 */ if ((fZ||fS!=fO)) goto L_0062d5f9;
L_0062d5ee:; BB(0x0062d5ee);
    /* 0062d5ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d5f1: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062d5f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062d5f7: jmp 0x62d632 */ goto L_0062d632;
L_0062d5f9:; BB(0x0062d5f9);
    /* 0062d5f9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062d5fd: jge 0x62d605 */ if ((fS==fO)) goto L_0062d605;
L_0062d5ff:; BB(0x0062d5ff);
    /* 0062d5ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d601: jmp 0x62d682 */ goto L_0062d682;
L_0062d605:; BB(0x0062d605);
    /* 0062d605: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d608: movzx edx, byte ptr [ecx + 0x2f0] */ r_edx = (u32)R8((u32)(r_ecx+0x2f0u));
    /* 0062d60f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d611: jne 0x62d615 */ if (!fZ) goto L_0062d615;
L_0062d613:; BB(0x0062d613);
    /* 0062d613: jmp 0x62d637 */ goto L_0062d637;
L_0062d615:; BB(0x0062d615);
    /* 0062d615: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d618: fldz  */ FPUSH(0.0);
    /* 0062d61a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0062d61d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d620: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062d623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d624: call 0x685cc0 */ r_esp -= 4; W32(r_esp, 0x62d629u); f_00685cc0();
    /* 0062d629: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d62c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d62e: je 0x62d632 */ if (fZ) goto L_0062d632;
L_0062d630:; BB(0x0062d630);
    /* 0062d630: jmp 0x62d637 */ goto L_0062d637;
L_0062d632:; BB(0x0062d632);
    /* 0062d632: jmp 0x62d597 */ goto L_0062d597;
L_0062d637:; BB(0x0062d637);
    /* 0062d637: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d63b: jne 0x62d641 */ if (!fZ) goto L_0062d641;
L_0062d63d:; BB(0x0062d63d);
    /* 0062d63d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d63f: jmp 0x62d682 */ goto L_0062d682;
L_0062d641:; BB(0x0062d641);
    /* 0062d641: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d644: mov edx, dword ptr [ecx + 0x2d8] */ r_edx = R32((u32)(r_ecx+0x2d8u));
    /* 0062d64a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062d64d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d64e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d652: push 0x15eee20 */ { u32 v = 0x15eee20u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d657: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d65a: mov eax, dword ptr [edx + 0x2ec] */ r_eax = R32((u32)(r_edx+0x2ecu));
    /* 0062d660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d661: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062d664: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d665: call 0x6841ea */ r_esp -= 4; W32(r_esp, 0x62d66au); f_006841ea();
    /* 0062d66a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d66d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d670: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d675u); f_0062d710();
    /* 0062d675: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0062d678: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d67a: jne 0x62d680 */ if (!fZ) goto L_0062d680;
L_0062d67c:; BB(0x0062d67c);
    /* 0062d67c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d67e: jmp 0x62d682 */ goto L_0062d682;
L_0062d680:; BB(0x0062d680);
    /* 0062d680: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062d682:; BB(0x0062d682);
    /* 0062d682: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d684: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d685: ret 4 */ FN_RET(0x0062d580); r_esp += 8; return;
}

void f_0062d690(void) /* sub_62D690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d690);
    /* 0062d690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d691: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d693: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d696: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062d699: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0062d69c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d69d: push 0x1015 */ { u32 v = 0x1015u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d6a5: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d6ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6ac: call 0x6841cc */ r_esp -= 4; W32(r_esp, 0x62d6b1u); f_006841cc();
    /* 0062d6b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062d6b4:; BB(0x0062d6b4);
    /* 0062d6b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d6b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d6ba: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d6bd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d6c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d6c2: je 0x62d6f1 */ if (fZ) goto L_0062d6f1;
L_0062d6c4:; BB(0x0062d6c4);
    /* 0062d6c4: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0062d6c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d6cd: mov ecx, dword ptr [eax + 0x2e8] */ r_ecx = R32((u32)(r_eax+0x2e8u));
    /* 0062d6d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6d4: call 0x684202 */ r_esp -= 4; W32(r_esp, 0x62d6d9u); f_00684202();
    /* 0062d6d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d6dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d6df: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d6e4u); f_0062d710();
    /* 0062d6e4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0062d6e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d6e9: jne 0x62d6ef */ if (!fZ) goto L_0062d6ef;
L_0062d6eb:; BB(0x0062d6eb);
    /* 0062d6eb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d6ed: jmp 0x62d70c */ goto L_0062d70c;
L_0062d6ef:; BB(0x0062d6ef);
    /* 0062d6ef: jmp 0x62d6b4 */ goto L_0062d6b4;
L_0062d6f1:; BB(0x0062d6f1);
    /* 0062d6f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6f3: push 0x1009 */ { u32 v = 0x1009u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d6f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d6fb: mov ecx, dword ptr [eax + 0x2e8] */ r_ecx = R32((u32)(r_eax+0x2e8u));
    /* 0062d701: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d702: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x62d707u); f_006841ae();
    /* 0062d707: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d70a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062d70c:; BB(0x0062d70c);
    /* 0062d70c: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d70e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d70f: ret  */ FN_RET(0x0062d690); r_esp += 4; return;
}

void f_0062d710(void) /* sub_62D710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d710);
    /* 0062d710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d711: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d713: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d716: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062d719: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x62d71eu); f_0068419c();
    /* 0062d71e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062d721: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d725: je 0x62d745 */ if (fZ) goto L_0062d745;
L_0062d727:; BB(0x0062d727);
    /* 0062d727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d72a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d72b: call 0x684208 */ r_esp -= 4; W32(r_esp, 0x62d730u); f_00684208();
    /* 0062d730: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d734: push 0x6d998c */ { u32 v = 0x6d998cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d739: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62d73eu); f_0062fde0();
    /* 0062d73e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d741: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d743: jmp 0x62d747 */ goto L_0062d747;
L_0062d745:; BB(0x0062d745);
    /* 0062d745: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062d747:; BB(0x0062d747);
    /* 0062d747: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d74a: ret  */ FN_RET(0x0062d710); r_esp += 4; return;
}

void f_0062d750(void) /* sub_62D750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d750);
    /* 0062d750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d751: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d756: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d75c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062d75f: cmp dword ptr [ebp - 8], 0xa001 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xa001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062d766: jg 0x62d78d */ if ((!fZ&&fS==fO)) goto L_0062d78d;
L_0062d768:; BB(0x0062d768);
    /* 0062d768: cmp dword ptr [ebp - 8], 0xa001 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xa001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d76f: je 0x62d78f */ if (fZ) goto L_0062d78f;
L_0062d771:; BB(0x0062d771);
    /* 0062d771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d774: add ecx, 0x86 */ {  u32 a = r_ecx; u32 b = 0x86u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062d77a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062d77d: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062d781: ja 0x62d7b9 */ if ((!fC&&!fZ)) goto L_0062d7b9;
L_0062d783:; BB(0x0062d783);
    /* 0062d783: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062d786: jmp dword ptr [edx*4 + 0x62d7c4] */ { u32 t = R32((u32)(r_edx*4+0x62d7c4u)); switch (t) { case 0x62d7a4u: goto L_0062d7a4; case 0x62d7abu: goto L_0062d7ab; case 0x62d79du: goto L_0062d79d; case 0x62d7b9u: goto L_0062d7b9; case 0x62d7b2u: goto L_0062d7b2; case 0x62d796u: goto L_0062d796; default: UNSUP(0x0062d786, "jump table entry is not a known target"); } }
L_0062d78d:; BB(0x0062d78d);
    /* 0062d78d: jmp 0x62d7b9 */ goto L_0062d7b9;
L_0062d78f:; BB(0x0062d78f);
    /* 0062d78f: mov eax, 0x6d9a50 */ r_eax = 0x6d9a50u;
    /* 0062d794: jmp 0x62d7be */ goto L_0062d7be;
L_0062d796:; BB(0x0062d796);
    /* 0062d796: mov eax, 0x6d9a3c */ r_eax = 0x6d9a3cu;
    /* 0062d79b: jmp 0x62d7be */ goto L_0062d7be;
L_0062d79d:; BB(0x0062d79d);
    /* 0062d79d: mov eax, 0x6d9a28 */ r_eax = 0x6d9a28u;
    /* 0062d7a2: jmp 0x62d7be */ goto L_0062d7be;
L_0062d7a4:; BB(0x0062d7a4);
    /* 0062d7a4: mov eax, 0x6d9a0c */ r_eax = 0x6d9a0cu;
    /* 0062d7a9: jmp 0x62d7be */ goto L_0062d7be;
L_0062d7ab:; BB(0x0062d7ab);
    /* 0062d7ab: mov eax, 0x6d99f4 */ r_eax = 0x6d99f4u;
    /* 0062d7b0: jmp 0x62d7be */ goto L_0062d7be;
L_0062d7b2:; BB(0x0062d7b2);
    /* 0062d7b2: mov eax, 0x6d99c0 */ r_eax = 0x6d99c0u;
    /* 0062d7b7: jmp 0x62d7be */ goto L_0062d7be;
L_0062d7b9:; BB(0x0062d7b9);
    /* 0062d7b9: mov eax, 0x6d99ac */ r_eax = 0x6d99acu;
L_0062d7be:; BB(0x0062d7be);
    /* 0062d7be: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d7c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d7c1: ret 4 */ FN_RET(0x0062d750); r_esp += 8; return;
}

void f_0062d7e0(void) /* sub_62D7E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d7e0);
    /* 0062d7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d7e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d7e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d7e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d7ea: cmp dword ptr [eax + 0x2e8], 0 */ {  u32 a = R32((u32)(r_eax+0x2e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d7f1: jne 0x62d7f7 */ if (!fZ) goto L_0062d7f7;
L_0062d7f3:; BB(0x0062d7f3);
    /* 0062d7f3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d7f5: jmp 0x62d81d */ goto L_0062d81d;
L_0062d7f7:; BB(0x0062d7f7);
    /* 0062d7f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d7f8: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0062d7fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d7fe: push 0x100a */ { u32 v = 0x100au; r_esp -= 4; W32(r_esp, v); }
    /* 0062d803: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d806: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d80c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d80d: call 0x6841c0 */ r_esp -= 4; W32(r_esp, 0x62d812u); f_006841c0();
    /* 0062d812: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d815: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d818: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d81du); f_0062d710();
L_0062d81d:; BB(0x0062d81d);
    /* 0062d81d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d81f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d820: ret 4 */ FN_RET(0x0062d7e0); r_esp += 8; return;
}

void f_0062d830(void) /* sub_62D830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d830);
    /* 0062d830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d831: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d837: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d83a: cmp dword ptr [eax + 0x2e8], 0 */ {  u32 a = R32((u32)(r_eax+0x2e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d841: jne 0x62d847 */ if (!fZ) goto L_0062d847;
L_0062d843:; BB(0x0062d843);
    /* 0062d843: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d845: jmp 0x62d86a */ goto L_0062d86a;
L_0062d847:; BB(0x0062d847);
    /* 0062d847: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062d84a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d84b: push 0x100a */ { u32 v = 0x100au; r_esp -= 4; W32(r_esp, v); }
    /* 0062d850: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d853: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0062d859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d85a: call 0x68420e */ r_esp -= 4; W32(r_esp, 0x62d85fu); f_0068420e();
    /* 0062d85f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d862: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d865: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d86au); f_0062d710();
L_0062d86a:; BB(0x0062d86a);
    /* 0062d86a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d86c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d86d: ret 4 */ FN_RET(0x0062d830); r_esp += 8; return;
}

void f_0062d870(void) /* sub_62D870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d870);
    /* 0062d870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d871: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d87a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0062d87d: mov byte ptr [eax + 0x2f0], cl */ W8((u32)(r_eax+0x2f0u), (u8)r_ecx);
    /* 0062d883: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062d885: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d887: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d888: ret 4 */ FN_RET(0x0062d870); r_esp += 8; return;
}

void f_0062d890(void) /* sub_62D890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d890);
    /* 0062d890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d891: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d89a: cmp dword ptr [eax + 0x2e8], 0 */ {  u32 a = R32((u32)(r_eax+0x2e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d8a1: jne 0x62d8a7 */ if (!fZ) goto L_0062d8a7;
L_0062d8a3:; BB(0x0062d8a3);
    /* 0062d8a3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062d8a5: jmp 0x62d8dd */ goto L_0062d8dd;
L_0062d8a7:; BB(0x0062d8a7);
    /* 0062d8a7: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0062d8ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d8ad: je 0x62d8c3 */ if (fZ) goto L_0062d8c3;
L_0062d8af:; BB(0x0062d8af);
    /* 0062d8af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d8b2: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0062d8b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8b9: call 0x6841f0 */ r_esp -= 4; W32(r_esp, 0x62d8beu); f_006841f0();
    /* 0062d8be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d8c1: jmp 0x62d8d5 */ goto L_0062d8d5;
L_0062d8c3:; BB(0x0062d8c3);
    /* 0062d8c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d8c6: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d8cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8cd: call 0x6841de */ r_esp -= 4; W32(r_esp, 0x62d8d2u); f_006841de();
    /* 0062d8d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062d8d5:; BB(0x0062d8d5);
    /* 0062d8d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d8d8: call 0x62d710 */ r_esp -= 4; W32(r_esp, 0x62d8ddu); f_0062d710();
L_0062d8dd:; BB(0x0062d8dd);
    /* 0062d8dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d8df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d8e0: ret 4 */ FN_RET(0x0062d890); r_esp += 8; return;
}

void f_0062dbb0(void) /* sub_62DBB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062dbb0);
    /* 0062dbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062dbb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062dbb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062dbb6: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
L_0062dbba:; BB(0x0062dbba);
    /* 0062dbba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dbbd: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0062dbc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dbc2: je 0x62dbe3 */ if (fZ) goto L_0062dbe3;
L_0062dbc4:; BB(0x0062dbc4);
    /* 0062dbc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062dbc7: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0062dbca: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dbcd: jne 0x62dbe3 */ if (!fZ) goto L_0062dbe3;
L_0062dbcf:; BB(0x0062dbcf);
    /* 0062dbcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dbd1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062dbd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dbd5: call 0x62dca0 */ r_esp -= 4; W32(r_esp, 0x62dbdau); f_0062dca0();
    /* 0062dbda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dbdd: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0062dbe1: jmp 0x62dbba */ goto L_0062dbba;
L_0062dbe3:; BB(0x0062dbe3);
    /* 0062dbe3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062dbe6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dbe7: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62dbecu); f_00686ecc();
    /* 0062dbec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dbef: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062dbf2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062dbf5: jmp 0x62dc00 */ goto L_0062dc00;
L_0062dbf7:; BB(0x0062dbf7);
    /* 0062dbf7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062dbfa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062dbfd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0062dc00:; BB(0x0062dc00);
    /* 0062dc00: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062dc04: jle 0x62dc37 */ if ((fZ||fS!=fO)) goto L_0062dc37;
L_0062dc06:; BB(0x0062dc06);
    /* 0062dc06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062dc09: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dc0c: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0062dc0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc11: je 0x62dc37 */ if (fZ) goto L_0062dc37;
L_0062dc13:; BB(0x0062dc13);
    /* 0062dc13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dc16: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062dc19: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0062dc1c: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc1f: jne 0x62dc37 */ if (!fZ) goto L_0062dc37;
L_0062dc21:; BB(0x0062dc21);
    /* 0062dc21: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062dc24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dc28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc29: call 0x62dca0 */ r_esp -= 4; W32(r_esp, 0x62dc2eu); f_0062dca0();
    /* 0062dc2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dc31: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0062dc35: jmp 0x62dbf7 */ goto L_0062dbf7;
L_0062dc37:; BB(0x0062dc37);
    /* 0062dc37: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0062dc3e: jmp 0x62dc49 */ goto L_0062dc49;
L_0062dc40:; BB(0x0062dc40);
    /* 0062dc40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062dc43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dc46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0062dc49:; BB(0x0062dc49);
    /* 0062dc49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062dc4c: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062dc4f: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0062dc52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc54: je 0x62dc8b */ if (fZ) goto L_0062dc8b;
L_0062dc56:; BB(0x0062dc56);
    /* 0062dc56: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062dc59: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dc5c: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0062dc5f: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc62: jne 0x62dc89 */ if (!fZ) goto L_0062dc89;
L_0062dc64:; BB(0x0062dc64);
    /* 0062dc64: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dc67: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062dc6a: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0062dc6e: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dc71: jne 0x62dc89 */ if (!fZ) goto L_0062dc89;
L_0062dc73:; BB(0x0062dc73);
    /* 0062dc73: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062dc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dc7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062dc7b: call 0x62dca0 */ r_esp -= 4; W32(r_esp, 0x62dc80u); f_0062dca0();
    /* 0062dc80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dc83: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0062dc87: jmp 0x62dc64 */ goto L_0062dc64;
L_0062dc89:; BB(0x0062dc89);
    /* 0062dc89: jmp 0x62dc40 */ goto L_0062dc40;
L_0062dc8b:; BB(0x0062dc8b);
    /* 0062dc8b: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0062dc8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062dc90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062dc91: ret  */ FN_RET(0x0062dbb0); r_esp += 4; return;
}

void f_0062dca0(void) /* sub_62DCA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062dca0);
    /* 0062dca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062dca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062dca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dca4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062dcab: jmp 0x62dcb6 */ goto L_0062dcb6;
L_0062dcad:; BB(0x0062dcad);
    /* 0062dcad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062dcb0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062dcb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0062dcb6:; BB(0x0062dcb6);
    /* 0062dcb6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062dcb9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dcbc: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0062dcbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dcc1: je 0x62dcde */ if (fZ) goto L_0062dcde;
L_0062dcc3:; BB(0x0062dcc3);
    /* 0062dcc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062dcc6: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062dcc9: jle 0x62dcdc */ if ((fZ||fS!=fO)) goto L_0062dcdc;
L_0062dccb:; BB(0x0062dccb);
    /* 0062dccb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062dcce: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dcd1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062dcd4: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062dcd7: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062dcd9: mov byte ptr [ecx - 1], al */ W8((u32)(r_ecx+0xffffffffu), (u8)r_eax);
L_0062dcdc:; BB(0x0062dcdc);
    /* 0062dcdc: jmp 0x62dcad */ goto L_0062dcad;
L_0062dcde:; BB(0x0062dcde);
    /* 0062dcde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062dce1: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062dce4: jle 0x62dcf0 */ if ((fZ||fS!=fO)) goto L_0062dcf0;
L_0062dce6:; BB(0x0062dce6);
    /* 0062dce6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062dce9: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062dcec: mov byte ptr [edx - 1], 0 */ W8((u32)(r_edx+0xffffffffu), 0x0u);
L_0062dcf0:; BB(0x0062dcf0);
    /* 0062dcf0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dcf3: mov esp, ebp */ r_esp = r_ebp;
    /* 0062dcf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062dcf6: ret  */ FN_RET(0x0062dca0); r_esp += 4; return;
}

void f_0062dd10(void) /* sub_62DD10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062dd10);
    /* 0062dd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd11: mov ebp, esp */ r_ebp = r_esp;
    /* 0062dd13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062dd16: cmp dword ptr [0x76208c], 0 */ {  u32 a = R32((u32)(0x76208cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062dd1d: jne 0x62dd2e */ if (!fZ) goto L_0062dd2e;
L_0062dd1f:; BB(0x0062dd1f);
    /* 0062dd1f: mov eax, dword ptr [0x762088] */ r_eax = R32((u32)(0x762088u));
    /* 0062dd24: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062dd27: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062dd29: jmp 0x62ddcb */ goto L_0062ddcb;
L_0062dd2e:; BB(0x0062dd2e);
    /* 0062dd2e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0062dd35: mov edx, dword ptr [0x762088] */ r_edx = R32((u32)(0x762088u));
    /* 0062dd3b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062dd3e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062dd40: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062dd47: jmp 0x62dd52 */ goto L_0062dd52;
L_0062dd49:; BB(0x0062dd49);
    /* 0062dd49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062dd4c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062dd4f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062dd52:; BB(0x0062dd52);
    /* 0062dd52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062dd55: cmp edx, dword ptr [0x762090] */ {  u32 a = r_edx; u32 b = R32((u32)(0x762090u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062dd5b: jge 0x62dd84 */ if ((fS==fO)) goto L_0062dd84;
L_0062dd5d:; BB(0x0062dd5d);
    /* 0062dd5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062dd60: mov ecx, dword ptr [0x762088] */ r_ecx = R32((u32)(0x762088u));
    /* 0062dd66: mov edx, dword ptr [ecx + eax*4 - 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xfffffffcu));
    /* 0062dd6a: imul edx, edx, 0x41c64e6d */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x41c64e6du; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062dd70: add edx, 0x3039 */ {  u32 a = r_edx; u32 b = 0x3039u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062dd76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062dd79: mov ecx, dword ptr [0x762088] */ r_ecx = R32((u32)(0x762088u));
    /* 0062dd7f: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0062dd82: jmp 0x62dd49 */ goto L_0062dd49;
L_0062dd84:; BB(0x0062dd84);
    /* 0062dd84: mov edx, dword ptr [0x762094] */ r_edx = R32((u32)(0x762094u));
    /* 0062dd8a: mov eax, dword ptr [0x762088] */ r_eax = R32((u32)(0x762088u));
    /* 0062dd8f: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0062dd92: mov dword ptr [0x762080], ecx */ W32((u32)(0x762080u), r_ecx);
    /* 0062dd98: mov edx, dword ptr [0x762088] */ r_edx = R32((u32)(0x762088u));
    /* 0062dd9e: mov dword ptr [0x762084], edx */ W32((u32)(0x762084u), r_edx);
    /* 0062dda4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062ddab: jmp 0x62ddb6 */ goto L_0062ddb6;
L_0062ddad:; BB(0x0062ddad);
    /* 0062ddad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ddb0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ddb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0062ddb6:; BB(0x0062ddb6);
    /* 0062ddb6: mov ecx, dword ptr [0x762090] */ r_ecx = R32((u32)(0x762090u));
    /* 0062ddbc: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062ddbf: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ddc2: jge 0x62ddcb */ if ((fS==fO)) goto L_0062ddcb;
L_0062ddc4:; BB(0x0062ddc4);
    /* 0062ddc4: call 0x62e0a0 */ r_esp -= 4; W32(r_esp, 0x62ddc9u); f_0062e0a0();
    /* 0062ddc9: jmp 0x62ddad */ goto L_0062ddad;
L_0062ddcb:; BB(0x0062ddcb);
    /* 0062ddcb: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ddcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ddce: ret  */ FN_RET(0x0062dd10); r_esp += 4; return;
}

