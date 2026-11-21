#include "protos.h"

void f_005d4cf0(void) /* CasinoPlayer::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4cf0);
    /* 005d4cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4cf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cf5: push 0x6a8fe8 */ { u32 v = 0x6a8fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d4d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d01: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4d04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d4d09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d4d0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d4d0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d4d15: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005d4d18: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d1b: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x5d4d20u); f_0063a0c0();
    /* 005d4d20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4d27: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d2a: mov dword ptr [eax], 0x6d3ce4 */ W32((u32)(r_eax), 0x6d3ce4u);
    /* 005d4d30: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d33: mov dword ptr [ecx + 0x49c], 0 */ W32((u32)(r_ecx+0x49cu), 0x0u);
    /* 005d4d3d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d4d44: jmp 0x5d4d4f */ goto L_005d4d4f;
L_005d4d46:; BB(0x005d4d46);
    /* 005d4d46: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4d49: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4d4c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005d4d4f:; BB(0x005d4d4f);
    /* 005d4d4f: cmp dword ptr [ebp - 0x10], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4d53: jge 0x5d4d79 */ if ((fS==fO)) goto L_005d4d79;
L_005d4d55:; BB(0x005d4d55);
    /* 005d4d55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4d58: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d5b: mov dword ptr [ecx + eax*4 + 0x3ac], 0 */ W32((u32)(r_ecx+r_eax*4+0x3acu), 0x0u);
    /* 005d4d66: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4d69: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d6c: mov dword ptr [eax + edx*4 + 0x424], 0 */ W32((u32)(r_eax+r_edx*4+0x424u), 0x0u);
    /* 005d4d77: jmp 0x5d4d46 */ goto L_005d4d46;
L_005d4d79:; BB(0x005d4d79);
    /* 005d4d79: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d7c: mov byte ptr [ecx + 0x4a0], 0 */ W8((u32)(r_ecx+0x4a0u), 0x0u);
    /* 005d4d83: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d86: mov byte ptr [edx + 0x4a1], 0 */ W8((u32)(r_edx+0x4a1u), 0x0u);
    /* 005d4d8d: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d90: mov byte ptr [eax + 0x4a2], 0 */ W8((u32)(r_eax+0x4a2u), 0x0u);
    /* 005d4d97: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4d9a: mov dword ptr [ecx + 0x4a4], 0 */ W32((u32)(r_ecx+0x4a4u), 0x0u);
    /* 005d4da4: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4da7: mov dword ptr [edx + 0x4a8], 0 */ W32((u32)(r_edx+0x4a8u), 0x0u);
    /* 005d4db1: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4db4: mov dword ptr [eax + 0x4ac], 1 */ W32((u32)(r_eax+0x4acu), 0x1u);
    /* 005d4dbe: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4dc1: mov byte ptr [ecx + 0x4b0], 0 */ W8((u32)(r_ecx+0x4b0u), 0x0u);
    /* 005d4dc8: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4dcb: mov byte ptr [edx + 0x4b1], 0 */ W8((u32)(r_edx+0x4b1u), 0x0u);
    /* 005d4dd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dd6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4ddbu); f_0064c8a0();
    /* 005d4ddb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4dde: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d4de1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d4de4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4de7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4dea: mov dword ptr [eax + 0x4ec], ecx */ W32((u32)(r_eax+0x4ecu), r_ecx);
    /* 005d4df0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4df3: mov dword ptr [eax + 0x4f0], edx */ W32((u32)(r_eax+0x4f0u), r_edx);
    /* 005d4df9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dfd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4e02u); f_0064c8a0();
    /* 005d4e02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4e05: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d4e08: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d4e0b: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4e0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4e11: mov dword ptr [eax + 0x4e4], ecx */ W32((u32)(r_eax+0x4e4u), r_ecx);
    /* 005d4e17: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d4e1a: mov dword ptr [eax + 0x4e8], edx */ W32((u32)(r_eax+0x4e8u), r_edx);
    /* 005d4e20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e24: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4e29u); f_0064c8a0();
    /* 005d4e29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4e2c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d4e2f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005d4e32: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4e35: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4e38: mov dword ptr [eax + 0x4b4], ecx */ W32((u32)(r_eax+0x4b4u), r_ecx);
    /* 005d4e3e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d4e41: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 005d4e47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e4b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4e50u); f_0064c8a0();
    /* 005d4e50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4e53: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d4e56: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d4e59: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4e5c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d4e5f: mov dword ptr [eax + 0x4bc], ecx */ W32((u32)(r_eax+0x4bcu), r_ecx);
    /* 005d4e65: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4e68: mov dword ptr [eax + 0x4c0], edx */ W32((u32)(r_eax+0x4c0u), r_edx);
    /* 005d4e6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e72: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4e77u); f_0064c8a0();
    /* 005d4e77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4e7a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d4e7d: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005d4e80: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4e83: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d4e86: mov dword ptr [eax + 0x4d4], ecx */ W32((u32)(r_eax+0x4d4u), r_ecx);
    /* 005d4e8c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d4e8f: mov dword ptr [eax + 0x4d8], edx */ W32((u32)(r_eax+0x4d8u), r_edx);
    /* 005d4e95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e99: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4e9eu); f_0064c8a0();
    /* 005d4e9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4ea1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d4ea4: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005d4ea7: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4eaa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d4ead: mov dword ptr [eax + 0x4dc], ecx */ W32((u32)(r_eax+0x4dcu), r_ecx);
    /* 005d4eb3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d4eb6: mov dword ptr [eax + 0x4e0], edx */ W32((u32)(r_eax+0x4e0u), r_edx);
    /* 005d4ebc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ebe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ec0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4ec5u); f_0064c8a0();
    /* 005d4ec5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4ec8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005d4ecb: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005d4ece: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4ed1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d4ed4: mov dword ptr [eax + 0x4c4], ecx */ W32((u32)(r_eax+0x4c4u), r_ecx);
    /* 005d4eda: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d4edd: mov dword ptr [eax + 0x4c8], edx */ W32((u32)(r_eax+0x4c8u), r_edx);
    /* 005d4ee3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ee5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ee7: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4eecu); f_0064c8a0();
    /* 005d4eec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4eef: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005d4ef2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005d4ef5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4ef8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d4efb: mov dword ptr [eax + 0x4cc], ecx */ W32((u32)(r_eax+0x4ccu), r_ecx);
    /* 005d4f01: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d4f04: mov dword ptr [eax + 0x4d0], edx */ W32((u32)(r_eax+0x4d0u), r_edx);
    /* 005d4f0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f0e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d4f13u); f_0064c8a0();
    /* 005d4f13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4f16: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005d4f19: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005d4f1c: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4f1f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d4f22: mov dword ptr [eax + 0x4d4], ecx */ W32((u32)(r_eax+0x4d4u), r_ecx);
    /* 005d4f28: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d4f2b: mov dword ptr [eax + 0x4d8], edx */ W32((u32)(r_eax+0x4d8u), r_edx);
    /* 005d4f31: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d4f38: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d4f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4f3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d4f45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d4f46: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4f49: ret  */ FN_RET(0x005d4cf0); r_esp += 4; return;
}

