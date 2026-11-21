#include "protos.h"

void f_00645050(void) /* sub_645050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00645050);
    /* 00645050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645051: mov ebp, esp */ r_ebp = r_esp;
    /* 00645053: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645056: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00645059: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00645060: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00645067: jmp 0x645072 */ goto L_00645072;
L_00645069:; BB(0x00645069);
    /* 00645069: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064506c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064506f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00645072:; BB(0x00645072);
    /* 00645072: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00645075: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645078: jge 0x645094 */ if ((fS==fO)) goto L_00645094;
L_0064507a:; BB(0x0064507a);
    /* 0064507a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064507d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064507e: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00645083: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00645083, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00645083, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00645085: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00645088: add eax, dword ptr [edx*8 + 0x7634a0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*8+0x7634a0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064508f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00645092: jmp 0x645069 */ goto L_00645069;
L_00645094:; BB(0x00645094);
    /* 00645094: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00645097: mov esp, ebp */ r_esp = r_ebp;
    /* 00645099: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064509a: ret 4 */ FN_RET(0x00645050); r_esp += 8; return;
}

void f_006450a0(void) /* sub_6450A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006450a0);
    /* 006450a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006450a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006450a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006450a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006450a9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006450b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006450b7: jmp 0x6450c2 */ goto L_006450c2;
L_006450b9:; BB(0x006450b9);
    /* 006450b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006450bc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006450bf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006450c2:; BB(0x006450c2);
    /* 006450c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006450c5: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006450c8: jge 0x6450e4 */ if ((fS==fO)) goto L_006450e4;
L_006450ca:; BB(0x006450ca);
    /* 006450ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006450cd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006450ce: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 006450d3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006450d3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006450d3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006450d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006450d8: add eax, dword ptr [edx*8 + 0x76350c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*8+0x76350cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006450df: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006450e2: jmp 0x6450b9 */ goto L_006450b9;
L_006450e4:; BB(0x006450e4);
    /* 006450e4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006450e7: mov esp, ebp */ r_esp = r_ebp;
    /* 006450e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006450ea: ret 4 */ FN_RET(0x006450a0); r_esp += 8; return;
}

void f_006450f0(void) /* sub_6450F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006450f0);
    /* 006450f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006450f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006450f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006450f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006450f9: mov dword ptr [ebp - 4], 0x3ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3ffu);
    /* 00645100: jmp 0x64510b */ goto L_0064510b;
L_00645102:; BB(0x00645102);
    /* 00645102: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00645105: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00645108: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064510b:; BB(0x0064510b);
    /* 0064510b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064510f: jl 0x645144 */ if ((fS!=fO)) goto L_00645144;
L_00645111:; BB(0x00645111);
    /* 00645111: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00645114: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00645117: cmp dword ptr [edx + ecx*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064511f: je 0x645142 */ if (fZ) goto L_00645142;
L_00645121:; BB(0x00645121);
    /* 00645121: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00645124: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00645127: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0064512e: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x645133u); f_005f54a0();
    /* 00645133: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00645136: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645138: je 0x645142 */ if (fZ) goto L_00645142;
L_0064513a:; BB(0x0064513a);
    /* 0064513a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064513d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645140: jmp 0x645146 */ goto L_00645146;
L_00645142:; BB(0x00645142);
    /* 00645142: jmp 0x645102 */ goto L_00645102;
L_00645144:; BB(0x00645144);
    /* 00645144: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00645146:; BB(0x00645146);
    /* 00645146: mov esp, ebp */ r_esp = r_ebp;
    /* 00645148: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645149: ret  */ FN_RET(0x006450f0); r_esp += 4; return;
}

