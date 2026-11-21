#include "protos.h"

void f_00431c70(void) /* CrapsRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431c70);
    /* 00431c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00431c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00431c75: push 0x69e6c8 */ { u32 v = 0x69e6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00431c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00431c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431c81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431c82: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00431c87: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00431c89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431c8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00431c8d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00431c93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00431c96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431c99: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x431c9eu); f_005d7b60();
    /* 00431c9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00431ca5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431ca8: mov dword ptr [eax], 0x6b76fc */ W32((u32)(r_eax), 0x6b76fcu);
    /* 00431cae: push 0xfa5 */ { u32 v = 0xfa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00431cb3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431cb6: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x431cbbu); f_005f1ad0();
    /* 00431cbb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431cbe: mov dword ptr [0x7906d0], ecx */ W32((u32)(0x7906d0u), r_ecx);
    /* 00431cc4: mov dword ptr [0x7906d4], 0 */ W32((u32)(0x7906d4u), 0x0u);
    /* 00431cce: mov dword ptr [0x7906d8], 0 */ W32((u32)(0x7906d8u), 0x0u);
    /* 00431cd8: mov dword ptr [0x7906dc], 0 */ W32((u32)(0x7906dcu), 0x0u);
    /* 00431ce2: mov dword ptr [0x7906e0], 0 */ W32((u32)(0x7906e0u), 0x0u);
    /* 00431cec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00431cf3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431cf6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431cf9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00431d00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00431d01: mov esp, ebp */ r_esp = r_ebp;
    /* 00431d03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431d04: ret  */ FN_RET(0x00431c70); r_esp += 4; return;
}

void f_00431d10(void) /* CrapsRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431d10);
    /* 00431d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00431d13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00431d15: push 0x69e6eb */ { u32 v = 0x69e6ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00431d1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00431d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431d21: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431d24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00431d29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00431d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431d2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00431d2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00431d35: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00431d38: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00431d3b: mov dword ptr [eax], 0x6b76fc */ W32((u32)(r_eax), 0x6b76fcu);
    /* 00431d41: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00431d48: mov dword ptr [0x7906d0], 0 */ W32((u32)(0x7906d0u), 0x0u);
    /* 00431d52: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00431d58: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00431d5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00431d5e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00431d61: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d65: je 0x431d7a */ if (fZ) goto L_00431d7a;
L_00431d67:; BB(0x00431d67);
    /* 00431d67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00431d69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431d6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00431d6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431d71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00431d73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431d75u); call_ind(t); }
    /* 00431d75: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00431d78: jmp 0x431d81 */ goto L_00431d81;
L_00431d7a:; BB(0x00431d7a);
    /* 00431d7a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00431d81:; BB(0x00431d81);
    /* 00431d81: mov dword ptr [0x7906d4], 0 */ W32((u32)(0x7906d4u), 0x0u);
    /* 00431d8b: mov ecx, dword ptr [0x7906d8] */ r_ecx = R32((u32)(0x7906d8u));
    /* 00431d91: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00431d94: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00431d97: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00431d9a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d9e: je 0x431db3 */ if (fZ) goto L_00431db3;
L_00431da0:; BB(0x00431da0);
    /* 00431da0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00431da2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00431da5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00431da7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00431daa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00431dac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431daeu); call_ind(t); }
    /* 00431dae: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00431db1: jmp 0x431dba */ goto L_00431dba;
L_00431db3:; BB(0x00431db3);
    /* 00431db3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00431dba:; BB(0x00431dba);
    /* 00431dba: mov dword ptr [0x7906d8], 0 */ W32((u32)(0x7906d8u), 0x0u);
    /* 00431dc4: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00431dca: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00431dcd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431dd0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00431dd3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431dd7: je 0x431dec */ if (fZ) goto L_00431dec;
L_00431dd9:; BB(0x00431dd9);
    /* 00431dd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00431ddb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00431dde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00431de0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00431de3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00431de5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431de7u); call_ind(t); }
    /* 00431de7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00431dea: jmp 0x431df3 */ goto L_00431df3;
L_00431dec:; BB(0x00431dec);
    /* 00431dec: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00431df3:; BB(0x00431df3);
    /* 00431df3: mov dword ptr [0x7906dc], 0 */ W32((u32)(0x7906dcu), 0x0u);
    /* 00431dfd: mov ecx, dword ptr [0x7906e0] */ r_ecx = R32((u32)(0x7906e0u));
    /* 00431e03: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00431e06: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00431e09: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00431e0c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431e10: je 0x431e25 */ if (fZ) goto L_00431e25;
L_00431e12:; BB(0x00431e12);
    /* 00431e12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00431e14: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00431e17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00431e19: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00431e1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00431e1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431e20u); call_ind(t); }
    /* 00431e20: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00431e23: jmp 0x431e2c */ goto L_00431e2c;
L_00431e25:; BB(0x00431e25);
    /* 00431e25: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00431e2c:; BB(0x00431e2c);
    /* 00431e2c: mov dword ptr [0x7906e0], 0 */ W32((u32)(0x7906e0u), 0x0u);
    /* 00431e36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00431e3d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00431e40: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x431e45u); f_005d7bd0();
    /* 00431e45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431e48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00431e4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00431e50: mov esp, ebp */ r_esp = r_ebp;
    /* 00431e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431e53: ret  */ FN_RET(0x00431d10); r_esp += 4; return;
}

void f_00431e60(void) /* CrapsRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431e60);
    /* 00431e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00431e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00431e65: push 0x69e73d */ { u32 v = 0x69e73du; r_esp -= 4; W32(r_esp, v); }
    /* 00431e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00431e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431e71: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431e74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00431e79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00431e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431e7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00431e7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00431e85: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00431e88: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00431e8b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x431e90u); f_005d8230();
    /* 00431e90: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431e95: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x431e9au); f_00686d82();
    /* 00431e9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431e9d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00431ea0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00431ea7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431eab: je 0x431eba */ if (fZ) goto L_00431eba;
L_00431ead:; BB(0x00431ead);
    /* 00431ead: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00431eb0: call 0x434100 */ r_esp -= 4; W32(r_esp, 0x431eb5u); f_00434100();
    /* 00431eb5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00431eb8: jmp 0x431ec1 */ goto L_00431ec1;
L_00431eba:; BB(0x00431eba);
    /* 00431eba: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00431ec1:; BB(0x00431ec1);
    /* 00431ec1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00431ec4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00431ec7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00431ece: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00431ed1: mov dword ptr [0x7906d4], ecx */ W32((u32)(0x7906d4u), r_ecx);
    /* 00431ed7: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00431edd: call 0x434460 */ r_esp -= 4; W32(r_esp, 0x431ee2u); f_00434460();
    /* 00431ee2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00431ee4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x431ee9u); f_00686d82();
    /* 00431ee9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431eec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00431eef: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00431ef6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431efa: je 0x431f09 */ if (fZ) goto L_00431f09;
L_00431efc:; BB(0x00431efc);
    /* 00431efc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00431eff: call 0x42f090 */ r_esp -= 4; W32(r_esp, 0x431f04u); f_0042f090();
    /* 00431f04: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00431f07: jmp 0x431f10 */ goto L_00431f10;
L_00431f09:; BB(0x00431f09);
    /* 00431f09: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00431f10:; BB(0x00431f10);
    /* 00431f10: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00431f13: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00431f16: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00431f1d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00431f20: mov dword ptr [0x7906d8], eax */ W32((u32)(0x7906d8u), r_eax);
    /* 00431f25: mov ecx, dword ptr [0x7906d8] */ r_ecx = R32((u32)(0x7906d8u));
    /* 00431f2b: call 0x42f120 */ r_esp -= 4; W32(r_esp, 0x431f30u); f_0042f120();
    /* 00431f30: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 00431f35: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x431f3au); f_00686d82();
    /* 00431f3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431f3d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00431f40: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00431f47: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f4b: je 0x431f5a */ if (fZ) goto L_00431f5a;
L_00431f4d:; BB(0x00431f4d);
    /* 00431f4d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431f50: call 0x428c20 */ r_esp -= 4; W32(r_esp, 0x431f55u); f_00428c20();
    /* 00431f55: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00431f58: jmp 0x431f61 */ goto L_00431f61;
L_00431f5a:; BB(0x00431f5a);
    /* 00431f5a: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00431f61:; BB(0x00431f61);
    /* 00431f61: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00431f64: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00431f67: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00431f6e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00431f71: mov dword ptr [0x7906dc], edx */ W32((u32)(0x7906dcu), r_edx);
    /* 00431f77: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00431f7d: call 0x428fe0 */ r_esp -= 4; W32(r_esp, 0x431f82u); f_00428fe0();
    /* 00431f82: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00431f84: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x431f89u); f_00686d82();
    /* 00431f89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431f8c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00431f8f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00431f96: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f9a: je 0x431fa9 */ if (fZ) goto L_00431fa9;
