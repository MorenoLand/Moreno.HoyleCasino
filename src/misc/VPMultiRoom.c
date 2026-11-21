#include "protos.h"

void f_00566da0(void) /* VPMultiRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566da0);
    /* 00566da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00566da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566da7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566daa: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x566dafu); f_005d7b60();
    /* 00566daf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566db2: mov dword ptr [eax], 0x6c9ad4 */ W32((u32)(r_eax), 0x6c9ad4u);
    /* 00566db8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566dbb: mov dword ptr [0x793438], ecx */ W32((u32)(0x793438u), r_ecx);
    /* 00566dc1: mov dword ptr [0x79343c], 0 */ W32((u32)(0x79343cu), 0x0u);
    /* 00566dcb: mov dword ptr [0x793440], 0 */ W32((u32)(0x793440u), 0x0u);
    /* 00566dd5: mov dword ptr [0x793444], 0 */ W32((u32)(0x793444u), 0x0u);
    /* 00566ddf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566de2: mov esp, ebp */ r_esp = r_ebp;
    /* 00566de4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566de5: ret  */ FN_RET(0x00566da0); r_esp += 4; return;
}

void f_00566df0(void) /* VPMultiRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566df0);
    /* 00566df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00566df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00566df5: push 0x6a5b98 */ { u32 v = 0x6a5b98u; r_esp -= 4; W32(r_esp, v); }
    /* 00566dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00566e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566e01: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566e04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00566e09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00566e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566e0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00566e0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00566e15: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00566e18: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566e1b: mov dword ptr [eax], 0x6c9ad4 */ W32((u32)(r_eax), 0x6c9ad4u);
    /* 00566e21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00566e28: mov dword ptr [0x793438], 0 */ W32((u32)(0x793438u), 0x0u);
    /* 00566e32: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00566e38: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00566e3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00566e3e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00566e41: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566e45: je 0x566e5a */ if (fZ) goto L_00566e5a;
L_00566e47:; BB(0x00566e47);
    /* 00566e47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00566e49: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00566e4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566e4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00566e51: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00566e53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566e55u); call_ind(t); }
    /* 00566e55: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00566e58: jmp 0x566e61 */ goto L_00566e61;
L_00566e5a:; BB(0x00566e5a);
    /* 00566e5a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00566e61:; BB(0x00566e61);
    /* 00566e61: mov dword ptr [0x79343c], 0 */ W32((u32)(0x79343cu), 0x0u);
    /* 00566e6b: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00566e71: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00566e74: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00566e77: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00566e7a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566e7e: je 0x566e93 */ if (fZ) goto L_00566e93;
L_00566e80:; BB(0x00566e80);
    /* 00566e80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00566e82: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00566e85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566e87: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00566e8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00566e8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566e8eu); call_ind(t); }
    /* 00566e8e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00566e91: jmp 0x566e9a */ goto L_00566e9a;
L_00566e93:; BB(0x00566e93);
    /* 00566e93: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00566e9a:; BB(0x00566e9a);
    /* 00566e9a: mov dword ptr [0x793440], 0 */ W32((u32)(0x793440u), 0x0u);
    /* 00566ea4: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 00566eaa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00566ead: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00566eb0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00566eb3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566eb7: je 0x566ecc */ if (fZ) goto L_00566ecc;
L_00566eb9:; BB(0x00566eb9);
    /* 00566eb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00566ebb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00566ebe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566ec0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00566ec3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00566ec5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566ec7u); call_ind(t); }
    /* 00566ec7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00566eca: jmp 0x566ed3 */ goto L_00566ed3;
L_00566ecc:; BB(0x00566ecc);
    /* 00566ecc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00566ed3:; BB(0x00566ed3);
    /* 00566ed3: mov dword ptr [0x793444], 0 */ W32((u32)(0x793444u), 0x0u);
    /* 00566edd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00566ee4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566ee7: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x566eecu); f_005d7bd0();
    /* 00566eec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566eef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00566ef6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00566ef7: mov esp, ebp */ r_esp = r_ebp;
    /* 00566ef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566efa: ret  */ FN_RET(0x00566df0); r_esp += 4; return;
}

void f_00566f00(void) /* VPMultiRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566f00);
    /* 00566f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00566f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00566f05: push 0x6a5bdf */ { u32 v = 0x6a5bdfu; r_esp -= 4; W32(r_esp, v); }
    /* 00566f0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00566f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566f11: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566f14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00566f19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00566f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566f1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00566f1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00566f25: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00566f28: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00566f2b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x566f30u); f_005d8230();
    /* 00566f30: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00566f32: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x566f37u); f_00686d82();
    /* 00566f37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566f3a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00566f3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00566f44: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566f48: je 0x566f57 */ if (fZ) goto L_00566f57;
