#include "protos.h"

void f_00525d20(void) /* RouletteRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00525d20);
    /* 00525d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00525d23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00525d25: push 0x6a40d8 */ { u32 v = 0x6a40d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00525d2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00525d30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525d31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00525d32: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00525d37: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525d3a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00525d3d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00525d43: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00525d46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525d49: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x525d4eu); f_005d7b60();
    /* 00525d4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00525d55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525d58: mov dword ptr [eax], 0x6c316c */ W32((u32)(r_eax), 0x6c316cu);
    /* 00525d5e: push 0x1adbe */ { u32 v = 0x1adbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00525d63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525d66: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x525d6bu); f_005f1ad0();
    /* 00525d6b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525d6e: mov dword ptr [0x793370], ecx */ W32((u32)(0x793370u), r_ecx);
    /* 00525d74: mov dword ptr [0x793374], 0 */ W32((u32)(0x793374u), 0x0u);
    /* 00525d7e: mov dword ptr [0x793378], 0 */ W32((u32)(0x793378u), 0x0u);
    /* 00525d88: mov dword ptr [0x79337c], 0 */ W32((u32)(0x79337cu), 0x0u);
    /* 00525d92: mov dword ptr [0x793380], 0 */ W32((u32)(0x793380u), 0x0u);
    /* 00525d9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00525da3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525da6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00525da9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00525db0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525db1: mov esp, ebp */ r_esp = r_ebp;
    /* 00525db3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525db4: ret  */ FN_RET(0x00525d20); r_esp += 4; return;
}

void f_00525dc0(void) /* RouletteRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00525dc0);
    /* 00525dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00525dc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00525dc5: push 0x6a40fb */ { u32 v = 0x6a40fbu; r_esp -= 4; W32(r_esp, v); }
    /* 00525dca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00525dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525dd1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00525dd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00525dd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525ddc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00525ddf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00525de5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00525de8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00525deb: mov dword ptr [eax], 0x6c316c */ W32((u32)(r_eax), 0x6c316cu);
    /* 00525df1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00525df8: mov dword ptr [0x793370], 0 */ W32((u32)(0x793370u), 0x0u);
    /* 00525e02: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00525e08: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00525e0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00525e0e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00525e11: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525e15: je 0x525e2a */ if (fZ) goto L_00525e2a;
L_00525e17:; BB(0x00525e17);
    /* 00525e17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525e19: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525e1c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525e1e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525e21: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00525e23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x525e25u); call_ind(t); }
    /* 00525e25: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00525e28: jmp 0x525e31 */ goto L_00525e31;
L_00525e2a:; BB(0x00525e2a);
    /* 00525e2a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00525e31:; BB(0x00525e31);
    /* 00525e31: mov dword ptr [0x793374], 0 */ W32((u32)(0x793374u), 0x0u);
    /* 00525e3b: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 00525e41: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00525e44: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00525e47: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00525e4a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525e4e: je 0x525e63 */ if (fZ) goto L_00525e63;
L_00525e50:; BB(0x00525e50);
    /* 00525e50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525e52: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00525e55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525e57: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00525e5a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00525e5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x525e5eu); call_ind(t); }
    /* 00525e5e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00525e61: jmp 0x525e6a */ goto L_00525e6a;
L_00525e63:; BB(0x00525e63);
    /* 00525e63: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00525e6a:; BB(0x00525e6a);
    /* 00525e6a: mov dword ptr [0x793378], 0 */ W32((u32)(0x793378u), 0x0u);
    /* 00525e74: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00525e7a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00525e7d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00525e80: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00525e83: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525e87: je 0x525e9c */ if (fZ) goto L_00525e9c;
L_00525e89:; BB(0x00525e89);
    /* 00525e89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525e8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00525e8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525e90: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00525e93: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00525e95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x525e97u); call_ind(t); }
    /* 00525e97: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00525e9a: jmp 0x525ea3 */ goto L_00525ea3;
L_00525e9c:; BB(0x00525e9c);
    /* 00525e9c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00525ea3:; BB(0x00525ea3);
    /* 00525ea3: mov dword ptr [0x79337c], 0 */ W32((u32)(0x79337cu), 0x0u);
    /* 00525ead: mov ecx, dword ptr [0x793380] */ r_ecx = R32((u32)(0x793380u));
    /* 00525eb3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00525eb6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00525eb9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00525ebc: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525ec0: je 0x525ed5 */ if (fZ) goto L_00525ed5;
L_00525ec2:; BB(0x00525ec2);
    /* 00525ec2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525ec4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00525ec7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525ec9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00525ecc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00525ece: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x525ed0u); call_ind(t); }
    /* 00525ed0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00525ed3: jmp 0x525edc */ goto L_00525edc;
L_00525ed5:; BB(0x00525ed5);
    /* 00525ed5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00525edc:; BB(0x00525edc);
    /* 00525edc: mov dword ptr [0x793380], 0 */ W32((u32)(0x793380u), 0x0u);
    /* 00525ee6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00525eed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00525ef0: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x525ef5u); f_005d7bd0();
    /* 00525ef5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00525ef8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00525eff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525f00: mov esp, ebp */ r_esp = r_ebp;
    /* 00525f02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525f03: ret  */ FN_RET(0x00525dc0); r_esp += 4; return;
}

void f_00525f10(void) /* RouletteRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00525f10);
    /* 00525f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00525f13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00525f15: push 0x6a414d */ { u32 v = 0x6a414du; r_esp -= 4; W32(r_esp, v); }
    /* 00525f1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00525f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525f21: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00525f24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00525f29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525f2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00525f2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00525f35: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00525f38: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00525f3b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x525f40u); f_005d8230();
    /* 00525f40: push 0xdc0 */ { u32 v = 0xdc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525f45: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x525f4au); f_00686d82();
    /* 00525f4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525f4d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00525f50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00525f57: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525f5b: je 0x525f6a */ if (fZ) goto L_00525f6a;
L_00525f5d:; BB(0x00525f5d);
    /* 00525f5d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00525f60: call 0x527a00 */ r_esp -= 4; W32(r_esp, 0x525f65u); f_00527a00();
    /* 00525f65: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00525f68: jmp 0x525f71 */ goto L_00525f71;
L_00525f6a:; BB(0x00525f6a);
    /* 00525f6a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00525f71:; BB(0x00525f71);
    /* 00525f71: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00525f74: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00525f77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00525f7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00525f81: mov dword ptr [0x793374], ecx */ W32((u32)(0x793374u), r_ecx);
    /* 00525f87: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00525f8d: call 0x527d40 */ r_esp -= 4; W32(r_esp, 0x525f92u); f_00527d40();
    /* 00525f92: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00525f94: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x525f99u); f_00686d82();
    /* 00525f99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525f9c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00525f9f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00525fa6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525faa: je 0x525fb9 */ if (fZ) goto L_00525fb9;
