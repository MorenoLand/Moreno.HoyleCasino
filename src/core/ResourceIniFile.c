#include "protos.h"

void f_00688b60(void) /* ResourceIniFile::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688b60);
    /* 00688b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00688b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00688b65: push 0x6addd3 */ { u32 v = 0x6addd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00688b6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00688b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688b71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688b74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00688b79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00688b7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688b7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00688b7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00688b85: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00688b88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688b8b: call 0x6077f0 */ r_esp -= 4; W32(r_esp, 0x688b90u); f_006077f0();
    /* 00688b90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00688b97: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688b9a: mov dword ptr [eax], 0x6e5594 */ W32((u32)(r_eax), 0x6e5594u);
    /* 00688ba0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688ba3: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
    /* 00688bad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688bb0: mov dword ptr [edx + 0x20c], 0 */ W32((u32)(r_edx+0x20cu), 0x0u);
    /* 00688bba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688bbd: mov dword ptr [eax + 0x210], 0 */ W32((u32)(r_eax+0x210u), 0x0u);
    /* 00688bc7: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00688bcc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x688bd1u); f_00686d82();
    /* 00688bd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688bd4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00688bd7: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00688bdb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688bdf: je 0x688bfd */ if (fZ) goto L_00688bfd;
L_00688be1:; BB(0x00688be1);
    /* 00688be1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00688be3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00688be6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688be7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688bea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688beb: push 0x20494e49 */ { u32 v = 0x20494e49u; r_esp -= 4; W32(r_esp, v); }
    /* 00688bf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688bf3: call 0x61dc00 */ r_esp -= 4; W32(r_esp, 0x688bf8u); f_0061dc00();
    /* 00688bf8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00688bfb: jmp 0x688c04 */ goto L_00688c04;
L_00688bfd:; BB(0x00688bfd);
    /* 00688bfd: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00688c04:; BB(0x00688c04);
    /* 00688c04: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00688c07: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00688c0a: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00688c0e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c11: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00688c14: mov dword ptr [ecx + 0x208], edx */ W32((u32)(r_ecx+0x208u), r_edx);
    /* 00688c1a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c1d: cmp dword ptr [eax + 0x208], 0 */ {  u32 a = R32((u32)(r_eax+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688c24: jne 0x688c50 */ if (!fZ) goto L_00688c50;
L_00688c26:; BB(0x00688c26);
    /* 00688c26: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00688c2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688c2c: je 0x688c50 */ if (fZ) goto L_00688c50;
L_00688c2e:; BB(0x00688c2e);
    /* 00688c2e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c31: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688c38: jne 0x688c4e */ if (!fZ) goto L_00688c4e;
L_00688c3a:; BB(0x00688c3a);
    /* 00688c3a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00688c3c: push 0x6e5568 */ { u32 v = 0x6e5568u; r_esp -= 4; W32(r_esp, v); }
    /* 00688c41: push 0x6e5558 */ { u32 v = 0x6e5558u; r_esp -= 4; W32(r_esp, v); }
    /* 00688c46: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x688c4bu); f_005e9f20();
    /* 00688c4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00688c4e:; BB(0x00688c4e);
    /* 00688c4e: jmp 0x688c7e */ goto L_00688c7e;
L_00688c50:; BB(0x00688c50);
    /* 00688c50: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c53: cmp dword ptr [ecx + 0x208], 0 */ {  u32 a = R32((u32)(r_ecx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688c5a: je 0x688c7e */ if (fZ) goto L_00688c7e;
L_00688c5c:; BB(0x00688c5c);
    /* 00688c5c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c5f: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 00688c65: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c68: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 00688c6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00688c70: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00688c73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x688c75u); call_ind(t); }
    /* 00688c75: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c78: mov dword ptr [ecx + 0x20c], eax */ W32((u32)(r_ecx+0x20cu), r_eax);
L_00688c7e:; BB(0x00688c7e);
    /* 00688c7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00688c85: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688c88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00688c8b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00688c92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688c93: mov esp, ebp */ r_esp = r_ebp;
    /* 00688c95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688c96: ret 0xc */ FN_RET(0x00688b60); r_esp += 16; return;
}

void f_00688ca0(void) /* ResourceIniFile::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688ca0);
    /* 00688ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00688ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00688ca5: push 0x6addf6 */ { u32 v = 0x6addf6u; r_esp -= 4; W32(r_esp, v); }
    /* 00688caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00688cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688cb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688cb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00688cb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00688cbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688cbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00688cbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00688cc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00688cc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688ccb: mov dword ptr [eax], 0x6e5594 */ W32((u32)(r_eax), 0x6e5594u);
    /* 00688cd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00688cd8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688cdb: cmp dword ptr [ecx + 0x208], 0 */ {  u32 a = R32((u32)(r_ecx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688ce2: je 0x688d16 */ if (fZ) goto L_00688d16;
L_00688ce4:; BB(0x00688ce4);
    /* 00688ce4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688ce7: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 00688ced: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00688cf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688cf3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00688cf6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688cfa: je 0x688d0f */ if (fZ) goto L_00688d0f;
L_00688cfc:; BB(0x00688cfc);
    /* 00688cfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00688cfe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00688d01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00688d03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00688d06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00688d08: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x688d0au); call_ind(t); }
    /* 00688d0a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00688d0d: jmp 0x688d16 */ goto L_00688d16;
L_00688d0f:; BB(0x00688d0f);
    /* 00688d0f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00688d16:; BB(0x00688d16);
    /* 00688d16: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00688d1d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688d20: call 0x607870 */ r_esp -= 4; W32(r_esp, 0x688d25u); f_00607870();
    /* 00688d25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00688d28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00688d2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00688d30: mov esp, ebp */ r_esp = r_ebp;
    /* 00688d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688d33: ret  */ FN_RET(0x00688ca0); r_esp += 4; return;
}

void f_00688de0(void) /* ResourceIniFile::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688de0);
    /* 00688de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00688de3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688de6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00688de9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688dec: movsx ecx, byte ptr [eax + 0x107] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x107u));
    /* 00688df3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688df5: je 0x688e13 */ if (fZ) goto L_00688e13;
L_00688df7:; BB(0x00688df7);
    /* 00688df7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688dfb: je 0x688e13 */ if (fZ) goto L_00688e13;
L_00688dfd:; BB(0x00688dfd);
    /* 00688dfd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688e00: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00688e03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e05: je 0x688e13 */ if (fZ) goto L_00688e13;
L_00688e07:; BB(0x00688e07);
    /* 00688e07: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e0b: je 0x688e13 */ if (fZ) goto L_00688e13;
L_00688e0d:; BB(0x00688e0d);
    /* 00688e0d: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e11: jne 0x688e18 */ if (!fZ) goto L_00688e18;
L_00688e13:; BB(0x00688e13);
    /* 00688e13: jmp 0x688ece */ goto L_00688ece;
L_00688e18:; BB(0x00688e18);
    /* 00688e18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688e1b: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 00688e21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688e24: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 00688e2a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00688e2c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00688e2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x688e31u); call_ind(t); }
    /* 00688e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e33: je 0x688e6b */ if (fZ) goto L_00688e6b;
L_00688e35:; BB(0x00688e35);
    /* 00688e35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688e37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688e3a: add ecx, 0x107 */ {  u32 a = r_ecx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00688e40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688e41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688e44: call 0x688f10 */ r_esp -= 4; W32(r_esp, 0x688e49u); f_00688f10();
    /* 00688e49: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00688e4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e4e: je 0x688e6b */ if (fZ) goto L_00688e6b;
L_00688e50:; BB(0x00688e50);
    /* 00688e50: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00688e53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688e54: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00688e57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688e58: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688e5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688e5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688e5f: call 0x6892b0 */ r_esp -= 4; W32(r_esp, 0x688e64u); f_006892b0();
    /* 00688e64: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00688e67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e69: jne 0x688ece */ if (!fZ) goto L_00688ece;
L_00688e6b:; BB(0x00688e6b);
    /* 00688e6b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688e6f: je 0x688ec8 */ if (fZ) goto L_00688ec8;
L_00688e71:; BB(0x00688e71);
    /* 00688e71: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00688e74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688e75: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x688e7au); f_00686ecc();
    /* 00688e7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688e7d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00688e80: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00688e83: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00688e86: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00688e88: jae 0x688e9e */ if (!fC) goto L_00688e9e;
L_00688e8a:; BB(0x00688e8a);
    /* 00688e8a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00688e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688e8e: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x688e93u); f_00686ecc();
    /* 00688e93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688e96: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00688e99: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00688e9c: jmp 0x688ea7 */ goto L_00688ea7;
L_00688e9e:; BB(0x00688e9e);
    /* 00688e9e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00688ea1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00688ea4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00688ea7:; BB(0x00688ea7);
    /* 00688ea7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00688eaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688eab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00688eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688eaf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00688eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688eb3: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x688eb9u); call_ind(t); }
    /* 00688eb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688ebc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00688ebf: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00688ec2: mov byte ptr [edx - 1], 0 */ W8((u32)(r_edx+0xffffffffu), 0x0u);
    /* 00688ec6: jmp 0x688ece */ goto L_00688ece;
L_00688ec8:; BB(0x00688ec8);
    /* 00688ec8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00688ecb: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
L_00688ece:; BB(0x00688ece);
    /* 00688ece: mov esp, ebp */ r_esp = r_ebp;
    /* 00688ed0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688ed1: ret 0x10 */ FN_RET(0x00688de0); r_esp += 20; return;
}

void f_00688ee0(void) /* ResourceIniFile::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688ee0);
    /* 00688ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00688ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00688ee7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00688ee9: jne 0x688eff */ if (!fZ) goto L_00688eff;
L_00688eeb:; BB(0x00688eeb);
    /* 00688eeb: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00688eed: push 0x6e5568 */ { u32 v = 0x6e5568u; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef2: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00688ef7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x688efcu); f_005e9f20();
    /* 00688efc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00688eff:; BB(0x00688eff);
    /* 00688eff: mov esp, ebp */ r_esp = r_ebp;
    /* 00688f01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688f02: ret 8 */ FN_RET(0x00688ee0); r_esp += 12; return;
}

