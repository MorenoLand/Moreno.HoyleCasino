#include "protos.h"

void f_005e3cd0(void) /* CasinoEnvironmentDialog::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3cd0);
    /* 005e3cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3cd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3cda: call 0x654a50 */ r_esp -= 4; W32(r_esp, 0x5e3cdfu); f_00654a50();
    /* 005e3cdf: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3ce1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3ce2: ret  */ FN_RET(0x005e3cd0); r_esp += 4; return;
}

void f_005e3cf0(void) /* CasinoEnvironmentDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3cf0);
    /* 005e3cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3cf7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cf9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cfd: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3cff: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d01: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d03: push 0x6d525c */ { u32 v = 0x6d525cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d08: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e3d0du); f_00630f40();
    /* 005e3d0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d13: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d18: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d1a: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d1f: push 0x30d400 */ { u32 v = 0x30d400u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3d29: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5e3d2eu); f_005f9ef0();
    /* 005e3d2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d30: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d32: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d34: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d36: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d38: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d3a: push 0x6d5244 */ { u32 v = 0x6d5244u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d3f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e3d44u); f_00630f40();
    /* 005e3d44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3d47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d4a: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d4f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d51: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d56: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3d60: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5e3d65u); f_005f9ef0();
    /* 005e3d65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d67: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d6c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d71: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d76: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d7b: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d7d: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d81: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d86: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d88: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d8a: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d8f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d91: push 0x6d5230 */ { u32 v = 0x6d5230u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d96: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e3d9bu); f_00630f40();
    /* 005e3d9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3d9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3da1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3da3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3da6: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x5e3dabu); f_005fa790();
    /* 005e3dab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3dae: call 0x654a60 */ r_esp -= 4; W32(r_esp, 0x5e3db3u); f_00654a60();
    /* 005e3db3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3db5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3db6: ret  */ FN_RET(0x005e3cf0); r_esp += 4; return;
}

void f_005e3dc0(void) /* CasinoEnvironmentDialog::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3dc0);
    /* 005e3dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3dc3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3dc6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e3dc9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e3dcf: call 0x5de860 */ r_esp -= 4; W32(r_esp, 0x5e3dd4u); f_005de860();
    /* 005e3dd4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e3dd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3dd9: je 0x5e3dfb */ if (fZ) goto L_005e3dfb;
L_005e3ddb:; BB(0x005e3ddb);
    /* 005e3ddb: push 0x30d400 */ { u32 v = 0x30d400u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3de0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3de3: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e3de8u); f_005fb350();
    /* 005e3de8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e3deb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3dee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3df0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3df3: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005e3df9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3dfbu); call_ind(t); }
L_005e3dfb:; BB(0x005e3dfb);
    /* 005e3dfb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e3e01: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5e3e06u); f_006375b0();
    /* 005e3e06: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e3e09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3e0c: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e3e11u); f_005d52e0();
    /* 005e3e11: mov cl, byte ptr [eax + 0x5d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x5du))) & 0xffu);
    /* 005e3e14: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 005e3e17: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005e3e1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e1d: jne 0x5e3e3f */ if (!fZ) goto L_005e3e3f;
L_005e3e1f:; BB(0x005e3e1f);
    /* 005e3e1f: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3e27: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e3e2cu); f_005fb350();
    /* 005e3e2c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e3e2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e3e32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3e34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e3e37: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005e3e3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3e3fu); call_ind(t); }
L_005e3e3f:; BB(0x005e3e3f);
    /* 005e3e3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3e42: call 0x655360 */ r_esp -= 4; W32(r_esp, 0x5e3e47u); f_00655360();
    /* 005e3e47: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 005e3e4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e50: je 0x5e3e7d */ if (fZ) goto L_005e3e7d;
L_005e3e52:; BB(0x005e3e52);
    /* 005e3e52: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3e57: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e3e5cu); f_005fb350();
    /* 005e3e5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e5e: je 0x5e3e7d */ if (fZ) goto L_005e3e7d;
