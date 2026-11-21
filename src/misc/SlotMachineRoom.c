#include "protos.h"

void f_00532b90(void) /* SlotMachineRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532b90);
    /* 00532b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00532b93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00532b95: push 0x6a4838 */ { u32 v = 0x6a4838u; r_esp -= 4; W32(r_esp, v); }
    /* 00532b9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00532ba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532ba1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532ba2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00532ba7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532baa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00532bad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00532bb3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00532bb6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532bb9: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x532bbeu); f_005d7b60();
    /* 00532bbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00532bc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532bc8: mov dword ptr [eax], 0x6c4044 */ W32((u32)(r_eax), 0x6c4044u);
    /* 00532bce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532bd1: mov dword ptr [0x793388], ecx */ W32((u32)(0x793388u), r_ecx);
    /* 00532bd7: mov dword ptr [0x79338c], 0 */ W32((u32)(0x79338cu), 0x0u);
    /* 00532be1: mov dword ptr [0x793390], 0 */ W32((u32)(0x793390u), 0x0u);
    /* 00532beb: mov dword ptr [0x793394], 0 */ W32((u32)(0x793394u), 0x0u);
    /* 00532bf5: push 0x30ef59 */ { u32 v = 0x30ef59u; r_esp -= 4; W32(r_esp, v); }
    /* 00532bfa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532bfd: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x532c02u); f_005f1ad0();
    /* 00532c02: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00532c09: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532c0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00532c0f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00532c16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00532c17: mov esp, ebp */ r_esp = r_ebp;
    /* 00532c19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532c1a: ret  */ FN_RET(0x00532b90); r_esp += 4; return;
}

void f_00532c20(void) /* SlotMachineRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532c20);
    /* 00532c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00532c23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00532c25: push 0x6a485b */ { u32 v = 0x6a485bu; r_esp -= 4; W32(r_esp, v); }
    /* 00532c2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00532c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532c31: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532c34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00532c39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532c3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00532c3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00532c45: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00532c48: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00532c4b: mov dword ptr [eax], 0x6c4044 */ W32((u32)(r_eax), 0x6c4044u);
    /* 00532c51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00532c58: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00532c5e: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x532c63u); f_005d13e0();
    /* 00532c63: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00532c69: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x532c6eu); f_005de170();
    /* 00532c6e: mov dword ptr [0x793388], 0 */ W32((u32)(0x793388u), 0x0u);
    /* 00532c78: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00532c7e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00532c81: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00532c84: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00532c87: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532c8b: je 0x532ca0 */ if (fZ) goto L_00532ca0;
L_00532c8d:; BB(0x00532c8d);
    /* 00532c8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00532c8f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532c92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00532c94: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532c97: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00532c99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x532c9bu); call_ind(t); }
    /* 00532c9b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00532c9e: jmp 0x532ca7 */ goto L_00532ca7;
L_00532ca0:; BB(0x00532ca0);
    /* 00532ca0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00532ca7:; BB(0x00532ca7);
    /* 00532ca7: mov dword ptr [0x79338c], 0 */ W32((u32)(0x79338cu), 0x0u);
    /* 00532cb1: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00532cb7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00532cba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00532cbd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00532cc0: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532cc4: je 0x532cd9 */ if (fZ) goto L_00532cd9;
L_00532cc6:; BB(0x00532cc6);
    /* 00532cc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00532cc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532ccb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00532ccd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532cd0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00532cd2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x532cd4u); call_ind(t); }
    /* 00532cd4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00532cd7: jmp 0x532ce0 */ goto L_00532ce0;
L_00532cd9:; BB(0x00532cd9);
    /* 00532cd9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00532ce0:; BB(0x00532ce0);
    /* 00532ce0: mov dword ptr [0x793390], 0 */ W32((u32)(0x793390u), 0x0u);
    /* 00532cea: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00532cf0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00532cf3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532cf6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00532cf9: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532cfd: je 0x532d25 */ if (fZ) goto L_00532d25;
L_00532cff:; BB(0x00532cff);
    /* 00532cff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532d02: call 0x538580 */ r_esp -= 4; W32(r_esp, 0x532d07u); f_00538580();
    /* 00532d07: mov eax, 1 */ r_eax = 0x1u;
    /* 00532d0c: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00532d0f: je 0x532d1d */ if (fZ) goto L_00532d1d;
