#include "protos.h"

void f_004da170(void) /* sub_4DA170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da170);
    /* 004da170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da171: mov ebp, esp */ r_ebp = r_esp;
    /* 004da173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da177: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da17a: mov ax, word ptr [eax + 0x1fa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1fau))) & 0xffffu);
    /* 004da181: mov esp, ebp */ r_esp = r_ebp;
    /* 004da183: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da184: ret  */ FN_RET(0x004da170); r_esp += 4; return;
}

void f_004da360(void) /* sub_4DA360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da360);
    /* 004da360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da361: mov ebp, esp */ r_ebp = r_esp;
    /* 004da363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da36a: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4da36fu); f_004c61b0();
    /* 004da36f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004da372: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da374: je 0x4da383 */ if (fZ) goto L_004da383;
L_004da376:; BB(0x004da376);
    /* 004da376: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004da37c: mov byte ptr [ecx + 0x409], 1 */ W8((u32)(r_ecx+0x409u), 0x1u);
L_004da383:; BB(0x004da383);
    /* 004da383: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da386: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004da389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da38c: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004da38f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004da391: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004da394: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da396u); call_ind(t); }
    /* 004da396: mov esp, ebp */ r_esp = r_ebp;
    /* 004da398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da399: ret  */ FN_RET(0x004da360); r_esp += 4; return;
}

void f_004da3a0(void) /* sub_4DA3A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da3a0);
    /* 004da3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004da3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da3a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da3aa: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004da3ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da3b0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004da3b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004da3b5: mov ecx, eax */ r_ecx = r_eax;
    /* 004da3b7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004da3ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da3bcu); call_ind(t); }
    /* 004da3bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004da3be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da3bf: ret  */ FN_RET(0x004da3a0); r_esp += 4; return;
}

void f_004da450(void) /* sub_4DA450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da450);
    /* 004da450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da451: mov ebp, esp */ r_ebp = r_esp;
    /* 004da453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da457: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da45a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004da45d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da460: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 004da463: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004da465: mov ecx, eax */ r_ecx = r_eax;
    /* 004da467: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004da46a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da46cu); call_ind(t); }
    /* 004da46c: mov esp, ebp */ r_esp = r_ebp;
    /* 004da46e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da46f: ret  */ FN_RET(0x004da450); r_esp += 4; return;
}

void f_004da470(void) /* sub_4DA470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da470);
    /* 004da470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da471: mov ebp, esp */ r_ebp = r_esp;
    /* 004da473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da47a: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4da47fu); f_004c61b0();
    /* 004da47f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004da482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da484: je 0x4da493 */ if (fZ) goto L_004da493;
L_004da486:; BB(0x004da486);
    /* 004da486: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004da48c: mov byte ptr [ecx + 0x40a], 1 */ W8((u32)(r_ecx+0x40au), 0x1u);
L_004da493:; BB(0x004da493);
    /* 004da493: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da496: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004da499: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da49c: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 004da49f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004da4a1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004da4a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da4a6u); call_ind(t); }
    /* 004da4a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004da4a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da4a9: ret  */ FN_RET(0x004da470); r_esp += 4; return;
}

void f_004da4b0(void) /* sub_4DA4B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da4b0);
    /* 004da4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004da4b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da4b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da4b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da4ba: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004da4bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da4c0: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004da4c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004da4c5: mov ecx, eax */ r_ecx = r_eax;
    /* 004da4c7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004da4ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da4ccu); call_ind(t); }
    /* 004da4cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004da4ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da4cf: ret  */ FN_RET(0x004da4b0); r_esp += 4; return;
}

void f_004da4d0(void) /* sub_4DA4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da4d0);
    /* 004da4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004da4d3: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da4d6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004da4db: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da4dd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004da4e0: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 004da4e3: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 004da4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da4e9: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da4ec: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da4f1u); f_004a1e10();
    /* 004da4f1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da4f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da4f6: je 0x4da518 */ if (fZ) goto L_004da518;
L_004da4f8:; BB(0x004da4f8);
    /* 004da4f8: push 0x6ba73c */ { u32 v = 0x6ba73cu; r_esp -= 4; W32(r_esp, v); }
    /* 004da4fd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da502u); f_00630f40();
    /* 004da502: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da505: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da506: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da50b: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da50e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da50f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da515u); call_ind(t); }
    /* 004da515: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da518:; BB(0x004da518);
    /* 004da518: mov eax, dword ptr [0x7913b0] */ r_eax = R32((u32)(0x7913b0u));
    /* 004da51d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da51e: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da521: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da526u); f_004a1e10();
    /* 004da526: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da52b: je 0x4da54d */ if (fZ) goto L_004da54d;
L_004da52d:; BB(0x004da52d);
    /* 004da52d: push 0x6ba750 */ { u32 v = 0x6ba750u; r_esp -= 4; W32(r_esp, v); }
    /* 004da532: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da537u); f_00630f40();
    /* 004da537: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da53a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da53b: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da540: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da544: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da54au); call_ind(t); }
    /* 004da54a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da54d:; BB(0x004da54d);
    /* 004da54d: mov eax, dword ptr [0x79139c] */ r_eax = R32((u32)(0x79139cu));
    /* 004da552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da553: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da556: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da55bu); f_004a1e10();
    /* 004da55b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da55e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da560: je 0x4da582 */ if (fZ) goto L_004da582;
L_004da562:; BB(0x004da562);
    /* 004da562: push 0x6bf988 */ { u32 v = 0x6bf988u; r_esp -= 4; W32(r_esp, v); }
    /* 004da567: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da56cu); f_00630f40();
    /* 004da56c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da56f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da570: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da575: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da578: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da579: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da57fu); call_ind(t); }
    /* 004da57f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da582:; BB(0x004da582);
    /* 004da582: mov eax, dword ptr [0x791380] */ r_eax = R32((u32)(0x791380u));
    /* 004da587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da588: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da58b: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da590u); f_004a1e10();
    /* 004da590: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da593: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da595: je 0x4da5b7 */ if (fZ) goto L_004da5b7;