L_005e3e60:; BB(0x005e3e60);
    /* 005e3e60: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3e65: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e3e6au); f_005fb350();
    /* 005e3e6a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e3e6d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e3e70: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3e72: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e3e75: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005e3e7b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e3e7du); call_ind(t); }
L_005e3e7d:; BB(0x005e3e7d);
    /* 005e3e7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3e7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3e80: ret  */ FN_RET(0x005e3dc0); r_esp += 4; return;
}

void f_005e3e90(void) /* CasinoEnvironmentDialog::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3e90);
    /* 005e3e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e91: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3e93: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3e96: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e3e99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e3ea0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ea2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e3ea5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e3eaau); f_005fb350();
    /* 005e3eaa: mov ecx, eax */ r_ecx = r_eax;
    /* 005e3eac: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e3eb1u); f_00600230();
    /* 005e3eb1: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 005e3eb4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e3eba: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5e3ebfu); f_006375b0();
    /* 005e3ebf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e3ec2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3ec5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e3ecau); f_0063aac0();
    /* 005e3eca: mov cl, byte ptr [ebp - 0x11] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 005e3ecd: mov byte ptr [eax + 0x25d], cl */ W8((u32)(r_eax+0x25du), (u8)r_ecx);
    /* 005e3ed3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ed5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e3edb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3edd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e3ee3: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005e3ee9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e3eebu); call_ind(t); }
    /* 005e3eeb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e3eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3ef0: je 0x5e4012 */ if (fZ) goto L_005e4012;
L_005e3ef6:; BB(0x005e3ef6);
    /* 005e3ef6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e3efc: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5e3f01u); f_005de600();
    /* 005e3f01: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e3f04: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e3f07: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e3f0cu); f_005d52e0();
    /* 005e3f0c: mov cl, byte ptr [eax + 0x5d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x5du))) & 0xffu);
    /* 005e3f0f: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 005e3f12: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005e3f16: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005e3f18: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005e3f1a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e3f1d: mov byte ptr [ebp - 0xa], dl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_edx);
    /* 005e3f20: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f25: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e3f28: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e3f2du); f_005fb350();
    /* 005e3f2d: mov ecx, eax */ r_ecx = r_eax;
    /* 005e3f2f: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e3f34u); f_00600230();
    /* 005e3f34: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 005e3f37: movzx eax, byte ptr [ebp - 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005e3f3b: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005e3f3f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3f41: je 0x5e4012 */ if (fZ) goto L_005e4012;
L_005e3f47:; BB(0x005e3f47);
    /* 005e3f47: mov byte ptr [ebp - 0xb], 0 */ W8((u32)(r_ebp+0xfffffff5u), 0x0u);
    /* 005e3f4b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e3f52: jmp 0x5e3f5d */ goto L_005e3f5d;
L_005e3f54:; BB(0x005e3f54);
    /* 005e3f54: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3f57: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e3f5a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005e3f5d:; BB(0x005e3f5d);
    /* 005e3f5d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e3f62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3f64: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e3f6a: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005e3f70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3f72u); call_ind(t); }
    /* 005e3f72: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3f75: jge 0x5e3fcc */ if ((fS==fO)) goto L_005e3fcc;
L_005e3f77:; BB(0x005e3f77);
    /* 005e3f77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3f7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f7b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e3f80u); f_005dcb00();
    /* 005e3f80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3f83: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e3f86: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3f8a: je 0x5e3fca */ if (fZ) goto L_005e3fca;
L_005e3f8c:; BB(0x005e3f8c);
    /* 005e3f8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3f8f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e3f94u); f_0063aac0();
    /* 005e3f94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3f96: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005e3f99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e3f9b: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3f9f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005e3fa2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e3fa5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3fa7: je 0x5e3fca */ if (fZ) goto L_005e3fca;
L_005e3fa9:; BB(0x005e3fa9);
    /* 005e3fa9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fac: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3fb0: je 0x5e3fca */ if (fZ) goto L_005e3fca;
L_005e3fb2:; BB(0x005e3fb2);
    /* 005e3fb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3fb5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e3fb8: call 0x646cb0 */ r_esp -= 4; W32(r_esp, 0x5e3fbdu); f_00646cb0();
    /* 005e3fbd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e3fc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3fc2: jne 0x5e3fca */ if (!fZ) goto L_005e3fca;
