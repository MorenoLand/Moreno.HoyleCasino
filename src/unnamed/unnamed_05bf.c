#include "protos.h"

void f_005bf010(void) /* sub_5BF010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf010);
    /* 005bf010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf011: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf013: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf016: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf018: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005bf01b: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005bf01e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005bf021: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bf024: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bf027: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bf02a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bf02d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005bf030: mov byte ptr [ebp - 0x1d], cl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_ecx);
    /* 005bf033: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bf036: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005bf039: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf03c: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bf03f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fZ = (r == 0); } }
    /* 005bf042: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bf045: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf048: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf04b: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005bf04e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bf051: je 0x5bf072 */ if (fZ) goto L_005bf072;
L_005bf053:; BB(0x005bf053);
    /* 005bf053: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf056: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005bf059: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf05a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf05d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf05e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf061: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bf064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf065: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bf068: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf069: call dword ptr [0x6b2280] */ { u32 t = R32((u32)(0x6b2280u)); r_esp -= 4; W32(r_esp, 0x5bf06fu); call_ind(t); }
    /* 005bf06f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bf072:; BB(0x005bf072);
    /* 005bf072: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf075: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf077: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf078: ret  */ FN_RET(0x005bf010); r_esp += 4; return;
}

void f_005bf170(void) /* sub_5BF170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf170);
    /* 005bf170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf171: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf173: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf175: push 0x6a82ab */ { u32 v = 0x6a82abu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf17a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bf180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf181: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf184: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bf189: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf18b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf18c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bf18f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bf195: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bf19c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bf19f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005bf1a2: cmp dword ptr [ebp - 0x1c], 0x3158d1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3158d1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf1a9: jl 0x5bf1f7 */ if ((fS!=fO)) goto L_005bf1f7;
L_005bf1ab:; BB(0x005bf1ab);
    /* 005bf1ab: cmp dword ptr [ebp - 0x1c], 0x3158d5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3158d5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf1b2: jle 0x5bf1b6 */ if ((fZ||fS!=fO)) goto L_005bf1b6;
L_005bf1b4:; BB(0x005bf1b4);
    /* 005bf1b4: jmp 0x5bf1f7 */ goto L_005bf1f7;
L_005bf1b6:; BB(0x005bf1b6);
    /* 005bf1b6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bf1b8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bf1bdu); f_00686d82();
    /* 005bf1bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf1c0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bf1c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bf1ca: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf1ce: je 0x5bf1dd */ if (fZ) goto L_005bf1dd;
L_005bf1d0:; BB(0x005bf1d0);
    /* 005bf1d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bf1d3: call 0x5bf340 */ r_esp -= 4; W32(r_esp, 0x5bf1d8u); f_005bf340();
    /* 005bf1d8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bf1db: jmp 0x5bf1e4 */ goto L_005bf1e4;
L_005bf1dd:; BB(0x005bf1dd);
    /* 005bf1dd: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005bf1e4:; BB(0x005bf1e4);
    /* 005bf1e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bf1e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005bf1ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bf1f1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bf1f4: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005bf1f7:; BB(0x005bf1f7);
    /* 005bf1f7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bf1fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf1fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bf204: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bf205: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf208: ret  */ FN_RET(0x005bf170); r_esp += 4; return;
}

void f_005bf2a0(void) /* sub_5BF2A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf2a0);
    /* 005bf2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf2a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf2aa: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf2ae: je 0x5bf2b2 */ if (fZ) goto L_005bf2b2;
L_005bf2b0:; BB(0x005bf2b0);
    /* 005bf2b0: jmp 0x5bf2c8 */ goto L_005bf2c8;
L_005bf2b2:; BB(0x005bf2b2);
    /* 005bf2b2: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005bf2b8: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5bf2bdu); f_005f3e50();
    /* 005bf2bd: add eax, 0x168 */ {  u32 a = r_eax; u32 b = 0x168u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf2c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf2c5: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
L_005bf2c8:; BB(0x005bf2c8);
    /* 005bf2c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf2ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf2cb: ret  */ FN_RET(0x005bf2a0); r_esp += 4; return;
}

