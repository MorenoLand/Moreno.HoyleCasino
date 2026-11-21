#include "protos.h"

void f_00605c60(void) /* sciDropListButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605c60);
    /* 00605c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00605c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00605c65: push 0x6aab8b */ { u32 v = 0x6aab8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00605c6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00605c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605c71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605c72: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00605c77: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605c79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605c7a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00605c7d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00605c83: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00605c86: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00605c89: mov dword ptr [eax], 0x6d7aec */ W32((u32)(r_eax), 0x6d7aecu);
    /* 00605c8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00605c96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00605c99: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 00605c9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605ca0: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605ca6: call 0x5f25d0 */ r_esp -= 4; W32(r_esp, 0x605cabu); f_005f25d0();
    /* 00605cab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00605cb2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00605cb5: call 0x5fc740 */ r_esp -= 4; W32(r_esp, 0x605cbau); f_005fc740();
    /* 00605cba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605cbd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00605cc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605cc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00605cc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605cc8: ret  */ FN_RET(0x00605c60); r_esp += 4; return;
}

void f_00605cd0(void) /* sciDropListButton::vfunc55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605cd0);
    /* 00605cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00605cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605cd7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00605cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605cdb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00605cde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605cdf: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00605ce2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605ce3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00605ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605ce7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00605cea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605ceb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00605cee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605cef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00605cf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605cf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605cf6: call 0x602830 */ r_esp -= 4; W32(r_esp, 0x605cfbu); f_00602830();
    /* 00605cfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605cfd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00605cff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605d02: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00605d08: call 0x5ef340 */ r_esp -= 4; W32(r_esp, 0x605d0du); f_005ef340();
    /* 00605d0d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00605d0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605d12: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00605d18: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x605d1du); f_005ef310();
    /* 00605d1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00605d1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605d20: ret 0x1c */ FN_RET(0x00605cd0); r_esp += 32; return;
}

void f_00605d30(void) /* sciDropListButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605d30);
    /* 00605d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00605d33: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605d36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00605d37: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00605d3a: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00605d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605d3e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d41: call 0x5ebf80 */ r_esp -= 4; W32(r_esp, 0x605d46u); f_005ebf80();
    /* 00605d46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d49: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605d4d: je 0x605d6b */ if (fZ) goto L_00605d6b;
L_00605d4f:; BB(0x00605d4f);
    /* 00605d4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d52: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x605d57u); f_005f5400();
    /* 00605d57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605d58: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d5b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00605d5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d61: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00605d64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605d66: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00605d69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605d6bu); call_ind(t); }
L_00605d6b:; BB(0x00605d6b);
    /* 00605d6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d6e: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 00605d74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605d75: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605d7b: call 0x5f2920 */ r_esp -= 4; W32(r_esp, 0x605d80u); f_005f2920();
    /* 00605d80: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00605d83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605d85: je 0x605d9e */ if (fZ) goto L_00605d9e;
L_00605d87:; BB(0x00605d87);
    /* 00605d87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d8a: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 00605d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605d91: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605d97: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x605d9cu); f_005f2840();
    /* 00605d9c: jmp 0x605e18 */ goto L_00605e18;
L_00605d9e:; BB(0x00605d9e);
    /* 00605d9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605da0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605da3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605da5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605da8: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00605dae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605db0u); call_ind(t); }
    /* 00605db0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605db3: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00605db9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605dba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605dbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605dbf: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00605dc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605dc6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605dc9: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00605dcc: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x605dd1u); f_005f84f0();
    /* 00605dd1: mov esi, eax */ r_esi = r_eax;
    /* 00605dd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605dd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605dd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605ddb: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00605dde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605de0u); call_ind(t); }
    /* 00605de0: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00605de3: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00605de5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605de6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605de9: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00605dec: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x605df1u); f_005f84d0();
    /* 00605df1: mov esi, eax */ r_esi = r_eax;
    /* 00605df3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605df6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00605df8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605dfb: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00605dfe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x605e00u); call_ind(t); }
    /* 00605e00: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00605e02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00605e03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605e06: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00605e0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605e0d: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605e13: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x605e18u); f_005f2670();
L_00605e18:; BB(0x00605e18);
    /* 00605e18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00605e19: mov esp, ebp */ r_esp = r_ebp;
    /* 00605e1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605e1c: ret  */ FN_RET(0x00605d30); r_esp += 4; return;
}

void f_00605e20(void) /* sciDropListButton::vfunc60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605e20);
    /* 00605e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00605e23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605e26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00605e29: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605e2c: movzx ecx, byte ptr [eax + 0x1f4] */ r_ecx = (u32)R8((u32)(r_eax+0x1f4u));
    /* 00605e33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605e35: je 0x605e65 */ if (fZ) goto L_00605e65;
L_00605e37:; BB(0x00605e37);
    /* 00605e37: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605e3a: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00605e40: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00605e43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605e46: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605e49: jne 0x605e65 */ if (!fZ) goto L_00605e65;
L_00605e4b:; BB(0x00605e4b);
    /* 00605e4b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605e4e: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 00605e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605e55: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605e5b: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x605e60u); f_005f2840();
    /* 00605e60: jmp 0x605ee5 */ goto L_00605ee5;
L_00605e65:; BB(0x00605e65);
    /* 00605e65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605e68: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00605e6b: mov dword ptr [ecx + 0x1f0], edx */ W32((u32)(r_ecx+0x1f0u), r_edx);
    /* 00605e71: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605e74: movzx ecx, byte ptr [eax + 0x1f4] */ r_ecx = (u32)R8((u32)(r_eax+0x1f4u));
    /* 00605e7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605e7d: je 0x605ea8 */ if (fZ) goto L_00605ea8;
L_00605e7f:; BB(0x00605e7f);
    /* 00605e7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605e81: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00605e84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605e85: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605e8b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x605e90u); f_005f2a60();
    /* 00605e90: mov ecx, eax */ r_ecx = r_eax;
    /* 00605e92: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x605e97u); f_00602b70();
    /* 00605e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605e98: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605e9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605e9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605ea0: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00605ea6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605ea8u); call_ind(t); }
L_00605ea8:; BB(0x00605ea8);
    /* 00605ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605eab: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 00605eb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605eb2: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605eb8: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x605ebdu); f_005f2840();
    /* 00605ebd: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 00605ec1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605ec3: je 0x605ee5 */ if (fZ) goto L_00605ee5;
L_00605ec5:; BB(0x00605ec5);
    /* 00605ec5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605ec8: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00605ece: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00605ed1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00605ed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605ed5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605ed8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00605eda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605edd: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00605ee3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605ee5u); call_ind(t); }
L_00605ee5:; BB(0x00605ee5);
    /* 00605ee5: mov esp, ebp */ r_esp = r_ebp;
    /* 00605ee7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605ee8: ret 8 */ FN_RET(0x00605e20); r_esp += 12; return;
}

void f_00606030(void) /* sciDropListButton::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606030);
    /* 00606030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606031: mov ebp, esp */ r_ebp = r_esp;
    /* 00606033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00606037: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060603a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060603e: je 0x606060 */ if (fZ) goto L_00606060;
L_00606040:; BB(0x00606040);
    /* 00606040: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606043: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x606048u); f_005f5400();
    /* 00606048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606049: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060604c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060604d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606050: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606053: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606056: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00606059: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060605b: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0060605e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606060u); call_ind(t); }
L_00606060:; BB(0x00606060);
    /* 00606060: mov esp, ebp */ r_esp = r_ebp;
    /* 00606062: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606063: ret 4 */ FN_RET(0x00606030); r_esp += 8; return;
}