L_00532d11:; BB(0x00532d11);
    /* 00532d11: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532d14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532d15: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x532d1au); f_00686cae();
    /* 00532d1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00532d1d:; BB(0x00532d1d);
    /* 00532d1d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532d20: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00532d23: jmp 0x532d2c */ goto L_00532d2c;
L_00532d25:; BB(0x00532d25);
    /* 00532d25: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00532d2c:; BB(0x00532d2c);
    /* 00532d2c: mov dword ptr [0x793394], 0 */ W32((u32)(0x793394u), 0x0u);
    /* 00532d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00532d3d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00532d40: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x532d45u); f_005d7bd0();
    /* 00532d45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00532d48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00532d4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00532d50: mov esp, ebp */ r_esp = r_ebp;
    /* 00532d52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532d53: ret  */ FN_RET(0x00532c20); r_esp += 4; return;
}

void f_00532d60(void) /* SlotMachineRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532d60);
    /* 00532d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00532d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00532d65: push 0x6a4897 */ { u32 v = 0x6a4897u; r_esp -= 4; W32(r_esp, v); }
    /* 00532d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00532d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532d71: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532d74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00532d79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532d7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00532d7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00532d85: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00532d88: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00532d8b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x532d90u); f_005d8230();
    /* 00532d90: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00532d93: call 0x532ef0 */ r_esp -= 4; W32(r_esp, 0x532d98u); f_00532ef0();
    /* 00532d98: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00532d9d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x532da2u); f_00686d82();
    /* 00532da2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532da5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00532da8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00532daf: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532db3: je 0x532dc2 */ if (fZ) goto L_00532dc2;
L_00532db5:; BB(0x00532db5);
    /* 00532db5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00532db8: call 0x535900 */ r_esp -= 4; W32(r_esp, 0x532dbdu); f_00535900();
    /* 00532dbd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00532dc0: jmp 0x532dc9 */ goto L_00532dc9;
L_00532dc2:; BB(0x00532dc2);
    /* 00532dc2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00532dc9:; BB(0x00532dc9);
    /* 00532dc9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532dcc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00532dcf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00532dd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532dd9: mov dword ptr [0x79338c], ecx */ W32((u32)(0x79338cu), r_ecx);
    /* 00532ddf: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00532de5: call 0x535960 */ r_esp -= 4; W32(r_esp, 0x532deau); f_00535960();
    /* 00532dea: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00532def: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x532df4u); f_00686d82();
    /* 00532df4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532df7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00532dfa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00532e01: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532e05: je 0x532e14 */ if (fZ) goto L_00532e14;
L_00532e07:; BB(0x00532e07);
    /* 00532e07: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00532e0a: call 0x529c00 */ r_esp -= 4; W32(r_esp, 0x532e0fu); f_00529c00();
    /* 00532e0f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00532e12: jmp 0x532e1b */ goto L_00532e1b;
L_00532e14:; BB(0x00532e14);
    /* 00532e14: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00532e1b:; BB(0x00532e1b);
    /* 00532e1b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00532e1e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00532e21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00532e28: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532e2b: mov dword ptr [0x793390], eax */ W32((u32)(0x793390u), r_eax);
    /* 00532e30: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00532e36: call 0x52afe0 */ r_esp -= 4; W32(r_esp, 0x532e3bu); f_0052afe0();
    /* 00532e3b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x532e42u); f_00686d82();
    /* 00532e42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532e45: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00532e48: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00532e4f: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532e53: je 0x532e70 */ if (fZ) goto L_00532e70;
L_00532e55:; BB(0x00532e55);
    /* 00532e55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00532e57: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532e5a: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x532e5fu); f_005fc0d0();
    /* 00532e5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532e62: mov dword ptr [ecx], 0x6c4344 */ W32((u32)(r_ecx), 0x6c4344u);
    /* 00532e68: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532e6b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00532e6e: jmp 0x532e77 */ goto L_00532e77;
L_00532e70:; BB(0x00532e70);
    /* 00532e70: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00532e77:; BB(0x00532e77);
    /* 00532e77: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00532e7a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00532e7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00532e84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532e87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532e88: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00532e8b: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x532e90u); f_005f1b70();
    /* 00532e90: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00532e96: mov al, byte ptr [edx + 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x25u))) & 0xffu);
    /* 00532e99: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 00532e9c: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 00532ea0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532ea2: je 0x532ebb */ if (fZ) goto L_00532ebb;