L_00525fac:; BB(0x00525fac);
    /* 00525fac: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00525faf: call 0x524390 */ r_esp -= 4; W32(r_esp, 0x525fb4u); f_00524390();
    /* 00525fb4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00525fb7: jmp 0x525fc0 */ goto L_00525fc0;
L_00525fb9:; BB(0x00525fb9);
    /* 00525fb9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00525fc0:; BB(0x00525fc0);
    /* 00525fc0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00525fc3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00525fc6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00525fcd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00525fd0: mov dword ptr [0x793378], eax */ W32((u32)(0x793378u), r_eax);
    /* 00525fd5: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 00525fdb: call 0x5243d0 */ r_esp -= 4; W32(r_esp, 0x525fe0u); f_005243d0();
    /* 00525fe0: push 0x31c */ { u32 v = 0x31cu; r_esp -= 4; W32(r_esp, v); }
    /* 00525fe5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x525feau); f_00686d82();
    /* 00525fea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525fed: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00525ff0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00525ff7: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525ffb: je 0x52600a */ if (fZ) goto L_0052600a;
L_00525ffd:; BB(0x00525ffd);
    /* 00525ffd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00526000: call 0x521b80 */ r_esp -= 4; W32(r_esp, 0x526005u); f_00521b80();
    /* 00526005: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00526008: jmp 0x526011 */ goto L_00526011;
L_0052600a:; BB(0x0052600a);
    /* 0052600a: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00526011:; BB(0x00526011);
    /* 00526011: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00526014: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00526017: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052601e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00526021: mov dword ptr [0x79337c], edx */ W32((u32)(0x79337cu), r_edx);
    /* 00526027: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 0052602d: call 0x521f20 */ r_esp -= 4; W32(r_esp, 0x526032u); f_00521f20();
    /* 00526032: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00526034: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x526039u); f_00686d82();
    /* 00526039: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052603c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052603f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00526046: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052604a: je 0x526059 */ if (fZ) goto L_00526059;
L_0052604c:; BB(0x0052604c);
    /* 0052604c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052604f: call 0x520eb0 */ r_esp -= 4; W32(r_esp, 0x526054u); f_00520eb0();
    /* 00526054: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00526057: jmp 0x526060 */ goto L_00526060;
L_00526059:; BB(0x00526059);
    /* 00526059: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00526060:; BB(0x00526060);
    /* 00526060: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00526063: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00526066: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052606d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00526070: mov dword ptr [0x793380], ecx */ W32((u32)(0x793380u), r_ecx);
    /* 00526076: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00526078: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52607du); f_00686d82();
    /* 0052607d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526080: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00526083: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0052608a: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052608e: je 0x5260ab */ if (fZ) goto L_005260ab;
L_00526090:; BB(0x00526090);
    /* 00526090: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526092: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00526095: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x52609au); f_005fc0d0();
    /* 0052609a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0052609d: mov dword ptr [edx], 0x6c346c */ W32((u32)(r_edx), 0x6c346cu);
    /* 005260a3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005260a6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005260a9: jmp 0x5260b2 */ goto L_005260b2;
L_005260ab:; BB(0x005260ab);
    /* 005260ab: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005260b2:; BB(0x005260b2);
    /* 005260b2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005260b5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005260b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005260bf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005260c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005260c3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005260c6: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5260cbu); f_005f1b70();
    /* 005260cb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005260ce: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005260d1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005260d4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005260d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005260d9: mov ecx, eax */ r_ecx = r_eax;
    /* 005260db: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005260de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5260e0u); call_ind(t); }
    /* 005260e0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005260e3: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x5260e8u); f_005d85e0();
    /* 005260e8: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 005260ee: call 0x5243f0 */ r_esp -= 4; W32(r_esp, 0x5260f3u); f_005243f0();
    /* 005260f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005260f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005260fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005260fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00526100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526101: ret  */ FN_RET(0x00525f10); r_esp += 4; return;
}

void f_00526110(void) /* RouletteRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526110);
    /* 00526110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526111: mov ebp, esp */ r_ebp = r_esp;
    /* 00526113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526116: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526119: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052611c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0052611f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526126: je 0x526133 */ if (fZ) goto L_00526133;
L_00526128:; BB(0x00526128);
    /* 00526128: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052612f: je 0x526186 */ if (fZ) goto L_00526186;
L_00526131:; BB(0x00526131);
    /* 00526131: jmp 0x5261a8 */ goto L_005261a8;
L_00526133:; BB(0x00526133);
    /* 00526133: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526135: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052613a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052613d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x526142u); f_005fe640();
    /* 00526142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526144: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00526149: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052614c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x526151u); f_005fe640();
    /* 00526151: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526153: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00526158: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052615b: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x526160u); f_005fe640();
    /* 00526160: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526162: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00526167: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052616a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x52616fu); f_005fe640();
    /* 0052616f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526171: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526173: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526175: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0052617a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052617d: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x526182u); f_005fe240();
    /* 00526182: jmp 0x5261a8 */ goto L_005261a8;
L_00526186:; BB(0x00526186);
    /* 00526186: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526188: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052618a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052618c: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00526191: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526194: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x526199u); f_005fe240();
    /* 00526199: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052619b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005261a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005261a3: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5261a8u); f_005fe640();
L_005261a8:; BB(0x005261a8);
    /* 005261a8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005261ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005261ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005261af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005261b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005261b3: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5261b8u); f_005d8670();
    /* 005261b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005261ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005261bb: ret 8 */ FN_RET(0x00526110); r_esp += 12; return;
}

void f_005261c0(void) /* RouletteRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005261c0);
    /* 005261c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005261c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005261c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005261c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005261c7: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 005261cc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005261d2: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x5261d7u); f_005df2e0();
    /* 005261d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005261d8: push 0x30eb71 */ { u32 v = 0x30eb71u; r_esp -= 4; W32(r_esp, v); }
    /* 005261dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005261e0: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x5261e5u); f_005f1e60();
    /* 005261e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005261e8: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x5261edu); f_0064e430();
    /* 005261ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005261ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005261f0: ret  */ FN_RET(0x005261c0); r_esp += 4; return;
}

void f_00526200(void) /* RouletteRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526200);
    /* 00526200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526201: mov ebp, esp */ r_ebp = r_esp;
    /* 00526203: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526206: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526209: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052620c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0052620f: cmp dword ptr [ebp - 8], 0x30eb72 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x30eb72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526216: je 0x52621a */ if (fZ) goto L_0052621a;
L_00526218:; BB(0x00526218);
    /* 00526218: jmp 0x526229 */ goto L_00526229;