L_004da597:; BB(0x004da597);
    /* 004da597: push 0x6ba760 */ { u32 v = 0x6ba760u; r_esp -= 4; W32(r_esp, v); }
    /* 004da59c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da5a1u); f_00630f40();
    /* 004da5a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da5a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da5a5: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da5aa: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da5ae: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da5b4u); call_ind(t); }
    /* 004da5b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da5b7:; BB(0x004da5b7);
    /* 004da5b7: mov eax, dword ptr [0x791418] */ r_eax = R32((u32)(0x791418u));
    /* 004da5bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da5bd: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da5c0: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da5c5u); f_004a1e10();
    /* 004da5c5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da5c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da5ca: je 0x4da5ec */ if (fZ) goto L_004da5ec;
L_004da5cc:; BB(0x004da5cc);
    /* 004da5cc: push 0x6bf974 */ { u32 v = 0x6bf974u; r_esp -= 4; W32(r_esp, v); }
    /* 004da5d1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da5d6u); f_00630f40();
    /* 004da5d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da5d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da5da: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da5df: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da5e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da5e3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da5e9u); call_ind(t); }
    /* 004da5e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da5ec:; BB(0x004da5ec);
    /* 004da5ec: mov eax, dword ptr [0x79140c] */ r_eax = R32((u32)(0x79140cu));
    /* 004da5f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da5f2: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da5f5: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da5fau); f_004a1e10();
    /* 004da5fa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da5fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da5ff: je 0x4da621 */ if (fZ) goto L_004da621;
L_004da601:; BB(0x004da601);
    /* 004da601: push 0x6ba790 */ { u32 v = 0x6ba790u; r_esp -= 4; W32(r_esp, v); }
    /* 004da606: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da60bu); f_00630f40();
    /* 004da60b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da60e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da60f: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da614: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da617: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da618: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da61eu); call_ind(t); }
    /* 004da61e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da621:; BB(0x004da621);
    /* 004da621: mov eax, dword ptr [0x7913e4] */ r_eax = R32((u32)(0x7913e4u));
    /* 004da626: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da627: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da62a: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da62fu); f_004a1e10();
    /* 004da62f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da632: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da634: je 0x4da656 */ if (fZ) goto L_004da656;
L_004da636:; BB(0x004da636);
    /* 004da636: push 0x6bf964 */ { u32 v = 0x6bf964u; r_esp -= 4; W32(r_esp, v); }
    /* 004da63b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da640u); f_00630f40();
    /* 004da640: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da644: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da649: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da64c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da64d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da653u); call_ind(t); }
    /* 004da653: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da656:; BB(0x004da656);
    /* 004da656: mov eax, dword ptr [0x791384] */ r_eax = R32((u32)(0x791384u));
    /* 004da65b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da65c: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da65f: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da664u); f_004a1e10();
    /* 004da664: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da667: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da669: je 0x4da68b */ if (fZ) goto L_004da68b;
L_004da66b:; BB(0x004da66b);
    /* 004da66b: push 0x6bf954 */ { u32 v = 0x6bf954u; r_esp -= 4; W32(r_esp, v); }
    /* 004da670: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da675u); f_00630f40();
    /* 004da675: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da679: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da67e: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da681: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da682: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da688u); call_ind(t); }
    /* 004da688: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da68b:; BB(0x004da68b);
    /* 004da68b: mov eax, dword ptr [0x7913a0] */ r_eax = R32((u32)(0x7913a0u));
    /* 004da690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da691: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da694: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da699u); f_004a1e10();
    /* 004da699: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da69c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da69e: je 0x4da6c0 */ if (fZ) goto L_004da6c0;
L_004da6a0:; BB(0x004da6a0);
    /* 004da6a0: push 0x6ba7a4 */ { u32 v = 0x6ba7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004da6a5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da6aau); f_00630f40();
    /* 004da6aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da6ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da6ae: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da6b3: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da6b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da6b7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da6bdu); call_ind(t); }
    /* 004da6bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da6c0:; BB(0x004da6c0);
    /* 004da6c0: mov eax, dword ptr [0x7913d4] */ r_eax = R32((u32)(0x7913d4u));
    /* 004da6c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da6c6: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da6c9: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da6ceu); f_004a1e10();
    /* 004da6ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da6d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da6d3: je 0x4da6f5 */ if (fZ) goto L_004da6f5;
L_004da6d5:; BB(0x004da6d5);
    /* 004da6d5: push 0x6ba7b4 */ { u32 v = 0x6ba7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004da6da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da6dfu); f_00630f40();
    /* 004da6df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da6e3: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da6e8: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da6eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da6ec: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da6f2u); call_ind(t); }
    /* 004da6f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da6f5:; BB(0x004da6f5);
    /* 004da6f5: mov eax, dword ptr [0x791394] */ r_eax = R32((u32)(0x791394u));
    /* 004da6fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da6fb: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da6fe: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da703u); f_004a1e10();
    /* 004da703: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da708: je 0x4da72a */ if (fZ) goto L_004da72a;
L_004da70a:; BB(0x004da70a);
    /* 004da70a: push 0x6bf940 */ { u32 v = 0x6bf940u; r_esp -= 4; W32(r_esp, v); }
    /* 004da70f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da714u); f_00630f40();
    /* 004da714: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da718: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da71d: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da720: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da721: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da727u); call_ind(t); }
    /* 004da727: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da72a:; BB(0x004da72a);
    /* 004da72a: mov eax, dword ptr [0x791398] */ r_eax = R32((u32)(0x791398u));
    /* 004da72f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da730: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da733: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da738u); f_004a1e10();
    /* 004da738: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da73b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da73d: je 0x4da75f */ if (fZ) goto L_004da75f;
