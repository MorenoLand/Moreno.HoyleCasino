#include "protos.h"

void f_00570d50(void) /* RoadKillSlotTimer::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570d50);
    /* 00570d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00570d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570d54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00570d57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570d5a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x570d5fu); f_005f5bf0();
    /* 00570d5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570d62: mov dword ptr [eax], 0x6ca65c */ W32((u32)(r_eax), 0x6ca65cu);
    /* 00570d68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570d6b: mov dword ptr [ecx + 0x184], 0 */ W32((u32)(r_ecx+0x184u), 0x0u);
    /* 00570d75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570d78: mov dword ptr [edx + 0x188], 0 */ W32((u32)(r_edx+0x188u), 0x0u);
    /* 00570d82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570d85: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
    /* 00570d8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570d92: mov byte ptr [ecx + 0x190], 1 */ W8((u32)(r_ecx+0x190u), 0x1u);
    /* 00570d99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570d9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00570d9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570d9f: ret  */ FN_RET(0x00570d50); r_esp += 4; return;
}

void f_00570da0(void) /* RoadKillSlotTimer::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570da0);
    /* 00570da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00570da3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00570da5: push 0x6a5fef */ { u32 v = 0x6a5fefu; r_esp -= 4; W32(r_esp, v); }
    /* 00570daa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00570db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570db1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570db4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00570db9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00570dbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570dbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00570dbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00570dc5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00570dc8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570dcb: mov dword ptr [eax], 0x6ca65c */ W32((u32)(r_eax), 0x6ca65cu);
    /* 00570dd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00570dd8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570ddb: cmp dword ptr [ecx + 0x184], 0 */ {  u32 a = R32((u32)(r_ecx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570de2: je 0x570e23 */ if (fZ) goto L_00570e23;
L_00570de4:; BB(0x00570de4);
    /* 00570de4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570de7: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00570ded: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00570df0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00570df3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00570df6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570dfa: je 0x570e0f */ if (fZ) goto L_00570e0f;
L_00570dfc:; BB(0x00570dfc);
    /* 00570dfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570dfe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570e01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00570e03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570e06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570e08: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570e0au); call_ind(t); }
    /* 00570e0a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00570e0d: jmp 0x570e16 */ goto L_00570e16;
L_00570e0f:; BB(0x00570e0f);
    /* 00570e0f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00570e16:; BB(0x00570e16);
    /* 00570e16: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570e19: mov dword ptr [eax + 0x184], 0 */ W32((u32)(r_eax+0x184u), 0x0u);
L_00570e23:; BB(0x00570e23);
    /* 00570e23: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570e26: cmp dword ptr [ecx + 0x188], 0 */ {  u32 a = R32((u32)(r_ecx+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570e2d: je 0x570e6e */ if (fZ) goto L_00570e6e;
L_00570e2f:; BB(0x00570e2f);
    /* 00570e2f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570e32: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00570e38: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00570e3b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570e3e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00570e41: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570e45: je 0x570e5a */ if (fZ) goto L_00570e5a;
L_00570e47:; BB(0x00570e47);
    /* 00570e47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570e49: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570e4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00570e4e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570e51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570e53: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570e55u); call_ind(t); }
    /* 00570e55: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00570e58: jmp 0x570e61 */ goto L_00570e61;
L_00570e5a:; BB(0x00570e5a);
    /* 00570e5a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00570e61:; BB(0x00570e61);
    /* 00570e61: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570e64: mov dword ptr [eax + 0x188], 0 */ W32((u32)(r_eax+0x188u), 0x0u);
L_00570e6e:; BB(0x00570e6e);
    /* 00570e6e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570e71: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570e78: je 0x570eb9 */ if (fZ) goto L_00570eb9;
L_00570e7a:; BB(0x00570e7a);
    /* 00570e7a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570e7d: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00570e83: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00570e86: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00570e89: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00570e8c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570e90: je 0x570ea5 */ if (fZ) goto L_00570ea5;
L_00570e92:; BB(0x00570e92);
    /* 00570e92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570e94: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00570e97: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00570e99: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00570e9c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570e9e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570ea0u); call_ind(t); }
    /* 00570ea0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00570ea3: jmp 0x570eac */ goto L_00570eac;
L_00570ea5:; BB(0x00570ea5);
    /* 00570ea5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00570eac:; BB(0x00570eac);
    /* 00570eac: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570eaf: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
L_00570eb9:; BB(0x00570eb9);
    /* 00570eb9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00570ec0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570ec3: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x570ec8u); f_005f5c40();
    /* 00570ec8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570ecb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00570ed2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00570ed3: mov esp, ebp */ r_esp = r_ebp;
    /* 00570ed5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570ed6: ret  */ FN_RET(0x00570da0); r_esp += 4; return;
}

void f_00570ee0(void) /* RoadKillSlotTimer::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570ee0);
    /* 00570ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00570ee3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00570ee5: push 0x6a602b */ { u32 v = 0x6a602bu; r_esp -= 4; W32(r_esp, v); }
    /* 00570eea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00570ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570ef1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570ef4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00570ef9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00570efb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570efc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00570eff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00570f05: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00570f08: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570f0b: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x570f10u); f_005f5cc0();
    /* 00570f10: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570f13: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570f1a: jne 0x570f66 */ if (!fZ) goto L_00570f66;
L_00570f1c:; BB(0x00570f1c);
    /* 00570f1c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00570f21: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x570f26u); f_00686d82();
    /* 00570f26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570f29: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00570f2c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00570f33: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570f37: je 0x570f46 */ if (fZ) goto L_00570f46;
L_00570f39:; BB(0x00570f39);
    /* 00570f39: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00570f3c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x570f41u); f_005eaaf0();
    /* 00570f41: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00570f44: jmp 0x570f4d */ goto L_00570f4d;
L_00570f46:; BB(0x00570f46);
    /* 00570f46: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00570f4d:; BB(0x00570f4d);
    /* 00570f4d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570f50: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00570f53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00570f5a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570f5d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570f60: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
L_00570f66:; BB(0x00570f66);
    /* 00570f66: push 0x16048 */ { u32 v = 0x16048u; r_esp -= 4; W32(r_esp, v); }
    /* 00570f6b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570f6e: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00570f74: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x570f79u); f_005eaf00();
    /* 00570f79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570f7b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570f7e: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00570f84: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570f87: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00570f8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570f8f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00570f95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570f97u); call_ind(t); }
    /* 00570f97: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570f9a: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00570fa0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570fa3: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00570fa9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00570fab: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00570fae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570fb0u); call_ind(t); }
    /* 00570fb0: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00570fb2: push 0x1a2 */ { u32 v = 0x1a2u; r_esp -= 4; W32(r_esp, v); }
    /* 00570fb7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570fba: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00570fc0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570fc3: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00570fc9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00570fcb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00570fce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570fd0u); call_ind(t); }
    /* 00570fd0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00570fd2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570fd5: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00570fdb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570fde: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00570fe4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00570fe6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00570fe9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570febu); call_ind(t); }
    /* 00570feb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570fee: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00570ff4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570ff7: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00570ffd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00570fff: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00571002: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x571004u); call_ind(t); }
    /* 00571004: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571007: cmp dword ptr [ecx + 0x188], 0 */ {  u32 a = R32((u32)(r_ecx+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057100e: jne 0x57105a */ if (!fZ) goto L_0057105a;
L_00571010:; BB(0x00571010);
    /* 00571010: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00571015: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57101au); f_00686d82();
    /* 0057101a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057101d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00571020: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00571027: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057102b: je 0x57103a */ if (fZ) goto L_0057103a;
L_0057102d:; BB(0x0057102d);
    /* 0057102d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00571030: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x571035u); f_005eaaf0();
    /* 00571035: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00571038: jmp 0x571041 */ goto L_00571041;
L_0057103a:; BB(0x0057103a);
    /* 0057103a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00571041:; BB(0x00571041);
    /* 00571041: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00571044: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00571047: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057104e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571051: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00571054: mov dword ptr [eax + 0x188], ecx */ W32((u32)(r_eax+0x188u), r_ecx);
L_0057105a:; BB(0x0057105a);
    /* 0057105a: push 0x16048 */ { u32 v = 0x16048u; r_esp -= 4; W32(r_esp, v); }
    /* 0057105f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571062: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00571068: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57106du); f_005eaf00();
    /* 0057106d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057106f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571072: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00571078: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057107b: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00571081: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00571083: mov ecx, eax */ r_ecx = r_eax;
    /* 00571085: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057108b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57108du); call_ind(t); }
    /* 0057108d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571090: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00571096: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571099: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057109f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005710a1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005710a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5710a6u); call_ind(t); }
    /* 005710a6: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005710a8: push 0x1b2 */ { u32 v = 0x1b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005710ad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005710b0: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005710b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005710b9: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005710bf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005710c1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005710c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5710c6u); call_ind(t); }
    /* 005710c6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005710c8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005710cb: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005710d1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005710d4: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005710da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005710dc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005710df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5710e1u); call_ind(t); }
    /* 005710e1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005710e4: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005710ea: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005710ed: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005710f3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005710f5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005710f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5710fau); call_ind(t); }
    /* 005710fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005710fd: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571104: jne 0x571150 */ if (!fZ) goto L_00571150;
L_00571106:; BB(0x00571106);
    /* 00571106: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057110b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x571110u); f_00686d82();
    /* 00571110: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571113: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00571116: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057111d: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571121: je 0x571130 */ if (fZ) goto L_00571130;
L_00571123:; BB(0x00571123);
    /* 00571123: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00571126: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57112bu); f_005eaaf0();
    /* 0057112b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057112e: jmp 0x571137 */ goto L_00571137;
L_00571130:; BB(0x00571130);
    /* 00571130: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00571137:; BB(0x00571137);
    /* 00571137: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057113a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0057113d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00571144: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571147: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057114a: mov dword ptr [eax + 0x18c], ecx */ W32((u32)(r_eax+0x18cu), r_ecx);
L_00571150:; BB(0x00571150);
    /* 00571150: push 0x16048 */ { u32 v = 0x16048u; r_esp -= 4; W32(r_esp, v); }
    /* 00571155: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571158: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0057115e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x571163u); f_005eaf00();
    /* 00571163: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00571165: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571168: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0057116e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571171: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00571177: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00571179: mov ecx, eax */ r_ecx = r_eax;
    /* 0057117b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00571181: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x571183u); call_ind(t); }
    /* 00571183: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00571186: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057118c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057118f: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00571195: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00571197: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057119a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57119cu); call_ind(t); }
    /* 0057119c: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0057119e: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005711a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005711a6: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005711ac: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005711af: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 005711b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005711b7: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005711ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5711bcu); call_ind(t); }
    /* 005711bc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005711be: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005711c1: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005711c7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005711ca: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 005711d0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005711d2: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005711d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5711d7u); call_ind(t); }
    /* 005711d7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005711da: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005711e0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005711e3: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 005711e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005711eb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005711ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5711f0u); call_ind(t); }
    /* 005711f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005711f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005711fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005711fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005711fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005711fe: ret  */ FN_RET(0x00570ee0); r_esp += 4; return;
}