void f_005bfbc0(void) /* sub_5BFBC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfbc0);
    /* 005bfbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfbc3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfbc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bfbc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bfbcc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bfbcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbd2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bfbd4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005bfbd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfbda: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005bfbdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfbdd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfbe0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bfbe3: call 0x5c99e0 */ r_esp -= 4; W32(r_esp, 0x5bfbe8u); f_005c99e0();
    /* 005bfbe8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfbeb: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfbef: jg 0x5bfbf9 */ if ((!fZ&&fS==fO)) goto L_005bfbf9;
L_005bfbf1:; BB(0x005bfbf1);
    /* 005bfbf1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfbf4: call 0x5bf2a0 */ r_esp -= 4; W32(r_esp, 0x5bfbf9u); f_005bf2a0();
L_005bfbf9:; BB(0x005bfbf9);
    /* 005bfbf9: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfbfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfbfc: ret 4 */ FN_RET(0x005bfbc0); r_esp += 8; return;
}

void f_005bfc00(void) /* sub_5BFC00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfc00);
    /* 005bfc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc01: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfc03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfc06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bfc09: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc0e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfc11: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bfc14: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5bfc19u); f_005fb2b0();
    /* 005bfc19: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bfc1c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfc20: je 0x5bfc39 */ if (fZ) goto L_005bfc39;
L_005bfc22:; BB(0x005bfc22);
    /* 005bfc22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfc25: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005bfc28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc2c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfc2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc31: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005bfc37: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bfc39u); call_ind(t); }
L_005bfc39:; BB(0x005bfc39);
    /* 005bfc39: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfc3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfc3c: ret  */ FN_RET(0x005bfc00); r_esp += 4; return;
}

void f_005bfce0(void) /* sub_5BFCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfce0);
    /* 005bfce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfcea: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5bfcefu); f_005e9e40();
    /* 005bfcef: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfcf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfcf2: ret  */ FN_RET(0x005bfce0); r_esp += 4; return;
}

void f_005bfd30(void) /* sub_5BFD30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfd30);
    /* 005bfd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd31: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfd33: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfd36: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005bfd39: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfd3c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfd40: jne 0x5bfd4b */ if (!fZ) goto L_005bfd4b;
L_005bfd42:; BB(0x005bfd42);
    /* 005bfd42: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005bfd49: jmp 0x5bfd5d */ goto L_005bfd5d;
L_005bfd4b:; BB(0x005bfd4b);
    /* 005bfd4b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfd4e: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfd51: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bfd54: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bfd57: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bfd5a: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_005bfd5d:; BB(0x005bfd5d);
    /* 005bfd5d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfd60: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfd64: jne 0x5bfd6f */ if (!fZ) goto L_005bfd6f;
L_005bfd66:; BB(0x005bfd66);
    /* 005bfd66: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005bfd6d: jmp 0x5bfd81 */ goto L_005bfd81;
L_005bfd6f:; BB(0x005bfd6f);
    /* 005bfd6f: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfd72: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfd75: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005bfd78: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfd7b: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bfd7e: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
L_005bfd81:; BB(0x005bfd81);
    /* 005bfd81: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005bfd84: cmp edx, dword ptr [ebp - 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bfd87: jae 0x5bfdd4 */ if (!fC) goto L_005bfdd4;
L_005bfd89:; BB(0x005bfd89);
    /* 005bfd89: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfd8c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bfd8f: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005bfd92: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bfd95: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005bfd98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bfd9a: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 005bfd9d: mov cl, byte ptr [ebp - 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffedu))) & 0xffu);
    /* 005bfda0: mov byte ptr [ebp - 0x12], cl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_ecx);
    /* 005bfda3: mov dl, byte ptr [ebp - 0x11] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 005bfda6: mov byte ptr [ebp - 0x39], dl */ W8((u32)(r_ebp+0xffffffc7u), (u8)r_edx);
    /* 005bfda9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bfdac: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bfdaf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bfdb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfdb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfdb5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bfdb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfdb9: call 0x5c0910 */ r_esp -= 4; W32(r_esp, 0x5bfdbeu); f_005c0910();
    /* 005bfdbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bfdc1: mov eax, 1 */ r_eax = 0x1u;
    /* 005bfdc6: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bfdc9: add eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfdcc: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfdcf: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005bfdd2: jmp 0x5bfe2a */ goto L_005bfe2a;
