#include "protos.h"

void f_004fd7b0(void) /* PokerRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd7b0);
    /* 004fd7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd7b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd7b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd7ba: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4fd7bfu); f_005e9e20();
    /* 004fd7bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd7c2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 004fd7c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd7cb: mov dword ptr [ecx], 0x6c0a94 */ W32((u32)(r_ecx), 0x6c0a94u);
    /* 004fd7d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd7d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd7d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd7d7: ret  */ FN_RET(0x004fd7b0); r_esp += 4; return;
}

void f_004fd7e0(void) /* PokerRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd7e0);
    /* 004fd7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd7e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7e5: push 0x6a28db */ { u32 v = 0x6a28dbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fd7f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd7f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fd7f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd7fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fd7ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fd805: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fd808: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd80d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fd812u); f_00686d82();
    /* 004fd812: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd815: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fd818: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd81f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd823: je 0x4fd832 */ if (fZ) goto L_004fd832;
L_004fd825:; BB(0x004fd825);
    /* 004fd825: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd828: call 0x4f9b90 */ r_esp -= 4; W32(r_esp, 0x4fd82du); f_004f9b90();
    /* 004fd82d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd830: jmp 0x4fd839 */ goto L_004fd839;
L_004fd832:; BB(0x004fd832);
    /* 004fd832: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004fd839:; BB(0x004fd839);
    /* 004fd839: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd83c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fd83f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd846: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fd849: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd84c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd853: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd854: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd856: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd857: ret  */ FN_RET(0x004fd7e0); r_esp += 4; return;
}

void f_004fd860(void) /* PokerRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd860);
    /* 004fd860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd861: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd867: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd86b: jne 0x4fd871 */ if (!fZ) goto L_004fd871;
L_004fd86d:; BB(0x004fd86d);
    /* 004fd86d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fd86f: jmp 0x4fd88d */ goto L_004fd88d;
L_004fd871:; BB(0x004fd871);
    /* 004fd871: push 0x6c0bec */ { u32 v = 0x6c0becu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd876: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fd87bu); f_00630f40();
    /* 004fd87b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd87f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fd882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd883: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4fd888u); f_00686d8e();
    /* 004fd888: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd88b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004fd88d:; BB(0x004fd88d);
    /* 004fd88d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd88f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd890: ret 4 */ FN_RET(0x004fd860); r_esp += 8; return;
}

void f_004fd8c0(void) /* PokerRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd8c0);
    /* 004fd8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd8c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd8c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd8c7: mov eax, 0x30e788 */ r_eax = 0x30e788u;
    /* 004fd8cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd8ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd8cf: ret  */ FN_RET(0x004fd8c0); r_esp += 4; return;
}

void f_004fd8d0(void) /* PokerRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd8d0);
    /* 004fd8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd8d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd8d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd8d7: mov eax, 0x6c0bf8 */ r_eax = 0x6c0bf8u;
    /* 004fd8dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd8de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd8df: ret  */ FN_RET(0x004fd8d0); r_esp += 4; return;
}

void f_004fd8f0(void) /* PokerRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd8f0);
    /* 004fd8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd8f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd8f7: mov eax, 0x720594 */ r_eax = 0x720594u;
    /* 004fd8fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd8fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd8ff: ret  */ FN_RET(0x004fd8f0); r_esp += 4; return;
}

void f_004fd900(void) /* PokerRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd900);
    /* 004fd900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd901: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd907: mov eax, 0x72059c */ r_eax = 0x72059cu;
    /* 004fd90c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd90f: ret  */ FN_RET(0x004fd900); r_esp += 4; return;
}

void f_004fd910(void) /* PokerRoomInterface::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd910);
    /* 004fd910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd911: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd917: mov eax, 8 */ r_eax = 0x8u;
    /* 004fd91c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd91e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd91f: ret  */ FN_RET(0x004fd910); r_esp += 4; return;
}

void f_004fd920(void) /* PokerRoomInterface::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd920);
    /* 004fd920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd921: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd927: mov eax, 8 */ r_eax = 0x8u;
    /* 004fd92c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd92e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd92f: ret  */ FN_RET(0x004fd920); r_esp += 4; return;
}