L_00566f4a:; BB(0x00566f4a);
    /* 00566f4a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00566f4d: call 0x568320 */ r_esp -= 4; W32(r_esp, 0x566f52u); f_00568320();
    /* 00566f52: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00566f55: jmp 0x566f5e */ goto L_00566f5e;
L_00566f57:; BB(0x00566f57);
    /* 00566f57: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00566f5e:; BB(0x00566f5e);
    /* 00566f5e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00566f61: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00566f64: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00566f6b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00566f6e: mov dword ptr [0x79343c], ecx */ W32((u32)(0x79343cu), r_ecx);
    /* 00566f74: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00566f7a: call 0x5685c0 */ r_esp -= 4; W32(r_esp, 0x566f7fu); f_005685c0();
    /* 00566f7f: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00566f84: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x566f89u); f_00686d82();
    /* 00566f89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566f8c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00566f8f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00566f96: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566f9a: je 0x566fa9 */ if (fZ) goto L_00566fa9;
L_00566f9c:; BB(0x00566f9c);
    /* 00566f9c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00566f9f: call 0x55f930 */ r_esp -= 4; W32(r_esp, 0x566fa4u); f_0055f930();
    /* 00566fa4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00566fa7: jmp 0x566fb0 */ goto L_00566fb0;
L_00566fa9:; BB(0x00566fa9);
    /* 00566fa9: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00566fb0:; BB(0x00566fb0);
    /* 00566fb0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00566fb3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00566fb6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00566fbd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00566fc0: mov dword ptr [0x793440], eax */ W32((u32)(0x793440u), r_eax);
    /* 00566fc5: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00566fcb: call 0x560580 */ r_esp -= 4; W32(r_esp, 0x566fd0u); f_00560580();
    /* 00566fd0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00566fd2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x566fd7u); f_00686d82();
    /* 00566fd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566fda: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00566fdd: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00566fe4: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566fe8: je 0x566ff7 */ if (fZ) goto L_00566ff7;
L_00566fea:; BB(0x00566fea);
    /* 00566fea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00566fed: call 0x559230 */ r_esp -= 4; W32(r_esp, 0x566ff2u); f_00559230();
    /* 00566ff2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00566ff5: jmp 0x566ffe */ goto L_00566ffe;
L_00566ff7:; BB(0x00566ff7);
    /* 00566ff7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00566ffe:; BB(0x00566ffe);
    /* 00566ffe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00567001: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00567004: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056700b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056700e: mov dword ptr [0x793444], edx */ W32((u32)(0x793444u), r_edx);
    /* 00567014: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056701a: call 0x569640 */ r_esp -= 4; W32(r_esp, 0x56701fu); f_00569640();
    /* 0056701f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00567021: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x567026u); f_00686d82();
    /* 00567026: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567029: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0056702c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00567033: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567037: je 0x567054 */ if (fZ) goto L_00567054;
L_00567039:; BB(0x00567039);
    /* 00567039: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056703b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056703e: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x567043u); f_005fc0d0();
    /* 00567043: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00567046: mov dword ptr [eax], 0x6c9dd4 */ W32((u32)(r_eax), 0x6c9dd4u);
    /* 0056704c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056704f: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00567052: jmp 0x56705b */ goto L_0056705b;
L_00567054:; BB(0x00567054);
    /* 00567054: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0056705b:; BB(0x0056705b);
    /* 0056705b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0056705e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00567061: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00567068: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056706b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056706c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056706f: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x567074u); f_005f1b70();
    /* 00567074: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056707a: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0056707d: mov byte ptr [ebp - 0x2d], dl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_edx);
    /* 00567080: movzx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 00567084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567086: je 0x56709f */ if (fZ) goto L_0056709f;
L_00567088:; BB(0x00567088);
    /* 00567088: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056708a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056708d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00567090: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00567093: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00567096: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00567098: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056709b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56709du); call_ind(t); }
    /* 0056709d: jmp 0x5670b2 */ goto L_005670b2;
L_0056709f:; BB(0x0056709f);
    /* 0056709f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005670a2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005670a5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005670a8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005670ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005670ad: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005670b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5670b2u); call_ind(t); }
L_005670b2:; BB(0x005670b2);
    /* 005670b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005670b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005670bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005670bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005670bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005670c0: ret  */ FN_RET(0x00566f00); r_esp += 4; return;
}

