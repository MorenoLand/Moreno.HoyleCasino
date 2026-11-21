#include "protos.h"

void f_005a13b0(void) /* BigRaiseRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a13b0);
    /* 005a13b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a13b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a13b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a13b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a13b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a13ba: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5a13bfu); f_005e9e20();
    /* 005a13bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a13c2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 005a13c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a13cb: mov dword ptr [ecx], 0x6cf534 */ W32((u32)(r_ecx), 0x6cf534u);
    /* 005a13d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a13d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005a13d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a13d7: ret  */ FN_RET(0x005a13b0); r_esp += 4; return;
}

void f_005a1420(void) /* BigRaiseRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1420);
    /* 005a1420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1421: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1425: push 0x6a783e */ { u32 v = 0x6a783eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a142a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a1430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1431: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1432: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a1437: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a143a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a143d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a1443: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a1446: mov eax, dword ptr [0x7935d4] */ r_eax = R32((u32)(0x7935d4u));
    /* 005a144b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005a144e: jne 0x5a14b9 */ if (!fZ) goto L_005a14b9;
L_005a1450:; BB(0x005a1450);
    /* 005a1450: mov ecx, dword ptr [0x7935d4] */ r_ecx = R32((u32)(0x7935d4u));
    /* 005a1456: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1459: mov dword ptr [0x7935d4], ecx */ W32((u32)(0x7935d4u), r_ecx);
    /* 005a145f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1466: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005a146c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a146e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a1474: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 005a147a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a147cu); call_ind(t); }
    /* 005a147c: mov dword ptr [0x752fc4], eax */ W32((u32)(0x752fc4u), r_eax);
    /* 005a1481: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005a1486: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a1488: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a148e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 005a1494: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a1496u); call_ind(t); }
    /* 005a1496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1497: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a149d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a149f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a14a5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005a14ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a14adu); call_ind(t); }
    /* 005a14ad: mov dword ptr [0x752fc8], eax */ W32((u32)(0x752fc8u), r_eax);
    /* 005a14b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005a14b9:; BB(0x005a14b9);
    /* 005a14b9: cmp dword ptr [ebp + 8], 0x315101 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x315101u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a14c0: jne 0x5a14c9 */ if (!fZ) goto L_005a14c9;
L_005a14c2:; BB(0x005a14c2);
    /* 005a14c2: mov eax, 0x752fc0 */ r_eax = 0x752fc0u;
    /* 005a14c7: jmp 0x5a14cb */ goto L_005a14cb;
L_005a14c9:; BB(0x005a14c9);
    /* 005a14c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a14cb:; BB(0x005a14cb);
    /* 005a14cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a14ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a14d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a14d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005a14d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a14d9: ret 4 */ FN_RET(0x005a1420); r_esp += 8; return;
}

void f_005a14e0(void) /* BigRaiseRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a14e0);
    /* 005a14e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a14e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a14e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a14e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a14e7: mov eax, 0x752a30 */ r_eax = 0x752a30u;
    /* 005a14ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005a14ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a14ef: ret  */ FN_RET(0x005a14e0); r_esp += 4; return;
}

void f_005a14f0(void) /* BigRaiseRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a14f0);
    /* 005a14f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a14f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a14f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a14f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a14f7: mov eax, 0x752ae0 */ r_eax = 0x752ae0u;
    /* 005a14fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005a14fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a14ff: ret  */ FN_RET(0x005a14f0); r_esp += 4; return;
}

void f_005a1520(void) /* BigRaiseRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1520);
    /* 005a1520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1521: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1527: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a152b: jne 0x5a1531 */ if (!fZ) goto L_005a1531;
L_005a152d:; BB(0x005a152d);
    /* 005a152d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a152f: jmp 0x5a154d */ goto L_005a154d;
L_005a1531:; BB(0x005a1531);
    /* 005a1531: push 0x6cee50 */ { u32 v = 0x6cee50u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1536: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a153bu); f_00630f40();
    /* 005a153b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a153e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a153f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1543: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5a1548u); f_00686d8e();
    /* 005a1548: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a154b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005a154d:; BB(0x005a154d);
    /* 005a154d: mov esp, ebp */ r_esp = r_ebp;
    /* 005a154f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1550: ret 4 */ FN_RET(0x005a1520); r_esp += 8; return;
}

void f_005a1560(void) /* BigRaiseRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1560);
    /* 005a1560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1561: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1567: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a156b: jne 0x5a1571 */ if (!fZ) goto L_005a1571;
