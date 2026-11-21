#include "protos.h"

void f_0066b970(void) /* MainScreenRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b970);
    /* 0066b970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b971: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b973: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b975: push 0x6ace1b */ { u32 v = 0x6ace1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b97a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066b980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b981: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066b984: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066b989: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b98b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b98c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066b98f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066b995: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0066b998: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b99b: mov dword ptr [eax], 0x6e079c */ W32((u32)(r_eax), 0x6e079cu);
    /* 0066b9a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066b9a8: mov dword ptr [0x16306c0], 0 */ W32((u32)(0x16306c0u), 0x0u);
    /* 0066b9b2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b9b5: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b9b9: je 0x66b9f4 */ if (fZ) goto L_0066b9f4;
L_0066b9bb:; BB(0x0066b9bb);
    /* 0066b9bb: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b9be: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0066b9c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066b9c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066b9c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066b9ca: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b9ce: je 0x66b9e3 */ if (fZ) goto L_0066b9e3;
L_0066b9d0:; BB(0x0066b9d0);
    /* 0066b9d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b9d2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b9d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066b9d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b9da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066b9dc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66b9deu); call_ind(t); }
    /* 0066b9de: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0066b9e1: jmp 0x66b9ea */ goto L_0066b9ea;
L_0066b9e3:; BB(0x0066b9e3);
    /* 0066b9e3: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0066b9ea:; BB(0x0066b9ea);
    /* 0066b9ea: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b9ed: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_0066b9f4:; BB(0x0066b9f4);
    /* 0066b9f4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b9f7: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0066b9fa: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0066b9fd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066ba00: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0066ba03: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba07: je 0x66ba1c */ if (fZ) goto L_0066ba1c;
L_0066ba09:; BB(0x0066ba09);
    /* 0066ba09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ba0b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066ba0e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ba10: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066ba13: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ba15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ba17u); call_ind(t); }
    /* 0066ba17: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0066ba1a: jmp 0x66ba23 */ goto L_0066ba23;
L_0066ba1c:; BB(0x0066ba1c);
    /* 0066ba1c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0066ba23:; BB(0x0066ba23);
    /* 0066ba23: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066ba26: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0066ba29: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0066ba2c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066ba2f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066ba32: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba36: je 0x66ba4b */ if (fZ) goto L_0066ba4b;
L_0066ba38:; BB(0x0066ba38);
    /* 0066ba38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ba3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ba3d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ba3f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ba42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ba44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ba46u); call_ind(t); }
    /* 0066ba46: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0066ba49: jmp 0x66ba52 */ goto L_0066ba52;
L_0066ba4b:; BB(0x0066ba4b);
    /* 0066ba4b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0066ba52:; BB(0x0066ba52);
    /* 0066ba52: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066ba55: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0066ba58: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0066ba5b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066ba5e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066ba61: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba65: je 0x66ba7a */ if (fZ) goto L_0066ba7a;
L_0066ba67:; BB(0x0066ba67);
    /* 0066ba67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ba69: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066ba6c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ba6e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066ba71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ba73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ba75u); call_ind(t); }
    /* 0066ba75: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0066ba78: jmp 0x66ba81 */ goto L_0066ba81;
L_0066ba7a:; BB(0x0066ba7a);
    /* 0066ba7a: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0066ba81:; BB(0x0066ba81);
    /* 0066ba81: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066ba84: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0066ba87: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0066ba8a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0066ba8d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066ba90: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba94: je 0x66baa9 */ if (fZ) goto L_0066baa9;
L_0066ba96:; BB(0x0066ba96);
    /* 0066ba96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ba98: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066ba9b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ba9d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066baa0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066baa2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66baa4u); call_ind(t); }
    /* 0066baa4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0066baa7: jmp 0x66bab0 */ goto L_0066bab0;
L_0066baa9:; BB(0x0066baa9);
    /* 0066baa9: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0066bab0:; BB(0x0066bab0);
    /* 0066bab0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066bab3: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066bab6: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0066bab9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066babc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066babd: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66bac2u); f_00686cae();
    /* 0066bac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bac5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066bac8: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bacc: je 0x66bb1a */ if (fZ) goto L_0066bb1a;
L_0066bace:; BB(0x0066bace);
    /* 0066bace: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066bad1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066bad4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066bad7: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0066bada: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066badc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066badf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bae1u); call_ind(t); }
    /* 0066bae1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066bae4: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0066bae7: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0066baea: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0066baed: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0066baf0: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066baf4: je 0x66bb09 */ if (fZ) goto L_0066bb09;
L_0066baf6:; BB(0x0066baf6);
    /* 0066baf6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066baf8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066bafb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066bafd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066bb00: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bb02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bb04u); call_ind(t); }
    /* 0066bb04: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0066bb07: jmp 0x66bb10 */ goto L_0066bb10;
L_0066bb09:; BB(0x0066bb09);
    /* 0066bb09: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0066bb10:; BB(0x0066bb10);
    /* 0066bb10: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066bb13: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
L_0066bb1a:; BB(0x0066bb1a);
    /* 0066bb1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066bb21: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066bb24: call 0x64cc80 */ r_esp -= 4; W32(r_esp, 0x66bb29u); f_0064cc80();
    /* 0066bb29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066bb2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066bb33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066bb34: mov esp, ebp */ r_esp = r_ebp;
    /* 0066bb36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066bb37: ret  */ FN_RET(0x0066b970); r_esp += 4; return;
}