L_00431f9c:; BB(0x00431f9c);
    /* 00431f9c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00431f9f: call 0x427fc0 */ r_esp -= 4; W32(r_esp, 0x431fa4u); f_00427fc0();
    /* 00431fa4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00431fa7: jmp 0x431fb0 */ goto L_00431fb0;
L_00431fa9:; BB(0x00431fa9);
    /* 00431fa9: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00431fb0:; BB(0x00431fb0);
    /* 00431fb0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00431fb3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00431fb6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00431fbd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00431fc0: mov dword ptr [0x7906e0], ecx */ W32((u32)(0x7906e0u), r_ecx);
    /* 00431fc6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00431fc8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x431fcdu); f_00686d82();
    /* 00431fcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431fd0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00431fd3: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00431fda: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431fde: je 0x431ffb */ if (fZ) goto L_00431ffb;
L_00431fe0:; BB(0x00431fe0);
    /* 00431fe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431fe2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00431fe5: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x431feau); f_005fc0d0();
    /* 00431fea: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00431fed: mov dword ptr [edx], 0x6b79fc */ W32((u32)(r_edx), 0x6b79fcu);
    /* 00431ff3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00431ff6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00431ff9: jmp 0x432002 */ goto L_00432002;
L_00431ffb:; BB(0x00431ffb);
    /* 00431ffb: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00432002:; BB(0x00432002);
    /* 00432002: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00432005: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00432008: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043200f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00432012: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432013: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00432016: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x43201bu); f_005f1b70();
    /* 0043201b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043201e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00432021: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00432024: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00432027: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432029: mov ecx, eax */ r_ecx = r_eax;
    /* 0043202b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0043202e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x432030u); call_ind(t); }
    /* 00432030: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00432033: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x432038u); f_005d85e0();
    /* 00432038: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043203a: mov ecx, dword ptr [0x7906d8] */ r_ecx = R32((u32)(0x7906d8u));
    /* 00432040: call 0x42f140 */ r_esp -= 4; W32(r_esp, 0x432045u); f_0042f140();
    /* 00432045: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00432048: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043204f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00432050: mov esp, ebp */ r_esp = r_ebp;
    /* 00432052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432053: ret  */ FN_RET(0x00431e60); r_esp += 4; return;
}

void f_00432060(void) /* CrapsRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432060);
    /* 00432060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432061: mov ebp, esp */ r_ebp = r_esp;
    /* 00432063: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432066: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432069: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043206c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043206f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432076: je 0x432086 */ if (fZ) goto L_00432086;
L_00432078:; BB(0x00432078);
    /* 00432078: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043207f: je 0x4320d9 */ if (fZ) goto L_004320d9;
L_00432081:; BB(0x00432081);
    /* 00432081: jmp 0x43210e */ goto L_0043210e;
L_00432086:; BB(0x00432086);
    /* 00432086: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432088: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043208d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432090: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x432095u); f_005fe640();
    /* 00432095: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432097: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0043209c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043209f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4320a4u); f_005fe640();
    /* 004320a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004320a6: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004320ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004320ae: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4320b3u); f_005fe640();
    /* 004320b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004320b5: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004320ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004320bd: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4320c2u); f_005fe640();
    /* 004320c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004320c4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004320c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004320c8: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 004320cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004320d0: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4320d5u); f_005fe240();
    /* 004320d5: jmp 0x43210e */ goto L_0043210e;
L_004320d9:; BB(0x004320d9);
    /* 004320d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004320db: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 004320e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004320e3: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4320e8u); f_005fe640();
    /* 004320e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004320ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004320ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004320ee: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 004320f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004320f6: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4320fbu); f_005fe240();
    /* 004320fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004320fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004320ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432101: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00432106: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432109: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x43210eu); f_005fe240();
L_0043210e:; BB(0x0043210e);
    /* 0043210e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00432111: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432112: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00432115: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432116: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432119: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x43211eu); f_005d8670();
    /* 0043211e: mov esp, ebp */ r_esp = r_ebp;
    /* 00432120: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432121: ret 8 */ FN_RET(0x00432060); r_esp += 12; return;
}

void f_00432130(void) /* CrapsRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432130);
    /* 00432130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432131: mov ebp, esp */ r_ebp = r_esp;
    /* 00432133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432137: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043213c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00432142: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x432147u); f_005df2e0();
    /* 00432147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432148: push 0x30dbd1 */ { u32 v = 0x30dbd1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043214d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432150: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x432155u); f_005f1e60();
    /* 00432155: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432158: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x43215du); f_0064e430();
    /* 0043215d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043215f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432160: ret  */ FN_RET(0x00432130); r_esp += 4; return;
}

void f_00432170(void) /* CrapsRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432170);
    /* 00432170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432171: mov ebp, esp */ r_ebp = r_esp;
    /* 00432173: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432176: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00432179: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0043217e: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00432184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432187: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043218a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043218b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x432190u); f_005dcb00();
    /* 00432190: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432193: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432195: je 0x432241 */ if (fZ) goto L_00432241;
L_0043219b:; BB(0x0043219b);
    /* 0043219b: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004321a0: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 004321a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004321a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004321ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004321ad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4321b2u); f_005dcb00();
    /* 004321b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004321b5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004321b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004321bb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4321c0u); f_0063aac0();
    /* 004321c0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004321c2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004321c5: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004321c9: je 0x4321e7 */ if (fZ) goto L_004321e7;
L_004321cb:; BB(0x004321cb);
    /* 004321cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004321ce: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4321d3u); f_0063aac0();
    /* 004321d3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004321d5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004321d8: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004321dc: je 0x4321e7 */ if (fZ) goto L_004321e7;
L_004321de:; BB(0x004321de);
    /* 004321de: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004321e5: jmp 0x4321ee */ goto L_004321ee;
L_004321e7:; BB(0x004321e7);
    /* 004321e7: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_004321ee:; BB(0x004321ee);
    /* 004321ee: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 004321f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004321f4: je 0x432241 */ if (fZ) goto L_00432241;
L_004321f6:; BB(0x004321f6);
    /* 004321f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004321f9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004321fc: cmp dword ptr [ebp - 0x24], 0x30dbd2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x30dbd2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432203: je 0x432210 */ if (fZ) goto L_00432210;
L_00432205:; BB(0x00432205);
    /* 00432205: cmp dword ptr [ebp - 0x24], 0x30dbd3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x30dbd3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043220c: je 0x432230 */ if (fZ) goto L_00432230;
L_0043220e:; BB(0x0043220e);
    /* 0043220e: jmp 0x432241 */ goto L_00432241;
L_00432210:; BB(0x00432210);
    /* 00432210: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432216: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 0043221c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043221f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00432222: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432223: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432229: call 0x4362a0 */ r_esp -= 4; W32(r_esp, 0x43222eu); f_004362a0();
    /* 0043222e: jmp 0x432241 */ goto L_00432241;
L_00432230:; BB(0x00432230);
    /* 00432230: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432236: mov ecx, dword ptr [ecx + 0x164] */ r_ecx = R32((u32)(r_ecx+0x164u));
    /* 0043223c: call 0x42d3f0 */ r_esp -= 4; W32(r_esp, 0x432241u); f_0042d3f0();
L_00432241:; BB(0x00432241);
    /* 00432241: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00432244: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432245: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00432248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432249: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043224c: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x432251u); f_005dc7d0();
    /* 00432251: mov esp, ebp */ r_esp = r_ebp;
    /* 00432253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432254: ret 8 */ FN_RET(0x00432170); r_esp += 12; return;
}

