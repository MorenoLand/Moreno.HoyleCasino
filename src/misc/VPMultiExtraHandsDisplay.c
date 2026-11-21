#include "protos.h"

void f_00563e30(void) /* VPMultiExtraHandsDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563e30);
    /* 00563e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00563e33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563e35: push 0x6a5aba */ { u32 v = 0x6a5abau; r_esp -= 4; W32(r_esp, v); }
    /* 00563e3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00563e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563e41: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563e44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00563e49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563e4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563e4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00563e4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00563e55: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00563e58: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00563e5b: mov dword ptr [eax], 0x6c99d0 */ W32((u32)(r_eax), 0x6c99d0u);
    /* 00563e61: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563e68: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00563e6f: jmp 0x563e7a */ goto L_00563e7a;
L_00563e71:; BB(0x00563e71);
    /* 00563e71: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563e74: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563e77: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00563e7a:; BB(0x00563e7a);
    /* 00563e7a: cmp dword ptr [ebp - 0x10], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563e7e: jge 0x563f5e */ if ((fS==fO)) goto L_00563f5e;
L_00563e84:; BB(0x00563e84);
    /* 00563e84: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563e87: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00563e8a: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00563e8e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00563e91: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563e94: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00563e97: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563e9b: je 0x563eb0 */ if (fZ) goto L_00563eb0;
L_00563e9d:; BB(0x00563e9d);
    /* 00563e9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00563e9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563ea2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00563ea4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563ea7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00563ea9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563eabu); call_ind(t); }
    /* 00563eab: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00563eae: jmp 0x563eb7 */ goto L_00563eb7;
L_00563eb0:; BB(0x00563eb0);
    /* 00563eb0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00563eb7:; BB(0x00563eb7);
    /* 00563eb7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00563ebe: jmp 0x563ec9 */ goto L_00563ec9;
L_00563ec0:; BB(0x00563ec0);
    /* 00563ec0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00563ec3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563ec6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00563ec9:; BB(0x00563ec9);
    /* 00563ec9: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563ecd: jge 0x563f10 */ if ((fS==fO)) goto L_00563f10;
L_00563ecf:; BB(0x00563ecf);
    /* 00563ecf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563ed2: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00563ed5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00563ed8: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 00563edf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00563ee2: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00563ee5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00563ee8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563eeb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00563eee: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563ef2: je 0x563f07 */ if (fZ) goto L_00563f07;
L_00563ef4:; BB(0x00563ef4);
    /* 00563ef4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00563ef6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00563ef9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00563efb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00563efe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00563f00: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x563f02u); call_ind(t); }
    /* 00563f02: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00563f05: jmp 0x563f0e */ goto L_00563f0e;
L_00563f07:; BB(0x00563f07);
    /* 00563f07: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00563f0e:; BB(0x00563f0e);
    /* 00563f0e: jmp 0x563ec0 */ goto L_00563ec0;
L_00563f10:; BB(0x00563f10);
    /* 00563f10: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563f13: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00563f16: mov edx, dword ptr [ecx + eax*4 + 0x49c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x49cu));
    /* 00563f1d: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00563f20: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00563f23: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00563f26: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563f2a: je 0x563f52 */ if (fZ) goto L_00563f52;
L_00563f2c:; BB(0x00563f2c);
    /* 00563f2c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00563f2f: call 0x565630 */ r_esp -= 4; W32(r_esp, 0x563f34u); f_00565630();
    /* 00563f34: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00563f39: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00563f3c: je 0x563f4a */ if (fZ) goto L_00563f4a;
L_00563f3e:; BB(0x00563f3e);
    /* 00563f3e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00563f41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00563f42: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x563f47u); f_00686cae();
    /* 00563f47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00563f4a:; BB(0x00563f4a);
    /* 00563f4a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00563f4d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00563f50: jmp 0x563f59 */ goto L_00563f59;
L_00563f52:; BB(0x00563f52);
    /* 00563f52: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00563f59:; BB(0x00563f59);
    /* 00563f59: jmp 0x563e71 */ goto L_00563e71;
L_00563f5e:; BB(0x00563f5e);
    /* 00563f5e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00563f61: mov edx, dword ptr [ecx + 0x560] */ r_edx = R32((u32)(r_ecx+0x560u));
    /* 00563f67: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00563f6a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00563f6d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00563f70: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563f74: je 0x563f89 */ if (fZ) goto L_00563f89;
L_00563f76:; BB(0x00563f76);
    /* 00563f76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00563f78: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00563f7b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00563f7d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00563f80: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00563f82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563f84u); call_ind(t); }
    /* 00563f84: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00563f87: jmp 0x563f90 */ goto L_00563f90;
L_00563f89:; BB(0x00563f89);
    /* 00563f89: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00563f90:; BB(0x00563f90);
    /* 00563f90: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00563f97: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00563f9a: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x563f9fu); f_005e9e40();
    /* 00563f9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563fa2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00563fa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00563faa: mov esp, ebp */ r_esp = r_ebp;
    /* 00563fac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563fad: ret  */ FN_RET(0x00563e30); r_esp += 4; return;
}