void f_004fd930(void) /* PokerRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd930);
    /* 004fd930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd931: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd937: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd93b: jne 0x4fd941 */ if (!fZ) goto L_004fd941;
L_004fd93d:; BB(0x004fd93d);
    /* 004fd93d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fd93f: jmp 0x4fd9a0 */ goto L_004fd9a0;
L_004fd941:; BB(0x004fd941);
    /* 004fd941: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fd947: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4fd94cu); f_0047f950();
    /* 004fd94c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fd94f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004fd951: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fd954: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 004fd95b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fd961: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4fd966u); f_0047f950();
    /* 004fd966: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fd969: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 004fd96c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fd96f: mov dword ptr [edx + 0xc], 1 */ W32((u32)(r_edx+0xcu), 0x1u);
    /* 004fd976: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fd979: mov dword ptr [eax + 0x10], 1 */ W32((u32)(r_eax+0x10u), 0x1u);
    /* 004fd980: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fd983: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 004fd98a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fd990: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4fd995u); f_0047f950();
    /* 004fd995: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fd998: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fd99b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004fd99e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004fd9a0:; BB(0x004fd9a0);
    /* 004fd9a0: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd9a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd9a3: ret 8 */ FN_RET(0x004fd930); r_esp += 12; return;
}

void f_004fd9b0(void) /* PokerRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd9b0);
    /* 004fd9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd9b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd9b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd9b7: mov eax, 0x18 */ r_eax = 0x18u;
    /* 004fd9bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd9be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd9bf: ret  */ FN_RET(0x004fd9b0); r_esp += 4; return;
}

void f_004fd9c0(void) /* PokerRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd9c0);
    /* 004fd9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd9c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd9c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fd9c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9cd: jne 0x4fd9d3 */ if (!fZ) goto L_004fd9d3;
L_004fd9cf:; BB(0x004fd9cf);
    /* 004fd9cf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fd9d1: jmp 0x4fda0a */ goto L_004fda0a;
L_004fd9d3:; BB(0x004fd9d3);
    /* 004fd9d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fd9d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fd9d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fd9df: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4fd9e4u); f_0047f950();
    /* 004fd9e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd9e7: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004fd9ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd9ec: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004fd9f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fd9f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fd9fa: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 004fda00: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fda02u); call_ind(t); }
    /* 004fda02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fda05: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004fda08: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004fda0a:; BB(0x004fda0a);
    /* 004fda0a: mov esp, ebp */ r_esp = r_ebp;
    /* 004fda0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fda0d: ret 4 */ FN_RET(0x004fd9c0); r_esp += 8; return;
}

void f_004fda10(void) /* PokerRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fda10);
    /* 004fda10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fda11: mov ebp, esp */ r_ebp = r_esp;
    /* 004fda13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fda16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fda19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fda1b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fda21: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x4fda26u); f_005de600();
    /* 004fda26: mov ecx, eax */ r_ecx = r_eax;
    /* 004fda28: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x4fda2du); f_0063aae0();
    /* 004fda2d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fda30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fda33: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fda36: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda3a: je 0x4fda42 */ if (fZ) goto L_004fda42;
L_004fda3c:; BB(0x004fda3c);
    /* 004fda3c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda40: jne 0x4fda46 */ if (!fZ) goto L_004fda46;
L_004fda42:; BB(0x004fda42);
    /* 004fda42: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fda44: jmp 0x4fda60 */ goto L_004fda60;
L_004fda46:; BB(0x004fda46);
    /* 004fda46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fda49: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fda4c: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 004fda4f: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004fda52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fda55: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fda58: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fda5b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004fda5e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004fda60:; BB(0x004fda60);
    /* 004fda60: mov esp, ebp */ r_esp = r_ebp;
    /* 004fda62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fda63: ret 4 */ FN_RET(0x004fda10); r_esp += 8; return;
}

void f_004fda70(void) /* PokerRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fda70);
    /* 004fda70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fda71: mov ebp, esp */ r_ebp = r_esp;
    /* 004fda73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fda76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fda79: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda7d: jne 0x4fda83 */ if (!fZ) goto L_004fda83;