void f_005670d0(void) /* VPMultiRoom::vfunc155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005670d0);
    /* 005670d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005670d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005670d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005670d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005670d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005670da: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005670e0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005670e3: mov dword ptr [ecx], 0x3b9aca00 */ W32((u32)(r_ecx), 0x3b9aca00u);
    /* 005670e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005670eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005670ec: ret 8 */ FN_RET(0x005670d0); r_esp += 12; return;
}

void f_005670f0(void) /* VPMultiRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005670f0);
    /* 005670f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005670f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005670f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005670f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005670f7: mov eax, 0x30ef58 */ r_eax = 0x30ef58u;
    /* 005670fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005670fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005670ff: ret  */ FN_RET(0x005670f0); r_esp += 4; return;
}

void f_00567100(void) /* VPMultiRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567100);
    /* 00567100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567101: mov ebp, esp */ r_ebp = r_esp;
    /* 00567103: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567106: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567109: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056710c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056710f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567116: je 0x567133 */ if (fZ) goto L_00567133;
L_00567118:; BB(0x00567118);
    /* 00567118: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056711f: je 0x56719d */ if (fZ) goto L_0056719d;
L_00567121:; BB(0x00567121);
    /* 00567121: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567128: je 0x5671c9 */ if (fZ) goto L_005671c9;
L_0056712e:; BB(0x0056712e);
    /* 0056712e: jmp 0x5671fe */ goto L_005671fe;
L_00567133:; BB(0x00567133);
    /* 00567133: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567135: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0056713a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056713d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x567142u); f_005fe640();
    /* 00567142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567144: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00567149: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056714c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x567151u); f_005fe640();
    /* 00567151: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567153: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00567158: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056715b: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x567160u); f_005fe640();
    /* 00567160: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567162: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00567167: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056716a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x56716fu); f_005fe640();
    /* 0056716f: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 00567176: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567178: jne 0x56718f */ if (!fZ) goto L_0056718f;
L_0056717a:; BB(0x0056717a);
    /* 0056717a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056717c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056717e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00567180: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00567185: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567188: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x56718du); f_005fe240();
    /* 0056718d: jmp 0x56719b */ goto L_0056719b;
L_0056718f:; BB(0x0056718f);
    /* 0056718f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567191: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00567193: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567196: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x56719bu); f_005fe640();
L_0056719b:; BB(0x0056719b);
    /* 0056719b: jmp 0x5671fe */ goto L_005671fe;
L_0056719d:; BB(0x0056719d);
    /* 0056719d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056719f: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005671a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005671a7: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5671acu); f_005fe640();
    /* 005671ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005671ae: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005671b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005671b6: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5671bbu); f_005fe640();
    /* 005671bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005671bd: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005671bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005671c2: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5671c7u); f_005fe640();
    /* 005671c7: jmp 0x5671fe */ goto L_005671fe;
L_005671c9:; BB(0x005671c9);
    /* 005671c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005671cb: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005671d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005671d3: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5671d8u); f_005fe640();
    /* 005671d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005671da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005671dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005671de: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005671e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005671e6: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5671ebu); f_005fe240();
    /* 005671eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005671ed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005671ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005671f1: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005671f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005671f9: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5671feu); f_005fe240();
L_005671fe:; BB(0x005671fe);
    /* 005671fe: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00567201: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567202: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567206: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567209: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x56720eu); f_005d8670();
    /* 0056720e: mov esp, ebp */ r_esp = r_ebp;
    /* 00567210: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567211: ret 8 */ FN_RET(0x00567100); r_esp += 12; return;
}

void f_00567220(void) /* VPMultiRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567220);
    /* 00567220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567221: mov ebp, esp */ r_ebp = r_esp;
    /* 00567223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567227: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056722c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00567232: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x567237u); f_005df2e0();
    /* 00567237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567238: push 0x312221 */ { u32 v = 0x312221u; r_esp -= 4; W32(r_esp, v); }
    /* 0056723d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567240: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x567245u); f_005f1e60();
    /* 00567245: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567248: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x56724du); f_0064e430();
    /* 0056724d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056724f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567250: ret  */ FN_RET(0x00567220); r_esp += 4; return;
}

