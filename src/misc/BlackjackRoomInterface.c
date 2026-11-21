#include "protos.h"

void f_004176d0(void) /* BlackjackRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004176d0);
    /* 004176d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004176d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004176d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004176d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004176d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004176da: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4176dfu); f_005e9e20();
    /* 004176df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004176e2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 004176e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004176eb: mov dword ptr [ecx], 0x6b48b4 */ W32((u32)(r_ecx), 0x6b48b4u);
    /* 004176f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004176f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004176f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004176f7: ret  */ FN_RET(0x004176d0); r_esp += 4; return;
}

void f_00417700(void) /* BlackjackRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417700);
    /* 00417700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417701: mov ebp, esp */ r_ebp = r_esp;
    /* 00417703: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417705: push 0x69de4b */ { u32 v = 0x69de4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041770a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417711: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417714: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00417719: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041771b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041771c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041771f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00417725: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00417728: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0041772d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x417732u); f_00686d82();
    /* 00417732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00417738: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041773f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417743: je 0x417752 */ if (fZ) goto L_00417752;
L_00417745:; BB(0x00417745);
    /* 00417745: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417748: call 0x414ce0 */ r_esp -= 4; W32(r_esp, 0x41774du); f_00414ce0();
    /* 0041774d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00417750: jmp 0x417759 */ goto L_00417759;
L_00417752:; BB(0x00417752);
    /* 00417752: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00417759:; BB(0x00417759);
    /* 00417759: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041775c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041775f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417766: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00417769: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041776c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417774: mov esp, ebp */ r_esp = r_ebp;
    /* 00417776: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417777: ret  */ FN_RET(0x00417700); r_esp += 4; return;
}

void f_00417780(void) /* BlackjackRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417780);
    /* 00417780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417781: mov ebp, esp */ r_ebp = r_esp;
    /* 00417783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417787: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041778b: jne 0x417791 */ if (!fZ) goto L_00417791;
L_0041778d:; BB(0x0041778d);
    /* 0041778d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041778f: jmp 0x4177ad */ goto L_004177ad;
L_00417791:; BB(0x00417791);
    /* 00417791: push 0x6b3878 */ { u32 v = 0x6b3878u; r_esp -= 4; W32(r_esp, v); }
    /* 00417796: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41779bu); f_00630f40();
    /* 0041779b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041779e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041779f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004177a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004177a3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4177a8u); f_00686d8e();
    /* 004177a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004177ab: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004177ad:; BB(0x004177ad);
    /* 004177ad: mov esp, ebp */ r_esp = r_ebp;
    /* 004177af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004177b0: ret 4 */ FN_RET(0x00417780); r_esp += 8; return;
}

void f_004177e0(void) /* BlackjackRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004177e0);
    /* 004177e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004177e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004177e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004177e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004177e7: mov eax, 0x30d7e8 */ r_eax = 0x30d7e8u;
    /* 004177ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004177ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004177ef: ret  */ FN_RET(0x004177e0); r_esp += 4; return;
}

void f_004177f0(void) /* BlackjackRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004177f0);
    /* 004177f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004177f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004177f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004177f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004177f7: mov eax, 0x6b4a0c */ r_eax = 0x6b4a0cu;
    /* 004177fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004177fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004177ff: ret  */ FN_RET(0x004177f0); r_esp += 4; return;
}

void f_00417810(void) /* BlackjackRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417810);
    /* 00417810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417811: mov ebp, esp */ r_ebp = r_esp;
    /* 00417813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417817: mov eax, 0x70cbb8 */ r_eax = 0x70cbb8u;
    /* 0041781c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041781e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041781f: ret  */ FN_RET(0x00417810); r_esp += 4; return;
}

void f_00417820(void) /* BlackjackRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417820);
    /* 00417820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417821: mov ebp, esp */ r_ebp = r_esp;
    /* 00417823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417827: mov eax, 0x70cbc0 */ r_eax = 0x70cbc0u;
    /* 0041782c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041782e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041782f: ret  */ FN_RET(0x00417820); r_esp += 4; return;
}