void f_00432260(void) /* CrapsRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432260);
    /* 00432260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432261: mov ebp, esp */ r_ebp = r_esp;
    /* 00432263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432267: cmp dword ptr [0x7906d4], 0 */ {  u32 a = R32((u32)(0x7906d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043226e: jne 0x432274 */ if (!fZ) goto L_00432274;
L_00432270:; BB(0x00432270);
    /* 00432270: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00432272: jmp 0x43227f */ goto L_0043227f;
L_00432274:; BB(0x00432274);
    /* 00432274: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043227a: call 0x4346f0 */ r_esp -= 4; W32(r_esp, 0x43227fu); f_004346f0();
L_0043227f:; BB(0x0043227f);
    /* 0043227f: mov esp, ebp */ r_esp = r_ebp;
    /* 00432281: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432282: ret  */ FN_RET(0x00432260); r_esp += 4; return;
}

void f_00432290(void) /* CrapsRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432290);
    /* 00432290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432291: mov ebp, esp */ r_ebp = r_esp;
    /* 00432293: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432296: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00432299: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0043229e: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 004322a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004322a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004322a9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004322af: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x4322b4u); f_005df7b0();
    /* 004322b4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004322b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004322b9: je 0x432319 */ if (fZ) goto L_00432319;
L_004322bb:; BB(0x004322bb);
    /* 004322bb: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004322c0: movzx ecx, byte ptr [eax + 0xad5] */ r_ecx = (u32)R8((u32)(r_eax+0xad5u));
    /* 004322c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004322c9: jne 0x432319 */ if (!fZ) goto L_00432319;
L_004322cb:; BB(0x004322cb);
    /* 004322cb: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 004322d1: mov eax, dword ptr [edx + 0xad8] */ r_eax = R32((u32)(r_edx+0xad8u));
    /* 004322d7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004322da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004322dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004322de: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004322e4: call 0x4360c0 */ r_esp -= 4; W32(r_esp, 0x4322e9u); f_004360c0();
    /* 004322e9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004322ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004322ee: je 0x432319 */ if (fZ) goto L_00432319;
L_004322f0:; BB(0x004322f0);
    /* 004322f0: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004322f5: mov byte ptr [eax + 0xad5], 1 */ W8((u32)(r_eax+0xad5u), 0x1u);
    /* 004322fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004322fe: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432304: call 0x43b830 */ r_esp -= 4; W32(r_esp, 0x432309u); f_0043b830();
    /* 00432309: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0043230f: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x432314u); f_0057c140();
    /* 00432314: jmp 0x43245a */ goto L_0043245a;
L_00432319:; BB(0x00432319);
    /* 00432319: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0043231f: call 0x42a270 */ r_esp -= 4; W32(r_esp, 0x432324u); f_0042a270();
    /* 00432324: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043232a: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43232fu); f_004347f0();
    /* 0043232f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00432332: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432335: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43233au); f_0063aac0();
    /* 0043233a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043233c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043233f: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432343: je 0x432361 */ if (fZ) goto L_00432361;
L_00432345:; BB(0x00432345);
    /* 00432345: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432348: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43234du); f_0063aac0();
    /* 0043234d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043234f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00432352: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432356: je 0x432361 */ if (fZ) goto L_00432361;
L_00432358:; BB(0x00432358);
    /* 00432358: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0043235f: jmp 0x432368 */ goto L_00432368;
L_00432361:; BB(0x00432361);
    /* 00432361: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00432368:; BB(0x00432368);
    /* 00432368: movzx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0043236c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043236e: je 0x4323c7 */ if (fZ) goto L_004323c7;
L_00432370:; BB(0x00432370);
    /* 00432370: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432374: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043237a: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x43237fu); f_004349b0();
    /* 0043237f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00432382: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432384: je 0x4323c7 */ if (fZ) goto L_004323c7;
L_00432386:; BB(0x00432386);
    /* 00432386: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043238a: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432390: call 0x4348e0 */ r_esp -= 4; W32(r_esp, 0x432395u); f_004348e0();
    /* 00432395: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00432398: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043239a: je 0x4323c7 */ if (fZ) goto L_004323c7;
L_0043239c:; BB(0x0043239c);
    /* 0043239c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043239e: push 0x6b7a3c */ { u32 v = 0x6b7a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004323a3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4323a8u); f_00630f40();
    /* 004323a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004323ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004323ac: push 0x6b7a1c */ { u32 v = 0x6b7a1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004323b1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4323b6u); f_00630f40();
    /* 004323b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004323b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004323ba: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x4323bfu); f_0062ff10();
    /* 004323bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004323c2: jmp 0x43245a */ goto L_0043245a;
L_004323c7:; BB(0x004323c7);
    /* 004323c7: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 004323cd: mov eax, dword ptr [edx + 0xad8] */ r_eax = R32((u32)(r_edx+0xad8u));
    /* 004323d3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004323d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004323d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004323da: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004323e0: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x4323e5u); f_004349b0();
    /* 004323e5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004323e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004323ea: je 0x432406 */ if (fZ) goto L_00432406;
L_004323ec:; BB(0x004323ec);
    /* 004323ec: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004323f2: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x4323f7u); f_004347f0();
    /* 004323f7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004323fa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004323fd: mov byte ptr [eax + 0x4a0], 1 */ W8((u32)(r_eax+0x4a0u), 0x1u);
    /* 00432404: jmp 0x43241e */ goto L_0043241e;
L_00432406:; BB(0x00432406);
    /* 00432406: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043240c: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x432411u); f_004347f0();
    /* 00432411: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00432414: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00432417: mov byte ptr [ecx + 0x4a1], 1 */ W8((u32)(r_ecx+0x4a1u), 0x1u);
L_0043241e:; BB(0x0043241e);
    /* 0043241e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432424: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x432429u); f_004347f0();
    /* 00432429: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043242c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043242f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00432431: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00432434: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00432437: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x432439u); call_ind(t); }
    /* 00432439: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043243c: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x432441u); f_005db890();
    /* 00432441: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432443: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432445: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00432448: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0043244b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043244e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00432451: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432453: mov ecx, eax */ r_ecx = r_eax;
    /* 00432455: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00432458: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43245au); call_ind(t); }
L_0043245a:; BB(0x0043245a);
    /* 0043245a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043245c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043245d: ret  */ FN_RET(0x00432290); r_esp += 4; return;
}

void f_00432460(void) /* CrapsRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432460);
    /* 00432460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432461: mov ebp, esp */ r_ebp = r_esp;
    /* 00432463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432467: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0043246b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043246d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00432470: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432471: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432477: call 0x4342a0 */ r_esp -= 4; W32(r_esp, 0x43247cu); f_004342a0();
    /* 0043247c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043247f: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x432484u); f_005db9b0();
    /* 00432484: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432486: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432489: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043248c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043248f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00432492: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00432494: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00432497: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x432499u); call_ind(t); }
    /* 00432499: mov esp, ebp */ r_esp = r_ebp;
    /* 0043249b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043249c: ret 4 */ FN_RET(0x00432460); r_esp += 8; return;
}

void f_004324a0(void) /* CrapsRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004324a0);
    /* 004324a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004324a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004324a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004324a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004324a9: mov dword ptr [ebp - 0x10], 0xe5 */ W32((u32)(r_ebp+0xfffffff0u), 0xe5u);
    /* 004324b0: mov dword ptr [ebp - 0xc], 0x182 */ W32((u32)(r_ebp+0xfffffff4u), 0x182u);
    /* 004324b7: mov dword ptr [ebp - 8], 0x217 */ W32((u32)(r_ebp+0xfffffff8u), 0x217u);
    /* 004324be: mov dword ptr [ebp - 4], 0x217 */ W32((u32)(r_ebp+0xfffffffcu), 0x217u);
    /* 004324c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004324c8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 004324cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004324ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004324cf: ret 4 */ FN_RET(0x004324a0); r_esp += 8; return;
}

void f_004324e0(void) /* CrapsRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004324e0);
    /* 004324e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004324e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004324e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004324e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004324e9: mov dword ptr [ebp - 0x10], 0x132 */ W32((u32)(r_ebp+0xfffffff0u), 0x132u);
    /* 004324f0: mov dword ptr [ebp - 0xc], 0x132 */ W32((u32)(r_ebp+0xfffffff4u), 0x132u);
    /* 004324f7: mov dword ptr [ebp - 8], 0xf2 */ W32((u32)(r_ebp+0xfffffff8u), 0xf2u);
    /* 004324fe: mov dword ptr [ebp - 4], 0x50 */ W32((u32)(r_ebp+0xfffffffcu), 0x50u);
    /* 00432505: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00432508: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0043250c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043250e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043250f: ret 4 */ FN_RET(0x004324e0); r_esp += 8; return;
}