L_00532ea4:; BB(0x00532ea4);
    /* 00532ea4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00532ea6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00532ea9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00532eac: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00532eaf: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00532eb2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00532eb4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00532eb7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x532eb9u); call_ind(t); }
    /* 00532eb9: jmp 0x532ece */ goto L_00532ece;
L_00532ebb:; BB(0x00532ebb);
    /* 00532ebb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00532ebe: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00532ec1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00532ec4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00532ec7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00532ec9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00532ecc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x532eceu); call_ind(t); }
L_00532ece:; BB(0x00532ece);
    /* 00532ece: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00532ed4: call 0x52c7e0 */ r_esp -= 4; W32(r_esp, 0x532ed9u); f_0052c7e0();
    /* 00532ed9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00532edc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00532ee3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00532ee4: mov esp, ebp */ r_esp = r_ebp;
    /* 00532ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532ee7: ret  */ FN_RET(0x00532d60); r_esp += 4; return;
}

void f_00533d10(void) /* SlotMachineRoom::vfunc155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533d10);
    /* 00533d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00533d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00533d17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00533d1a: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00533d20: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00533d23: mov dword ptr [ecx], 0x3b9aca00 */ W32((u32)(r_ecx), 0x3b9aca00u);
    /* 00533d29: mov esp, ebp */ r_esp = r_ebp;
    /* 00533d2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533d2c: ret 8 */ FN_RET(0x00533d10); r_esp += 12; return;
}

void f_00533d30(void) /* SlotMachineRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533d30);
    /* 00533d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00533d33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00533d36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00533d39: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00533d3c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00533d3f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533d46: je 0x533d63 */ if (fZ) goto L_00533d63;
L_00533d48:; BB(0x00533d48);
    /* 00533d48: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533d4f: je 0x533dcf */ if (fZ) goto L_00533dcf;
L_00533d51:; BB(0x00533d51);
    /* 00533d51: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533d58: je 0x533dfb */ if (fZ) goto L_00533dfb;
L_00533d5e:; BB(0x00533d5e);
    /* 00533d5e: jmp 0x533e1d */ goto L_00533e1d;
L_00533d63:; BB(0x00533d63);
    /* 00533d63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d65: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533d6d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533d72u); f_005fe640();
    /* 00533d72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d74: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533d7c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533d81u); f_005fe640();
    /* 00533d81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d83: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d88: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533d8b: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533d90u); f_005fe640();
    /* 00533d90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d92: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533d9a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533d9fu); f_005fe640();
    /* 00533d9f: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 00533da6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533da8: jne 0x533dbf */ if (!fZ) goto L_00533dbf;
L_00533daa:; BB(0x00533daa);
    /* 00533daa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533dac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00533dae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00533db0: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00533db5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533db8: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x533dbdu); f_005fe240();
    /* 00533dbd: jmp 0x533dcb */ goto L_00533dcb;
L_00533dbf:; BB(0x00533dbf);
    /* 00533dbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533dc1: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00533dc3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533dc6: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533dcbu); f_005fe640();
L_00533dcb:; BB(0x00533dcb);
    /* 00533dcb: jmp 0x533e1d */ goto L_00533e1d;
L_00533dcf:; BB(0x00533dcf);
    /* 00533dcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533dd1: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00533dd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533dd9: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533ddeu); f_005fe640();
    /* 00533dde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533de0: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00533de5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533de8: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533dedu); f_005fe640();
    /* 00533ded: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00533def: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00533df1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533df4: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533df9u); f_005fe640();
    /* 00533df9: jmp 0x533e1d */ goto L_00533e1d;
L_00533dfb:; BB(0x00533dfb);
    /* 00533dfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533dfd: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00533e02: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533e05: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x533e0au); f_005fe640();
    /* 00533e0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533e0c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00533e0e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00533e10: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00533e15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533e18: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x533e1du); f_005fe240();
L_00533e1d:; BB(0x00533e1d);
    /* 00533e1d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00533e20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533e21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00533e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533e25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00533e28: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x533e2du); f_005d8670();
    /* 00533e2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00533e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533e30: ret 8 */ FN_RET(0x00533d30); r_esp += 12; return;
}