void f_00417850(void) /* BlackjackRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417850);
    /* 00417850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417851: mov ebp, esp */ r_ebp = r_esp;
    /* 00417853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417857: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041785b: jne 0x417861 */ if (!fZ) goto L_00417861;
L_0041785d:; BB(0x0041785d);
    /* 0041785d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041785f: jmp 0x4178bf */ goto L_004178bf;
L_00417861:; BB(0x00417861);
    /* 00417861: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417864: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 0041786a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041786d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00417874: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00417877: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 0041787e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417881: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00417888: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 0041788f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417891: je 0x41789f */ if (fZ) goto L_0041789f;
L_00417893:; BB(0x00417893);
    /* 00417893: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00417896: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
    /* 0041789d: jmp 0x4178a9 */ goto L_004178a9;
L_0041789f:; BB(0x0041789f);
    /* 0041789f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004178a2: mov dword ptr [eax + 0x10], 4 */ W32((u32)(r_eax+0x10u), 0x4u);
L_004178a9:; BB(0x004178a9);
    /* 004178a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004178ac: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 004178b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004178b6: mov dword ptr [edx + 0x18], 3 */ W32((u32)(r_edx+0x18u), 0x3u);
    /* 004178bd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004178bf:; BB(0x004178bf);
    /* 004178bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004178c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004178c2: ret 8 */ FN_RET(0x00417850); r_esp += 12; return;
}

void f_004178d0(void) /* BlackjackRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004178d0);
    /* 004178d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004178d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004178d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004178d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004178d7: mov eax, 0x38 */ r_eax = 0x38u;
    /* 004178dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004178de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004178df: ret  */ FN_RET(0x004178d0); r_esp += 4; return;
}

void f_004178e0(void) /* BlackjackRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004178e0);
    /* 004178e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004178e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004178e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004178e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004178e9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004178ed: jne 0x4178f3 */ if (!fZ) goto L_004178f3;
L_004178ef:; BB(0x004178ef);
    /* 004178ef: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004178f1: jmp 0x41795c */ goto L_0041795c;
L_004178f3:; BB(0x004178f3);
    /* 004178f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004178f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004178f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004178fc: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 004178ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417902: mov byte ptr [edx + 1], 2 */ W8((u32)(r_edx+0x1u), 0x2u);
    /* 00417906: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417909: mov byte ptr [eax + 2], 0x50 */ W8((u32)(r_eax+0x2u), 0x50u);
    /* 0041790d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417910: mov byte ptr [ecx + 3], 1 */ W8((u32)(r_ecx+0x3u), 0x1u);
    /* 00417914: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417917: mov byte ptr [edx + 4], 0 */ W8((u32)(r_edx+0x4u), 0x0u);
    /* 0041791b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041791e: mov byte ptr [eax + 5], 0 */ W8((u32)(r_eax+0x5u), 0x0u);
    /* 00417922: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417925: mov byte ptr [ecx + 6], 1 */ W8((u32)(r_ecx+0x6u), 0x1u);
    /* 00417929: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041792c: mov byte ptr [edx + 7], 1 */ W8((u32)(r_edx+0x7u), 0x1u);
    /* 00417930: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417933: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 00417937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041793a: mov byte ptr [ecx + 9], 4 */ W8((u32)(r_ecx+0x9u), 0x4u);
    /* 0041793e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417941: mov byte ptr [edx + 0xa], 1 */ W8((u32)(r_edx+0xau), 0x1u);
    /* 00417945: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417948: mov byte ptr [eax + 0xb], 1 */ W8((u32)(r_eax+0xbu), 0x1u);
    /* 0041794c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041794f: mov byte ptr [ecx + 0xc], 0 */ W8((u32)(r_ecx+0xcu), 0x0u);
    /* 00417953: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417956: mov byte ptr [edx + 0xd], 1 */ W8((u32)(r_edx+0xdu), 0x1u);
    /* 0041795a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0041795c:; BB(0x0041795c);
    /* 0041795c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041795e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041795f: ret 4 */ FN_RET(0x004178e0); r_esp += 8; return;
}