L_005e3fc4:; BB(0x005e3fc4);
    /* 005e3fc4: mov byte ptr [ebp - 0xb], 1 */ W8((u32)(r_ebp+0xfffffff5u), 0x1u);
    /* 005e3fc8: jmp 0x5e3fcc */ goto L_005e3fcc;
L_005e3fca:; BB(0x005e3fca);
    /* 005e3fca: jmp 0x5e3f54 */ goto L_005e3f54;
L_005e3fcc:; BB(0x005e3fcc);
    /* 005e3fcc: movzx edx, byte ptr [ebp - 0xb] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 005e3fd0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3fd2: je 0x5e3fdc */ if (fZ) goto L_005e3fdc;
L_005e3fd4:; BB(0x005e3fd4);
    /* 005e3fd4: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005e3fd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3fda: jne 0x5e3fec */ if (!fZ) goto L_005e3fec;
L_005e3fdc:; BB(0x005e3fdc);
    /* 005e3fdc: movzx ecx, byte ptr [ebp - 0xb] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 005e3fe0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3fe2: jne 0x5e4012 */ if (!fZ) goto L_005e4012;
L_005e3fe4:; BB(0x005e3fe4);
    /* 005e3fe4: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005e3fe8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3fea: jne 0x5e4012 */ if (!fZ) goto L_005e4012;
L_005e3fec:; BB(0x005e3fec);
    /* 005e3fec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fee: push 0x6d529c */ { u32 v = 0x6d529cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ff3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e3ff8u); f_00630f40();
    /* 005e3ff8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ffc: push 0x6d5278 */ { u32 v = 0x6d5278u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4001: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e4006u); f_00630f40();
    /* 005e4006: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e400a: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5e400fu); f_0062ff10();
    /* 005e400f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e4012:; BB(0x005e4012);
    /* 005e4012: push 0x30d400 */ { u32 v = 0x30d400u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4017: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e401a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e401fu); f_005fb350();
    /* 005e401f: mov ecx, eax */ r_ecx = r_eax;
    /* 005e4021: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e4026u); f_00600230();
    /* 005e4026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4027: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e402d: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5e4032u); f_005de600();
    /* 005e4032: mov ecx, eax */ r_ecx = r_eax;
    /* 005e4034: call 0x5d5480 */ r_esp -= 4; W32(r_esp, 0x5e4039u); f_005d5480();
    /* 005e4039: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005e403e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e4041: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e4046u); f_005fb350();
    /* 005e4046: mov ecx, eax */ r_ecx = r_eax;
    /* 005e4048: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e404du); f_00600230();
    /* 005e404d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e4050: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4052: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005e4055: mov byte ptr [ebp - 0x25], cl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_ecx);
    /* 005e4058: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e405e: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5e4063u); f_005de600();
    /* 005e4063: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e4066: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e4069: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e406eu); f_005d52e0();
    /* 005e406e: mov dl, byte ptr [ebp - 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdbu))) & 0xffu);
    /* 005e4071: mov byte ptr [eax + 0x5d], dl */ W8((u32)(r_eax+0x5du), (u8)r_edx);
    /* 005e4074: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4076: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4077: ret  */ FN_RET(0x005e3e90); r_esp += 4; return;
}

void f_005e4080(void) /* CasinoEnvironmentDialog::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4080);
    /* 005e4080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4081: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4083: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4086: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e4089: push 0x30d400 */ { u32 v = 0x30d400u; r_esp -= 4; W32(r_esp, v); }
    /* 005e408e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4091: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e4096u); f_005fb350();
    /* 005e4096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4097: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e409a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e409b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e409e: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x5e40a3u); f_00656230();
    /* 005e40a3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e40a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e40a8: je 0x5e40e4 */ if (fZ) goto L_005e40e4;
L_005e40aa:; BB(0x005e40aa);
    /* 005e40aa: push 0x6d52dc */ { u32 v = 0x6d52dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e40af: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e40b4u); f_00630f40();
    /* 005e40b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e40b7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e40ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e40bd: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005e40c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e40c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e40c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e40ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e40cd: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e40d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e40d3: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005e40d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e40d8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005e40de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e40e0u); call_ind(t); }
    /* 005e40e0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e40e2: jmp 0x5e414d */ goto L_005e414d;
