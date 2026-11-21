#include "protos.h"

void f_00556890(void) /* VideoPokerRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556890);
    /* 00556890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556891: mov ebp, esp */ r_ebp = r_esp;
    /* 00556893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055689a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x55689fu); f_005e9e20();
    /* 0055689f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005568a2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 005568a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005568ab: mov dword ptr [ecx], 0x6c8c44 */ W32((u32)(r_ecx), 0x6c8c44u);
    /* 005568b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005568b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005568b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005568b7: ret  */ FN_RET(0x00556890); r_esp += 4; return;
}

void f_005568c0(void) /* VideoPokerRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005568c0);
    /* 005568c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005568c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005568c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005568c5: push 0x6a570b */ { u32 v = 0x6a570bu; r_esp -= 4; W32(r_esp, v); }
    /* 005568ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005568d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005568d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005568d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005568d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005568db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005568dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005568df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005568e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005568e8: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005568ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5568f2u); f_00686d82();
    /* 005568f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005568f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005568f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005568ff: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556903: je 0x556912 */ if (fZ) goto L_00556912;
L_00556905:; BB(0x00556905);
    /* 00556905: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556908: call 0x555ab0 */ r_esp -= 4; W32(r_esp, 0x55690du); f_00555ab0();
    /* 0055690d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00556910: jmp 0x556919 */ goto L_00556919;
L_00556912:; BB(0x00556912);
    /* 00556912: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00556919:; BB(0x00556919);
    /* 00556919: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055691c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0055691f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556926: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00556929: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055692c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556933: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556934: mov esp, ebp */ r_esp = r_ebp;
    /* 00556936: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556937: ret  */ FN_RET(0x005568c0); r_esp += 4; return;
}

void f_00556940(void) /* VideoPokerRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556940);
    /* 00556940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556941: mov ebp, esp */ r_ebp = r_esp;
    /* 00556943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556947: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055694b: jne 0x556951 */ if (!fZ) goto L_00556951;
L_0055694d:; BB(0x0055694d);
    /* 0055694d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055694f: jmp 0x55696d */ goto L_0055696d;
L_00556951:; BB(0x00556951);
    /* 00556951: push 0x6c8514 */ { u32 v = 0x6c8514u; r_esp -= 4; W32(r_esp, v); }
    /* 00556956: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55695bu); f_00630f40();
    /* 0055695b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055695e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055695f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556963: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x556968u); f_00686d8e();
    /* 00556968: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055696b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0055696d:; BB(0x0055696d);
    /* 0055696d: mov esp, ebp */ r_esp = r_ebp;
    /* 0055696f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556970: ret 4 */ FN_RET(0x00556940); r_esp += 8; return;
}

void f_005569a0(void) /* VideoPokerRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005569a0);
    /* 005569a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005569a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005569a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005569a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005569a7: mov eax, 0x30f340 */ r_eax = 0x30f340u;
    /* 005569ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005569ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005569af: ret  */ FN_RET(0x005569a0); r_esp += 4; return;
}

void f_005569b0(void) /* VideoPokerRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005569b0);
    /* 005569b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005569b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005569b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005569b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005569b7: mov eax, 0x6b88a4 */ r_eax = 0x6b88a4u;
    /* 005569bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005569be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005569bf: ret  */ FN_RET(0x005569b0); r_esp += 4; return;
}

void f_005569d0(void) /* VideoPokerRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005569d0);
    /* 005569d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005569d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005569d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005569d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005569d7: mov eax, 0x740a50 */ r_eax = 0x740a50u;
    /* 005569dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005569de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005569df: ret  */ FN_RET(0x005569d0); r_esp += 4; return;
}

void f_005569e0(void) /* VideoPokerRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005569e0);
    /* 005569e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005569e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005569e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005569e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005569e7: mov eax, 0x740a5c */ r_eax = 0x740a5cu;
    /* 005569ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005569ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005569ef: ret  */ FN_RET(0x005569e0); r_esp += 4; return;
}

void f_00556a10(void) /* VideoPokerRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556a10);
    /* 00556a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00556a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556a17: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556a1b: jne 0x556a21 */ if (!fZ) goto L_00556a21;
L_00556a1d:; BB(0x00556a1d);
    /* 00556a1d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00556a1f: jmp 0x556a68 */ goto L_00556a68;
L_00556a21:; BB(0x00556a21);
    /* 00556a21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556a24: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00556a2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556a2d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00556a34: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00556a37: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 00556a3e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556a41: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00556a48: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556a4b: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 00556a52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00556a55: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00556a5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556a5f: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00556a66: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00556a68:; BB(0x00556a68);
    /* 00556a68: mov esp, ebp */ r_esp = r_ebp;
    /* 00556a6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556a6b: ret 8 */ FN_RET(0x00556a10); r_esp += 12; return;
}