void f_00645820(void) /* sub_645820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00645820);
    /* 00645820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645821: mov ebp, esp */ r_ebp = r_esp;
    /* 00645823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645825: push 0x6abe5e */ { u32 v = 0x6abe5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064582a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645831: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645837: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064583c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064583e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064583f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00645842: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00645848: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0064584e: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645854: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00645857: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0064585a: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645860: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645864: je 0x64589e */ if (fZ) goto L_0064589e;
L_00645866:; BB(0x00645866);
    /* 00645866: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0064586c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0064586f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00645872: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00645875: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00645878: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064587c: je 0x645894 */ if (fZ) goto L_00645894;
L_0064587e:; BB(0x0064587e);
    /* 0064587e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645880: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645883: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645885: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645888: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064588a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64588cu); call_ind(t); }
    /* 0064588c: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00645892: jmp 0x64589e */ goto L_0064589e;
L_00645894:; BB(0x00645894);
    /* 00645894: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0064589e:; BB(0x0064589e);
    /* 0064589e: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 006458a3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6458a8u); f_00686d82();
    /* 006458a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006458ab: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006458ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006458b5: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006458b9: je 0x6458d6 */ if (fZ) goto L_006458d6;
L_006458bb:; BB(0x006458bb);
    /* 006458bb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006458be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006458bf: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 006458c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006458c6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006458c9: call 0x648c70 */ r_esp -= 4; W32(r_esp, 0x6458ceu); f_00648c70();
    /* 006458ce: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 006458d4: jmp 0x6458e0 */ goto L_006458e0;
L_006458d6:; BB(0x006458d6);
    /* 006458d6: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_006458e0:; BB(0x006458e0);
    /* 006458e0: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 006458e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006458e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006458f0: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006458f6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006458f9: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006458fc: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 006458fe: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645904: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00645907: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0064590d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00645910: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00645912: mov ecx, eax */ r_ecx = r_eax;
    /* 00645914: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00645917: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645919u); call_ind(t); }
    /* 00645919: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064591b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645921: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00645924: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x645929u); f_005eb700();
    /* 00645929: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0064592b: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645931: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00645934: call 0x5eb720 */ r_esp -= 4; W32(r_esp, 0x645939u); f_005eb720();
    /* 00645939: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0064593f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00645942: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645948: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064594b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064594d: mov ecx, eax */ r_ecx = r_eax;
    /* 0064594f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00645952: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645954u); call_ind(t); }
    /* 00645954: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0064595a: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064595e: je 0x645998 */ if (fZ) goto L_00645998;
L_00645960:; BB(0x00645960);
    /* 00645960: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645966: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00645969: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064596c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064596f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00645972: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645976: je 0x64598e */ if (fZ) goto L_0064598e;
L_00645978:; BB(0x00645978);
    /* 00645978: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064597a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064597d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064597f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645982: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645984: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645986u); call_ind(t); }
    /* 00645986: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0064598c: jmp 0x645998 */ goto L_00645998;
L_0064598e:; BB(0x0064598e);
    /* 0064598e: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00645998:; BB(0x00645998);
    /* 00645998: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 0064599d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6459a2u); f_00686d82();
    /* 006459a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006459a5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006459a8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006459af: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006459b3: je 0x6459d0 */ if (fZ) goto L_006459d0;
L_006459b5:; BB(0x006459b5);
    /* 006459b5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006459b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006459b9: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006459bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006459c0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006459c3: call 0x648c70 */ r_esp -= 4; W32(r_esp, 0x6459c8u); f_00648c70();
    /* 006459c8: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 006459ce: jmp 0x6459da */ goto L_006459da;
L_006459d0:; BB(0x006459d0);
    /* 006459d0: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_006459da:; BB(0x006459da);
    /* 006459da: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 006459e0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006459e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006459ea: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 006459f0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006459f3: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006459f6: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 006459f8: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 006459fe: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00645a01: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645a07: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00645a0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645a0c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00645a0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645a11u); call_ind(t); }
    /* 00645a11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645a13: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645a19: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00645a1c: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x645a21u); f_005eb700();
    /* 00645a21: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00645a23: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645a29: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00645a2c: call 0x5eb720 */ r_esp -= 4; W32(r_esp, 0x645a31u); f_005eb720();
    /* 00645a31: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645a37: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00645a3a: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645a40: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00645a43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00645a45: mov ecx, eax */ r_ecx = r_eax;
    /* 00645a47: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00645a4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645a4cu); call_ind(t); }
    /* 00645a4c: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 00645a51: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x645a56u); f_00686d82();
    /* 00645a56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645a59: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00645a5c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00645a63: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645a67: je 0x645a80 */ if (fZ) goto L_00645a80;
L_00645a69:; BB(0x00645a69);
    /* 00645a69: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645a6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645a70: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00645a73: call 0x648ec0 */ r_esp -= 4; W32(r_esp, 0x645a78u); f_00648ec0();
    /* 00645a78: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00645a7e: jmp 0x645a8a */ goto L_00645a8a;
L_00645a80:; BB(0x00645a80);
    /* 00645a80: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00645a8a:; BB(0x00645a8a);
    /* 00645a8a: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00645a90: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00645a93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645a9a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00645a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645a9e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645aa4: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00645aa7: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x645aacu); f_005f5df0();
    /* 00645aac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00645aae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00645ab0: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645ab6: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00645ab9: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00645abf: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645ac5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00645ac8: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00645ace: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00645ad0: mov ecx, edx */ r_ecx = r_edx;
    /* 00645ad2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00645ad5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645ad7u); call_ind(t); }
    /* 00645ad7: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645add: mov byte ptr [eax + 0x10], 0 */ W8((u32)(r_eax+0x10u), 0x0u);
    /* 00645ae1: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645ae7: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645aeb: jne 0x645b40 */ if (!fZ) goto L_00645b40;
L_00645aed:; BB(0x00645aed);
    /* 00645aed: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00645af2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x645af7u); f_00686d82();
    /* 00645af7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645afa: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00645afd: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00645b04: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645b08: je 0x645b1a */ if (fZ) goto L_00645b1a;
L_00645b0a:; BB(0x00645b0a);
    /* 00645b0a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00645b0d: call 0x6640c0 */ r_esp -= 4; W32(r_esp, 0x645b12u); f_006640c0();
    /* 00645b12: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00645b18: jmp 0x645b24 */ goto L_00645b24;
L_00645b1a:; BB(0x00645b1a);
    /* 00645b1a: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00645b24:; BB(0x00645b24);
    /* 00645b24: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00645b2a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00645b2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645b34: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645b3a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00645b3d: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
L_00645b40:; BB(0x00645b40);
    /* 00645b40: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645b46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645b47: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645b4d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00645b50: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00645b53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645b54: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645b5a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00645b5d: call 0x664200 */ r_esp -= 4; W32(r_esp, 0x645b62u); f_00664200();
    /* 00645b62: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00645b64: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645b6a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00645b6d: call 0x664480 */ r_esp -= 4; W32(r_esp, 0x645b72u); f_00664480();
    /* 00645b72: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645b78: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00645b7b: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00645b7e: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00645b81: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x645b86u); f_0063aac0();
    /* 00645b86: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00645b88: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00645b8e: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645b95: jne 0x645c06 */ if (!fZ) goto L_00645c06;
L_00645b97:; BB(0x00645b97);
    /* 00645b97: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645b9d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00645ba0: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x645ba5u); f_0057a470();
    /* 00645ba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645ba6: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645bac: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00645baf: call 0x664300 */ r_esp -= 4; W32(r_esp, 0x645bb4u); f_00664300();
    /* 00645bb4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00645bb7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645bb9: jne 0x645c06 */ if (!fZ) goto L_00645c06;
L_00645bbb:; BB(0x00645bbb);
    /* 00645bbb: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645bc1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00645bc4: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00645bca: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00645bcf: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00645bd5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x645bdau); f_0063aac0();
    /* 00645bda: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645bdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645bde: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x645be3u); f_00686d8e();
    /* 00645be3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645be6: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645bec: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00645bef: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00645bf5: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00645bfb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x645c00u); f_0063aac0();
    /* 00645c00: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
L_00645c06:; BB(0x00645c06);
    /* 00645c06: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645c0c: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645c10: je 0x645c4a */ if (fZ) goto L_00645c4a;
L_00645c12:; BB(0x00645c12);
    /* 00645c12: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645c18: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00645c1b: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00645c1e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00645c21: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00645c24: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645c28: je 0x645c40 */ if (fZ) goto L_00645c40;
L_00645c2a:; BB(0x00645c2a);
    /* 00645c2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645c2c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00645c2f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00645c31: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00645c34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645c36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645c38u); call_ind(t); }
    /* 00645c38: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00645c3e: jmp 0x645c4a */ goto L_00645c4a;
L_00645c40:; BB(0x00645c40);
    /* 00645c40: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00645c4a:; BB(0x00645c4a);
    /* 00645c4a: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00645c4f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x645c54u); f_00686d82();
    /* 00645c54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645c57: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00645c5a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00645c61: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645c65: je 0x645c82 */ if (fZ) goto L_00645c82;
L_00645c67:; BB(0x00645c67);
    /* 00645c67: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00645c6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645c6b: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645c71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645c72: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00645c75: call 0x64aab0 */ r_esp -= 4; W32(r_esp, 0x645c7au); f_0064aab0();
    /* 00645c7a: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00645c80: jmp 0x645c8c */ goto L_00645c8c;
L_00645c82:; BB(0x00645c82);
    /* 00645c82: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00645c8c:; BB(0x00645c8c);
    /* 00645c8c: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 00645c92: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00645c95: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645c9c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645ca2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645ca5: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00645ca8: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645cae: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00645cb1: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645cb7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00645cba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00645cbc: mov ecx, eax */ r_ecx = r_eax;
    /* 00645cbe: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00645cc1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645cc3u); call_ind(t); }
    /* 00645cc3: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645cc9: call 0x646ea0 */ r_esp -= 4; W32(r_esp, 0x645cceu); f_00646ea0();
    /* 00645cce: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645cd4: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645cda: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00645cdd: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645ce3: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00645ce6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00645ce8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00645ceb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645cedu); call_ind(t); }
    /* 00645ced: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645cf3: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00645cf6: mov byte ptr [ecx + 0x2a], dl */ W8((u32)(r_ecx+0x2au), (u8)r_edx);
    /* 00645cf9: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645cff: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00645d06: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645d0c: mov dl, byte ptr [ebp + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 00645d0f: mov byte ptr [ecx + 0x2b], dl */ W8((u32)(r_ecx+0x2bu), (u8)r_edx);
    /* 00645d12: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645d18: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 00645d1b: mov byte ptr [eax + 0x2c], cl */ W8((u32)(r_eax+0x2cu), (u8)r_ecx);
    /* 00645d1e: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645d24: movzx eax, byte ptr [edx + 0x2a] */ r_eax = (u32)R8((u32)(r_edx+0x2au));
    /* 00645d28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645d2a: jne 0x645d31 */ if (!fZ) goto L_00645d31;
L_00645d2c:; BB(0x00645d2c);
    /* 00645d2c: jmp 0x64613f */ goto L_0064613f;
L_00645d31:; BB(0x00645d31);
    /* 00645d31: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645d37: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645d3b: je 0x645d82 */ if (fZ) goto L_00645d82;
L_00645d3d:; BB(0x00645d3d);
    /* 00645d3d: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645d43: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00645d46: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00645d49: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00645d4c: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00645d4f: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645d53: je 0x645d6b */ if (fZ) goto L_00645d6b;
L_00645d55:; BB(0x00645d55);
    /* 00645d55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645d57: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00645d5a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645d5c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00645d5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645d61: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645d63u); call_ind(t); }
    /* 00645d63: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00645d69: jmp 0x645d75 */ goto L_00645d75;
L_00645d6b:; BB(0x00645d6b);
    /* 00645d6b: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00645d75:; BB(0x00645d75);
    /* 00645d75: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645d7b: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_00645d82:; BB(0x00645d82);
    /* 00645d82: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00645d88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00645d8a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00645d90: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00645d96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645d98u); call_ind(t); }
    /* 00645d98: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00645d9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645d9d: je 0x645ebf */ if (fZ) goto L_00645ebf;
L_00645da3:; BB(0x00645da3);
    /* 00645da3: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645da9: movzx eax, byte ptr [edx + 0x2b] */ r_eax = (u32)R8((u32)(r_edx+0x2bu));
    /* 00645dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645daf: je 0x645ebf */ if (fZ) goto L_00645ebf;
L_00645db5:; BB(0x00645db5);
    /* 00645db5: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645dbb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00645dbe: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00645dc4: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00645dca: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x645dcfu); f_0063aac0();
    /* 00645dcf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00645dd1: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00645dd7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00645dd9: cmp dword ptr [ebp - 0x94], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645de0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00645de3: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00645de6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645de8: je 0x645ebf */ if (fZ) goto L_00645ebf;
L_00645dee:; BB(0x00645dee);
    /* 00645dee: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00645df3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645df5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00645dfb: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00645e01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645e03u); call_ind(t); }
    /* 00645e03: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00645e06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645e08: je 0x645e1c */ if (fZ) goto L_00645e1c;
L_00645e0a:; BB(0x00645e0a);
    /* 00645e0a: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645e10: movzx eax, byte ptr [edx + 0x2c] */ r_eax = (u32)R8((u32)(r_edx+0x2cu));
    /* 00645e14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645e16: jne 0x645ebf */ if (!fZ) goto L_00645ebf;
L_00645e1c:; BB(0x00645e1c);
    /* 00645e1c: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00645e21: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x645e26u); f_00686d82();
    /* 00645e26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645e29: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00645e2c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00645e33: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645e37: je 0x645e54 */ if (fZ) goto L_00645e54;
L_00645e39:; BB(0x00645e39);
    /* 00645e39: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00645e3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645e3d: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645e43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645e44: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00645e47: call 0x64bf00 */ r_esp -= 4; W32(r_esp, 0x645e4cu); f_0064bf00();
    /* 00645e4c: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00645e52: jmp 0x645e5e */ goto L_00645e5e;
L_00645e54:; BB(0x00645e54);
    /* 00645e54: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00645e5e:; BB(0x00645e5e);
    /* 00645e5e: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00645e64: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00645e67: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645e6e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645e74: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00645e77: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00645e7a: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645e80: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00645e83: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645e89: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00645e8c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00645e8e: mov ecx, eax */ r_ecx = r_eax;
    /* 00645e90: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00645e93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645e95u); call_ind(t); }
    /* 00645e95: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645e9b: call 0x646ea0 */ r_esp -= 4; W32(r_esp, 0x645ea0u); f_00646ea0();
    /* 00645ea0: add eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645ea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645ea6: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645eac: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00645eaf: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645eb5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00645eb8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00645eba: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00645ebd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645ebfu); call_ind(t); }
L_00645ebf:; BB(0x00645ebf);
    /* 00645ebf: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645ec5: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645ec9: je 0x645f10 */ if (fZ) goto L_00645f10;
L_00645ecb:; BB(0x00645ecb);
    /* 00645ecb: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645ed1: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00645ed4: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00645ed7: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00645eda: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00645edd: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645ee1: je 0x645ef9 */ if (fZ) goto L_00645ef9;
L_00645ee3:; BB(0x00645ee3);
    /* 00645ee3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645ee5: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00645ee8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645eea: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00645eed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645eef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645ef1u); call_ind(t); }
    /* 00645ef1: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00645ef7: jmp 0x645f03 */ goto L_00645f03;
L_00645ef9:; BB(0x00645ef9);
    /* 00645ef9: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00645f03:; BB(0x00645f03);
    /* 00645f03: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645f09: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00645f10:; BB(0x00645f10);
    /* 00645f10: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645f16: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645f1a: je 0x645f61 */ if (fZ) goto L_00645f61;
L_00645f1c:; BB(0x00645f1c);
    /* 00645f1c: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645f22: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00645f25: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00645f28: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00645f2b: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00645f2e: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645f32: je 0x645f4a */ if (fZ) goto L_00645f4a;
L_00645f34:; BB(0x00645f34);
    /* 00645f34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645f36: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00645f39: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645f3b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00645f3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645f40: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645f42u); call_ind(t); }
    /* 00645f42: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00645f48: jmp 0x645f54 */ goto L_00645f54;
L_00645f4a:; BB(0x00645f4a);
    /* 00645f4a: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_00645f54:; BB(0x00645f54);
    /* 00645f54: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00645f5a: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_00645f61:; BB(0x00645f61);
    /* 00645f61: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00645f67: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00645f69: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00645f6f: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00645f75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645f77u); call_ind(t); }
    /* 00645f77: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00645f7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645f7c: je 0x64613f */ if (fZ) goto L_0064613f;
L_00645f82:; BB(0x00645f82);
    /* 00645f82: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00645f88: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645f8a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00645f90: mov edx, dword ptr [eax + 0x1e0] */ r_edx = R32((u32)(r_eax+0x1e0u));
    /* 00645f96: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645f98u); call_ind(t); }
    /* 00645f98: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00645f9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645f9d: je 0x64613f */ if (fZ) goto L_0064613f;
L_00645fa3:; BB(0x00645fa3);
    /* 00645fa3: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645fa9: movzx edx, byte ptr [ecx + 0x2c] */ r_edx = (u32)R8((u32)(r_ecx+0x2cu));
    /* 00645fad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645faf: je 0x64613f */ if (fZ) goto L_0064613f;
L_00645fb5:; BB(0x00645fb5);
    /* 00645fb5: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00645fba: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x645fbfu); f_00686d82();
    /* 00645fbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645fc2: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00645fc5: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00645fcc: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645fd0: je 0x645fef */ if (fZ) goto L_00645fef;
L_00645fd2:; BB(0x00645fd2);
    /* 00645fd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645fd4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00645fd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645fd8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00645fde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645fdf: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00645fe2: call 0x64c070 */ r_esp -= 4; W32(r_esp, 0x645fe7u); f_0064c070();
    /* 00645fe7: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00645fed: jmp 0x645ff9 */ goto L_00645ff9;
L_00645fef:; BB(0x00645fef);
    /* 00645fef: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00645ff9:; BB(0x00645ff9);
    /* 00645ff9: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 00645fff: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00646002: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00646009: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0064600f: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00646012: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00646015: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0064601b: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0064601e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00646024: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00646027: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646029: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0064602c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64602eu); call_ind(t); }
    /* 0064602e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00646034: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00646037: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064603a: lea ecx, [eax + eax + 0x31] */ r_ecx = (u32)(r_eax+r_eax+0x31u);
    /* 0064603e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064603f: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00646045: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00646048: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x64604du); f_006026f0();
    /* 0064604d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00646053: call 0x646ea0 */ r_esp -= 4; W32(r_esp, 0x646058u); f_00646ea0();
    /* 00646058: add eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064605d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064605e: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00646064: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00646067: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0064606d: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00646070: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646072: mov ecx, eax */ r_ecx = r_eax;
    /* 00646074: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00646077: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646079u); call_ind(t); }
    /* 00646079: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064607e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x646083u); f_00686d82();
    /* 00646083: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646086: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00646089: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00646090: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646094: je 0x6460b3 */ if (fZ) goto L_006460b3;
L_00646096:; BB(0x00646096);
    /* 00646096: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00646098: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064609b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064609c: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 006460a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006460a3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006460a6: call 0x64c070 */ r_esp -= 4; W32(r_esp, 0x6460abu); f_0064c070();
    /* 006460ab: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 006460b1: jmp 0x6460bd */ goto L_006460bd;
L_006460b3:; BB(0x006460b3);
    /* 006460b3: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_006460bd:; BB(0x006460bd);
    /* 006460bd: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 006460c3: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 006460c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006460cd: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006460d3: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 006460d6: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006460d9: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 006460df: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006460e2: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 006460e8: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006460eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006460ed: mov ecx, eax */ r_ecx = r_eax;
    /* 006460ef: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 006460f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6460f4u); call_ind(t); }
    /* 006460f4: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006460fa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006460fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00646100: lea ecx, [eax + eax + 0x32] */ r_ecx = (u32)(r_eax+r_eax+0x32u);
    /* 00646104: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646105: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0064610b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 0064610e: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x646113u); f_006026f0();
    /* 00646113: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00646119: call 0x646ea0 */ r_esp -= 4; W32(r_esp, 0x64611eu); f_00646ea0();
    /* 0064611e: add eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646124: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0064612a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0064612d: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00646133: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00646136: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646138: mov ecx, eax */ r_ecx = r_eax;
    /* 0064613a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064613d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64613fu); call_ind(t); }
L_0064613f:; BB(0x0064613f);
    /* 0064613f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646142: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00646149: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064614a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064614c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064614d: ret 0x14 */ FN_RET(0x00645820); r_esp += 24; return;
}