L_005a156d:; BB(0x005a156d);
    /* 005a156d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a156f: jmp 0x5a15b8 */ goto L_005a15b8;
L_005a1571:; BB(0x005a1571);
    /* 005a1571: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1574: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 005a157a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a157d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 005a1584: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a1587: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 005a158e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1591: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 005a1598: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a159b: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 005a15a2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a15a5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005a15ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a15af: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 005a15b6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005a15b8:; BB(0x005a15b8);
    /* 005a15b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005a15ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a15bb: ret 8 */ FN_RET(0x005a1560); r_esp += 12; return;
}

void f_005a15c0(void) /* BigRaiseRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a15c0);
    /* 005a15c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a15c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a15c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a15c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a15c7: mov eax, 0x315100 */ r_eax = 0x315100u;
    /* 005a15cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005a15ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a15cf: ret  */ FN_RET(0x005a15c0); r_esp += 4; return;
}

void f_005a15d0(void) /* BigRaiseRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a15d0);
    /* 005a15d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a15d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a15d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a15d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a15d7: mov eax, 0x752fcc */ r_eax = 0x752fccu;
    /* 005a15dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005a15de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a15df: ret  */ FN_RET(0x005a15d0); r_esp += 4; return;
}

void f_005a1610(void) /* BigRaiseRoomInterface::vfunc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1610);
    /* 005a1610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1611: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1617: mov eax, 0xb */ r_eax = 0xbu;
    /* 005a161c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a161e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a161f: ret  */ FN_RET(0x005a1610); r_esp += 4; return;
}

void f_005a1620(void) /* BigRaiseRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1620);
    /* 005a1620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1621: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1627: mov eax, 0x6cf68c */ r_eax = 0x6cf68cu;
    /* 005a162c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a162e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a162f: ret  */ FN_RET(0x005a1620); r_esp += 4; return;
}

void f_005a1630(void) /* BigRaiseRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1630);
    /* 005a1630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1631: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1637: mov eax, 0x14 */ r_eax = 0x14u;
    /* 005a163c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a163e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a163f: ret  */ FN_RET(0x005a1630); r_esp += 4; return;
}

void f_005a1650(void) /* BigRaiseRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1650);
    /* 005a1650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1651: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1653: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1656: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a1659: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a165b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a165e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5a1663u); f_0063aae0();
    /* 005a1663: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a1666: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1669: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a166c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a166f: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1672: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a1675: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1677: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a167a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005a167c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a167f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a1682: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1685: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1688: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a168b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005a168e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a1691: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a1693: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1696: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a1699: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a169c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005a169e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a16a1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005a16a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a16a7: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a16aa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a16ad: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005a16b0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005a16b3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a16b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a16b8: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a16bb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005a16be: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005a16c0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005a16c3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005a16c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a16c9: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a16cc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005a16cf: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005a16d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a16d4: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005a16da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a16dc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a16e2: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005a16e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a16eau); call_ind(t); }
    /* 005a16ea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a16ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a16ef: je 0x5a176f */ if (fZ) goto L_005a176f;
L_005a16f1:; BB(0x005a16f1);
    /* 005a16f1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a16f7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5a16fcu); f_005f3bf0();
    /* 005a16fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a16ff: jne 0x5a176f */ if (!fZ) goto L_005a176f;
L_005a1701:; BB(0x005a1701);
    /* 005a1701: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005a1704: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1705: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005a1708: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1709: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a170c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a170d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a1713: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x5a1718u); f_005e0c40();
    /* 005a1718: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a171b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a171e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a1721: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1723: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a1726: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005a1728: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a172b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005a172e: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a1731: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a1734: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005a1737: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a173a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a173c: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a173f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005a1742: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005a1744: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a1747: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005a174a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a174d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005a1750: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005a1753: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005a1756: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a1758: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a175b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005a175e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005a1760: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005a1763: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005a1766: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a1769: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005a176c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005a176f:; BB(0x005a176f);
    /* 005a176f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1772: ret 0x10 */ FN_RET(0x005a1650); r_esp += 20; return;
}

void f_005a1780(void) /* BigRaiseRoomInterface::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1780);
    /* 005a1780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1781: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1787: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005a178c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a178e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a178f: ret  */ FN_RET(0x005a1780); r_esp += 4; return;
}

void f_005a1790(void) /* BigRaiseRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1790);
    /* 005a1790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1791: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1793: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1796: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1799: cmp dword ptr [ebp + 0xc], 0x315100 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x315100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a17a0: jne 0x5a1878 */ if (!fZ) goto L_005a1878;