L_004da73f:; BB(0x004da73f);
    /* 004da73f: push 0x6ba7e4 */ { u32 v = 0x6ba7e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004da744: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da749u); f_00630f40();
    /* 004da749: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da74c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da74d: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da752: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da755: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da756: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da75cu); call_ind(t); }
    /* 004da75c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da75f:; BB(0x004da75f);
    /* 004da75f: mov eax, dword ptr [0x7913e8] */ r_eax = R32((u32)(0x7913e8u));
    /* 004da764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da765: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da768: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da76du); f_004a1e10();
    /* 004da76d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da770: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da772: je 0x4da794 */ if (fZ) goto L_004da794;
L_004da774:; BB(0x004da774);
    /* 004da774: push 0x6ba7fc */ { u32 v = 0x6ba7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da779: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da77eu); f_00630f40();
    /* 004da77e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da782: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da787: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da78a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da78b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da791u); call_ind(t); }
    /* 004da791: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da794:; BB(0x004da794);
    /* 004da794: mov eax, dword ptr [0x7913c4] */ r_eax = R32((u32)(0x7913c4u));
    /* 004da799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da79a: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da79d: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da7a2u); f_004a1e10();
    /* 004da7a2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da7a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da7a7: je 0x4da7c9 */ if (fZ) goto L_004da7c9;
L_004da7a9:; BB(0x004da7a9);
    /* 004da7a9: push 0x6bf92c */ { u32 v = 0x6bf92cu; r_esp -= 4; W32(r_esp, v); }
    /* 004da7ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da7b3u); f_00630f40();
    /* 004da7b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da7b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da7b7: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da7bc: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da7bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da7c0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da7c6u); call_ind(t); }
    /* 004da7c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da7c9:; BB(0x004da7c9);
    /* 004da7c9: mov eax, dword ptr [0x7913ac] */ r_eax = R32((u32)(0x7913acu));
    /* 004da7ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da7cf: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da7d2: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da7d7u); f_004a1e10();
    /* 004da7d7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da7da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da7dc: je 0x4da7fe */ if (fZ) goto L_004da7fe;
L_004da7de:; BB(0x004da7de);
    /* 004da7de: push 0x6bf914 */ { u32 v = 0x6bf914u; r_esp -= 4; W32(r_esp, v); }
    /* 004da7e3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da7e8u); f_00630f40();
    /* 004da7e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da7ec: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da7f1: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da7f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da7f5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da7fbu); call_ind(t); }
    /* 004da7fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da7fe:; BB(0x004da7fe);
    /* 004da7fe: mov eax, dword ptr [0x7913cc] */ r_eax = R32((u32)(0x7913ccu));
    /* 004da803: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da804: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da807: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da80cu); f_004a1e10();
    /* 004da80c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da80f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da811: je 0x4da833 */ if (fZ) goto L_004da833;
L_004da813:; BB(0x004da813);
    /* 004da813: push 0x6bf900 */ { u32 v = 0x6bf900u; r_esp -= 4; W32(r_esp, v); }
    /* 004da818: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da81du); f_00630f40();
    /* 004da81d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da821: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da826: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 004da829: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da82a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da830u); call_ind(t); }
    /* 004da830: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da833:; BB(0x004da833);
    /* 004da833: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004da836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da837: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004da83a: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004da83d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 004da840: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004da843: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004da845: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004da84b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da84du); call_ind(t); }
    /* 004da84d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004da850: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004da853: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 004da856: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004da859: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004da85b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004da85e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da860u); call_ind(t); }
    /* 004da860: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004da863: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004da866: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 004da869: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004da86c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004da86e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004da871: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da873u); call_ind(t); }
    /* 004da873: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da876: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004da878: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4da87du); f_00686d72();
    /* 004da87d: mov esp, ebp */ r_esp = r_ebp;
    /* 004da87f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da880: ret 4 */ FN_RET(0x004da4d0); r_esp += 8; return;
}

void f_004da890(void) /* sub_4DA890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da890);
    /* 004da890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da891: mov ebp, esp */ r_ebp = r_esp;
    /* 004da893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da89a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004da89d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da8a0: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004da8a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004da8a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004da8a7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004da8aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da8acu); call_ind(t); }
    /* 004da8ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da8af: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004da8b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004da8b5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004da8b8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004da8ba: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004da8bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4da8bfu); call_ind(t); }
    /* 004da8bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004da8c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da8c2: ret  */ FN_RET(0x004da890); r_esp += 4; return;
}