void f_005d4f50(void) /* CasinoPlayer::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4f50);
    /* 005d4f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4f53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f55: push 0x6a900b */ { u32 v = 0x6a900bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d4f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f61: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4f64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d4f69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d4f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4f6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d4f6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d4f75: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d4f78: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4f7b: mov dword ptr [eax], 0x6d3ce4 */ W32((u32)(r_eax), 0x6d3ce4u);
    /* 005d4f81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4f88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4f8b: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 005d4f91: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d4f94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4f97: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d4f9a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f9e: je 0x5d4fb3 */ if (fZ) goto L_005d4fb3;
L_005d4fa0:; BB(0x005d4fa0);
    /* 005d4fa0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4fa2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4fa5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4fa7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4faa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4fac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4faeu); call_ind(t); }
    /* 005d4fae: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d4fb1: jmp 0x5d4fba */ goto L_005d4fba;
L_005d4fb3:; BB(0x005d4fb3);
    /* 005d4fb3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d4fba:; BB(0x005d4fba);
    /* 005d4fba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4fbd: call 0x5d6550 */ r_esp -= 4; W32(r_esp, 0x5d4fc2u); f_005d6550();
    /* 005d4fc2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4fc5: call 0x5d6600 */ r_esp -= 4; W32(r_esp, 0x5d4fcau); f_005d6600();
    /* 005d4fca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d4fd1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4fd4: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x5d4fd9u); f_0063a120();
    /* 005d4fd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4fdc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d4fe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d4fe4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4fe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4fe7: ret  */ FN_RET(0x005d4f50); r_esp += 4; return;
}

void f_005d4ff0(void) /* CasinoPlayer::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4ff0);
    /* 005d4ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4ff3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4ff6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d4ff9: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ffd: jne 0x5d500d */ if (!fZ) goto L_005d500d;
L_005d4fff:; BB(0x005d4fff);
    /* 005d4fff: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d5005: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5d500au); f_005f3bf0();
    /* 005d500a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005d500d:; BB(0x005d500d);
    /* 005d500d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d5010: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d5016: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d5019: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005d501c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d501d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5020: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5021: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d5027: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5029: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d502f: mov edx, dword ptr [eax + 0x32c] */ r_edx = R32((u32)(r_eax+0x32cu));
    /* 005d5035: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d5037u); call_ind(t); }
    /* 005d5037: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d503d: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5d5042u); f_005f3bf0();
    /* 005d5042: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5045: jne 0x5d50b2 */ if (!fZ) goto L_005d50b2;
L_005d5047:; BB(0x005d5047);
    /* 005d5047: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d504b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d5050u); f_0064c8a0();
    /* 005d5050: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5053: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d5056: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d5059: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d505c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d505f: mov dword ptr [eax + 0x4d4], ecx */ W32((u32)(r_eax+0x4d4u), r_ecx);
    /* 005d5065: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5068: mov dword ptr [eax + 0x4d8], edx */ W32((u32)(r_eax+0x4d8u), r_edx);
    /* 005d506e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5070: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5072: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d5077u); f_0064c8a0();
    /* 005d5077: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d507a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d507d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d5080: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5084: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d5087: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5088: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d508b: call 0x5d5f80 */ r_esp -= 4; W32(r_esp, 0x5d5090u); f_005d5f80();
    /* 005d5090: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5092: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5094: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d5099u); f_0064c8a0();
    /* 005d5099: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d509c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d509f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d50a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d50a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d50a6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d50a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d50aa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d50ad: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5d50b2u); f_005d6050();
L_005d50b2:; BB(0x005d50b2);
    /* 005d50b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d50b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d50b5: ret 4 */ FN_RET(0x005d4ff0); r_esp += 8; return;
}