void f_00432520(void) /* CrapsRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432520);
    /* 00432520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432521: mov ebp, esp */ r_ebp = r_esp;
    /* 00432523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432527: cmp dword ptr [0x7906d4], 0 */ {  u32 a = R32((u32)(0x7906d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043252e: je 0x43253d */ if (fZ) goto L_0043253d;
L_00432530:; BB(0x00432530);
    /* 00432530: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432536: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43253bu); f_004347f0();
    /* 0043253b: jmp 0x43253f */ goto L_0043253f;
L_0043253d:; BB(0x0043253d);
    /* 0043253d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043253f:; BB(0x0043253f);
    /* 0043253f: mov esp, ebp */ r_esp = r_ebp;
    /* 00432541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432542: ret  */ FN_RET(0x00432520); r_esp += 4; return;
}

void f_00432550(void) /* CrapsRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432550);
    /* 00432550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432551: mov ebp, esp */ r_ebp = r_esp;
    /* 00432553: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432556: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00432559: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00432560: jmp 0x43256b */ goto L_0043256b;
L_00432562:; BB(0x00432562);
    /* 00432562: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432565: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432568: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043256b:; BB(0x0043256b);
    /* 0043256b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043256f: jge 0x432597 */ if ((fS==fO)) goto L_00432597;
L_00432571:; BB(0x00432571);
    /* 00432571: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432574: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0043257a: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0043257e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432581: je 0x432595 */ if (fZ) goto L_00432595;
L_00432583:; BB(0x00432583);
    /* 00432583: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432586: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0043258c: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00432590: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x432595u); f_005cd330();
L_00432595:; BB(0x00432595);
    /* 00432595: jmp 0x432562 */ goto L_00432562;
L_00432597:; BB(0x00432597);
    /* 00432597: mov esp, ebp */ r_esp = r_ebp;
    /* 00432599: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043259a: ret 4 */ FN_RET(0x00432550); r_esp += 8; return;
}

void f_004325a0(void) /* CrapsRoom::vfunc161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004325a0);
    /* 004325a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004325a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004325a3: sub esp, 0x140 */ {  u32 a = r_esp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004325a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004325ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004325b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004325b3: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 004325b9: mov byte ptr [ebp - 0x125], 0 */ W8((u32)(r_ebp+0xfffffedbu), 0x0u);
    /* 004325c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004325c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004325c4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4325c9u); f_005dcb00();
    /* 004325c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004325cc: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 004325d2: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004325d8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4325ddu); f_0063aac0();
    /* 004325dd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004325df: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 004325e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004325e7: cmp dword ptr [ebp - 0x134], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004325ee: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004325f1: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004325f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004325f6: je 0x4325ff */ if (fZ) goto L_004325ff;
L_004325f8:; BB(0x004325f8);
    /* 004325f8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004325fa: jmp 0x4326e2 */ goto L_004326e2;
L_004325ff:; BB(0x004325ff);
    /* 004325ff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432602: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00432608: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043260b: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043260e: lea ecx, [edx + eax + 0x48] */ r_ecx = (u32)(r_edx+r_eax+0x48u);
    /* 00432612: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00432615: mov eax, dword ptr [ecx + edx*8 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 00432619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043261a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043261d: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00432623: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00432626: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00432629: lea ecx, [edx + eax + 0x48] */ r_ecx = (u32)(r_edx+r_eax+0x48u);
    /* 0043262d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00432630: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 00432633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432634: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x432639u); f_0064c8a0();
    /* 00432639: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043263c: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00432642: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 00432648: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043264a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043264c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043264e: lea ecx, [ebp - 0x124] */ r_ecx = (u32)(r_ebp+0xfffffedcu);
    /* 00432654: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432655: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0043265b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043265c: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00432662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432663: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x432668u); f_0064c8d0();
    /* 00432668: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043266b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043266e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043266f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x432674u); f_005dcb00();
    /* 00432674: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432677: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 0043267d: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 00432683: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432684: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0043268a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43268fu); f_0063aac0();
    /* 0043268f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432693: push 0x6b7a5c */ { u32 v = 0x6b7a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432698: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0043269e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043269f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4326a5u); call_ind(t); }
    /* 004326a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004326a8: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 004326ad: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004326b0: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4326b5u); f_005ecc60();
    /* 004326b5: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 004326bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004326bc: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004326bf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004326c1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004326c4: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004326ca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4326ccu); call_ind(t); }
    /* 004326cc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004326cf: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x4326d4u); f_005ef050();
    /* 004326d4: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004326d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004326d8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004326db: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4326e0u); f_005ecc60();
    /* 004326e0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004326e2:; BB(0x004326e2);
    /* 004326e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004326e5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004326e7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4326ecu); f_00686d72();
    /* 004326ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004326ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004326ef: ret 0x1c */ FN_RET(0x004325a0); r_esp += 32; return;
}

void f_00432700(void) /* CrapsRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432700);
    /* 00432700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432701: mov ebp, esp */ r_ebp = r_esp;
    /* 00432703: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432706: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00432709: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0043270c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043270d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432710: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432711: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00432714: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00432716: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00432719: mov edx, dword ptr [eax + 0x27c] */ r_edx = R32((u32)(r_eax+0x27cu));
    /* 0043271f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x432721u); call_ind(t); }
    /* 00432721: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432725: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00432728: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432729: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043272c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043272d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x432732u); f_005dcb00();
    /* 00432732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432735: mov ecx, eax */ r_ecx = r_eax;
    /* 00432737: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x43273cu); f_005d5cf0();
    /* 0043273c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043273f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432740: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432746: call 0x4361e0 */ r_esp -= 4; W32(r_esp, 0x43274bu); f_004361e0();
    /* 0043274b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043274d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043274e: ret 4 */ FN_RET(0x00432700); r_esp += 8; return;
}

void f_00432760(void) /* CrapsRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432760);
    /* 00432760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432761: mov ebp, esp */ r_ebp = r_esp;
    /* 00432763: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432766: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00432769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043276b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043276d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x432772u); f_0064c8a0();
    /* 00432772: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432775: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00432778: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043277b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043277e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00432781: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00432783: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00432786: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00432789: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00432790: jmp 0x43279b */ goto L_0043279b;
L_00432792:; BB(0x00432792);
    /* 00432792: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432795: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432798: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043279b:; BB(0x0043279b);
    /* 0043279b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043279f: jge 0x4327f3 */ if ((fS==fO)) goto L_004327f3;
L_004327a1:; BB(0x004327a1);
    /* 004327a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004327a4: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 004327aa: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004327ae: cmp dword ptr [eax + 0x110], -1 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004327b5: jne 0x4327f1 */ if (!fZ) goto L_004327f1;
L_004327b7:; BB(0x004327b7);
    /* 004327b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004327ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004327bb: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004327be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004327bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004327c2: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004327c8: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004327cc: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x4327d1u); f_005cb880();
    /* 004327d1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004327d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004327d5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004327d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004327d8: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004327db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004327dc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004327df: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4327e4u); f_0064c5c0();
    /* 004327e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004327e6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004327e9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004327ec: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004327ee: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_004327f1:; BB(0x004327f1);
    /* 004327f1: jmp 0x432792 */ goto L_00432792;
L_004327f3:; BB(0x004327f3);
    /* 004327f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004327f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004327f6: ret 8 */ FN_RET(0x00432760); r_esp += 12; return;
}

void f_00432800(void) /* CrapsRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432800);
    /* 00432800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432801: mov ebp, esp */ r_ebp = r_esp;
    /* 00432803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432807: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043280d: call 0x434240 */ r_esp -= 4; W32(r_esp, 0x432812u); f_00434240();
    /* 00432812: mov esp, ebp */ r_esp = r_ebp;
    /* 00432814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432815: ret  */ FN_RET(0x00432800); r_esp += 4; return;
}

void f_00432820(void) /* CrapsRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432820);
    /* 00432820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432821: mov ebp, esp */ r_ebp = r_esp;
    /* 00432823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432827: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432829: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043282b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043282e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00432831: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432834: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00432837: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432839: mov ecx, eax */ r_ecx = r_eax;
    /* 0043283b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043283e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x432840u); call_ind(t); }
    /* 00432840: mov esp, ebp */ r_esp = r_ebp;
    /* 00432842: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432843: ret  */ FN_RET(0x00432820); r_esp += 4; return;
}

void f_00432850(void) /* CrapsRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432850);
    /* 00432850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432851: mov ebp, esp */ r_ebp = r_esp;
    /* 00432853: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432856: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00432857: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432858: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043285b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043285e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043285f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x432864u); f_005dcb00();
    /* 00432864: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432867: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 0043286d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043286e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 00432874: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432875: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00432878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432879: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043287b: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432881: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x432886u); f_00434200();
    /* 00432886: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432889: mov ecx, eax */ r_ecx = r_eax;
    /* 0043288b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x432890u); f_0064c5c0();
    /* 00432890: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00432892: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00432895: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432897: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043289d: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x4328a2u); f_00434200();
    /* 004328a2: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 004328a5: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 004328a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004328ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004328ac: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4328b1u); f_005dcb00();
    /* 004328b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004328b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004328b6: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x4328bbu); f_0063b0a0();
    /* 004328bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004328bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004328bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004328bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004328c0: ret 4 */ FN_RET(0x00432850); r_esp += 8; return;
}