void f_00556a70(void) /* VideoPokerRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556a70);
    /* 00556a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00556a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556a77: mov eax, 8 */ r_eax = 0x8u;
    /* 00556a7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00556a7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556a7f: ret  */ FN_RET(0x00556a70); r_esp += 4; return;
}

void f_00556aa0(void) /* VideoPokerRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556aa0);
    /* 00556aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556aa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556aa6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00556aa9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556aad: jne 0x556ab3 */ if (!fZ) goto L_00556ab3;
L_00556aaf:; BB(0x00556aaf);
    /* 00556aaf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00556ab1: jmp 0x556ace */ goto L_00556ace;
L_00556ab3:; BB(0x00556ab3);
    /* 00556ab3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556ab6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00556ab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556abc: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00556ac2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556ac5: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00556acc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00556ace:; BB(0x00556ace);
    /* 00556ace: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ad0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ad1: ret 4 */ FN_RET(0x00556aa0); r_esp += 8; return;
}

void f_00556af0(void) /* VideoPokerRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556af0);
    /* 00556af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556af7: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00556afc: mov esp, ebp */ r_esp = r_ebp;
    /* 00556afe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556aff: ret  */ FN_RET(0x00556af0); r_esp += 4; return;
}

void f_00556b00(void) /* VideoPokerRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556b00);
    /* 00556b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00556b03: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556b06: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00556b09: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556b0e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x556b13u); f_0063aae0();
    /* 00556b13: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00556b16: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00556b1c: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x556b21u); f_005f3bf0();
    /* 00556b21: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b24: je 0x556b3f */ if (fZ) goto L_00556b3f;
L_00556b26:; BB(0x00556b26);
    /* 00556b26: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00556b2c: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x556b31u); f_005f3bf0();
    /* 00556b31: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b34: je 0x556b3f */ if (fZ) goto L_00556b3f;
L_00556b36:; BB(0x00556b36);
    /* 00556b36: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00556b3d: jmp 0x556b46 */ goto L_00556b46;
L_00556b3f:; BB(0x00556b3f);
    /* 00556b3f: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00556b46:; BB(0x00556b46);
    /* 00556b46: mov al, byte ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 00556b49: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00556b4c: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00556b50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b52: jne 0x556b96 */ if (!fZ) goto L_00556b96;
L_00556b54:; BB(0x00556b54);
    /* 00556b54: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00556b57: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00556b59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556b5c: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00556b5e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00556b61: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00556b63: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00556b66: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00556b69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556b6c: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556b6f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00556b72: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00556b75: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00556b78: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00556b7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556b7d: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00556b7f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00556b82: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00556b84: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00556b87: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00556b8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556b8d: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00556b90: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00556b93: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_00556b96:; BB(0x00556b96);
    /* 00556b96: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556b98: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00556b9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00556b9f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556ba5: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00556bab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x556badu); call_ind(t); }
    /* 00556bad: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00556bb0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556bb2: je 0x556c7c */ if (fZ) goto L_00556c7c;
L_00556bb8:; BB(0x00556bb8);
    /* 00556bb8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00556bbe: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x556bc3u); f_005f3bf0();
    /* 00556bc3: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556bc6: jne 0x556c7c */ if (!fZ) goto L_00556c7c;
L_00556bcc:; BB(0x00556bcc);
    /* 00556bcc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00556bcf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00556bd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556bd4: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00556bd6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00556bd9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00556bdb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00556bde: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00556be1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556be4: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556be7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00556bea: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00556bed: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00556bf0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00556bf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556bf5: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00556bf7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00556bfa: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00556bfc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00556bff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00556c02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556c05: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00556c08: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00556c0b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00556c0e: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00556c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556c12: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00556c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556c16: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00556c19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556c1a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556c20: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x556c25u); f_005e0c40();
    /* 00556c25: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556c28: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00556c2b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00556c2e: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00556c30: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00556c33: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00556c35: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00556c38: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00556c3b: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556c3e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00556c41: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00556c44: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00556c47: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00556c49: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556c4c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00556c4f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00556c51: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00556c54: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00556c57: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556c5a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00556c5d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00556c60: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00556c63: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00556c65: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556c68: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00556c6b: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00556c6d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00556c70: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00556c73: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556c76: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00556c79: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_00556c7c:; BB(0x00556c7c);
    /* 00556c7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00556c7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556c7f: ret 0x10 */ FN_RET(0x00556b00); r_esp += 20; return;
}