void f_004da8d0(void) /* sub_4DA8D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da8d0);
    /* 004da8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004da8d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da8d5: push 0x6a24f4 */ { u32 v = 0x6a24f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004da8da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004da8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da8e1: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da8e7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004da8ec: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da8ee: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004da8f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da8f2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004da8f5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004da8fb: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 004da901: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004da908: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 004da90d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da90e: lea ecx, [ebp - 0x7d] */ r_ecx = (u32)(r_ebp+0xffffff83u);
    /* 004da911: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da912: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da915: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4da91au); f_004a2160();
    /* 004da91a: mov ecx, eax */ r_ecx = r_eax;
    /* 004da91c: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da921u); f_004a1e10();
    /* 004da921: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004da924: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da926: je 0x4da9c6 */ if (fZ) goto L_004da9c6;
L_004da92c:; BB(0x004da92c);
    /* 004da92c: lea eax, [ebp - 0x7e] */ r_eax = (u32)(r_ebp+0xffffff82u);
    /* 004da92f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da930: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da933: call 0x4a22f0 */ r_esp -= 4; W32(r_esp, 0x4da938u); f_004a22f0();
    /* 004da938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da939: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4da93eu); f_004dae80();
    /* 004da93e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da941: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004da944: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da945: lea edx, [ebp - 0x7f] */ r_edx = (u32)(r_ebp+0xffffff81u);
    /* 004da948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da949: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da94c: call 0x4a22a0 */ r_esp -= 4; W32(r_esp, 0x4da951u); f_004a22a0();
    /* 004da951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da952: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4da957u); f_004dae80();
    /* 004da957: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da95a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004da95d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da95e: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 004da961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da962: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da965: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x4da96au); f_004a2250();
    /* 004da96a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da96b: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4da970u); f_004dae80();
    /* 004da970: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da973: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 004da976: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da977: lea eax, [ebp - 0x81] */ r_eax = (u32)(r_ebp+0xffffff7fu);
    /* 004da97d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da97e: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da981: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x4da986u); f_004a2200();
    /* 004da986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da987: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4da98cu); f_004dae80();
    /* 004da98c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da98f: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004da992: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da993: lea edx, [ebp - 0x82] */ r_edx = (u32)(r_ebp+0xffffff7eu);
    /* 004da999: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da99a: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da99d: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x4da9a2u); f_004a21b0();
    /* 004da9a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da9a3: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4da9a8u); f_004dae80();
    /* 004da9a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da9ab: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004da9ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da9af: push 0x6bf99c */ { u32 v = 0x6bf99cu; r_esp -= 4; W32(r_esp, v); }
    /* 004da9b4: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004da9b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da9b8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4da9beu); call_ind(t); }
    /* 004da9be: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da9c1: jmp 0x4dae00 */ goto L_004dae00;
L_004da9c6:; BB(0x004da9c6);
    /* 004da9c6: mov edx, dword ptr [0x7913b0] */ r_edx = R32((u32)(0x7913b0u));
    /* 004da9cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da9cd: lea eax, [ebp - 0x83] */ r_eax = (u32)(r_ebp+0xffffff7du);
    /* 004da9d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da9d4: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004da9d7: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4da9dcu); f_004a2160();
    /* 004da9dc: mov ecx, eax */ r_ecx = r_eax;
    /* 004da9de: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4da9e3u); f_004a1e10();
    /* 004da9e3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004da9e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da9e8: je 0x4daa0f */ if (fZ) goto L_004daa0f;
L_004da9ea:; BB(0x004da9ea);
    /* 004da9ea: push 0x6ba750 */ { u32 v = 0x6ba750u; r_esp -= 4; W32(r_esp, v); }
    /* 004da9ef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4da9f4u); f_00630f40();
    /* 004da9f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da9f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da9f8: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004da9fd: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004daa00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004daa01: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4daa07u); call_ind(t); }
    /* 004daa07: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daa0a: jmp 0x4dae00 */ goto L_004dae00;
L_004daa0f:; BB(0x004daa0f);
    /* 004daa0f: mov eax, dword ptr [0x79139c] */ r_eax = R32((u32)(0x79139cu));
    /* 004daa14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daa15: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 004daa1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daa1c: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004daa1f: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4daa24u); f_004a2160();
    /* 004daa24: mov ecx, eax */ r_ecx = r_eax;
    /* 004daa26: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4daa2bu); f_004a1e10();
    /* 004daa2b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004daa2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daa30: je 0x4daa57 */ if (fZ) goto L_004daa57;
L_004daa32:; BB(0x004daa32);
    /* 004daa32: push 0x6bf988 */ { u32 v = 0x6bf988u; r_esp -= 4; W32(r_esp, v); }
    /* 004daa37: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4daa3cu); f_00630f40();
    /* 004daa3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daa3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daa40: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004daa45: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004daa48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daa49: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4daa4fu); call_ind(t); }
    /* 004daa4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daa52: jmp 0x4dae00 */ goto L_004dae00;
L_004daa57:; BB(0x004daa57);
    /* 004daa57: mov ecx, dword ptr [0x791380] */ r_ecx = R32((u32)(0x791380u));
    /* 004daa5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daa5e: lea edx, [ebp - 0x85] */ r_edx = (u32)(r_ebp+0xffffff7bu);
    /* 004daa64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004daa65: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004daa68: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4daa6du); f_004a2160();
    /* 004daa6d: mov ecx, eax */ r_ecx = r_eax;
    /* 004daa6f: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4daa74u); f_004a1e10();
    /* 004daa74: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004daa77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daa79: je 0x4daaa0 */ if (fZ) goto L_004daaa0;
L_004daa7b:; BB(0x004daa7b);
    /* 004daa7b: push 0x6ba760 */ { u32 v = 0x6ba760u; r_esp -= 4; W32(r_esp, v); }
    /* 004daa80: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4daa85u); f_00630f40();
    /* 004daa85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daa88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daa89: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004daa8e: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004daa91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daa92: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4daa98u); call_ind(t); }
    /* 004daa98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daa9b: jmp 0x4dae00 */ goto L_004dae00;
L_004daaa0:; BB(0x004daaa0);
    /* 004daaa0: mov edx, dword ptr [0x791418] */ r_edx = R32((u32)(0x791418u));
    /* 004daaa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004daaa7: lea eax, [ebp - 0x86] */ r_eax = (u32)(r_ebp+0xffffff7au);
    /* 004daaad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daaae: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004daab1: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4daab6u); f_004a2160();
    /* 004daab6: mov ecx, eax */ r_ecx = r_eax;
    /* 004daab8: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4daabdu); f_004a1e10();
    /* 004daabd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004daac0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daac2: je 0x4daae9 */ if (fZ) goto L_004daae9;
L_004daac4:; BB(0x004daac4);
    /* 004daac4: push 0x6bf974 */ { u32 v = 0x6bf974u; r_esp -= 4; W32(r_esp, v); }
    /* 004daac9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4daaceu); f_00630f40();
    /* 004daace: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daad2: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004daad7: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004daada: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004daadb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4daae1u); call_ind(t); }
    /* 004daae1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daae4: jmp 0x4dae00 */ goto L_004dae00;
L_004daae9:; BB(0x004daae9);
    /* 004daae9: mov eax, dword ptr [0x79140c] */ r_eax = R32((u32)(0x79140cu));
    /* 004daaee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daaef: lea ecx, [ebp - 0x87] */ r_ecx = (u32)(r_ebp+0xffffff79u);
    /* 004daaf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daaf6: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004daaf9: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4daafeu); f_004a2160();
    /* 004daafe: mov ecx, eax */ r_ecx = r_eax;
    /* 004dab00: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dab05u); f_004a1e10();
    /* 004dab05: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004dab08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dab0a: je 0x4dab31 */ if (fZ) goto L_004dab31;
L_004dab0c:; BB(0x004dab0c);
    /* 004dab0c: push 0x6ba790 */ { u32 v = 0x6ba790u; r_esp -= 4; W32(r_esp, v); }
    /* 004dab11: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dab16u); f_00630f40();
    /* 004dab16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dab19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dab1a: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dab1f: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004dab22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dab23: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dab29u); call_ind(t); }
    /* 004dab29: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dab2c: jmp 0x4dae00 */ goto L_004dae00;
L_004dab31:; BB(0x004dab31);
    /* 004dab31: mov ecx, dword ptr [0x7913e4] */ r_ecx = R32((u32)(0x7913e4u));
    /* 004dab37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dab38: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 004dab3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dab3f: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dab42: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dab47u); f_004a2160();
    /* 004dab47: mov ecx, eax */ r_ecx = r_eax;
    /* 004dab49: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dab4eu); f_004a1e10();
    /* 004dab4e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004dab51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dab53: je 0x4dab7a */ if (fZ) goto L_004dab7a;
L_004dab55:; BB(0x004dab55);
    /* 004dab55: push 0x6bf964 */ { u32 v = 0x6bf964u; r_esp -= 4; W32(r_esp, v); }
    /* 004dab5a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dab5fu); f_00630f40();
    /* 004dab5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dab62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dab63: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dab68: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004dab6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dab6c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dab72u); call_ind(t); }
    /* 004dab72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dab75: jmp 0x4dae00 */ goto L_004dae00;
L_004dab7a:; BB(0x004dab7a);
    /* 004dab7a: mov edx, dword ptr [0x791384] */ r_edx = R32((u32)(0x791384u));
    /* 004dab80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dab81: lea eax, [ebp - 0x89] */ r_eax = (u32)(r_ebp+0xffffff77u);
    /* 004dab87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dab88: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dab8b: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dab90u); f_004a2160();
    /* 004dab90: mov ecx, eax */ r_ecx = r_eax;
    /* 004dab92: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dab97u); f_004a1e10();
    /* 004dab97: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004dab9a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dab9c: je 0x4dabc3 */ if (fZ) goto L_004dabc3;
L_004dab9e:; BB(0x004dab9e);
    /* 004dab9e: push 0x6bf954 */ { u32 v = 0x6bf954u; r_esp -= 4; W32(r_esp, v); }
    /* 004daba3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4daba8u); f_00630f40();
    /* 004daba8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dabab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dabac: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dabb1: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004dabb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dabb5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dabbbu); call_ind(t); }
    /* 004dabbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dabbe: jmp 0x4dae00 */ goto L_004dae00;
L_004dabc3:; BB(0x004dabc3);
    /* 004dabc3: mov eax, dword ptr [0x7913a0] */ r_eax = R32((u32)(0x7913a0u));
    /* 004dabc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dabc9: lea ecx, [ebp - 0x8a] */ r_ecx = (u32)(r_ebp+0xffffff76u);
    /* 004dabcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dabd0: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dabd3: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dabd8u); f_004a2160();
    /* 004dabd8: mov ecx, eax */ r_ecx = r_eax;
    /* 004dabda: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dabdfu); f_004a1e10();
    /* 004dabdf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004dabe2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dabe4: je 0x4dac0b */ if (fZ) goto L_004dac0b;
L_004dabe6:; BB(0x004dabe6);
    /* 004dabe6: push 0x6ba7a4 */ { u32 v = 0x6ba7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dabeb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dabf0u); f_00630f40();
    /* 004dabf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dabf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dabf4: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dabf9: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004dabfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dabfd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dac03u); call_ind(t); }
    /* 004dac03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dac06: jmp 0x4dae00 */ goto L_004dae00;
L_004dac0b:; BB(0x004dac0b);
    /* 004dac0b: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 004dac11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dac12: lea edx, [ebp - 0x8b] */ r_edx = (u32)(r_ebp+0xffffff75u);
    /* 004dac18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dac19: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dac1c: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dac21u); f_004a2160();
    /* 004dac21: mov ecx, eax */ r_ecx = r_eax;
    /* 004dac23: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dac28u); f_004a1e10();
    /* 004dac28: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004dac2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dac2d: je 0x4dac54 */ if (fZ) goto L_004dac54;
L_004dac2f:; BB(0x004dac2f);
    /* 004dac2f: push 0x6ba7b4 */ { u32 v = 0x6ba7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dac34: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dac39u); f_00630f40();
    /* 004dac39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dac3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dac3d: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dac42: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004dac45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dac46: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dac4cu); call_ind(t); }
    /* 004dac4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dac4f: jmp 0x4dae00 */ goto L_004dae00;
L_004dac54:; BB(0x004dac54);
    /* 004dac54: mov edx, dword ptr [0x791394] */ r_edx = R32((u32)(0x791394u));
    /* 004dac5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dac5b: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 004dac61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dac62: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dac65: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dac6au); f_004a2160();
    /* 004dac6a: mov ecx, eax */ r_ecx = r_eax;
    /* 004dac6c: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dac71u); f_004a1e10();
    /* 004dac71: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004dac74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dac76: je 0x4dac9d */ if (fZ) goto L_004dac9d;
L_004dac78:; BB(0x004dac78);
    /* 004dac78: push 0x6bf940 */ { u32 v = 0x6bf940u; r_esp -= 4; W32(r_esp, v); }
    /* 004dac7d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dac82u); f_00630f40();
    /* 004dac82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dac85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dac86: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dac8b: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004dac8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dac8f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dac95u); call_ind(t); }
    /* 004dac95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dac98: jmp 0x4dae00 */ goto L_004dae00;
L_004dac9d:; BB(0x004dac9d);
    /* 004dac9d: mov eax, dword ptr [0x791398] */ r_eax = R32((u32)(0x791398u));
    /* 004daca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daca3: lea ecx, [ebp - 0x8d] */ r_ecx = (u32)(r_ebp+0xffffff73u);
    /* 004daca9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dacaa: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dacad: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dacb2u); f_004a2160();
    /* 004dacb2: mov ecx, eax */ r_ecx = r_eax;
    /* 004dacb4: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dacb9u); f_004a1e10();
    /* 004dacb9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004dacbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dacbe: je 0x4dace5 */ if (fZ) goto L_004dace5;
L_004dacc0:; BB(0x004dacc0);
    /* 004dacc0: push 0x6ba7e4 */ { u32 v = 0x6ba7e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dacc5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4daccau); f_00630f40();
    /* 004dacca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dacce: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dacd3: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004dacd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dacd7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dacddu); call_ind(t); }
    /* 004dacdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dace0: jmp 0x4dae00 */ goto L_004dae00;
L_004dace5:; BB(0x004dace5);
    /* 004dace5: mov ecx, dword ptr [0x7913e8] */ r_ecx = R32((u32)(0x7913e8u));
    /* 004daceb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dacec: lea edx, [ebp - 0x8e] */ r_edx = (u32)(r_ebp+0xffffff72u);
    /* 004dacf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dacf3: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dacf6: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dacfbu); f_004a2160();
    /* 004dacfb: mov ecx, eax */ r_ecx = r_eax;
    /* 004dacfd: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dad02u); f_004a1e10();
    /* 004dad02: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004dad05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dad07: je 0x4dad2e */ if (fZ) goto L_004dad2e;
L_004dad09:; BB(0x004dad09);
    /* 004dad09: push 0x6ba7fc */ { u32 v = 0x6ba7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004dad0e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dad13u); f_00630f40();
    /* 004dad13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dad16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dad17: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dad1c: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004dad1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dad20: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dad26u); call_ind(t); }
    /* 004dad26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dad29: jmp 0x4dae00 */ goto L_004dae00;
L_004dad2e:; BB(0x004dad2e);
    /* 004dad2e: mov edx, dword ptr [0x7913c4] */ r_edx = R32((u32)(0x7913c4u));
    /* 004dad34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dad35: lea eax, [ebp - 0x8f] */ r_eax = (u32)(r_ebp+0xffffff71u);
    /* 004dad3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dad3c: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dad3f: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dad44u); f_004a2160();
    /* 004dad44: mov ecx, eax */ r_ecx = r_eax;
    /* 004dad46: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dad4bu); f_004a1e10();
    /* 004dad4b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004dad4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dad50: je 0x4dad77 */ if (fZ) goto L_004dad77;
L_004dad52:; BB(0x004dad52);
    /* 004dad52: push 0x6bf92c */ { u32 v = 0x6bf92cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dad57: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dad5cu); f_00630f40();
    /* 004dad5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dad5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dad60: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dad65: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004dad68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dad69: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dad6fu); call_ind(t); }
    /* 004dad6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dad72: jmp 0x4dae00 */ goto L_004dae00;
L_004dad77:; BB(0x004dad77);
    /* 004dad77: mov eax, dword ptr [0x7913ac] */ r_eax = R32((u32)(0x7913acu));
    /* 004dad7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dad7d: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 004dad83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dad84: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dad87: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dad8cu); f_004a2160();
    /* 004dad8c: mov ecx, eax */ r_ecx = r_eax;
    /* 004dad8e: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dad93u); f_004a1e10();
    /* 004dad93: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004dad96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dad98: je 0x4dadbc */ if (fZ) goto L_004dadbc;
L_004dad9a:; BB(0x004dad9a);
    /* 004dad9a: push 0x6bf914 */ { u32 v = 0x6bf914u; r_esp -= 4; W32(r_esp, v); }
    /* 004dad9f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dada4u); f_00630f40();
    /* 004dada4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dada7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dada8: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dadad: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004dadb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dadb1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dadb7u); call_ind(t); }
    /* 004dadb7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dadba: jmp 0x4dae00 */ goto L_004dae00;
L_004dadbc:; BB(0x004dadbc);
    /* 004dadbc: mov ecx, dword ptr [0x7913cc] */ r_ecx = R32((u32)(0x7913ccu));
    /* 004dadc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dadc3: lea edx, [ebp - 0x91] */ r_edx = (u32)(r_ebp+0xffffff6fu);
    /* 004dadc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dadca: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dadcd: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4dadd2u); f_004a2160();
    /* 004dadd2: mov ecx, eax */ r_ecx = r_eax;
    /* 004dadd4: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4dadd9u); f_004a1e10();
    /* 004dadd9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004daddc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dadde: je 0x4dae00 */ if (fZ) goto L_004dae00;
L_004dade0:; BB(0x004dade0);
    /* 004dade0: push 0x6bf900 */ { u32 v = 0x6bf900u; r_esp -= 4; W32(r_esp, v); }
    /* 004dade5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dadeau); f_00630f40();
    /* 004dadea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dadee: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dadf3: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004dadf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dadf7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dadfdu); call_ind(t); }
    /* 004dadfd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dae00:; BB(0x004dae00);
    /* 004dae00: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004dae03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dae04: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 004dae0a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004dae0d: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 004dae13: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004dae16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dae18: mov ecx, eax */ r_ecx = r_eax;
    /* 004dae1a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004dae20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dae22u); call_ind(t); }
    /* 004dae22: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 004dae28: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004dae2b: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 004dae31: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004dae34: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dae36: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004dae39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dae3bu); call_ind(t); }
    /* 004dae3b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 004dae41: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004dae44: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 004dae4a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004dae4d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dae4f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004dae52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dae54u); call_ind(t); }
    /* 004dae54: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dae5b: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004dae5e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4dae63u); f_004a20f0();
    /* 004dae63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dae66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dae6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dae6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004dae71: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004dae73: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4dae78u); f_00686d72();
    /* 004dae78: mov esp, ebp */ r_esp = r_ebp;
    /* 004dae7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dae7b: ret 4 */ FN_RET(0x004da8d0); r_esp += 8; return;
}

