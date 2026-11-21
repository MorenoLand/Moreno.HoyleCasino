#include "protos.h"

void f_005c6e20(void) /* MLVSlotDisplay_Jewelry::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6e20);
    /* 005c6e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e21: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e25: push 0x6a885e */ { u32 v = 0x6a885eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e31: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6e34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6e39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c6e3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6e45: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005c6e48: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6e4b: call 0x5c0a00 */ r_esp -= 4; W32(r_esp, 0x5c6e50u); f_005c0a00();
    /* 005c6e50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6e57: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6e5a: mov dword ptr [eax], 0x6d1dd4 */ W32((u32)(r_eax), 0x6d1dd4u);
    /* 005c6e60: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6e63: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6e66: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005c6e69: lea edx, [ebp - 0x15] */ r_edx = (u32)(r_ebp+0xffffffebu);
    /* 005c6e6c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c6e6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e71: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c6e74: call 0x5bef20 */ r_esp -= 4; W32(r_esp, 0x5c6e79u); f_005bef20();
    /* 005c6e79: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6e7c: mov dword ptr [eax + 0x50], 0x75a1a0 */ W32((u32)(r_eax+0x50u), 0x75a1a0u);
    /* 005c6e83: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6e86: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 005c6e8d: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6e90: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 005c6e97: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6e9a: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 005c6ea1: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6ea4: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 005c6eab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c6eb2: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c6eb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6eb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c6ebf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6ec0: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6ec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6ec3: ret  */ FN_RET(0x005c6e20); r_esp += 4; return;
}

void f_005c6ed0(void) /* MLVSlotDisplay_Jewelry::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6ed0);
    /* 005c6ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6ed3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ed5: push 0x6a888c */ { u32 v = 0x6a888cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6eda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ee1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6ee4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6ee9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6eec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c6eef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6ef5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c6ef8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6efb: mov dword ptr [eax], 0x6d1dd4 */ W32((u32)(r_eax), 0x6d1dd4u);
    /* 005c6f01: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c6f08: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6f0b: cmp dword ptr [ecx + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6f0f: je 0x5c6f25 */ if (fZ) goto L_005c6f25;
L_005c6f11:; BB(0x005c6f11);
    /* 005c6f11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f13: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6f16: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c6f19: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f1d: call 0x6110a0 */ r_esp -= 4; W32(r_esp, 0x5c6f22u); f_006110a0();
    /* 005c6f22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c6f25:; BB(0x005c6f25);
    /* 005c6f25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f27: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c6f2d: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5c6f32u); f_005dd400();
    /* 005c6f32: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6f35: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6f39: je 0x5c6f6a */ if (fZ) goto L_005c6f6a;
L_005c6f3b:; BB(0x005c6f3b);
    /* 005c6f3b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6f3e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005c6f41: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c6f44: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6f47: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c6f4a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6f4e: je 0x5c6f63 */ if (fZ) goto L_005c6f63;
L_005c6f50:; BB(0x005c6f50);
    /* 005c6f50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6f52: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f55: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c6f57: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6f5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c6f5c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c6f5eu); call_ind(t); }
    /* 005c6f5e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c6f61: jmp 0x5c6f6a */ goto L_005c6f6a;
L_005c6f63:; BB(0x005c6f63);
    /* 005c6f63: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005c6f6a:; BB(0x005c6f6a);
    /* 005c6f6a: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6f6e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6f71: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6f74: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c6f77: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c6f7a: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5c6f7fu); f_005be450();
    /* 005c6f7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c6f86: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6f89: call 0x5c0b40 */ r_esp -= 4; W32(r_esp, 0x5c6f8eu); f_005c0b40();
    /* 005c6f8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6f91: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c6f98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6f99: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6f9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6f9c: ret  */ FN_RET(0x005c6ed0); r_esp += 4; return;
}