L_0052621a:; BB(0x0052621a);
    /* 0052621a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052621c: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526222: call 0x528ff0 */ r_esp -= 4; W32(r_esp, 0x526227u); f_00528ff0();
    /* 00526227: jmp 0x526239 */ goto L_00526239;
L_00526229:; BB(0x00526229);
    /* 00526229: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0052622c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052622d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00526230: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526231: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526234: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x526239u); f_005dc7d0();
L_00526239:; BB(0x00526239);
    /* 00526239: mov esp, ebp */ r_esp = r_ebp;
    /* 0052623b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052623c: ret 8 */ FN_RET(0x00526200); r_esp += 12; return;
}

void f_00526240(void) /* RouletteRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526240);
    /* 00526240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526241: mov ebp, esp */ r_ebp = r_esp;
    /* 00526243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526247: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052624a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0052624e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526250: jne 0x5262ab */ if (!fZ) goto L_005262ab;
L_00526252:; BB(0x00526252);
    /* 00526252: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00526255: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526259: jne 0x5262ab */ if (!fZ) goto L_005262ab;
L_0052625b:; BB(0x0052625b);
    /* 0052625b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052625e: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00526262: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526263: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x526269u); call_ind(t); }
    /* 00526269: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052626c: cmp eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052626f: jne 0x5262ab */ if (!fZ) goto L_005262ab;
L_00526271:; BB(0x00526271);
    /* 00526271: cmp dword ptr [0x793374], 0 */ {  u32 a = R32((u32)(0x793374u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526278: je 0x5262ab */ if (fZ) goto L_005262ab;
L_0052627a:; BB(0x0052627a);
    /* 0052627a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052627c: push 0x30eb72 */ { u32 v = 0x30eb72u; r_esp -= 4; W32(r_esp, v); }
    /* 00526281: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526284: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x526289u); f_005f2a60();
    /* 00526289: mov ecx, eax */ r_ecx = r_eax;
    /* 0052628b: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x526290u); f_006026d0();
    /* 00526290: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00526293: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526295: je 0x5262ab */ if (fZ) goto L_005262ab;
L_00526297:; BB(0x00526297);
    /* 00526297: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052629a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0052629e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005262a0: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005262a6: call 0x528ff0 */ r_esp -= 4; W32(r_esp, 0x5262abu); f_00528ff0();
L_005262ab:; BB(0x005262ab);
    /* 005262ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005262ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005262af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005262b2: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5262b7u); f_005d7f40();
    /* 005262b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005262b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005262ba: ret 4 */ FN_RET(0x00526240); r_esp += 8; return;
}

void f_005262c0(void) /* RouletteRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005262c0);
    /* 005262c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005262c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005262c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005262c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005262c7: cmp dword ptr [0x793374], 0 */ {  u32 a = R32((u32)(0x793374u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005262ce: jne 0x5262d4 */ if (!fZ) goto L_005262d4;
L_005262d0:; BB(0x005262d0);
    /* 005262d0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005262d2: jmp 0x5262df */ goto L_005262df;
L_005262d4:; BB(0x005262d4);
    /* 005262d4: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005262da: call 0x527f50 */ r_esp -= 4; W32(r_esp, 0x5262dfu); f_00527f50();
L_005262df:; BB(0x005262df);
    /* 005262df: mov esp, ebp */ r_esp = r_ebp;
    /* 005262e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005262e2: ret  */ FN_RET(0x005262c0); r_esp += 4; return;
}

void f_005262f0(void) /* RouletteRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005262f0);
    /* 005262f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005262f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005262f3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005262f6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005262f9: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 005262fe: mov ecx, dword ptr [eax + 0xd38] */ r_ecx = R32((u32)(r_eax+0xd38u));
    /* 00526304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526307: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052630a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052630b: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526311: call 0x528090 */ r_esp -= 4; W32(r_esp, 0x526316u); f_00528090();
    /* 00526316: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00526319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052631b: je 0x5263ae */ if (fZ) goto L_005263ae;
L_00526321:; BB(0x00526321);
    /* 00526321: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526327: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x52632cu); f_00528000();
    /* 0052632c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052632f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00526332: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x526337u); f_0063aac0();
    /* 00526337: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00526339: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052633c: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526340: je 0x52635e */ if (fZ) goto L_0052635e;
L_00526342:; BB(0x00526342);
    /* 00526342: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00526345: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52634au); f_0063aac0();
    /* 0052634a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052634c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0052634f: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526353: je 0x52635e */ if (fZ) goto L_0052635e;
L_00526355:; BB(0x00526355);
    /* 00526355: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0052635c: jmp 0x526365 */ goto L_00526365;
L_0052635e:; BB(0x0052635e);
    /* 0052635e: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00526365:; BB(0x00526365);
    /* 00526365: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00526369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052636b: je 0x5263ae */ if (fZ) goto L_005263ae;
L_0052636d:; BB(0x0052636d);
    /* 0052636d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526370: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526371: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526377: call 0x528d00 */ r_esp -= 4; W32(r_esp, 0x52637cu); f_00528d00();
    /* 0052637c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0052637f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526381: je 0x5263ae */ if (fZ) goto L_005263ae;
L_00526383:; BB(0x00526383);
    /* 00526383: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526385: push 0x6b7a3c */ { u32 v = 0x6b7a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052638a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52638fu); f_00630f40();
    /* 0052638f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526393: push 0x6b7a1c */ { u32 v = 0x6b7a1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00526398: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52639du); f_00630f40();
    /* 0052639d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005263a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005263a1: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5263a6u); f_0062ff10();
    /* 005263a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005263a9: jmp 0x526442 */ goto L_00526442;
L_005263ae:; BB(0x005263ae);
    /* 005263ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005263b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005263b2: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005263b8: call 0x528090 */ r_esp -= 4; W32(r_esp, 0x5263bdu); f_00528090();
    /* 005263bd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005263c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005263c2: je 0x5263de */ if (fZ) goto L_005263de;
L_005263c4:; BB(0x005263c4);
    /* 005263c4: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005263ca: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x5263cfu); f_00528000();
    /* 005263cf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005263d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005263d5: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 005263dc: jmp 0x5263f6 */ goto L_005263f6;
L_005263de:; BB(0x005263de);
    /* 005263de: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005263e4: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x5263e9u); f_00528000();
    /* 005263e9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005263ec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005263ef: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
L_005263f6:; BB(0x005263f6);
    /* 005263f6: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005263fc: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x526401u); f_00528000();
    /* 00526401: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00526404: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00526407: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00526409: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052640c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0052640f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x526411u); call_ind(t); }
    /* 00526411: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526417: mov edx, dword ptr [ecx + 0xd38] */ r_edx = R32((u32)(r_ecx+0xd38u));
    /* 0052641d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00526420: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00526423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526424: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052642a: call 0x528ee0 */ r_esp -= 4; W32(r_esp, 0x52642fu); f_00528ee0();
    /* 0052642f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00526432: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x526437u); f_005db890();
    /* 00526437: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 0052643d: call 0x524500 */ r_esp -= 4; W32(r_esp, 0x526442u); f_00524500();
L_00526442:; BB(0x00526442);
    /* 00526442: mov esp, ebp */ r_esp = r_ebp;
    /* 00526444: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526445: ret  */ FN_RET(0x005262f0); r_esp += 4; return;
}

void f_00526450(void) /* RouletteRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526450);
    /* 00526450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526451: mov ebp, esp */ r_ebp = r_esp;
    /* 00526453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526457: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0052645b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052645d: je 0x526477 */ if (fZ) goto L_00526477;
L_0052645f:; BB(0x0052645f);
    /* 0052645f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526461: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526467: call 0x527d00 */ r_esp -= 4; W32(r_esp, 0x52646cu); f_00527d00();
    /* 0052646c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00526472: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x526477u); f_00637610();
L_00526477:; BB(0x00526477);
    /* 00526477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052647a: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x52647fu); f_005db9b0();
    /* 0052647f: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00526485: call 0x5230a0 */ r_esp -= 4; W32(r_esp, 0x52648au); f_005230a0();
    /* 0052648a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052648c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052648e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526491: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00526494: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526497: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052649a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052649c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052649f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5264a1u); call_ind(t); }
    /* 005264a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005264a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005264a4: ret 4 */ FN_RET(0x00526450); r_esp += 8; return;
}

void f_005264b0(void) /* RouletteRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005264b0);
    /* 005264b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005264b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005264b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005264b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005264b9: mov dword ptr [ebp - 0x10], 0xe5 */ W32((u32)(r_ebp+0xfffffff0u), 0xe5u);
    /* 005264c0: mov dword ptr [ebp - 0xc], 0x182 */ W32((u32)(r_ebp+0xfffffff4u), 0x182u);
    /* 005264c7: mov dword ptr [ebp - 8], 0x20f */ W32((u32)(r_ebp+0xfffffff8u), 0x20fu);
    /* 005264ce: mov dword ptr [ebp - 4], 0x20f */ W32((u32)(r_ebp+0xfffffffcu), 0x20fu);
    /* 005264d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005264d8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005264dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005264de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005264df: ret 4 */ FN_RET(0x005264b0); r_esp += 8; return;
}

void f_005264f0(void) /* RouletteRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005264f0);
    /* 005264f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005264f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005264f3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005264f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005264f9: mov dword ptr [ebp - 0x10], 0x132 */ W32((u32)(r_ebp+0xfffffff0u), 0x132u);
    /* 00526500: mov dword ptr [ebp - 0xc], 0x132 */ W32((u32)(r_ebp+0xfffffff4u), 0x132u);
    /* 00526507: mov dword ptr [ebp - 8], 0xf2 */ W32((u32)(r_ebp+0xfffffff8u), 0xf2u);
    /* 0052650e: mov dword ptr [ebp - 4], 0x50 */ W32((u32)(r_ebp+0xfffffffcu), 0x50u);
    /* 00526515: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00526518: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0052651c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052651e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052651f: ret 4 */ FN_RET(0x005264f0); r_esp += 8; return;
}

