#include "protos.h"

void f_0058d750(void) /* KenoItemScroller::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d750);
    /* 0058d750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d751: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058d757: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d75c: call 0x5845c0 */ r_esp -= 4; W32(r_esp, 0x58d761u); f_005845c0();
    /* 0058d761: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d764: mov dword ptr [eax], 0x6cd934 */ W32((u32)(r_eax), 0x6cd934u);
    /* 0058d76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d76d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058d770: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 0058d776: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d779: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
    /* 0058d783: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d786: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d789: ret 4 */ FN_RET(0x0058d750); r_esp += 8; return;
}

void f_0058d790(void) /* KenoItemScroller::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d790);
    /* 0058d790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d791: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d793: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d795: push 0x6a6f7c */ { u32 v = 0x6a6f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d79a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058d7a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d7a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d7a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058d7a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058d7ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d7ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058d7af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058d7b5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0058d7b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d7bb: mov dword ptr [eax], 0x6cd934 */ W32((u32)(r_eax), 0x6cd934u);
    /* 0058d7c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058d7c8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d7cb: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d7d2: je 0x58d813 */ if (fZ) goto L_0058d813;
L_0058d7d4:; BB(0x0058d7d4);
    /* 0058d7d4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d7d7: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0058d7dd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058d7e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d7e3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058d7e6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d7ea: je 0x58d7ff */ if (fZ) goto L_0058d7ff;
L_0058d7ec:; BB(0x0058d7ec);
    /* 0058d7ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d7ee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d7f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058d7f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d7f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d7f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58d7fau); call_ind(t); }
    /* 0058d7fa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058d7fd: jmp 0x58d806 */ goto L_0058d806;
L_0058d7ff:; BB(0x0058d7ff);
    /* 0058d7ff: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0058d806:; BB(0x0058d806);
    /* 0058d806: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d809: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
L_0058d813:; BB(0x0058d813);
    /* 0058d813: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058d81a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d81d: call 0x584760 */ r_esp -= 4; W32(r_esp, 0x58d822u); f_00584760();
    /* 0058d822: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d825: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058d82c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058d82d: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d82f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d830: ret  */ FN_RET(0x0058d790); r_esp += 4; return;
}

void f_0058db40(void) /* KenoItemScroller::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058db40);
    /* 0058db40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058db41: mov ebp, esp */ r_ebp = r_esp;
    /* 0058db43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058db44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058db47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db4a: call 0x584f50 */ r_esp -= 4; W32(r_esp, 0x58db4fu); f_00584f50();
    /* 0058db4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db52: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058db59: je 0x58db74 */ if (fZ) goto L_0058db74;
L_0058db5b:; BB(0x0058db5b);
    /* 0058db5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db5e: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0058db64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db67: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0058db6d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058db6f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058db72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58db74u); call_ind(t); }
L_0058db74:; BB(0x0058db74);
    /* 0058db74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db77: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0058db7a: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x58db7fu); f_006026d0();
    /* 0058db7f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058db82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058db84: jne 0x58db9b */ if (!fZ) goto L_0058db9b;
L_0058db86:; BB(0x0058db86);
    /* 0058db86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db89: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058db8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db8f: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0058db92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058db94: mov ecx, eax */ r_ecx = r_eax;
    /* 0058db96: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058db99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58db9bu); call_ind(t); }
L_0058db9b:; BB(0x0058db9b);
    /* 0058db9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058db9e: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0058dba1: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x58dba6u); f_006026d0();
    /* 0058dba6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058dba9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dbab: jne 0x58dbc2 */ if (!fZ) goto L_0058dbc2;
L_0058dbad:; BB(0x0058dbad);
    /* 0058dbad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dbb0: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058dbb3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dbb6: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0058dbb9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058dbbb: mov ecx, eax */ r_ecx = r_eax;
    /* 0058dbbd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058dbc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dbc2u); call_ind(t); }
L_0058dbc2:; BB(0x0058dbc2);
    /* 0058dbc2: mov esp, ebp */ r_esp = r_ebp;
    /* 0058dbc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058dbc5: ret  */ FN_RET(0x0058db40); r_esp += 4; return;
}

void f_0058dbd0(void) /* KenoItemScroller::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058dbd0);
    /* 0058dbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058dbd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058dbd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058dbda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dbde: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058dbe1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dbe4: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058dbe7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058dbe9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058dbec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dbeeu); call_ind(t); }
    /* 0058dbee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058dbf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbf2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dbf5: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0058dbf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dbfb: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0058dbfe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058dc00: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058dc03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58dc05u); call_ind(t); }
    /* 0058dc05: mov esp, ebp */ r_esp = r_ebp;
    /* 0058dc07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058dc08: ret 4 */ FN_RET(0x0058dbd0); r_esp += 8; return;
}

void f_0058dc50(void) /* KenoItemScroller::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058dc50);
    /* 0058dc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058dc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0058dc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dc54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058dc57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058dc5a: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dc61: jne 0x58dc72 */ if (!fZ) goto L_0058dc72;
L_0058dc63:; BB(0x0058dc63);
    /* 0058dc63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0058dc69: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x58dc6eu); f_00636690();
    /* 0058dc6e: jmp 0x58dc8e */ goto L_0058dc8e;
L_0058dc72:; BB(0x0058dc72);
    /* 0058dc72: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058dc78: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58dc7du); f_0058a470();
    /* 0058dc7d: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dc80: jne 0x58dc89 */ if (!fZ) goto L_0058dc89;
L_0058dc82:; BB(0x0058dc82);
    /* 0058dc82: mov eax, 2 */ r_eax = 0x2u;
    /* 0058dc87: jmp 0x58dc8e */ goto L_0058dc8e;
L_0058dc89:; BB(0x0058dc89);
    /* 0058dc89: mov eax, 4 */ r_eax = 0x4u;
L_0058dc8e:; BB(0x0058dc8e);
    /* 0058dc8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0058dc90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058dc91: ret  */ FN_RET(0x0058dc50); r_esp += 4; return;
}