void f_004328d0(void) /* CrapsRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004328d0);
    /* 004328d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004328d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004328d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004328d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004328d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004328d8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004328db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004328de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004328df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4328e4u); f_005dcb00();
    /* 004328e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004328e7: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 004328ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004328ee: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 004328f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004328f5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004328f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004328f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004328fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004328fd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432903: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x432908u); f_00434200();
    /* 00432908: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043290b: mov ecx, eax */ r_ecx = r_eax;
    /* 0043290d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x432912u); f_0064c5c0();
    /* 00432912: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00432914: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00432917: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043291a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043291b: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432921: call 0x434200 */ r_esp -= 4; W32(r_esp, 0x432926u); f_00434200();
    /* 00432926: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00432929: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0043292c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043292f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432930: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x432935u); f_005dcb00();
    /* 00432935: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432938: mov ecx, eax */ r_ecx = r_eax;
    /* 0043293a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x43293fu); f_0063b0a0();
    /* 0043293f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00432940: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00432941: mov esp, ebp */ r_esp = r_ebp;
    /* 00432943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432944: ret 4 */ FN_RET(0x004328d0); r_esp += 8; return;
}

void f_00432950(void) /* CrapsRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432950);
    /* 00432950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432951: mov ebp, esp */ r_ebp = r_esp;
    /* 00432953: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432956: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00432959: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0043295e: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00432964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432967: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043296b: jne 0x432984 */ if (!fZ) goto L_00432984;
L_0043296d:; BB(0x0043296d);
    /* 0043296d: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00432972: push 0x6b7a64 */ { u32 v = 0x6b7a64u; r_esp -= 4; W32(r_esp, v); }
    /* 00432977: push 0x6b6c68 */ { u32 v = 0x6b6c68u; r_esp -= 4; W32(r_esp, v); }
    /* 0043297c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x432981u); f_005e9f20();
    /* 00432981: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00432984:; BB(0x00432984);
    /* 00432984: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0043298a: call 0x42a270 */ r_esp -= 4; W32(r_esp, 0x43298fu); f_0042a270();
    /* 0043298f: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00432994: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0043299a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043299d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043299f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004329a3: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004329a6: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004329a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004329ab: jne 0x4329cc */ if (!fZ) goto L_004329cc;
L_004329ad:; BB(0x004329ad);
    /* 004329ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004329af: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 004329b5: call 0x42a2b0 */ r_esp -= 4; W32(r_esp, 0x4329bau); f_0042a2b0();
    /* 004329ba: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004329bc: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 004329c2: call 0x42a2b0 */ r_esp -= 4; W32(r_esp, 0x4329c7u); f_0042a2b0();
    /* 004329c7: jmp 0x432b5b */ goto L_00432b5b;
L_004329cc:; BB(0x004329cc);
    /* 004329cc: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004329d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004329d2: je 0x432a30 */ if (fZ) goto L_00432a30;
L_004329d4:; BB(0x004329d4);
    /* 004329d4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004329d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004329d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004329da: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004329e0: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4329e5u); f_004369a0();
    /* 004329e5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004329e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004329ea: jne 0x432a4a */ if (!fZ) goto L_00432a4a;
L_004329ec:; BB(0x004329ec);
    /* 004329ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004329ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004329f0: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004329f6: call 0x435d40 */ r_esp -= 4; W32(r_esp, 0x4329fbu); f_00435d40();
    /* 004329fb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004329fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432a00: jne 0x432a4a */ if (!fZ) goto L_00432a4a;
L_00432a02:; BB(0x00432a02);
    /* 00432a02: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00432a04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432a08: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432a0e: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x432a13u); f_004369a0();
    /* 00432a13: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00432a16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432a18: jne 0x432a4a */ if (!fZ) goto L_00432a4a;
L_00432a1a:; BB(0x00432a1a);
    /* 00432a1a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432a1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a1e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432a24: call 0x435de0 */ r_esp -= 4; W32(r_esp, 0x432a29u); f_00435de0();
    /* 00432a29: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00432a2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432a2e: jne 0x432a4a */ if (!fZ) goto L_00432a4a;
L_00432a30:; BB(0x00432a30);
    /* 00432a30: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00432a32: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432a38: call 0x42a2b0 */ r_esp -= 4; W32(r_esp, 0x432a3du); f_0042a2b0();
    /* 00432a3d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00432a3f: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432a45: call 0x42a2b0 */ r_esp -= 4; W32(r_esp, 0x432a4au); f_0042a2b0();
L_00432a4a:; BB(0x00432a4a);
    /* 00432a4a: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00432a4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432a50: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00432a53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432a56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432a5a: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432a60: call 0x435ee0 */ r_esp -= 4; W32(r_esp, 0x432a65u); f_00435ee0();
    /* 00432a65: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00432a69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432a6b: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00432a6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432a71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432a75: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432a7b: call 0x435fd0 */ r_esp -= 4; W32(r_esp, 0x432a80u); f_00435fd0();
    /* 00432a80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432a82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432a85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a86: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432a8c: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x432a91u); f_004369a0();
    /* 00432a91: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00432a94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432a96: jne 0x432acf */ if (!fZ) goto L_00432acf;
L_00432a98:; BB(0x00432a98);
    /* 00432a98: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432a9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432a9e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432aa4: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x432aa9u); f_004369a0();
    /* 00432aa9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00432aac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432aae: jne 0x432acf */ if (!fZ) goto L_00432acf;
L_00432ab0:; BB(0x00432ab0);
    /* 00432ab0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ab2: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432ab8: call 0x42a2b0 */ r_esp -= 4; W32(r_esp, 0x432abdu); f_0042a2b0();
    /* 00432abd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432abf: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432ac5: call 0x42a2b0 */ r_esp -= 4; W32(r_esp, 0x432acau); f_0042a2b0();
    /* 00432aca: jmp 0x432b5b */ goto L_00432b5b;
L_00432acf:; BB(0x00432acf);
    /* 00432acf: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00432ad3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ad5: je 0x432b07 */ if (fZ) goto L_00432b07;
L_00432ad7:; BB(0x00432ad7);
    /* 00432ad7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ad9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432add: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432ae3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x432ae8u); f_004369a0();
    /* 00432ae8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00432aeb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432aed: je 0x432b16 */ if (fZ) goto L_00432b16;
L_00432aef:; BB(0x00432aef);
    /* 00432aef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432af1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432af5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432afb: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x432b00u); f_004369a0();
    /* 00432b00: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00432b03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b05: jne 0x432b16 */ if (!fZ) goto L_00432b16;
L_00432b07:; BB(0x00432b07);
    /* 00432b07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432b09: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432b0f: call 0x42a310 */ r_esp -= 4; W32(r_esp, 0x432b14u); f_0042a310();
    /* 00432b14: jmp 0x432b5b */ goto L_00432b5b;
L_00432b16:; BB(0x00432b16);
    /* 00432b16: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00432b1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b1c: je 0x432b4e */ if (fZ) goto L_00432b4e;
L_00432b1e:; BB(0x00432b1e);
    /* 00432b1e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432b20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432b23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432b24: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432b2a: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x432b2fu); f_004369a0();
    /* 00432b2f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00432b32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b34: je 0x432b5b */ if (fZ) goto L_00432b5b;
L_00432b36:; BB(0x00432b36);
    /* 00432b36: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00432b38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432b3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432b3c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432b42: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x432b47u); f_004369a0();
    /* 00432b47: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00432b4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b4c: jne 0x432b5b */ if (!fZ) goto L_00432b5b;
L_00432b4e:; BB(0x00432b4e);
    /* 00432b4e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00432b50: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432b56: call 0x42a310 */ r_esp -= 4; W32(r_esp, 0x432b5bu); f_0042a310();
L_00432b5b:; BB(0x00432b5b);
    /* 00432b5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00432b5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432b5e: ret 4 */ FN_RET(0x00432950); r_esp += 8; return;
}

void f_00432b70(void) /* CrapsRoom::vfunc176 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432b70);
    /* 00432b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00432b73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432b76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00432b79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00432b80: jmp 0x432b8b */ goto L_00432b8b;
L_00432b82:; BB(0x00432b82);
    /* 00432b82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432b85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432b88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00432b8b:; BB(0x00432b8b);
    /* 00432b8b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432b8f: jge 0x432bb9 */ if ((fS==fO)) goto L_00432bb9;
L_00432b91:; BB(0x00432b91);
    /* 00432b91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432b94: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 00432b9a: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00432b9e: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00432ba4: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ba7: jne 0x432bb7 */ if (!fZ) goto L_00432bb7;
L_00432ba9:; BB(0x00432ba9);
    /* 00432ba9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432bac: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 00432bb1: mov eax, dword ptr [eax + edx*4 + 0x14] */ r_eax = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00432bb5: jmp 0x432bbb */ goto L_00432bbb;
L_00432bb7:; BB(0x00432bb7);
    /* 00432bb7: jmp 0x432b82 */ goto L_00432b82;
L_00432bb9:; BB(0x00432bb9);
    /* 00432bb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00432bbb:; BB(0x00432bbb);
    /* 00432bbb: mov esp, ebp */ r_esp = r_ebp;
    /* 00432bbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432bbe: ret 4 */ FN_RET(0x00432b70); r_esp += 8; return;
}