void f_00526530(void) /* RouletteRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526530);
    /* 00526530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526531: mov ebp, esp */ r_ebp = r_esp;
    /* 00526533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526537: cmp dword ptr [0x793374], 0 */ {  u32 a = R32((u32)(0x793374u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052653e: je 0x52654d */ if (fZ) goto L_0052654d;
L_00526540:; BB(0x00526540);
    /* 00526540: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526546: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x52654bu); f_00528000();
    /* 0052654b: jmp 0x52654f */ goto L_0052654f;
L_0052654d:; BB(0x0052654d);
    /* 0052654d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0052654f:; BB(0x0052654f);
    /* 0052654f: mov esp, ebp */ r_esp = r_ebp;
    /* 00526551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526552: ret  */ FN_RET(0x00526530); r_esp += 4; return;
}

void f_00526560(void) /* RouletteRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526560);
    /* 00526560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526561: mov ebp, esp */ r_ebp = r_esp;
    /* 00526563: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526566: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00526569: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00526570: jmp 0x52657b */ goto L_0052657b;
L_00526572:; BB(0x00526572);
    /* 00526572: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526575: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00526578: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0052657b:; BB(0x0052657b);
    /* 0052657b: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526582: jge 0x5265b0 */ if ((fS==fO)) goto L_005265b0;
L_00526584:; BB(0x00526584);
    /* 00526584: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526587: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 0052658d: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00526594: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526597: je 0x5265ae */ if (fZ) goto L_005265ae;
L_00526599:; BB(0x00526599);
    /* 00526599: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052659c: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 005265a2: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 005265a9: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x5265aeu); f_005cd330();
L_005265ae:; BB(0x005265ae);
    /* 005265ae: jmp 0x526572 */ goto L_00526572;
L_005265b0:; BB(0x005265b0);
    /* 005265b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005265b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005265b3: ret 4 */ FN_RET(0x00526560); r_esp += 8; return;
}

void f_005265c0(void) /* RouletteRoom::vfunc161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005265c0);
    /* 005265c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005265c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005265c3: sub esp, 0x18c */ {  u32 a = r_esp; u32 b = 0x18cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005265c9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005265ce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005265d0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005265d3: mov dword ptr [ebp - 0x18c], ecx */ W32((u32)(r_ebp+0xfffffe74u), r_ecx);
    /* 005265d9: mov byte ptr [ebp - 0x179], 0 */ W8((u32)(r_ebp+0xfffffe87u), 0x0u);
    /* 005265e0: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005265e2: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005265e5: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x5265eau); f_005ef310();
    /* 005265ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005265ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005265ee: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005265f1: call 0x5ef340 */ r_esp -= 4; W32(r_esp, 0x5265f6u); f_005ef340();
    /* 005265f6: mov byte ptr [ebp - 0x108], 0 */ W8((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 005265fd: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 00526607: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052660e: jmp 0x526619 */ goto L_00526619;
L_00526610:; BB(0x00526610);
    /* 00526610: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526613: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00526616: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00526619:; BB(0x00526619);
    /* 00526619: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052661d: jge 0x526740 */ if ((fS==fO)) goto L_00526740;
L_00526623:; BB(0x00526623);
    /* 00526623: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526626: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052662c: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0052662f: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526633: je 0x52673b */ if (fZ) goto L_0052673b;
L_00526639:; BB(0x00526639);
    /* 00526639: mov al, byte ptr [ebp - 0x179] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe87u))) & 0xffu);
    /* 0052663f: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00526641: mov byte ptr [ebp - 0x179], al */ W8((u32)(r_ebp+0xfffffe87u), (u8)r_eax);
    /* 00526647: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052664a: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00526650: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526653: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00526656: mov ecx, dword ptr [edx + eax + 0x4c] */ r_ecx = R32((u32)(r_edx+r_eax+0x4cu));
    /* 0052665a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052665b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052665e: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00526664: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526667: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0052666a: mov edx, dword ptr [eax + ecx + 0x48] */ r_edx = R32((u32)(r_eax+r_ecx+0x48u));
    /* 0052666e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052666f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x526674u); f_0064c8a0();
    /* 00526674: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526677: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 0052667d: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 00526683: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526685: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00526687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00526689: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0052668f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526690: mov ecx, dword ptr [ebp - 0x180] */ r_ecx = R32((u32)(r_ebp+0xfffffe80u));
    /* 00526696: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526697: mov edx, dword ptr [ebp - 0x184] */ r_edx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 0052669d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052669e: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5266a3u); f_0064c8d0();
    /* 005266a3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005266a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005266a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005266aa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5266afu); f_005dcb00();
    /* 005266af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005266b2: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 005266b8: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 005266be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005266bf: mov ecx, dword ptr [ebp - 0x188] */ r_ecx = R32((u32)(r_ebp+0xfffffe78u));
    /* 005266c5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5266cau); f_0063aac0();
    /* 005266ca: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005266cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005266ce: push 0x6c348c */ { u32 v = 0x6c348cu; r_esp -= 4; W32(r_esp, v); }
    /* 005266d3: lea edx, [ebp - 0x178] */ r_edx = (u32)(r_ebp+0xfffffe88u);
    /* 005266d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005266da: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5266e0u); call_ind(t); }
    /* 005266e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005266e3: lea eax, [ebp - 0x178] */ r_eax = (u32)(r_ebp+0xfffffe88u);
    /* 005266e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005266ea: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005266f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005266f1: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5266f6u); f_00686ec6();
    /* 005266f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005266f9: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005266fe: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00526701: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x526706u); f_005ecc60();
    /* 00526706: lea edx, [ebp - 0x178] */ r_edx = (u32)(r_ebp+0xfffffe88u);
    /* 0052670c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052670d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00526710: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00526712: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00526715: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0052671b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52671du); call_ind(t); }
    /* 0052671d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00526720: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x526725u); f_005ef050();
    /* 00526725: cmp eax, dword ptr [ebp - 0x10c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052672b: jle 0x52673b */ if ((fZ||fS!=fO)) goto L_0052673b;
L_0052672d:; BB(0x0052672d);
    /* 0052672d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00526730: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x526735u); f_005ef050();
    /* 00526735: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_0052673b:; BB(0x0052673b);
    /* 0052673b: jmp 0x526610 */ goto L_00526610;
L_00526740:; BB(0x00526740);
    /* 00526740: movsx ecx, byte ptr [ebp - 0x179] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe87u));
    /* 00526747: imul ecx, ecx, 0x12 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x12u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052674a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052674b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0052674e: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x526753u); f_005eccb0();
    /* 00526753: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00526759: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052675c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052675d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00526760: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x526765u); f_005ecc60();
    /* 00526765: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0052676b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052676c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0052676f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00526771: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00526774: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0052677a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52677cu); call_ind(t); }
    /* 0052677c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0052677e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00526781: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00526783: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x526788u); f_00686d72();
    /* 00526788: mov esp, ebp */ r_esp = r_ebp;
    /* 0052678a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052678b: ret 0x1c */ FN_RET(0x005265c0); r_esp += 32; return;
}

void f_00526790(void) /* RouletteRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526790);
    /* 00526790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526791: mov ebp, esp */ r_ebp = r_esp;
    /* 00526793: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526796: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00526799: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052679b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052679d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5267a2u); f_0064c8a0();
    /* 005267a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005267a5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005267a8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005267ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005267ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005267b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005267b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005267b7: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005267ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005267bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005267be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005267bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005267c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005267c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005267c7: mov eax, dword ptr [edx + 0x27c] */ r_eax = R32((u32)(r_edx+0x27cu));
    /* 005267cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5267cfu); call_ind(t); }
    /* 005267cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005267d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005267d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005267d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005267d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005267da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005267db: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5267e0u); f_005dcb00();
    /* 005267e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005267e3: mov ecx, eax */ r_ecx = r_eax;
    /* 005267e5: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5267eau); f_005d5cf0();
    /* 005267ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005267ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005267ee: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 005267f4: call 0x522890 */ r_esp -= 4; W32(r_esp, 0x5267f9u); f_00522890();
    /* 005267f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005267fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005267fc: ret 4 */ FN_RET(0x00526790); r_esp += 8; return;
}

void f_00526800(void) /* RouletteRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526800);
    /* 00526800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526801: mov ebp, esp */ r_ebp = r_esp;
    /* 00526803: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526806: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00526809: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052680c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052680d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x526812u); f_005dcb00();
    /* 00526812: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526815: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00526818: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052681b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00526821: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 00526824: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00526828: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052682a: je 0x52682e */ if (fZ) goto L_0052682e;
L_0052682c:; BB(0x0052682c);
    /* 0052682c: jmp 0x5268a5 */ goto L_005268a5;
L_0052682e:; BB(0x0052682e);
    /* 0052682e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526830: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526832: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x526837u); f_0064c8a0();
    /* 00526837: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052683a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0052683d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00526840: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00526843: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00526846: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00526848: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052684b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0052684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00526855: jmp 0x526860 */ goto L_00526860;
L_00526857:; BB(0x00526857);
    /* 00526857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052685a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052685d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00526860:; BB(0x00526860);
    /* 00526860: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526867: jge 0x5268a5 */ if ((fS==fO)) goto L_005268a5;
L_00526869:; BB(0x00526869);
    /* 00526869: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052686c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052686d: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00526870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526871: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526874: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 0052687a: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0052687e: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x526883u); f_005cb880();
    /* 00526883: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00526886: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526887: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00526889: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052688a: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0052688d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052688e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00526891: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x526896u); f_0064c5c0();
    /* 00526896: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00526898: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0052689b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052689e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005268a0: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005268a3: jmp 0x526857 */ goto L_00526857;
L_005268a5:; BB(0x005268a5);
    /* 005268a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005268a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005268a8: ret 8 */ FN_RET(0x00526800); r_esp += 12; return;
}

