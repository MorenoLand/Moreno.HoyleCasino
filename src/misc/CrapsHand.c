#include "protos.h"

void f_0042d300(void) /* CrapsHand::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d300);
    /* 0042d300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d301: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d30a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x42d30fu); f_005f5bf0();
    /* 0042d30f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d312: mov dword ptr [eax], 0x6b6ccc */ W32((u32)(r_eax), 0x6b6cccu);
    /* 0042d318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d31b: mov dword ptr [ecx + 0x184], 5 */ W32((u32)(r_ecx+0x184u), 0x5u);
    /* 0042d325: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d328: mov byte ptr [edx + 0x18d], 0 */ W8((u32)(r_edx+0x18du), 0x0u);
    /* 0042d32f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d332: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d334: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d335: ret  */ FN_RET(0x0042d300); r_esp += 4; return;
}

void f_0042d360(void) /* CrapsHand::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d360);
    /* 0042d360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d361: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d367: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d36a: mov byte ptr [eax + 0x18c], 0 */ W8((u32)(r_eax+0x18cu), 0x0u);
    /* 0042d371: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d374: mov dword ptr [ecx + 0x184], 5 */ W32((u32)(r_ecx+0x184u), 0x5u);
    /* 0042d37e: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x42d384u); call_ind(t); }
    /* 0042d384: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d387: mov dword ptr [edx + 0x188], eax */ W32((u32)(r_edx+0x188u), r_eax);
    /* 0042d38d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d390: mov byte ptr [eax + 0x18d], 0 */ W8((u32)(r_eax+0x18du), 0x0u);
    /* 0042d397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d39a: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x42d39fu); f_005eb570();
    /* 0042d39f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3a1: push 0x30dbd3 */ { u32 v = 0x30dbd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3a6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042d3ac: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x42d3b1u); f_005f2b20();
    /* 0042d3b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d3b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d3b4: ret  */ FN_RET(0x0042d360); r_esp += 4; return;
}

void f_0042d3c0(void) /* CrapsHand::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d3c0);
    /* 0042d3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d3ca: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x42d3cfu); f_005eb5a0();
    /* 0042d3cf: push 0x30dbd3 */ { u32 v = 0x30dbd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3d4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042d3da: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x42d3dfu); f_005f2ba0();
    /* 0042d3df: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d3e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d3e2: ret  */ FN_RET(0x0042d3c0); r_esp += 4; return;
}

void f_0042d430(void) /* CrapsHand::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d430);
    /* 0042d430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d431: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d433: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d436: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042d439: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d43c: call 0x5f5cf0 */ r_esp -= 4; W32(r_esp, 0x42d441u); f_005f5cf0();
    /* 0042d441: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d444: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x42d449u); f_005f54c0();
    /* 0042d449: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042d44c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d44e: jne 0x42d481 */ if (!fZ) goto L_0042d481;