void f_00533e40(void) /* SlotMachineRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533e40);
    /* 00533e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00533e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00533e47: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 00533e4c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00533e52: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x533e57u); f_005df2e0();
    /* 00533e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533e58: push 0x30ef59 */ { u32 v = 0x30ef59u; r_esp -= 4; W32(r_esp, v); }
    /* 00533e5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00533e60: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x533e65u); f_005f1e60();
    /* 00533e65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00533e68: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x533e6du); f_0064e430();
    /* 00533e6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00533e6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533e70: ret  */ FN_RET(0x00533e40); r_esp += 4; return;
}

void f_00533e80(void) /* SlotMachineRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533e80);
    /* 00533e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00533e83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00533e86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00533e89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00533e8c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00533e8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00533e92: sub ecx, 0x30ef5a */ {  u32 a = r_ecx; u32 b = 0x30ef5au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00533e98: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00533e9b: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00533e9f: ja 0x533ef6 */ if ((!fC&&!fZ)) goto L_00533ef6;
L_00533ea1:; BB(0x00533ea1);
    /* 00533ea1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00533ea4: jmp dword ptr [edx*4 + 0x533f0c] */ { u32 t = R32((u32)(r_edx*4+0x533f0cu)); switch (t) { case 0x533ee7u: goto L_00533ee7; case 0x533ed8u: goto L_00533ed8; case 0x533ebau: goto L_00533eba; case 0x533eabu: goto L_00533eab; case 0x533ec9u: goto L_00533ec9; default: UNSUP(0x00533ea4, "jump table entry is not a known target"); } }
L_00533eab:; BB(0x00533eab);
    /* 00533eab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533ead: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533eb3: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x533eb8u); f_00535ae0();
    /* 00533eb8: jmp 0x533f06 */ goto L_00533f06;
L_00533eba:; BB(0x00533eba);
    /* 00533eba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00533ebc: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533ec2: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x533ec7u); f_00535ae0();
    /* 00533ec7: jmp 0x533f06 */ goto L_00533f06;
L_00533ec9:; BB(0x00533ec9);
    /* 00533ec9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00533ecb: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533ed1: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x533ed6u); f_00535ae0();
    /* 00533ed6: jmp 0x533f06 */ goto L_00533f06;
L_00533ed8:; BB(0x00533ed8);
    /* 00533ed8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00533eda: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533ee0: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x533ee5u); f_00535ae0();
    /* 00533ee5: jmp 0x533f06 */ goto L_00533f06;
L_00533ee7:; BB(0x00533ee7);
    /* 00533ee7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00533ee9: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533eef: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x533ef4u); f_00535ae0();
    /* 00533ef4: jmp 0x533f06 */ goto L_00533f06;
L_00533ef6:; BB(0x00533ef6);
    /* 00533ef6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00533ef9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533efa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00533efd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533efe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00533f01: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x533f06u); f_005dc7d0();
L_00533f06:; BB(0x00533f06);
    /* 00533f06: mov esp, ebp */ r_esp = r_ebp;
    /* 00533f08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533f09: ret 8 */ FN_RET(0x00533e80); r_esp += 12; return;
}

void f_00533f20(void) /* SlotMachineRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533f20);
    /* 00533f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00533f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00533f27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00533f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533f2b: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533f31: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x533f36u); f_00535ae0();
    /* 00533f36: mov esp, ebp */ r_esp = r_ebp;
    /* 00533f38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533f39: ret 4 */ FN_RET(0x00533f20); r_esp += 8; return;
}

void f_00533f40(void) /* SlotMachineRoom::vfunc175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533f40);
    /* 00533f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00533f43: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00533f46: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00533f49: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 00533f4e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00533f51: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00533f54: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00533f57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533f58: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00533f5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533f5c: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533f62: call 0x5d0db0 */ r_esp -= 4; W32(r_esp, 0x533f67u); f_005d0db0();
    /* 00533f67: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533f6d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00533f70: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00533f73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00533f76: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00533f79: jge 0x533f8e */ if ((fS==fO)) goto L_00533f8e;
L_00533f7b:; BB(0x00533f7b);
    /* 00533f7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00533f7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533f7f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00533f82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533f83: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00533f89: call 0x52e540 */ r_esp -= 4; W32(r_esp, 0x533f8eu); f_0052e540();
L_00533f8e:; BB(0x00533f8e);
    /* 00533f8e: mov esp, ebp */ r_esp = r_ebp;
    /* 00533f90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533f91: ret 4 */ FN_RET(0x00533f40); r_esp += 8; return;
}

