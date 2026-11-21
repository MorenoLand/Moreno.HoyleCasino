#include "protos.h"

void f_00443c50(void) /* HorseRacingRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443c50);
    /* 00443c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00443c53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443c55: push 0x69eae8 */ { u32 v = 0x69eae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00443c5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00443c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443c61: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443c64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00443c69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443c6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443c6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00443c6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00443c75: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00443c78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443c7b: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x443c80u); f_005d7b60();
    /* 00443c80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443c87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00443c8a: mov dword ptr [eax], 0x6b8424 */ W32((u32)(r_eax), 0x6b8424u);
    /* 00443c90: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443c93: mov dword ptr [0x7906ec], ecx */ W32((u32)(0x7906ecu), r_ecx);
    /* 00443c99: mov dword ptr [0x7906f0], 0 */ W32((u32)(0x7906f0u), 0x0u);
    /* 00443ca3: mov dword ptr [0x7906f4], 0 */ W32((u32)(0x7906f4u), 0x0u);
    /* 00443cad: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00443cb3: jmp 0x443cc1 */ goto L_00443cc1;
L_00443cb5:; BB(0x00443cb5);
    /* 00443cb5: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00443cb9: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00443cbd: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_00443cc1:; BB(0x00443cc1);
    /* 00443cc1: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00443cc5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443cc8: jge 0x443d70 */ if ((fS==fO)) goto L_00443d70;
L_00443cce:; BB(0x00443cce);
    /* 00443cce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443cd0: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00443cd4: add ecx, 0x1d4c4 */ {  u32 a = r_ecx; u32 b = 0x1d4c4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443cda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443cdb: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00443ce0: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00443ce6: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00443ce9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x443ceeu); f_006044b0();
    /* 00443cee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443cf0: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00443cf4: add eax, 0x1d4d0 */ {  u32 a = r_eax; u32 b = 0x1d4d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443cf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443cfa: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00443cff: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00443d05: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00443d08: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x443d0du); f_006044b0();
    /* 00443d0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d0f: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00443d13: add edx, 0x1d4d9 */ {  u32 a = r_edx; u32 b = 0x1d4d9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443d19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443d1a: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d1f: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00443d24: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00443d27: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x443d2cu); f_006044b0();
    /* 00443d2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d2e: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00443d32: add ecx, 0x1d4e1 */ {  u32 a = r_ecx; u32 b = 0x1d4e1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443d38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443d39: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d3e: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00443d44: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00443d47: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x443d4cu); f_006044b0();
    /* 00443d4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d4e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00443d52: add eax, 0x1d4e5 */ {  u32 a = r_eax; u32 b = 0x1d4e5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443d57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443d58: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d5d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00443d63: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00443d66: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x443d6bu); f_006044b0();
    /* 00443d6b: jmp 0x443cb5 */ goto L_00443cb5;
L_00443d70:; BB(0x00443d70);
    /* 00443d70: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443d73: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 00443d7d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00443d80: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 00443d8a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443d8d: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 00443d97: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443d9a: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00443da4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00443dab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00443dae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443db1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00443db8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00443db9: mov esp, ebp */ r_esp = r_ebp;
    /* 00443dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443dbc: ret  */ FN_RET(0x00443c50); r_esp += 4; return;
}

void f_00443dc0(void) /* HorseRacingRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443dc0);
    /* 00443dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443dc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443dc5: push 0x69eb0b */ { u32 v = 0x69eb0bu; r_esp -= 4; W32(r_esp, v); }
    /* 00443dca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00443dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443dd1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443dd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00443dd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443ddc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00443ddf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00443de5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00443de8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443deb: mov dword ptr [eax], 0x6b8424 */ W32((u32)(r_eax), 0x6b8424u);
    /* 00443df1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443df8: mov dword ptr [0x7906ec], 0 */ W32((u32)(0x7906ecu), 0x0u);
    /* 00443e02: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00443e08: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00443e0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443e0e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00443e11: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443e15: je 0x443e2a */ if (fZ) goto L_00443e2a;
L_00443e17:; BB(0x00443e17);
    /* 00443e17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e19: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443e1c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443e1e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443e21: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443e23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443e25u); call_ind(t); }
    /* 00443e25: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00443e28: jmp 0x443e31 */ goto L_00443e31;
L_00443e2a:; BB(0x00443e2a);
    /* 00443e2a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00443e31:; BB(0x00443e31);
    /* 00443e31: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443e37: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00443e3a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443e3d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00443e40: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443e44: je 0x443e59 */ if (fZ) goto L_00443e59;