void f_00567260(void) /* VPMultiRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567260);
    /* 00567260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567261: mov ebp, esp */ r_ebp = r_esp;
    /* 00567263: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567266: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567269: cmp dword ptr [0x79343c], 0 */ {  u32 a = R32((u32)(0x79343cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567270: je 0x567284 */ if (fZ) goto L_00567284;
L_00567272:; BB(0x00567272);
    /* 00567272: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00567277: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 0056727b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056727d: je 0x567284 */ if (fZ) goto L_00567284;
L_0056727f:; BB(0x0056727f);
    /* 0056727f: jmp 0x567355 */ goto L_00567355;
L_00567284:; BB(0x00567284);
    /* 00567284: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567287: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0056728a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056728d: sub eax, 0x312222 */ {  u32 a = r_eax; u32 b = 0x312222u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00567292: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00567295: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00567299: ja 0x567345 */ if ((!fC&&!fZ)) goto L_00567345;
L_0056729f:; BB(0x0056729f);
    /* 0056729f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005672a2: jmp dword ptr [ecx*4 + 0x56735c] */ { u32 t = R32((u32)(r_ecx*4+0x56735cu)); switch (t) { case 0x5672a9u: goto L_005672a9; case 0x5672bbu: goto L_005672bb; case 0x5672cdu: goto L_005672cd; case 0x5672dcu: goto L_005672dc; case 0x5672ebu: goto L_005672eb; case 0x5672fau: goto L_005672fa; case 0x567309u: goto L_00567309; case 0x567318u: goto L_00567318; case 0x567327u: goto L_00567327; case 0x567336u: goto L_00567336; default: UNSUP(0x005672a2, "jump table entry is not a known target"); } }
L_005672a9:; BB(0x005672a9);
    /* 005672a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005672ab: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005672b1: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x5672b6u); f_00569580();
    /* 005672b6: jmp 0x567355 */ goto L_00567355;
L_005672bb:; BB(0x005672bb);
    /* 005672bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005672bd: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005672c3: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x5672c8u); f_00569580();
    /* 005672c8: jmp 0x567355 */ goto L_00567355;
L_005672cd:; BB(0x005672cd);
    /* 005672cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005672cf: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005672d5: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x5672dau); f_00569580();
    /* 005672da: jmp 0x567355 */ goto L_00567355;
L_005672dc:; BB(0x005672dc);
    /* 005672dc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005672de: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005672e4: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x5672e9u); f_00569580();
    /* 005672e9: jmp 0x567355 */ goto L_00567355;
L_005672eb:; BB(0x005672eb);
    /* 005672eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005672ed: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005672f3: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x5672f8u); f_00569580();
    /* 005672f8: jmp 0x567355 */ goto L_00567355;
L_005672fa:; BB(0x005672fa);
    /* 005672fa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005672fc: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567302: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567307u); f_00568fb0();
    /* 00567307: jmp 0x567355 */ goto L_00567355;
L_00567309:; BB(0x00567309);
    /* 00567309: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056730b: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567311: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567316u); f_00568fb0();
    /* 00567316: jmp 0x567355 */ goto L_00567355;
L_00567318:; BB(0x00567318);
    /* 00567318: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056731a: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567320: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567325u); f_00568fb0();
    /* 00567325: jmp 0x567355 */ goto L_00567355;
L_00567327:; BB(0x00567327);
    /* 00567327: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00567329: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056732f: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567334u); f_00568fb0();
    /* 00567334: jmp 0x567355 */ goto L_00567355;
L_00567336:; BB(0x00567336);
    /* 00567336: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00567338: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056733e: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567343u); f_00568fb0();
    /* 00567343: jmp 0x567355 */ goto L_00567355;
L_00567345:; BB(0x00567345);
    /* 00567345: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00567348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567349: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056734c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056734d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567350: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x567355u); f_005dc7d0();
L_00567355:; BB(0x00567355);
    /* 00567355: mov esp, ebp */ r_esp = r_ebp;
    /* 00567357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567358: ret 8 */ FN_RET(0x00567260); r_esp += 12; return;
}

void f_00567390(void) /* VPMultiRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567390);
    /* 00567390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567391: mov ebp, esp */ r_ebp = r_esp;
    /* 00567393: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567396: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567399: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056739c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056739d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005673a0: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5673a5u); f_005d7f40();
    /* 005673a5: cmp dword ptr [0x79343c], 0 */ {  u32 a = R32((u32)(0x79343cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005673ac: je 0x5673fa */ if (fZ) goto L_005673fa;
L_005673ae:; BB(0x005673ae);
    /* 005673ae: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005673b4: movzx edx, byte ptr [ecx + 0x18] */ r_edx = (u32)R8((u32)(r_ecx+0x18u));
    /* 005673b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005673ba: je 0x5673fa */ if (fZ) goto L_005673fa;
L_005673bc:; BB(0x005673bc);
    /* 005673bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005673bf: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005673c3: je 0x5673e4 */ if (fZ) goto L_005673e4;
L_005673c5:; BB(0x005673c5);
    /* 005673c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005673c8: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005673cc: jne 0x5673fa */ if (!fZ) goto L_005673fa;
L_005673ce:; BB(0x005673ce);
    /* 005673ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005673d1: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 005673d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005673d6: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5673dcu); call_ind(t); }
    /* 005673dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005673df: cmp eax, 0x73 */ {  u32 a = r_eax; u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005673e2: jne 0x5673fa */ if (!fZ) goto L_005673fa;
L_005673e4:; BB(0x005673e4);
    /* 005673e4: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005673ea: mov byte ptr [ecx + 0x19], 1 */ W8((u32)(r_ecx+0x19u), 0x1u);
    /* 005673ee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005673f1: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005673f5: jmp 0x5676dc */ goto L_005676dc;
L_005673fa:; BB(0x005673fa);
    /* 005673fa: cmp dword ptr [0x79343c], 0 */ {  u32 a = R32((u32)(0x79343cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567401: je 0x567415 */ if (fZ) goto L_00567415;
L_00567403:; BB(0x00567403);
    /* 00567403: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00567408: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 0056740c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056740e: je 0x567415 */ if (fZ) goto L_00567415;
L_00567410:; BB(0x00567410);
    /* 00567410: jmp 0x5676dc */ goto L_005676dc;
L_00567415:; BB(0x00567415);
    /* 00567415: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567418: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056741c: jne 0x5676dc */ if (!fZ) goto L_005676dc;
L_00567422:; BB(0x00567422);
    /* 00567422: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567425: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00567429: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056742b: jne 0x5676dc */ if (!fZ) goto L_005676dc;
L_00567431:; BB(0x00567431);
    /* 00567431: cmp dword ptr [0x79343c], 0 */ {  u32 a = R32((u32)(0x79343cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567438: je 0x5676dc */ if (fZ) goto L_005676dc;
L_0056743e:; BB(0x0056743e);
    /* 0056743e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567441: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00567445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567446: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x56744cu); call_ind(t); }
    /* 0056744c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056744f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00567452: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567455: sub ecx, 0x31 */ {  u32 a = r_ecx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00567458: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056745b: cmp dword ptr [ebp - 8], 0x43 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056745f: ja 0x5676dc */ if ((!fC&&!fZ)) goto L_005676dc;
L_00567465:; BB(0x00567465);
    /* 00567465: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567468: movzx eax, byte ptr [edx + 0x567714] */ r_eax = (u32)R8((u32)(r_edx+0x567714u));
    /* 0056746f: jmp dword ptr [eax*4 + 0x5676e4] */ { u32 t = R32((u32)(r_eax*4+0x5676e4u)); switch (t) { case 0x567476u: goto L_00567476; case 0x5674afu: goto L_005674af; case 0x5674e8u: goto L_005674e8; case 0x567521u: goto L_00567521; case 0x56755au: goto L_0056755a; case 0x567593u: goto L_00567593; case 0x5675ccu: goto L_005675cc; case 0x567674u: goto L_00567674; case 0x56763eu: goto L_0056763e; case 0x567605u: goto L_00567605; case 0x5676aau: goto L_005676aa; case 0x5676dcu: goto L_005676dc; default: UNSUP(0x0056746f, "jump table entry is not a known target"); } }
L_00567476:; BB(0x00567476);
    /* 00567476: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567478: push 0x312222 */ { u32 v = 0x312222u; r_esp -= 4; W32(r_esp, v); }
    /* 0056747d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00567483: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x567488u); f_005f2a60();
    /* 00567488: mov ecx, eax */ r_ecx = r_eax;
    /* 0056748a: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x56748fu); f_006026d0();
    /* 0056748f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00567492: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567494: je 0x5674aa */ if (fZ) goto L_005674aa;
L_00567496:; BB(0x00567496);
    /* 00567496: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567498: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056749e: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x5674a3u); f_00569580();
    /* 005674a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005674a6: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_005674aa:; BB(0x005674aa);
    /* 005674aa: jmp 0x5676dc */ goto L_005676dc;
L_005674af:; BB(0x005674af);
    /* 005674af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005674b1: push 0x312223 */ { u32 v = 0x312223u; r_esp -= 4; W32(r_esp, v); }
    /* 005674b6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005674bc: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5674c1u); f_005f2a60();
    /* 005674c1: mov ecx, eax */ r_ecx = r_eax;
    /* 005674c3: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5674c8u); f_006026d0();
    /* 005674c8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005674cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005674cd: je 0x5674e3 */ if (fZ) goto L_005674e3;
L_005674cf:; BB(0x005674cf);
    /* 005674cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005674d1: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005674d7: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x5674dcu); f_00569580();
    /* 005674dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005674df: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005674e3:; BB(0x005674e3);
    /* 005674e3: jmp 0x5676dc */ goto L_005676dc;
L_005674e8:; BB(0x005674e8);
    /* 005674e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005674ea: push 0x312224 */ { u32 v = 0x312224u; r_esp -= 4; W32(r_esp, v); }
    /* 005674ef: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005674f5: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5674fau); f_005f2a60();
    /* 005674fa: mov ecx, eax */ r_ecx = r_eax;
    /* 005674fc: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x567501u); f_006026d0();
    /* 00567501: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00567504: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567506: je 0x56751c */ if (fZ) goto L_0056751c;
L_00567508:; BB(0x00567508);
    /* 00567508: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056750a: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567510: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x567515u); f_00569580();
    /* 00567515: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567518: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_0056751c:; BB(0x0056751c);
    /* 0056751c: jmp 0x5676dc */ goto L_005676dc;
L_00567521:; BB(0x00567521);
    /* 00567521: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567523: push 0x312225 */ { u32 v = 0x312225u; r_esp -= 4; W32(r_esp, v); }
    /* 00567528: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056752e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x567533u); f_005f2a60();
    /* 00567533: mov ecx, eax */ r_ecx = r_eax;
    /* 00567535: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x56753au); f_006026d0();
    /* 0056753a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056753d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056753f: je 0x567555 */ if (fZ) goto L_00567555;
L_00567541:; BB(0x00567541);
    /* 00567541: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00567543: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567549: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x56754eu); f_00569580();
    /* 0056754e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567551: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00567555:; BB(0x00567555);
    /* 00567555: jmp 0x5676dc */ goto L_005676dc;
L_0056755a:; BB(0x0056755a);
    /* 0056755a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056755c: push 0x312226 */ { u32 v = 0x312226u; r_esp -= 4; W32(r_esp, v); }
    /* 00567561: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00567567: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x56756cu); f_005f2a60();
    /* 0056756c: mov ecx, eax */ r_ecx = r_eax;
    /* 0056756e: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x567573u); f_006026d0();
    /* 00567573: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00567576: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567578: je 0x56758e */ if (fZ) goto L_0056758e;
L_0056757a:; BB(0x0056757a);
    /* 0056757a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056757c: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567582: call 0x569580 */ r_esp -= 4; W32(r_esp, 0x567587u); f_00569580();
    /* 00567587: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056758a: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0056758e:; BB(0x0056758e);
    /* 0056758e: jmp 0x5676dc */ goto L_005676dc;
L_00567593:; BB(0x00567593);
    /* 00567593: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567595: push 0x312227 */ { u32 v = 0x312227u; r_esp -= 4; W32(r_esp, v); }
    /* 0056759a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005675a0: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5675a5u); f_005f2a60();
    /* 005675a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005675a7: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5675acu); f_006026d0();
    /* 005675ac: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005675af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005675b1: je 0x5675c7 */ if (fZ) goto L_005675c7;
L_005675b3:; BB(0x005675b3);
    /* 005675b3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005675b5: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005675bb: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x5675c0u); f_00568fb0();
    /* 005675c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005675c3: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_005675c7:; BB(0x005675c7);
    /* 005675c7: jmp 0x5676dc */ goto L_005676dc;
L_005675cc:; BB(0x005675cc);
    /* 005675cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005675ce: push 0x312228 */ { u32 v = 0x312228u; r_esp -= 4; W32(r_esp, v); }
    /* 005675d3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005675d9: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5675deu); f_005f2a60();
    /* 005675de: mov ecx, eax */ r_ecx = r_eax;
    /* 005675e0: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5675e5u); f_006026d0();
    /* 005675e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005675e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005675ea: je 0x567600 */ if (fZ) goto L_00567600;
L_005675ec:; BB(0x005675ec);
    /* 005675ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005675ee: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005675f4: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x5675f9u); f_00568fb0();
    /* 005675f9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005675fc: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00567600:; BB(0x00567600);
    /* 00567600: jmp 0x5676dc */ goto L_005676dc;
L_00567605:; BB(0x00567605);
    /* 00567605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567607: push 0x312229 */ { u32 v = 0x312229u; r_esp -= 4; W32(r_esp, v); }
    /* 0056760c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00567612: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x567617u); f_005f2a60();
    /* 00567617: mov ecx, eax */ r_ecx = r_eax;
    /* 00567619: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x56761eu); f_006026d0();
    /* 0056761e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00567621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567623: je 0x567639 */ if (fZ) goto L_00567639;
L_00567625:; BB(0x00567625);
    /* 00567625: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567627: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056762d: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567632u); f_00568fb0();
    /* 00567632: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567635: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00567639:; BB(0x00567639);
    /* 00567639: jmp 0x5676dc */ goto L_005676dc;
L_0056763e:; BB(0x0056763e);
    /* 0056763e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567640: push 0x31222a */ { u32 v = 0x31222au; r_esp -= 4; W32(r_esp, v); }
    /* 00567645: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056764b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x567650u); f_005f2a60();
    /* 00567650: mov ecx, eax */ r_ecx = r_eax;
    /* 00567652: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x567657u); f_006026d0();
    /* 00567657: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056765a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056765c: je 0x567672 */ if (fZ) goto L_00567672;
L_0056765e:; BB(0x0056765e);
    /* 0056765e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00567660: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567666: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x56766bu); f_00568fb0();
    /* 0056766b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056766e: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00567672:; BB(0x00567672);
    /* 00567672: jmp 0x5676dc */ goto L_005676dc;
L_00567674:; BB(0x00567674);
    /* 00567674: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567676: push 0x31222b */ { u32 v = 0x31222bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056767b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00567681: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x567686u); f_005f2a60();
    /* 00567686: mov ecx, eax */ r_ecx = r_eax;
    /* 00567688: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x56768du); f_006026d0();
    /* 0056768d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00567690: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567692: je 0x5676a8 */ if (fZ) goto L_005676a8;
L_00567694:; BB(0x00567694);
    /* 00567694: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00567696: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056769c: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x5676a1u); f_00568fb0();
    /* 005676a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005676a4: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_005676a8:; BB(0x005676a8);
    /* 005676a8: jmp 0x5676dc */ goto L_005676dc;
L_005676aa:; BB(0x005676aa);
    /* 005676aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005676ac: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005676b1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005676b7: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5676bcu); f_005f2a60();
    /* 005676bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005676be: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5676c3u); f_006026d0();
    /* 005676c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005676c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005676c8: je 0x5676dc */ if (fZ) goto L_005676dc;
L_005676ca:; BB(0x005676ca);
    /* 005676ca: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 005676d0: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x5676d5u); f_005db240();
    /* 005676d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005676d8: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005676dc:; BB(0x005676dc);
    /* 005676dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005676de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005676df: ret 4 */ FN_RET(0x00567390); r_esp += 8; return;
}

void f_00567760(void) /* VPMultiRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567760);
    /* 00567760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567761: mov ebp, esp */ r_ebp = r_esp;
    /* 00567763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567767: cmp dword ptr [0x79343c], 0 */ {  u32 a = R32((u32)(0x79343cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056776e: jne 0x567774 */ if (!fZ) goto L_00567774;
L_00567770:; BB(0x00567770);
    /* 00567770: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00567772: jmp 0x56777f */ goto L_0056777f;
L_00567774:; BB(0x00567774);
    /* 00567774: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056777a: call 0x568760 */ r_esp -= 4; W32(r_esp, 0x56777fu); f_00568760();
L_0056777f:; BB(0x0056777f);
    /* 0056777f: mov esp, ebp */ r_esp = r_ebp;
    /* 00567781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567782: ret  */ FN_RET(0x00567760); r_esp += 4; return;
}

void f_00567790(void) /* VPMultiRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567790);
    /* 00567790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567791: mov ebp, esp */ r_ebp = r_esp;
    /* 00567793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567797: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567799: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0056779b: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005677a0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005677a3: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x5677a8u); f_0056a7a0();
    /* 005677a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005677aa: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005677b0: call 0x568450 */ r_esp -= 4; W32(r_esp, 0x5677b5u); f_00568450();
    /* 005677b5: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005677bb: call 0x561950 */ r_esp -= 4; W32(r_esp, 0x5677c0u); f_00561950();
    /* 005677c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005677c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005677c3: ret  */ FN_RET(0x00567790); r_esp += 4; return;
}

void f_005677d0(void) /* VPMultiRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005677d0);
    /* 005677d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005677d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005677d3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005677d6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005677d9: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005677de: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005677e1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005677e4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005677e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005677e8: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005677eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005677ec: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005677f2: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5677f7u); f_005d0c30();
    /* 005677f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005677fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005677fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005677fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005677fe: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00567801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567802: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00567805: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567806: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056780c: call 0x5d0cd0 */ r_esp -= 4; W32(r_esp, 0x567811u); f_005d0cd0();
    /* 00567811: mov ecx, eax */ r_ecx = r_eax;
    /* 00567813: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x567818u); f_0064c630();
    /* 00567818: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056781b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056781c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056781f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567820: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567824: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x567829u); f_005dcb00();
    /* 00567829: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056782c: mov ecx, eax */ r_ecx = r_eax;
    /* 0056782e: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x567833u); f_005d5fb0();
    /* 00567833: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567836: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567837: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056783a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056783b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056783e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056783f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x567844u); f_005dcb00();
    /* 00567844: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567847: mov ecx, eax */ r_ecx = r_eax;
    /* 00567849: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x56784eu); f_005d5cf0();
    /* 0056784e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567850: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567856: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x56785bu); f_005d0a20();
    /* 0056785b: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00567861: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00567864: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00567867: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0056786e: mov esp, ebp */ r_esp = r_ebp;
    /* 00567870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567871: ret 4 */ FN_RET(0x005677d0); r_esp += 8; return;
}

void f_00567880(void) /* VPMultiRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567880);
    /* 00567880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567881: mov ebp, esp */ r_ebp = r_esp;
    /* 00567883: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567886: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00567887: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00567888: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056788b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056788e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056788f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x567894u); f_005dcb00();
    /* 00567894: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567897: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0056789d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056789e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 005678a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005678a5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005678a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005678a9: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005678af: call 0x568430 */ r_esp -= 4; W32(r_esp, 0x5678b4u); f_00568430();
    /* 005678b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005678b6: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5678bbu); f_0064c5c0();
    /* 005678bb: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005678bd: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005678c0: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005678c6: call 0x568430 */ r_esp -= 4; W32(r_esp, 0x5678cbu); f_00568430();
    /* 005678cb: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 005678cd: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 005678d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005678d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005678d4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5678d9u); f_005dcb00();
    /* 005678d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005678dc: mov ecx, eax */ r_ecx = r_eax;
    /* 005678de: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5678e3u); f_0063b0a0();
    /* 005678e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005678e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005678e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005678e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005678e8: ret 4 */ FN_RET(0x00567880); r_esp += 8; return;
}

void f_005678f0(void) /* VPMultiRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005678f0);
    /* 005678f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005678f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005678f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005678f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005678f7: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005678fc: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00567900: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567902: je 0x567906 */ if (fZ) goto L_00567906;
L_00567904:; BB(0x00567904);
    /* 00567904: jmp 0x567911 */ goto L_00567911;
L_00567906:; BB(0x00567906);
    /* 00567906: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056790c: call 0x562160 */ r_esp -= 4; W32(r_esp, 0x567911u); f_00562160();
L_00567911:; BB(0x00567911);
    /* 00567911: mov esp, ebp */ r_esp = r_ebp;
    /* 00567913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567914: ret 4 */ FN_RET(0x005678f0); r_esp += 8; return;
}

void f_00567920(void) /* VPMultiRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567920);
    /* 00567920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567921: mov ebp, esp */ r_ebp = r_esp;
    /* 00567923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567927: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 0056792c: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00567930: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567932: je 0x567936 */ if (fZ) goto L_00567936;
L_00567934:; BB(0x00567934);
    /* 00567934: jmp 0x567945 */ goto L_00567945;
L_00567936:; BB(0x00567936);
    /* 00567936: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056793a: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567940: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567945u); f_00568fb0();
L_00567945:; BB(0x00567945);
    /* 00567945: mov esp, ebp */ r_esp = r_ebp;
    /* 00567947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567948: ret 4 */ FN_RET(0x00567920); r_esp += 8; return;
}

void f_00567950(void) /* VPMultiRoom::vfunc175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567950);
    /* 00567950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567951: mov ebp, esp */ r_ebp = r_esp;
    /* 00567953: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567956: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00567959: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 0056795e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00567961: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567964: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567967: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567968: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056796b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056796c: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567972: call 0x5d0db0 */ r_esp -= 4; W32(r_esp, 0x567977u); f_005d0db0();
    /* 00567977: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056797d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00567980: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00567983: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567986: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00567989: jge 0x567996 */ if ((fS==fO)) goto L_00567996;
L_0056798b:; BB(0x0056798b);
    /* 0056798b: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00567991: call 0x562290 */ r_esp -= 4; W32(r_esp, 0x567996u); f_00562290();
L_00567996:; BB(0x00567996);
    /* 00567996: mov esp, ebp */ r_esp = r_ebp;
    /* 00567998: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567999: ret 4 */ FN_RET(0x00567950); r_esp += 8; return;
}