void f_005c6fa0(void) /* MLVSlotDisplay_Jewelry::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6fa0);
    /* 005c6fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6fa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fa5: push 0x6a88d3 */ { u32 v = 0x6a88d3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6faa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fb1: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6fb7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6fbc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fbf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c6fc2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6fc8: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 005c6fce: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c6fd4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c6fda: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005c6fdd: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005c6fe0: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c6fe6: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6fea: je 0x5c7024 */ if (fZ) goto L_005c7024;
L_005c6fec:; BB(0x005c6fec);
    /* 005c6fec: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c6ff2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c6ff5: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005c6ff8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c6ffb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c6ffe: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7002: je 0x5c701a */ if (fZ) goto L_005c701a;
L_005c7004:; BB(0x005c7004);
    /* 005c7004: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7006: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7009: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c700b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c700e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c7010: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c7012u); call_ind(t); }
    /* 005c7012: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005c7018: jmp 0x5c7024 */ goto L_005c7024;
L_005c701a:; BB(0x005c701a);
    /* 005c701a: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_005c7024:; BB(0x005c7024);
    /* 005c7024: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7029: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c702eu); f_00686d82();
    /* 005c702e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7031: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c7034: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c703b: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c703f: je 0x5c7051 */ if (fZ) goto L_005c7051;
L_005c7041:; BB(0x005c7041);
    /* 005c7041: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c7044: call 0x5c8bb0 */ r_esp -= 4; W32(r_esp, 0x5c7049u); f_005c8bb0();
    /* 005c7049: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005c704f: jmp 0x5c705b */ goto L_005c705b;
L_005c7051:; BB(0x005c7051);
    /* 005c7051: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_005c705b:; BB(0x005c705b);
    /* 005c705b: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005c7061: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c7064: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c706b: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7071: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c7074: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c7077: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c707a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c707b: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7081: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c7084: call 0x5c8c60 */ r_esp -= 4; W32(r_esp, 0x5c7089u); f_005c8c60();
    /* 005c7089: push 0x6d1c4c */ { u32 v = 0x6d1c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c708e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5c7093u); f_00630f40();
    /* 005c7093: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7097: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c709d: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x5c70a2u); f_005f38b0();
    /* 005c70a2: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c70a8: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c70ab: mov dl, byte ptr [ecx + 6] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x6u))) & 0xffu);
    /* 005c70ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c70af: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c70b5: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c70b8: mov dl, byte ptr [ecx + 5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x5u))) & 0xffu);
    /* 005c70bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c70bc: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c70c2: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c70c5: mov dl, byte ptr [ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 005c70c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c70c9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005c70cf: call 0x5f1b10 */ r_esp -= 4; W32(r_esp, 0x5c70d4u); f_005f1b10();
    /* 005c70d4: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c70da: mov dword ptr [eax + 0xc], 0x759ee8 */ W32((u32)(r_eax+0xcu), 0x759ee8u);
    /* 005c70e1: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c70e7: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c70ea: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005c70ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c70f0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c70f7: jmp 0x5c7102 */ goto L_005c7102;
L_005c70f9:; BB(0x005c70f9);
    /* 005c70f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c70fc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c70ff: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005c7102:; BB(0x005c7102);
    /* 005c7102: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7105: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c7108: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c710b: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c710f: jl 0x5c7113 */ if ((fS!=fO)) goto L_005c7113;
L_005c7111:; BB(0x005c7111);
    /* 005c7111: jmp 0x5c70f9 */ goto L_005c70f9;
L_005c7113:; BB(0x005c7113);
    /* 005c7113: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7115: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7119: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c711f: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7122: call 0x5be4d0 */ r_esp -= 4; W32(r_esp, 0x5c7127u); f_005be4d0();
    /* 005c7127: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c712d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7130: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7134: je 0x5c71e3 */ if (fZ) goto L_005c71e3;
L_005c713a:; BB(0x005c713a);
    /* 005c713a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005c713f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c7144u); f_00686d82();
    /* 005c7144: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7147: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c714a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c7151: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7155: je 0x5c7167 */ if (fZ) goto L_005c7167;
L_005c7157:; BB(0x005c7157);
    /* 005c7157: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c715a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5c715fu); f_005eaaf0();
    /* 005c715f: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005c7165: jmp 0x5c7171 */ goto L_005c7171;
L_005c7167:; BB(0x005c7167);
    /* 005c7167: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005c7171:; BB(0x005c7171);
    /* 005c7171: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005c7177: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c717a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c7181: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7184: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c7187: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7189: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005c718b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c718d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c718f: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7195: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c7198: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c719b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c719c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c719f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c71a4u); f_005eae80();
    /* 005c71a4: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c71aa: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c71ad: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c71b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71b1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c71b4: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5c71b9u); f_005eb000();
    /* 005c71b9: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c71bf: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c71c2: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c71c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c71c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c71c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c71cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c71ce: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005c71d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c71d6u); call_ind(t); }
    /* 005c71d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c71d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c71db: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c71de: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c71e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c71e3u); call_ind(t); }
L_005c71e3:; BB(0x005c71e3);
    /* 005c71e3: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c71e9: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c71ec: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c71f0: je 0x5c72b1 */ if (fZ) goto L_005c72b1;
L_005c71f6:; BB(0x005c71f6);
    /* 005c71f6: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005c71fb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c7200u); f_00686d82();
    /* 005c7200: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7203: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c7206: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c720d: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7211: je 0x5c7223 */ if (fZ) goto L_005c7223;
L_005c7213:; BB(0x005c7213);
    /* 005c7213: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c7216: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5c721bu); f_005f5f50();
    /* 005c721b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005c7221: jmp 0x5c722d */ goto L_005c722d;
L_005c7223:; BB(0x005c7223);
    /* 005c7223: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005c722d:; BB(0x005c722d);
    /* 005c722d: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 005c7233: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c7236: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c723d: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7243: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7246: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 005c7249: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c724f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005c7252: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c7255: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7257: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7259: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c725b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c725d: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7263: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7266: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c7269: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c726a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c726d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c7272u); f_005eae80();
    /* 005c7272: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7278: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c727b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005c727e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c727f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7282: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5c7287u); f_005eb000();
    /* 005c7287: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c728d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7290: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c7293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7294: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7297: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c7299: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c729c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005c72a2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c72a4u); call_ind(t); }
    /* 005c72a4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c72a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c72a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c72ac: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c72af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c72b1u); call_ind(t); }
L_005c72b1:; BB(0x005c72b1);
    /* 005c72b1: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c72b7: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c72ba: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c72be: je 0x5c736d */ if (fZ) goto L_005c736d;
L_005c72c4:; BB(0x005c72c4);
    /* 005c72c4: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005c72c9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c72ceu); f_00686d82();
    /* 005c72ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c72d1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005c72d4: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005c72db: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c72df: je 0x5c72f1 */ if (fZ) goto L_005c72f1;
L_005c72e1:; BB(0x005c72e1);
    /* 005c72e1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c72e4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5c72e9u); f_005eaaf0();
    /* 005c72e9: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005c72ef: jmp 0x5c72fb */ goto L_005c72fb;
L_005c72f1:; BB(0x005c72f1);
    /* 005c72f1: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_005c72fb:; BB(0x005c72fb);
    /* 005c72fb: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 005c7301: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c7304: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c730b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c730e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c7311: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7313: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7315: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7317: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7319: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c731f: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7322: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005c7325: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7326: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7329: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c732eu); f_005eae80();
    /* 005c732e: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7334: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7337: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005c733a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c733b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c733e: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5c7343u); f_005eb000();
    /* 005c7343: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7349: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c734c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005c734f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7350: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7353: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c7355: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7358: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005c735e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c7360u); call_ind(t); }
    /* 005c7360: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7363: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7365: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7368: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c736b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c736du); call_ind(t); }
L_005c736d:; BB(0x005c736d);
    /* 005c736d: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7373: call 0x5c10b0 */ r_esp -= 4; W32(r_esp, 0x5c7378u); f_005c10b0();
    /* 005c7378: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c737e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c7381: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c7384: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c7387: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005c738d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005c738f: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c7395: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7398: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c739b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c739c: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005c73a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c73a3: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c73a9: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c73ac: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005c73af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c73b0: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c73b6: call 0x5c0f40 */ r_esp -= 4; W32(r_esp, 0x5c73bbu); f_005c0f40();
    /* 005c73bb: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c73c1: call 0x5c13e0 */ r_esp -= 4; W32(r_esp, 0x5c73c6u); f_005c13e0();
    /* 005c73c6: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c73cc: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5c73d1u); f_005c1b60();
    /* 005c73d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c73d3: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c73d9: call 0x5c1d60 */ r_esp -= 4; W32(r_esp, 0x5c73deu); f_005c1d60();
    /* 005c73de: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c73e4: call 0x5c1ed0 */ r_esp -= 4; W32(r_esp, 0x5c73e9u); f_005c1ed0();
    /* 005c73e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c73ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c73f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c73f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c73f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c73f7: ret 4 */ FN_RET(0x005c6fa0); r_esp += 8; return;
}

