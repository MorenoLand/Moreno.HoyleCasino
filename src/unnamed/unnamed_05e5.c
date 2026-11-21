#include "protos.h"

void f_005e56e0(void) /* sub_5E56E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e56e0);
    /* 005e56e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e56e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e56e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e56e5: push 0x6a989e */ { u32 v = 0x6a989eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e56ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e56f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e56f1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e56f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e56f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e56fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e56fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e56ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e5705: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e5708: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e570b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e570c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5712: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e5715: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e571au); f_005fb210();
    /* 005e571a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e571d: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5721: jne 0x5e572a */ if (!fZ) goto L_005e572a;
L_005e5723:; BB(0x005e5723);
    /* 005e5723: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e5725: jmp 0x5e57d7 */ goto L_005e57d7;
L_005e572a:; BB(0x005e572a);
    /* 005e572a: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005e572e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5730: je 0x5e577f */ if (fZ) goto L_005e577f;
L_005e5732:; BB(0x005e5732);
    /* 005e5732: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5734: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e5739u); f_00686d82();
    /* 005e5739: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e573c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e573f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e5746: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e574a: je 0x5e575d */ if (fZ) goto L_005e575d;
L_005e574c:; BB(0x005e574c);
    /* 005e574c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e574f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5750: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e5753: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x5e5758u); f_00600b60();
    /* 005e5758: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e575b: jmp 0x5e5764 */ goto L_005e5764;
L_005e575d:; BB(0x005e575d);
    /* 005e575d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e5764:; BB(0x005e5764);
    /* 005e5764: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e5767: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e576a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5771: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5774: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5775: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5778: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e577du); f_005f5d50();
    /* 005e577d: jmp 0x5e57c8 */ goto L_005e57c8;
L_005e577f:; BB(0x005e577f);
    /* 005e577f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5781: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e5786u); f_00686d82();
    /* 005e5786: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5789: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e578c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e5793: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5797: je 0x5e57a8 */ if (fZ) goto L_005e57a8;
L_005e5799:; BB(0x005e5799);
    /* 005e5799: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e579b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e579e: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5e57a3u); f_00600a70();
    /* 005e57a3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e57a6: jmp 0x5e57af */ goto L_005e57af;
L_005e57a8:; BB(0x005e57a8);
    /* 005e57a8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e57af:; BB(0x005e57af);
    /* 005e57af: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e57b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e57b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e57bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e57bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e57c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e57c3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e57c8u); f_005f5d50();
L_005e57c8:; BB(0x005e57c8);
    /* 005e57c8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e57cb: mov dword ptr [edx + 0x178], 0xa */ W32((u32)(r_edx+0x178u), 0xau);
    /* 005e57d5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005e57d7:; BB(0x005e57d7);
    /* 005e57d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e57da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e57e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e57e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e57e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e57e5: ret 8 */ FN_RET(0x005e56e0); r_esp += 12; return;
}

void f_005e57f0(void) /* sub_5E57F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e57f0);
    /* 005e57f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e57f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e57f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e57f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e57f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e57fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e57fd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5803: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e5806: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e580bu); f_005fb210();
    /* 005e580b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e580e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5812: jne 0x5e5818 */ if (!fZ) goto L_005e5818;
L_005e5814:; BB(0x005e5814);
    /* 005e5814: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e5816: jmp 0x5e5836 */ goto L_005e5836;
L_005e5818:; BB(0x005e5818);
    /* 005e5818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e581a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e581d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e5822u); f_005f5d50();
    /* 005e5822: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5824: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5827: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5829: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e582c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005e5832: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e5834u); call_ind(t); }
    /* 005e5834: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005e5836:; BB(0x005e5836);
    /* 005e5836: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5838: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5839: ret 4 */ FN_RET(0x005e57f0); r_esp += 8; return;
}

