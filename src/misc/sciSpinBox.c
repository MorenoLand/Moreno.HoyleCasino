#include "protos.h"

void f_00629e40(void) /* sciSpinBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629e40);
    /* 00629e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00629e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629e45: push 0x6ab64e */ { u32 v = 0x6ab64eu; r_esp -= 4; W32(r_esp, v); }
    /* 00629e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629e51: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629e54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00629e59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629e5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00629e5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00629e65: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00629e68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629e6b: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x629e70u); f_005f49d0();
    /* 00629e70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629e77: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629e7a: mov dword ptr [eax], 0x6d952c */ W32((u32)(r_eax), 0x6d952cu);
    /* 00629e80: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629e83: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 00629e8a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629e8d: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 00629e94: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629e97: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 00629e9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629ea1: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 00629ea8: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00629ead: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x629eb2u); f_00686d82();
    /* 00629eb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629eb5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00629eb8: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00629ebc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629ec0: je 0x629ed5 */ if (fZ) goto L_00629ed5;
L_00629ec2:; BB(0x00629ec2);
    /* 00629ec2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629ec4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629ec7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629ec8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629ecb: call 0x62a760 */ r_esp -= 4; W32(r_esp, 0x629ed0u); f_0062a760();
    /* 00629ed0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00629ed3: jmp 0x629edc */ goto L_00629edc;
L_00629ed5:; BB(0x00629ed5);
    /* 00629ed5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00629edc:; BB(0x00629edc);
    /* 00629edc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00629edf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00629ee2: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629ee6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629ee9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00629eec: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00629eef: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00629ef4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x629ef9u); f_00686d82();
    /* 00629ef9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629efc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00629eff: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00629f03: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629f07: je 0x629f1c */ if (fZ) goto L_00629f1c;
L_00629f09:; BB(0x00629f09);
    /* 00629f09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629f0b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629f0f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00629f12: call 0x62a760 */ r_esp -= 4; W32(r_esp, 0x629f17u); f_0062a760();
    /* 00629f17: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00629f1a: jmp 0x629f23 */ goto L_00629f23;
L_00629f1c:; BB(0x00629f1c);
    /* 00629f1c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00629f23:; BB(0x00629f23);
    /* 00629f23: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00629f26: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00629f29: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629f2d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629f30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629f33: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00629f36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00629f3d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629f40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629f43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629f4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629f4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00629f4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629f4e: ret  */ FN_RET(0x00629e40); r_esp += 4; return;
}

void f_00629f50(void) /* sciSpinBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629f50);
    /* 00629f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00629f53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629f55: push 0x6ab671 */ { u32 v = 0x6ab671u; r_esp -= 4; W32(r_esp, v); }
    /* 00629f5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629f61: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629f64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00629f69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629f6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00629f6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00629f75: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00629f78: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00629f7b: mov dword ptr [eax], 0x6d952c */ W32((u32)(r_eax), 0x6d952cu);
    /* 00629f81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629f88: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00629f8b: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00629f8e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00629f91: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00629f94: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00629f97: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629f9b: je 0x629fb0 */ if (fZ) goto L_00629fb0;
L_00629f9d:; BB(0x00629f9d);
    /* 00629f9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629f9f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00629fa2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00629fa4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00629fa7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00629fa9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629fabu); call_ind(t); }
    /* 00629fab: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00629fae: jmp 0x629fb7 */ goto L_00629fb7;
L_00629fb0:; BB(0x00629fb0);
    /* 00629fb0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00629fb7:; BB(0x00629fb7);
    /* 00629fb7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00629fba: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00629fbd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00629fc0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00629fc3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00629fc6: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629fca: je 0x629fdf */ if (fZ) goto L_00629fdf;
L_00629fcc:; BB(0x00629fcc);
    /* 00629fcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629fce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629fd1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00629fd3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629fd6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00629fd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629fdau); call_ind(t); }
    /* 00629fda: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00629fdd: jmp 0x629fe6 */ goto L_00629fe6;