void f_005c7400(void) /* MLVSlotDisplay_Jewelry::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7400);
    /* 005c7400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7401: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7403: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7406: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c7409: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 005c740d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c7410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7411: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7414: call 0x5c15c0 */ r_esp -= 4; W32(r_esp, 0x5c7419u); f_005c15c0();
    /* 005c7419: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c741c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c741e: je 0x5c7424 */ if (fZ) goto L_005c7424;
L_005c7420:; BB(0x005c7420);
    /* 005c7420: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c7422: jmp 0x5c749f */ goto L_005c749f;
L_005c7424:; BB(0x005c7424);
    /* 005c7424: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c7427: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c742a: cmp dword ptr [ebp - 0x1c], 0x5e */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c742e: je 0x5c7432 */ if (fZ) goto L_005c7432;
L_005c7430:; BB(0x005c7430);
    /* 005c7430: jmp 0x5c7498 */ goto L_005c7498;
L_005c7432:; BB(0x005c7432);
    /* 005c7432: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7435: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7437: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c743a: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c743d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c743fu); call_ind(t); }
    /* 005c743f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c7442: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7444: je 0x5c745a */ if (fZ) goto L_005c745a;
L_005c7446:; BB(0x005c7446);
    /* 005c7446: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7449: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c744b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c744e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c7451: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c7453u); call_ind(t); }
    /* 005c7453: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c7456: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7458: je 0x5c745c */ if (fZ) goto L_005c745c;
L_005c745a:; BB(0x005c745a);
    /* 005c745a: jmp 0x5c749c */ goto L_005c749c;
L_005c745c:; BB(0x005c745c);
    /* 005c745c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c745f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c7462: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c7465: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c7468: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c746b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c746e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c7471: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7474: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c7479u); f_005c9140();
    /* 005c7479: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c747c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c747f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c7482: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7485: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7488: jle 0x5c748c */ if ((fZ||fS!=fO)) goto L_005c748c;
L_005c748a:; BB(0x005c748a);
    /* 005c748a: jmp 0x5c749c */ goto L_005c749c;
L_005c748c:; BB(0x005c748c);
    /* 005c748c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c748e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7491: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c7496u); f_005c74b0();
    /* 005c7496: jmp 0x5c749c */ goto L_005c749c;
L_005c7498:; BB(0x005c7498);
    /* 005c7498: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
L_005c749c:; BB(0x005c749c);
    /* 005c749c: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
L_005c749f:; BB(0x005c749f);
    /* 005c749f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c74a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c74a2: ret 4 */ FN_RET(0x005c7400); r_esp += 8; return;
}

void f_005c7650(void) /* MLVSlotDisplay_Jewelry::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7650);
    /* 005c7650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7651: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c7655: push 0x6a8922 */ { u32 v = 0x6a8922u; r_esp -= 4; W32(r_esp, v); }
    /* 005c765a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c7660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7661: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7667: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c7668: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c766d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c766f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7670: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c7673: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c7679: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005c767c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c767f: call 0x5c1550 */ r_esp -= 4; W32(r_esp, 0x5c7684u); f_005c1550();
    /* 005c7684: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7687: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005c768a: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005c768d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005c7690: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c7693: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005c7696: cmp dword ptr [ebp - 0x7c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c769a: ja 0x5c798f */ if ((!fC&&!fZ)) goto L_005c798f;
L_005c76a0:; BB(0x005c76a0);
    /* 005c76a0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005c76a3: jmp dword ptr [eax*4 + 0x5c7c98] */ { u32 t = R32((u32)(r_eax*4+0x5c7c98u)); switch (t) { case 0x5c76aau: goto L_005c76aa; case 0x5c7743u: goto L_005c7743; case 0x5c7793u: goto L_005c7793; case 0x5c7837u: goto L_005c7837; case 0x5c7800u: goto L_005c7800; case 0x5c7961u: goto L_005c7961; default: UNSUP(0x005c76a3, "jump table entry is not a known target"); } }
L_005c76aa:; BB(0x005c76aa);
    /* 005c76aa: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c76ac: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c76b1u); f_00686d82();
    /* 005c76b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c76b4: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005c76b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c76be: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c76c2: je 0x5c76d8 */ if (fZ) goto L_005c76d8;
L_005c76c4:; BB(0x005c76c4);
    /* 005c76c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c76c6: push 0x315998 */ { u32 v = 0x315998u; r_esp -= 4; W32(r_esp, v); }
    /* 005c76cb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c76ce: call 0x600630 */ r_esp -= 4; W32(r_esp, 0x5c76d3u); f_00600630();
    /* 005c76d3: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005c76d6: jmp 0x5c76df */ goto L_005c76df;
L_005c76d8:; BB(0x005c76d8);
    /* 005c76d8: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_005c76df:; BB(0x005c76df);
    /* 005c76df: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005c76e2: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005c76e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c76ec: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c76ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c76f0: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c76f3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005c76f6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5c76fbu); f_005f5d50();
    /* 005c76fb: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c76fe: mov dword ptr [ecx + 0x70], 1 */ W32((u32)(r_ecx+0x70u), 0x1u);
    /* 005c7705: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7708: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c770b: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c770e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c770f: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c7714u); f_00610980();
    /* 005c7714: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7717: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c771a: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c771d: add edx, 0xdc */ {  u32 a = r_edx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c7723: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7724: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c7729u); f_00610980();
    /* 005c7729: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c772c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c772e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c7734: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5c7739u); f_005dd400();
    /* 005c7739: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c773b: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c773e: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c7743u); f_005c74b0();
L_005c7743:; BB(0x005c7743);
    /* 005c7743: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7746: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005c7749: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5c774eu); f_005eb220();
    /* 005c774e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7750: je 0x5c7757 */ if (fZ) goto L_005c7757;
L_005c7752:; BB(0x005c7752);
    /* 005c7752: jmp 0x5c798f */ goto L_005c798f;