L_004fda7f:; BB(0x004fda7f);
    /* 004fda7f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fda81: jmp 0x4fdab3 */ goto L_004fdab3;
L_004fda83:; BB(0x004fda83);
    /* 004fda83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fda86: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fda89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fda8c: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 004fda93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fda96: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 004fda9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdaa0: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 004fdaa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdaaa: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 004fdab1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004fdab3:; BB(0x004fdab3);
    /* 004fdab3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fdab5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdab6: ret 4 */ FN_RET(0x004fda70); r_esp += 8; return;
}

void f_004fdae0(void) /* PokerRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fdae0);
    /* 004fdae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdae1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fdae3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fdae6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fdae9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fdaeb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fdaee: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x4fdaf3u); f_0063aae0();
    /* 004fdaf3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fdaf6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdaf9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004fdafc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdaff: add ecx, dword ptr [edx + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdb02: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fdb05: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdb07: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fdb0a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004fdb0c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fdb0f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fdb12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdb15: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdb18: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fdb1b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004fdb1e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004fdb21: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fdb23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdb26: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdb29: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004fdb2c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004fdb2e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004fdb31: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fdb34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdb37: add eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fdb3a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004fdb3d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004fdb40: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004fdb43: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004fdb45: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdb48: add ecx, dword ptr [edx + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdb4b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004fdb4e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004fdb50: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004fdb53: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fdb56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fdb59: add edx, dword ptr [eax + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdb5c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004fdb5f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004fdb62: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb64: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004fdb6a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fdb6c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdb72: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 004fdb78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fdb7au); call_ind(t); }
    /* 004fdb7a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fdb7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb7f: je 0x4fdbff */ if (fZ) goto L_004fdbff;
L_004fdb81:; BB(0x004fdb81);
    /* 004fdb81: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fdb87: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x4fdb8cu); f_005f3bf0();
    /* 004fdb8c: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb8f: jne 0x4fdbff */ if (!fZ) goto L_004fdbff;
L_004fdb91:; BB(0x004fdb91);
    /* 004fdb91: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004fdb94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb95: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004fdb98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fdb9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb9d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdba3: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x4fdba8u); f_005e0c40();
    /* 004fdba8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fdbab: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdbae: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fdbb1: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdbb3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fdbb6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004fdbb8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fdbbb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fdbbe: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbc1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fdbc4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004fdbc7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004fdbca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fdbcc: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbcf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004fdbd2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004fdbd4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004fdbd7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fdbda: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbdd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004fdbe0: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004fdbe3: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004fdbe6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fdbe8: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbeb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004fdbee: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004fdbf0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004fdbf3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fdbf6: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbf9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004fdbfc: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_004fdbff:; BB(0x004fdbff);
    /* 004fdbff: mov esp, ebp */ r_esp = r_ebp;
    /* 004fdc01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdc02: ret 0x10 */ FN_RET(0x004fdae0); r_esp += 20; return;
}

void f_004fdc10(void) /* PokerRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fdc10);
    /* 004fdc10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc11: mov ebp, esp */ r_ebp = r_esp;
    /* 004fdc13: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fdc19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fdc1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fdc20: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fdc23: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 004fdc29: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc2b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fdc2e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x4fdc33u); f_0063aae0();
    /* 004fdc33: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004fdc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc3a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4fdc3fu); f_0064c8a0();
    /* 004fdc3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdc42: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004fdc45: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 004fdc48: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004fdc4b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004fdc4e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004fdc51: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004fdc54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc58: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4fdc5du); f_0064c8a0();
    /* 004fdc5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdc60: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004fdc63: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 004fdc66: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004fdc69: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004fdc6c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004fdc6f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004fdc72: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fdc75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc76: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fdc79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc7a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdc80: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x4fdc85u); f_005e0690();
    /* 004fdc85: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fdc8b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x4fdc90u); f_005f3bf0();
    /* 004fdc90: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc93: jne 0x4fdcac */ if (!fZ) goto L_004fdcac;