L_005a17a6:; BB(0x005a17a6);
    /* 005a17a6: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a17ad: jne 0x5a17c5 */ if (!fZ) goto L_005a17c5;
L_005a17af:; BB(0x005a17af);
    /* 005a17af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a17b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a17b3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005a17b9: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x5a17beu); f_005dbd00();
    /* 005a17be: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a17c0: jmp 0x5a18a1 */ goto L_005a18a1;
L_005a17c5:; BB(0x005a17c5);
    /* 005a17c5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a17cb: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5a17d0u); f_005e2f90();
    /* 005a17d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a17d3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a17d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a17d9: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a17df: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a17e2: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a17e6: ja 0x5a1848 */ if ((!fC&&!fZ)) goto L_005a1848;
L_005a17e8:; BB(0x005a17e8);
    /* 005a17e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a17eb: jmp dword ptr [edx*4 + 0x5a18a8] */ { u32 t = R32((u32)(r_edx*4+0x5a18a8u)); switch (t) { case 0x5a1803u: goto L_005a1803; case 0x5a1815u: goto L_005a1815; case 0x5a1827u: goto L_005a1827; case 0x5a1838u: goto L_005a1838; case 0x5a17f2u: goto L_005a17f2; default: UNSUP(0x005a17eb, "jump table entry is not a known target"); } }
L_005a17f2:; BB(0x005a17f2);
    /* 005a17f2: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005a17f7: mov dword ptr [eax + 0x4f0c], 0x4d2 */ W32((u32)(r_eax+0x4f0cu), 0x4d2u);
    /* 005a1801: jmp 0x5a1848 */ goto L_005a1848;
L_005a1803:; BB(0x005a1803);
    /* 005a1803: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a1809: mov dword ptr [ecx + 0x4f0c], 5 */ W32((u32)(r_ecx+0x4f0cu), 0x5u);
    /* 005a1813: jmp 0x5a1848 */ goto L_005a1848;
L_005a1815:; BB(0x005a1815);
    /* 005a1815: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005a181b: mov dword ptr [edx + 0x4f0c], 0xa */ W32((u32)(r_edx+0x4f0cu), 0xau);
    /* 005a1825: jmp 0x5a1848 */ goto L_005a1848;
L_005a1827:; BB(0x005a1827);
    /* 005a1827: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005a182c: mov dword ptr [eax + 0x4f0c], 0x19 */ W32((u32)(r_eax+0x4f0cu), 0x19u);
    /* 005a1836: jmp 0x5a1848 */ goto L_005a1848;
L_005a1838:; BB(0x005a1838);
    /* 005a1838: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a183e: mov dword ptr [ecx + 0x4f0c], 0x64 */ W32((u32)(r_ecx+0x4f0cu), 0x64u);
L_005a1848:; BB(0x005a1848);
    /* 005a1848: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a184a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a184c: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005a1852: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a1854: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a185a: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 005a1860: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a1862u); call_ind(t); }
    /* 005a1862: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a1865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1867: jne 0x5a1874 */ if (!fZ) goto L_005a1874;
L_005a1869:; BB(0x005a1869);
    /* 005a1869: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a186f: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x5a1874u); f_005e3130();
L_005a1874:; BB(0x005a1874);
    /* 005a1874: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a1876: jmp 0x5a18a1 */ goto L_005a18a1;
L_005a1878:; BB(0x005a1878);
    /* 005a1878: cmp dword ptr [ebp + 8], 0x315100 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x315100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a187f: jne 0x5a189f */ if (!fZ) goto L_005a189f;
L_005a1881:; BB(0x005a1881);
    /* 005a1881: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1883: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1885: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a188b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a188d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a1893: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005a1899: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a189bu); call_ind(t); }
    /* 005a189b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a189d: jmp 0x5a18a1 */ goto L_005a18a1;
L_005a189f:; BB(0x005a189f);
    /* 005a189f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a18a1:; BB(0x005a18a1);
    /* 005a18a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005a18a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a18a4: ret 8 */ FN_RET(0x005a1790); r_esp += 12; return;
}

void f_005a18c0(void) /* BigRaiseRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a18c0);
    /* 005a18c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a18c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a18c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a18c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a18c7: cmp dword ptr [ebp + 8], 0x315100 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x315100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a18ce: jne 0x5a18e1 */ if (!fZ) goto L_005a18e1;
