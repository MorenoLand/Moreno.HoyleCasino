#include "protos.h"

void f_005f4d00(void) /* sciActor::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4d00);
    /* 005f4d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d01: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4d03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4d06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4d09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4d10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4d12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4d15: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f4d18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4d1au); call_ind(t); }
    /* 005f4d1a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f4d1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4d1f: jne 0x5f4d26 */ if (!fZ) goto L_005f4d26;
L_005f4d21:; BB(0x005f4d21);
    /* 005f4d21: jmp 0x5f4e14 */ goto L_005f4e14;
L_005f4d26:; BB(0x005f4d26);
    /* 005f4d26: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4d29: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005f4d2c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f4d2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4d32: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4d35: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f4d38: cmp dword ptr [ebp - 8], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005f4d3c: ja 0x5f4e03 */ if ((!fC&&!fZ)) goto L_005f4e03;
L_005f4d42:; BB(0x005f4d42);
    /* 005f4d42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4d45: movzx eax, byte ptr [edx + 0x5f4e34] */ r_eax = (u32)R8((u32)(r_edx+0x5f4e34u));
    /* 005f4d4c: jmp dword ptr [eax*4 + 0x5f4e1c] */ { u32 t = R32((u32)(r_eax*4+0x5f4e1cu)); switch (t) { case 0x5f4d53u: goto L_005f4d53; case 0x5f4d90u: goto L_005f4d90; case 0x5f4dcau: goto L_005f4dca; case 0x5f4dddu: goto L_005f4ddd; case 0x5f4df0u: goto L_005f4df0; case 0x5f4e03u: goto L_005f4e03; default: UNSUP(0x005f4d4c, "jump table entry is not a known target"); } }
L_005f4d53:; BB(0x005f4d53);
    /* 005f4d53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4d56: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f4d59: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4d5c: je 0x5f4d6f */ if (fZ) goto L_005f4d6f;
L_005f4d5e:; BB(0x005f4d5e);
    /* 005f4d5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4d65: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4d67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4d6a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f4d6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4d6fu); call_ind(t); }
L_005f4d6f:; BB(0x005f4d6f);
    /* 005f4d6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4d72: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f4d75: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4d78: je 0x5f4d8b */ if (fZ) goto L_005f4d8b;
L_005f4d7a:; BB(0x005f4d7a);
    /* 005f4d7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4d81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4d83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4d86: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005f4d89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4d8bu); call_ind(t); }
L_005f4d8b:; BB(0x005f4d8b);
    /* 005f4d8b: jmp 0x5f4e14 */ goto L_005f4e14;
L_005f4d90:; BB(0x005f4d90);
    /* 005f4d90: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4d93: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f4d96: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4d99: je 0x5f4dac */ if (fZ) goto L_005f4dac;
L_005f4d9b:; BB(0x005f4d9b);
    /* 005f4d9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4da2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4da4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4da7: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005f4daa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4dacu); call_ind(t); }
L_005f4dac:; BB(0x005f4dac);
    /* 005f4dac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4daf: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f4db2: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4db5: je 0x5f4dc8 */ if (fZ) goto L_005f4dc8;
L_005f4db7:; BB(0x005f4db7);
    /* 005f4db7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4dbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4dbe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4dc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4dc3: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f4dc6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4dc8u); call_ind(t); }
L_005f4dc8:; BB(0x005f4dc8);
    /* 005f4dc8: jmp 0x5f4e14 */ goto L_005f4e14;
L_005f4dca:; BB(0x005f4dca);
    /* 005f4dca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4dcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4dce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4dd1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f4dd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4dd6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005f4dd9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f4ddbu); call_ind(t); }
    /* 005f4ddb: jmp 0x5f4e14 */ goto L_005f4e14;
L_005f4ddd:; BB(0x005f4ddd);
    /* 005f4ddd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4de1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4de4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4de6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4de9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f4dec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4deeu); call_ind(t); }
    /* 005f4dee: jmp 0x5f4e14 */ goto L_005f4e14;
L_005f4df0:; BB(0x005f4df0);
    /* 005f4df0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4df4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4df7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f4df9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4dfc: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005f4dff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f4e01u); call_ind(t); }
    /* 005f4e01: jmp 0x5f4e14 */ goto L_005f4e14;
L_005f4e03:; BB(0x005f4e03);
    /* 005f4e03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4e0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4e0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4e0f: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005f4e12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4e14u); call_ind(t); }
L_005f4e14:; BB(0x005f4e14);
    /* 005f4e14: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4e16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4e17: ret 4 */ FN_RET(0x005f4d00); r_esp += 8; return;
}

void f_005f5f50(void) /* sciActor::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5f50);
    /* 005f5f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5f57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f5a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5f5f5fu); f_005f5bf0();
    /* 005f5f5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f62: mov dword ptr [eax], 0x6d6a2c */ W32((u32)(r_eax), 0x6d6a2cu);
    /* 005f5f68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f6b: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 005f5f75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f78: mov dword ptr [edx + 0x184], 4 */ W32((u32)(r_edx+0x184u), 0x4u);
    /* 005f5f82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f85: mov dword ptr [eax + 0x188], 0x19 */ W32((u32)(r_eax+0x188u), 0x19u);
    /* 005f5f8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f92: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5f94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5f95: ret  */ FN_RET(0x005f5f50); r_esp += 4; return;
}

void f_005f5fa0(void) /* sciActor::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5fa0);
    /* 005f5fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5fa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fa5: push 0x6a9f68 */ { u32 v = 0x6a9f68u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5faa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fb2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f5fb7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f5fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f5fbd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f5fc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f5fc6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5fc9: mov dword ptr [eax], 0x6d6a2c */ W32((u32)(r_eax), 0x6d6a2cu);
    /* 005f5fcf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f5fd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5fdb: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x5f5fe0u); f_005f6050();
    /* 005f5fe0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5fe7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f5fea: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x5f5fefu); f_005f5c40();
    /* 005f5fef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5ff2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5ff9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5ffa: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5ffd: ret  */ FN_RET(0x005f5fa0); r_esp += 4; return;
}