L_004fdc95:; BB(0x004fdc95);
    /* 004fdc95: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 004fdc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc99: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004fdc9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc9d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fdca0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdca1: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdca7: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x4fdcacu); f_005e0c40();
L_004fdcac:; BB(0x004fdcac);
    /* 004fdcac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcb2: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 004fdcb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcb6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fdcb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcba: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004fdcbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcbe: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 004fdcc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcc2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004fdcc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcc6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004fdcc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcca: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 004fdccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcce: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fdcd1: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004fdcd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcd5: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 004fdcd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcd9: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 004fdcdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcdd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fdce0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdce3: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4fdce8u); f_0064c5c0();
    /* 004fdce8: mov ecx, eax */ r_ecx = r_eax;
    /* 004fdcea: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4fdcefu); f_0064c5c0();
    /* 004fdcef: mov ecx, eax */ r_ecx = r_eax;
    /* 004fdcf1: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4fdcf6u); f_0064c5c0();
    /* 004fdcf6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fdcf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcfa: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fdcfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcfd: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x4fdd02u); f_0064c8d0();
    /* 004fdd02: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdd05: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004fdd08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd09: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd0e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fdd13u); f_00630f40();
    /* 004fdd13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdd16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd19: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fdd1c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x4fdd21u); f_00654390();
    /* 004fdd21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd27: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004fdd2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd2b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004fdd2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd2f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004fdd32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd33: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004fdd36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd37: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fdd3a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdd3d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4fdd42u); f_0064c5c0();
    /* 004fdd42: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fdd45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fdd48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd49: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x4fdd4eu); f_0064c8d0();
    /* 004fdd4e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdd51: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 004fdd54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd55: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd5a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fdd5fu); f_00630f40();
    /* 004fdd5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdd62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fdd68: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x4fdd6du); f_00654390();
    /* 004fdd6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd73: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004fdd76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd77: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fdd7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd7b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004fdd7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd7f: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 004fdd85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd86: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fdd89: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdd8c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4fdd91u); f_0064c5c0();
    /* 004fdd91: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fdd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd95: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fdd97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd98: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x4fdd9du); f_0064c8d0();
    /* 004fdd9d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdda0: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004fdda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdda4: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdda9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fddaeu); f_00630f40();
    /* 004fddae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fddb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fddb2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fddb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fddb7: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x4fddbcu); f_00654390();
    /* 004fddbc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fddbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fddc1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fddc3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4fddc8u); f_00686d72();
    /* 004fddc8: mov esp, ebp */ r_esp = r_ebp;
    /* 004fddca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fddcb: ret 8 */ FN_RET(0x004fdc10); r_esp += 12; return;
}

void f_004fddd0(void) /* PokerRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fddd0);
    /* 004fddd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fddd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fddd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fddd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fddd7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdddc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fddde: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fdde1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x4fdde6u); f_005fb5a0();
    /* 004fdde6: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fddeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdded: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fddf0: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x4fddf5u); f_005fb5a0();
    /* 004fddf5: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fddfa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fddfc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fddff: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x4fde04u); f_005fb5a0();
    /* 004fde04: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fde06: mov esp, ebp */ r_esp = r_ebp;
    /* 004fde08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fde09: ret 4 */ FN_RET(0x004fddd0); r_esp += 8; return;
}

void f_004fde10(void) /* PokerRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fde10);
    /* 004fde10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fde11: mov ebp, esp */ r_ebp = r_esp;
    /* 004fde13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fde14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fde17: cmp dword ptr [ebp + 8], 0x30e788 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e788u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fde1e: jne 0x4fde31 */ if (!fZ) goto L_004fde31;
L_004fde20:; BB(0x004fde20);
    /* 004fde20: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fde22: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 004fde28: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x4fde2du); f_00653bd0();
    /* 004fde2d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fde2f: jmp 0x4fde33 */ goto L_004fde33;
L_004fde31:; BB(0x004fde31);
    /* 004fde31: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004fde33:; BB(0x004fde33);
    /* 004fde33: mov esp, ebp */ r_esp = r_ebp;
    /* 004fde35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fde36: ret 4 */ FN_RET(0x004fde10); r_esp += 8; return;
}