L_00629fdf:; BB(0x00629fdf);
    /* 00629fdf: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00629fe6:; BB(0x00629fe6);
    /* 00629fe6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00629fe9: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00629fec: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00629fef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00629ff2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00629ff5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629ff9: je 0x62a00e */ if (fZ) goto L_0062a00e;
L_00629ffb:; BB(0x00629ffb);
    /* 00629ffb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629ffd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a000: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a002: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a005: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062a007: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a009u); call_ind(t); }
    /* 0062a009: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0062a00c: jmp 0x62a015 */ goto L_0062a015;
L_0062a00e:; BB(0x0062a00e);
    /* 0062a00e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0062a015:; BB(0x0062a015);
    /* 0062a015: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062a018: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0062a01b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0062a01e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062a021: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062a024: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a028: je 0x62a03d */ if (fZ) goto L_0062a03d;
L_0062a02a:; BB(0x0062a02a);
    /* 0062a02a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a02c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062a02f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a031: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062a034: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062a036: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a038u); call_ind(t); }
    /* 0062a038: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0062a03b: jmp 0x62a044 */ goto L_0062a044;
L_0062a03d:; BB(0x0062a03d);
    /* 0062a03d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0062a044:; BB(0x0062a044);
    /* 0062a044: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a04b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062a04e: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x62a053u); f_005f4ad0();
    /* 0062a053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a05d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a05e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a060: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a061: ret  */ FN_RET(0x00629f50); r_esp += 4; return;
}

void f_0062a280(void) /* sciSpinBox::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a280);
    /* 0062a280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a281: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a28a: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x62a28fu); f_005f5440();
    /* 0062a28f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a292: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a296: je 0x62a2ab */ if (fZ) goto L_0062a2ab;
L_0062a298:; BB(0x0062a298);
    /* 0062a298: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a29b: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0062a29e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2a1: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0062a2a4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a2a6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0062a2a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a2abu); call_ind(t); }
L_0062a2ab:; BB(0x0062a2ab);
    /* 0062a2ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2ae: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0062a2b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2b4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0062a2b7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a2b9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0062a2bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a2beu); call_ind(t); }
    /* 0062a2be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2c1: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0062a2c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2c7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0062a2ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a2cc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0062a2cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a2d1u); call_ind(t); }
    /* 0062a2d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2d4: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a2d8: je 0x62a2ed */ if (fZ) goto L_0062a2ed;
L_0062a2da:; BB(0x0062a2da);
    /* 0062a2da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2dd: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0062a2e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a2e3: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0062a2e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a2e8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0062a2eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a2edu); call_ind(t); }
L_0062a2ed:; BB(0x0062a2ed);
    /* 0062a2ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a2ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a2f0: ret  */ FN_RET(0x0062a280); r_esp += 4; return;
}

void f_0062a300(void) /* sciSpinBox::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a300);
    /* 0062a300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a301: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a30a: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x62a30fu); f_005f5420();
    /* 0062a30f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a312: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a316: je 0x62a32b */ if (fZ) goto L_0062a32b;
L_0062a318:; BB(0x0062a318);
    /* 0062a318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a31b: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0062a31e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a321: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0062a324: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a326: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0062a329: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a32bu); call_ind(t); }
L_0062a32b:; BB(0x0062a32b);
    /* 0062a32b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a32e: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0062a331: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a334: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0062a337: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a339: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0062a33c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a33eu); call_ind(t); }
    /* 0062a33e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a341: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0062a344: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a347: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0062a34a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a34c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0062a34f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a351u); call_ind(t); }
    /* 0062a351: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a354: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a358: je 0x62a36d */ if (fZ) goto L_0062a36d;
L_0062a35a:; BB(0x0062a35a);
    /* 0062a35a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a35d: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0062a360: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a363: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 0062a366: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a368: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0062a36b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a36du); call_ind(t); }
L_0062a36d:; BB(0x0062a36d);
    /* 0062a36d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a36f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a370: ret  */ FN_RET(0x0062a300); r_esp += 4; return;
}

void f_0062a380(void) /* sciSpinBox::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a380);
    /* 0062a380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a381: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a387: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062a38a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a38b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a38e: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x62a393u); f_005f5300();
    /* 0062a393: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a396: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a39a: je 0x62a3b5 */ if (fZ) goto L_0062a3b5;