void f_005d50c0(void) /* CasinoPlayer::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d50c0);
    /* 005d50c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d50c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d50c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d50c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d50c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d50cc: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d50d1u); f_005d52e0();
    /* 005d50d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d50d4: push 0x76f4 */ { u32 v = 0x76f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d50d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d50db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d50de: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 005d50e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d50e5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5d50eau); f_00686fa2();
    /* 005d50ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d50ed: mov dword ptr [ebp - 0x10], 0x76f4 */ W32((u32)(r_ebp+0xfffffff0u), 0x76f4u);
    /* 005d50f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d50f6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d50fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d50fe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d5104: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005d510a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d510cu); call_ind(t); }
    /* 005d510c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d510f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5111: je 0x5d5138 */ if (fZ) goto L_005d5138;
L_005d5113:; BB(0x005d5113);
    /* 005d5113: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d511a: jne 0x5d5138 */ if (!fZ) goto L_005d5138;
L_005d511c:; BB(0x005d511c);
    /* 005d511c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d511f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5120: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005d5126: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5128: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d512e: mov edx, dword ptr [eax + 0x264] */ r_edx = R32((u32)(r_eax+0x264u));
    /* 005d5134: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d5136u); call_ind(t); }
    /* 005d5136: jmp 0x5d514b */ goto L_005d514b;
L_005d5138:; BB(0x005d5138);
    /* 005d5138: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d513b: mov dword ptr [eax], 0x1388 */ W32((u32)(r_eax), 0x1388u);
    /* 005d5141: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d5144: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
L_005d514b:; BB(0x005d514b);
    /* 005d514b: mov dword ptr [ebp - 0x18], 0x1e61 */ W32((u32)(r_ebp+0xffffffe8u), 0x1e61u);
    /* 005d5152: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5157: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5d515cu); f_0062fbf0();
    /* 005d515c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d515f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d5162: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5167: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5d516cu); f_0062fbf0();
    /* 005d516c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d516f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d5172: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5177: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5d517cu); f_0062fbf0();
    /* 005d517c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d517f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d5182: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5186: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d518a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d518d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d518e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d5191: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5192: push 0x6d3d08 */ { u32 v = 0x6d3d08u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5197: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d519a: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d519d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d519e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5d51a4u); call_ind(t); }
    /* 005d51a4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d51a7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51aa: mov byte ptr [ecx + 0x28], 1 */ W8((u32)(r_ecx+0x28u), 0x1u);
    /* 005d51ae: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51b1: mov byte ptr [edx + 0x29], 0 */ W8((u32)(r_edx+0x29u), 0x0u);
    /* 005d51b5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51b8: mov byte ptr [eax + 0x2a], 0 */ W8((u32)(r_eax+0x2au), 0x0u);
    /* 005d51bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51bf: mov byte ptr [ecx + 0x30], 1 */ W8((u32)(r_ecx+0x30u), 0x1u);
    /* 005d51c3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51c6: mov byte ptr [edx + 0x5d], 1 */ W8((u32)(r_edx+0x5du), 0x1u);
    /* 005d51ca: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d51d1: jmp 0x5d51dc */ goto L_005d51dc;
L_005d51d3:; BB(0x005d51d3);
    /* 005d51d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d51d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d51d9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005d51dc:; BB(0x005d51dc);
    /* 005d51dc: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d51e0: jge 0x5d51f8 */ if ((fS==fO)) goto L_005d51f8;
L_005d51e2:; BB(0x005d51e2);
    /* 005d51e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51e5: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d51e8: mov byte ptr [ecx + 0x31], 1 */ W8((u32)(r_ecx+0x31u), 0x1u);
    /* 005d51ec: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51ef: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d51f2: mov byte ptr [edx + 0x47], 0 */ W8((u32)(r_edx+0x47u), 0x0u);
    /* 005d51f6: jmp 0x5d51d3 */ goto L_005d51d3;
L_005d51f8:; BB(0x005d51f8);
    /* 005d51f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d51fb: mov byte ptr [eax + 0x3f], 0 */ W8((u32)(r_eax+0x3fu), 0x0u);
    /* 005d51ff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d5202: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 005d5209: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d520c: mov byte ptr [edx + 0x5e], 2 */ W8((u32)(r_edx+0x5eu), 0x2u);
    /* 005d5210: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d5217: jmp 0x5d5222 */ goto L_005d5222;
L_005d5219:; BB(0x005d5219);
    /* 005d5219: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d521c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d521f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005d5222:; BB(0x005d5222);
    /* 005d5222: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5226: jge 0x5d52c7 */ if ((fS==fO)) goto L_005d52c7;
L_005d522c:; BB(0x005d522c);
    /* 005d522c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d522f: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d5232: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d5235: mov byte ptr [edx + ecx + 0x60], 0xff */ W8((u32)(r_edx+r_ecx+0x60u), 0xffu);
    /* 005d523a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d523d: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d5240: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d5243: mov byte ptr [ecx + eax + 0x61], 1 */ W8((u32)(r_ecx+r_eax+0x61u), 0x1u);
    /* 005d5248: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d524b: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d524e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d5251: mov byte ptr [eax + edx + 0x62], 1 */ W8((u32)(r_eax+r_edx+0x62u), 0x1u);
    /* 005d5256: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5259: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d525c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d525f: mov byte ptr [edx + ecx + 0x63], 0 */ W8((u32)(r_edx+r_ecx+0x63u), 0x0u);
    /* 005d5264: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5267: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d526a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d526d: mov byte ptr [ecx + eax + 0x64], 0 */ W8((u32)(r_ecx+r_eax+0x64u), 0x0u);
    /* 005d5272: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5275: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d5278: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d527b: mov dword ptr [eax + edx + 0x7c], 0 */ W32((u32)(r_eax+r_edx+0x7cu), 0x0u);
    /* 005d5283: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5286: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d5289: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d528c: mov dword ptr [edx + ecx + 0x80], 0xfffffc18 */ W32((u32)(r_edx+r_ecx+0x80u), 0xfffffc18u);
    /* 005d5297: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005d529e: jmp 0x5d52a9 */ goto L_005d52a9;