void f_00432bd0(void) /* CrapsRoom::vfunc174 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432bd0);
    /* 00432bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00432bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432bd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00432bd5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432bd8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432bde: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x432be3u); f_00434310();
    /* 00432be3: mov esi, eax */ r_esi = r_eax;
    /* 00432be5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432be8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00432bea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432bed: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00432bf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x432bf5u); call_ind(t); }
    /* 00432bf5: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00432bf8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00432bf9: mov esp, ebp */ r_esp = r_ebp;
    /* 00432bfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432bfc: ret  */ FN_RET(0x00432bd0); r_esp += 4; return;
}

void f_00432c00(void) /* CrapsRoom::vfunc72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432c00);
    /* 00432c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00432c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432c07: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00432c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432c0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432c0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432c0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432c12: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00432c14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432c17: mov edx, dword ptr [eax + 0x128] */ r_edx = R32((u32)(r_eax+0x128u));
    /* 00432c1d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x432c1fu); call_ind(t); }
    /* 00432c1f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00432c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432c23: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432c27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432c2a: call 0x5d9f30 */ r_esp -= 4; W32(r_esp, 0x432c2fu); f_005d9f30();
    /* 00432c2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00432c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432c32: ret 8 */ FN_RET(0x00432c00); r_esp += 12; return;
}

void f_00432c40(void) /* CrapsRoom::vfunc73 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432c40);
    /* 00432c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00432c43: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432c46: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00432c49: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432c4f: call 0x4351b0 */ r_esp -= 4; W32(r_esp, 0x432c54u); f_004351b0();
    /* 00432c54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00432c56: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432c59: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00432c5c: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 00432c5f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432c65: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x432c6au); f_004347f0();
    /* 00432c6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432c6c: je 0x432cc3 */ if (fZ) goto L_00432cc3;
L_00432c6e:; BB(0x00432c6e);
    /* 00432c6e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432c74: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x432c79u); f_004347f0();
    /* 00432c79: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00432c7c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00432c7f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x432c84u); f_0063aac0();
    /* 00432c84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00432c86: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00432c89: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432c8d: je 0x432cab */ if (fZ) goto L_00432cab;
L_00432c8f:; BB(0x00432c8f);
    /* 00432c8f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00432c92: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x432c97u); f_0063aac0();
    /* 00432c97: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00432c99: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00432c9c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ca0: je 0x432cab */ if (fZ) goto L_00432cab;
L_00432ca2:; BB(0x00432ca2);
    /* 00432ca2: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00432ca9: jmp 0x432cb2 */ goto L_00432cb2;
L_00432cab:; BB(0x00432cab);
    /* 00432cab: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_00432cb2:; BB(0x00432cb2);
    /* 00432cb2: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 00432cb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432cb8: jne 0x432cc3 */ if (!fZ) goto L_00432cc3;
L_00432cba:; BB(0x00432cba);
    /* 00432cba: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00432cc1: jmp 0x432cca */ goto L_00432cca;
L_00432cc3:; BB(0x00432cc3);
    /* 00432cc3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00432cca:; BB(0x00432cca);
    /* 00432cca: mov dl, byte ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 00432ccd: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00432cd0: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432cd7: je 0x432cf4 */ if (fZ) goto L_00432cf4;
L_00432cd9:; BB(0x00432cd9);
    /* 00432cd9: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00432cdf: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x432ce4u); f_005f88f0();
    /* 00432ce4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00432ce7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ce9: jne 0x432cf4 */ if (!fZ) goto L_00432cf4;
L_00432ceb:; BB(0x00432ceb);
    /* 00432ceb: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00432cf2: jmp 0x432cfb */ goto L_00432cfb;
L_00432cf4:; BB(0x00432cf4);
    /* 00432cf4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00432cfb:; BB(0x00432cfb);
    /* 00432cfb: mov cl, byte ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 00432cfe: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 00432d01: movzx edx, byte ptr [ebp - 2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 00432d05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d07: jne 0x432d13 */ if (!fZ) goto L_00432d13;
L_00432d09:; BB(0x00432d09);
    /* 00432d09: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 00432d0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d0f: je 0x432d13 */ if (fZ) goto L_00432d13;
L_00432d11:; BB(0x00432d11);
    /* 00432d11: jmp 0x432d82 */ goto L_00432d82;
L_00432d13:; BB(0x00432d13);
    /* 00432d13: movzx ecx, byte ptr [ebp - 2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 00432d17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d19: jne 0x432d25 */ if (!fZ) goto L_00432d25;
L_00432d1b:; BB(0x00432d1b);
    /* 00432d1b: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00432d1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d21: je 0x432d25 */ if (fZ) goto L_00432d25;
L_00432d23:; BB(0x00432d23);
    /* 00432d23: jmp 0x432d82 */ goto L_00432d82;
L_00432d25:; BB(0x00432d25);
    /* 00432d25: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00432d28: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00432d2b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00432d2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432d2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00432d34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d37: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 00432d3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x432d3fu); call_ind(t); }
    /* 00432d3f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00432d42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d44: jne 0x432d82 */ if (!fZ) goto L_00432d82;
L_00432d46:; BB(0x00432d46);
    /* 00432d46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00432d49: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 00432d4d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00432d50: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00432d53: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00432d59: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00432d5c: mov dword ptr [edx + 0xae0], eax */ W32((u32)(r_edx+0xae0u), r_eax);
    /* 00432d62: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00432d65: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00432d68: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00432d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432d6c: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432d72: call 0x429f60 */ r_esp -= 4; W32(r_esp, 0x432d77u); f_00429f60();
    /* 00432d77: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432d7d: call 0x429ce0 */ r_esp -= 4; W32(r_esp, 0x432d82u); f_00429ce0();
L_00432d82:; BB(0x00432d82);
    /* 00432d82: mov esp, ebp */ r_esp = r_ebp;
    /* 00432d84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432d85: ret 8 */ FN_RET(0x00432c40); r_esp += 12; return;
}

void f_00432d90(void) /* CrapsRoom::vfunc74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432d90);
    /* 00432d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00432d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432d97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00432d9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432d9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432d9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432d9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00432da2: call 0x5d9f50 */ r_esp -= 4; W32(r_esp, 0x432da7u); f_005d9f50();
    /* 00432da7: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00432dad: cmp dword ptr [edx + 0xae0], -1 */ {  u32 a = R32((u32)(r_edx+0xae0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432db4: je 0x432de3 */ if (fZ) goto L_00432de3;
L_00432db6:; BB(0x00432db6);
    /* 00432db6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00432db9: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 00432dbd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432dc3: mov dword ptr [ecx + 0xae0], 0xffffffff */ W32((u32)(r_ecx+0xae0u), 0xffffffffu);
    /* 00432dcd: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432dd3: call 0x429fa0 */ r_esp -= 4; W32(r_esp, 0x432dd8u); f_00429fa0();
    /* 00432dd8: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432dde: call 0x429c30 */ r_esp -= 4; W32(r_esp, 0x432de3u); f_00429c30();
L_00432de3:; BB(0x00432de3);
    /* 00432de3: mov esp, ebp */ r_esp = r_ebp;
    /* 00432de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432de6: ret 8 */ FN_RET(0x00432d90); r_esp += 12; return;
}

void f_00432df0(void) /* CrapsRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432df0);
    /* 00432df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00432df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432df7: mov eax, 0x416 */ r_eax = 0x416u;
    /* 00432dfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00432dfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432dff: ret 4 */ FN_RET(0x00432df0); r_esp += 8; return;
}

void f_00432e10(void) /* CrapsRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432e10);
    /* 00432e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00432e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00432e17: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00432e1d: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x432e22u); f_00636e70();
    /* 00432e22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e24: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00432e29: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00432e2c: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x432e31u); f_005fc420();
    /* 00432e31: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00432e37: call 0x4299b0 */ r_esp -= 4; W32(r_esp, 0x432e3cu); f_004299b0();
    /* 00432e3c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00432e42: call 0x434620 */ r_esp -= 4; W32(r_esp, 0x432e47u); f_00434620();
    /* 00432e47: mov ecx, dword ptr [0x7906d8] */ r_ecx = R32((u32)(0x7906d8u));
    /* 00432e4d: call 0x42f230 */ r_esp -= 4; W32(r_esp, 0x432e52u); f_0042f230();
    /* 00432e52: mov esp, ebp */ r_esp = r_ebp;
    /* 00432e54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432e55: ret 8 */ FN_RET(0x00432e10); r_esp += 12; return;
}