void f_004dae80(void) /* sub_4DAE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004dae80);
    /* 004dae80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dae81: mov ebp, esp */ r_ebp = r_esp;
    /* 004dae83: mov eax, dword ptr [0x7913d0] */ r_eax = R32((u32)(0x7913d0u));
    /* 004dae88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dae89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004dae8c: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4dae91u); f_004a1fb0();
    /* 004dae91: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004dae94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dae96: je 0x4daea4 */ if (fZ) goto L_004daea4;
L_004dae98:; BB(0x004dae98);
    /* 004dae98: mov al, 0x78 */ r_eax = (r_eax & 0xffffff00u) | ((0x78u) & 0xffu);
    /* 004dae9a: jmp 0x4db060 */ goto L_004db060;
L_004daea4:; BB(0x004daea4);
    /* 004daea4: mov edx, dword ptr [0x7913f0] */ r_edx = R32((u32)(0x7913f0u));
    /* 004daeaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004daeab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daeae: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daeb3u); f_004a1fb0();
    /* 004daeb3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004daeb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daeb8: je 0x4daec6 */ if (fZ) goto L_004daec6;
L_004daeba:; BB(0x004daeba);
    /* 004daeba: mov al, 0x32 */ r_eax = (r_eax & 0xffffff00u) | ((0x32u) & 0xffu);
    /* 004daebc: jmp 0x4db060 */ goto L_004db060;