L_005d52a0:; BB(0x005d52a0);
    /* 005d52a0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d52a3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d52a6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005d52a9:; BB(0x005d52a9);
    /* 005d52a9: cmp dword ptr [ebp - 0x20], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d52ad: jge 0x5d52c2 */ if ((fS==fO)) goto L_005d52c2;
L_005d52af:; BB(0x005d52af);
    /* 005d52af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d52b2: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d52b5: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d52b8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d52bb: mov byte ptr [edx + ecx + 0x65], 0 */ W8((u32)(r_edx+r_ecx+0x65u), 0x0u);
    /* 005d52c0: jmp 0x5d52a0 */ goto L_005d52a0;
L_005d52c2:; BB(0x005d52c2);
    /* 005d52c2: jmp 0x5d5219 */ goto L_005d5219;
L_005d52c7:; BB(0x005d52c7);
    /* 005d52c7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d52ca: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005d52d1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d52d4: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005d52db: mov esp, ebp */ r_esp = r_ebp;
    /* 005d52dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d52de: ret  */ FN_RET(0x005d50c0); r_esp += 4; return;
}

void f_005d5e10(void) /* casinoplayer::func_005d5e10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5e10);
    /* 005d5e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e11: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5e13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5e16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d5e19: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5e1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5e1f: mov dword ptr [eax + 0x4bc], ecx */ W32((u32)(r_eax+0x4bcu), r_ecx);
    /* 005d5e25: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d5e28: mov dword ptr [eax + 0x4c0], edx */ W32((u32)(r_eax+0x4c0u), r_edx);
    /* 005d5e2e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5e31: cmp dword ptr [eax + 0x4bc], 0 */ {  u32 a = R32((u32)(r_eax+0x4bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5e38: jl 0x5d5e46 */ if ((fS!=fO)) goto L_005d5e46;
L_005d5e3a:; BB(0x005d5e3a);
    /* 005d5e3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5e3d: cmp dword ptr [ecx + 0x4c0], 0 */ {  u32 a = R32((u32)(r_ecx+0x4c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5e44: jge 0x5d5e5d */ if ((fS==fO)) goto L_005d5e5d;
L_005d5e46:; BB(0x005d5e46);
    /* 005d5e46: push 0x1b4 */ { u32 v = 0x1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e4b: push 0x6d3d54 */ { u32 v = 0x6d3d54u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e50: push 0x6d3d20 */ { u32 v = 0x6d3d20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e55: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d5e5au); f_005e9f20();
    /* 005d5e5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d5e5d:; BB(0x005d5e5d);
    /* 005d5e5d: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e64: je 0x5d5e9c */ if (fZ) goto L_005d5e9c;
L_005d5e66:; BB(0x005d5e66);
    /* 005d5e66: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005d5e6b: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e6f: je 0x5d5e9c */ if (fZ) goto L_005d5e9c;
L_005d5e71:; BB(0x005d5e71);
    /* 005d5e71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5e74: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5e79u); f_0063aac0();
    /* 005d5e79: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5e7b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5e7e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d5e80: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e84: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d5e87: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005d5e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e8c: jne 0x5d5e9c */ if (!fZ) goto L_005d5e9c;
L_005d5e8e:; BB(0x005d5e8e);
    /* 005d5e8e: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d5e94: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 005d5e97: call 0x5ca8b0 */ r_esp -= 4; W32(r_esp, 0x5d5e9cu); f_005ca8b0();
L_005d5e9c:; BB(0x005d5e9c);
    /* 005d5e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5e9f: ret 8 */ FN_RET(0x005d5e10); r_esp += 12; return;
}

void f_005d60c0(void) /* CasinoPlayer::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d60c0);
    /* 005d60c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d60c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d60c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d60c5: push 0x6a9042 */ { u32 v = 0x6a9042u; r_esp -= 4; W32(r_esp, v); }
    /* 005d60ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d60d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d60d1: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d60d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d60d8: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d60dd: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d60df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d60e0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d60e3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d60e9: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005d60ef: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005d60f6: mov dword ptr [ebp - 0x74], 0x5f5e100 */ W32((u32)(r_ebp+0xffffff8cu), 0x5f5e100u);
    /* 005d60fd: mov dword ptr [ebp - 0x70], 0x989680 */ W32((u32)(r_ebp+0xffffff90u), 0x989680u);
    /* 005d6104: mov dword ptr [ebp - 0x6c], 0xf4240 */ W32((u32)(r_ebp+0xffffff94u), 0xf4240u);
    /* 005d610b: mov dword ptr [ebp - 0x68], 0x7a120 */ W32((u32)(r_ebp+0xffffff98u), 0x7a120u);
    /* 005d6112: mov dword ptr [ebp - 0x64], 0x186a0 */ W32((u32)(r_ebp+0xffffff9cu), 0x186a0u);
    /* 005d6119: mov dword ptr [ebp - 0x60], 0xc350 */ W32((u32)(r_ebp+0xffffffa0u), 0xc350u);
    /* 005d6120: mov dword ptr [ebp - 0x5c], 0x61a8 */ W32((u32)(r_ebp+0xffffffa4u), 0x61a8u);
    /* 005d6127: mov dword ptr [ebp - 0x58], 0x2710 */ W32((u32)(r_ebp+0xffffffa8u), 0x2710u);
    /* 005d612e: mov dword ptr [ebp - 0x54], 0x1388 */ W32((u32)(r_ebp+0xffffffacu), 0x1388u);
    /* 005d6135: mov dword ptr [ebp - 0x50], 0x3e8 */ W32((u32)(r_ebp+0xffffffb0u), 0x3e8u);
    /* 005d613c: mov dword ptr [ebp - 0x4c], 0x1f4 */ W32((u32)(r_ebp+0xffffffb4u), 0x1f4u);
    /* 005d6143: mov dword ptr [ebp - 0x48], 0x64 */ W32((u32)(r_ebp+0xffffffb8u), 0x64u);
    /* 005d614a: mov dword ptr [ebp - 0x44], 0x32 */ W32((u32)(r_ebp+0xffffffbcu), 0x32u);
    /* 005d6151: mov dword ptr [ebp - 0x40], 0x19 */ W32((u32)(r_ebp+0xffffffc0u), 0x19u);
    /* 005d6158: mov dword ptr [ebp - 0x3c], 0xa */ W32((u32)(r_ebp+0xffffffc4u), 0xau);
    /* 005d615f: mov dword ptr [ebp - 0x38], 5 */ W32((u32)(r_ebp+0xffffffc8u), 0x5u);
    /* 005d6166: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005d616d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d6174: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005d6177: mov ecx, dword ptr [ebp + eax*4 - 0x74] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff8cu));
    /* 005d617b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d617e: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005d6185: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005d618c: mov dword ptr [ebp - 0x80], 0xfaa */ W32((u32)(r_ebp+0xffffff80u), 0xfaau);
    /* 005d6193: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d6196: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d6199: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005d619c: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 005d619f: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005d61a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61a5: je 0x5d61ac */ if (fZ) goto L_005d61ac;
L_005d61a7:; BB(0x005d61a7);
    /* 005d61a7: jmp 0x5d653d */ goto L_005d653d;
L_005d61ac:; BB(0x005d61ac);
    /* 005d61ac: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005d61b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61b2: je 0x5d61c9 */ if (fZ) goto L_005d61c9;
L_005d61b4:; BB(0x005d61b4);
    /* 005d61b4: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d61ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d61bc: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d61c2: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005d61c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d61c7u); call_ind(t); }
    /* 005d61c7: jmp 0x5d61dc */ goto L_005d61dc;
L_005d61c9:; BB(0x005d61c9);
    /* 005d61c9: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d61cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d61d1: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d61d7: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005d61da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d61dcu); call_ind(t); }
L_005d61dc:; BB(0x005d61dc);
    /* 005d61dc: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61e0: jne 0x5d61ef */ if (!fZ) goto L_005d61ef;
L_005d61e2:; BB(0x005d61e2);
    /* 005d61e2: movsx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 005d61e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61e8: jne 0x5d61ef */ if (!fZ) goto L_005d61ef;
L_005d61ea:; BB(0x005d61ea);
    /* 005d61ea: jmp 0x5d653d */ goto L_005d653d;
L_005d61ef:; BB(0x005d61ef);
    /* 005d61ef: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d61f3: jle 0x5d653d */ if ((fZ||fS!=fO)) goto L_005d653d;
L_005d61f9:; BB(0x005d61f9);
    /* 005d61f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d61fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d61fd: idiv dword ptr [ebp - 0x2c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffd4u)); if (!d) UNSUP(0x005d61fd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d61fd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d6200: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005d6203: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6206: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d6207: idiv dword ptr [ebp - 0x2c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffd4u)); if (!d) UNSUP(0x005d6207, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d6207, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d620a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d620d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005d6214: jmp 0x5d621f */ goto L_005d621f;
L_005d6216:; BB(0x005d6216);
    /* 005d6216: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6219: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d621c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005d621f:; BB(0x005d621f);
    /* 005d621f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6222: cmp eax, dword ptr [ebp - 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6225: jge 0x5d6525 */ if ((fS==fO)) goto L_005d6525;
L_005d622b:; BB(0x005d622b);
    /* 005d622b: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005d622f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6231: je 0x5d63a6 */ if (fZ) goto L_005d63a6;
L_005d6237:; BB(0x005d6237);
    /* 005d6237: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d623d: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005d6240: call 0x646e40 */ r_esp -= 4; W32(r_esp, 0x5d6245u); f_00646e40();
    /* 005d6245: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6248: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d624b: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d6251: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005d6254: call 0x646e70 */ r_esp -= 4; W32(r_esp, 0x5d6259u); f_00646e70();
    /* 005d6259: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d625c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d625f: cmp dword ptr [ebp - 0x78], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6263: jle 0x5d6289 */ if ((fZ||fS!=fO)) goto L_005d6289;
L_005d6265:; BB(0x005d6265);
    /* 005d6265: cmp dword ptr [ebp - 0x78], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6269: jge 0x5d6289 */ if ((fS==fO)) goto L_005d6289;
L_005d626b:; BB(0x005d626b);
    /* 005d626b: mov esi, 0x10 */ r_esi = 0x10u;
    /* 005d6270: sub esi, dword ptr [ebp - 0x78] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d6273: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d6276: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6278: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5d627du); f_0062fbf0();
    /* 005d627d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6280: lea ecx, [esi + eax - 2] */ r_ecx = (u32)(r_esi+r_eax+0xfffffffeu);
    /* 005d6284: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d6287: jmp 0x5d62ae */ goto L_005d62ae;
L_005d6289:; BB(0x005d6289);
    /* 005d6289: cmp dword ptr [ebp - 0x78], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d628d: jne 0x5d6298 */ if (!fZ) goto L_005d6298;
L_005d628f:; BB(0x005d628f);
    /* 005d628f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d6296: jmp 0x5d62ae */ goto L_005d62ae;
L_005d6298:; BB(0x005d6298);
    /* 005d6298: cmp dword ptr [ebp - 0x78], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d629c: jle 0x5d62a7 */ if ((fZ||fS!=fO)) goto L_005d62a7;
L_005d629e:; BB(0x005d629e);
    /* 005d629e: mov dword ptr [ebp - 0x24], 0x1f */ W32((u32)(r_ebp+0xffffffdcu), 0x1fu);
    /* 005d62a5: jmp 0x5d62ae */ goto L_005d62ae;
L_005d62a7:; BB(0x005d62a7);
    /* 005d62a7: mov dword ptr [ebp - 0x24], 0x20 */ W32((u32)(r_ebp+0xffffffdcu), 0x20u);
L_005d62ae:; BB(0x005d62ae);
    /* 005d62ae: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005d62b3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d62b8u); f_00686d82();
    /* 005d62b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d62bb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005d62c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d62c8: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d62cf: je 0x5d62e4 */ if (fZ) goto L_005d62e4;
L_005d62d1:; BB(0x005d62d1);
    /* 005d62d1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005d62d7: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5d62dcu); f_005eaaf0();
    /* 005d62dc: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005d62e2: jmp 0x5d62ee */ goto L_005d62ee;
L_005d62e4:; BB(0x005d62e4);
    /* 005d62e4: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005d62ee:; BB(0x005d62ee);
    /* 005d62ee: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005d62f4: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005d62fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6301: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6304: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d630a: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d6310: mov dword ptr [ecx + eax*4 + 0x3ac], edx */ W32((u32)(r_ecx+r_eax*4+0x3acu), r_edx);
    /* 005d6317: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6319: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d631c: add eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6322: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6325: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005d6327: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d632a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d632c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d632d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d6330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6331: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005d6334: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6335: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6338: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d633e: mov ecx, dword ptr [eax + edx*4 + 0x3ac] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3acu));
    /* 005d6345: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d634au); f_005eae80();
    /* 005d634a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d634d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d634e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6351: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d6357: mov ecx, dword ptr [eax + edx*4 + 0x3ac] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3acu));
    /* 005d635e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6361: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d6367: mov edx, dword ptr [eax + edx*4 + 0x3ac] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3acu));
    /* 005d636e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d6370: mov ecx, edx */ r_ecx = r_edx;
    /* 005d6372: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005d6378: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d637au); call_ind(t); }
    /* 005d637a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d637d: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d6383: mov edx, dword ptr [ecx + eax*4 + 0x3ac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3acu));
    /* 005d638a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d638d: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d6393: mov ecx, dword ptr [ecx + eax*4 + 0x3ac] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3acu));
    /* 005d639a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d639c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d639f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d63a1u); call_ind(t); }
    /* 005d63a1: jmp 0x5d650f */ goto L_005d650f;
L_005d63a6:; BB(0x005d63a6);
    /* 005d63a6: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d63ac: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005d63af: call 0x646e40 */ r_esp -= 4; W32(r_esp, 0x5d63b4u); f_00646e40();
    /* 005d63b4: add eax, 0x4b */ {  u32 a = r_eax; u32 b = 0x4bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d63b7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d63ba: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d63c0: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005d63c3: call 0x646e70 */ r_esp -= 4; W32(r_esp, 0x5d63c8u); f_00646e70();
    /* 005d63c8: add eax, 0x51 */ {  u32 a = r_eax; u32 b = 0x51u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d63cb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d63ce: cmp dword ptr [ebp - 0x78], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d63d2: jle 0x5d63f8 */ if ((fZ||fS!=fO)) goto L_005d63f8;
L_005d63d4:; BB(0x005d63d4);
    /* 005d63d4: cmp dword ptr [ebp - 0x78], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d63d8: jge 0x5d63f8 */ if ((fS==fO)) goto L_005d63f8;
L_005d63da:; BB(0x005d63da);
    /* 005d63da: mov esi, 0x10 */ r_esi = 0x10u;
    /* 005d63df: sub esi, dword ptr [ebp - 0x78] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d63e2: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d63e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d63e7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5d63ecu); f_0062fbf0();
    /* 005d63ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d63ef: lea eax, [esi + eax - 2] */ r_eax = (u32)(r_esi+r_eax+0xfffffffeu);
    /* 005d63f3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d63f6: jmp 0x5d641d */ goto L_005d641d;
L_005d63f8:; BB(0x005d63f8);
    /* 005d63f8: cmp dword ptr [ebp - 0x78], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d63fc: jne 0x5d6407 */ if (!fZ) goto L_005d6407;
L_005d63fe:; BB(0x005d63fe);
    /* 005d63fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d6405: jmp 0x5d641d */ goto L_005d641d;
L_005d6407:; BB(0x005d6407);
    /* 005d6407: cmp dword ptr [ebp - 0x78], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d640b: jle 0x5d6416 */ if ((fZ||fS!=fO)) goto L_005d6416;
L_005d640d:; BB(0x005d640d);
    /* 005d640d: mov dword ptr [ebp - 0x24], 0x1f */ W32((u32)(r_ebp+0xffffffdcu), 0x1fu);
    /* 005d6414: jmp 0x5d641d */ goto L_005d641d;
L_005d6416:; BB(0x005d6416);
    /* 005d6416: mov dword ptr [ebp - 0x24], 0x20 */ W32((u32)(r_ebp+0xffffffdcu), 0x20u);
L_005d641d:; BB(0x005d641d);
    /* 005d641d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6422: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d6427u); f_00686d82();
    /* 005d6427: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d642a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005d6430: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d6437: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d643e: je 0x5d6453 */ if (fZ) goto L_005d6453;
L_005d6440:; BB(0x005d6440);
    /* 005d6440: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005d6446: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5d644bu); f_005eaaf0();
    /* 005d644b: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005d6451: jmp 0x5d645d */ goto L_005d645d;
L_005d6453:; BB(0x005d6453);
    /* 005d6453: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005d645d:; BB(0x005d645d);
    /* 005d645d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005d6463: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005d6469: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6470: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6473: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d6479: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005d647f: mov dword ptr [eax + edx*4 + 0x424], ecx */ W32((u32)(r_eax+r_edx*4+0x424u), r_ecx);
    /* 005d6486: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6488: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d648b: add edx, 0xc9 */ {  u32 a = r_edx; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d6491: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6492: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6495: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d6497: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d649a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d649c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d649d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d64a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d64a1: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005d64a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d64a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d64a8: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d64ae: mov ecx, dword ptr [edx + ecx*4 + 0x424] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x424u));
    /* 005d64b5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d64bau); f_005eae80();
    /* 005d64ba: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d64bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d64be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d64c1: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d64c7: mov eax, dword ptr [edx + ecx*4 + 0x424] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x424u));
    /* 005d64ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d64d1: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d64d7: mov ecx, dword ptr [edx + ecx*4 + 0x424] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x424u));
    /* 005d64de: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d64e0: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005d64e6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d64e8u); call_ind(t); }
    /* 005d64e8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d64eb: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d64f1: mov edx, dword ptr [ecx + eax*4 + 0x424] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x424u));
    /* 005d64f8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d64fb: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d6501: mov ecx, dword ptr [ecx + eax*4 + 0x424] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x424u));
    /* 005d6508: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d650a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d650d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d650fu); call_ind(t); }
L_005d650f:; BB(0x005d650f);
    /* 005d650f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6512: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6515: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d6518: cmp dword ptr [ebp - 0x20], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d651c: jne 0x5d6520 */ if (!fZ) goto L_005d6520;
L_005d651e:; BB(0x005d651e);
    /* 005d651e: jmp 0x5d653d */ goto L_005d653d;
L_005d6520:; BB(0x005d6520);
    /* 005d6520: jmp 0x5d6216 */ goto L_005d6216;
L_005d6525:; BB(0x005d6525);
    /* 005d6525: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005d6528: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d652b: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005d652e: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005d6531: mov ecx, dword ptr [ebp + eax*4 - 0x74] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff8cu));
    /* 005d6535: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d6538: jmp 0x5d61ef */ goto L_005d61ef;
L_005d653d:; BB(0x005d653d);
    /* 005d653d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6540: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6547: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6548: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d6549: mov esp, ebp */ r_esp = r_ebp;
    /* 005d654b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d654c: ret 0xc */ FN_RET(0x005d60c0); r_esp += 16; return;
}

void f_005d6550(void) /* CasinoPlayer::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6550);
    /* 005d6550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6551: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6553: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6556: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d6559: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d6560: jmp 0x5d656b */ goto L_005d656b;
L_005d6562:; BB(0x005d6562);
    /* 005d6562: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6565: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6568: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d656b:; BB(0x005d656b);
    /* 005d656b: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d656f: jge 0x5d65ee */ if ((fS==fO)) goto L_005d65ee;
L_005d6571:; BB(0x005d6571);
    /* 005d6571: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6574: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6577: cmp dword ptr [edx + ecx*4 + 0x3ac], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d657f: je 0x5d65e9 */ if (fZ) goto L_005d65e9;
L_005d6581:; BB(0x005d6581);
    /* 005d6581: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6584: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6587: mov edx, dword ptr [ecx + eax*4 + 0x3ac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3acu));
    /* 005d658e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6591: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6594: mov ecx, dword ptr [ecx + eax*4 + 0x3ac] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3acu));
    /* 005d659b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d659d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d65a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d65a2u); call_ind(t); }
    /* 005d65a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d65a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d65a8: mov eax, dword ptr [edx + ecx*4 + 0x3ac] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3acu));
    /* 005d65af: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d65b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d65b5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d65b8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d65bc: je 0x5d65d1 */ if (fZ) goto L_005d65d1;
L_005d65be:; BB(0x005d65be);
    /* 005d65be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d65c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d65c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d65c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d65c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d65ca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d65ccu); call_ind(t); }
    /* 005d65cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d65cf: jmp 0x5d65d8 */ goto L_005d65d8;
L_005d65d1:; BB(0x005d65d1);
    /* 005d65d1: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d65d8:; BB(0x005d65d8);
    /* 005d65d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d65db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d65de: mov dword ptr [ecx + eax*4 + 0x3ac], 0 */ W32((u32)(r_ecx+r_eax*4+0x3acu), 0x0u);
L_005d65e9:; BB(0x005d65e9);
    /* 005d65e9: jmp 0x5d6562 */ goto L_005d6562;
L_005d65ee:; BB(0x005d65ee);
    /* 005d65ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005d65f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d65f1: ret  */ FN_RET(0x005d6550); r_esp += 4; return;
}

void f_005d6600(void) /* CasinoPlayer::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6600);
    /* 005d6600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6601: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6603: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6606: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d6609: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d6610: jmp 0x5d661b */ goto L_005d661b;
L_005d6612:; BB(0x005d6612);
    /* 005d6612: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6615: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6618: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d661b:; BB(0x005d661b);
    /* 005d661b: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d661f: jge 0x5d669e */ if ((fS==fO)) goto L_005d669e;
L_005d6621:; BB(0x005d6621);
    /* 005d6621: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6624: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6627: cmp dword ptr [edx + ecx*4 + 0x424], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x424u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d662f: je 0x5d6699 */ if (fZ) goto L_005d6699;
L_005d6631:; BB(0x005d6631);
    /* 005d6631: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6634: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6637: mov edx, dword ptr [ecx + eax*4 + 0x424] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x424u));
    /* 005d663e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6641: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6644: mov ecx, dword ptr [ecx + eax*4 + 0x424] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x424u));
    /* 005d664b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d664d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d6650: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d6652u); call_ind(t); }
    /* 005d6652: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6655: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6658: mov eax, dword ptr [edx + ecx*4 + 0x424] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x424u));
    /* 005d665f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d6662: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6665: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d6668: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d666c: je 0x5d6681 */ if (fZ) goto L_005d6681;
L_005d666e:; BB(0x005d666e);
    /* 005d666e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6670: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6673: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6675: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6678: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d667a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d667cu); call_ind(t); }
    /* 005d667c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d667f: jmp 0x5d6688 */ goto L_005d6688;
L_005d6681:; BB(0x005d6681);
    /* 005d6681: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005d6688:; BB(0x005d6688);
    /* 005d6688: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d668b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d668e: mov dword ptr [ecx + eax*4 + 0x424], 0 */ W32((u32)(r_ecx+r_eax*4+0x424u), 0x0u);
L_005d6699:; BB(0x005d6699);
    /* 005d6699: jmp 0x5d6612 */ goto L_005d6612;
L_005d669e:; BB(0x005d669e);
    /* 005d669e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d66a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d66a1: ret  */ FN_RET(0x005d6600); r_esp += 4; return;
}

void f_005d6ab0(void) /* CasinoPlayer::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6ab0);
    /* 005d6ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6ab6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d6ab9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6abc: call 0x5d6a50 */ r_esp -= 4; W32(r_esp, 0x5d6ac1u); f_005d6a50();
    /* 005d6ac1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d6ac4: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d6aca: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d6acfu); f_005da7b0();
    /* 005d6acf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d6ad2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6ad4: jne 0x5d6adf */ if (!fZ) goto L_005d6adf;
L_005d6ad6:; BB(0x005d6ad6);
    /* 005d6ad6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6ad9: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 005d6add: jmp 0x5d6b2e */ goto L_005d6b2e;
L_005d6adf:; BB(0x005d6adf);
    /* 005d6adf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6ae2: call 0x5d6b40 */ r_esp -= 4; W32(r_esp, 0x5d6ae7u); f_005d6b40();
    /* 005d6ae7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d6aea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6aec: je 0x5d6af7 */ if (fZ) goto L_005d6af7;
L_005d6aee:; BB(0x005d6aee);
    /* 005d6aee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6af1: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 005d6af5: jmp 0x5d6b2e */ goto L_005d6b2e;
L_005d6af7:; BB(0x005d6af7);
    /* 005d6af7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6afa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d6afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6afe: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005d6b03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6b05: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d6b0b: mov eax, dword ptr [edx + 0x2c8] */ r_eax = R32((u32)(r_edx+0x2c8u));
    /* 005d6b11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d6b13u); call_ind(t); }
    /* 005d6b13: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d6b16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b18: je 0x5d6b23 */ if (fZ) goto L_005d6b23;
L_005d6b1a:; BB(0x005d6b1a);
    /* 005d6b1a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b1d: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 005d6b21: jmp 0x5d6b2e */ goto L_005d6b2e;
L_005d6b23:; BB(0x005d6b23);
    /* 005d6b23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b26: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 005d6b2a: jmp 0x5d6b2e */ goto L_005d6b2e;
L_005d6b2e:; BB(0x005d6b2e);
    /* 005d6b2e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6b30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6b31: ret  */ FN_RET(0x005d6ab0); r_esp += 4; return;
}

void f_005d6bb0(void) /* CasinoPlayer::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6bb0);
    /* 005d6bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6bba: call 0x5d6a50 */ r_esp -= 4; W32(r_esp, 0x5d6bbfu); f_005d6a50();
    /* 005d6bbf: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 005d6bc2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6bc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6bc5: ret  */ FN_RET(0x005d6bb0); r_esp += 4; return;
}

void f_005d7090(void) /* casinoplayer::func_005d7090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7090);
    /* 005d7090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7091: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7097: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005d709b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d709d: jl 0x5d70a8 */ if ((fS!=fO)) goto L_005d70a8;
L_005d709f:; BB(0x005d709f);
    /* 005d709f: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005d70a3: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d70a6: jl 0x5d70bf */ if ((fS!=fO)) goto L_005d70bf;
L_005d70a8:; BB(0x005d70a8);
    /* 005d70a8: push 0x34a */ { u32 v = 0x34au; r_esp -= 4; W32(r_esp, v); }
    /* 005d70ad: push 0x6d3d54 */ { u32 v = 0x6d3d54u; r_esp -= 4; W32(r_esp, v); }
    /* 005d70b2: push 0x6d3dfc */ { u32 v = 0x6d3dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d70b7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d70bcu); f_005e9f20();
    /* 005d70bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d70bf:; BB(0x005d70bf);
    /* 005d70bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d70c2: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d70c7u); f_005d52e0();
    /* 005d70c7: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005d70ca: mov byte ptr [eax + 0x2a], cl */ W8((u32)(r_eax+0x2au), (u8)r_ecx);
    /* 005d70cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005d70cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d70d0: ret 4 */ FN_RET(0x005d7090); r_esp += 8; return;
}