void f_00417970(void) /* BlackjackRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417970);
    /* 00417970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417971: mov ebp, esp */ r_ebp = r_esp;
    /* 00417973: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417976: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00417979: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041797b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417981: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x417986u); f_005de600();
    /* 00417986: mov ecx, eax */ r_ecx = r_eax;
    /* 00417988: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x41798du); f_0063aae0();
    /* 0041798d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00417990: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417993: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00417996: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041799a: je 0x4179a2 */ if (fZ) goto L_004179a2;
L_0041799c:; BB(0x0041799c);
    /* 0041799c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004179a0: jne 0x4179a9 */ if (!fZ) goto L_004179a9;
L_004179a2:; BB(0x004179a2);
    /* 004179a2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004179a4: jmp 0x417a51 */ goto L_00417a51;
L_004179a9:; BB(0x004179a9);
    /* 004179a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004179af: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 004179b1: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 004179b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004179b9: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 004179bc: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 004179bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179c2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004179c5: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 004179c8: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 004179cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179ce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004179d1: mov al, byte ptr [edx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3u))) & 0xffu);
    /* 004179d4: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 004179d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004179dd: mov al, byte ptr [edx + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4u))) & 0xffu);
    /* 004179e0: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 004179e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004179e9: mov al, byte ptr [edx + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x5u))) & 0xffu);
    /* 004179ec: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 004179ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004179f5: mov al, byte ptr [edx + 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x6u))) & 0xffu);
    /* 004179f8: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 004179fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004179fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a01: mov al, byte ptr [edx + 7] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x7u))) & 0xffu);
    /* 00417a04: mov byte ptr [ecx + 7], al */ W8((u32)(r_ecx+0x7u), (u8)r_eax);
    /* 00417a07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a0a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a0d: mov al, byte ptr [edx + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x8u))) & 0xffu);
    /* 00417a10: mov byte ptr [ecx + 8], al */ W8((u32)(r_ecx+0x8u), (u8)r_eax);
    /* 00417a13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a19: mov al, byte ptr [edx + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x9u))) & 0xffu);
    /* 00417a1c: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 00417a1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a22: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a25: mov al, byte ptr [edx + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xau))) & 0xffu);
    /* 00417a28: mov byte ptr [ecx + 0xa], al */ W8((u32)(r_ecx+0xau), (u8)r_eax);
    /* 00417a2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a2e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a31: mov al, byte ptr [edx + 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xbu))) & 0xffu);
    /* 00417a34: mov byte ptr [ecx + 0xb], al */ W8((u32)(r_ecx+0xbu), (u8)r_eax);
    /* 00417a37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a3a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a3d: mov al, byte ptr [edx + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xcu))) & 0xffu);
    /* 00417a40: mov byte ptr [ecx + 0xc], al */ W8((u32)(r_ecx+0xcu), (u8)r_eax);
    /* 00417a43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417a49: mov al, byte ptr [edx + 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xdu))) & 0xffu);
    /* 00417a4c: mov byte ptr [ecx + 0xd], al */ W8((u32)(r_ecx+0xdu), (u8)r_eax);
    /* 00417a4f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00417a51:; BB(0x00417a51);
    /* 00417a51: mov esp, ebp */ r_esp = r_ebp;
    /* 00417a53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417a54: ret 4 */ FN_RET(0x00417970); r_esp += 8; return;
}

void f_00417a60(void) /* BlackjackRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417a60);
    /* 00417a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00417a63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417a66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00417a69: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417a6d: jne 0x417a73 */ if (!fZ) goto L_00417a73;