void f_005268b0(void) /* RouletteRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005268b0);
    /* 005268b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005268b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005268b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005268b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005268b7: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005268bd: call 0x527ce0 */ r_esp -= 4; W32(r_esp, 0x5268c2u); f_00527ce0();
    /* 005268c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005268c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005268c5: ret  */ FN_RET(0x005268b0); r_esp += 4; return;
}

void f_005268d0(void) /* RouletteRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005268d0);
    /* 005268d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005268d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005268d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005268d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005268d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005268d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005268db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005268de: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005268e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005268e4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005268e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005268e9: mov ecx, eax */ r_ecx = r_eax;
    /* 005268eb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005268ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5268f0u); call_ind(t); }
    /* 005268f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005268f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005268f3: ret  */ FN_RET(0x005268d0); r_esp += 4; return;
}

void f_00526900(void) /* RouletteRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526900);
    /* 00526900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526901: mov ebp, esp */ r_ebp = r_esp;
    /* 00526903: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00526907: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00526908: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0052690b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052690e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052690f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x526914u); f_005dcb00();
    /* 00526914: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526917: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 0052691d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052691e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 00526924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526925: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00526928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526929: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052692b: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526931: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x526936u); f_00527c80();
    /* 00526936: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00526939: mov ecx, eax */ r_ecx = r_eax;
    /* 0052693b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x526940u); f_0064c5c0();
    /* 00526940: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00526942: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00526945: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526947: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052694d: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x526952u); f_00527c80();
    /* 00526952: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00526955: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 00526958: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052695b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052695c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x526961u); f_005dcb00();
    /* 00526961: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526964: mov ecx, eax */ r_ecx = r_eax;
    /* 00526966: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x52696bu); f_0063b0a0();
    /* 0052696b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052696c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052696d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052696f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526970: ret 4 */ FN_RET(0x00526900); r_esp += 8; return;
}