void f_004fde40(void) /* PokerRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fde40);
    /* 004fde40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fde41: mov ebp, esp */ r_ebp = r_esp;
    /* 004fde43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fde44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fde47: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fde49: mov esp, ebp */ r_esp = r_ebp;
    /* 004fde4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fde4c: ret 4 */ FN_RET(0x004fde40); r_esp += 8; return;
}

void f_004fde50(void) /* PokerRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fde50);
    /* 004fde50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fde51: mov ebp, esp */ r_ebp = r_esp;
    /* 004fde53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fde54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fde57: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fde59: mov esp, ebp */ r_esp = r_ebp;
    /* 004fde5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fde5c: ret 4 */ FN_RET(0x004fde50); r_esp += 8; return;
}

void f_004fde60(void) /* PokerRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fde60);
    /* 004fde60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fde61: mov ebp, esp */ r_ebp = r_esp;
    /* 004fde63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fde64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fde67: mov eax, 0x7205a0 */ r_eax = 0x7205a0u;
    /* 004fde6c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fde6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fde6f: ret  */ FN_RET(0x004fde60); r_esp += 4; return;
}

void f_004fde70(void) /* PokerRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fde70);
    /* 004fde70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fde71: mov ebp, esp */ r_ebp = r_esp;
    /* 004fde73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fde75: push 0x6a2904 */ { u32 v = 0x6a2904u; r_esp -= 4; W32(r_esp, v); }
    /* 004fde7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fde80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fde81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fde82: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fde87: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fde89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fde8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fde8d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fde93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fde96: mov eax, dword ptr [0x791ec4] */ r_eax = R32((u32)(0x791ec4u));
    /* 004fde9b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004fde9e: jne 0x4fdf64 */ if (!fZ) goto L_004fdf64;
L_004fdea4:; BB(0x004fdea4);
    /* 004fdea4: mov ecx, dword ptr [0x791ec4] */ r_ecx = R32((u32)(0x791ec4u));
    /* 004fdeaa: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdead: mov dword ptr [0x791ec4], ecx */ W32((u32)(0x791ec4u), r_ecx);
    /* 004fdeb3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fdeba: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004fdec0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fdec2: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdec8: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 004fdece: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fded0u); call_ind(t); }
    /* 004fded0: mov dword ptr [0x7205c4], eax */ W32((u32)(0x7205c4u), r_eax);
    /* 004fded5: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004fdeda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fdedc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdee2: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 004fdee8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fdeeau); call_ind(t); }
    /* 004fdeea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdeeb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdef1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fdef3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdef9: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 004fdeff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fdf01u); call_ind(t); }
    /* 004fdf01: mov dword ptr [0x7205c8], eax */ W32((u32)(0x7205c8u), r_eax);
    /* 004fdf06: mov dword ptr [0x7205cc], 0x30e7a1 */ W32((u32)(0x7205ccu), 0x30e7a1u);
    /* 004fdf10: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdf16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fdf18: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdf1e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 004fdf24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fdf26u); call_ind(t); }
    /* 004fdf26: mov dword ptr [0x7205d0], eax */ W32((u32)(0x7205d0u), r_eax);
    /* 004fdf2b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdf31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fdf33: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdf39: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 004fdf3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fdf41u); call_ind(t); }
    /* 004fdf41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdf42: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdf48: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fdf4a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fdf50: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 004fdf56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fdf58u); call_ind(t); }
    /* 004fdf58: mov dword ptr [0x7205d4], eax */ W32((u32)(0x7205d4u), r_eax);
    /* 004fdf5d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004fdf64:; BB(0x004fdf64);
    /* 004fdf64: cmp dword ptr [ebp + 8], 0x30e79d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e79du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdf6b: jne 0x4fdf74 */ if (!fZ) goto L_004fdf74;
L_004fdf6d:; BB(0x004fdf6d);
    /* 004fdf6d: mov eax, 0x7205c0 */ r_eax = 0x7205c0u;
    /* 004fdf72: jmp 0x4fdf86 */ goto L_004fdf86;
L_004fdf74:; BB(0x004fdf74);
    /* 004fdf74: cmp dword ptr [ebp + 8], 0x30e7a1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e7a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdf7b: jne 0x4fdf84 */ if (!fZ) goto L_004fdf84;