L_00417a6f:; BB(0x00417a6f);
    /* 00417a6f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00417a71: jmp 0x417adf */ goto L_00417adf;
L_00417a73:; BB(0x00417a73);
    /* 00417a73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417a76: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00417a79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a7c: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00417a83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a86: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00417a8d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a90: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00417a97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417a9a: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00417aa1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417aa4: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00417aab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417aae: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00417ab5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417ab8: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 00417abf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417ac2: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 00417ac9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417acc: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00417ad3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417ad6: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 00417add: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00417adf:; BB(0x00417adf);
    /* 00417adf: mov esp, ebp */ r_esp = r_ebp;
    /* 00417ae1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417ae2: ret 4 */ FN_RET(0x00417a60); r_esp += 8; return;
}

void f_00417b10(void) /* BlackjackRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417b10);
    /* 00417b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00417b13: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417b16: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00417b19: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417b1e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x417b23u); f_0063aae0();
    /* 00417b23: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00417b26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b29: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00417b2c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b2f: add ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417b32: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00417b35: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417b37: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00417b3a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00417b3c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00417b3f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00417b42: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b45: add ecx, dword ptr [edx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417b48: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00417b4b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00417b4e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00417b51: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417b53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b56: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417b59: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00417b5c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00417b5e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00417b61: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00417b64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b67: add eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00417b6a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00417b6d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00417b70: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00417b73: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00417b75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b78: add ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417b7b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00417b7e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00417b80: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00417b83: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00417b86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417b89: add edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417b8c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00417b8f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00417b92: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417b94: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00417b9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417b9c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417ba2: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00417ba8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x417baau); call_ind(t); }
    /* 00417baa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00417bad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417baf: je 0x417c2f */ if (fZ) goto L_00417c2f;
L_00417bb1:; BB(0x00417bb1);
    /* 00417bb1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00417bb7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x417bbcu); f_005f3bf0();
    /* 00417bbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417bbf: jne 0x417c2f */ if (!fZ) goto L_00417c2f;
L_00417bc1:; BB(0x00417bc1);
    /* 00417bc1: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00417bc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417bc5: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00417bc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417bc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417bcd: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417bd3: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x417bd8u); f_005e0c40();
    /* 00417bd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417bdb: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417bde: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00417be1: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417be3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00417be6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00417be8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00417beb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00417bee: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417bf1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00417bf4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00417bf7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00417bfa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417bfc: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417bff: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00417c02: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00417c04: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00417c07: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00417c0a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417c0d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00417c10: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00417c13: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00417c16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417c18: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417c1b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00417c1e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00417c20: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00417c23: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00417c26: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417c29: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00417c2c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_00417c2f:; BB(0x00417c2f);
    /* 00417c2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00417c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417c32: ret 0x10 */ FN_RET(0x00417b10); r_esp += 20; return;
}

void f_00417c40(void) /* BlackjackRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417c40);
    /* 00417c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00417c43: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417c49: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00417c4e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00417c50: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00417c53: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00417c59: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c5b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00417c5e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x417c63u); f_0063aae0();
    /* 00417c63: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00417c66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c6a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x417c6fu); f_0064c8a0();
    /* 00417c6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417c72: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00417c75: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00417c78: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00417c7b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00417c7e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00417c81: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00417c84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c88: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x417c8du); f_0064c8a0();
    /* 00417c8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417c90: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00417c93: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00417c96: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00417c99: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00417c9c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00417c9f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00417ca2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00417ca5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417ca6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00417ca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417caa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417cb0: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x417cb5u); f_005e0690();
    /* 00417cb5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00417cbb: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x417cc0u); f_005f3bf0();
    /* 00417cc0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417cc3: jne 0x417cdc */ if (!fZ) goto L_00417cdc;