L_005e40e4:; BB(0x005e40e4);
    /* 005e40e4: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005e40e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e40ec: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e40f1u); f_005fb350();
    /* 005e40f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e40f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e40f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e40f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e40f9: call 0x656230 */ r_esp -= 4; W32(r_esp, 0x5e40feu); f_00656230();
    /* 005e40fe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e4101: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4103: je 0x5e4141 */ if (fZ) goto L_005e4141;
L_005e4105:; BB(0x005e4105);
    /* 005e4105: push 0x6d52b0 */ { u32 v = 0x6d52b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e410a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e410fu); f_00630f40();
    /* 005e410f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4112: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e4115: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4118: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005e411e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e4121: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4124: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4125: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4128: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005e412b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e412e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005e4131: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4133: mov ecx, eax */ r_ecx = r_eax;
    /* 005e4135: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005e413b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e413du); call_ind(t); }
    /* 005e413d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e413f: jmp 0x5e414d */ goto L_005e414d;
L_005e4141:; BB(0x005e4141);
    /* 005e4141: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4144: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4145: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4148: call 0x655d10 */ r_esp -= 4; W32(r_esp, 0x5e414du); f_00655d10();
L_005e414d:; BB(0x005e414d);
    /* 005e414d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e414f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4150: ret 4 */ FN_RET(0x005e4080); r_esp += 8; return;
}

void f_006556d0(void) /* CasinoEnvironmentDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006556d0);
    /* 006556d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006556d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006556d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006556d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006556d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006556dc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006556df: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006556e3: je 0x6556f3 */ if (fZ) goto L_006556f3;
L_006556e5:; BB(0x006556e5);
    /* 006556e5: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006556e9: je 0x655700 */ if (fZ) goto L_00655700;
L_006556eb:; BB(0x006556eb);
    /* 006556eb: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006556ef: je 0x65570d */ if (fZ) goto L_0065570d;
L_006556f1:; BB(0x006556f1);
    /* 006556f1: jmp 0x65571a */ goto L_0065571a;
L_006556f3:; BB(0x006556f3);
    /* 006556f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006556f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006556f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006556fb: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006556fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655700u); call_ind(t); }
L_00655700:; BB(0x00655700);
    /* 00655700: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00655706: call 0x64ee40 */ r_esp -= 4; W32(r_esp, 0x65570bu); f_0064ee40();
    /* 0065570b: jmp 0x65571a */ goto L_0065571a;
L_0065570d:; BB(0x0065570d);
    /* 0065570d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655710: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655712: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655715: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00655718: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65571au); call_ind(t); }
L_0065571a:; BB(0x0065571a);
    /* 0065571a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065571c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065571d: ret 4 */ FN_RET(0x006556d0); r_esp += 8; return;
}

void f_00655720(void) /* CasinoEnvironmentDialog::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00655720);
    /* 00655720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655721: mov ebp, esp */ r_ebp = r_esp;
    /* 00655723: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655726: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00655729: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065572e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00655730: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655736: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 0065573c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65573eu); call_ind(t); }
    /* 0065573e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00655740: jle 0x655772 */ if ((fZ||fS!=fO)) goto L_00655772;
L_00655742:; BB(0x00655742);
    /* 00655742: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00655744: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00655747: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x65574cu); f_005fb350();
    /* 0065574c: mov ecx, eax */ r_ecx = r_eax;
    /* 0065574e: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x655753u); f_00600230();
    /* 00655753: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 00655756: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065575c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x655761u); f_006375b0();
    /* 00655761: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00655764: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00655767: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65576cu); f_0063aac0();
    /* 0065576c: mov cl, byte ptr [ebp - 5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 0065576f: mov byte ptr [eax + 0x5a], cl */ W8((u32)(r_eax+0x5au), (u8)r_ecx);
L_00655772:; BB(0x00655772);
    /* 00655772: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00655774: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00655777: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x65577cu); f_005fb350();
    /* 0065577c: mov ecx, eax */ r_ecx = r_eax;
    /* 0065577e: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x655783u); f_00600230();
    /* 00655783: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00655786: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065578c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x655791u); f_006375b0();
    /* 00655791: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00655794: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00655797: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65579cu); f_0063aac0();
    /* 0065579c: mov dl, byte ptr [ebp - 0xd] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 0065579f: mov byte ptr [eax + 0x58], dl */ W8((u32)(r_eax+0x58u), (u8)r_edx);
    /* 006557a2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006557a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006557a9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006557af: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 006557b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6557b7u); call_ind(t); }
    /* 006557b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006557b9: je 0x655863 */ if (fZ) goto L_00655863;