void f_0066bb40(void) /* MainScreenRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066bb40);
    /* 0066bb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066bb41: mov ebp, esp */ r_ebp = r_esp;
    /* 0066bb43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bb45: push 0x6ace8e */ { u32 v = 0x6ace8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bb4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066bb50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bb51: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066bb57: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066bb5c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066bb5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bb5f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066bb62: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066bb68: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0066bb6e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bb74: call 0x64ce60 */ r_esp -= 4; W32(r_esp, 0x66bb79u); f_0064ce60();
    /* 0066bb79: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066bb7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066bb80: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bb86: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066bb8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bb8eu); call_ind(t); }
    /* 0066bb8e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066bb91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb93: je 0x66c481 */ if (fZ) goto L_0066c481;
L_0066bb99:; BB(0x0066bb99);
    /* 0066bb99: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bb9f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bba1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bba7: mov edx, dword ptr [eax + 0x280] */ r_edx = R32((u32)(r_eax+0x280u));
    /* 0066bbad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66bbafu); call_ind(t); }
    /* 0066bbaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bbb1: je 0x66bc13 */ if (fZ) goto L_0066bc13;
L_0066bbb3:; BB(0x0066bbb3);
    /* 0066bbb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbb5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbbc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbc2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066bbc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066bbc9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bbcf: mov eax, dword ptr [edx + 0x280] */ r_eax = R32((u32)(r_edx+0x280u));
    /* 0066bbd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bbd7u); call_ind(t); }
    /* 0066bbd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbdc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bbe2: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066bbe5: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x66bbeau); f_005f9ce0();
    /* 0066bbea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbec: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bbf2: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0066bbf5: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66bbfau); f_005fb2b0();
    /* 0066bbfa: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0066bc00: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0066bc06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066bc08: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0066bc0e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066bc11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bc13u); call_ind(t); }
L_0066bc13:; BB(0x0066bc13);
    /* 0066bc13: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0066bc1a: jmp 0x66bc25 */ goto L_0066bc25;
L_0066bc1c:; BB(0x0066bc1c);
    /* 0066bc1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bc1f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066bc22: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0066bc25:; BB(0x0066bc25);
    /* 0066bc25: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bc2b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bc2d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bc33: mov edx, dword ptr [eax + 0x25c] */ r_edx = R32((u32)(r_eax+0x25cu));
    /* 0066bc39: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66bc3bu); call_ind(t); }
    /* 0066bc3b: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066bc3e: jge 0x66bf55 */ if ((fS==fO)) goto L_0066bf55;
L_0066bc44:; BB(0x0066bc44);
    /* 0066bc44: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bc47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc48: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0066bc4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc4c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bc52: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bc54: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bc5a: mov edx, dword ptr [eax + 0x278] */ r_edx = R32((u32)(r_eax+0x278u));
    /* 0066bc60: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66bc62u); call_ind(t); }
    /* 0066bc62: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066bc64: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066bc67: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066bc6a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0066bc6d: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc72: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66bc77u); f_00686d82();
    /* 0066bc77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bc7a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066bc7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066bc84: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bc88: je 0x66bceb */ if (fZ) goto L_0066bceb;
L_0066bc8a:; BB(0x0066bc8a);
    /* 0066bc8a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bc8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc8e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bc94: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066bc96: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bc9c: mov eax, dword ptr [edx + 0x270] */ r_eax = R32((u32)(r_edx+0x270u));
    /* 0066bca2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bca4u); call_ind(t); }
    /* 0066bca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bca5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bca8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bca9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bcaf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bcb1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bcb7: mov edx, dword ptr [eax + 0x26c] */ r_edx = R32((u32)(r_eax+0x26cu));
    /* 0066bcbd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66bcbfu); call_ind(t); }
    /* 0066bcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bcc0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bcc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bcc4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bcca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066bccc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bcd2: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 0066bcd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bcdau); call_ind(t); }
    /* 0066bcda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bcdb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066bcde: call 0x66cb10 */ r_esp -= 4; W32(r_esp, 0x66bce3u); f_0066cb10();
    /* 0066bce3: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0066bce9: jmp 0x66bcf5 */ goto L_0066bcf5;
L_0066bceb:; BB(0x0066bceb);
    /* 0066bceb: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0066bcf5:; BB(0x0066bcf5);
    /* 0066bcf5: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0066bcfb: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0066bcfe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066bd05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd0d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd0f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd14: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd16: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066bd19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066bd1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd1e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bd21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd22: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bd28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bd2a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bd30: mov edx, dword ptr [eax + 0x260] */ r_edx = R32((u32)(r_eax+0x260u));
    /* 0066bd36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66bd38u); call_ind(t); }
    /* 0066bd38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd39: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bd3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd3d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bd43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066bd45: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bd4b: mov eax, dword ptr [edx + 0x268] */ r_eax = R32((u32)(r_edx+0x268u));
    /* 0066bd51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bd53u); call_ind(t); }
    /* 0066bd53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd54: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066bd57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd58: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bd5e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0066bd61: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x66bd66u); f_005f9de0();
    /* 0066bd66: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bd6c: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066bd6f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bd72: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0066bd75: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bd78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd79: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066bd7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066bd80: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bd86: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 0066bd8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bd8eu); call_ind(t); }
    /* 0066bd8e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066bd91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd92: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bd95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bd96: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bd9c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bd9e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bda4: mov edx, dword ptr [eax + 0x264] */ r_edx = R32((u32)(r_eax+0x264u));
    /* 0066bdaa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66bdacu); call_ind(t); }
    /* 0066bdac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bdb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdb1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bdb7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066bdb9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bdbf: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 0066bdc5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bdc7u); call_ind(t); }
    /* 0066bdc7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066bdca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdcb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bdce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdcf: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066bdd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066bdd7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bddd: mov edx, dword ptr [eax + 0x264] */ r_edx = R32((u32)(r_eax+0x264u));
    /* 0066bde3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66bde5u); call_ind(t); }
    /* 0066bde5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bde6: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bdec: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066bdef: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bdf2: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0066bdf5: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x66bdfau); f_006023d0();
    /* 0066bdfa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bdfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdfe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066be04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066be06: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066be0c: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 0066be12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66be14u); call_ind(t); }
    /* 0066be14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066be15: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066be1b: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066be1e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066be21: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0066be24: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066be2a: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066be2d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066be30: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0066be33: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066be35: mov ecx, eax */ r_ecx = r_eax;
    /* 0066be37: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066be3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66be3fu); call_ind(t); }
    /* 0066be3f: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0066be44: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066be4a: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066be4d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066be50: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0066be53: call 0x5eb720 */ r_esp -= 4; W32(r_esp, 0x66be58u); f_005eb720();
    /* 0066be58: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066be5e: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066be61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066be64: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0066be67: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066be6d: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066be70: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066be73: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0066be76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066be78: mov ecx, eax */ r_ecx = r_eax;
    /* 0066be7a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066be7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66be7fu); call_ind(t); }
    /* 0066be7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066be82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066be83: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066be89: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066be8b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066be91: mov edx, dword ptr [eax + 0x268] */ r_edx = R32((u32)(r_eax+0x268u));
    /* 0066be97: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66be99u); call_ind(t); }
    /* 0066be99: cmp eax, 0x7d0 */ {  u32 a = r_eax; u32 b = 0x7d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066be9e: je 0x66bec1 */ if (fZ) goto L_0066bec1;
L_0066bea0:; BB(0x0066bea0);
    /* 0066bea0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bea4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066beaa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066beac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066beb2: mov eax, dword ptr [edx + 0x268] */ r_eax = R32((u32)(r_edx+0x268u));
    /* 0066beb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bebau); call_ind(t); }
    /* 0066beba: cmp eax, 0x7d1 */ {  u32 a = r_eax; u32 b = 0x7d1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bebf: jne 0x66bed7 */ if (!fZ) goto L_0066bed7;
L_0066bec1:; BB(0x0066bec1);
    /* 0066bec1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bec3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bec9: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066becc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066becf: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0066bed2: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x66bed7u); f_005eb700();
L_0066bed7:; BB(0x0066bed7);
    /* 0066bed7: cmp dword ptr [0x795f90], 3 */ {  u32 a = R32((u32)(0x795f90u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bede: jne 0x66bf50 */ if (!fZ) goto L_0066bf50;
L_0066bee0:; BB(0x0066bee0);
    /* 0066bee0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bee4: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066beea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066beec: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bef2: mov edx, dword ptr [eax + 0x268] */ r_edx = R32((u32)(r_eax+0x268u));
    /* 0066bef8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66befau); call_ind(t); }
    /* 0066befa: cmp eax, 0x7d0 */ {  u32 a = r_eax; u32 b = 0x7d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066beff: jne 0x66bf50 */ if (!fZ) goto L_0066bf50;
L_0066bf01:; BB(0x0066bf01);
    /* 0066bf01: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bf07: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066bf0a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bf0d: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0066bf10: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bf16: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066bf19: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bf1c: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0066bf1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066bf21: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0066bf27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bf29u); call_ind(t); }
    /* 0066bf29: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bf2f: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066bf32: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bf35: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0066bf38: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bf3e: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066bf41: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066bf44: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0066bf47: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066bf49: mov ecx, eax */ r_ecx = r_eax;
    /* 0066bf4b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066bf4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bf50u); call_ind(t); }
L_0066bf50:; BB(0x0066bf50);
    /* 0066bf50: jmp 0x66bc1c */ goto L_0066bc1c;
L_0066bf55:; BB(0x0066bf55);
    /* 0066bf55: cmp dword ptr [0x795f90], 3 */ {  u32 a = R32((u32)(0x795f90u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf5c: je 0x66c0b7 */ if (fZ) goto L_0066c0b7;
L_0066bf62:; BB(0x0066bf62);
    /* 0066bf62: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bf68: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf6c: jne 0x66bfc1 */ if (!fZ) goto L_0066bfc1;
L_0066bf6e:; BB(0x0066bf6e);
    /* 0066bf6e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bf73: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66bf78u); f_00686d82();
    /* 0066bf78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bf7b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0066bf7e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066bf85: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf89: je 0x66bf9b */ if (fZ) goto L_0066bf9b;
L_0066bf8b:; BB(0x0066bf8b);
    /* 0066bf8b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066bf8e: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x66bf93u); f_005f5bf0();
    /* 0066bf93: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0066bf99: jmp 0x66bfa5 */ goto L_0066bfa5;
L_0066bf9b:; BB(0x0066bf9b);
    /* 0066bf9b: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0066bfa5:; BB(0x0066bfa5);
    /* 0066bfa5: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0066bfab: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0066bfae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066bfb5: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066bfbb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066bfbe: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
L_0066bfc1:; BB(0x0066bfc1);
    /* 0066bfc1: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0066bfc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bfc5: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066bfca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066bfcc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bfd2: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0066bfd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bfdau); call_ind(t); }
    /* 0066bfda: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066bfdc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066bfdf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066bfe2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0066bfe5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066bfe7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066bfec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066bfee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066bff4: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0066bffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66bffcu); call_ind(t); }
    /* 0066bffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bffd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066c000: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c001: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066c004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c005: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c00a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c00c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c012: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 0066c018: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c01au); call_ind(t); }
    /* 0066c01a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c01b: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c021: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0066c024: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66c029u); f_005eae80();
    /* 0066c029: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c02f: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0066c032: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c038: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0066c03b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c03d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066c040: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c042u); call_ind(t); }
    /* 0066c042: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c048: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c04a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c050: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 0066c056: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c058u); call_ind(t); }
    /* 0066c058: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066c05b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c05d: je 0x66c0b7 */ if (fZ) goto L_0066c0b7;
L_0066c05f:; BB(0x0066c05f);
    /* 0066c05f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c061: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66c066u); f_00686d82();
    /* 0066c066: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c069: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0066c06c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0066c073: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c077: je 0x66c08b */ if (fZ) goto L_0066c08b;
L_0066c079:; BB(0x0066c079);
    /* 0066c079: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c07b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0066c07e: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x66c083u); f_00600a70();
    /* 0066c083: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0066c089: jmp 0x66c095 */ goto L_0066c095;
L_0066c08b:; BB(0x0066c08b);
    /* 0066c08b: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0066c095:; BB(0x0066c095);
    /* 0066c095: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0066c09b: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0066c09e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066c0a5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066c0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0a9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c0af: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0066c0b2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x66c0b7u); f_005f5d50();
L_0066c0b7:; BB(0x0066c0b7);
    /* 0066c0b7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066c0bd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066c0bf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c0c5: mov edx, dword ptr [eax + 0x29c] */ r_edx = R32((u32)(r_eax+0x29cu));
    /* 0066c0cb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66c0cdu); call_ind(t); }
    /* 0066c0cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c0cf: je 0x66c1f9 */ if (fZ) goto L_0066c1f9;
L_0066c0d5:; BB(0x0066c0d5);
    /* 0066c0d5: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c0db: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c0df: jne 0x66c134 */ if (!fZ) goto L_0066c134;
L_0066c0e1:; BB(0x0066c0e1);
    /* 0066c0e1: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66c0ebu); f_00686d82();
    /* 0066c0eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c0ee: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0066c0f1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0066c0f8: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c0fc: je 0x66c10e */ if (fZ) goto L_0066c10e;
L_0066c0fe:; BB(0x0066c0fe);
    /* 0066c0fe: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0066c101: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x66c106u); f_005f5bf0();
    /* 0066c106: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0066c10c: jmp 0x66c118 */ goto L_0066c118;
L_0066c10e:; BB(0x0066c10e);
    /* 0066c10e: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0066c118:; BB(0x0066c118);
    /* 0066c118: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0066c11e: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0066c121: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066c128: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c12e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066c131: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
L_0066c134:; BB(0x0066c134);
    /* 0066c134: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c136: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c138: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c13a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c13c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c142: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c144: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c14a: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0066c150: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c152u); call_ind(t); }
    /* 0066c152: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c153: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c159: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066c15c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66c161u); f_005eae80();
    /* 0066c161: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066c167: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066c169: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c16f: mov edx, dword ptr [eax + 0x2a0] */ r_edx = R32((u32)(r_eax+0x2a0u));
    /* 0066c175: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66c177u); call_ind(t); }
    /* 0066c177: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c17d: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0066c180: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 0066c186: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c18c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066c18f: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c195: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0066c198: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c19a: mov ecx, eax */ r_ecx = r_eax;
    /* 0066c19c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066c19f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c1a1u); call_ind(t); }
    /* 0066c1a1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c1a3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66c1a8u); f_00686d82();
    /* 0066c1a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c1ab: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0066c1ae: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0066c1b5: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c1b9: je 0x66c1cd */ if (fZ) goto L_0066c1cd;
L_0066c1bb:; BB(0x0066c1bb);
    /* 0066c1bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c1bd: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0066c1c0: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x66c1c5u); f_00600a70();
    /* 0066c1c5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0066c1cb: jmp 0x66c1d7 */ goto L_0066c1d7;
L_0066c1cd:; BB(0x0066c1cd);
    /* 0066c1cd: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0066c1d7:; BB(0x0066c1d7);
    /* 0066c1d7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0066c1dd: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0066c1e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066c1e7: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0066c1ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c1eb: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c1f1: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066c1f4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x66c1f9u); f_005f5d50();
L_0066c1f9:; BB(0x0066c1f9);
    /* 0066c1f9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c1ff: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c203: jne 0x66c258 */ if (!fZ) goto L_0066c258;
L_0066c205:; BB(0x0066c205);
    /* 0066c205: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c20a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66c20fu); f_00686d82();
    /* 0066c20f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c212: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0066c215: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0066c21c: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c220: je 0x66c232 */ if (fZ) goto L_0066c232;
L_0066c222:; BB(0x0066c222);
    /* 0066c222: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0066c225: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66c22au); f_005eaaf0();
    /* 0066c22a: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0066c230: jmp 0x66c23c */ goto L_0066c23c;
L_0066c232:; BB(0x0066c232);
    /* 0066c232: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0066c23c:; BB(0x0066c23c);
    /* 0066c23c: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0066c242: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0066c245: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066c24c: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c252: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0066c255: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0066c258:; BB(0x0066c258);
    /* 0066c258: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c25a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c25c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c25e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c260: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066c266: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066c268: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c26e: mov edx, dword ptr [eax + 0x294] */ r_edx = R32((u32)(r_eax+0x294u));
    /* 0066c274: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66c276u); call_ind(t); }
    /* 0066c276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c277: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c27d: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0066c280: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66c285u); f_005eae80();
    /* 0066c285: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c28b: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 0066c292: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c298: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 0066c29f: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c2a5: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 0066c2af: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c2b5: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c2b9: jne 0x66c30e */ if (!fZ) goto L_0066c30e;
L_0066c2bb:; BB(0x0066c2bb);
    /* 0066c2bb: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c2c0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66c2c5u); f_00686d82();
    /* 0066c2c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c2c8: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0066c2cb: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0066c2d2: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c2d6: je 0x66c2e8 */ if (fZ) goto L_0066c2e8;
L_0066c2d8:; BB(0x0066c2d8);
    /* 0066c2d8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0066c2db: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66c2e0u); f_005eaaf0();
    /* 0066c2e0: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0066c2e6: jmp 0x66c2f2 */ goto L_0066c2f2;
L_0066c2e8:; BB(0x0066c2e8);
    /* 0066c2e8: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0066c2f2:; BB(0x0066c2f2);
    /* 0066c2f2: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0066c2f8: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0066c2fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066c302: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c308: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0066c30b: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
L_0066c30e:; BB(0x0066c30e);
    /* 0066c30e: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 0066c311: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c312: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c317: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c319: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c31f: mov eax, dword ptr [edx + 0x28c] */ r_eax = R32((u32)(r_edx+0x28cu));
    /* 0066c325: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c327u); call_ind(t); }
    /* 0066c327: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066c329: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066c32c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066c32f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0066c332: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c334: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c339: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c33b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c341: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 0066c347: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c349u); call_ind(t); }
    /* 0066c349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c34a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066c34d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c34e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c351: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c352: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c357: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c359: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c35f: mov eax, dword ptr [edx + 0x288] */ r_eax = R32((u32)(r_edx+0x288u));
    /* 0066c365: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c367u); call_ind(t); }
    /* 0066c367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c368: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c36e: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066c371: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66c376u); f_005eae80();
    /* 0066c376: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c37c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0066c37f: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c385: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066c388: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c38a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066c38d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c38fu); call_ind(t); }
    /* 0066c38f: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c395: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c399: jne 0x66c3ee */ if (!fZ) goto L_0066c3ee;
L_0066c39b:; BB(0x0066c39b);
    /* 0066c39b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c3a0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66c3a5u); f_00686d82();
    /* 0066c3a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c3a8: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0066c3ab: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0066c3b2: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c3b6: je 0x66c3c8 */ if (fZ) goto L_0066c3c8;
L_0066c3b8:; BB(0x0066c3b8);
    /* 0066c3b8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066c3bb: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66c3c0u); f_005eaaf0();
    /* 0066c3c0: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0066c3c6: jmp 0x66c3d2 */ goto L_0066c3d2;
L_0066c3c8:; BB(0x0066c3c8);
    /* 0066c3c8: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0066c3d2:; BB(0x0066c3d2);
    /* 0066c3d2: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0066c3d8: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0066c3db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066c3e2: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c3e8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0066c3eb: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
L_0066c3ee:; BB(0x0066c3ee);
    /* 0066c3ee: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 0066c3f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c3f2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c3f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c3f9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c3ff: mov eax, dword ptr [edx + 0x28c] */ r_eax = R32((u32)(r_edx+0x28cu));
    /* 0066c405: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c407u); call_ind(t); }
    /* 0066c407: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066c409: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066c40c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066c40f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0066c412: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c414: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c419: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c41b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c421: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 0066c427: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c429u); call_ind(t); }
    /* 0066c429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c42a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066c42d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c42e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c431: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c432: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c437: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c439: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c43f: mov eax, dword ptr [edx + 0x288] */ r_eax = R32((u32)(r_edx+0x288u));
    /* 0066c445: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c447u); call_ind(t); }
    /* 0066c447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c448: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c44e: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0066c451: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66c456u); f_005eae80();
    /* 0066c456: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c458: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c45e: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0066c461: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x66c466u); f_005eb5d0();
    /* 0066c466: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c46c: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0066c46f: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c475: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066c478: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c47a: mov ecx, eax */ r_ecx = r_eax;
    /* 0066c47c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066c47f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c481u); call_ind(t); }
L_0066c481:; BB(0x0066c481);
    /* 0066c481: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c487: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c489: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c48f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066c495: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c497u); call_ind(t); }
    /* 0066c497: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066c49a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c49c: jne 0x66c4bb */ if (!fZ) goto L_0066c4bb;
L_0066c49e:; BB(0x0066c49e);
    /* 0066c49e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c4a4: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x66c4a9u); f_00636760();
    /* 0066c4a9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0066c4ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c4ae: jne 0x66c4bb */ if (!fZ) goto L_0066c4bb;
L_0066c4b0:; BB(0x0066c4b0);
    /* 0066c4b0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c4b6: call 0x6361f0 */ r_esp -= 4; W32(r_esp, 0x66c4bbu); f_006361f0();
L_0066c4bb:; BB(0x0066c4bb);
    /* 0066c4bb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c4c1: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x66c4c6u); f_00636760();
    /* 0066c4c6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066c4c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c4cb: je 0x66c50a */ if (fZ) goto L_0066c50a;
L_0066c4cd:; BB(0x0066c4cd);
    /* 0066c4cd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c4d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c4d5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c4db: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066c4e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c4e3u); call_ind(t); }
    /* 0066c4e3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066c4e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c4e8: je 0x66c50a */ if (fZ) goto L_0066c50a;
L_0066c4ea:; BB(0x0066c4ea);
    /* 0066c4ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4ee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4f4: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c4fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066c4fc: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066c502: mov edx, dword ptr [eax + 0x16c] */ r_edx = R32((u32)(r_eax+0x16cu));
    /* 0066c508: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66c50au); call_ind(t); }
L_0066c50a:; BB(0x0066c50a);
    /* 0066c50a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c50d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066c514: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c515: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c518: ret  */ FN_RET(0x0066bb40); r_esp += 4; return;
}

void f_0066c760(void) /* MainScreenRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066c760);
    /* 0066c760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c761: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066c767: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066c76a: call 0x64d030 */ r_esp -= 4; W32(r_esp, 0x66c76fu); f_0064d030();
    /* 0066c76f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c774: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c776: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c77c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066c782: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c784u); call_ind(t); }
    /* 0066c784: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066c787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c789: je 0x66c793 */ if (fZ) goto L_0066c793;
L_0066c78b:; BB(0x0066c78b);
    /* 0066c78b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066c78e: call 0x66c950 */ r_esp -= 4; W32(r_esp, 0x66c793u); f_0066c950();
L_0066c793:; BB(0x0066c793);
    /* 0066c793: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c796: ret  */ FN_RET(0x0066c760); r_esp += 4; return;
}

void f_0066c7b0(void) /* MainScreenRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066c7b0);
    /* 0066c7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c7b3: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066c7b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066c7be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c7c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066c7c3: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0066c7c9: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 0066c7d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c7d2: je 0x66c863 */ if (fZ) goto L_0066c863;
L_0066c7d8:; BB(0x0066c7d8);
    /* 0066c7d8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c7dc: jl 0x66c863 */ if ((fS!=fO)) goto L_0066c863;
L_0066c7e2:; BB(0x0066c7e2);
    /* 0066c7e2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c7e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c7ea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c7f0: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0066c7f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c7f8u); call_ind(t); }
    /* 0066c7f8: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c7fb: jge 0x66c863 */ if ((fS==fO)) goto L_0066c863;
L_0066c7fd:; BB(0x0066c7fd);
    /* 0066c7fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066c800: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c801: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066c807: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066c809: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c80f: mov edx, dword ptr [eax + 0x340] */ r_edx = R32((u32)(r_eax+0x340u));
    /* 0066c815: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66c817u); call_ind(t); }
    /* 0066c817: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066c81a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c81c: jne 0x66c863 */ if (!fZ) goto L_0066c863;
L_0066c81e:; BB(0x0066c81e);
    /* 0066c81e: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0066c824: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c825: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066c828: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c829: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c82e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c830: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c836: mov eax, dword ptr [edx + 0x338] */ r_eax = R32((u32)(r_edx+0x338u));
    /* 0066c83c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c83eu); call_ind(t); }
    /* 0066c83e: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0066c844: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c845: push 0x6e0a18 */ { u32 v = 0x6e0a18u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c84a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66c84fu); f_00630f40();
    /* 0066c84f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c853: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c859: call 0x635cd0 */ r_esp -= 4; W32(r_esp, 0x66c85eu); f_00635cd0();
    /* 0066c85e: jmp 0x66c919 */ goto L_0066c919;
L_0066c863:; BB(0x0066c863);
    /* 0066c863: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066c866: mov dword ptr [ebp - 0x11c], edx */ W32((u32)(r_ebp+0xfffffee4u), r_edx);
    /* 0066c86c: cmp dword ptr [ebp - 0x11c], 0x7d0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x7d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c876: je 0x66c8e2 */ if (fZ) goto L_0066c8e2;
L_0066c878:; BB(0x0066c878);
    /* 0066c878: cmp dword ptr [ebp - 0x11c], 0x7d1 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x7d1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c882: je 0x66c886 */ if (fZ) goto L_0066c886;
L_0066c884:; BB(0x0066c884);
    /* 0066c884: jmp 0x66c8ff */ goto L_0066c8ff;
L_0066c886:; BB(0x0066c886);
    /* 0066c886: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c88c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x66c891u); f_006375b0();
    /* 0066c891: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0066c897: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0066c89d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x66c8a2u); f_0063aac0();
    /* 0066c8a2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066c8a4: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0066c8aa: cmp dword ptr [ebp - 0x110], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c8b1: jne 0x66c8d3 */ if (!fZ) goto L_0066c8d3;
L_0066c8b3:; BB(0x0066c8b3);
    /* 0066c8b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c8b9: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x66c8beu); f_006375b0();
    /* 0066c8be: mov ecx, eax */ r_ecx = r_eax;
    /* 0066c8c0: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x66c8c5u); f_0057a470();
    /* 0066c8c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c8c6: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0066c8cc: call 0x64f470 */ r_esp -= 4; W32(r_esp, 0x66c8d1u); f_0064f470();
    /* 0066c8d1: jmp 0x66c8e0 */ goto L_0066c8e0;
L_0066c8d3:; BB(0x0066c8d3);
    /* 0066c8d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c8d5: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0066c8db: call 0x64f470 */ r_esp -= 4; W32(r_esp, 0x66c8e0u); f_0064f470();
L_0066c8e0:; BB(0x0066c8e0);
    /* 0066c8e0: jmp 0x66c919 */ goto L_0066c919;
L_0066c8e2:; BB(0x0066c8e2);
    /* 0066c8e2: push 0x7953c8 */ { u32 v = 0x7953c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c8e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c8ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066c8ef: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c8f5: mov eax, dword ptr [edx + 0x34c] */ r_eax = R32((u32)(r_edx+0x34cu));
    /* 0066c8fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c8fdu); call_ind(t); }
    /* 0066c8fd: jmp 0x66c919 */ goto L_0066c919;
L_0066c8ff:; BB(0x0066c8ff);
    /* 0066c8ff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066c902: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c903: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066c909: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066c90b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c911: mov edx, dword ptr [eax + 0x348] */ r_edx = R32((u32)(r_eax+0x348u));
    /* 0066c917: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66c919u); call_ind(t); }
L_0066c919:; BB(0x0066c919);
    /* 0066c919: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066c91c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066c91e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66c923u); f_00686d72();
    /* 0066c923: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c925: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c926: ret 4 */ FN_RET(0x0066c7b0); r_esp += 8; return;
}

void f_0066c930(void) /* MainScreenRoom::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066c930);
    /* 0066c930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c931: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066c937: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066c93c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066c93e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066c944: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066c94a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66c94cu); call_ind(t); }
    /* 0066c94c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c94e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c94f: ret  */ FN_RET(0x0066c930); r_esp += 4; return;
}