L_00443e46:; BB(0x00443e46);
    /* 00443e46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e48: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443e4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443e4d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443e50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443e52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443e54u); call_ind(t); }
    /* 00443e54: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00443e57: jmp 0x443e60 */ goto L_00443e60;
L_00443e59:; BB(0x00443e59);
    /* 00443e59: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00443e60:; BB(0x00443e60);
    /* 00443e60: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00443e67: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443e6a: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x443e6fu); f_005d7bd0();
    /* 00443e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00443e79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00443e7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00443e7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443e7d: ret  */ FN_RET(0x00443dc0); r_esp += 4; return;
}

void f_00443e80(void) /* HorseRacingRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443e80);
    /* 00443e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00443e83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443e85: push 0x69eb47 */ { u32 v = 0x69eb47u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00443e90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443e91: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443e94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00443e99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443e9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00443e9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00443ea5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00443ea8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00443eab: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x443eb0u); f_005d8230();
    /* 00443eb0: push 0x27c */ { u32 v = 0x27cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443eb5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x443ebau); f_00686d82();
    /* 00443eba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443ebd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00443ec0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443ec7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443ecb: je 0x443eda */ if (fZ) goto L_00443eda;
L_00443ecd:; BB(0x00443ecd);
    /* 00443ecd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443ed0: call 0x444a50 */ r_esp -= 4; W32(r_esp, 0x443ed5u); f_00444a50();
    /* 00443ed5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00443ed8: jmp 0x443ee1 */ goto L_00443ee1;
L_00443eda:; BB(0x00443eda);
    /* 00443eda: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00443ee1:; BB(0x00443ee1);
    /* 00443ee1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00443ee4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00443ee7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00443eee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443ef1: mov dword ptr [0x7906f0], ecx */ W32((u32)(0x7906f0u), r_ecx);
    /* 00443ef7: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00443efd: call 0x444b10 */ r_esp -= 4; W32(r_esp, 0x443f02u); f_00444b10();
    /* 00443f02: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443f07: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x443f0cu); f_00686d82();
    /* 00443f0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443f0f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00443f12: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00443f19: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443f1d: je 0x443f2c */ if (fZ) goto L_00443f2c;
L_00443f1f:; BB(0x00443f1f);
    /* 00443f1f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443f22: call 0x43f270 */ r_esp -= 4; W32(r_esp, 0x443f27u); f_0043f270();
    /* 00443f27: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00443f2a: jmp 0x443f33 */ goto L_00443f33;
L_00443f2c:; BB(0x00443f2c);
    /* 00443f2c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00443f33:; BB(0x00443f33);
    /* 00443f33: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00443f36: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00443f39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00443f40: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443f43: mov dword ptr [0x7906f4], eax */ W32((u32)(0x7906f4u), r_eax);
    /* 00443f48: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443f4e: call 0x43fa00 */ r_esp -= 4; W32(r_esp, 0x443f53u); f_0043fa00();
    /* 00443f53: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00443f55: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x443f5au); f_00686d82();
    /* 00443f5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443f5d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00443f60: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00443f67: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443f6b: je 0x443f88 */ if (fZ) goto L_00443f88;
L_00443f6d:; BB(0x00443f6d);
    /* 00443f6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443f6f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443f72: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x443f77u); f_005fc0d0();
    /* 00443f77: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443f7a: mov dword ptr [ecx], 0x6b8724 */ W32((u32)(r_ecx), 0x6b8724u);
    /* 00443f80: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443f83: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00443f86: jmp 0x443f8f */ goto L_00443f8f;
L_00443f88:; BB(0x00443f88);
    /* 00443f88: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00443f8f:; BB(0x00443f8f);
    /* 00443f8f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00443f92: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00443f95: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00443f9c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443f9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443fa0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00443fa3: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x443fa8u); f_005f1b70();
    /* 00443fa8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00443fab: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00443fae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00443fb1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00443fb4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443fb6: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00443fb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443fbbu); call_ind(t); }
    /* 00443fbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443fbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00443fc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00443fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00443fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443fc9: ret  */ FN_RET(0x00443e80); r_esp += 4; return;
}