L_004daec6:; BB(0x004daec6);
    /* 004daec6: mov ecx, dword ptr [0x7913d8] */ r_ecx = R32((u32)(0x7913d8u));
    /* 004daecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daecd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daed0: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daed5u); f_004a1fb0();
    /* 004daed5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004daed8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daeda: je 0x4daee8 */ if (fZ) goto L_004daee8;
L_004daedc:; BB(0x004daedc);
    /* 004daedc: mov al, 0x33 */ r_eax = (r_eax & 0xffffff00u) | ((0x33u) & 0xffu);
    /* 004daede: jmp 0x4db060 */ goto L_004db060;
L_004daee8:; BB(0x004daee8);
    /* 004daee8: mov eax, dword ptr [0x791414] */ r_eax = R32((u32)(0x791414u));
    /* 004daeed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daeee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daef1: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daef6u); f_004a1fb0();
    /* 004daef6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004daef9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daefb: je 0x4daf09 */ if (fZ) goto L_004daf09;
L_004daefd:; BB(0x004daefd);
    /* 004daefd: mov al, 0x34 */ r_eax = (r_eax & 0xffffff00u) | ((0x34u) & 0xffu);
    /* 004daeff: jmp 0x4db060 */ goto L_004db060;
L_004daf09:; BB(0x004daf09);
    /* 004daf09: mov edx, dword ptr [0x7913a4] */ r_edx = R32((u32)(0x7913a4u));
    /* 004daf0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004daf10: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daf13: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daf18u); f_004a1fb0();
    /* 004daf18: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004daf1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daf1d: je 0x4daf2b */ if (fZ) goto L_004daf2b;