L_006557bf:; BB(0x006557bf);
    /* 006557bf: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006557c2: call 0x655a30 */ r_esp -= 4; W32(r_esp, 0x6557c7u); f_00655a30();
    /* 006557c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006557ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006557cc: je 0x6557fa */ if (fZ) goto L_006557fa;
L_006557ce:; BB(0x006557ce);
    /* 006557ce: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006557d1: call 0x655ce0 */ r_esp -= 4; W32(r_esp, 0x6557d6u); f_00655ce0();
    /* 006557d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006557d9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006557df: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6557e4u); f_006375b0();
    /* 006557e4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006557e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006557ea: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6557efu); f_0063aac0();
    /* 006557ef: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006557f2: mov dword ptr [eax + 0x264], edx */ W32((u32)(r_eax+0x264u), r_edx);
    /* 006557f8: jmp 0x655830 */ goto L_00655830;
L_006557fa:; BB(0x006557fa);
    /* 006557fa: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006557fc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006557ff: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x655804u); f_005fb860();
    /* 00655804: mov ecx, eax */ r_ecx = r_eax;
    /* 00655806: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x65580bu); f_006051d0();
    /* 0065580b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0065580e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00655811: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655817: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x65581cu); f_006375b0();
    /* 0065581c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065581f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655822: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x655827u); f_0063aac0();
    /* 00655827: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065582a: mov dword ptr [eax + 0x260], ecx */ W32((u32)(r_eax+0x260u), r_ecx);
L_00655830:; BB(0x00655830);
    /* 00655830: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00655832: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00655835: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x65583au); f_005fb350();
    /* 0065583a: mov ecx, eax */ r_ecx = r_eax;
    /* 0065583c: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x655841u); f_00600230();
    /* 00655841: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 00655844: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065584a: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x65584fu); f_006375b0();
    /* 0065584f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00655852: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00655855: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65585au); f_0063aac0();
    /* 0065585a: mov dl, byte ptr [ebp - 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdbu))) & 0xffu);
    /* 0065585d: mov byte ptr [eax + 0x25d], dl */ W8((u32)(r_eax+0x25du), (u8)r_edx);
L_00655863:; BB(0x00655863);
    /* 00655863: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00655868: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065586a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655870: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00655876: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655878u); call_ind(t); }
    /* 00655878: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065587b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065587d: je 0x6558b2 */ if (fZ) goto L_006558b2;
L_0065587f:; BB(0x0065587f);
    /* 0065587f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00655881: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00655884: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x655889u); f_005fb350();
    /* 00655889: mov ecx, eax */ r_ecx = r_eax;
    /* 0065588b: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x655890u); f_00600230();
    /* 00655890: mov byte ptr [ebp - 0x2d], al */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_eax);
    /* 00655893: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655899: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x65589eu); f_006375b0();
    /* 0065589e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006558a1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006558a4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6558a9u); f_0063aac0();
    /* 006558a9: mov dl, byte ptr [ebp - 0x2d] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd3u))) & 0xffu);
    /* 006558ac: mov byte ptr [eax + 0x378], dl */ W8((u32)(r_eax+0x378u), (u8)r_edx);
L_006558b2:; BB(0x006558b2);
    /* 006558b2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006558b4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006558b7: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6558bcu); f_005fb350();
    /* 006558bc: mov ecx, eax */ r_ecx = r_eax;
    /* 006558be: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x6558c3u); f_00600230();
    /* 006558c3: mov byte ptr [ebp - 0x35], al */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_eax);
    /* 006558c6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006558cc: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6558d1u); f_006375b0();
    /* 006558d1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006558d4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006558d7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6558dcu); f_0063aac0();
    /* 006558dc: mov cl, byte ptr [ebp - 0x35] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffcbu))) & 0xffu);
    /* 006558df: mov byte ptr [eax + 0x59], cl */ W8((u32)(r_eax+0x59u), (u8)r_ecx);
    /* 006558e2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006558e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006558ea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006558f0: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 006558f6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6558f8u); call_ind(t); }
    /* 006558f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006558fa: jle 0x65592c */ if ((fZ||fS!=fO)) goto L_0065592c;