L_00417cc5:; BB(0x00417cc5);
    /* 00417cc5: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00417cc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417cc9: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00417ccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417ccd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00417cd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417cd1: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417cd7: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x417cdcu); f_005e0c40();
L_00417cdc:; BB(0x00417cdc);
    /* 00417cdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417cde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ce0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ce2: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00417ce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417ce6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00417ce9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417cea: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00417ced: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417cee: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00417cf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417cf2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00417cf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417cf6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00417cf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417cfa: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00417cfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417cfe: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417d01: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00417d04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d05: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00417d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d09: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 00417d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d0d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417d10: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417d13: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x417d18u); f_0064c5c0();
    /* 00417d18: mov ecx, eax */ r_ecx = r_eax;
    /* 00417d1a: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x417d1fu); f_0064c5c0();
    /* 00417d1f: mov ecx, eax */ r_ecx = r_eax;
    /* 00417d21: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x417d26u); f_0064c5c0();
    /* 00417d26: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00417d29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d2a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00417d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d2d: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x417d32u); f_0064c8d0();
    /* 00417d32: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417d35: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00417d38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d39: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d3e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417d43u); f_00630f40();
    /* 00417d43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417d46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417d4c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x417d51u); f_00654390();
    /* 00417d51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d57: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00417d5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d5b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00417d5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d5f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00417d62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d63: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 00417d66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d67: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417d6a: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417d6d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x417d72u); f_0064c5c0();
    /* 00417d72: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00417d75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417d78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d79: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x417d7eu); f_0064c8d0();
    /* 00417d7e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417d81: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00417d84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d85: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417d8a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417d8fu); f_00630f40();
    /* 00417d8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417d92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417d98: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x417d9du); f_00654390();
    /* 00417d9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417da1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417da3: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00417da6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417da7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00417daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00417dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417daf: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 00417db5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417db6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417db9: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00417dbc: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x417dc1u); f_0064c5c0();
    /* 00417dc1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00417dc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417dc5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00417dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417dc8: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x417dcdu); f_0064c8d0();
    /* 00417dcd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417dd0: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00417dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417dd4: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 00417dd9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417ddeu); f_00630f40();
    /* 00417dde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417de2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417de4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417de7: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x417decu); f_00654390();
    /* 00417dec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417dee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417df0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417df2: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00417df5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417df6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417df9: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00417dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417dfd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00417e00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e01: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x417e06u); f_0064c8d0();
    /* 00417e06: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417e09: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00417e0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e0d: push 0x6b4aa0 */ { u32 v = 0x6b4aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e12: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417e17u); f_00630f40();
    /* 00417e17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417e1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e1b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417e20: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x417e25u); f_00654390();
    /* 00417e25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e2b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00417e2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e2f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417e32: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00417e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e36: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00417e39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e3a: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x417e3fu); f_0064c8d0();
    /* 00417e3f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417e42: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00417e45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e46: push 0x6b4a74 */ { u32 v = 0x6b4a74u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e4b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417e50u); f_00630f40();
    /* 00417e50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417e53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e56: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417e59: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x417e5eu); f_00654390();
    /* 00417e5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e64: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00417e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e68: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417e6b: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00417e6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e6f: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00417e72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e73: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x417e78u); f_0064c8d0();
    /* 00417e78: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417e7b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00417e7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417e7f: push 0x6b4a48 */ { u32 v = 0x6b4a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e84: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417e89u); f_00630f40();
    /* 00417e89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e8d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417e92: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x417e97u); f_00654390();
    /* 00417e97: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00417e99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417e9c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00417e9e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x417ea3u); f_00686d72();
    /* 00417ea3: mov esp, ebp */ r_esp = r_ebp;
    /* 00417ea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417ea6: ret 8 */ FN_RET(0x00417c40); r_esp += 12; return;
}

