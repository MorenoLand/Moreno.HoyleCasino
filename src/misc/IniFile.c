#include "protos.h"

void f_00689ee0(void) /* IniFile::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689ee0);
    /* 00689ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00689ee3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00689ee5: push 0x6adf08 */ { u32 v = 0x6adf08u; r_esp -= 4; W32(r_esp, v); }
    /* 00689eea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00689ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689ef1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689ef4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00689ef9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00689efb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689efc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00689eff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00689f05: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00689f08: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00689f0b: call 0x6077f0 */ r_esp -= 4; W32(r_esp, 0x689f10u); f_006077f0();
    /* 00689f10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00689f17: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00689f1a: mov dword ptr [eax], 0x6e5618 */ W32((u32)(r_eax), 0x6e5618u);
    /* 00689f20: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00689f23: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f29: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00689f2c: lea edx, [ebp - 0x2b] */ r_edx = (u32)(r_ebp+0xffffffd5u);
    /* 00689f2f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00689f32: lea eax, [ebp - 0x2a] */ r_eax = (u32)(r_ebp+0xffffffd6u);
    /* 00689f35: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00689f38: lea ecx, [ebp - 0x29] */ r_ecx = (u32)(r_ebp+0xffffffd7u);
    /* 00689f3b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00689f3e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00689f41: call 0x68d000 */ r_esp -= 4; W32(r_esp, 0x689f46u); f_0068d000();
    /* 00689f46: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00689f49: mov dword ptr [edx + 0x208], 0 */ W32((u32)(r_edx+0x208u), 0x0u);
    /* 00689f53: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00689f56: mov byte ptr [eax + 0x20c], 0 */ W8((u32)(r_eax+0x20cu), 0x0u);
    /* 00689f5d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00689f64: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00689f67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689f6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00689f71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689f72: mov esp, ebp */ r_esp = r_ebp;
    /* 00689f74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689f75: ret  */ FN_RET(0x00689ee0); r_esp += 4; return;
}