L_005bfdd4:; BB(0x005bfdd4);
    /* 005bfdd4: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfdd7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bfdda: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005bfddd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005bfde4: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfde8: je 0x5bfe00 */ if (fZ) goto L_005bfe00;
L_005bfdea:; BB(0x005bfdea);
    /* 005bfdea: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfded: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bfdf0: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfdf3: ja 0x5bfe00 */ if ((!fC&&!fZ)) goto L_005bfe00;
L_005bfdf5:; BB(0x005bfdf5);
    /* 005bfdf5: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfdf8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bfdfb: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfdfe: jbe 0x5bfe06 */ if ((fC||fZ)) goto L_005bfe06;
L_005bfe00:; BB(0x005bfe00);
    /* 005bfe00: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bfe06u); call_ind(t); }
L_005bfe06:; BB(0x005bfe06);
    /* 005bfe06: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfe09: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bfe0c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bfe0f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bfe12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bfe15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfe19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe1a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bfe1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe1e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005bfe21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe22: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bfe25: call 0x5bfe30 */ r_esp -= 4; W32(r_esp, 0x5bfe2au); f_005bfe30();
L_005bfe2a:; BB(0x005bfe2a);
    /* 005bfe2a: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfe2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfe2d: ret 4 */ FN_RET(0x005bfd30); r_esp += 8; return;
}

void f_005bfe30(void) /* sub_5BFE30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfe30);
    /* 005bfe30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfe31: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfe33: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfe36: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005bfe39: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfe3c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfe40: jne 0x5bfe4b */ if (!fZ) goto L_005bfe4b;
L_005bfe42:; BB(0x005bfe42);
    /* 005bfe42: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005bfe49: jmp 0x5bfe5d */ goto L_005bfe5d;
L_005bfe4b:; BB(0x005bfe4b);
    /* 005bfe4b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfe4e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfe51: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bfe54: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bfe57: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bfe5a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005bfe5d:; BB(0x005bfe5d);
    /* 005bfe5d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfe61: jne 0x5bfe6c */ if (!fZ) goto L_005bfe6c;
L_005bfe63:; BB(0x005bfe63);
    /* 005bfe63: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005bfe6a: jmp 0x5bfeca */ goto L_005bfeca;
L_005bfe6c:; BB(0x005bfe6c);
    /* 005bfe6c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfe6f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bfe72: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005bfe75: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005bfe7c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfe80: je 0x5bfe98 */ if (fZ) goto L_005bfe98;
L_005bfe82:; BB(0x005bfe82);
    /* 005bfe82: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfe85: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bfe88: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfe8b: ja 0x5bfe98 */ if ((!fC&&!fZ)) goto L_005bfe98;
L_005bfe8d:; BB(0x005bfe8d);
    /* 005bfe8d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfe90: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bfe93: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfe96: jbe 0x5bfe9e */ if ((fC||fZ)) goto L_005bfe9e;
L_005bfe98:; BB(0x005bfe98);
    /* 005bfe98: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bfe9eu); call_ind(t); }
L_005bfe9e:; BB(0x005bfe9e);
    /* 005bfe9e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfea1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bfea4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bfea7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bfeaa: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfeae: je 0x5bfeb8 */ if (fZ) goto L_005bfeb8;
L_005bfeb0:; BB(0x005bfeb0);
    /* 005bfeb0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bfeb3: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfeb6: je 0x5bfebe */ if (fZ) goto L_005bfebe;
L_005bfeb8:; BB(0x005bfeb8);
    /* 005bfeb8: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bfebeu); call_ind(t); }
L_005bfebe:; BB(0x005bfebe);
    /* 005bfebe: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bfec1: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfec4: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bfec7: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005bfeca:; BB(0x005bfeca);
    /* 005bfeca: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bfecd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005bfed0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005bfed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bfed4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfed6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bfed9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfeda: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bfedd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfede: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfee1: call 0x5bff60 */ r_esp -= 4; W32(r_esp, 0x5bfee6u); f_005bff60();
    /* 005bfee6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfee9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bfeec: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bfeef: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005bfef6: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfefa: je 0x5bff12 */ if (fZ) goto L_005bff12;
L_005bfefc:; BB(0x005bfefc);
    /* 005bfefc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfeff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bff02: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bff05: ja 0x5bff12 */ if ((!fC&&!fZ)) goto L_005bff12;