void f_00526980(void) /* RouletteRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526980);
    /* 00526980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526981: mov ebp, esp */ r_ebp = r_esp;
    /* 00526983: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00526987: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00526988: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0052698b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052698e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052698f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x526994u); f_005dcb00();
    /* 00526994: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526997: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0052699d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052699e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 005269a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005269a5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005269a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005269a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005269ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005269ad: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005269b3: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x5269b8u); f_00527c80();
    /* 005269b8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005269bb: mov ecx, eax */ r_ecx = r_eax;
    /* 005269bd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5269c2u); f_0064c5c0();
    /* 005269c2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005269c4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005269c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005269ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005269cb: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005269d1: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x5269d6u); f_00527c80();
    /* 005269d6: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 005269d9: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 005269dc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005269df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005269e0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5269e5u); f_005dcb00();
    /* 005269e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005269e8: mov ecx, eax */ r_ecx = r_eax;
    /* 005269ea: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5269efu); f_0063b0a0();
    /* 005269ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005269f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005269f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005269f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005269f4: ret 4 */ FN_RET(0x00526980); r_esp += 8; return;
}

void f_00526a00(void) /* RouletteRoom::vfunc176 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526a00);
    /* 00526a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00526a03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526a06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00526a09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00526a10: jmp 0x526a1b */ goto L_00526a1b;
L_00526a12:; BB(0x00526a12);
    /* 00526a12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526a15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00526a18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00526a1b:; BB(0x00526a1b);
    /* 00526a1b: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526a22: jge 0x526a52 */ if ((fS==fO)) goto L_00526a52;
L_00526a24:; BB(0x00526a24);
    /* 00526a24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526a27: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 00526a2d: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00526a34: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00526a3a: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526a3d: jne 0x526a50 */ if (!fZ) goto L_00526a50;
L_00526a3f:; BB(0x00526a3f);
    /* 00526a3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526a42: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00526a47: mov eax, dword ptr [eax + edx*4 + 0x80] */ r_eax = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00526a4e: jmp 0x526a54 */ goto L_00526a54;
L_00526a50:; BB(0x00526a50);
    /* 00526a50: jmp 0x526a12 */ goto L_00526a12;
L_00526a52:; BB(0x00526a52);
    /* 00526a52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00526a54:; BB(0x00526a54);
    /* 00526a54: mov esp, ebp */ r_esp = r_ebp;
    /* 00526a56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526a57: ret 4 */ FN_RET(0x00526a00); r_esp += 8; return;
}

void f_00526a60(void) /* RouletteRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526a60);
    /* 00526a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00526a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526a67: mov eax, 0x416 */ r_eax = 0x416u;
    /* 00526a6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00526a6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526a6f: ret 4 */ FN_RET(0x00526a60); r_esp += 8; return;
}

void f_00526a80(void) /* RouletteRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526a80);
    /* 00526a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00526a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526a87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526a8a: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x526a8fu); f_005db890();
    /* 00526a8f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00526a95: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x526a9au); f_00636e70();
    /* 00526a9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526a9c: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00526aa1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00526aa4: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x526aa9u); f_005fc420();
    /* 00526aa9: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00526aaf: call 0x522650 */ r_esp -= 4; W32(r_esp, 0x526ab4u); f_00522650();
    /* 00526ab4: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526aba: call 0x527e50 */ r_esp -= 4; W32(r_esp, 0x526abfu); f_00527e50();
    /* 00526abf: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 00526ac5: call 0x524500 */ r_esp -= 4; W32(r_esp, 0x526acau); f_00524500();
    /* 00526aca: mov esp, ebp */ r_esp = r_ebp;
    /* 00526acc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526acd: ret 8 */ FN_RET(0x00526a80); r_esp += 12; return;
}

void f_00526ad0(void) /* RouletteRoom::vfunc73 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526ad0);
    /* 00526ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00526ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526ad7: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00526add: call 0x523440 */ r_esp -= 4; W32(r_esp, 0x526ae2u); f_00523440();
    /* 00526ae2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00526ae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526ae7: jne 0x526afa */ if (!fZ) goto L_00526afa;
L_00526ae9:; BB(0x00526ae9);
    /* 00526ae9: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526aef: movzx edx, byte ptr [ecx + 0xdbc] */ r_edx = (u32)R8((u32)(r_ecx+0xdbcu));
    /* 00526af6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526af8: je 0x526afc */ if (fZ) goto L_00526afc;
L_00526afa:; BB(0x00526afa);
    /* 00526afa: jmp 0x526b3d */ goto L_00526b3d;
L_00526afc:; BB(0x00526afc);
    /* 00526afc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00526aff: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00526b02: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00526b05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526b06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526b09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00526b0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526b0e: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 00526b14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x526b16u); call_ind(t); }
    /* 00526b16: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00526b19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526b1b: jne 0x526b3d */ if (!fZ) goto L_00526b3d;
L_00526b1d:; BB(0x00526b1d);
    /* 00526b1d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00526b20: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00526b23: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526b29: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00526b2c: mov dword ptr [ecx + 0xdb8], edx */ W32((u32)(r_ecx+0xdb8u), r_edx);
    /* 00526b32: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00526b38: call 0x5226b0 */ r_esp -= 4; W32(r_esp, 0x526b3du); f_005226b0();
L_00526b3d:; BB(0x00526b3d);
    /* 00526b3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00526b3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526b40: ret 8 */ FN_RET(0x00526ad0); r_esp += 12; return;
}