L_005c7757:; BB(0x005c7757);
    /* 005c7757: push 0x6d1c6c */ { u32 v = 0x6d1c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c775c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5c7761u); f_0062fde0();
    /* 005c7761: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7764: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7767: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c776a: call 0x5c8fc0 */ r_esp -= 4; W32(r_esp, 0x5c776fu); f_005c8fc0();
    /* 005c776f: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7772: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c7775: call 0x5c9050 */ r_esp -= 4; W32(r_esp, 0x5c777au); f_005c9050();
    /* 005c777a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c777c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c777f: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c7784u); f_005c74b0();
    /* 005c7784: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7786: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7789: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c778eu); f_005c74b0();
    /* 005c778e: jmp 0x5c798f */ goto L_005c798f;
L_005c7793:; BB(0x005c7793);
    /* 005c7793: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7796: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005c7799: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5c779eu); f_005eb220();
    /* 005c779e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c77a0: je 0x5c77a7 */ if (fZ) goto L_005c77a7;
L_005c77a2:; BB(0x005c77a2);
    /* 005c77a2: jmp 0x5c798f */ goto L_005c798f;
L_005c77a7:; BB(0x005c77a7);
    /* 005c77a7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c77aa: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005c77ad: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c77b0: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c77b3: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 005c77b6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c77b9: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c77bd: jg 0x5c77d9 */ if ((!fZ&&fS==fO)) goto L_005c77d9;
L_005c77bf:; BB(0x005c77bf);
    /* 005c77bf: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c77c2: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c77c5: call 0x5c90c0 */ r_esp -= 4; W32(r_esp, 0x5c77cau); f_005c90c0();
    /* 005c77ca: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c77cc: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c77cf: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c77d4u); f_005c74b0();
    /* 005c77d4: jmp 0x5c798f */ goto L_005c798f;
L_005c77d9:; BB(0x005c77d9);
    /* 005c77d9: push 0x6d1e08 */ { u32 v = 0x6d1e08u; r_esp -= 4; W32(r_esp, v); }
    /* 005c77de: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5c77e3u); f_0062fde0();
    /* 005c77e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c77e6: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c77e9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c77ec: call 0x5c9050 */ r_esp -= 4; W32(r_esp, 0x5c77f1u); f_005c9050();
    /* 005c77f1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c77f3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c77f6: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c77fbu); f_005c74b0();
    /* 005c77fb: jmp 0x5c798f */ goto L_005c798f;
L_005c7800:; BB(0x005c7800);
    /* 005c7800: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7803: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005c7806: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5c780bu); f_005eb220();
    /* 005c780b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c780d: jne 0x5c7814 */ if (!fZ) goto L_005c7814;
L_005c780f:; BB(0x005c780f);
    /* 005c780f: jmp 0x5c798f */ goto L_005c798f;
L_005c7814:; BB(0x005c7814);
    /* 005c7814: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7817: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c781a: add eax, 0xdc */ {  u32 a = r_eax; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c781f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7820: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c7825u); f_00610980();
    /* 005c7825: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c7828: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c782a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c782d: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c7832u); f_005c74b0();
    /* 005c7832: jmp 0x5c798f */ goto L_005c798f;
L_005c7837:; BB(0x005c7837);
    /* 005c7837: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c783a: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005c783d: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5c7842u); f_005eb220();
    /* 005c7842: mov esi, eax */ r_esi = r_eax;
    /* 005c7844: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7847: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005c784a: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5c784fu); f_005eb240();
    /* 005c784f: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7852: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7854: jle 0x5c786a */ if ((fZ||fS!=fO)) goto L_005c786a;
L_005c7856:; BB(0x005c7856);
    /* 005c7856: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7858: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c785b: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c785e: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7862: call 0x610e70 */ r_esp -= 4; W32(r_esp, 0x5c7867u); f_00610e70();
    /* 005c7867: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c786a:; BB(0x005c786a);
    /* 005c786a: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c786d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005c7870: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7877: je 0x5c787e */ if (fZ) goto L_005c787e;
L_005c7879:; BB(0x005c7879);
    /* 005c7879: jmp 0x5c798f */ goto L_005c798f;
L_005c787e:; BB(0x005c787e);
    /* 005c787e: push 0x6d1c64 */ { u32 v = 0x6d1c64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7883: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5c7888u); f_0062fde0();
    /* 005c7888: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c788b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005c7891: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c7894: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005c7899: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c789c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c789e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c78a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c78a3u); call_ind(t); }
    /* 005c78a3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c78a6: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 005c78a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c78ab: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c78ae: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c78b1: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c78b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c78b5: call 0x610e70 */ r_esp -= 4; W32(r_esp, 0x5c78bau); f_00610e70();
    /* 005c78ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c78bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c78bf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c78c5: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5c78cau); f_005dd400();
    /* 005c78ca: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c78cd: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c78d0: call 0x5c9740 */ r_esp -= 4; W32(r_esp, 0x5c78d5u); f_005c9740();
    /* 005c78d5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005c78d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c78da: je 0x5c78fd */ if (fZ) goto L_005c78fd;
L_005c78dc:; BB(0x005c78dc);
    /* 005c78dc: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c78df: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c78e2: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c78e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c78e9: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c78eeu); f_00610980();
    /* 005c78ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c78f1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c78f3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c78f6: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c78fbu); f_005c74b0();
    /* 005c78fb: jmp 0x5c795f */ goto L_005c795f;
L_005c78fd:; BB(0x005c78fd);
    /* 005c78fd: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7900: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c7903: call 0x5be3f0 */ r_esp -= 4; W32(r_esp, 0x5c7908u); f_005be3f0();
    /* 005c7908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c790a: jle 0x5c7955 */ if ((fZ||fS!=fO)) goto L_005c7955;
L_005c790c:; BB(0x005c790c);
    /* 005c790c: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c790f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c7912: call 0x5c9940 */ r_esp -= 4; W32(r_esp, 0x5c7917u); f_005c9940();
    /* 005c7917: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c791a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c791c: je 0x5c7931 */ if (fZ) goto L_005c7931;
