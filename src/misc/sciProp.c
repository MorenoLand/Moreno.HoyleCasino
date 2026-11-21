#include "protos.h"

void f_005f5bf0(void) /* sciProp::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5bf0);
    /* 005f5bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5bf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5bf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5bfa: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5f5bffu); f_005eaaf0();
    /* 005f5bff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5c02: mov dword ptr [eax], 0x6d6964 */ W32((u32)(r_eax), 0x6d6964u);
    /* 005f5c08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5c0b: mov dword ptr [ecx + 0x17c], 0 */ W32((u32)(r_ecx+0x17cu), 0x0u);
    /* 005f5c15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5c18: mov dword ptr [edx + 0x180], 0 */ W32((u32)(r_edx+0x180u), 0x0u);
    /* 005f5c22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5c25: mov dword ptr [eax + 0x178], 4 */ W32((u32)(r_eax+0x178u), 0x4u);
    /* 005f5c2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5c32: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5c34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5c35: ret  */ FN_RET(0x005f5bf0); r_esp += 4; return;
}

void f_005f5c40(void) /* sciProp::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5c40);
    /* 005f5c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5c43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c45: push 0x6a9f38 */ { u32 v = 0x6a9f38u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c52: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f5c57: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f5c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c5a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f5c5d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f5c63: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f5c66: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5c69: mov dword ptr [eax], 0x6d6964 */ W32((u32)(r_eax), 0x6d6964u);
    /* 005f5c6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f5c76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5c79: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5c7d: je 0x5f5c8e */ if (fZ) goto L_005f5c8e;
L_005f5c7f:; BB(0x005f5c7f);
    /* 005f5c7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c83: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5c86: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f5c89: call 0x5f8e60 */ r_esp -= 4; W32(r_esp, 0x5f5c8eu); f_005f8e60();
L_005f5c8e:; BB(0x005f5c8e);
    /* 005f5c8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5c93: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5f5c98u); f_005f5df0();
    /* 005f5c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5c9d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5f5ca2u); f_005f5d50();
    /* 005f5ca2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5ca9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5cac: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x5f5cb1u); f_005eac00();
    /* 005f5cb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5cb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5cbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5cbc: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5cbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5cbf: ret  */ FN_RET(0x005f5c40); r_esp += 4; return;
}

void f_005f5cf0(void) /* sciProp::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5cf0);
    /* 005f5cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5cf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5cfa: call 0x5f5600 */ r_esp -= 4; W32(r_esp, 0x5f5cffu); f_005f5600();
    /* 005f5cff: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f5d02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5d04: jne 0x5f5d45 */ if (!fZ) goto L_005f5d45;
L_005f5d06:; BB(0x005f5d06);
    /* 005f5d06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5d09: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5d10: je 0x5f5d20 */ if (fZ) goto L_005f5d20;
L_005f5d12:; BB(0x005f5d12);
    /* 005f5d12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5d15: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 005f5d1b: call 0x5fc250 */ r_esp -= 4; W32(r_esp, 0x5f5d20u); f_005fc250();
L_005f5d20:; BB(0x005f5d20);
    /* 005f5d20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5d23: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5d2a: je 0x5f5d45 */ if (fZ) goto L_005f5d45;
L_005f5d2c:; BB(0x005f5d2c);
    /* 005f5d2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5d2f: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 005f5d35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5d38: mov ecx, dword ptr [eax + 0x180] */ r_ecx = R32((u32)(r_eax+0x180u));
    /* 005f5d3e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f5d40: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f5d43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5d45u); call_ind(t); }
L_005f5d45:; BB(0x005f5d45);
    /* 005f5d45: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5d47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5d48: ret  */ FN_RET(0x005f5cf0); r_esp += 4; return;
}