void f_00417eb0(void) /* BlackjackRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417eb0);
    /* 00417eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00417eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417eb7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ebc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ebe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417ec1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x417ec6u); f_005fb5a0();
    /* 00417ec6: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ecb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ecd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417ed0: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x417ed5u); f_005fb5a0();
    /* 00417ed5: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417eda: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00417edc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417edf: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x417ee4u); f_005fb5a0();
    /* 00417ee4: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ee9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00417eeb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417eee: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x417ef3u); f_005fb5a0();
    /* 00417ef3: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417ef8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00417efa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417efd: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x417f02u); f_005fb5a0();
    /* 00417f02: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417f07: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00417f09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417f0c: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x417f11u); f_005fb5a0();
    /* 00417f11: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00417f13: mov esp, ebp */ r_esp = r_ebp;
    /* 00417f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417f16: ret 4 */ FN_RET(0x00417eb0); r_esp += 8; return;
}

void f_00417f20(void) /* BlackjackRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417f20);
    /* 00417f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00417f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417f27: cmp dword ptr [ebp + 8], 0x30d7e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30d7e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417f2e: jne 0x417f41 */ if (!fZ) goto L_00417f41;
L_00417f30:; BB(0x00417f30);
    /* 00417f30: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417f32: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00417f38: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x417f3du); f_00653bd0();
    /* 00417f3d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00417f3f: jmp 0x417f43 */ goto L_00417f43;
L_00417f41:; BB(0x00417f41);
    /* 00417f41: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00417f43:; BB(0x00417f43);
    /* 00417f43: mov esp, ebp */ r_esp = r_ebp;
    /* 00417f45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417f46: ret 4 */ FN_RET(0x00417f20); r_esp += 8; return;
}

void f_00417f50(void) /* BlackjackRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417f50);
    /* 00417f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00417f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417f57: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00417f59: mov esp, ebp */ r_esp = r_ebp;
    /* 00417f5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417f5c: ret 4 */ FN_RET(0x00417f50); r_esp += 8; return;
}

void f_00417f60(void) /* BlackjackRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417f60);
    /* 00417f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00417f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417f67: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00417f69: mov esp, ebp */ r_esp = r_ebp;
    /* 00417f6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417f6c: ret 4 */ FN_RET(0x00417f60); r_esp += 8; return;
}

void f_00417f70(void) /* BlackjackRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417f70);
    /* 00417f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00417f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417f77: mov eax, 0x70cbc4 */ r_eax = 0x70cbc4u;
    /* 00417f7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00417f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417f7f: ret  */ FN_RET(0x00417f70); r_esp += 4; return;
}

void f_00417f80(void) /* BlackjackRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417f80);
    /* 00417f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00417f83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417f85: push 0x69de74 */ { u32 v = 0x69de74u; r_esp -= 4; W32(r_esp, v); }
    /* 00417f8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417f91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f92: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00417f97: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00417f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417f9a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00417f9d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00417fa3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00417fa6: mov eax, dword ptr [0x790334] */ r_eax = R32((u32)(0x790334u));
    /* 00417fab: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00417fae: jne 0x418019 */ if (!fZ) goto L_00418019;
L_00417fb0:; BB(0x00417fb0);
    /* 00417fb0: mov ecx, dword ptr [0x790334] */ r_ecx = R32((u32)(0x790334u));
    /* 00417fb6: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00417fb9: mov dword ptr [0x790334], ecx */ W32((u32)(0x790334u), r_ecx);
    /* 00417fbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00417fc6: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00417fcc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417fce: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417fd4: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 00417fda: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x417fdcu); call_ind(t); }
    /* 00417fdc: mov dword ptr [0x70cbe8], eax */ W32((u32)(0x70cbe8u), r_eax);
    /* 00417fe1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00417fe6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417fe8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417fee: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00417ff4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417ff6u); call_ind(t); }
    /* 00417ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417ff7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00417ffd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417fff: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00418005: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0041800b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41800du); call_ind(t); }
    /* 0041800d: mov dword ptr [0x70cbec], eax */ W32((u32)(0x70cbecu), r_eax);
    /* 00418012: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00418019:; BB(0x00418019);
    /* 00418019: cmp dword ptr [ebp + 8], 0x30d7e9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30d7e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418020: jne 0x41802b */ if (!fZ) goto L_0041802b;