void f_00556c90(void) /* VideoPokerRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556c90);
    /* 00556c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00556c93: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556c96: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00556c9b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556c9d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00556ca0: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00556ca3: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00556ca5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00556ca8: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x556cadu); f_0063aae0();
    /* 00556cad: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00556cb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cb4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x556cb9u); f_0064c8a0();
    /* 00556cb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556cbc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00556cbf: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00556cc2: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00556cc5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556cc8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00556ccb: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00556cce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x556cd7u); f_0064c8a0();
    /* 00556cd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556cda: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00556cdd: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00556ce0: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00556ce3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00556ce6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00556ce9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00556cec: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00556cef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556cf0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00556cf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556cf4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556cfa: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x556cffu); f_005e0690();
    /* 00556cff: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00556d05: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x556d0au); f_005f3bf0();
    /* 00556d0a: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556d0d: je 0x556d1f */ if (fZ) goto L_00556d1f;
L_00556d0f:; BB(0x00556d0f);
    /* 00556d0f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00556d15: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x556d1au); f_005f3bf0();
    /* 00556d1a: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556d1d: jne 0x556d36 */ if (!fZ) goto L_00556d36;
L_00556d1f:; BB(0x00556d1f);
    /* 00556d1f: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00556d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d23: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00556d26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d27: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00556d2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d2b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556d31: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x556d36u); f_005e0c40();
L_00556d36:; BB(0x00556d36);
    /* 00556d36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d3c: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00556d3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d40: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00556d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d44: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d48: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00556d4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d4c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00556d4f: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x556d54u); f_0064c5c0();
    /* 00556d54: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00556d57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d58: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00556d5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d5b: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x556d60u); f_0064c8d0();
    /* 00556d60: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d63: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00556d66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d67: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d6c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x556d71u); f_00630f40();
    /* 00556d71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556d7a: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x556d7fu); f_00654390();
    /* 00556d7f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00556d81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556d84: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00556d86: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x556d8bu); f_00686d72();
    /* 00556d8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00556d8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556d8e: ret 8 */ FN_RET(0x00556c90); r_esp += 12; return;
}

void f_00556da0(void) /* VideoPokerRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556da0);
    /* 00556da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556da7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556db1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x556db6u); f_005fb5a0();
    /* 00556db6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00556db8: mov esp, ebp */ r_esp = r_ebp;
    /* 00556dba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556dbb: ret 4 */ FN_RET(0x00556da0); r_esp += 8; return;
}

void f_00556dc0(void) /* VideoPokerRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556dc0);
    /* 00556dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556dc7: cmp dword ptr [ebp + 8], 0x30f35b */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30f35bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556dce: jne 0x556de1 */ if (!fZ) goto L_00556de1;
L_00556dd0:; BB(0x00556dd0);
    /* 00556dd0: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dd2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00556dd8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x556dddu); f_00653bd0();
    /* 00556ddd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00556ddf: jmp 0x556de3 */ goto L_00556de3;
L_00556de1:; BB(0x00556de1);
    /* 00556de1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00556de3:; BB(0x00556de3);
    /* 00556de3: mov esp, ebp */ r_esp = r_ebp;
    /* 00556de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556de6: ret 4 */ FN_RET(0x00556dc0); r_esp += 8; return;
}

void f_00556df0(void) /* VideoPokerRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556df0);
    /* 00556df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556df7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00556df9: mov esp, ebp */ r_esp = r_ebp;
    /* 00556dfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556dfc: ret 4 */ FN_RET(0x00556df0); r_esp += 8; return;
}

void f_00556e00(void) /* VideoPokerRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556e00);
    /* 00556e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00556e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556e07: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00556e09: mov esp, ebp */ r_esp = r_ebp;
    /* 00556e0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556e0c: ret 4 */ FN_RET(0x00556e00); r_esp += 8; return;
}

void f_00556e10(void) /* VideoPokerRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556e10);
    /* 00556e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00556e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556e17: mov eax, 0x740a60 */ r_eax = 0x740a60u;
    /* 00556e1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00556e1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556e1f: ret  */ FN_RET(0x00556e10); r_esp += 4; return;
}