L_0042d450:; BB(0x0042d450);
    /* 0042d450: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d453: cmp dword ptr [ecx + 0x184], 0 */ {  u32 a = R32((u32)(r_ecx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d45a: je 0x42d481 */ if (fZ) goto L_0042d481;
L_0042d45c:; BB(0x0042d45c);
    /* 0042d45c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d45f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042d461: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d464: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 0042d46a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42d46cu); call_ind(t); }
    /* 0042d46c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042d46f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d471: jne 0x42d481 */ if (!fZ) goto L_0042d481;
L_0042d473:; BB(0x0042d473);
    /* 0042d473: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d476: movzx edx, byte ptr [ecx + 0x18c] */ r_edx = (u32)R8((u32)(r_ecx+0x18cu));
    /* 0042d47d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d47f: je 0x42d486 */ if (fZ) goto L_0042d486;
L_0042d481:; BB(0x0042d481);
    /* 0042d481: jmp 0x42d52f */ goto L_0042d52f;
L_0042d486:; BB(0x0042d486);
    /* 0042d486: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0042d48b: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 0042d48e: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 0042d491: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0042d495: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d497: je 0x42d49e */ if (fZ) goto L_0042d49e;
L_0042d499:; BB(0x0042d499);
    /* 0042d499: jmp 0x42d52f */ goto L_0042d52f;
L_0042d49e:; BB(0x0042d49e);
    /* 0042d49e: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x42d4a4u); call_ind(t); }
    /* 0042d4a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042d4a7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d4aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d4ad: sub ecx, dword ptr [eax + 0x188] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x188u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042d4b3: cmp ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0042d4b9: jb 0x42d52f */ if (fC) goto L_0042d52f;
L_0042d4bb:; BB(0x0042d4bb);
    /* 0042d4bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d4be: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0042d4c4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042d4c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d4ca: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 0042d4d0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d4d3: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0042d4d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d4da: push 0x6b6dc4 */ { u32 v = 0x6b6dc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d4df: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42d4e4u); f_0062fde0();
    /* 0042d4e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d4e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d4ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d4ed: mov dword ptr [ecx + 0x188], edx */ W32((u32)(r_ecx+0x188u), r_edx);
    /* 0042d4f3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d4f6: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d4fd: jne 0x42d52f */ if (!fZ) goto L_0042d52f;
L_0042d4ff:; BB(0x0042d4ff);
    /* 0042d4ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d502: mov byte ptr [ecx + 0x18c], 1 */ W8((u32)(r_ecx+0x18cu), 0x1u);
    /* 0042d509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d50b: push 0x6b6da8 */ { u32 v = 0x6b6da8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d510: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42d515u); f_00630f40();
    /* 0042d515: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d519: push 0x6b6d8c */ { u32 v = 0x6b6d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d51e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42d523u); f_00630f40();
    /* 0042d523: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d527: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x42d52cu); f_0062ff10();
    /* 0042d52c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042d52f:; BB(0x0042d52f);
    /* 0042d52f: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d532: ret  */ FN_RET(0x0042d430); r_esp += 4; return;
}

void f_0042d540(void) /* CrapsHand::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d540);
    /* 0042d540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d541: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d546: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d549: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042d54c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0042d550: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d552: je 0x42d559 */ if (fZ) goto L_0042d559;
L_0042d554:; BB(0x0042d554);
    /* 0042d554: jmp 0x42d62c */ goto L_0042d62c;
L_0042d559:; BB(0x0042d559);
    /* 0042d559: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042d55c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0042d55f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042d562: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d566: je 0x42d579 */ if (fZ) goto L_0042d579;
L_0042d568:; BB(0x0042d568);
    /* 0042d568: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d56c: je 0x42d5e8 */ if (fZ) goto L_0042d5e8;
L_0042d56e:; BB(0x0042d56e);
    /* 0042d56e: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d572: je 0x42d5b9 */ if (fZ) goto L_0042d5b9;
L_0042d574:; BB(0x0042d574);
    /* 0042d574: jmp 0x42d62c */ goto L_0042d62c;
L_0042d579:; BB(0x0042d579);
    /* 0042d579: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042d57c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d57d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d580: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042d582: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d585: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0042d58b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42d58du); call_ind(t); }
    /* 0042d58d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042d590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d592: je 0x42d5b7 */ if (fZ) goto L_0042d5b7;
L_0042d594:; BB(0x0042d594);
    /* 0042d594: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d597: movzx edx, byte ptr [ecx + 0x18d] */ r_edx = (u32)R8((u32)(r_ecx+0x18du));
    /* 0042d59e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d5a0: jne 0x42d5b7 */ if (!fZ) goto L_0042d5b7;
L_0042d5a2:; BB(0x0042d5a2);
    /* 0042d5a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d5a5: mov byte ptr [eax + 8], 1 */ W8((u32)(r_eax+0x8u), 0x1u);
    /* 0042d5a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d5ac: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 0042d5b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042d5b3: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_0042d5b7:; BB(0x0042d5b7);
    /* 0042d5b7: jmp 0x42d62c */ goto L_0042d62c;
L_0042d5b9:; BB(0x0042d5b9);
    /* 0042d5b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d5bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042d5be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d5c1: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0042d5c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d5c9u); call_ind(t); }
    /* 0042d5c9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042d5cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d5ce: je 0x42d5e6 */ if (fZ) goto L_0042d5e6;
L_0042d5d0:; BB(0x0042d5d0);
    /* 0042d5d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042d5d3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0042d5d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d5d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042d5da: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0042d5dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d5de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d5e1: call 0x42d640 */ r_esp -= 4; W32(r_esp, 0x42d5e6u); f_0042d640();
L_0042d5e6:; BB(0x0042d5e6);
    /* 0042d5e6: jmp 0x42d62c */ goto L_0042d62c;
L_0042d5e8:; BB(0x0042d5e8);
    /* 0042d5e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d5eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042d5ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d5f0: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0042d5f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d5f8u); call_ind(t); }
    /* 0042d5f8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042d5fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d5fd: je 0x42d62c */ if (fZ) goto L_0042d62c;
L_0042d5ff:; BB(0x0042d5ff);
    /* 0042d5ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d602: mov dword ptr [edx + 0x184], 0 */ W32((u32)(r_edx+0x184u), 0x0u);
    /* 0042d60c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d60f: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0042d613: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d616: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0042d61a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d61d: call 0x42d750 */ r_esp -= 4; W32(r_esp, 0x42d622u); f_0042d750();
    /* 0042d622: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d625: mov byte ptr [edx + 0x18d], 1 */ W8((u32)(r_edx+0x18du), 0x1u);
L_0042d62c:; BB(0x0042d62c);
    /* 0042d62c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d62e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d62f: ret 4 */ FN_RET(0x0042d540); r_esp += 8; return;
}