L_004daf1f:; BB(0x004daf1f);
    /* 004daf1f: mov al, 0x35 */ r_eax = (r_eax & 0xffffff00u) | ((0x35u) & 0xffu);
    /* 004daf21: jmp 0x4db060 */ goto L_004db060;
L_004daf2b:; BB(0x004daf2b);
    /* 004daf2b: mov ecx, dword ptr [0x791404] */ r_ecx = R32((u32)(0x791404u));
    /* 004daf31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daf32: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daf35: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daf3au); f_004a1fb0();
    /* 004daf3a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004daf3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daf3f: je 0x4daf4d */ if (fZ) goto L_004daf4d;
L_004daf41:; BB(0x004daf41);
    /* 004daf41: mov al, 0x36 */ r_eax = (r_eax & 0xffffff00u) | ((0x36u) & 0xffu);
    /* 004daf43: jmp 0x4db060 */ goto L_004db060;
L_004daf4d:; BB(0x004daf4d);
    /* 004daf4d: mov eax, dword ptr [0x7913f8] */ r_eax = R32((u32)(0x7913f8u));
    /* 004daf52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daf53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daf56: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daf5bu); f_004a1fb0();
    /* 004daf5b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004daf5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daf60: je 0x4daf6e */ if (fZ) goto L_004daf6e;
