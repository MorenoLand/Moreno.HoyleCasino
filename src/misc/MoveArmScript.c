#include "protos.h"

void f_00530f30(void) /* MoveArmScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00530f30);
    /* 00530f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00530f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00530f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00530f37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530f39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00530f3c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x530f41u); f_005fc0d0();
    /* 00530f41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00530f44: mov dword ptr [eax], 0x6c3e30 */ W32((u32)(r_eax), 0x6c3e30u);
    /* 00530f4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00530f4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00530f4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530f50: ret  */ FN_RET(0x00530f30); r_esp += 4; return;
}

void f_00530f60(void) /* MoveArmScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00530f60);
    /* 00530f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00530f63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00530f65: push 0x6a475b */ { u32 v = 0x6a475bu; r_esp -= 4; W32(r_esp, v); }
    /* 00530f6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00530f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530f71: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00530f74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00530f79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530f7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00530f7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00530f85: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00530f88: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00530f8b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x530f90u); f_005fc360();
    /* 00530f90: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00530f93: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530f97: je 0x530fa8 */ if (fZ) goto L_00530fa8;
L_00530f99:; BB(0x00530f99);
    /* 00530f99: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530f9d: je 0x5310c4 */ if (fZ) goto L_005310c4;
L_00530fa3:; BB(0x00530fa3);
    /* 00530fa3: jmp 0x53113f */ goto L_0053113f;
L_00530fa8:; BB(0x00530fa8);
    /* 00530fa8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530faa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00530fad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530faf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00530fb2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00530fb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530fb7u); call_ind(t); }
    /* 00530fb7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00530fbd: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x530fc2u); f_00637630();
    /* 00530fc2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00530fc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530fc7: jne 0x530fdd */ if (!fZ) goto L_00530fdd;
L_00530fc9:; BB(0x00530fc9);
    /* 00530fc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530fcb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00530fce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00530fd0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00530fd3: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00530fd6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530fd8u); call_ind(t); }
    /* 00530fd8: jmp 0x53108d */ goto L_0053108d;
L_00530fdd:; BB(0x00530fdd);
    /* 00530fdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530fdf: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 00530fe4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00530fe7: mov edx, dword ptr [0x793390] */ r_edx = R32((u32)(0x793390u));
    /* 00530fed: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00530ff0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530ff2: mov ecx, eax */ r_ecx = r_eax;
    /* 00530ff4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00530ffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530ffcu); call_ind(t); }
    /* 00530ffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530ffe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00531004: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x531009u); f_00637810();
    /* 00531009: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053100c: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531010: jle 0x53101b */ if ((fZ||fS!=fO)) goto L_0053101b;
L_00531012:; BB(0x00531012);
    /* 00531012: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00531019: jmp 0x531028 */ goto L_00531028;
L_0053101b:; BB(0x0053101b);
    /* 0053101b: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053101f: jne 0x531028 */ if (!fZ) goto L_00531028;
L_00531021:; BB(0x00531021);
    /* 00531021: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_00531028:; BB(0x00531028);
    /* 00531028: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 0053102e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00531031: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00531034: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 0053103a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053103c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x531041u); f_00686d82();
    /* 00531041: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531044: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00531047: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053104e: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531052: je 0x531067 */ if (fZ) goto L_00531067;
L_00531054:; BB(0x00531054);
    /* 00531054: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00531057: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531058: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053105a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053105d: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x531062u); f_00600f30();
    /* 00531062: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00531065: jmp 0x53106e */ goto L_0053106e;
L_00531067:; BB(0x00531067);
    /* 00531067: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0053106e:; BB(0x0053106e);
    /* 0053106e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00531071: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00531074: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053107b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053107e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053107f: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00531085: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00531088: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x53108du); f_005f5d50();
L_0053108d:; BB(0x0053108d);
    /* 0053108d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053108f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531090: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00531096: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00531099: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053109a: fld1  */ FPUSH(1.0);
    /* 0053109c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053109f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005310a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005310a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005310a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005310a7: push 0x18a91 */ { u32 v = 0x18a91u; r_esp -= 4; W32(r_esp, v); }
    /* 005310ac: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005310b2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005310b4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005310ba: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005310c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5310c2u); call_ind(t); }
    /* 005310c2: jmp 0x53113f */ goto L_0053113f;
L_005310c4:; BB(0x005310c4);
    /* 005310c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005310c6: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 005310cb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005310ce: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5310d3u); f_005fc420();
    /* 005310d3: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 005310d9: call 0x535d20 */ r_esp -= 4; W32(r_esp, 0x5310deu); f_00535d20();
    /* 005310de: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005310e4: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5310e9u); f_00637630();
    /* 005310e9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005310ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005310ee: je 0x53113f */ if (fZ) goto L_0053113f;
L_005310f0:; BB(0x005310f0);
    /* 005310f0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005310f2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5310f7u); f_00686d82();
    /* 005310f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005310fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005310fd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00531104: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531108: je 0x531119 */ if (fZ) goto L_00531119;
L_0053110a:; BB(0x0053110a);
    /* 0053110a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053110c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053110f: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x531114u); f_006010a0();
    /* 00531114: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00531117: jmp 0x531120 */ goto L_00531120;
L_00531119:; BB(0x00531119);
    /* 00531119: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00531120:; BB(0x00531120);
    /* 00531120: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00531123: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00531126: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053112d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00531130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531131: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00531137: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053113a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x53113fu); f_005f5d50();
L_0053113f:; BB(0x0053113f);
    /* 0053113f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00531142: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00531149: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053114a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053114c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053114d: ret  */ FN_RET(0x00530f60); r_esp += 4; return;
}