L_0062a39c:; BB(0x0062a39c);
    /* 0062a39c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062a39f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3a3: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0062a3a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3a9: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0062a3ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a3ae: mov ecx, eax */ r_ecx = r_eax;
    /* 0062a3b0: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0062a3b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a3b5u); call_ind(t); }
L_0062a3b5:; BB(0x0062a3b5);
    /* 0062a3b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062a3b8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a3bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3bf: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0062a3c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3c5: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0062a3c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a3ca: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0062a3cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a3cfu); call_ind(t); }
    /* 0062a3cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062a3d2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a3d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3d9: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0062a3dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3df: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0062a3e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a3e4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0062a3e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a3e9u); call_ind(t); }
    /* 0062a3e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3ec: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a3f0: je 0x62a40e */ if (fZ) goto L_0062a40e;
L_0062a3f2:; BB(0x0062a3f2);
    /* 0062a3f2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062a3f5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a3f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a3f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a3fc: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0062a3ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a402: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0062a405: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a407: mov ecx, eax */ r_ecx = r_eax;
    /* 0062a409: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0062a40c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a40eu); call_ind(t); }
L_0062a40e:; BB(0x0062a40e);
    /* 0062a40e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a410: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a411: ret 4 */ FN_RET(0x0062a380); r_esp += 8; return;
}

void f_0062a6b0(void) /* sciSpinBox::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a6b0);
    /* 0062a6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a6b7: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a6bb: jne 0x62a6ee */ if (!fZ) goto L_0062a6ee;
L_0062a6bd:; BB(0x0062a6bd);
    /* 0062a6bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6c0: call 0x62a630 */ r_esp -= 4; W32(r_esp, 0x62a6c5u); f_0062a630();
    /* 0062a6c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6c8: sub eax, dword ptr [ecx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062a6cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6ce: cmp eax, dword ptr [edx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a6d1: jge 0x62a6d5 */ if ((fS==fO)) goto L_0062a6d5;
L_0062a6d3:; BB(0x0062a6d3);
    /* 0062a6d3: jmp 0x62a71d */ goto L_0062a71d;
L_0062a6d5:; BB(0x0062a6d5);
    /* 0062a6d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6d8: call 0x62a630 */ r_esp -= 4; W32(r_esp, 0x62a6ddu); f_0062a630();
    /* 0062a6dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6e0: sub eax, dword ptr [ecx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062a6e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6e7: call 0x62a520 */ r_esp -= 4; W32(r_esp, 0x62a6ecu); f_0062a520();
    /* 0062a6ec: jmp 0x62a71d */ goto L_0062a71d;
L_0062a6ee:; BB(0x0062a6ee);
    /* 0062a6ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6f1: call 0x62a630 */ r_esp -= 4; W32(r_esp, 0x62a6f6u); f_0062a630();
    /* 0062a6f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6f9: add eax, dword ptr [edx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a6fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a6ff: cmp eax, dword ptr [ecx + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a702: jle 0x62a706 */ if ((fZ||fS!=fO)) goto L_0062a706;
L_0062a704:; BB(0x0062a704);
    /* 0062a704: jmp 0x62a71d */ goto L_0062a71d;
L_0062a706:; BB(0x0062a706);
    /* 0062a706: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a709: call 0x62a630 */ r_esp -= 4; W32(r_esp, 0x62a70eu); f_0062a630();
    /* 0062a70e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a711: add eax, dword ptr [edx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a715: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a718: call 0x62a520 */ r_esp -= 4; W32(r_esp, 0x62a71du); f_0062a520();
L_0062a71d:; BB(0x0062a71d);
    /* 0062a71d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a71f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a720: ret 4 */ FN_RET(0x0062a6b0); r_esp += 8; return;
}

void f_0062a730(void) /* sciSpinBox::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a730);
    /* 0062a730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a731: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a737: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062a73a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a73b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062a73e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a73f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a742: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0062a745: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a748: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0062a74b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a74d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0062a753: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a755u); call_ind(t); }
    /* 0062a755: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a758: ret 8 */ FN_RET(0x0062a730); r_esp += 12; return;
}