void f_00556e20(void) /* VideoPokerRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556e20);
    /* 00556e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00556e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556e25: push 0x6a5734 */ { u32 v = 0x6a5734u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00556e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556e32: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00556e37: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556e39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e3a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00556e3d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00556e43: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00556e46: mov eax, dword ptr [0x79342c] */ r_eax = R32((u32)(0x79342cu));
    /* 00556e4b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00556e4e: jne 0x556eb9 */ if (!fZ) goto L_00556eb9;
L_00556e50:; BB(0x00556e50);
    /* 00556e50: mov ecx, dword ptr [0x79342c] */ r_ecx = R32((u32)(0x79342cu));
    /* 00556e56: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00556e59: mov dword ptr [0x79342c], ecx */ W32((u32)(0x79342cu), r_ecx);
    /* 00556e5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00556e66: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00556e6c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00556e6e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556e74: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 00556e7a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x556e7cu); call_ind(t); }
    /* 00556e7c: mov dword ptr [0x740a84], eax */ W32((u32)(0x740a84u), r_eax);
    /* 00556e81: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00556e86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00556e88: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556e8e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00556e94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x556e96u); call_ind(t); }
    /* 00556e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e97: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556e9d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00556e9f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556ea5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 00556eab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x556eadu); call_ind(t); }
    /* 00556ead: mov dword ptr [0x740a88], eax */ W32((u32)(0x740a88u), r_eax);
    /* 00556eb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00556eb9:; BB(0x00556eb9);
    /* 00556eb9: cmp dword ptr [ebp + 8], 0x30f341 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30f341u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556ec0: jne 0x556ecb */ if (!fZ) goto L_00556ecb;
L_00556ec2:; BB(0x00556ec2);
    /* 00556ec2: mov eax, 0x740a80 */ r_eax = 0x740a80u;
    /* 00556ec7: jmp 0x556ecd */ goto L_00556ecd;
L_00556ecb:; BB(0x00556ecb);
    /* 00556ecb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00556ecd:; BB(0x00556ecd);
    /* 00556ecd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556ed0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ed7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556ed8: mov esp, ebp */ r_esp = r_ebp;
    /* 00556eda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556edb: ret 4 */ FN_RET(0x00556e20); r_esp += 8; return;
}

void f_00556ee0(void) /* VideoPokerRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556ee0);
    /* 00556ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556ee7: mov eax, 0x73f0c8 */ r_eax = 0x73f0c8u;
    /* 00556eec: mov esp, ebp */ r_esp = r_ebp;
    /* 00556eee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556eef: ret  */ FN_RET(0x00556ee0); r_esp += 4; return;
}

void f_00556ef0(void) /* VideoPokerRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556ef0);
    /* 00556ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556ef7: mov eax, 0x740878 */ r_eax = 0x740878u;
    /* 00556efc: mov esp, ebp */ r_esp = r_ebp;
    /* 00556efe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556eff: ret  */ FN_RET(0x00556ef0); r_esp += 4; return;
}

void f_00556f00(void) /* VideoPokerRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556f00);
    /* 00556f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00556f03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556f06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00556f09: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00556f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556f0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556f10: call 0x556fa0 */ r_esp -= 4; W32(r_esp, 0x556f15u); f_00556fa0();
    /* 00556f15: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00556f18: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556f1c: jne 0x556f22 */ if (!fZ) goto L_00556f22;
L_00556f1e:; BB(0x00556f1e);
    /* 00556f1e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00556f20: jmp 0x556f8d */ goto L_00556f8d;
L_00556f22:; BB(0x00556f22);
    /* 00556f22: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556f28: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x556f2du); f_005de170();
    /* 00556f2d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556f33: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x556f38u); f_005e2f90();
    /* 00556f38: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556f3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556f41: mov dword ptr [ecx + 0x4f14], edx */ W32((u32)(r_ecx+0x4f14u), r_edx);
    /* 00556f47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556f4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556f4e: call 0x557040 */ r_esp -= 4; W32(r_esp, 0x556f53u); f_00557040();
    /* 00556f53: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556f59: mov dword ptr [ecx + 0x4f10], eax */ W32((u32)(r_ecx+0x4f10u), r_eax);
    /* 00556f5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556f61: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00556f63: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00556f69: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00556f6b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556f71: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 00556f77: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x556f79u); call_ind(t); }
    /* 00556f79: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00556f7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556f7e: jne 0x556f8b */ if (!fZ) goto L_00556f8b;
L_00556f80:; BB(0x00556f80);
    /* 00556f80: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00556f86: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x556f8bu); f_005e3130();
L_00556f8b:; BB(0x00556f8b);
    /* 00556f8b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00556f8d:; BB(0x00556f8d);
    /* 00556f8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00556f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556f90: ret 8 */ FN_RET(0x00556f00); r_esp += 12; return;
}