L_005bff07:; BB(0x005bff07);
    /* 005bff07: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bff0a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bff0d: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bff10: jbe 0x5bff18 */ if ((fC||fZ)) goto L_005bff18;
L_005bff12:; BB(0x005bff12);
    /* 005bff12: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bff18u); call_ind(t); }
L_005bff18:; BB(0x005bff18);
    /* 005bff18: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bff1b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bff1e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bff21: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bff24: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bff27: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bff2a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005bff2d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bff30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bff33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bff34: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005bff37: call 0x5beeb0 */ r_esp -= 4; W32(r_esp, 0x5bff3cu); f_005beeb0();
    /* 005bff3c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bff3f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bff42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bff45: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bff47: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005bff4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bff4d: mov esp, ebp */ r_esp = r_ebp;
    /* 005bff4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bff50: ret 0x10 */ FN_RET(0x005bfe30); r_esp += 20; return;
}

void f_005bff60(void) /* sub_5BFF60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bff60);
    /* 005bff60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bff61: mov ebp, esp */ r_ebp = r_esp;
    /* 005bff63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bff65: push 0x6a83a0 */ { u32 v = 0x6a83a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bff6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bff70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bff71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bff72: sub esp, 0x220 */ {  u32 a = r_esp; u32 b = 0x220u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bff78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bff79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bff7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bff7b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bff80: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bff82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bff83: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bff86: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bff8c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bff8f: mov dword ptr [ebp - 0x208], ecx */ W32((u32)(r_ebp+0xfffffdf8u), r_ecx);
    /* 005bff95: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005bff98: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005bff9a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005bff9d: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bffa3: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bffa7: jne 0x5bffb5 */ if (!fZ) goto L_005bffb5;
L_005bffa9:; BB(0x005bffa9);
    /* 005bffa9: mov dword ptr [ebp - 0x20c], 0 */ W32((u32)(r_ebp+0xfffffdf4u), 0x0u);
    /* 005bffb3: jmp 0x5bffd0 */ goto L_005bffd0;
L_005bffb5:; BB(0x005bffb5);
    /* 005bffb5: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bffbb: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bffc1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005bffc4: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bffc7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bffca: mov dword ptr [ebp - 0x20c], edx */ W32((u32)(r_ebp+0xfffffdf4u), r_edx);
L_005bffd0:; BB(0x005bffd0);
    /* 005bffd0: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005bffd6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bffd9: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bffdd: jne 0x5bffe4 */ if (!fZ) goto L_005bffe4;
L_005bffdf:; BB(0x005bffdf);
    /* 005bffdf: jmp 0x5c06d1 */ goto L_005c06d1;
L_005bffe4:; BB(0x005bffe4);
    /* 005bffe4: mov dword ptr [ebp - 0x28], 0x3fffffff */ W32((u32)(r_ebp+0xffffffd8u), 0x3fffffffu);
    /* 005bffeb: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bffef: jbe 0x5bfffc */ if ((fC||fZ)) goto L_005bfffc;
L_005bfff1:; BB(0x005bfff1);
    /* 005bfff1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bfff4: mov dword ptr [ebp - 0x210], ecx */ W32((u32)(r_ebp+0xfffffdf0u), r_ecx);
    /* 005bfffa: jmp 0x5c0006 */ goto L_005c0006;
L_005bfffc:; BB(0x005bfffc);
    /* 005bfffc: mov dword ptr [ebp - 0x210], 1 */ W32((u32)(r_ebp+0xfffffdf0u), 0x1u);
L_005c0006:; BB(0x005c0006);
    /* 005c0006: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c000c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0010: jne 0x5c001e */ if (!fZ) goto L_005c001e;
L_005c0012:; BB(0x005c0012);
    /* 005c0012: mov dword ptr [ebp - 0x214], 0 */ W32((u32)(r_ebp+0xfffffdecu), 0x0u);
    /* 005c001c: jmp 0x5c0039 */ goto L_005c0039;
L_005c001e:; BB(0x005c001e);
    /* 005c001e: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0024: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c002a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c002d: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c0030: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c0033: mov dword ptr [ebp - 0x214], edx */ W32((u32)(r_ebp+0xfffffdecu), r_edx);
L_005c0039:; BB(0x005c0039);
    /* 005c0039: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 005c003f: sub eax, dword ptr [ebp - 0x214] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c0045: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c0048: jae 0x5c0054 */ if (!fC) goto L_005c0054;
L_005c004a:; BB(0x005c004a);
    /* 005c004a: call 0x5c06f0 */ r_esp -= 4; W32(r_esp, 0x5c004fu); f_005c06f0();
    /* 005c004f: jmp 0x5c06d1 */ goto L_005c06d1;
L_005c0054:; BB(0x005c0054);
    /* 005c0054: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c005a: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c005e: jne 0x5c006c */ if (!fZ) goto L_005c006c;
L_005c0060:; BB(0x005c0060);
    /* 005c0060: mov dword ptr [ebp - 0x218], 0 */ W32((u32)(r_ebp+0xfffffde8u), 0x0u);
    /* 005c006a: jmp 0x5c0087 */ goto L_005c0087;
L_005c006c:; BB(0x005c006c);
    /* 005c006c: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0072: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0078: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c007b: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c007e: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c0081: mov dword ptr [ebp - 0x218], ecx */ W32((u32)(r_ebp+0xfffffde8u), r_ecx);
L_005c0087:; BB(0x005c0087);
    /* 005c0087: mov edx, dword ptr [ebp - 0x218] */ r_edx = R32((u32)(r_ebp+0xfffffde8u));
    /* 005c008d: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0090: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c0093: jae 0x5c044b */ if (!fC) goto L_005c044b;
L_005c0099:; BB(0x005c0099);
    /* 005c0099: mov dword ptr [ebp - 0x70], 0x3fffffff */ W32((u32)(r_ebp+0xffffff90u), 0x3fffffffu);
    /* 005c00a0: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c00a4: jbe 0x5c00b1 */ if ((fC||fZ)) goto L_005c00b1;
L_005c00a6:; BB(0x005c00a6);
    /* 005c00a6: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005c00a9: mov dword ptr [ebp - 0x21c], eax */ W32((u32)(r_ebp+0xfffffde4u), r_eax);
    /* 005c00af: jmp 0x5c00bb */ goto L_005c00bb;
L_005c00b1:; BB(0x005c00b1);
    /* 005c00b1: mov dword ptr [ebp - 0x21c], 1 */ W32((u32)(r_ebp+0xfffffde4u), 0x1u);
L_005c00bb:; BB(0x005c00bb);
    /* 005c00bb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c00be: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005c00c0: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 005c00c6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c00c8: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c00cb: jae 0x5c00d9 */ if (!fC) goto L_005c00d9;
L_005c00cd:; BB(0x005c00cd);
    /* 005c00cd: mov dword ptr [ebp - 0x220], 0 */ W32((u32)(r_ebp+0xfffffde0u), 0x0u);
    /* 005c00d7: jmp 0x5c00e7 */ goto L_005c00e7;
L_005c00d9:; BB(0x005c00d9);
    /* 005c00d9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c00dc: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005c00de: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c00e1: mov dword ptr [ebp - 0x220], eax */ W32((u32)(r_ebp+0xfffffde0u), r_eax);
L_005c00e7:; BB(0x005c00e7);
    /* 005c00e7: mov ecx, dword ptr [ebp - 0x220] */ r_ecx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005c00ed: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c00f0: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c00f6: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c00fa: jne 0x5c0108 */ if (!fZ) goto L_005c0108;
L_005c00fc:; BB(0x005c00fc);
    /* 005c00fc: mov dword ptr [ebp - 0x224], 0 */ W32((u32)(r_ebp+0xfffffddcu), 0x0u);
    /* 005c0106: jmp 0x5c0123 */ goto L_005c0123;
L_005c0108:; BB(0x005c0108);
    /* 005c0108: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c010e: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0114: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c0117: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c011a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c011d: mov dword ptr [ebp - 0x224], edx */ W32((u32)(r_ebp+0xfffffddcu), r_edx);
L_005c0123:; BB(0x005c0123);
    /* 005c0123: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 005c0129: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c012c: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c012f: jae 0x5c0170 */ if (!fC) goto L_005c0170;
L_005c0131:; BB(0x005c0131);
    /* 005c0131: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0137: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c013b: jne 0x5c0149 */ if (!fZ) goto L_005c0149;
L_005c013d:; BB(0x005c013d);
    /* 005c013d: mov dword ptr [ebp - 0x228], 0 */ W32((u32)(r_ebp+0xfffffdd8u), 0x0u);
    /* 005c0147: jmp 0x5c0164 */ goto L_005c0164;
L_005c0149:; BB(0x005c0149);
    /* 005c0149: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c014f: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0155: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c0158: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c015b: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c015e: mov dword ptr [ebp - 0x228], ecx */ W32((u32)(r_ebp+0xfffffdd8u), r_ecx);
L_005c0164:; BB(0x005c0164);
    /* 005c0164: mov edx, dword ptr [ebp - 0x228] */ r_edx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 005c016a: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c016d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005c0170:; BB(0x005c0170);
    /* 005c0170: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0172: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c0175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0176: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5c017bu); f_005c6310();
    /* 005c017b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c017e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c0181: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c0184: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c0187: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c018e: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0194: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c0197: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005c019d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c01a0: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005c01a6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c01a9: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005c01af: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005c01b5: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005c01bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c01bd: mov byte ptr [ebp - 0x71], cl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_ecx);
    /* 005c01c0: mov dl, byte ptr [ebp - 0x73] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8du))) & 0xffu);
    /* 005c01c3: mov byte ptr [ebp - 0x72], dl */ W8((u32)(r_ebp+0xffffff8eu), (u8)r_edx);
    /* 005c01c6: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c01cc: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005c01cf: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005c01d5: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005c01d8: mov dl, byte ptr [ebp - 0x71] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8fu))) & 0xffu);
    /* 005c01db: mov byte ptr [ebp - 0x85], dl */ W8((u32)(r_ebp+0xffffff7bu), (u8)r_edx);
    /* 005c01e1: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c01e7: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005c01ed: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c01f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c01f4: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c01fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c01fb: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c01fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c01ff: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005c0202: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0203: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c0208u); f_005bf010();
    /* 005c0208: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c020b: mov dword ptr [ebp - 0x22c], eax */ W32((u32)(r_ebp+0xfffffdd4u), r_eax);
    /* 005c0211: mov edx, dword ptr [ebp - 0x22c] */ r_edx = R32((u32)(r_ebp+0xfffffdd4u));
    /* 005c0217: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c021a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c021d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005c0223: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0225: mov byte ptr [ebp - 0x99], cl */ W8((u32)(r_ebp+0xffffff67u), (u8)r_ecx);
    /* 005c022b: mov dl, byte ptr [ebp - 0x9b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff65u))) & 0xffu);
    /* 005c0231: mov byte ptr [ebp - 0x9a], dl */ W8((u32)(r_ebp+0xffffff66u), (u8)r_edx);
    /* 005c0237: mov al, byte ptr [ebp - 0x99] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff67u))) & 0xffu);
    /* 005c023d: mov byte ptr [ebp - 0xa1], al */ W8((u32)(r_ebp+0xffffff5fu), (u8)r_eax);
    /* 005c0243: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0249: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005c024f: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005c0252: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0253: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c0256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0257: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005c025d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c025e: call 0x5c0910 */ r_esp -= 4; W32(r_esp, 0x5c0263u); f_005c0910();
    /* 005c0263: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0266: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c0269: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c026c: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005c026f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c0272: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0278: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c027b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005c0281: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c0284: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005c028a: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005c0290: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005c0296: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c0299: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005c029f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c02a1: mov byte ptr [ebp - 0xa9], cl */ W8((u32)(r_ebp+0xffffff57u), (u8)r_ecx);
    /* 005c02a7: mov dl, byte ptr [ebp - 0xab] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff55u))) & 0xffu);
    /* 005c02ad: mov byte ptr [ebp - 0xaa], dl */ W8((u32)(r_ebp+0xffffff56u), (u8)r_edx);
    /* 005c02b3: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005c02b9: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005c02bf: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005c02c5: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005c02cb: mov dl, byte ptr [ebp - 0xa9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff57u))) & 0xffu);
    /* 005c02d1: mov byte ptr [ebp - 0xbd], dl */ W8((u32)(r_ebp+0xffffff43u), (u8)r_edx);
    /* 005c02d7: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005c02dd: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005c02e3: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c02e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c02ea: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005c02f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c02f1: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005c02f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c02f8: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c02fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c02ff: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c0304u); f_005bf010();
    /* 005c0304: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0307: jmp 0x5c0349 */ goto L_005c0349;
L_005c0349:; BB(0x005c0349);
    /* 005c0349: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c0350: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0356: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c035a: jne 0x5c0368 */ if (!fZ) goto L_005c0368;
L_005c035c:; BB(0x005c035c);
    /* 005c035c: mov dword ptr [ebp - 0x230], 0 */ W32((u32)(r_ebp+0xfffffdd0u), 0x0u);
    /* 005c0366: jmp 0x5c0383 */ goto L_005c0383;
L_005c0368:; BB(0x005c0368);
    /* 005c0368: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c036e: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0374: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c0377: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c037a: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c037d: mov dword ptr [ebp - 0x230], eax */ W32((u32)(r_ebp+0xfffffdd0u), r_eax);
L_005c0383:; BB(0x005c0383);
    /* 005c0383: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c0386: add ecx, dword ptr [ebp - 0x230] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffdd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c038c: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 005c038f: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0395: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0399: je 0x5c0416 */ if (fZ) goto L_005c0416;
L_005c039b:; BB(0x005c039b);
    /* 005c039b: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c03a1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c03a4: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 005c03aa: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c03b0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c03b3: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005c03b9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005c03bf: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 005c03c5: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005c03cb: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 005c03d1: mov al, byte ptr [ebp - 0xde] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff22u))) & 0xffu);
    /* 005c03d7: mov byte ptr [ebp - 0xdd], al */ W8((u32)(r_ebp+0xffffff23u), (u8)r_eax);
    /* 005c03dd: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c03e3: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c03e9: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005c03ec: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c03ef: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c03f2: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005c03f8: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c03fe: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c0401: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 005c0407: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 005c040d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c040e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c0413u); f_00686cae();
    /* 005c0413: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0416:; BB(0x005c0416);
    /* 005c0416: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c0419: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c041c: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005c041f: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0425: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005c0428: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c042b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c042e: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005c0431: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0437: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c043a: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0440: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c0443: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c0446: jmp 0x5c06d1 */ goto L_005c06d1;
L_005c044b:; BB(0x005c044b);
    /* 005c044b: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0451: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c0454: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c0457: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c045a: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c045d: jae 0x5c05a7 */ if (!fC) goto L_005c05a7;
L_005c0463:; BB(0x005c0463);
    /* 005c0463: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0469: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c046c: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 005c0472: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0479: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c047c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c047f: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005c0482: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0483: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005c0489: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c048a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c048d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c048e: call 0x5befc0 */ r_esp -= 4; W32(r_esp, 0x5c0493u); f_005befc0();
    /* 005c0493: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0496: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c049d: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005c04a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c04a1: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c04a7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c04aa: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c04ad: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c04b0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c04b3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c04b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c04b6: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c04bc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c04bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c04c0: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c04c6: call 0x5c5fd0 */ r_esp -= 4; W32(r_esp, 0x5c04cbu); f_005c5fd0();
    /* 005c04cb: jmp 0x5c051f */ goto L_005c051f;
L_005c051f:; BB(0x005c051f);
    /* 005c051f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c0526: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c052c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c052f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c0532: lea eax, [ecx + edx*4] */ r_eax = (u32)(r_ecx+r_edx*4);
    /* 005c0535: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c053b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005c053e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c0541: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005c0544: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c054a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c054d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c054f: mov dword ptr [ebp - 0x170], ecx */ W32((u32)(r_ebp+0xfffffe90u), r_ecx);
    /* 005c0555: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c0558: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
    /* 005c055e: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 005c0564: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 005c056a: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 005c0570: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
    /* 005c0576: jmp 0x5c0587 */ goto L_005c0587;
L_005c0578:; BB(0x005c0578);
    /* 005c0578: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c057e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0581: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
L_005c0587:; BB(0x005c0587);
    /* 005c0587: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c058d: cmp eax, dword ptr [ebp - 0x160] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffea0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0593: je 0x5c05a2 */ if (fZ) goto L_005c05a2;
L_005c0595:; BB(0x005c0595);
    /* 005c0595: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c059b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c059e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c05a0: jmp 0x5c0578 */ goto L_005c0578;
L_005c05a2:; BB(0x005c05a2);
    /* 005c05a2: jmp 0x5c06d1 */ goto L_005c06d1;
L_005c05a7:; BB(0x005c05a7);
    /* 005c05a7: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c05ad: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c05b0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c05b3: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c05b9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c05bc: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
    /* 005c05c2: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 005c05c8: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 005c05ce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c05d1: mov dword ptr [ebp - 0x1b0], edx */ W32((u32)(r_ebp+0xfffffe50u), r_edx);
    /* 005c05d7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c05da: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005c05dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c05e0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c05e2: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 005c05e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c05ea: mov byte ptr [ebp - 0x171], dl */ W8((u32)(r_ebp+0xfffffe8fu), (u8)r_edx);
    /* 005c05f0: mov al, byte ptr [ebp - 0x173] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8du))) & 0xffu);
    /* 005c05f6: mov byte ptr [ebp - 0x172], al */ W8((u32)(r_ebp+0xfffffe8eu), (u8)r_eax);
    /* 005c05fc: mov ecx, dword ptr [ebp - 0x1b0] */ r_ecx = R32((u32)(r_ebp+0xfffffe50u));
    /* 005c0602: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 005c0608: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 005c060e: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 005c0614: mov al, byte ptr [ebp - 0x171] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8fu))) & 0xffu);
    /* 005c061a: mov byte ptr [ebp - 0x1a5], al */ W8((u32)(r_ebp+0xfffffe5bu), (u8)r_eax);
    /* 005c0620: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 005c0626: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 005c062c: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0632: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0633: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005c0639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c063a: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 005c0640: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0641: mov edx, dword ptr [ebp - 0x180] */ r_edx = R32((u32)(r_ebp+0xfffffe80u));
    /* 005c0647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0648: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c064du); f_005bf010();
    /* 005c064d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0650: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c0656: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005c0659: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c065c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c065d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c0660: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005c0663: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c0666: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0668: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0669: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c066c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c066d: call 0x5c61d0 */ r_esp -= 4; W32(r_esp, 0x5c0672u); f_005c61d0();
    /* 005c0672: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0675: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c0678: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c067b: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 005c067e: mov dword ptr [ebp - 0x204], edx */ W32((u32)(r_ebp+0xfffffdfcu), r_edx);
    /* 005c0684: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c0687: mov dword ptr [ebp - 0x200], eax */ W32((u32)(r_ebp+0xfffffe00u), r_eax);
    /* 005c068d: mov ecx, dword ptr [ebp - 0x204] */ r_ecx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005c0693: mov dword ptr [ebp - 0x1f4], ecx */ W32((u32)(r_ebp+0xfffffe0cu), r_ecx);
    /* 005c0699: mov edx, dword ptr [ebp - 0x200] */ r_edx = R32((u32)(r_ebp+0xfffffe00u));
    /* 005c069f: mov dword ptr [ebp - 0x1fc], edx */ W32((u32)(r_ebp+0xfffffe04u), r_edx);
    /* 005c06a5: jmp 0x5c06b6 */ goto L_005c06b6;
L_005c06a7:; BB(0x005c06a7);
    /* 005c06a7: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 005c06ad: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c06b0: mov dword ptr [ebp - 0x1fc], eax */ W32((u32)(r_ebp+0xfffffe04u), r_eax);
L_005c06b6:; BB(0x005c06b6);
    /* 005c06b6: mov ecx, dword ptr [ebp - 0x1fc] */ r_ecx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005c06bc: cmp ecx, dword ptr [ebp - 0x1f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffe0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c06c2: je 0x5c06d1 */ if (fZ) goto L_005c06d1;
L_005c06c4:; BB(0x005c06c4);
    /* 005c06c4: mov edx, dword ptr [ebp - 0x1fc] */ r_edx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005c06ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c06cd: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005c06cf: jmp 0x5c06a7 */ goto L_005c06a7;
L_005c06d1:; BB(0x005c06d1);
    /* 005c06d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c06d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c06db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c06dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c06dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c06de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c06df: mov esp, ebp */ r_esp = r_ebp;
    /* 005c06e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c06e2: ret 0x10 */ FN_RET(0x005bff60); r_esp += 20; return;
}