L_004fdf7d:; BB(0x004fdf7d);
    /* 004fdf7d: mov eax, 0x7205cc */ r_eax = 0x7205ccu;
    /* 004fdf82: jmp 0x4fdf86 */ goto L_004fdf86;
L_004fdf84:; BB(0x004fdf84);
    /* 004fdf84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fdf86:; BB(0x004fdf86);
    /* 004fdf86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fdf89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fdf90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fdf91: mov esp, ebp */ r_esp = r_ebp;
    /* 004fdf93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdf94: ret 4 */ FN_RET(0x004fde70); r_esp += 8; return;
}

void f_004fdfa0(void) /* PokerRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fdfa0);
    /* 004fdfa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfa1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fdfa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fdfa7: mov eax, 0x71ef58 */ r_eax = 0x71ef58u;
    /* 004fdfac: mov esp, ebp */ r_esp = r_ebp;
    /* 004fdfae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdfaf: ret  */ FN_RET(0x004fdfa0); r_esp += 4; return;
}

void f_004fdfb0(void) /* PokerRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fdfb0);
    /* 004fdfb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fdfb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fdfb7: mov eax, 0x7203e0 */ r_eax = 0x7203e0u;
    /* 004fdfbc: mov esp, ebp */ r_esp = r_ebp;
    /* 004fdfbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdfbf: ret  */ FN_RET(0x004fdfb0); r_esp += 4; return;
}

void f_004fdfc0(void) /* PokerRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fdfc0);
    /* 004fdfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fdfc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fdfc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fdfc9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fdfcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfcd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fdfd0: call 0x4fe0a0 */ r_esp -= 4; W32(r_esp, 0x4fdfd5u); f_004fe0a0();
    /* 004fdfd5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fdfd8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdfdc: jne 0x4fdfe5 */ if (!fZ) goto L_004fdfe5;
L_004fdfde:; BB(0x004fdfde);
    /* 004fdfde: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fdfe0: jmp 0x4fe08b */ goto L_004fe08b;
L_004fdfe5:; BB(0x004fdfe5);
    /* 004fdfe5: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdfec: je 0x4fdff7 */ if (fZ) goto L_004fdff7;
L_004fdfee:; BB(0x004fdfee);
    /* 004fdfee: cmp dword ptr [ebp + 8], 0x1398 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1398u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdff5: jne 0x4fe048 */ if (!fZ) goto L_004fe048;
L_004fdff7:; BB(0x004fdff7);
    /* 004fdff7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdff9: cmp dword ptr [ebp + 8], 0x1398 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1398u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe000: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004fe003: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004fe009: mov byte ptr [edx + 0x4f34], cl */ W8((u32)(r_edx+0x4f34u), (u8)r_ecx);
    /* 004fe00f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fe012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fe013: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fe016: call 0x4fe0a0 */ r_esp -= 4; W32(r_esp, 0x4fe01bu); f_004fe0a0();
    /* 004fe01b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fe021: mov dword ptr [ecx + 0x4f20], eax */ W32((u32)(r_ecx+0x4f20u), r_eax);
    /* 004fe027: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fe029: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 004fe02e: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004fe034: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fe036: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fe03c: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 004fe042: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fe044u); call_ind(t); }
    /* 004fe044: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fe046: jmp 0x4fe08b */ goto L_004fe08b;
L_004fe048:; BB(0x004fe048);
    /* 004fe048: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fe04b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fe04c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fe04f: call 0x4fe120 */ r_esp -= 4; W32(r_esp, 0x4fe054u); f_004fe120();
    /* 004fe054: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fe05a: mov dword ptr [ecx + 0x4f0c], eax */ W32((u32)(r_ecx+0x4f0cu), r_eax);
    /* 004fe060: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004fe066: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fe069: mov dword ptr [edx + 0x4f18], eax */ W32((u32)(r_edx+0x4f18u), r_eax);
    /* 004fe06f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fe071: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fe073: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fe079: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fe07b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fe081: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 004fe087: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fe089u); call_ind(t); }
    /* 004fe089: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004fe08b:; BB(0x004fe08b);
    /* 004fe08b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fe08d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe08e: ret 8 */ FN_RET(0x004fdfc0); r_esp += 12; return;
}