void f_00432e60(void) /* CrapsRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00432e60);
    /* 00432e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00432e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432e65: push 0x69e763 */ { u32 v = 0x69e763u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00432e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e71: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432e74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00432e79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00432e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00432e7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00432e85: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00432e88: mov dword ptr [ebp - 0x2c], 0x6b7c00 */ W32((u32)(r_ebp+0xffffffd4u), 0x6b7c00u);
    /* 00432e8f: mov dword ptr [ebp - 0x28], 0x6b7be0 */ W32((u32)(r_ebp+0xffffffd8u), 0x6b7be0u);
    /* 00432e96: mov dword ptr [ebp - 0x24], 0x6b7bc0 */ W32((u32)(r_ebp+0xffffffdcu), 0x6b7bc0u);
    /* 00432e9d: mov dword ptr [ebp - 0x20], 0x6b7ba4 */ W32((u32)(r_ebp+0xffffffe0u), 0x6b7ba4u);
    /* 00432ea4: mov dword ptr [ebp - 0x1c], 0x6b7b84 */ W32((u32)(r_ebp+0xffffffe4u), 0x6b7b84u);
    /* 00432eab: mov dword ptr [ebp - 0x18], 0x6b7b64 */ W32((u32)(r_ebp+0xffffffe8u), 0x6b7b64u);
    /* 00432eb2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432eb4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00432eb6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432eb8: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00432eba: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ebc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ebe: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push 0x6b7b48 */ { u32 v = 0x6b7b48u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x432eccu); f_00630f40();
    /* 00432ecc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432ed0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ed2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ed4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00432ed7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x432edcu); f_005fa5b0();
    /* 00432edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432edd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432ee0: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x432ee5u); f_005ff5a0();
    /* 00432ee5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ee7: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ee9: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00432eeb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00432eed: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ef2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ef4: push 0x30dbd4 */ { u32 v = 0x30dbd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ef9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432efb: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00432efd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00432eff: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f04: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f08: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00432f0b: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x432f10u); f_005faee0();
    /* 00432f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f11: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432f14: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x432f19u); f_005ff5a0();
    /* 00432f19: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00432f20: jmp 0x432f2b */ goto L_00432f2b;
L_00432f22:; BB(0x00432f22);
    /* 00432f22: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432f28: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00432f2b:; BB(0x00432f2b);
    /* 00432f2b: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432f2f: jge 0x432f7d */ if ((fS==fO)) goto L_00432f7d;
L_00432f31:; BB(0x00432f31);
    /* 00432f31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f33: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f35: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432f37: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f39: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f3b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00432f3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f40: mov edx, dword ptr [ebp + ecx*4 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd4u));
    /* 00432f44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f45: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x432f4au); f_00630f40();
    /* 00432f4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432f4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f53: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00432f56: add eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432f59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f5a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f5c: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f61: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f64: add ecx, 0x33 */ {  u32 a = r_ecx; u32 b = 0x33u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00432f67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f6a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00432f6d: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x432f72u); f_005f9ef0();
    /* 00432f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432f76: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x432f7bu); f_005ff5a0();
    /* 00432f7b: jmp 0x432f22 */ goto L_00432f22;
L_00432f7d:; BB(0x00432f7d);
    /* 00432f7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f7f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432f89: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f93: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432f95: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f97: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f99: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f9e: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00432fa3: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00432fa5: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432faa: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00432fac: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432fb1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x432fb6u); f_00630f40();
    /* 00432fb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432fba: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00432fbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432fbe: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00432fc1: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x432fc6u); f_005fa790();
    /* 00432fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432fc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00432fca: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x432fcfu); f_005ff5a0();
    /* 00432fcf: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432fd4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x432fd9u); f_00686d82();
    /* 00432fd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432fdc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00432fdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00432fe6: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fea: je 0x433005 */ if (fZ) goto L_00433005;
L_00432fec:; BB(0x00432fec);
    /* 00432fec: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00432fef: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x432ff4u); f_005ec5a0();
    /* 00432ff4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00432ff7: mov dword ptr [edx], 0x6b7a84 */ W32((u32)(r_edx), 0x6b7a84u);
    /* 00432ffd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00433000: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433003: jmp 0x43300c */ goto L_0043300c;
L_00433005:; BB(0x00433005);
    /* 00433005: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0043300c:; BB(0x0043300c);
    /* 0043300c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0043300f: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00433012: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00433019: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043301b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043301d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043301f: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00433024: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 00433029: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043302b: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 00433030: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00433032: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00433037: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00433039: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043303c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043303d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00433040: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x433045u); f_005fa5b0();
    /* 00433045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433046: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433049: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x43304eu); f_005ff5a0();
    /* 0043304e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00433050: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00433056: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x43305bu); f_006375d0();
    /* 0043305b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043305e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00433061: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x433066u); f_005da830();
    /* 00433066: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00433069: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043306b: je 0x433076 */ if (fZ) goto L_00433076;
L_0043306d:; BB(0x0043306d);
    /* 0043306d: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00433074: jmp 0x43307f */ goto L_0043307f;
L_00433076:; BB(0x00433076);
    /* 00433076: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00433079: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0043307c: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
L_0043307f:; BB(0x0043307f);
    /* 0043307f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433081: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00433084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433085: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00433087: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0043308d: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x433092u); f_005fb5e0();
    /* 00433092: mov ecx, eax */ r_ecx = r_eax;
    /* 00433094: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x433099u); f_00605ef0();
    /* 00433099: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043309c: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 004330a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004330a2: je 0x4330c4 */ if (fZ) goto L_004330c4;
L_004330a4:; BB(0x004330a4);
    /* 004330a4: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004330a6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004330ac: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4330b1u); f_005fb350();
    /* 004330b1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004330b4: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004330b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004330b9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004330bc: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004330c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4330c4u); call_ind(t); }
L_004330c4:; BB(0x004330c4);
    /* 004330c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004330c7: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 004330cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004330cd: je 0x4330ef */ if (fZ) goto L_004330ef;
L_004330cf:; BB(0x004330cf);
    /* 004330cf: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004330d1: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004330d7: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4330dcu); f_005fb350();
    /* 004330dc: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004330df: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004330e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004330e4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004330e7: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004330ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4330efu); call_ind(t); }
L_004330ef:; BB(0x004330ef);
    /* 004330ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004330f2: movzx edx, byte ptr [ecx + 3] */ r_edx = (u32)R8((u32)(r_ecx+0x3u));
    /* 004330f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004330f8: je 0x43311a */ if (fZ) goto L_0043311a;
L_004330fa:; BB(0x004330fa);
    /* 004330fa: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 004330fc: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00433102: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433107u); f_005fb350();
    /* 00433107: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0043310a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043310d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043310f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00433112: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00433118: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43311au); call_ind(t); }
L_0043311a:; BB(0x0043311a);
    /* 0043311a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043311d: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00433121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433123: je 0x433145 */ if (fZ) goto L_00433145;
L_00433125:; BB(0x00433125);
    /* 00433125: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00433127: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0043312d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433132u); f_005fb350();
    /* 00433132: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00433135: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00433138: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043313a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043313d: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00433143: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433145u); call_ind(t); }
L_00433145:; BB(0x00433145);
    /* 00433145: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00433148: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 0043314c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043314e: je 0x433170 */ if (fZ) goto L_00433170;
L_00433150:; BB(0x00433150);
    /* 00433150: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00433152: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00433158: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x43315du); f_005fb350();
    /* 0043315d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00433160: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00433163: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00433165: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00433168: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0043316e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433170u); call_ind(t); }
L_00433170:; BB(0x00433170);
    /* 00433170: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00433176: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x43317bu); f_00434410();
    /* 0043317b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043317e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433180: je 0x4331a2 */ if (fZ) goto L_004331a2;
L_00433182:; BB(0x00433182);
    /* 00433182: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00433184: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0043318a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x43318fu); f_005fb350();
    /* 0043318f: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00433192: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00433195: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00433197: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0043319a: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 004331a0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4331a2u); call_ind(t); }
L_004331a2:; BB(0x004331a2);
    /* 004331a2: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331a9: je 0x4331f9 */ if (fZ) goto L_004331f9;
L_004331ab:; BB(0x004331ab);
    /* 004331ab: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 004331b1: call 0x5cdd60 */ r_esp -= 4; W32(r_esp, 0x4331b6u); f_005cdd60();
    /* 004331b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004331b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331bb: je 0x4331dc */ if (fZ) goto L_004331dc;
L_004331bd:; BB(0x004331bd);
    /* 004331bd: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004331c2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4331c7u); f_005fb350();
    /* 004331c7: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004331ca: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004331cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004331cf: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004331d2: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004331d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4331dau); call_ind(t); }
    /* 004331da: jmp 0x4331f9 */ goto L_004331f9;
L_004331dc:; BB(0x004331dc);
    /* 004331dc: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 004331de: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004331e1: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4331e6u); f_005fb350();
    /* 004331e6: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004331e9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004331ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004331ee: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004331f1: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004331f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4331f9u); call_ind(t); }
L_004331f9:; BB(0x004331f9);
    /* 004331f9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004331fc: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x433201u); f_005da830();
    /* 00433201: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00433204: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433206: je 0x433248 */ if (fZ) goto L_00433248;
L_00433208:; BB(0x00433208);
    /* 00433208: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0043320a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00433210: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x433215u); f_005fb5e0();
    /* 00433215: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00433218: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0043321b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043321d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00433220: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00433226: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x433228u); call_ind(t); }
    /* 00433228: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0043322a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00433230: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433235u); f_005fb350();
    /* 00433235: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00433238: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0043323b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043323d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00433240: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00433246: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433248u); call_ind(t); }
L_00433248:; BB(0x00433248);
    /* 00433248: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043324b: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 0043324f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433252: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00433259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043325a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043325c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043325d: ret 0x10 */ FN_RET(0x00432e60); r_esp += 20; return;
}