L_006558fc:; BB(0x006558fc);
    /* 006558fc: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006558fe: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00655901: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x655906u); f_005fb860();
    /* 00655906: mov ecx, eax */ r_ecx = r_eax;
    /* 00655908: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x65590du); f_006051d0();
    /* 0065590d: mov byte ptr [ebp - 0x3d], al */ W8((u32)(r_ebp+0xffffffc3u), (u8)r_eax);
    /* 00655910: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655916: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x65591bu); f_006375b0();
    /* 0065591b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0065591e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00655921: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x655926u); f_0063aac0();
    /* 00655926: mov cl, byte ptr [ebp - 0x3d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc3u))) & 0xffu);
    /* 00655929: mov byte ptr [eax + 0x5c], cl */ W8((u32)(r_eax+0x5cu), (u8)r_ecx);
L_0065592c:; BB(0x0065592c);
    /* 0065592c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00655932: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00655934: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065593a: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00655940: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x655942u); call_ind(t); }
    /* 00655942: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00655945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655947: je 0x655983 */ if (fZ) goto L_00655983;
L_00655949:; BB(0x00655949);
    /* 00655949: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065594b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065594e: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x655953u); f_005fb860();
    /* 00655953: mov ecx, eax */ r_ecx = r_eax;
    /* 00655955: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x65595au); f_006051d0();
    /* 0065595a: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 0065595d: mov edx, 0xa */ r_edx = 0xau;
    /* 00655962: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00655964: mov byte ptr [ebp - 0x45], dl */ W8((u32)(r_ebp+0xffffffbbu), (u8)r_edx);
    /* 00655967: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065596d: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x655972u); f_006375b0();
    /* 00655972: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00655975: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00655978: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65597du); f_0063aac0();
    /* 0065597d: mov cl, byte ptr [ebp - 0x45] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffbbu))) & 0xffu);
    /* 00655980: mov byte ptr [eax + 0x5b], cl */ W8((u32)(r_eax+0x5bu), (u8)r_ecx);
L_00655983:; BB(0x00655983);
    /* 00655983: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00655989: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065598b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655991: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00655997: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x655999u); call_ind(t); }
    /* 00655999: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065599c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065599e: je 0x6559e5 */ if (fZ) goto L_006559e5;
L_006559a0:; BB(0x006559a0);
    /* 006559a0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006559a2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006559a5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6559aau); f_005fb350();
    /* 006559aa: mov ecx, eax */ r_ecx = r_eax;
    /* 006559ac: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x6559b1u); f_00600230();
    /* 006559b1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006559b4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 006559b6: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006559b8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006559bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006559bc: push 0x6da2dc */ { u32 v = 0x6da2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006559c1: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006559c7: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006559ca: call 0x6079d0 */ r_esp -= 4; W32(r_esp, 0x6559cfu); f_006079d0();
    /* 006559cf: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006559d1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006559d4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6559d9u); f_005fb350();
    /* 006559d9: mov ecx, eax */ r_ecx = r_eax;
    /* 006559db: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x6559e0u); f_00600230();
    /* 006559e0: mov byte ptr [0x7960c5], al */ W8((u32)(0x7960c5u), (u8)r_eax);
L_006559e5:; BB(0x006559e5);
    /* 006559e5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006559e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006559ea: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006559ed: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006559f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6559f2u); call_ind(t); }
    /* 006559f2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006559f8: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x6559fdu); f_00637610();
    /* 006559fd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655a03: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655a05: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655a0b: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 00655a11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655a13u); call_ind(t); }
    /* 00655a13: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00655a19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655a1b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00655a21: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00655a27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655a29u); call_ind(t); }
    /* 00655a29: mov esp, ebp */ r_esp = r_ebp;
    /* 00655a2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00655a2c: ret  */ FN_RET(0x00655720); r_esp += 4; return;
}