void f_00526b50(void) /* RouletteRoom::vfunc74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526b50);
    /* 00526b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00526b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526b57: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00526b5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526b5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526b5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526b5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526b62: call 0x5d9f50 */ r_esp -= 4; W32(r_esp, 0x526b67u); f_005d9f50();
    /* 00526b67: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00526b6d: call 0x523440 */ r_esp -= 4; W32(r_esp, 0x526b72u); f_00523440();
    /* 00526b72: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00526b75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526b77: jne 0x526b89 */ if (!fZ) goto L_00526b89;
L_00526b79:; BB(0x00526b79);
    /* 00526b79: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00526b7e: movzx ecx, byte ptr [eax + 0xdbc] */ r_ecx = (u32)R8((u32)(r_eax+0xdbcu));
    /* 00526b85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526b87: je 0x526b8b */ if (fZ) goto L_00526b8b;
L_00526b89:; BB(0x00526b89);
    /* 00526b89: jmp 0x526bb4 */ goto L_00526bb4;
L_00526b8b:; BB(0x00526b8b);
    /* 00526b8b: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00526b91: cmp dword ptr [edx + 0xdb8], -1 */ {  u32 a = R32((u32)(r_edx+0xdb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526b98: je 0x526bb4 */ if (fZ) goto L_00526bb4;
L_00526b9a:; BB(0x00526b9a);
    /* 00526b9a: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00526b9f: mov dword ptr [eax + 0xdb8], 0xffffffff */ W32((u32)(r_eax+0xdb8u), 0xffffffffu);
    /* 00526ba9: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00526baf: call 0x5226b0 */ r_esp -= 4; W32(r_esp, 0x526bb4u); f_005226b0();
L_00526bb4:; BB(0x00526bb4);
    /* 00526bb4: mov esp, ebp */ r_esp = r_ebp;
    /* 00526bb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526bb7: ret 8 */ FN_RET(0x00526b50); r_esp += 12; return;
}

void f_00526bc0(void) /* RouletteRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526bc0);
    /* 00526bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00526bc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526bc5: push 0x6a4173 */ { u32 v = 0x6a4173u; r_esp -= 4; W32(r_esp, v); }
    /* 00526bca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00526bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526bd1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526bd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00526bd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00526bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526bdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00526bdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00526be5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00526be8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526bea: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00526bec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526bee: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00526bf0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00526bf2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00526bf4: push 0x6c3560 */ { u32 v = 0x6c3560u; r_esp -= 4; W32(r_esp, v); }
    /* 00526bf9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x526bfeu); f_00630f40();
    /* 00526bfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526c01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526c02: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c04: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c06: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c08: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c0d: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c11: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526c14: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x526c19u); f_005f9ef0();
    /* 00526c19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526c1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526c1d: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x526c22u); f_005ff5a0();
    /* 00526c22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c24: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c26: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526c28: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c2a: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c2c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00526c2e: push 0x6b30bc */ { u32 v = 0x6b30bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00526c33: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x526c38u); f_00630f40();
    /* 00526c38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526c3c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c3e: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c40: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c42: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c47: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c4b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526c4e: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x526c53u); f_005f9ef0();
    /* 00526c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526c54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526c57: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x526c5cu); f_005ff5a0();
    /* 00526c5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c5e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526c63: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526c68: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526c6d: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c72: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00526c74: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c76: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c78: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c7d: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c82: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c84: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c89: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c8b: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c90: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x526c95u); f_00630f40();
    /* 00526c95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526c98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526c99: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00526c9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c9d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526ca0: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x526ca5u); f_005fa790();
    /* 00526ca5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526ca6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526ca9: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x526caeu); f_005ff5a0();
    /* 00526cae: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526cb3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x526cb8u); f_00686d82();
    /* 00526cb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526cbb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00526cbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00526cc5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526cc9: je 0x526ce4 */ if (fZ) goto L_00526ce4;
L_00526ccb:; BB(0x00526ccb);
    /* 00526ccb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00526cce: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x526cd3u); f_005ec5a0();
    /* 00526cd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00526cd6: mov dword ptr [eax], 0x6c349c */ W32((u32)(r_eax), 0x6c349cu);
    /* 00526cdc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00526cdf: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00526ce2: jmp 0x526ceb */ goto L_00526ceb;
L_00526ce4:; BB(0x00526ce4);
    /* 00526ce4: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00526ceb:; BB(0x00526ceb);
    /* 00526ceb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00526cee: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00526cf1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00526cf8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526cfa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00526cfc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00526cfe: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d03: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 00526d08: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00526d0a: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d0f: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d11: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d16: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d18: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00526d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526d1c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526d1f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x526d24u); f_005fa5b0();
    /* 00526d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526d25: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526d28: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x526d2du); f_005ff5a0();
    /* 00526d2d: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526d33: call 0x527ce0 */ r_esp -= 4; W32(r_esp, 0x526d38u); f_00527ce0();
    /* 00526d38: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00526d3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526d3d: je 0x526d5c */ if (fZ) goto L_00526d5c;
L_00526d3f:; BB(0x00526d3f);
    /* 00526d3f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d41: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526d44: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526d49u); f_005fb350();
    /* 00526d49: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00526d4c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00526d4f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00526d51: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00526d54: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00526d5a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x526d5cu); call_ind(t); }
L_00526d5c:; BB(0x00526d5c);
    /* 00526d5c: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526d62: call 0x527d20 */ r_esp -= 4; W32(r_esp, 0x526d67u); f_00527d20();
    /* 00526d67: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00526d6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526d6c: je 0x526d8b */ if (fZ) goto L_00526d8b;
L_00526d6e:; BB(0x00526d6e);
    /* 00526d6e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d70: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526d73: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526d78u); f_005fb350();
    /* 00526d78: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00526d7b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00526d7e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00526d80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00526d83: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00526d89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x526d8bu); call_ind(t); }
L_00526d8b:; BB(0x00526d8b);
    /* 00526d8b: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526d92: je 0x526de2 */ if (fZ) goto L_00526de2;
L_00526d94:; BB(0x00526d94);
    /* 00526d94: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00526d9a: call 0x5cdd60 */ r_esp -= 4; W32(r_esp, 0x526d9fu); f_005cdd60();
    /* 00526d9f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00526da2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526da4: je 0x526dc5 */ if (fZ) goto L_00526dc5;
L_00526da6:; BB(0x00526da6);
    /* 00526da6: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00526da8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526dab: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526db0u); f_005fb350();
    /* 00526db0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00526db3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00526db6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00526db8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00526dbb: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 00526dc1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x526dc3u); call_ind(t); }
    /* 00526dc3: jmp 0x526de2 */ goto L_00526de2;
L_00526dc5:; BB(0x00526dc5);
    /* 00526dc5: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00526dc7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00526dca: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526dcfu); f_005fb350();
    /* 00526dcf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00526dd2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00526dd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00526dd7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00526dda: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00526de0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x526de2u); call_ind(t); }
L_00526de2:; BB(0x00526de2);
    /* 00526de2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00526de5: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 00526de9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00526dec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00526df3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00526df4: mov esp, ebp */ r_esp = r_ebp;
    /* 00526df6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526df7: ret 0x10 */ FN_RET(0x00526bc0); r_esp += 20; return;
}

void f_00526e00(void) /* RouletteRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526e00);
    /* 00526e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00526e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526e07: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00526e09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526e0c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526e11u); f_005fb350();
    /* 00526e11: mov ecx, eax */ r_ecx = r_eax;
    /* 00526e13: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x526e18u); f_00600230();
    /* 00526e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526e19: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526e1f: call 0x527cc0 */ r_esp -= 4; W32(r_esp, 0x526e24u); f_00527cc0();
    /* 00526e24: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00526e26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526e29: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526e2eu); f_005fb350();
    /* 00526e2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00526e30: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x526e35u); f_00600230();
    /* 00526e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526e36: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526e3c: call 0x527d00 */ r_esp -= 4; W32(r_esp, 0x526e41u); f_00527d00();
    /* 00526e41: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526e48: je 0x526e6f */ if (fZ) goto L_00526e6f;
L_00526e4a:; BB(0x00526e4a);
    /* 00526e4a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00526e4c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00526e4f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x526e54u); f_005fb350();
    /* 00526e54: mov ecx, eax */ r_ecx = r_eax;
    /* 00526e56: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x526e5bu); f_00600230();
    /* 00526e5b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00526e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526e60: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00526e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526e64: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00526e6a: call 0x5cdd10 */ r_esp -= 4; W32(r_esp, 0x526e6fu); f_005cdd10();
L_00526e6f:; BB(0x00526e6f);
    /* 00526e6f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00526e75: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x526e7au); f_00637610();
    /* 00526e7a: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00526e80: call 0x522650 */ r_esp -= 4; W32(r_esp, 0x526e85u); f_00522650();
    /* 00526e85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526e88: movzx eax, byte ptr [edx + 0x7c] */ r_eax = (u32)R8((u32)(r_edx+0x7cu));
    /* 00526e8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526e8e: je 0x526ead */ if (fZ) goto L_00526ead;
L_00526e90:; BB(0x00526e90);
    /* 00526e90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526e93: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 00526e97: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00526e9d: call 0x527e50 */ r_esp -= 4; W32(r_esp, 0x526ea2u); f_00527e50();
    /* 00526ea2: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 00526ea8: call 0x524500 */ r_esp -= 4; W32(r_esp, 0x526eadu); f_00524500();
L_00526ead:; BB(0x00526ead);
    /* 00526ead: mov esp, ebp */ r_esp = r_ebp;
    /* 00526eaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526eb0: ret 8 */ FN_RET(0x00526e00); r_esp += 12; return;
}

