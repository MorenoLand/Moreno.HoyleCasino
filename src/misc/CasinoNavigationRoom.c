#include "protos.h"

void f_005d15e0(void) /* CasinoNavigationRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d15e0);
    /* 005d15e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d15e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d15e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d15e5: push 0x6a8e0b */ { u32 v = 0x6a8e0bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d15ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d15f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d15f1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d15f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d15f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d15fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d15fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d15ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d1605: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d1608: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d160b: mov dword ptr [eax], 0x6d34e4 */ W32((u32)(r_eax), 0x6d34e4u);
    /* 005d1611: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1618: mov dword ptr [0x7947dc], 0 */ W32((u32)(0x7947dcu), 0x0u);
    /* 005d1622: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d1625: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005d162b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d162e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1631: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d1634: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1638: je 0x5d164d */ if (fZ) goto L_005d164d;
L_005d163a:; BB(0x005d163a);
    /* 005d163a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d163c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d163f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1641: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1644: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1646: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d1648u); call_ind(t); }
    /* 005d1648: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d164b: jmp 0x5d1654 */ goto L_005d1654;
L_005d164d:; BB(0x005d164d);
    /* 005d164d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d1654:; BB(0x005d1654);
    /* 005d1654: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d1657: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005d165d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d1660: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d1663: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d1666: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d166a: je 0x5d167f */ if (fZ) goto L_005d167f;
L_005d166c:; BB(0x005d166c);
    /* 005d166c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d166e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d1671: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1673: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d1676: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1678: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d167au); call_ind(t); }
    /* 005d167a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d167d: jmp 0x5d1686 */ goto L_005d1686;
L_005d167f:; BB(0x005d167f);
    /* 005d167f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d1686:; BB(0x005d1686);
    /* 005d1686: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d168d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d1690: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x5d1695u); f_005d7bd0();
    /* 005d1695: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1698: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d169f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d16a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d16a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d16a3: ret  */ FN_RET(0x005d15e0); r_esp += 4; return;
}

void f_005d1750(void) /* CasinoNavigationRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1750);
    /* 005d1750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1751: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1755: push 0x6a8e52 */ { u32 v = 0x6a8e52u; r_esp -= 4; W32(r_esp, v); }
    /* 005d175a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d1760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1761: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1764: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d1769: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d176b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d176c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d176f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d1775: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005d1778: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 005d177f: mov dword ptr [ebp - 0x30], 7 */ W32((u32)(r_ebp+0xffffffd0u), 0x7u);
    /* 005d1786: mov dword ptr [ebp - 0x2c], 5 */ W32((u32)(r_ebp+0xffffffd4u), 0x5u);
    /* 005d178d: mov dword ptr [ebp - 0x28], 6 */ W32((u32)(r_ebp+0xffffffd8u), 0x6u);
    /* 005d1794: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 005d179b: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 005d17a2: mov dword ptr [ebp - 0x1c], 8 */ W32((u32)(r_ebp+0xffffffe4u), 0x8u);
    /* 005d17a9: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 005d17b0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d17b7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d17ba: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5d17bfu); f_005d8230();
    /* 005d17bf: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005d17c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d17c8: je 0x5d17e8 */ if (fZ) goto L_005d17e8;
L_005d17ca:; BB(0x005d17ca);
    /* 005d17ca: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d17cd: call 0x5d2040 */ r_esp -= 4; W32(r_esp, 0x5d17d2u); f_005d2040();
    /* 005d17d2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d17d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d17da: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d17e0: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 005d17e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d17e8u); call_ind(t); }
L_005d17e8:; BB(0x005d17e8);
    /* 005d17e8: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005d17ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d17f2u); f_00686d82();
    /* 005d17f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d17f5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d17f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d17ff: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1803: je 0x5d1812 */ if (fZ) goto L_005d1812;
L_005d1805:; BB(0x005d1805);
    /* 005d1805: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d1808: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d180du); f_005f5bf0();
    /* 005d180d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005d1810: jmp 0x5d1819 */ goto L_005d1819;