L_005a18d0:; BB(0x005a18d0);
    /* 005a18d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a18d2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 005a18d8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x5a18ddu); f_00653bd0();
    /* 005a18dd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a18df: jmp 0x5a18e3 */ goto L_005a18e3;
L_005a18e1:; BB(0x005a18e1);
    /* 005a18e1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a18e3:; BB(0x005a18e3);
    /* 005a18e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005a18e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a18e6: ret 4 */ FN_RET(0x005a18c0); r_esp += 8; return;
}

void f_005a18f0(void) /* BigRaiseRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a18f0);
    /* 005a18f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a18f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a18f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a18f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a18f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a18f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005a18fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a18fc: ret 4 */ FN_RET(0x005a18f0); r_esp += 8; return;
}

void f_005a1900(void) /* BigRaiseRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1900);
    /* 005a1900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1901: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1907: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a1909: mov esp, ebp */ r_esp = r_ebp;
    /* 005a190b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a190c: ret 4 */ FN_RET(0x005a1900); r_esp += 8; return;
}

void f_005a1910(void) /* BigRaiseRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1910);
    /* 005a1910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1911: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1917: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a191c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a191e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1921: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5a1926u); f_005fb5a0();
    /* 005a1926: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a192b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a192d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1930: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5a1935u); f_005fb5a0();
    /* 005a1935: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a193a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a193c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a193f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5a1944u); f_005fb5a0();
    /* 005a1944: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a1946: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1948: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1949: ret 4 */ FN_RET(0x005a1910); r_esp += 8; return;
}

void f_005a1950(void) /* BigRaiseRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1950);
    /* 005a1950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1951: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1957: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a195b: jne 0x5a1961 */ if (!fZ) goto L_005a1961;
L_005a195d:; BB(0x005a195d);
    /* 005a195d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a195f: jmp 0x5a1977 */ goto L_005a1977;
L_005a1961:; BB(0x005a1961);
    /* 005a1961: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1964: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 005a1967: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a196a: mov byte ptr [ecx + 1], 1 */ W8((u32)(r_ecx+0x1u), 0x1u);
    /* 005a196e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a1971: mov byte ptr [edx + 2], 1 */ W8((u32)(r_edx+0x2u), 0x1u);
    /* 005a1975: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005a1977:; BB(0x005a1977);
    /* 005a1977: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a197a: ret 4 */ FN_RET(0x005a1950); r_esp += 8; return;
}

void f_005a1980(void) /* BigRaiseRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1980);
    /* 005a1980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1981: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1987: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a198b: jne 0x5a1991 */ if (!fZ) goto L_005a1991;
L_005a198d:; BB(0x005a198d);
    /* 005a198d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a198f: jmp 0x5a19bb */ goto L_005a19bb;
L_005a1991:; BB(0x005a1991);
    /* 005a1991: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1994: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005a199b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a199e: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005a19a5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a19a8: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005a19af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a19b2: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005a19b9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005a19bb:; BB(0x005a19bb);
    /* 005a19bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005a19bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a19be: ret 4 */ FN_RET(0x005a1980); r_esp += 8; return;
}

void f_005a19e0(void) /* BigRaiseRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a19e0);
    /* 005a19e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a19e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a19e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a19e5: push 0x6a7864 */ { u32 v = 0x6a7864u; r_esp -= 4; W32(r_esp, v); }
    /* 005a19ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a19f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a19f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a19f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a19f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a19fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a19fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a19ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a1a05: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a1a08: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a0d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a1a12u); f_00686d82();
    /* 005a1a12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1a15: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a1a18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1a1f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1a23: je 0x5a1a32 */ if (fZ) goto L_005a1a32;
L_005a1a25:; BB(0x005a1a25);
    /* 005a1a25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1a28: call 0x59ffa0 */ r_esp -= 4; W32(r_esp, 0x5a1a2du); f_0059ffa0();
    /* 005a1a2d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a1a30: jmp 0x5a1a39 */ goto L_005a1a39;
L_005a1a32:; BB(0x005a1a32);
    /* 005a1a32: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005a1a39:; BB(0x005a1a39);
    /* 005a1a39: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a1a3c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a1a3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a1a46: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a1a49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a1a4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a1a53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1a54: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1a56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1a57: ret  */ FN_RET(0x005a19e0); r_esp += 4; return;
}

void f_005a1a60(void) /* BigRaiseRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1a60);
    /* 005a1a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a61: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1a63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1a66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a1a69: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a6b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a1a71: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5a1a76u); f_005de600();
    /* 005a1a76: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1a78: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5a1a7du); f_0063aae0();
    /* 005a1a7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a1a80: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1a84: je 0x5a1a8c */ if (fZ) goto L_005a1a8c;