void f_00689f80(void) /* IniFile::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689f80);
    /* 00689f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00689f83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00689f85: push 0x6adf3f */ { u32 v = 0x6adf3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00689f8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00689f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689f91: sub esp, 0x53c */ {  u32 a = r_esp; u32 b = 0x53cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689f97: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00689f9c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00689f9e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00689fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689fa2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00689fa5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00689fab: mov dword ptr [ebp - 0x548], ecx */ W32((u32)(r_ebp+0xfffffab8u), r_ecx);
    /* 00689fb1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00689fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689fb5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00689fb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689fb9: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 00689fbf: call 0x607820 */ r_esp -= 4; W32(r_esp, 0x689fc4u); f_00607820();
    /* 00689fc4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00689fcb: mov edx, dword ptr [ebp - 0x548] */ r_edx = R32((u32)(r_ebp+0xfffffab8u));
    /* 00689fd1: mov dword ptr [edx], 0x6e5618 */ W32((u32)(r_edx), 0x6e5618u);
    /* 00689fd7: mov eax, dword ptr [ebp - 0x548] */ r_eax = R32((u32)(r_ebp+0xfffffab8u));
    /* 00689fdd: add eax, 0x210 */ {  u32 a = r_eax; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689fe2: mov dword ptr [ebp - 0x544], eax */ W32((u32)(r_ebp+0xfffffabcu), r_eax);
    /* 00689fe8: lea ecx, [ebp - 0x53b] */ r_ecx = (u32)(r_ebp+0xfffffac5u);
    /* 00689fee: mov dword ptr [ebp - 0x528], ecx */ W32((u32)(r_ebp+0xfffffad8u), r_ecx);
    /* 00689ff4: lea edx, [ebp - 0x53a] */ r_edx = (u32)(r_ebp+0xfffffac6u);
    /* 00689ffa: mov dword ptr [ebp - 0x530], edx */ W32((u32)(r_ebp+0xfffffad0u), r_edx);
    /* 0068a000: lea eax, [ebp - 0x539] */ r_eax = (u32)(r_ebp+0xfffffac7u);
    /* 0068a006: mov dword ptr [ebp - 0x538], eax */ W32((u32)(r_ebp+0xfffffac8u), r_eax);
    /* 0068a00c: mov ecx, dword ptr [ebp - 0x544] */ r_ecx = R32((u32)(r_ebp+0xfffffabcu));
    /* 0068a012: call 0x68d000 */ r_esp -= 4; W32(r_esp, 0x68a017u); f_0068d000();
    /* 0068a017: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068a01b: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 0068a021: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a024: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a025: lea edx, [ebp - 0x51c] */ r_edx = (u32)(r_ebp+0xfffffae4u);
    /* 0068a02b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a02c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x68a031u); f_00686d8e();
    /* 0068a031: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a034: lea eax, [ebp - 0x51c] */ r_eax = (u32)(r_ebp+0xfffffae4u);
    /* 0068a03a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a03b: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x68a040u); f_005ea5b0();
    /* 0068a040: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a043: mov byte ptr [ebp - 0x414], 0 */ W8((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 0068a04a: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a04f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a051: lea ecx, [ebp - 0x413] */ r_ecx = (u32)(r_ebp+0xfffffbedu);
    /* 0068a057: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a058: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68a05du); f_00686fa2();
    /* 0068a05d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a060: lea edx, [ebp - 0x51c] */ r_edx = (u32)(r_ebp+0xfffffae4u);
    /* 0068a066: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a067: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 0068a06d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a06e: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x68a073u); f_00686ec6();
    /* 0068a073: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a076: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a07b: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 0068a081: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a082: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x68a087u); f_005ea9c0();
    /* 0068a087: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a08a: mov edx, dword ptr [ebp - 0x548] */ r_edx = R32((u32)(r_ebp+0xfffffab8u));
    /* 0068a090: mov dword ptr [edx + 0x208], eax */ W32((u32)(r_edx+0x208u), r_eax);
    /* 0068a096: mov eax, dword ptr [ebp - 0x548] */ r_eax = R32((u32)(r_ebp+0xfffffab8u));
    /* 0068a09c: mov byte ptr [eax + 0x20c], 0 */ W8((u32)(r_eax+0x20cu), 0x0u);
    /* 0068a0a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068a0aa: mov eax, dword ptr [ebp - 0x548] */ r_eax = R32((u32)(r_ebp+0xfffffab8u));
    /* 0068a0b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068a0b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068a0ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a0bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068a0be: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a0c0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68a0c5u); f_00686d72();
    /* 0068a0c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0068a0c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a0c8: ret 8 */ FN_RET(0x00689f80); r_esp += 12; return;
}

void f_0068a0d0(void) /* IniFile::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068a0d0);
    /* 0068a0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068a0d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a0d5: push 0x6adf6f */ { u32 v = 0x6adf6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a0da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068a0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a0e1: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068a0e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068a0e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a0eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a0ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068a0ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068a0f5: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0068a0f8: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068a0fb: mov dword ptr [eax], 0x6e5618 */ W32((u32)(r_eax), 0x6e5618u);
    /* 0068a101: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068a108: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068a10b: cmp dword ptr [ecx + 0x208], 0 */ {  u32 a = R32((u32)(r_ecx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a112: je 0x68a127 */ if (fZ) goto L_0068a127;
L_0068a114:; BB(0x0068a114);
    /* 0068a114: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068a117: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0068a11d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a11e: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x68a124u); call_ind(t); }
    /* 0068a124: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068a127:; BB(0x0068a127);
    /* 0068a127: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068a12a: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a130: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0068a133: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0068a136: call 0x68c410 */ r_esp -= 4; W32(r_esp, 0x68a13bu); f_0068c410();
    /* 0068a13b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068a142: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068a145: call 0x607870 */ r_esp -= 4; W32(r_esp, 0x68a14au); f_00607870();
    /* 0068a14a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068a14d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068a154: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a155: mov esp, ebp */ r_esp = r_ebp;
    /* 0068a157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a158: ret  */ FN_RET(0x0068a0d0); r_esp += 4; return;
}

void f_0068a160(void) /* IniFile::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068a160);
    /* 0068a160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a161: mov ebp, esp */ r_ebp = r_esp;
    /* 0068a163: sub esp, 0x514 */ {  u32 a = r_esp; u32 b = 0x514u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068a169: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068a16e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a170: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068a173: mov dword ptr [ebp - 0x514], ecx */ W32((u32)(r_ebp+0xfffffaecu), r_ecx);
    /* 0068a179: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068a17c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a17d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068a180: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a181: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a187: call 0x607890 */ r_esp -= 4; W32(r_esp, 0x68a18cu); f_00607890();
    /* 0068a18c: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a192: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a199: je 0x68a1c1 */ if (fZ) goto L_0068a1c1;
L_0068a19b:; BB(0x0068a19b);
    /* 0068a19b: mov eax, dword ptr [ebp - 0x514] */ r_eax = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a1a1: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068a1a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1a8: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x68a1aeu); call_ind(t); }
    /* 0068a1ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a1b1: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a1b7: mov dword ptr [edx + 0x208], 0 */ W32((u32)(r_edx+0x208u), 0x0u);
L_0068a1c1:; BB(0x0068a1c1);
    /* 0068a1c1: mov eax, dword ptr [ebp - 0x514] */ r_eax = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a1c7: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068a1ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1cb: lea ecx, [ebp - 0x510] */ r_ecx = (u32)(r_ebp+0xfffffaf0u);
    /* 0068a1d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1d2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x68a1d7u); f_00686d8e();
    /* 0068a1d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a1da: lea edx, [ebp - 0x510] */ r_edx = (u32)(r_ebp+0xfffffaf0u);
    /* 0068a1e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1e1: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x68a1e6u); f_005ea5b0();
    /* 0068a1e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a1e9: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0068a1f0: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1f7: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 0068a1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a1fe: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68a203u); f_00686fa2();
    /* 0068a203: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a206: lea ecx, [ebp - 0x510] */ r_ecx = (u32)(r_ebp+0xfffffaf0u);
    /* 0068a20c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a20d: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a213: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a214: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x68a219u); f_00686ec6();
    /* 0068a219: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a21c: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a221: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a228: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x68a22du); f_005ea9c0();
    /* 0068a22d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a230: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a236: mov dword ptr [ecx + 0x208], eax */ W32((u32)(r_ecx+0x208u), r_eax);
    /* 0068a23c: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a242: mov byte ptr [edx + 0x20c], 0 */ W8((u32)(r_edx+0x20cu), 0x0u);
    /* 0068a249: mov eax, dword ptr [ebp - 0x514] */ r_eax = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a24f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a251: cmp dword ptr [eax + 0x208], 0 */ {  u32 a = R32((u32)(r_eax+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a258: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0068a25b: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0068a25d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a260: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a262: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68a267u); f_00686d72();
    /* 0068a267: mov esp, ebp */ r_esp = r_ebp;
    /* 0068a269: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a26a: ret 8 */ FN_RET(0x0068a160); r_esp += 12; return;
}

void f_0068a270(void) /* IniFile::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068a270);
    /* 0068a270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a271: mov ebp, esp */ r_ebp = r_esp;
    /* 0068a273: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068a276: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068a279: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a27c: movsx ecx, byte ptr [eax + 0x107] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x107u));
    /* 0068a283: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a285: je 0x68a2a3 */ if (fZ) goto L_0068a2a3;
L_0068a287:; BB(0x0068a287);
    /* 0068a287: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a28b: je 0x68a2a3 */ if (fZ) goto L_0068a2a3;
L_0068a28d:; BB(0x0068a28d);
    /* 0068a28d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068a290: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068a293: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a295: je 0x68a2a3 */ if (fZ) goto L_0068a2a3;
L_0068a297:; BB(0x0068a297);
    /* 0068a297: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a29b: je 0x68a2a3 */ if (fZ) goto L_0068a2a3;
L_0068a29d:; BB(0x0068a29d);
    /* 0068a29d: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a2a1: jne 0x68a2a8 */ if (!fZ) goto L_0068a2a8;
L_0068a2a3:; BB(0x0068a2a3);
    /* 0068a2a3: jmp 0x68a34d */ goto L_0068a34d;
L_0068a2a8:; BB(0x0068a2a8);
    /* 0068a2a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a2ab: cmp dword ptr [ecx + 0x208], 0 */ {  u32 a = R32((u32)(r_ecx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a2b2: je 0x68a2ea */ if (fZ) goto L_0068a2ea;
L_0068a2b4:; BB(0x0068a2b4);
    /* 0068a2b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a2b9: add edx, 0x107 */ {  u32 a = r_edx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068a2bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a2c3: call 0x68a710 */ r_esp -= 4; W32(r_esp, 0x68a2c8u); f_0068a710();
    /* 0068a2c8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068a2cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a2cd: je 0x68a2ea */ if (fZ) goto L_0068a2ea;
L_0068a2cf:; BB(0x0068a2cf);
    /* 0068a2cf: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068a2d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2d3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068a2d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068a2da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a2de: call 0x68a940 */ r_esp -= 4; W32(r_esp, 0x68a2e3u); f_0068a940();
    /* 0068a2e3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068a2e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a2e8: jne 0x68a34d */ if (!fZ) goto L_0068a34d;
L_0068a2ea:; BB(0x0068a2ea);
    /* 0068a2ea: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a2ee: je 0x68a347 */ if (fZ) goto L_0068a347;
L_0068a2f0:; BB(0x0068a2f0);
    /* 0068a2f0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068a2f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a2f4: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68a2f9u); f_00686ecc();
    /* 0068a2f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a2fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068a2ff: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068a302: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a305: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068a307: jae 0x68a31d */ if (!fC) goto L_0068a31d;
L_0068a309:; BB(0x0068a309);
    /* 0068a309: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068a30c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a30d: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68a312u); f_00686ecc();
    /* 0068a312: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a315: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068a318: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068a31b: jmp 0x68a326 */ goto L_0068a326;
L_0068a31d:; BB(0x0068a31d);
    /* 0068a31d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068a320: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068a323: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0068a326:; BB(0x0068a326);
    /* 0068a326: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068a329: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a32a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068a32d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a32e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068a331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a332: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x68a338u); call_ind(t); }
    /* 0068a338: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a33b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068a33e: add ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a341: mov byte ptr [ecx - 1], 0 */ W8((u32)(r_ecx+0xffffffffu), 0x0u);
    /* 0068a345: jmp 0x68a34d */ goto L_0068a34d;
L_0068a347:; BB(0x0068a347);
    /* 0068a347: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068a34a: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
L_0068a34d:; BB(0x0068a34d);
    /* 0068a34d: mov esp, ebp */ r_esp = r_ebp;
    /* 0068a34f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a350: ret 0x10 */ FN_RET(0x0068a270); r_esp += 20; return;
}

void f_0068a360(void) /* IniFile::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068a360);
    /* 0068a360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a361: mov ebp, esp */ r_ebp = r_esp;
    /* 0068a363: sub esp, 0x72c */ {  u32 a = r_esp; u32 b = 0x72cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068a369: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068a36e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a370: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068a373: mov dword ptr [ebp - 0x72c], ecx */ W32((u32)(r_ebp+0xfffff8d4u), r_ecx);
    /* 0068a379: mov dword ptr [ebp - 0x514], 0 */ W32((u32)(r_ebp+0xfffffaecu), 0x0u);
    /* 0068a383: mov eax, dword ptr [ebp - 0x72c] */ r_eax = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a389: movsx ecx, byte ptr [eax + 0x107] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x107u));
    /* 0068a390: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a392: je 0x68a3aa */ if (fZ) goto L_0068a3aa;
L_0068a394:; BB(0x0068a394);
    /* 0068a394: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a398: je 0x68a3aa */ if (fZ) goto L_0068a3aa;
L_0068a39a:; BB(0x0068a39a);
    /* 0068a39a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068a39d: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068a3a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a3a2: je 0x68a3aa */ if (fZ) goto L_0068a3aa;
L_0068a3a4:; BB(0x0068a3a4);
    /* 0068a3a4: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a3a8: jne 0x68a3af */ if (!fZ) goto L_0068a3af;
L_0068a3aa:; BB(0x0068a3aa);
    /* 0068a3aa: jmp 0x68a6f7 */ goto L_0068a6f7;
L_0068a3af:; BB(0x0068a3af);
    /* 0068a3af: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a3b5: movzx edx, byte ptr [ecx + 0x20c] */ r_edx = (u32)R8((u32)(r_ecx+0x20cu));
    /* 0068a3bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a3be: je 0x68a3d8 */ if (fZ) goto L_0068a3d8;
L_0068a3c0:; BB(0x0068a3c0);
    /* 0068a3c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068a3c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068a3c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3c8: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a3ce: call 0x68b050 */ r_esp -= 4; W32(r_esp, 0x68a3d3u); f_0068b050();
    /* 0068a3d3: jmp 0x68a6f7 */ goto L_0068a6f7;
L_0068a3d8:; BB(0x0068a3d8);
    /* 0068a3d8: mov edx, dword ptr [ebp - 0x72c] */ r_edx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a3de: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068a3e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3e2: lea eax, [ebp - 0x510] */ r_eax = (u32)(r_ebp+0xfffffaf0u);
    /* 0068a3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3e9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x68a3eeu); f_00686d8e();
    /* 0068a3ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a3f1: lea ecx, [ebp - 0x510] */ r_ecx = (u32)(r_ebp+0xfffffaf0u);
    /* 0068a3f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a3f8: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x68a3fdu); f_005ea5b0();
    /* 0068a3fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a400: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0068a407: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a40c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a40e: lea edx, [ebp - 0x407] */ r_edx = (u32)(r_ebp+0xfffffbf9u);
    /* 0068a414: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a415: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68a41au); f_00686fa2();
    /* 0068a41a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a41d: lea eax, [ebp - 0x510] */ r_eax = (u32)(r_ebp+0xfffffaf0u);
    /* 0068a423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a424: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a42a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a42b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x68a430u); f_00686ec6();
    /* 0068a430: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a433: mov edx, dword ptr [ebp - 0x72c] */ r_edx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a439: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a440: jne 0x68a4c0 */ if (!fZ) goto L_0068a4c0;
L_0068a442:; BB(0x0068a442);
    /* 0068a442: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a447: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a44d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a44e: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x68a453u); f_005ea9c0();
    /* 0068a453: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a456: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a45c: mov dword ptr [ecx + 0x208], eax */ W32((u32)(r_ecx+0x208u), r_eax);
    /* 0068a462: mov edx, dword ptr [ebp - 0x72c] */ r_edx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a468: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a46f: jne 0x68a476 */ if (!fZ) goto L_0068a476;
L_0068a471:; BB(0x0068a471);
    /* 0068a471: jmp 0x68a6f7 */ goto L_0068a6f7;
L_0068a476:; BB(0x0068a476);
    /* 0068a476: mov eax, dword ptr [ebp - 0x72c] */ r_eax = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a47c: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068a482: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a483: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x68a489u); call_ind(t); }
    /* 0068a489: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a48c: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a491: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a498: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x68a49du); f_005ea9c0();
    /* 0068a49d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a4a0: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a4a6: mov dword ptr [ecx + 0x208], eax */ W32((u32)(r_ecx+0x208u), r_eax);
    /* 0068a4ac: mov edx, dword ptr [ebp - 0x72c] */ r_edx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a4b2: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a4b9: jne 0x68a4c0 */ if (!fZ) goto L_0068a4c0;
L_0068a4bb:; BB(0x0068a4bb);
    /* 0068a4bb: jmp 0x68a6f7 */ goto L_0068a6f7;
L_0068a4c0:; BB(0x0068a4c0);
    /* 0068a4c0: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a4c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4c7: lea ecx, [ebp - 0x620] */ r_ecx = (u32)(r_ebp+0xfffff9e0u);
    /* 0068a4cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4ce: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x68a4d3u); f_00686d8e();
    /* 0068a4d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a4d6: push 0x6e5638 */ { u32 v = 0x6e5638u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4db: lea edx, [ebp - 0x620] */ r_edx = (u32)(r_ebp+0xfffff9e0u);
    /* 0068a4e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4e2: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x68a4e7u); f_00686ec6();
    /* 0068a4e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a4ea: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4ef: lea eax, [ebp - 0x620] */ r_eax = (u32)(r_ebp+0xfffff9e0u);
    /* 0068a4f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a4f6: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x68a4fbu); f_005ea9c0();
    /* 0068a4fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a4fe: mov dword ptr [ebp - 0x514], eax */ W32((u32)(r_ebp+0xfffffaecu), r_eax);
    /* 0068a504: cmp dword ptr [ebp - 0x514], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffaecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a50b: jne 0x68a517 */ if (!fZ) goto L_0068a517;
L_0068a50d:; BB(0x0068a50d);
    /* 0068a50d: jmp 0x68a6ce */ goto L_0068a6ce;
L_0068a517:; BB(0x0068a517);
    /* 0068a517: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a51d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a51e: mov edx, dword ptr [ebp - 0x72c] */ r_edx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a524: add edx, 0x107 */ {  u32 a = r_edx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068a52a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a52b: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a531: call 0x68a710 */ r_esp -= 4; W32(r_esp, 0x68a536u); f_0068a710();
    /* 0068a536: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068a539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a53b: jne 0x68a5cc */ if (!fZ) goto L_0068a5cc;
L_0068a541:; BB(0x0068a541);
    /* 0068a541: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a547: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a548: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a54a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a54c: push 0x6e5634 */ { u32 v = 0x6e5634u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a551: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68a557u); call_ind(t); }
    /* 0068a557: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a55a: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a561: mov eax, dword ptr [ebp - 0x72c] */ r_eax = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a567: add eax, 0x107 */ {  u32 a = r_eax; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068a56c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a56d: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68a572u); f_00686ecc();
    /* 0068a572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a576: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a578: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a57e: add ecx, 0x107 */ {  u32 a = r_ecx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a584: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a585: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68a58bu); call_ind(t); }
    /* 0068a58b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a58e: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a594: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a595: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a597: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a599: push 0x6e5630 */ { u32 v = 0x6e5630u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a59e: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68a5a4u); call_ind(t); }
    /* 0068a5a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a5a7: mov eax, dword ptr [ebp - 0x514] */ r_eax = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a5ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5ae: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5b3: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68a5b8u); f_00686ecc();
    /* 0068a5b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5be: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5c3: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68a5c9u); call_ind(t); }
    /* 0068a5c9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068a5cc:; BB(0x0068a5cc);
    /* 0068a5cc: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a5d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5d3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068a5d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068a5da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a5db: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a5e1: call 0x68ac10 */ r_esp -= 4; W32(r_esp, 0x68a5e6u); f_0068ac10();
    /* 0068a5e6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068a5e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a5eb: jne 0x68a5f7 */ if (!fZ) goto L_0068a5f7;
L_0068a5ed:; BB(0x0068a5ed);
    /* 0068a5ed: jmp 0x68a6ce */ goto L_0068a6ce;
L_0068a5f7:; BB(0x0068a5f7);
    /* 0068a5f7: mov byte ptr [ebp - 0x516], 0 */ W8((u32)(r_ebp+0xfffffaeau), 0x0u);
L_0068a5fe:; BB(0x0068a5fe);
    /* 0068a5fe: movzx edx, byte ptr [ebp - 0x516] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffaeau));
    /* 0068a605: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a607: jne 0x68a65f */ if (!fZ) goto L_0068a65f;
L_0068a609:; BB(0x0068a609);
    /* 0068a609: mov eax, dword ptr [ebp - 0x72c] */ r_eax = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a60f: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068a615: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a616: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a618: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a61a: lea edx, [ebp - 0x515] */ r_edx = (u32)(r_ebp+0xfffffaebu);
    /* 0068a620: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a621: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x68a627u); call_ind(t); }
    /* 0068a627: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a62a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0068a62c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0068a62e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068a631: mov byte ptr [ebp - 0x516], al */ W8((u32)(r_ebp+0xfffffaeau), (u8)r_eax);
    /* 0068a637: movzx eax, byte ptr [ebp - 0x516] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffaeau));
    /* 0068a63e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a640: jne 0x68a65d */ if (!fZ) goto L_0068a65d;
L_0068a642:; BB(0x0068a642);
    /* 0068a642: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a648: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a649: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a64b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a64d: lea edx, [ebp - 0x515] */ r_edx = (u32)(r_ebp+0xfffffaebu);
    /* 0068a653: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a654: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68a65au); call_ind(t); }
    /* 0068a65a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068a65d:; BB(0x0068a65d);
    /* 0068a65d: jmp 0x68a5fe */ goto L_0068a5fe;
L_0068a65f:; BB(0x0068a65f);
    /* 0068a65f: mov eax, dword ptr [ebp - 0x514] */ r_eax = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a665: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a666: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x68a66cu); call_ind(t); }
    /* 0068a66c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a66f: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a675: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0068a67b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a67c: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x68a682u); call_ind(t); }
    /* 0068a682: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a685: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a68b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a68c: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x68a692u); call_ind(t); }
    /* 0068a692: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a695: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a69b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a69c: lea edx, [ebp - 0x620] */ r_edx = (u32)(r_ebp+0xfffff9e0u);
    /* 0068a6a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6a3: call dword ptr [0x6b21ec] */ { u32 t = R32((u32)(0x6b21ecu)); r_esp -= 4; W32(r_esp, 0x68a6a9u); call_ind(t); }
    /* 0068a6a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a6ac: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6b1: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0068a6b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6b8: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x68a6bdu); f_005ea9c0();
    /* 0068a6bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a6c0: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 0068a6c6: mov dword ptr [ecx + 0x208], eax */ W32((u32)(r_ecx+0x208u), r_eax);
    /* 0068a6cc: jmp 0x68a6f7 */ goto L_0068a6f7;
L_0068a6ce:; BB(0x0068a6ce);
    /* 0068a6ce: cmp dword ptr [ebp - 0x514], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffaecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a6d5: je 0x68a6f7 */ if (fZ) goto L_0068a6f7;
L_0068a6d7:; BB(0x0068a6d7);
    /* 0068a6d7: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0068a6dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6de: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x68a6e4u); call_ind(t); }
    /* 0068a6e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a6e7: lea eax, [ebp - 0x620] */ r_eax = (u32)(r_ebp+0xfffff9e0u);
    /* 0068a6ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a6ee: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x68a6f4u); call_ind(t); }
    /* 0068a6f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068a6f7:; BB(0x0068a6f7);
    /* 0068a6f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a6fa: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a6fc: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68a701u); f_00686d72();
    /* 0068a701: mov esp, ebp */ r_esp = r_ebp;
    /* 0068a703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a704: ret 8 */ FN_RET(0x0068a360); r_esp += 12; return;
}

void f_0068b020(void) /* IniFile::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b020);
    /* 0068b020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b021: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068b027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068b02a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068b02c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068b02f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0068b032: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68b034u); call_ind(t); }
    /* 0068b034: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068b037: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0068b03a: mov byte ptr [ecx + 0x20c], dl */ W8((u32)(r_ecx+0x20cu), (u8)r_edx);
    /* 0068b040: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b042: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b043: ret 4 */ FN_RET(0x0068b020); r_esp += 8; return;
}

void f_0068b1d0(void) /* IniFile::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b1d0);
    /* 0068b1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b1d3: sub esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068b1d9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068b1de: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b1e0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068b1e3: mov dword ptr [ebp - 0x2ac], ecx */ W32((u32)(r_ebp+0xfffffd54u), r_ecx);
    /* 0068b1e9: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 0068b1ef: add eax, 0x210 */ {  u32 a = r_eax; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068b1f4: mov dword ptr [ebp - 0x26c], eax */ W32((u32)(r_ebp+0xfffffd94u), r_eax);
    /* 0068b1fa: mov ecx, dword ptr [ebp - 0x26c] */ r_ecx = R32((u32)(r_ebp+0xfffffd94u));
    /* 0068b200: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068b203: mov dword ptr [ebp - 0x264], edx */ W32((u32)(r_ebp+0xfffffd9cu), r_edx);
    /* 0068b209: mov eax, dword ptr [ebp - 0x264] */ r_eax = R32((u32)(r_ebp+0xfffffd9cu));
    /* 0068b20f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068b211: mov dword ptr [ebp - 0x268], ecx */ W32((u32)(r_ebp+0xfffffd98u), r_ecx);
    /* 0068b217: mov edx, dword ptr [ebp - 0x26c] */ r_edx = R32((u32)(r_ebp+0xfffffd94u));
    /* 0068b21d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b21e: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0068b224: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b225: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 0068b22b: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68b230u); f_0068d4b0();
    /* 0068b230: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0068b236: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068b23c: mov dword ptr [ebp - 0x274], ecx */ W32((u32)(r_ebp+0xfffffd8cu), r_ecx);
    /* 0068b242: mov edx, dword ptr [ebp - 0x274] */ r_edx = R32((u32)(r_ebp+0xfffffd8cu));
    /* 0068b248: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068b24b: mov dword ptr [ebp - 0x270], eax */ W32((u32)(r_ebp+0xfffffd90u), r_eax);
    /* 0068b251: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0068b258: mov ecx, dword ptr [ebp - 0x270] */ r_ecx = R32((u32)(r_ebp+0xfffffd90u));
    /* 0068b25e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068b261: jne 0x68b269 */ if (!fZ) goto L_0068b269;
L_0068b263:; BB(0x0068b263);
    /* 0068b263: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b269u); call_ind(t); }
L_0068b269:; BB(0x0068b269);
    /* 0068b269: mov edx, dword ptr [ebp - 0x274] */ r_edx = R32((u32)(r_ebp+0xfffffd8cu));
    /* 0068b26f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068b272: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 0068b278: mov ecx, dword ptr [eax + 0x218] */ r_ecx = R32((u32)(r_eax+0x218u));
    /* 0068b27e: mov dword ptr [ebp - 0x278], ecx */ W32((u32)(r_ebp+0xfffffd88u), r_ecx);
    /* 0068b284: cmp dword ptr [ebp - 0x278], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068b28b: ja 0x68b292 */ if ((!fC&&!fZ)) goto L_0068b292;
L_0068b28d:; BB(0x0068b28d);
    /* 0068b28d: jmp 0x68b6c2 */ goto L_0068b6c2;
L_0068b292:; BB(0x0068b292);
    /* 0068b292: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0068b298: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068b29b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b29c: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0068b2a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2a3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x68b2a8u); f_00686d8e();
    /* 0068b2a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b2ab: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 0068b2b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2b2: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x68b2b7u); f_005ea5b0();
    /* 0068b2b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b2ba: lea edx, [ebp - 0x118] */ r_edx = (u32)(r_ebp+0xfffffee8u);
    /* 0068b2c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2c1: lea eax, [ebp - 0x230] */ r_eax = (u32)(r_ebp+0xfffffdd0u);
    /* 0068b2c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2c8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x68b2cdu); f_00686d8e();
    /* 0068b2cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b2d0: push 0x6e565c */ { u32 v = 0x6e565cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2d5: lea ecx, [ebp - 0x230] */ r_ecx = (u32)(r_ebp+0xfffffdd0u);
    /* 0068b2db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2dc: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x68b2e1u); f_005ea9c0();
    /* 0068b2e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b2e4: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0068b2ea: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b2f1: jne 0x68b2f8 */ if (!fZ) goto L_0068b2f8;
L_0068b2f3:; BB(0x0068b2f3);
    /* 0068b2f3: jmp 0x68b6c2 */ goto L_0068b6c2;
L_0068b2f8:; BB(0x0068b2f8);
    /* 0068b2f8: jmp 0x68b335 */ goto L_0068b335;
L_0068b2fa:; BB(0x0068b2fa);
    /* 0068b2fa: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0068b300: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0068b306: mov dword ptr [ebp - 0x280], edx */ W32((u32)(r_ebp+0xfffffd80u), r_edx);
    /* 0068b30c: mov dword ptr [ebp - 0x27c], eax */ W32((u32)(r_ebp+0xfffffd84u), r_eax);
    /* 0068b312: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 0068b318: call 0x68e790 */ r_esp -= 4; W32(r_esp, 0x68b31du); f_0068e790();
    /* 0068b31d: mov ecx, dword ptr [ebp - 0x280] */ r_ecx = R32((u32)(r_ebp+0xfffffd80u));
    /* 0068b323: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 0068b329: mov edx, dword ptr [ebp - 0x27c] */ r_edx = R32((u32)(r_ebp+0xfffffd84u));
    /* 0068b32f: mov dword ptr [ebp - 0x254], edx */ W32((u32)(r_ebp+0xfffffdacu), r_edx);
L_0068b335:; BB(0x0068b335);
    /* 0068b335: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b33c: je 0x68b349 */ if (fZ) goto L_0068b349;
L_0068b33e:; BB(0x0068b33e);
    /* 0068b33e: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 0068b344: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b347: je 0x68b34f */ if (fZ) goto L_0068b34f;
L_0068b349:; BB(0x0068b349);
    /* 0068b349: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b34fu); call_ind(t); }
L_0068b34f:; BB(0x0068b34f);
    /* 0068b34f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0068b355: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068b357: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b35a: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068b35d: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068b360: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0068b362: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0068b364: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068b367: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068b36a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b36c: je 0x68b6a1 */ if (fZ) goto L_0068b6a1;
L_0068b372:; BB(0x0068b372);
    /* 0068b372: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 0068b378: call 0x68d4f0 */ r_esp -= 4; W32(r_esp, 0x68b37du); f_0068d4f0();
    /* 0068b37d: mov dword ptr [ebp - 0x284], eax */ W32((u32)(r_ebp+0xfffffd7cu), r_eax);
    /* 0068b383: mov ecx, dword ptr [ebp - 0x284] */ r_ecx = R32((u32)(r_ebp+0xfffffd7cu));
    /* 0068b389: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x68b38fu); call_ind(t); }
    /* 0068b38f: mov dword ptr [ebp - 0x234], eax */ W32((u32)(r_ebp+0xfffffdccu), r_eax);
    /* 0068b395: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b39b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b39c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b39e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3a0: push 0x6e5634 */ { u32 v = 0x6e5634u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3a5: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b3abu); call_ind(t); }
    /* 0068b3ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b3ae: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3b5: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 0068b3bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3bc: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68b3c1u); f_00686ecc();
    /* 0068b3c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3c7: mov edx, dword ptr [ebp - 0x234] */ r_edx = R32((u32)(r_ebp+0xfffffdccu));
    /* 0068b3cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3ce: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b3d4u); call_ind(t); }
    /* 0068b3d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b3d7: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b3dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3e2: push 0x6e5630 */ { u32 v = 0x6e5630u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3e7: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b3edu); call_ind(t); }
    /* 0068b3ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b3f0: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b3f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3f7: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3fc: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68b401u); f_00686ecc();
    /* 0068b401: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b405: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b407: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b40c: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b412u); call_ind(t); }
    /* 0068b412: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b415: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b41c: jne 0x68b424 */ if (!fZ) goto L_0068b424;
L_0068b41e:; BB(0x0068b41e);
    /* 0068b41e: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b424u); call_ind(t); }
L_0068b424:; BB(0x0068b424);
    /* 0068b424: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0068b42a: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0068b430: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b433: jne 0x68b43b */ if (!fZ) goto L_0068b43b;
L_0068b435:; BB(0x0068b435);
    /* 0068b435: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b43bu); call_ind(t); }
L_0068b43b:; BB(0x0068b43b);
    /* 0068b43b: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0068b441: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068b444: mov dword ptr [ebp - 0x248], ecx */ W32((u32)(r_ebp+0xfffffdb8u), r_ecx);
    /* 0068b44a: mov edx, dword ptr [ebp - 0x248] */ r_edx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0068b450: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068b453: mov dword ptr [ebp - 0x288], eax */ W32((u32)(r_ebp+0xfffffd78u), r_eax);
    /* 0068b459: mov ecx, dword ptr [ebp - 0x288] */ r_ecx = R32((u32)(r_ebp+0xfffffd78u));
    /* 0068b45f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068b461: mov dword ptr [ebp - 0x28c], edx */ W32((u32)(r_ebp+0xfffffd74u), r_edx);
    /* 0068b467: mov dword ptr [ebp - 0x23c], 0 */ W32((u32)(r_ebp+0xfffffdc4u), 0x0u);
    /* 0068b471: mov eax, dword ptr [ebp - 0x28c] */ r_eax = R32((u32)(r_ebp+0xfffffd74u));
    /* 0068b477: mov dword ptr [ebp - 0x238], eax */ W32((u32)(r_ebp+0xfffffdc8u), r_eax);
    /* 0068b47d: jne 0x68b485 */ if (!fZ) goto L_0068b485;
L_0068b47f:; BB(0x0068b47f);
    /* 0068b47f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b485u); call_ind(t); }
L_0068b485:; BB(0x0068b485);
    /* 0068b485: mov ecx, dword ptr [ebp - 0x248] */ r_ecx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0068b48b: mov dword ptr [ebp - 0x23c], ecx */ W32((u32)(r_ebp+0xfffffdc4u), r_ecx);
    /* 0068b491: mov edx, dword ptr [ebp - 0x248] */ r_edx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0068b497: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068b49a: mov dword ptr [ebp - 0x290], eax */ W32((u32)(r_ebp+0xfffffd70u), r_eax);
    /* 0068b4a0: mov dword ptr [ebp - 0x244], 0 */ W32((u32)(r_ebp+0xfffffdbcu), 0x0u);
    /* 0068b4aa: mov ecx, dword ptr [ebp - 0x290] */ r_ecx = R32((u32)(r_ebp+0xfffffd70u));
    /* 0068b4b0: mov dword ptr [ebp - 0x240], ecx */ W32((u32)(r_ebp+0xfffffdc0u), r_ecx);
    /* 0068b4b6: cmp dword ptr [ebp - 0x248], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b4bd: jne 0x68b4c5 */ if (!fZ) goto L_0068b4c5;
L_0068b4bf:; BB(0x0068b4bf);
    /* 0068b4bf: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b4c5u); call_ind(t); }
L_0068b4c5:; BB(0x0068b4c5);
    /* 0068b4c5: mov edx, dword ptr [ebp - 0x248] */ r_edx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0068b4cb: mov dword ptr [ebp - 0x244], edx */ W32((u32)(r_ebp+0xfffffdbcu), r_edx);
    /* 0068b4d1: jmp 0x68b50e */ goto L_0068b50e;
L_0068b4d3:; BB(0x0068b4d3);
    /* 0068b4d3: mov eax, dword ptr [ebp - 0x23c] */ r_eax = R32((u32)(r_ebp+0xfffffdc4u));
    /* 0068b4d9: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0068b4df: mov dword ptr [ebp - 0x298], eax */ W32((u32)(r_ebp+0xfffffd68u), r_eax);
    /* 0068b4e5: mov dword ptr [ebp - 0x294], ecx */ W32((u32)(r_ebp+0xfffffd6cu), r_ecx);
    /* 0068b4eb: lea ecx, [ebp - 0x23c] */ r_ecx = (u32)(r_ebp+0xfffffdc4u);
    /* 0068b4f1: call 0x68edc0 */ r_esp -= 4; W32(r_esp, 0x68b4f6u); f_0068edc0();
    /* 0068b4f6: mov edx, dword ptr [ebp - 0x298] */ r_edx = R32((u32)(r_ebp+0xfffffd68u));
    /* 0068b4fc: mov dword ptr [ebp - 0x260], edx */ W32((u32)(r_ebp+0xfffffda0u), r_edx);
    /* 0068b502: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0068b508: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
L_0068b50e:; BB(0x0068b50e);
    /* 0068b50e: cmp dword ptr [ebp - 0x23c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b515: je 0x68b525 */ if (fZ) goto L_0068b525;
L_0068b517:; BB(0x0068b517);
    /* 0068b517: mov ecx, dword ptr [ebp - 0x23c] */ r_ecx = R32((u32)(r_ebp+0xfffffdc4u));
    /* 0068b51d: cmp ecx, dword ptr [ebp - 0x244] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffdbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b523: je 0x68b52b */ if (fZ) goto L_0068b52b;
L_0068b525:; BB(0x0068b525);
    /* 0068b525: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b52bu); call_ind(t); }
L_0068b52b:; BB(0x0068b52b);
    /* 0068b52b: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0068b531: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b533: cmp edx, dword ptr [ebp - 0x240] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffdc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b539: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068b53c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068b53f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0068b541: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0068b543: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068b546: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0068b549: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b54b: je 0x68b677 */ if (fZ) goto L_0068b677;
L_0068b551:; BB(0x0068b551);
    /* 0068b551: cmp dword ptr [ebp - 0x23c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b558: jne 0x68b560 */ if (!fZ) goto L_0068b560;
L_0068b55a:; BB(0x0068b55a);
    /* 0068b55a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b560u); call_ind(t); }
L_0068b560:; BB(0x0068b560);
    /* 0068b560: mov eax, dword ptr [ebp - 0x23c] */ r_eax = R32((u32)(r_ebp+0xfffffdc4u));
    /* 0068b566: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0068b56c: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b56f: jne 0x68b577 */ if (!fZ) goto L_0068b577;
L_0068b571:; BB(0x0068b571);
    /* 0068b571: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b577u); call_ind(t); }
L_0068b577:; BB(0x0068b577);
    /* 0068b577: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0068b57d: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068b580: mov dword ptr [ebp - 0x29c], edx */ W32((u32)(r_ebp+0xfffffd64u), r_edx);
    /* 0068b586: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0068b58c: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x68b592u); call_ind(t); }
    /* 0068b592: mov dword ptr [ebp - 0x24c], eax */ W32((u32)(r_ebp+0xfffffdb4u), r_eax);
    /* 0068b598: cmp dword ptr [ebp - 0x23c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b59f: jne 0x68b5a7 */ if (!fZ) goto L_0068b5a7;
L_0068b5a1:; BB(0x0068b5a1);
    /* 0068b5a1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b5a7u); call_ind(t); }
L_0068b5a7:; BB(0x0068b5a7);
    /* 0068b5a7: mov eax, dword ptr [ebp - 0x23c] */ r_eax = R32((u32)(r_ebp+0xfffffdc4u));
    /* 0068b5ad: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0068b5b3: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b5b6: jne 0x68b5be */ if (!fZ) goto L_0068b5be;
L_0068b5b8:; BB(0x0068b5b8);
    /* 0068b5b8: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b5beu); call_ind(t); }
L_0068b5be:; BB(0x0068b5be);
    /* 0068b5be: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0068b5c4: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068b5c7: mov dword ptr [ebp - 0x2a0], edx */ W32((u32)(r_ebp+0xfffffd60u), r_edx);
    /* 0068b5cd: mov ecx, dword ptr [ebp - 0x2a0] */ r_ecx = R32((u32)(r_ebp+0xfffffd60u));
    /* 0068b5d3: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068b5d6: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x68b5dcu); call_ind(t); }
    /* 0068b5dc: mov dword ptr [ebp - 0x250], eax */ W32((u32)(r_ebp+0xfffffdb0u), r_eax);
    /* 0068b5e2: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b5e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b5e9: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068b5ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b5f0: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68b5f5u); f_00686ecc();
    /* 0068b5f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b5f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b5fb: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068b601: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b602: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b608u); call_ind(t); }
    /* 0068b608: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b60b: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b612: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b614: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b616: push 0x6e5658 */ { u32 v = 0x6e5658u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b61b: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b621u); call_ind(t); }
    /* 0068b621: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b624: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b62a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b62b: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068b631: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b632: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68b637u); f_00686ecc();
    /* 0068b637: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b63a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b63b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b63d: mov eax, dword ptr [ebp - 0x250] */ r_eax = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068b643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b644: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b64au); call_ind(t); }
    /* 0068b64a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b64d: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b654: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b659: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68b65eu); f_00686ecc();
    /* 0068b65e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b662: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b664: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b669: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b66fu); call_ind(t); }
    /* 0068b66f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b672: jmp 0x68b4d3 */ goto L_0068b4d3;
L_0068b677:; BB(0x0068b677);
    /* 0068b677: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b67d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b67e: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b683: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68b688u); f_00686ecc();
    /* 0068b688: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b68b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b68c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b68e: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b693: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68b699u); call_ind(t); }
    /* 0068b699: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b69c: jmp 0x68b2fa */ goto L_0068b2fa;
L_0068b6a1:; BB(0x0068b6a1);
    /* 0068b6a1: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0068b6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b6a8: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x68b6aeu); call_ind(t); }
    /* 0068b6ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b6b1: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0068b6b7: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068b6bd: call 0x68b8f0 */ r_esp -= 4; W32(r_esp, 0x68b6c2u); f_0068b8f0();
L_0068b6c2:; BB(0x0068b6c2);
    /* 0068b6c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068b6c5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068b6c7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68b6ccu); f_00686d72();
    /* 0068b6cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b6ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b6cf: ret  */ FN_RET(0x0068b1d0); r_esp += 4; return;
}