L_005d1812:; BB(0x005d1812);
    /* 005d1812: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005d1819:; BB(0x005d1819);
    /* 005d1819: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d181c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005d181f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d1826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1828: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d182d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d182f: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1834: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1836: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1838: push 0x30d474 */ { u32 v = 0x30d474u; r_esp -= 4; W32(r_esp, v); }
    /* 005d183d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d183f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d1842: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1843: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d1848: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d184b: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5d1850u); f_005f9ce0();
    /* 005d1850: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1852: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d1858: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d185b: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d1860u); f_005fb2b0();
    /* 005d1860: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005d1863: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005d1866: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1868: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005d186b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005d186e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d1870u); call_ind(t); }
    /* 005d1870: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1875: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d187au); f_00686d82();
    /* 005d187a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d187d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d1880: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d1887: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d188b: je 0x5d189a */ if (fZ) goto L_005d189a;
L_005d188d:; BB(0x005d188d);
    /* 005d188d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d1890: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d1895u); f_005f5bf0();
    /* 005d1895: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005d1898: jmp 0x5d18a1 */ goto L_005d18a1;
L_005d189a:; BB(0x005d189a);
    /* 005d189a: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005d18a1:; BB(0x005d18a1);
    /* 005d18a1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005d18a4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d18a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d18ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d18b0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d18b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d18b7: push 0x7d1 */ { u32 v = 0x7d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d18bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d18be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d18c0: push 0x30d475 */ { u32 v = 0x30d475u; r_esp -= 4; W32(r_esp, v); }
    /* 005d18c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d18c7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d18ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d18cb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d18d1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d18d4: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5d18d9u); f_005f9ce0();
    /* 005d18d9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d18e0: jmp 0x5d18eb */ goto L_005d18eb;
L_005d18e2:; BB(0x005d18e2);
    /* 005d18e2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d18e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d18e8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005d18eb:; BB(0x005d18eb);
    /* 005d18eb: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d18ef: jge 0x5d1a31 */ if ((fS==fO)) goto L_005d1a31;
L_005d18f5:; BB(0x005d18f5);
    /* 005d18f5: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d18fa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d18ffu); f_00686d82();
    /* 005d18ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1902: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005d1905: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005d190c: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1910: je 0x5d192b */ if (fZ) goto L_005d192b;
L_005d1912:; BB(0x005d1912);
    /* 005d1912: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d1915: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5d191au); f_00601a80();
    /* 005d191a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d191d: mov dword ptr [ecx], 0x6d380c */ W32((u32)(r_ecx), 0x6d380cu);
    /* 005d1923: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d1926: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 005d1929: jmp 0x5d1932 */ goto L_005d1932;
L_005d192b:; BB(0x005d192b);
    /* 005d192b: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005d1932:; BB(0x005d1932);
    /* 005d1932: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005d1935: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005d1938: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d193f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1941: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1945: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1949: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d194e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1950: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1954: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005d1957: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d195a: and ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d195d: add ecx, 0x7d3 */ {  u32 a = r_ecx; u32 b = 0x7d3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1964: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1966: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1968: push 0x30d478 */ { u32 v = 0x30d478u; r_esp -= 4; W32(r_esp, v); }
    /* 005d196d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1970: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1971: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1975: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d197b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d197e: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5d1983u); f_005f9de0();
    /* 005d1983: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1986: mov eax, dword ptr [ebp + edx*4 - 0x34] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffccu));
    /* 005d198a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d198b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d198e: mov edx, dword ptr [ebp + ecx*4 - 0x34] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffccu));
    /* 005d1992: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1993: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1996: mov ecx, dword ptr [ebp + eax*4 - 0x34] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffccu));
    /* 005d199a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d199b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d199e: mov eax, dword ptr [ebp + edx*4 - 0x34] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffccu));
    /* 005d19a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d19a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d19a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d19a7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d19ad: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d19b0: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d19b5u); f_005fb300();
    /* 005d19b5: mov ecx, eax */ r_ecx = r_eax;
    /* 005d19b7: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x5d19bcu); f_006023d0();
    /* 005d19bc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d19bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d19c0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d19c6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d19c9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d19ceu); f_005fb300();
    /* 005d19ce: mov ecx, eax */ r_ecx = r_eax;
    /* 005d19d0: call 0x602eb0 */ r_esp -= 4; W32(r_esp, 0x5d19d5u); f_00602eb0();
    /* 005d19d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d19d7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d19da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d19db: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d19e0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d19e3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d19e8u); f_005fb300();
    /* 005d19e8: mov ecx, eax */ r_ecx = r_eax;
    /* 005d19ea: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x5d19efu); f_00602790();
    /* 005d19ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d19f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d19f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d19f5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d19fb: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d19fe: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d1a03u); f_005fb300();
    /* 005d1a03: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1a05: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5d1a0au); f_005eb700();
    /* 005d1a0a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1a0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a0e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d1a14: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d1a17: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d1a1cu); f_005fb300();
    /* 005d1a1c: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005d1a1f: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d1a22: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1a24: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d1a27: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005d1a2a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d1a2cu); call_ind(t); }
    /* 005d1a2c: jmp 0x5d18e2 */ goto L_005d18e2;
L_005d1a31:; BB(0x005d1a31);
    /* 005d1a31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a33: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a3a: push 0x7da */ { u32 v = 0x7dau; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a43: push 0x30d476 */ { u32 v = 0x30d476u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a48: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a4c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d1a51: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d1a54: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5d1a59u); f_005f9ce0();
    /* 005d1a59: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a5b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d1a61: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d1a64: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d1a69u); f_005fb2b0();
    /* 005d1a69: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005d1a6c: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005d1a6f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1a71: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005d1a74: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005d1a77: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d1a79u); call_ind(t); }
    /* 005d1a79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a7b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a82: push 0x7d2 */ { u32 v = 0x7d2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a8b: push 0x30d477 */ { u32 v = 0x30d477u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a90: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a94: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d1a99: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d1a9c: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5d1aa1u); f_005f9ce0();
    /* 005d1aa1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1aa3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d1aa9: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d1aac: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d1ab1u); f_005fb2b0();
    /* 005d1ab1: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005d1ab4: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d1ab7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1ab9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d1abc: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005d1abf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d1ac1u); call_ind(t); }
    /* 005d1ac1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d1ac7: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x5d1accu); f_00636760();
    /* 005d1acc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d1acf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1ad1: je 0x5d1aed */ if (fZ) goto L_005d1aed;
L_005d1ad3:; BB(0x005d1ad3);
    /* 005d1ad3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ad5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ad7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ad9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1adb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1add: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d1ae0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1ae2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d1ae5: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 005d1aeb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d1aedu); call_ind(t); }
L_005d1aed:; BB(0x005d1aed);
    /* 005d1aed: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1aef: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d1af4u); f_00686d82();
    /* 005d1af4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1af7: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005d1afa: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005d1b01: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1b05: je 0x5d1b22 */ if (fZ) goto L_005d1b22;
L_005d1b07:; BB(0x005d1b07);
    /* 005d1b07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b09: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1b0c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5d1b11u); f_005fc0d0();
    /* 005d1b11: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1b14: mov dword ptr [ecx], 0x6d37e4 */ W32((u32)(r_ecx), 0x6d37e4u);
    /* 005d1b1a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1b1d: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005d1b20: jmp 0x5d1b29 */ goto L_005d1b29;
L_005d1b22:; BB(0x005d1b22);
    /* 005d1b22: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005d1b29:; BB(0x005d1b29);
    /* 005d1b29: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005d1b2c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005d1b2f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d1b36: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d1b39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b3a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d1b3d: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5d1b42u); f_005f1b70();
    /* 005d1b42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1b45: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d1b4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d1b4d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1b4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1b50: ret  */ FN_RET(0x005d1750); r_esp += 4; return;
}

void f_005d1b60(void) /* CasinoNavigationRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1b60);
    /* 005d1b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1b63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1b66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1b69: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d1b6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d1b6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1b72: sub ecx, 0x186a1 */ {  u32 a = r_ecx; u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1b78: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d1b7b: cmp dword ptr [ebp - 8], 0x36 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d1b7f: ja 0x5d1cf1 */ if ((!fC&&!fZ)) goto L_005d1cf1;
L_005d1b85:; BB(0x005d1b85);
    /* 005d1b85: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1b88: movzx eax, byte ptr [edx + 0x5d1d1c] */ r_eax = (u32)R8((u32)(r_edx+0x5d1d1cu));
    /* 005d1b8f: jmp dword ptr [eax*4 + 0x5d1d08] */ { u32 t = R32((u32)(r_eax*4+0x5d1d08u)); switch (t) { case 0x5d1b96u: goto L_005d1b96; case 0x5d1c0du: goto L_005d1c0d; case 0x5d1c53u: goto L_005d1c53; case 0x5d1c8bu: goto L_005d1c8b; case 0x5d1cf1u: goto L_005d1cf1; default: UNSUP(0x005d1b8f, "jump table entry is not a known target"); } }
L_005d1b96:; BB(0x005d1b96);
    /* 005d1b96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b98: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1b9d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1ba2u); f_005fe640();
    /* 005d1ba2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ba4: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ba9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1bac: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1bb1u); f_005fe640();
    /* 005d1bb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bb3: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1bbb: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1bc0u); f_005fe640();
    /* 005d1bc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bc2: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1bca: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1bcfu); f_005fe640();
    /* 005d1bcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bd1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bd5: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1bdd: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1be2u); f_005fe240();
    /* 005d1be2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1be4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1be6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1be8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1bf0: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1bf5u); f_005fe240();
    /* 005d1bf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bf7: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bfe: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c03: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1c08u); f_005fe240();
    /* 005d1c08: jmp 0x5d1cf1 */ goto L_005d1cf1;
L_005d1c0d:; BB(0x005d1c0d);
    /* 005d1c0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c0f: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c11: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c14: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1c19u); f_005fe640();
    /* 005d1c19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c1b: push 0x186c1 */ { u32 v = 0x186c1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c20: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c23: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1c28u); f_005fe640();
    /* 005d1c28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c2a: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c2c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c2e: push 0x186c0 */ { u32 v = 0x186c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c36: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1c3bu); f_005fe240();
    /* 005d1c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c3d: push 0x186c0 */ { u32 v = 0x186c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c42: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c44: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c46: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c49: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1c4eu); f_005fe240();
    /* 005d1c4e: jmp 0x5d1cf1 */ goto L_005d1cf1;
L_005d1c53:; BB(0x005d1c53);
    /* 005d1c53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c55: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c57: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c5a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1c5fu); f_005fe640();
    /* 005d1c5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c61: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c66: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c69: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1c6eu); f_005fe640();
    /* 005d1c6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c70: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c75: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c78: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1c7du); f_005fe640();
    /* 005d1c7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c7f: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c84: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1c89u); f_005fe640();
    /* 005d1c89: jmp 0x5d1cf1 */ goto L_005d1cf1;
L_005d1c8b:; BB(0x005d1c8b);
    /* 005d1c8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c8d: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1c92: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1c97u); f_005fe640();
    /* 005d1c97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c99: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005d1c9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1ca1: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1ca6u); f_005fe640();
    /* 005d1ca6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ca8: push 0x186d9 */ { u32 v = 0x186d9u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1cb0: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5d1cb5u); f_005fe640();
    /* 005d1cb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cb7: push 0x186d6 */ { u32 v = 0x186d6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cbe: push 0x186dd */ { u32 v = 0x186ddu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cc3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1cc6: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1ccbu); f_005fe240();
    /* 005d1ccb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ccd: push 0x186dd */ { u32 v = 0x186ddu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cd2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cd4: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1cd9: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1cdeu); f_005fe240();
    /* 005d1cde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ce0: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ce2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ce4: push 0x186de */ { u32 v = 0x186deu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ce9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d1cec: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d1cf1u); f_005fe240();
L_005d1cf1:; BB(0x005d1cf1);
    /* 005d1cf1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d1cf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cf5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d1cf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1cfc: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5d1d01u); f_005d8670();
    /* 005d1d01: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1d03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1d04: ret 8 */ FN_RET(0x005d1b60); r_esp += 12; return;
}

void f_005d20f0(void) /* CasinoNavigationRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d20f0);
    /* 005d20f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d20f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d20f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d20f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d20f7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d20fb: jne 0x5d214c */ if (!fZ) goto L_005d214c;
L_005d20fd:; BB(0x005d20fd);
    /* 005d20fd: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005d2104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2106: je 0x5d2130 */ if (fZ) goto L_005d2130;
L_005d2108:; BB(0x005d2108);
    /* 005d2108: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d210a: push 0x6d3a44 */ { u32 v = 0x6d3a44u; r_esp -= 4; W32(r_esp, v); }
    /* 005d210f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d2114u); f_00630f40();
    /* 005d2114: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2117: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2118: push 0x6d3a2c */ { u32 v = 0x6d3a2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d211d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d2122u); f_00630f40();
    /* 005d2122: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2126: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5d212bu); f_0062ff10();
    /* 005d212b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d212e: jmp 0x5d2178 */ goto L_005d2178;
L_005d2130:; BB(0x005d2130);
    /* 005d2130: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2132: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2134: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d213a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d213c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d2142: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005d2148: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d214au); call_ind(t); }
    /* 005d214a: jmp 0x5d2178 */ goto L_005d2178;
L_005d214c:; BB(0x005d214c);
    /* 005d214c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2150: jle 0x5d2166 */ if ((fZ||fS!=fO)) goto L_005d2166;
L_005d2152:; BB(0x005d2152);
    /* 005d2152: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2156: jge 0x5d2166 */ if ((fS==fO)) goto L_005d2166;
L_005d2158:; BB(0x005d2158);
    /* 005d2158: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d215b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d215c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d215f: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2164u); f_005d16b0();
    /* 005d2164: jmp 0x5d2178 */ goto L_005d2178;
L_005d2166:; BB(0x005d2166);
    /* 005d2166: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d216a: jl 0x5d2178 */ if ((fS!=fO)) goto L_005d2178;
L_005d216c:; BB(0x005d216c);
    /* 005d216c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d216f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2170: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2173: call 0x5d2370 */ r_esp -= 4; W32(r_esp, 0x5d2178u); f_005d2370();
L_005d2178:; BB(0x005d2178);
    /* 005d2178: mov esp, ebp */ r_esp = r_ebp;
    /* 005d217a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d217b: ret 4 */ FN_RET(0x005d20f0); r_esp += 8; return;
}

void f_005d2310(void) /* CasinoNavigationRoom::vfunc41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2310);
    /* 005d2310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2311: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2316: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d2319: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2320: je 0x5d2334 */ if (fZ) goto L_005d2334;
L_005d2322:; BB(0x005d2322);
    /* 005d2322: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 005d2328: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5d232du); f_005f8910();
    /* 005d232d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d2330: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2332: jne 0x5d2358 */ if (!fZ) goto L_005d2358;
L_005d2334:; BB(0x005d2334);
    /* 005d2334: cmp dword ptr [0x16306a4], 0 */ {  u32 a = R32((u32)(0x16306a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d233b: je 0x5d234f */ if (fZ) goto L_005d234f;
L_005d233d:; BB(0x005d233d);
    /* 005d233d: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 005d2343: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5d2348u); f_005f8910();
    /* 005d2348: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d234b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d234d: jne 0x5d2358 */ if (!fZ) goto L_005d2358;
L_005d234f:; BB(0x005d234f);
    /* 005d234f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d2356: jmp 0x5d235f */ goto L_005d235f;
L_005d2358:; BB(0x005d2358);
    /* 005d2358: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005d235f:; BB(0x005d235f);
    /* 005d235f: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005d2362: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2365: ret  */ FN_RET(0x005d2310); r_esp += 4; return;
}

void f_005d43f0(void) /* CasinoNavigationRoom::vfunc190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d43f0);
    /* 005d43f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d43f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d43f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d43f5: push 0x6a8f23 */ { u32 v = 0x6a8f23u; r_esp -= 4; W32(r_esp, v); }
    /* 005d43fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d4400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4401: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4404: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d4409: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d440b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d440c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d440f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d4415: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d4418: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d441b: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4422: jne 0x5d446e */ if (!fZ) goto L_005d446e;
L_005d4424:; BB(0x005d4424);
    /* 005d4424: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4429: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d442eu); f_00686d82();
    /* 005d442e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4431: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d4434: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d443b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d443f: je 0x5d444e */ if (fZ) goto L_005d444e;
L_005d4441:; BB(0x005d4441);
    /* 005d4441: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4444: call 0x5d48c0 */ r_esp -= 4; W32(r_esp, 0x5d4449u); f_005d48c0();
    /* 005d4449: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d444c: jmp 0x5d4455 */ goto L_005d4455;
L_005d444e:; BB(0x005d444e);
    /* 005d444e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d4455:; BB(0x005d4455);
    /* 005d4455: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d4458: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d445b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d4462: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4465: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4468: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
L_005d446e:; BB(0x005d446e);
    /* 005d446e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4470: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4477: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4479: push 0x10cccd */ { u32 v = 0x10cccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d447e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4481: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005d4487: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d448cu); f_005eae80();
    /* 005d448c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d448f: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005d4495: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5d449au); f_005eb240();
    /* 005d449a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d449b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d449e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d44a4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d44a7: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005d44ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d44af: mov ecx, eax */ r_ecx = r_eax;
    /* 005d44b1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005d44b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d44b9u); call_ind(t); }
    /* 005d44b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d44bc: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005d44c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d44c5: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005d44cb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d44cd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d44d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d44d2u); call_ind(t); }
    /* 005d44d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d44d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d44dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d44dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005d44df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d44e0: ret  */ FN_RET(0x005d43f0); r_esp += 4; return;
}