L_005a1a86:; BB(0x005a1a86);
    /* 005a1a86: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1a8a: jne 0x5a1a90 */ if (!fZ) goto L_005a1a90;
L_005a1a8c:; BB(0x005a1a8c);
    /* 005a1a8c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a1a8e: jmp 0x5a1ab4 */ goto L_005a1ab4;
L_005a1a90:; BB(0x005a1a90);
    /* 005a1a90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1a93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1a96: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005a1a98: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 005a1a9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1a9d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1aa0: mov dl, byte ptr [ecx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 005a1aa3: mov byte ptr [eax + 1], dl */ W8((u32)(r_eax+0x1u), (u8)r_edx);
    /* 005a1aa6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1aa9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1aac: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 005a1aaf: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005a1ab2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005a1ab4:; BB(0x005a1ab4);
    /* 005a1ab4: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1ab7: ret 4 */ FN_RET(0x005a1a60); r_esp += 8; return;
}

void f_005a1ad0(void) /* BigRaiseRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1ad0);
    /* 005a1ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1ad3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1ad9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a1ade: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1ae0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a1ae3: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005a1ae9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1aeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1aed: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a1af2u); f_0064c8a0();
    /* 005a1af2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1af5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005a1af8: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005a1afb: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005a1afe: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a1b01: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a1b04: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005a1b07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b0b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a1b10u); f_0064c8a0();
    /* 005a1b10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1b13: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005a1b16: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005a1b19: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a1b1c: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005a1b1f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a1b22: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005a1b25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b27: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a1b2a: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5a1b2fu); f_0063aae0();
    /* 005a1b2f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a1b32: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a1b35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b36: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a1b39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b3a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a1b40: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x5a1b45u); f_005e0690();
    /* 005a1b45: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a1b4b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5a1b50u); f_005f3bf0();
    /* 005a1b50: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1b53: jne 0x5a1b6c */ if (!fZ) goto L_005a1b6c;
L_005a1b55:; BB(0x005a1b55);
    /* 005a1b55: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005a1b58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b59: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 005a1b5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b5d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a1b60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b61: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a1b67: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x5a1b6cu); f_005e0c40();
L_005a1b6c:; BB(0x005a1b6c);
    /* 005a1b6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b72: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005a1b75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b76: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a1b79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b7a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a1b7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b7e: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 005a1b81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b82: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a1b85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b86: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a1b89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b8a: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 005a1b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b8e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a1b91: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005a1b94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b95: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005a1b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b99: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005a1b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b9d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a1ba0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1ba3: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a1ba8u); f_0064c5c0();
    /* 005a1ba8: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1baa: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a1bafu); f_0064c5c0();
    /* 005a1baf: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1bb1: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a1bb6u); f_0064c5c0();
    /* 005a1bb6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a1bb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a1bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bbd: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5a1bc2u); f_0064c8d0();
    /* 005a1bc2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1bc5: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005a1bc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bc9: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a1bd3u); f_00630f40();
    /* 005a1bd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1bd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bd9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1bdc: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5a1be1u); f_00654390();
    /* 005a1be1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1be3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1be5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1be7: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005a1bea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1beb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a1bee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bef: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a1bf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bf3: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 005a1bf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bf7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a1bfa: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1bfd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a1c02u); f_0064c5c0();
    /* 005a1c02: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a1c05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a1c08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c09: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5a1c0eu); f_0064c8d0();
    /* 005a1c0e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1c11: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005a1c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c15: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c1a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a1c1fu); f_00630f40();
    /* 005a1c1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c25: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1c28: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5a1c2du); f_00654390();
    /* 005a1c2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c33: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005a1c36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c37: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a1c3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c3b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a1c3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c3f: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 005a1c45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c46: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a1c49: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1c4c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a1c51u); f_0064c5c0();
    /* 005a1c51: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a1c54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c55: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a1c57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c58: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5a1c5du); f_0064c8d0();
    /* 005a1c5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1c60: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005a1c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c64: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a1c6eu); f_00630f40();
    /* 005a1c6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1c71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c72: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1c77: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5a1c7cu); f_00654390();
    /* 005a1c7c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a1c7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1c81: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1c83: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5a1c88u); f_00686d72();
    /* 005a1c88: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1c8b: ret 8 */ FN_RET(0x005a1ad0); r_esp += 12; return;
}