void f_00526ec0(void) /* RouletteRoom::vfunc188 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526ec0);
    /* 00526ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00526ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00526ec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526eca: call 0x5dbe50 */ r_esp -= 4; W32(r_esp, 0x526ecfu); f_005dbe50();
    /* 00526ecf: cmp dword ptr [0x7947c0], 0 */ {  u32 a = R32((u32)(0x7947c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526ed6: je 0x526eea */ if (fZ) goto L_00526eea;
L_00526ed8:; BB(0x00526ed8);
    /* 00526ed8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526eda: push 0x1c7 */ { u32 v = 0x1c7u; r_esp -= 4; W32(r_esp, v); }
    /* 00526edf: mov ecx, dword ptr [0x7947c0] */ r_ecx = R32((u32)(0x7947c0u));
    /* 00526ee5: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x526eeau); f_005f7320();
L_00526eea:; BB(0x00526eea);
    /* 00526eea: mov esp, ebp */ r_esp = r_ebp;
    /* 00526eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526eed: ret  */ FN_RET(0x00526ec0); r_esp += 4; return;
}

void f_00526ef0(void) /* RouletteRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00526ef0);
    /* 00526ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00526ef3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526ef6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00526ef9: mov dword ptr [ebp - 0x28], 0x3d */ W32((u32)(r_ebp+0xffffffd8u), 0x3du);
    /* 00526f00: mov dword ptr [ebp - 0x24], 0x11e */ W32((u32)(r_ebp+0xffffffdcu), 0x11eu);
    /* 00526f07: mov dword ptr [ebp - 0x20], 0xe3 */ W32((u32)(r_ebp+0xffffffe0u), 0xe3u);
    /* 00526f0e: mov dword ptr [ebp - 0x1c], 0x11e */ W32((u32)(r_ebp+0xffffffe4u), 0x11eu);
    /* 00526f15: mov dword ptr [ebp - 0x18], 0x173 */ W32((u32)(r_ebp+0xffffffe8u), 0x173u);
    /* 00526f1c: mov dword ptr [ebp - 0x14], 0xbf */ W32((u32)(r_ebp+0xffffffecu), 0xbfu);
    /* 00526f23: mov dword ptr [ebp - 0x10], 0x173 */ W32((u32)(r_ebp+0xfffffff0u), 0x173u);
    /* 00526f2a: mov dword ptr [ebp - 0xc], 0x20 */ W32((u32)(r_ebp+0xfffffff4u), 0x20u);
    /* 00526f31: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00526f38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00526f3f: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526f43: jge 0x526f5d */ if ((fS==fO)) goto L_00526f5d;
L_00526f45:; BB(0x00526f45);
    /* 00526f45: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00526f48: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 00526f4c: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00526f50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00526f53: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00526f55: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00526f58: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00526f5b: jmp 0x526f89 */ goto L_00526f89;
L_00526f5d:; BB(0x00526f5d);
    /* 00526f5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00526f5f: jne 0x526f78 */ if (!fZ) goto L_00526f78;
L_00526f61:; BB(0x00526f61);
    /* 00526f61: push 0x1d6 */ { u32 v = 0x1d6u; r_esp -= 4; W32(r_esp, v); }
    /* 00526f66: push 0x6c357c */ { u32 v = 0x6c357cu; r_esp -= 4; W32(r_esp, v); }
    /* 00526f6b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00526f70: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x526f75u); f_005e9f20();
    /* 00526f75: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00526f78:; BB(0x00526f78);
    /* 00526f78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00526f7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00526f7e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00526f80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00526f83: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00526f86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00526f89:; BB(0x00526f89);
    /* 00526f89: mov esp, ebp */ r_esp = r_ebp;
    /* 00526f8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526f8c: ret 8 */ FN_RET(0x00526ef0); r_esp += 12; return;
}

