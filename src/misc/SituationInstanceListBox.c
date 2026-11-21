#include "protos.h"

void f_0066aa80(void) /* SituationInstanceListBox::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066aa80);
    /* 0066aa80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa81: mov ebp, esp */ r_ebp = r_esp;
    /* 0066aa83: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066aa86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066aa8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066aa8d: call 0x615ef0 */ r_esp -= 4; W32(r_esp, 0x66aa92u); f_00615ef0();
    /* 0066aa92: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066aa95: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0066aa9b: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0066aa9e: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66aaa3u); f_00615260();
    /* 0066aaa3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aaa6: jne 0x66aaad */ if (!fZ) goto L_0066aaad;
L_0066aaa8:; BB(0x0066aaa8);
    /* 0066aaa8: jmp 0x66ac27 */ goto L_0066ac27;
L_0066aaad:; BB(0x0066aaad);
    /* 0066aaad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066aab0: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0066aab6: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0066aab9: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x66aabeu); f_00606570();
    /* 0066aabe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066aac1: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aac5: je 0x66aae0 */ if (fZ) goto L_0066aae0;
L_0066aac7:; BB(0x0066aac7);
    /* 0066aac7: cmp dword ptr [ebp - 0x24], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aacb: je 0x66ab91 */ if (fZ) goto L_0066ab91;
L_0066aad1:; BB(0x0066aad1);
    /* 0066aad1: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aad5: je 0x66ac05 */ if (fZ) goto L_0066ac05;
L_0066aadb:; BB(0x0066aadb);
    /* 0066aadb: jmp 0x66ac27 */ goto L_0066ac27;
L_0066aae0:; BB(0x0066aae0);
    /* 0066aae0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066aae3: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0066aae9: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066aaec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066aaef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066aaf2: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66aaf7u); f_005e4390();
    /* 0066aaf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aaf9: je 0x66ab0f */ if (fZ) goto L_0066ab0f;
L_0066aafb:; BB(0x0066aafb);
    /* 0066aafb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066aafe: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66ab03u); f_005e4390();
    /* 0066ab03: mov ecx, eax */ r_ecx = r_eax;
    /* 0066ab05: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x66ab0au); f_00629c70();
    /* 0066ab0a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066ab0d: jmp 0x66ab16 */ goto L_0066ab16;
L_0066ab0f:; BB(0x0066ab0f);
    /* 0066ab0f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0066ab16:; BB(0x0066ab16);
    /* 0066ab16: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066ab19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab1a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ab20: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ab23: call 0x666e40 */ r_esp -= 4; W32(r_esp, 0x66ab28u); f_00666e40();
    /* 0066ab28: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066ab2b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ab2f: jne 0x66ab36 */ if (!fZ) goto L_0066ab36;
L_0066ab31:; BB(0x0066ab31);
    /* 0066ab31: jmp 0x66ac27 */ goto L_0066ac27;
L_0066ab36:; BB(0x0066ab36);
    /* 0066ab36: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ab39: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0066ab3f: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066ab45: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0066ab48: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0066ab4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab51: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab53: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ab56: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66ab5bu); f_00615260();
    /* 0066ab5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab5c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066ab5f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066ab61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab62: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066ab65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab66: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ab6c: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ab6f: call 0x666740 */ r_esp -= 4; W32(r_esp, 0x66ab74u); f_00666740();
    /* 0066ab74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ab75: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ab78: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0066ab7e: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0066ab84: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0066ab87: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x66ab8cu); f_00646fa0();
    /* 0066ab8c: jmp 0x66ac27 */ goto L_0066ac27;
L_0066ab91:; BB(0x0066ab91);
    /* 0066ab91: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ab94: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0066ab9a: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0066aba0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066aba3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066aba6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066aba9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066abaa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066abb0: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x66abb5u); f_00639520();
    /* 0066abb5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066abb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066abba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066abbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066abbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066abc1: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66abc6u); f_00615260();
    /* 0066abc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066abc7: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066abca: imul esi, esi, 0x380 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x380u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066abd0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066abd3: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0066abd9: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066abdc: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66abe1u); f_00615260();
    /* 0066abe1: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066abe4: mov ecx, dword ptr [esi + eax + 0x763580] */ r_ecx = R32((u32)(r_esi+r_eax+0x763580u));
    /* 0066abeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066abec: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066abef: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0066abf5: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066abfb: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0066abfe: call 0x647210 */ r_esp -= 4; W32(r_esp, 0x66ac03u); f_00647210();
    /* 0066ac03: jmp 0x66ac27 */ goto L_0066ac27;
L_0066ac05:; BB(0x0066ac05);
    /* 0066ac05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac07: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ac0a: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66ac0fu); f_00615260();
    /* 0066ac0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac10: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ac13: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0066ac19: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066ac1f: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0066ac22: call 0x6473f0 */ r_esp -= 4; W32(r_esp, 0x66ac27u); f_006473f0();
L_0066ac27:; BB(0x0066ac27);
    /* 0066ac27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ac2b: ret  */ FN_RET(0x0066aa80); r_esp += 4; return;
}

void f_0066aca0(void) /* SituationInstanceListBox::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066aca0);
    /* 0066aca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066aca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066aca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066aca7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066acaa: mov dword ptr [eax], 0x6e003c */ W32((u32)(r_eax), 0x6e003cu);
    /* 0066acb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066acb3: call 0x628220 */ r_esp -= 4; W32(r_esp, 0x66acb8u); f_00628220();
    /* 0066acb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066acbb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0066acbe: je 0x66accc */ if (fZ) goto L_0066accc;
L_0066acc0:; BB(0x0066acc0);
    /* 0066acc0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066acc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066acc4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66acc9u); f_00686cae();
    /* 0066acc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066accc:; BB(0x0066accc);
    /* 0066accc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066accf: mov esp, ebp */ r_esp = r_ebp;
    /* 0066acd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066acd2: ret 4 */ FN_RET(0x0066aca0); r_esp += 8; return;
}