void f_00433260(void) /* CrapsRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433260);
    /* 00433260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433261: mov ebp, esp */ r_ebp = r_esp;
    /* 00433263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433267: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00433269: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0043326f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433274u); f_005fb350();
    /* 00433274: mov ecx, eax */ r_ecx = r_eax;
    /* 00433276: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x43327bu); f_00600230();
    /* 0043327b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043327c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00433282: call 0x4342f0 */ r_esp -= 4; W32(r_esp, 0x433287u); f_004342f0();
    /* 00433287: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00433289: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0043328f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433294u); f_005fb350();
    /* 00433294: mov ecx, eax */ r_ecx = r_eax;
    /* 00433296: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x43329bu); f_00600230();
    /* 0043329b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043329c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004332a2: call 0x4343b0 */ r_esp -= 4; W32(r_esp, 0x4332a7u); f_004343b0();
    /* 004332a7: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 004332a9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004332af: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4332b4u); f_005fb350();
    /* 004332b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004332b6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x4332bbu); f_00600230();
    /* 004332bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004332bc: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004332c2: call 0x434260 */ r_esp -= 4; W32(r_esp, 0x4332c7u); f_00434260();
    /* 004332c7: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004332c9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004332cf: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4332d4u); f_005fb350();
    /* 004332d4: mov ecx, eax */ r_ecx = r_eax;
    /* 004332d6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x4332dbu); f_00600230();
    /* 004332db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004332dc: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004332e2: call 0x4343f0 */ r_esp -= 4; W32(r_esp, 0x4332e7u); f_004343f0();
    /* 004332e7: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 004332e9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004332ef: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4332f4u); f_005fb350();
    /* 004332f4: mov ecx, eax */ r_ecx = r_eax;
    /* 004332f6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x4332fbu); f_00600230();
    /* 004332fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004332fc: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00433302: call 0x4342a0 */ r_esp -= 4; W32(r_esp, 0x433307u); f_004342a0();
    /* 00433307: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043330e: je 0x433335 */ if (fZ) goto L_00433335;
L_00433310:; BB(0x00433310);
    /* 00433310: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00433312: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433315: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x43331au); f_005fb350();
    /* 0043331a: mov ecx, eax */ r_ecx = r_eax;
    /* 0043331c: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x433321u); f_00600230();
    /* 00433321: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00433324: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433326: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00433329: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043332a: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00433330: call 0x5cdd10 */ r_esp -= 4; W32(r_esp, 0x433335u); f_005cdd10();
L_00433335:; BB(0x00433335);
    /* 00433335: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433338: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x43333du); f_005da7b0();
    /* 0043333d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00433340: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433342: je 0x433354 */ if (fZ) goto L_00433354;
L_00433344:; BB(0x00433344);
    /* 00433344: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0043334a: call 0x4299b0 */ r_esp -= 4; W32(r_esp, 0x43334fu); f_004299b0();
    /* 0043334f: jmp 0x4333dd */ goto L_004333dd;
L_00433354:; BB(0x00433354);
    /* 00433354: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00433356: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0043335c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x433361u); f_005fb5e0();
    /* 00433361: mov ecx, eax */ r_ecx = r_eax;
    /* 00433363: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x433368u); f_00605f40();
    /* 00433368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433369: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043336f: call 0x434370 */ r_esp -= 4; W32(r_esp, 0x433374u); f_00434370();
    /* 00433374: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00433376: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0043337c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433381u); f_005fb350();
    /* 00433381: mov ecx, eax */ r_ecx = r_eax;
    /* 00433383: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x433388u); f_00600230();
    /* 00433388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433389: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043338f: call 0x434440 */ r_esp -= 4; W32(r_esp, 0x433394u); f_00434440();
    /* 00433394: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043339a: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x43339fu); f_00637610();
    /* 0043339f: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 004333a5: call 0x4299b0 */ r_esp -= 4; W32(r_esp, 0x4333aau); f_004299b0();
    /* 004333aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004333ad: movzx ecx, byte ptr [eax + 0x7c] */ r_ecx = (u32)R8((u32)(r_eax+0x7cu));
    /* 004333b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004333b3: je 0x4333dd */ if (fZ) goto L_004333dd;
L_004333b5:; BB(0x004333b5);
    /* 004333b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004333b8: mov byte ptr [edx + 0x7c], 0 */ W8((u32)(r_edx+0x7cu), 0x0u);
    /* 004333bc: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 004333c2: call 0x4299b0 */ r_esp -= 4; W32(r_esp, 0x4333c7u); f_004299b0();
    /* 004333c7: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004333cd: call 0x434620 */ r_esp -= 4; W32(r_esp, 0x4333d2u); f_00434620();
    /* 004333d2: mov ecx, dword ptr [0x7906d8] */ r_ecx = R32((u32)(0x7906d8u));
    /* 004333d8: call 0x42f230 */ r_esp -= 4; W32(r_esp, 0x4333ddu); f_0042f230();
L_004333dd:; BB(0x004333dd);
    /* 004333dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004333df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004333e0: ret 8 */ FN_RET(0x00433260); r_esp += 12; return;
}

void f_004333f0(void) /* CrapsRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004333f0);
    /* 004333f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004333f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004333f3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004333f6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004333f9: mov dword ptr [ebp - 0x28], 0x3d */ W32((u32)(r_ebp+0xffffffd8u), 0x3du);
    /* 00433400: mov dword ptr [ebp - 0x24], 0x11e */ W32((u32)(r_ebp+0xffffffdcu), 0x11eu);
    /* 00433407: mov dword ptr [ebp - 0x20], 0xe3 */ W32((u32)(r_ebp+0xffffffe0u), 0xe3u);
    /* 0043340e: mov dword ptr [ebp - 0x1c], 0x11e */ W32((u32)(r_ebp+0xffffffe4u), 0x11eu);
    /* 00433415: mov dword ptr [ebp - 0x18], 0x173 */ W32((u32)(r_ebp+0xffffffe8u), 0x173u);
    /* 0043341c: mov dword ptr [ebp - 0x14], 0xbf */ W32((u32)(r_ebp+0xffffffecu), 0xbfu);
    /* 00433423: mov dword ptr [ebp - 0x10], 0x173 */ W32((u32)(r_ebp+0xfffffff0u), 0x173u);
    /* 0043342a: mov dword ptr [ebp - 0xc], 0x20 */ W32((u32)(r_ebp+0xfffffff4u), 0x20u);
    /* 00433431: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00433438: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043343f: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433443: jge 0x43345d */ if ((fS==fO)) goto L_0043345d;
L_00433445:; BB(0x00433445);
    /* 00433445: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00433448: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0043344c: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00433450: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00433453: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00433455: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00433458: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043345b: jmp 0x433489 */ goto L_00433489;
L_0043345d:; BB(0x0043345d);
    /* 0043345d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0043345f: jne 0x433478 */ if (!fZ) goto L_00433478;
L_00433461:; BB(0x00433461);
    /* 00433461: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 00433466: push 0x6b7a64 */ { u32 v = 0x6b7a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043346b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00433470: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x433475u); f_005e9f20();
    /* 00433475: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00433478:; BB(0x00433478);
    /* 00433478: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043347b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043347e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00433480: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433483: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00433486: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00433489:; BB(0x00433489);
    /* 00433489: mov esp, ebp */ r_esp = r_ebp;
    /* 0043348b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043348c: ret 8 */ FN_RET(0x004333f0); r_esp += 12; return;
}

void f_00527130(void) /* CrapsRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527130);
    /* 00527130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527131: mov ebp, esp */ r_ebp = r_esp;
    /* 00527133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527137: mov eax, 0x30d402 */ r_eax = 0x30d402u;
    /* 0052713c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052713e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052713f: ret  */ FN_RET(0x00527130); r_esp += 4; return;
}