L_005c791e:; BB(0x005c791e);
    /* 005c791e: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7921: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7924: add eax, 0xbc */ {  u32 a = r_eax; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7929: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005c792f: jmp 0x5c7940 */ goto L_005c7940;
L_005c7931:; BB(0x005c7931);
    /* 005c7931: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7934: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c7937: add edx, 0x7c */ {  u32 a = r_edx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c793a: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
L_005c7940:; BB(0x005c7940);
    /* 005c7940: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c7946: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c7949: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c794c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c794d: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c7952u); f_00610980();
    /* 005c7952: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c7955:; BB(0x005c7955);
    /* 005c7955: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7957: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c795a: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c795fu); f_005c74b0();
L_005c795f:; BB(0x005c795f);
    /* 005c795f: jmp 0x5c798f */ goto L_005c798f;
L_005c7961:; BB(0x005c7961);
    /* 005c7961: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005c7967: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c796a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005c7970: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005c7973: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7975: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c7978: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c797au); call_ind(t); }
    /* 005c797a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c797d: sub eax, dword ptr [ecx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7980: cmp eax, 0xbb8 */ {  u32 a = r_eax; u32 b = 0xbb8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c7985: jbe 0x5c798f */ if ((fC||fZ)) goto L_005c798f;
L_005c7987:; BB(0x005c7987);
    /* 005c7987: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c798a: call 0x5c1a80 */ r_esp -= 4; W32(r_esp, 0x5c798fu); f_005c1a80();
L_005c798f:; BB(0x005c798f);
    /* 005c798f: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7992: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c7995: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005c7998: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c799b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005c79a1: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c79a4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005c79aa: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005c79ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c79af: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c79b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c79b4u); call_ind(t); }
    /* 005c79b4: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c79b7: sub eax, dword ptr [ecx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c79ba: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c79bd: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005c79c4: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c79cb: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c79ce: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c79d1: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c79d5: je 0x5c79f8 */ if (fZ) goto L_005c79f8;
L_005c79d7:; BB(0x005c79d7);
    /* 005c79d7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c79da: mov esi, dword ptr [ecx + 0x50] */ r_esi = R32((u32)(r_ecx+0x50u));
    /* 005c79dd: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c79e0: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005c79e3: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5c79e8u); f_005eb220();
    /* 005c79e8: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 005c79eb: mov edx, dword ptr [ecx + eax*8] */ r_edx = R32((u32)(r_ecx+r_eax*8));
    /* 005c79ee: mov eax, dword ptr [ecx + eax*8 + 4] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 005c79f2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c79f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005c79f8:; BB(0x005c79f8);
    /* 005c79f8: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005c79ff: jmp 0x5c7a0a */ goto L_005c7a0a;
L_005c7a01:; BB(0x005c7a01);
    /* 005c7a01: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7a04: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7a07: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005c7a0a:; BB(0x005c7a0a);
    /* 005c7a0a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7a0d: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c7a10: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7a13: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7a17: jl 0x5c7c74 */ if ((fS!=fO)) goto L_005c7c74;
L_005c7a1d:; BB(0x005c7a1d);
    /* 005c7a1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7a20: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c7a23: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7a26: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 005c7a29: mov ecx, dword ptr [edx + ecx + 4] */ r_ecx = R32((u32)(r_edx+r_ecx+0x4u));
    /* 005c7a2d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c7a30: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c7a33: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7a36: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c7a39: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005c7a3c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c7a3f: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c7a42: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7a47: jl 0x5c7a5b */ if ((fS!=fO)) goto L_005c7a5b;
L_005c7a49:; BB(0x005c7a49);
    /* 005c7a49: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c7a4c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c7a4f: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c7a53: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005c7a59: jmp 0x5c7a6d */ goto L_005c7a6d;
L_005c7a5b:; BB(0x005c7a5b);
    /* 005c7a5b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c7a5e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c7a61: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c7a65: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c7a67: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
L_005c7a6d:; BB(0x005c7a6d);
    /* 005c7a6d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7a70: add eax, dword ptr [ebp - 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7a76: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c7a79: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005c7a7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a7d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7a80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a81: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c7a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7a85: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7a88: call 0x5c74e0 */ r_esp -= 4; W32(r_esp, 0x5c7a8du); f_005c74e0();
    /* 005c7a8d: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7a90: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7a93: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005c7a96: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005c7a99: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7a9d: jne 0x5c7aab */ if (!fZ) goto L_005c7aab;
L_005c7a9f:; BB(0x005c7a9f);
    /* 005c7a9f: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005c7aa9: jmp 0x5c7ac0 */ goto L_005c7ac0;
L_005c7aab:; BB(0x005c7aab);
    /* 005c7aab: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005c7aae: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005c7ab1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c7ab4: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c7ab7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c7aba: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_005c7ac0:; BB(0x005c7ac0);
    /* 005c7ac0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7ac3: cmp eax, dword ptr [ebp - 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7ac9: jb 0x5c7ad1 */ if (fC) goto L_005c7ad1;
L_005c7acb:; BB(0x005c7acb);
    /* 005c7acb: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7ad1u); call_ind(t); }
L_005c7ad1:; BB(0x005c7ad1);
    /* 005c7ad1: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005c7ad4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c7ad7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7ada: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005c7add: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c7ae0: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ae4: je 0x5c7b04 */ if (fZ) goto L_005c7b04;
L_005c7ae6:; BB(0x005c7ae6);
    /* 005c7ae6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7ae9: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x5c7aeeu); f_005eafc0();
    /* 005c7aee: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7af1: jne 0x5c7b04 */ if (!fZ) goto L_005c7b04;
L_005c7af3:; BB(0x005c7af3);
    /* 005c7af3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7af6: call 0x5eb110 */ r_esp -= 4; W32(r_esp, 0x5c7afbu); f_005eb110();
    /* 005c7afb: cmp eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7afe: je 0x5c7ba2 */ if (fZ) goto L_005c7ba2;
L_005c7b04:; BB(0x005c7b04);
    /* 005c7b04: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b08: je 0x5c7b3c */ if (fZ) goto L_005c7b3c;
L_005c7b0a:; BB(0x005c7b0a);
    /* 005c7b0a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7b0d: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 005c7b10: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c7b13: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005c7b16: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b1a: je 0x5c7b32 */ if (fZ) goto L_005c7b32;
L_005c7b1c:; BB(0x005c7b1c);
    /* 005c7b1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7b1e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c7b21: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7b23: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c7b26: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c7b28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c7b2au); call_ind(t); }
    /* 005c7b2a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005c7b30: jmp 0x5c7b3c */ goto L_005c7b3c;
L_005c7b32:; BB(0x005c7b32);
    /* 005c7b32: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_005c7b3c:; BB(0x005c7b3c);
    /* 005c7b3c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7b3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7b40: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c7b43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7b44: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7b47: call 0x5c7570 */ r_esp -= 4; W32(r_esp, 0x5c7b4cu); f_005c7570();
    /* 005c7b4c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c7b4f: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7b52: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7b55: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005c7b58: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c7b5b: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7b5f: jne 0x5c7b6d */ if (!fZ) goto L_005c7b6d;
L_005c7b61:; BB(0x005c7b61);
    /* 005c7b61: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 005c7b6b: jmp 0x5c7b82 */ goto L_005c7b82;
L_005c7b6d:; BB(0x005c7b6d);
    /* 005c7b6d: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c7b70: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c7b73: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c7b76: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7b79: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c7b7c: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
L_005c7b82:; BB(0x005c7b82);
    /* 005c7b82: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7b85: cmp edx, dword ptr [ebp - 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff6cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7b8b: jb 0x5c7b93 */ if (fC) goto L_005c7b93;
L_005c7b8d:; BB(0x005c7b8d);
    /* 005c7b8d: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7b93u); call_ind(t); }
L_005c7b93:; BB(0x005c7b93);
    /* 005c7b93: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c7b96: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c7b99: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7b9c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7b9f: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
L_005c7ba2:; BB(0x005c7ba2);
    /* 005c7ba2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c7ba9: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7bac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7bae: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7bb1: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005c7bb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c7bb6u); call_ind(t); }
    /* 005c7bb6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c7bb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7bbb: je 0x5c7c1f */ if (fZ) goto L_005c7c1f;
L_005c7bbd:; BB(0x005c7bbd);
    /* 005c7bbd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7bc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7bc1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c7bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c7bc5: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7bc8: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c7bcb: call 0x5c9960 */ r_esp -= 4; W32(r_esp, 0x5c7bd0u); f_005c9960();
    /* 005c7bd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c7bd2: jle 0x5c7c1f */ if ((fZ||fS!=fO)) goto L_005c7c1f;
L_005c7bd4:; BB(0x005c7bd4);
    /* 005c7bd4: mov dword ptr [ebp - 0x48], 0xfa */ W32((u32)(r_ebp+0xffffffb8u), 0xfau);
    /* 005c7bdb: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005c7be2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7be5: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5c7beau); f_005eb240();
    /* 005c7bea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7bed: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c7bf0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7bf3: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005c7bf6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7bf9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c7bfa: mov ecx, 0xfa */ r_ecx = 0xfau;
    /* 005c7bff: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c7bff, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c7bff, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c7c01: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c7c04: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c7c07: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c7c08: idiv dword ptr [ebp - 0x4c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffb4u)); if (!d) UNSUP(0x005c7c08, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c7c08, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c7c0b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005c7c0e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c7c11: cmp edx, dword ptr [ebp - 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7c14: jl 0x5c7c1f */ if ((fS!=fO)) goto L_005c7c1f;
L_005c7c16:; BB(0x005c7c16);
    /* 005c7c16: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7c19: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7c1c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005c7c1f:; BB(0x005c7c1f);
    /* 005c7c1f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7c22: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5c7c27u); f_005eb220();
    /* 005c7c27: cmp dword ptr [ebp - 0x30], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7c2a: je 0x5c7c40 */ if (fZ) goto L_005c7c40;
L_005c7c2c:; BB(0x005c7c2c);
    /* 005c7c2c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c7c2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c30: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7c33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c7c35: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7c38: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005c7c3e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c7c40u); call_ind(t); }
L_005c7c40:; BB(0x005c7c40);
    /* 005c7c40: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7c43: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c7c46: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7c49: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7c4c: add edx, dword ptr [ecx + eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c7c50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c51: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7c54: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c7c57: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7c5a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7c5d: add edx, dword ptr [ecx + eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c7c61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c62: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7c65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7c67: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c7c6a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005c7c6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c7c6fu); call_ind(t); }
    /* 005c7c6f: jmp 0x5c7a01 */ goto L_005c7a01;
L_005c7c74:; BB(0x005c7c74);
    /* 005c7c74: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7c77: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5c7c7cu); f_005c1b60();
    /* 005c7c7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7c7e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c7c81: call 0x5c1d60 */ r_esp -= 4; W32(r_esp, 0x5c7c86u); f_005c1d60();
    /* 005c7c86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7c89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c7c90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c7c91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c7c92: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7c94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7c95: ret  */ FN_RET(0x005c7650); r_esp += 4; return;
}

void f_005c7cb0(void) /* MLVSlotDisplay_Jewelry::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7cb0);
    /* 005c7cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7cb3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7cb6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c7cb9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7cbc: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7cbf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c7cc2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7cc5: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7cc9: jne 0x5c7cd4 */ if (!fZ) goto L_005c7cd4;
L_005c7ccb:; BB(0x005c7ccb);
    /* 005c7ccb: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005c7cd2: jmp 0x5c7ce6 */ goto L_005c7ce6;
L_005c7cd4:; BB(0x005c7cd4);
    /* 005c7cd4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7cd7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7cda: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c7cdd: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7ce0: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c7ce3: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_005c7ce6:; BB(0x005c7ce6);
    /* 005c7ce6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c7ce9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c7cec: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c7cf3: jmp 0x5c7cfe */ goto L_005c7cfe;
L_005c7cf5:; BB(0x005c7cf5);
    /* 005c7cf5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7cf8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7cfb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c7cfe:; BB(0x005c7cfe);
    /* 005c7cfe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7d01: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7d04: jge 0x5c7db0 */ if ((fS==fO)) goto L_005c7db0;
L_005c7d0a:; BB(0x005c7d0a);
    /* 005c7d0a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7d0d: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c7d10: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c7d13: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7d16: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d1a: jne 0x5c7d25 */ if (!fZ) goto L_005c7d25;
L_005c7d1c:; BB(0x005c7d1c);
    /* 005c7d1c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005c7d23: jmp 0x5c7d37 */ goto L_005c7d37;
L_005c7d25:; BB(0x005c7d25);
    /* 005c7d25: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7d28: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7d2b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c7d2e: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7d31: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c7d34: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005c7d37:; BB(0x005c7d37);
    /* 005c7d37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7d3a: cmp ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7d3d: jb 0x5c7d45 */ if (fC) goto L_005c7d45;
L_005c7d3f:; BB(0x005c7d3f);
    /* 005c7d3f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7d45u); call_ind(t); }
L_005c7d45:; BB(0x005c7d45);
    /* 005c7d45: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7d48: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c7d4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7d4e: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d52: je 0x5c7dab */ if (fZ) goto L_005c7dab;
L_005c7d54:; BB(0x005c7d54);
    /* 005c7d54: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7d57: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c7d5a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c7d5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7d60: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7d64: jne 0x5c7d6f */ if (!fZ) goto L_005c7d6f;
L_005c7d66:; BB(0x005c7d66);
    /* 005c7d66: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c7d6d: jmp 0x5c7d81 */ goto L_005c7d81;
L_005c7d6f:; BB(0x005c7d6f);
    /* 005c7d6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7d72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7d75: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c7d78: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7d7b: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c7d7e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005c7d81:; BB(0x005c7d81);
    /* 005c7d81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7d84: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7d87: jb 0x5c7d8f */ if (fC) goto L_005c7d8f;
L_005c7d89:; BB(0x005c7d89);
    /* 005c7d89: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7d8fu); call_ind(t); }
L_005c7d8f:; BB(0x005c7d8f);
    /* 005c7d8f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7d92: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c7d95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7d98: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005c7d9b: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005c7d9e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7da1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7da3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c7da6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c7da9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c7dabu); call_ind(t); }
L_005c7dab:; BB(0x005c7dab);
    /* 005c7dab: jmp 0x5c7cf5 */ goto L_005c7cf5;
L_005c7db0:; BB(0x005c7db0);
    /* 005c7db0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7db3: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7db6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c7db9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7dbc: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7dc0: jne 0x5c7dcb */ if (!fZ) goto L_005c7dcb;
L_005c7dc2:; BB(0x005c7dc2);
    /* 005c7dc2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005c7dc9: jmp 0x5c7ddd */ goto L_005c7ddd;
L_005c7dcb:; BB(0x005c7dcb);
    /* 005c7dcb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7dce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7dd1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c7dd4: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c7dd7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c7dda: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_005c7ddd:; BB(0x005c7ddd);
    /* 005c7ddd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c7de0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c7de3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c7dea: jmp 0x5c7df5 */ goto L_005c7df5;
L_005c7dec:; BB(0x005c7dec);
    /* 005c7dec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7def: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7df2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005c7df5:; BB(0x005c7df5);
    /* 005c7df5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7df8: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7dfb: jge 0x5c7ea7 */ if ((fS==fO)) goto L_005c7ea7;
L_005c7e01:; BB(0x005c7e01);
    /* 005c7e01: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7e04: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7e07: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c7e0a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7e0d: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e11: jne 0x5c7e1c */ if (!fZ) goto L_005c7e1c;
L_005c7e13:; BB(0x005c7e13);
    /* 005c7e13: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005c7e1a: jmp 0x5c7e2e */ goto L_005c7e2e;
L_005c7e1c:; BB(0x005c7e1c);
    /* 005c7e1c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7e1f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7e22: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c7e25: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7e28: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c7e2b: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_005c7e2e:; BB(0x005c7e2e);
    /* 005c7e2e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7e31: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7e34: jb 0x5c7e3c */ if (fC) goto L_005c7e3c;
L_005c7e36:; BB(0x005c7e36);
    /* 005c7e36: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7e3cu); call_ind(t); }
L_005c7e3c:; BB(0x005c7e3c);
    /* 005c7e3c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7e3f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c7e42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7e45: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e49: je 0x5c7ea2 */ if (fZ) goto L_005c7ea2;
L_005c7e4b:; BB(0x005c7e4b);
    /* 005c7e4b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7e4e: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7e51: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c7e54: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7e57: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7e5b: jne 0x5c7e66 */ if (!fZ) goto L_005c7e66;
L_005c7e5d:; BB(0x005c7e5d);
    /* 005c7e5d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005c7e64: jmp 0x5c7e78 */ goto L_005c7e78;
L_005c7e66:; BB(0x005c7e66);
    /* 005c7e66: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7e69: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7e6c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c7e6f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7e72: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c7e75: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_005c7e78:; BB(0x005c7e78);
    /* 005c7e78: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7e7b: cmp edx, dword ptr [ebp - 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7e7e: jb 0x5c7e86 */ if (fC) goto L_005c7e86;
L_005c7e80:; BB(0x005c7e80);
    /* 005c7e80: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7e86u); call_ind(t); }
L_005c7e86:; BB(0x005c7e86);
    /* 005c7e86: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c7e89: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c7e8c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7e8f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005c7e92: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c7e95: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7e98: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c7e9a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c7e9d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c7ea0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c7ea2u); call_ind(t); }
L_005c7ea2:; BB(0x005c7ea2);
    /* 005c7ea2: jmp 0x5c7dec */ goto L_005c7dec;
L_005c7ea7:; BB(0x005c7ea7);
    /* 005c7ea7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ea9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c7eac: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c7eb1u); f_005c74b0();
    /* 005c7eb1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7eb4: ret  */ FN_RET(0x005c7cb0); r_esp += 4; return;
}

void f_005c7ec0(void) /* MLVSlotDisplay_Jewelry::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7ec0);
    /* 005c7ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7ec3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c7ec6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c7ec9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7ecc: call 0x5c1b10 */ r_esp -= 4; W32(r_esp, 0x5c7ed1u); f_005c1b10();
    /* 005c7ed1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7ed4: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7ed7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c7eda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7edd: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7ee1: jne 0x5c7eec */ if (!fZ) goto L_005c7eec;
L_005c7ee3:; BB(0x005c7ee3);
    /* 005c7ee3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005c7eea: jmp 0x5c7efe */ goto L_005c7efe;
L_005c7eec:; BB(0x005c7eec);
    /* 005c7eec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7eef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c7ef2: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c7ef5: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c7ef8: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c7efb: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_005c7efe:; BB(0x005c7efe);
    /* 005c7efe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c7f01: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c7f04: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c7f0b: jmp 0x5c7f16 */ goto L_005c7f16;
L_005c7f0d:; BB(0x005c7f0d);
    /* 005c7f0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7f10: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c7f13: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c7f16:; BB(0x005c7f16);
    /* 005c7f16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7f19: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c7f1c: jge 0x5c7fc8 */ if ((fS==fO)) goto L_005c7fc8;
L_005c7f22:; BB(0x005c7f22);
    /* 005c7f22: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7f25: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c7f28: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c7f2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7f2e: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f32: jne 0x5c7f3d */ if (!fZ) goto L_005c7f3d;
L_005c7f34:; BB(0x005c7f34);
    /* 005c7f34: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005c7f3b: jmp 0x5c7f4f */ goto L_005c7f4f;
L_005c7f3d:; BB(0x005c7f3d);
    /* 005c7f3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7f40: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7f43: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c7f46: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7f49: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c7f4c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005c7f4f:; BB(0x005c7f4f);
    /* 005c7f4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7f52: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7f55: jb 0x5c7f5d */ if (fC) goto L_005c7f5d;
L_005c7f57:; BB(0x005c7f57);
    /* 005c7f57: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7f5du); call_ind(t); }
L_005c7f5d:; BB(0x005c7f5d);
    /* 005c7f5d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c7f60: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c7f63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7f66: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f6a: je 0x5c7fc3 */ if (fZ) goto L_005c7fc3;
L_005c7f6c:; BB(0x005c7f6c);
    /* 005c7f6c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7f6f: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c7f72: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c7f75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7f78: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c7f7c: jne 0x5c7f87 */ if (!fZ) goto L_005c7f87;
L_005c7f7e:; BB(0x005c7f7e);
    /* 005c7f7e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c7f85: jmp 0x5c7f99 */ goto L_005c7f99;
L_005c7f87:; BB(0x005c7f87);
    /* 005c7f87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7f8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7f8d: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c7f90: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c7f93: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c7f96: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005c7f99:; BB(0x005c7f99);
    /* 005c7f99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7f9c: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c7f9f: jb 0x5c7fa7 */ if (fC) goto L_005c7fa7;
L_005c7fa1:; BB(0x005c7fa1);
    /* 005c7fa1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c7fa7u); call_ind(t); }
L_005c7fa7:; BB(0x005c7fa7);
    /* 005c7fa7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c7faa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c7fad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c7fb0: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005c7fb3: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005c7fb6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c7fb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c7fbb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c7fbe: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c7fc1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c7fc3u); call_ind(t); }
L_005c7fc3:; BB(0x005c7fc3);
    /* 005c7fc3: jmp 0x5c7f0d */ goto L_005c7f0d;
L_005c7fc8:; BB(0x005c7fc8);
    /* 005c7fc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c7fcd: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c7fd2u); f_005c74b0();
    /* 005c7fd2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7fd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7fd5: ret  */ FN_RET(0x005c7ec0); r_esp += 4; return;
}