void f_00443fd0(void) /* HorseRacingRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443fd0);
    /* 00443fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443fd7: cmp dword ptr [0x7906f0], 0 */ {  u32 a = R32((u32)(0x7906f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443fde: jne 0x443fe4 */ if (!fZ) goto L_00443fe4;
L_00443fe0:; BB(0x00443fe0);
    /* 00443fe0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00443fe2: jmp 0x443fef */ goto L_00443fef;
L_00443fe4:; BB(0x00443fe4);
    /* 00443fe4: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 00443fe9: mov al, byte ptr [eax + 0x25e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x25eu))) & 0xffu);
L_00443fef:; BB(0x00443fef);
    /* 00443fef: mov esp, ebp */ r_esp = r_ebp;
    /* 00443ff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443ff2: ret  */ FN_RET(0x00443fd0); r_esp += 4; return;
}

void f_00444000(void) /* HorseRacingRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444000);
    /* 00444000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444001: mov ebp, esp */ r_ebp = r_esp;
    /* 00444003: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444006: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444007: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00444008: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044400b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044400e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044400f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x444014u); f_005dcb00();
    /* 00444014: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444017: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0044401d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044401e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00444024: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444025: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00444028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444029: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0044402f: call 0x444aa0 */ r_esp -= 4; W32(r_esp, 0x444034u); f_00444aa0();
    /* 00444034: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444037: mov ecx, eax */ r_ecx = r_eax;
    /* 00444039: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44403eu); f_0064c5c0();
    /* 0044403e: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00444040: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00444043: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00444049: call 0x444aa0 */ r_esp -= 4; W32(r_esp, 0x44404eu); f_00444aa0();
    /* 0044404e: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00444051: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00444054: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444057: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444058: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44405du); f_005dcb00();
    /* 0044405d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444060: mov ecx, eax */ r_ecx = r_eax;
    /* 00444062: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x444067u); f_0063b0a0();
    /* 00444067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00444068: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00444069: mov esp, ebp */ r_esp = r_ebp;
    /* 0044406b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044406c: ret 4 */ FN_RET(0x00444000); r_esp += 8; return;
}

void f_00444070(void) /* HorseRacingRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444070);
    /* 00444070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444071: mov ebp, esp */ r_ebp = r_esp;
    /* 00444073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444077: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044407a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044407b: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00444081: call 0x444d30 */ r_esp -= 4; W32(r_esp, 0x444086u); f_00444d30();
    /* 00444086: mov esp, ebp */ r_esp = r_ebp;
    /* 00444088: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444089: ret 4 */ FN_RET(0x00444070); r_esp += 8; return;
}

void f_00444380(void) /* HorseRacingRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444380);
    /* 00444380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444381: mov ebp, esp */ r_ebp = r_esp;
    /* 00444383: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444386: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444389: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044438c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044438f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444396: je 0x4443ac */ if (fZ) goto L_004443ac;
L_00444398:; BB(0x00444398);
    /* 00444398: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044439f: je 0x4443fd */ if (fZ) goto L_004443fd;
L_004443a1:; BB(0x004443a1);
    /* 004443a1: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004443a8: je 0x44440e */ if (fZ) goto L_0044440e;
L_004443aa:; BB(0x004443aa);
    /* 004443aa: jmp 0x444429 */ goto L_00444429;
L_004443ac:; BB(0x004443ac);
    /* 004443ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004443ae: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004443b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004443b6: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4443bbu); f_005fe640();
    /* 004443bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004443bd: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004443c2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004443c5: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4443cau); f_005fe640();
    /* 004443ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004443cc: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004443d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004443d4: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4443d9u); f_005fe640();
    /* 004443d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004443db: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004443e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004443e3: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4443e8u); f_005fe640();
    /* 004443e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004443ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004443ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004443ee: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 004443f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004443f6: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4443fbu); f_005fe240();
    /* 004443fb: jmp 0x444429 */ goto L_00444429;
L_004443fd:; BB(0x004443fd);
    /* 004443fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004443ff: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00444404: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444407: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x44440cu); f_005fe640();
    /* 0044440c: jmp 0x444429 */ goto L_00444429;
L_0044440e:; BB(0x0044440e);
    /* 0044440e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444410: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00444412: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444415: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x44441au); f_005fe640();
    /* 0044441a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044441c: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00444421: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444424: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x444429u); f_005fe640();
L_00444429:; BB(0x00444429);
    /* 00444429: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044442c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044442d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00444430: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444431: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444434: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x444439u); f_005d8670();
    /* 00444439: mov esp, ebp */ r_esp = r_ebp;
    /* 0044443b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044443c: ret 8 */ FN_RET(0x00444380); r_esp += 12; return;
}

