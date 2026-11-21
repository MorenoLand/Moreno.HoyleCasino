#include "protos.h"

void f_00673d10(void) /* BitmapFeature::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673d10);
    /* 00673d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00673d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00673d17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673d1a: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x673d1fu); f_005f49d0();
    /* 00673d1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673d22: mov dword ptr [eax], 0x6e16ec */ W32((u32)(r_eax), 0x6e16ecu);
    /* 00673d28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673d2b: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 00673d32: push 0x21480 */ { u32 v = 0x21480u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673d3c: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00673d3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673d40: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x673d45u); f_00686fa2();
    /* 00673d45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673d48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673d4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00673d4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673d4e: ret  */ FN_RET(0x00673d10); r_esp += 4; return;
}

void f_00673d50(void) /* BitmapFeature::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673d50);
    /* 00673d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00673d53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673d55: push 0x6ad391 */ { u32 v = 0x6ad391u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673d61: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673d64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00673d69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673d6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00673d6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00673d75: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00673d78: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673d7b: mov dword ptr [eax], 0x6e16ec */ W32((u32)(r_eax), 0x6e16ecu);
    /* 00673d81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673d88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673d8b: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673d8f: je 0x673dc0 */ if (fZ) goto L_00673dc0;
L_00673d91:; BB(0x00673d91);
    /* 00673d91: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673d94: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00673d97: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00673d9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673d9d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00673da0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673da4: je 0x673db9 */ if (fZ) goto L_00673db9;
L_00673da6:; BB(0x00673da6);
    /* 00673da6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673da8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673dab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00673dad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673db0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00673db2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x673db4u); call_ind(t); }
    /* 00673db4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00673db7: jmp 0x673dc0 */ goto L_00673dc0;
L_00673db9:; BB(0x00673db9);
    /* 00673db9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00673dc0:; BB(0x00673dc0);
    /* 00673dc0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673dc7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673dca: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x673dcfu); f_005f4ad0();
    /* 00673dcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673dd2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673dd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673dda: mov esp, ebp */ r_esp = r_ebp;
    /* 00673ddc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673ddd: ret  */ FN_RET(0x00673d50); r_esp += 4; return;
}

void f_00673de0(void) /* BitmapFeature::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673de0);
    /* 00673de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00673de3: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673de6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00673de9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673dec: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00673def: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00673df2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673df5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00673df8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00673dfb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673dfe: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00673e01: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00673e04: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673e07: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00673e0a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00673e0d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673e10: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00673e13: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00673e16: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00673e19: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00673e1c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00673e1f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00673e22: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00673e25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00673e28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673e29: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00673e2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673e2d: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00673e30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673e31: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x673e36u); f_005ec3a0();
    /* 00673e36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673e39: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673e3c: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673e40: je 0x673f2f */ if (fZ) goto L_00673f2f;
L_00673e46:; BB(0x00673e46);
    /* 00673e46: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673e49: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673e4d: je 0x673f2f */ if (fZ) goto L_00673f2f;
L_00673e53:; BB(0x00673e53);
    /* 00673e53: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673e56: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x673e5bu); f_005f54a0();
    /* 00673e5b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00673e5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673e60: je 0x673f2f */ if (fZ) goto L_00673f2f;
L_00673e66:; BB(0x00673e66);
    /* 00673e66: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673e69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673e6c: sub ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00673e6f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00673e72: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673e75: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00673e78: sub eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00673e7b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00673e7e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673e81: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00673e84: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673e87: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00673e8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673e8d: sub edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00673e90: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00673e93: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00673e96: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673e99: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00673e9c: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x673ea1u); f_005f84f0();
    /* 00673ea1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00673ea4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673ea7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00673eaa: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x673eafu); f_005f84d0();
    /* 00673eaf: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00673eb2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673eb5: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00673eb8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00673ebb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00673ebe: add eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00673ec1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00673ec4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673ec7: add ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673eca: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00673ecd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673ed0: add edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00673ed3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00673ed6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673ed9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00673edc: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 00673ee2: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00673ee5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673ee8: mov eax, esp */ r_eax = r_esp;
    /* 00673eea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673eed: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00673eef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673ef2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00673ef5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00673ef8: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00673efb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673efe: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00673f01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673f04: mov eax, esp */ r_eax = r_esp;
    /* 00673f06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673f09: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00673f0b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00673f0e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00673f11: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673f14: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00673f17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673f1a: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00673f1d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00673f20: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00673f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673f24: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673f27: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00673f2a: call 0x62e3c0 */ r_esp -= 4; W32(r_esp, 0x673f2fu); f_0062e3c0();
L_00673f2f:; BB(0x00673f2f);
    /* 00673f2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00673f31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673f32: ret 4 */ FN_RET(0x00673de0); r_esp += 8; return;
}

void f_00673f40(void) /* BitmapFeature::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673f40);
    /* 00673f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00673f43: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673f46: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00673f49: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673f4c: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 00673f50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673f52: jne 0x673fc6 */ if (!fZ) goto L_00673fc6;
L_00673f54:; BB(0x00673f54);
    /* 00673f54: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673f57: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x673f5cu); f_005f5420();
    /* 00673f5c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673f5f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00673f62: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00673f65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673f68: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00673f6b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00673f6e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673f71: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00673f74: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00673f77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673f7a: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00673f7d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00673f80: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673f83: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00673f86: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673f89: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00673f8c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00673f8f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00673f92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673f95: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00673f98: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00673f9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673f9c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00673fa1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00673fa4: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00673faa: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00673fad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00673faf: mov ecx, eax */ r_ecx = r_eax;
    /* 00673fb1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00673fb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x673fb6u); call_ind(t); }
    /* 00673fb6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673fb9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00673fbb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673fbe: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00673fc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x673fc6u); call_ind(t); }
L_00673fc6:; BB(0x00673fc6);
    /* 00673fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00673fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673fc9: ret  */ FN_RET(0x00673f40); r_esp += 4; return;
}

void f_00673fd0(void) /* BitmapFeature::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673fd0);
    /* 00673fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00673fd3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673fd6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00673fd9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673fdc: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 00673fe0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673fe2: je 0x674056 */ if (fZ) goto L_00674056;
L_00673fe4:; BB(0x00673fe4);
    /* 00673fe4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673fe7: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x673fecu); f_005f5440();
    /* 00673fec: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673fef: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00673ff2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00673ff5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673ff8: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00673ffb: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00673ffe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00674001: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00674004: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00674007: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067400a: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0067400d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00674010: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00674013: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00674016: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00674019: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0067401c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067401f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00674022: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674025: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00674028: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0067402b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067402c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00674031: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00674034: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067403a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0067403d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067403f: mov ecx, eax */ r_ecx = r_eax;
    /* 00674041: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00674044: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x674046u); call_ind(t); }
    /* 00674046: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00674049: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067404b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067404e: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00674054: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x674056u); call_ind(t); }
L_00674056:; BB(0x00674056);
    /* 00674056: mov esp, ebp */ r_esp = r_ebp;
    /* 00674058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674059: ret  */ FN_RET(0x00673fd0); r_esp += 4; return;
}