void f_005c7fe0(void) /* MLVSlotDisplay_Jewelry::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c7fe0);
    /* 005c7fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c7fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c7fe7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005c7fe9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c7fec: call 0x5c74b0 */ r_esp -= 4; W32(r_esp, 0x5c7ff1u); f_005c74b0();
    /* 005c7ff1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c7ff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7ff4: ret  */ FN_RET(0x005c7fe0); r_esp += 4; return;
}

void f_005c8000(void) /* MLVSlotDisplay_Jewelry::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8000);
    /* 005c8000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8001: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8003: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8006: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8009: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c800c: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005c800f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8012: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8016: jle 0x5c8024 */ if ((fZ||fS!=fO)) goto L_005c8024;
L_005c8018:; BB(0x005c8018);
    /* 005c8018: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c801c: jle 0x5c8020 */ if ((fZ||fS!=fO)) goto L_005c8020;
L_005c801e:; BB(0x005c801e);
    /* 005c801e: jmp 0x5c8024 */ goto L_005c8024;
L_005c8020:; BB(0x005c8020);
    /* 005c8020: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c8022: jmp 0x5c8026 */ goto L_005c8026;
L_005c8024:; BB(0x005c8024);
    /* 005c8024: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005c8026:; BB(0x005c8026);
    /* 005c8026: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8028: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8029: ret  */ FN_RET(0x005c8000); r_esp += 4; return;
}

