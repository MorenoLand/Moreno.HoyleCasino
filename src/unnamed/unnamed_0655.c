#include "protos.h"

void f_00655a30(void) /* sub_655A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00655a30);
    /* 00655a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00655a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00655a37: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00655a3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00655a3e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655a44: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00655a4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655a4cu); call_ind(t); }
    /* 00655a4c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00655a4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655a51: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00655a54: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00655a56: mov esp, ebp */ r_esp = r_ebp;
    /* 00655a58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00655a59: ret  */ FN_RET(0x00655a30); r_esp += 4; return;
}

void f_00655c30(void) /* sub_655C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00655c30);
    /* 00655c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00655c33: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655c36: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00655c39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00655c40: jmp 0x655c4b */ goto L_00655c4b;
L_00655c42:; BB(0x00655c42);
    /* 00655c42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655c45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00655c48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00655c4b:; BB(0x00655c4b);
    /* 00655c4b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655c4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655c50: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655c55u); f_005fb720();
    /* 00655c55: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00655c58: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00655c5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655c5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00655c60: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00655c66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655c68u); call_ind(t); }
    /* 00655c68: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655c6b: jge 0x655cd0 */ if ((fS==fO)) goto L_00655cd0;
L_00655c6d:; BB(0x00655c6d);
    /* 00655c6d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655c6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655c72: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655c77u); f_005fb720();
    /* 00655c77: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00655c7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655c7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655c7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00655c81: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00655c84: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x655c89u); f_0060ca40();
    /* 00655c89: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00655c8c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655c92: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x655c97u); f_006375b0();
    /* 00655c97: mov ecx, eax */ r_ecx = r_eax;
    /* 00655c99: call 0x639f50 */ r_esp -= 4; W32(r_esp, 0x655c9eu); f_00639f50();
    /* 00655c9e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00655ca1: cmp dword ptr [edx + 0x14], eax */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655ca4: jne 0x655ccb */ if (!fZ) goto L_00655ccb;
L_00655ca6:; BB(0x00655ca6);
    /* 00655ca6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655ca8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655cab: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655cb0u); f_005fb720();
    /* 00655cb0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00655cb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655cb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655cb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655cb9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655cbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655cbe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655cc1: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00655cc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655cc9u); call_ind(t); }
    /* 00655cc9: jmp 0x655cd0 */ goto L_00655cd0;
L_00655ccb:; BB(0x00655ccb);
    /* 00655ccb: jmp 0x655c42 */ goto L_00655c42;
L_00655cd0:; BB(0x00655cd0);
    /* 00655cd0: mov esp, ebp */ r_esp = r_ebp;
    /* 00655cd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00655cd3: ret  */ FN_RET(0x00655c30); r_esp += 4; return;
}

void f_00655ce0(void) /* sub_655CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00655ce0);
    /* 00655ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00655ce3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655ce6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00655ce9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655ceb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00655cee: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655cf3u); f_005fb720();
    /* 00655cf3: mov ecx, eax */ r_ecx = r_eax;
    /* 00655cf5: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x655cfau); f_005e4390();
    /* 00655cfa: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00655cfd: mov esp, ebp */ r_esp = r_ebp;
    /* 00655cff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00655d00: ret  */ FN_RET(0x00655ce0); r_esp += 4; return;
}