L_00418022:; BB(0x00418022);
    /* 00418022: mov eax, 0x70cbe4 */ r_eax = 0x70cbe4u;
    /* 00418027: jmp 0x41802d */ goto L_0041802d;
L_0041802b:; BB(0x0041802b);
    /* 0041802b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0041802d:; BB(0x0041802d);
    /* 0041802d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418030: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00418037: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00418038: mov esp, ebp */ r_esp = r_ebp;
    /* 0041803a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041803b: ret 4 */ FN_RET(0x00417f80); r_esp += 8; return;
}

void f_00418040(void) /* BlackjackRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418040);
    /* 00418040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418041: mov ebp, esp */ r_ebp = r_esp;
    /* 00418043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418047: mov eax, 0x70bd00 */ r_eax = 0x70bd00u;
    /* 0041804c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041804e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041804f: ret  */ FN_RET(0x00418040); r_esp += 4; return;
}

void f_00418050(void) /* BlackjackRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418050);
    /* 00418050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418051: mov ebp, esp */ r_ebp = r_esp;
    /* 00418053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418057: mov eax, 0x70c9a0 */ r_eax = 0x70c9a0u;
    /* 0041805c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041805e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041805f: ret  */ FN_RET(0x00418050); r_esp += 4; return;
}

void f_00418060(void) /* BlackjackRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418060);
    /* 00418060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418061: mov ebp, esp */ r_ebp = r_esp;
    /* 00418063: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418066: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418069: cmp dword ptr [ebp + 0xc], 0x30d7e8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x30d7e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418070: jne 0x418136 */ if (!fZ) goto L_00418136;
L_00418076:; BB(0x00418076);
    /* 00418076: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041807d: jne 0x418095 */ if (!fZ) goto L_00418095;
L_0041807f:; BB(0x0041807f);
    /* 0041807f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418081: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00418083: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00418089: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x41808eu); f_005dbd00();
    /* 0041808e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00418090: jmp 0x41815f */ goto L_0041815f;
L_00418095:; BB(0x00418095);
    /* 00418095: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0041809b: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x4180a0u); f_005e2f90();
    /* 004180a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004180a3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004180a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004180a9: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004180af: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004180b2: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004180b6: ja 0x418106 */ if ((!fC&&!fZ)) goto L_00418106;
L_004180b8:; BB(0x004180b8);
    /* 004180b8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004180bb: jmp dword ptr [edx*4 + 0x418168] */ { u32 t = R32((u32)(r_edx*4+0x418168u)); switch (t) { case 0x4180c2u: goto L_004180c2; case 0x4180d3u: goto L_004180d3; case 0x4180e5u: goto L_004180e5; case 0x4180f7u: goto L_004180f7; default: UNSUP(0x004180bb, "jump table entry is not a known target"); } }
L_004180c2:; BB(0x004180c2);
    /* 004180c2: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004180c7: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 004180d1: jmp 0x418106 */ goto L_00418106;
L_004180d3:; BB(0x004180d3);
    /* 004180d3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004180d9: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 004180e3: jmp 0x418106 */ goto L_00418106;
L_004180e5:; BB(0x004180e5);
    /* 004180e5: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004180eb: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 004180f5: jmp 0x418106 */ goto L_00418106;
L_004180f7:; BB(0x004180f7);
    /* 004180f7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004180fc: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_00418106:; BB(0x00418106);
    /* 00418106: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418108: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041810a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00418110: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00418112: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00418118: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0041811e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x418120u); call_ind(t); }
    /* 00418120: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00418123: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418125: jne 0x418132 */ if (!fZ) goto L_00418132;
L_00418127:; BB(0x00418127);
    /* 00418127: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0041812d: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x418132u); f_005e3130();
L_00418132:; BB(0x00418132);
    /* 00418132: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00418134: jmp 0x41815f */ goto L_0041815f;