void f_005c8030(void) /* MLVSlotDisplay_Jewelry::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8030);
    /* 005c8030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8031: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8033: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8036: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8039: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c803c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c803e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8041: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005c8044: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c8046u); call_ind(t); }
    /* 005c8046: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c8049: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c804b: je 0x5c8051 */ if (fZ) goto L_005c8051;
L_005c804d:; BB(0x005c804d);
    /* 005c804d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c804f: jmp 0x5c8074 */ goto L_005c8074;
L_005c8051:; BB(0x005c8051);
    /* 005c8051: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8054: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005c8057: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c805a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c805e: je 0x5c806e */ if (fZ) goto L_005c806e;
L_005c8060:; BB(0x005c8060);
    /* 005c8060: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8064: jle 0x5c8072 */ if ((fZ||fS!=fO)) goto L_005c8072;
L_005c8066:; BB(0x005c8066);
    /* 005c8066: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c806a: jle 0x5c806e */ if ((fZ||fS!=fO)) goto L_005c806e;
L_005c806c:; BB(0x005c806c);
    /* 005c806c: jmp 0x5c8072 */ goto L_005c8072;
L_005c806e:; BB(0x005c806e);
    /* 005c806e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c8070: jmp 0x5c8074 */ goto L_005c8074;
L_005c8072:; BB(0x005c8072);
    /* 005c8072: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005c8074:; BB(0x005c8074);
    /* 005c8074: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8076: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8077: ret  */ FN_RET(0x005c8030); r_esp += 4; return;
}

void f_005c8080(void) /* MLVSlotDisplay_Jewelry::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8080);
    /* 005c8080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8081: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8083: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8086: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8089: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c808c: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8090: je 0x5c80a4 */ if (fZ) goto L_005c80a4;
L_005c8092:; BB(0x005c8092);
    /* 005c8092: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8095: cmp dword ptr [ecx + 0x54], 6 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8099: je 0x5c80a4 */ if (fZ) goto L_005c80a4;
L_005c809b:; BB(0x005c809b);
    /* 005c809b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c80a2: jmp 0x5c80ab */ goto L_005c80ab;
L_005c80a4:; BB(0x005c80a4);
    /* 005c80a4: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005c80ab:; BB(0x005c80ab);
    /* 005c80ab: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005c80ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005c80b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c80b1: ret  */ FN_RET(0x005c8080); r_esp += 4; return;
}

void f_005c80c0(void) /* MLVSlotDisplay_Jewelry::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c80c0);
    /* 005c80c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c80c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c80c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c80c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c80c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c80ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c80cc: cmp dword ptr [eax + 0x54], 7 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c80d0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c80d3: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005c80d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005c80d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c80d8: ret  */ FN_RET(0x005c80c0); r_esp += 4; return;
}