L_004daf62:; BB(0x004daf62);
    /* 004daf62: mov al, 0x37 */ r_eax = (r_eax & 0xffffff00u) | ((0x37u) & 0xffu);
    /* 004daf64: jmp 0x4db060 */ goto L_004db060;
L_004daf6e:; BB(0x004daf6e);
    /* 004daf6e: mov edx, dword ptr [0x791410] */ r_edx = R32((u32)(0x791410u));
    /* 004daf74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004daf75: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daf78: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daf7du); f_004a1fb0();
    /* 004daf7d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004daf80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daf82: je 0x4daf90 */ if (fZ) goto L_004daf90;
L_004daf84:; BB(0x004daf84);
    /* 004daf84: mov al, 0x38 */ r_eax = (r_eax & 0xffffff00u) | ((0x38u) & 0xffu);
    /* 004daf86: jmp 0x4db060 */ goto L_004db060;
L_004daf90:; BB(0x004daf90);
    /* 004daf90: mov ecx, dword ptr [0x7913f4] */ r_ecx = R32((u32)(0x7913f4u));
    /* 004daf96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daf97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daf9a: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daf9fu); f_004a1fb0();
    /* 004daf9f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004dafa2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dafa4: je 0x4dafb2 */ if (fZ) goto L_004dafb2;
L_004dafa6:; BB(0x004dafa6);
    /* 004dafa6: mov al, 0x39 */ r_eax = (r_eax & 0xffffff00u) | ((0x39u) & 0xffu);
    /* 004dafa8: jmp 0x4db060 */ goto L_004db060;
L_004dafb2:; BB(0x004dafb2);
    /* 004dafb2: mov eax, dword ptr [0x79138c] */ r_eax = R32((u32)(0x79138cu));
    /* 004dafb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dafb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004dafbb: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4dafc0u); f_004a1fb0();
    /* 004dafc0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004dafc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dafc5: je 0x4dafd3 */ if (fZ) goto L_004dafd3;
L_004dafc7:; BB(0x004dafc7);
    /* 004dafc7: mov al, 0x54 */ r_eax = (r_eax & 0xffffff00u) | ((0x54u) & 0xffu);
    /* 004dafc9: jmp 0x4db060 */ goto L_004db060;
L_004dafd3:; BB(0x004dafd3);
    /* 004dafd3: mov edx, dword ptr [0x791400] */ r_edx = R32((u32)(0x791400u));
    /* 004dafd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dafda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004dafdd: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4dafe2u); f_004a1fb0();
    /* 004dafe2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004dafe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dafe7: je 0x4dafef */ if (fZ) goto L_004dafef;
L_004dafe9:; BB(0x004dafe9);
    /* 004dafe9: mov al, 0x4a */ r_eax = (r_eax & 0xffffff00u) | ((0x4au) & 0xffu);
    /* 004dafeb: jmp 0x4db060 */ goto L_004db060;
L_004dafef:; BB(0x004dafef);
    /* 004dafef: mov ecx, dword ptr [0x7913bc] */ r_ecx = R32((u32)(0x7913bcu));
    /* 004daff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004daff6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004daff9: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4daffeu); f_004a1fb0();
    /* 004daffe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db001: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db003: je 0x4db00b */ if (fZ) goto L_004db00b;
L_004db005:; BB(0x004db005);
    /* 004db005: mov al, 0x51 */ r_eax = (r_eax & 0xffffff00u) | ((0x51u) & 0xffu);
    /* 004db007: jmp 0x4db060 */ goto L_004db060;
L_004db00b:; BB(0x004db00b);
    /* 004db00b: mov eax, dword ptr [0x7913e0] */ r_eax = R32((u32)(0x7913e0u));
    /* 004db010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db011: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004db014: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4db019u); f_004a1fb0();
    /* 004db019: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004db01c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db01e: je 0x4db026 */ if (fZ) goto L_004db026;
L_004db020:; BB(0x004db020);
    /* 004db020: mov al, 0x4b */ r_eax = (r_eax & 0xffffff00u) | ((0x4bu) & 0xffu);
    /* 004db022: jmp 0x4db060 */ goto L_004db060;
L_004db026:; BB(0x004db026);
    /* 004db026: mov edx, dword ptr [0x7913c8] */ r_edx = R32((u32)(0x7913c8u));
    /* 004db02c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db02d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004db030: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4db035u); f_004a1fb0();
    /* 004db035: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004db038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db03a: je 0x4db042 */ if (fZ) goto L_004db042;
L_004db03c:; BB(0x004db03c);
    /* 004db03c: mov al, 0x41 */ r_eax = (r_eax & 0xffffff00u) | ((0x41u) & 0xffu);
    /* 004db03e: jmp 0x4db060 */ goto L_004db060;
L_004db042:; BB(0x004db042);
    /* 004db042: mov ecx, dword ptr [0x7913b4] */ r_ecx = R32((u32)(0x7913b4u));
    /* 004db048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db049: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004db04c: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4db051u); f_004a1fb0();
    /* 004db051: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db054: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db056: je 0x4db05e */ if (fZ) goto L_004db05e;
L_004db058:; BB(0x004db058);
    /* 004db058: mov al, 0x41 */ r_eax = (r_eax & 0xffffff00u) | ((0x41u) & 0xffu);
    /* 004db05a: jmp 0x4db060 */ goto L_004db060;
L_004db05e:; BB(0x004db05e);
    /* 004db05e: mov al, 0x3f */ r_eax = (r_eax & 0xffffff00u) | ((0x3fu) & 0xffu);
L_004db060:; BB(0x004db060);
    /* 004db060: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004db061: ret  */ FN_RET(0x004dae80); r_esp += 4; return;
}