L_00418136:; BB(0x00418136);
    /* 00418136: cmp dword ptr [ebp + 8], 0x30d7e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30d7e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041813d: jne 0x41815d */ if (!fZ) goto L_0041815d;
L_0041813f:; BB(0x0041813f);
    /* 0041813f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418141: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00418143: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00418149: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041814b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00418151: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 00418157: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x418159u); call_ind(t); }
    /* 00418159: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041815b: jmp 0x41815f */ goto L_0041815f;
L_0041815d:; BB(0x0041815d);
    /* 0041815d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0041815f:; BB(0x0041815f);
    /* 0041815f: mov esp, ebp */ r_esp = r_ebp;
    /* 00418161: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418162: ret 8 */ FN_RET(0x00418060); r_esp += 12; return;
}

void f_00418190(void) /* BlackjackRoomInterface::vfunc41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418190);
    /* 00418190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418191: mov ebp, esp */ r_ebp = r_esp;
    /* 00418193: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418196: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00418199: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004181a0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004181a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004181ae: jmp 0x4181b9 */ goto L_004181b9;
L_004181b0:; BB(0x004181b0);
    /* 004181b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004181b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004181b6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004181b9:; BB(0x004181b9);
    /* 004181b9: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004181bd: jge 0x41822d */ if ((fS==fO)) goto L_0041822d;
L_004181bf:; BB(0x004181bf);
    /* 004181bf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181c3: je 0x4181d7 */ if (fZ) goto L_004181d7;
L_004181c5:; BB(0x004181c5);
    /* 004181c5: push 0x6b4ae0 */ { u32 v = 0x6b4ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 004181ca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4181cfu); f_00630f40();
    /* 004181cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004181d2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004181d5: jmp 0x4181e7 */ goto L_004181e7;
L_004181d7:; BB(0x004181d7);
    /* 004181d7: push 0x6b4acc */ { u32 v = 0x6b4accu; r_esp -= 4; W32(r_esp, v); }
    /* 004181dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4181e1u); f_00630f40();
    /* 004181e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004181e4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004181e7:; BB(0x004181e7);
    /* 004181e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004181e9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004181eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004181ed: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 004181ef: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 004181f1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004181f3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004181f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004181f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004181f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004181fc: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004181ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418202: lea ecx, [eax + edx + 0xa7] */ r_ecx = (u32)(r_eax+r_edx+0xa7u);
    /* 00418209: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041820a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041820d: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418211: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 00418216: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418218: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041821b: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041821e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041821f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418221: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418223: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00418226: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x41822bu); f_005f9ff0();
    /* 0041822b: jmp 0x4181b0 */ goto L_004181b0;
L_0041822d:; BB(0x0041822d);
    /* 0041822d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041822f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418231: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00418234: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x418239u); f_005fb3a0();
    /* 00418239: mov ecx, eax */ r_ecx = r_eax;
    /* 0041823b: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x418240u); f_006065d0();
    /* 00418240: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00418242: mov esp, ebp */ r_esp = r_ebp;
    /* 00418244: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418245: ret 4 */ FN_RET(0x00418190); r_esp += 8; return;
}

void f_00418250(void) /* BlackjackRoomInterface::vfunc42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418250);
    /* 00418250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418251: mov ebp, esp */ r_ebp = r_esp;
    /* 00418253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418257: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418259: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041825c: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x418261u); f_005fb3a0();
    /* 00418261: mov ecx, eax */ r_ecx = r_eax;
    /* 00418263: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x418268u); f_00606570();
    /* 00418268: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041826a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041826d: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00418270: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418273: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00418279: mov dword ptr [edx + 0x4ef4], ecx */ W32((u32)(r_edx+0x4ef4u), r_ecx);
    /* 0041827f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00418281: mov esp, ebp */ r_esp = r_ebp;
    /* 00418283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418284: ret 4 */ FN_RET(0x00418250); r_esp += 8; return;
}