void f_00533fa0(void) /* SlotMachineRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533fa0);
    /* 00533fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00533fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00533fa7: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00533fad: call 0x52cd40 */ r_esp -= 4; W32(r_esp, 0x533fb2u); f_0052cd40();
    /* 00533fb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00533fb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533fb5: ret  */ FN_RET(0x00533fa0); r_esp += 4; return;
}

void f_00533fc0(void) /* SlotMachineRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00533fc0);
    /* 00533fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00533fc3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00533fc6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00533fc9: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 00533fce: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00533fd1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00533fd4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00533fd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533fd8: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00533fdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533fdc: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533fe2: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x533fe7u); f_005d0c30();
    /* 00533fe7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00533fea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533feb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00533fed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533fee: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00533ff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533ff2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00533ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00533ff6: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00533ffc: call 0x5d0cd0 */ r_esp -= 4; W32(r_esp, 0x534001u); f_005d0cd0();
    /* 00534001: mov ecx, eax */ r_ecx = r_eax;
    /* 00534003: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x534008u); f_0064c630();
    /* 00534008: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053400b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053400c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053400f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534010: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00534013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534014: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x534019u); f_005dcb00();
    /* 00534019: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053401c: mov ecx, eax */ r_ecx = r_eax;
    /* 0053401e: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x534023u); f_005d5fb0();
    /* 00534023: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00534026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00534027: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053402a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053402b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053402e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053402f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x534034u); f_005dcb00();
    /* 00534034: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534037: mov ecx, eax */ r_ecx = r_eax;
    /* 00534039: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x53403eu); f_005d5cf0();
    /* 0053403e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534040: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00534046: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x53404bu); f_005d0a20();
    /* 0053404b: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 00534051: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00534054: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00534057: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0053405e: mov esp, ebp */ r_esp = r_ebp;
    /* 00534060: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534061: ret 4 */ FN_RET(0x00533fc0); r_esp += 8; return;
}

void f_00534070(void) /* SlotMachineRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534070);
    /* 00534070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534071: mov ebp, esp */ r_ebp = r_esp;
    /* 00534073: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00534076: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00534077: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00534078: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053407b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053407e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053407f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x534084u); f_005dcb00();
    /* 00534084: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534087: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0053408d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053408e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00534094: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00534095: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00534098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534099: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0053409f: call 0x535940 */ r_esp -= 4; W32(r_esp, 0x5340a4u); f_00535940();
    /* 005340a4: mov ecx, eax */ r_ecx = r_eax;
    /* 005340a6: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5340abu); f_0064c5c0();
    /* 005340ab: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005340ad: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005340b0: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 005340b6: call 0x535940 */ r_esp -= 4; W32(r_esp, 0x5340bbu); f_00535940();
    /* 005340bb: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 005340bd: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 005340c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005340c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005340c4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5340c9u); f_005dcb00();
    /* 005340c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005340cc: mov ecx, eax */ r_ecx = r_eax;
    /* 005340ce: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5340d3u); f_0063b0a0();
    /* 005340d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005340d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005340d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005340d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005340d8: ret 4 */ FN_RET(0x00534070); r_esp += 8; return;
}

void f_005340e0(void) /* SlotMachineRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005340e0);
    /* 005340e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005340e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005340e3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005340e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005340e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005340eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005340ed: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5340f2u); f_0064c8a0();
    /* 005340f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005340f5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005340f8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005340fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005340fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00534101: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00534103: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00534106: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00534109: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0053410c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053410d: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00534113: call 0x5d0cd0 */ r_esp -= 4; W32(r_esp, 0x534118u); f_005d0cd0();
    /* 00534118: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053411b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053411c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053411e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053411f: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00534122: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534123: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00534126: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x53412bu); f_0064c5c0();
    /* 0053412b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053412d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00534130: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00534133: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00534135: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00534138: mov esp, ebp */ r_esp = r_ebp;
    /* 0053413a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053413b: ret 8 */ FN_RET(0x005340e0); r_esp += 12; return;
}

void f_00534140(void) /* SlotMachineRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534140);
    /* 00534140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534141: mov ebp, esp */ r_ebp = r_esp;
    /* 00534143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534147: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534149: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53414eu); f_005dcb00();
    /* 0053414e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534151: mov esp, ebp */ r_esp = r_ebp;
    /* 00534153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534154: ret  */ FN_RET(0x00534140); r_esp += 4; return;
}

