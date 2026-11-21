#include "protos.h"

void f_005e5db0(void) /* CasinoDemoChooseSlot::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5db0);
    /* 005e5db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5db1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5db3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5db5: push 0x6a98e4 */ { u32 v = 0x6a98e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e5dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dc2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e5dc7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e5dc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e5dcd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e5dd3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e5dd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dd8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5ddd: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5e5de2u); f_005f71f0();
    /* 005e5de2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e5de9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5dec: mov dword ptr [eax], 0x6d571c */ W32((u32)(r_eax), 0x6d571cu);
    /* 005e5df2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5df4: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5df9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5dfc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5e5e01u); f_005f83d0();
    /* 005e5e01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5e08: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5e5e0du); f_005f7340();
    /* 005e5e0d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5e14: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5e17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5e1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e5e21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5e22: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5e24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5e25: ret  */ FN_RET(0x005e5db0); r_esp += 4; return;
}

void f_005e5e50(void) /* CasinoDemoChooseSlot::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5e50);
    /* 005e5e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e51: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5e57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e59: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e5d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e5f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e61: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e63: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e68: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e6a: push 0x6c3b80 */ { u32 v = 0x6c3b80u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e6f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5e74u); f_00630f40();
    /* 005e5e74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5e77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e78: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5e7f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e5e84u); f_005fa5b0();
    /* 005e5e84: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e86: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e88: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e8a: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e8c: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e8e: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e93: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5e98u); f_00630f40();
    /* 005e5e98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e9e: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ea3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ea5: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5eaa: push 0x311b7c */ { u32 v = 0x311b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5eaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5eb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5eb4: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e5eb9u); f_005f9de0();
    /* 005e5eb9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ebb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ebd: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ebf: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ec1: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ec3: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ec8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5ecdu); f_00630f40();
    /* 005e5ecd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ed1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ed3: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ed8: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5eda: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5edf: push 0x311b7d */ { u32 v = 0x311b7du; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ee4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ee6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5ee9: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e5eeeu); f_005f9de0();
    /* 005e5eee: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ef0: push 0x311b7c */ { u32 v = 0x311b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ef5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5ef8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e5efdu); f_005fb300();
    /* 005e5efd: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5eff: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x5e5f04u); f_006026f0();
    /* 005e5f04: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f06: push 0x311b7d */ { u32 v = 0x311b7du; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f0e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e5f13u); f_005fb300();
    /* 005e5f13: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5f15: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x5e5f1au); f_006026f0();
    /* 005e5f1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f1c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f1e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f20: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f22: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f24: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f26: push 0x6c545c */ { u32 v = 0x6c545cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f2b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5f30u); f_00630f40();
    /* 005e5f30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5f33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f36: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f38: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f3a: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f3f: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f44: push 0x311b7f */ { u32 v = 0x311b7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f50: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5e5f55u); f_005f9ff0();
    /* 005e5f55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f57: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f59: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f5b: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f5d: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f5f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f61: push 0x6c5484 */ { u32 v = 0x6c5484u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f66: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5f6bu); f_00630f40();
    /* 005e5f6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5f6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f71: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f73: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f75: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f7a: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f7f: push 0x311b80 */ { u32 v = 0x311b80u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5f8b: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5e5f90u); f_005f9ff0();
    /* 005e5f90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f92: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f94: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f96: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f98: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f9a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f9c: push 0x6c5444 */ { u32 v = 0x6c5444u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fa1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5fa6u); f_00630f40();
    /* 005e5fa6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5faa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fac: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fae: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fb0: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fb5: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fba: push 0x311b81 */ { u32 v = 0x311b81u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5fc6: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5e5fcbu); f_005f9ff0();
    /* 005e5fcb: push 0x311b7f */ { u32 v = 0x311b7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fd0: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5fd8: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e5fddu); f_005fb3a0();
    /* 005e5fdd: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5fdf: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x5e5fe4u); f_006065d0();
    /* 005e5fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fe6: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5feb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ff0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ff5: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ffa: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ffc: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ffe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6000: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6002: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6004: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6006: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e600b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e600d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e600f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6011: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6013: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6016: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x5e601bu); f_005fa790();
    /* 005e601b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e601d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e601f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6021: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6023: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6025: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6027: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e602c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e602e: push 0x6d5760 */ { u32 v = 0x6d5760u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6037: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e603a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e603fu); f_005fa5b0();
    /* 005e603f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6041: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6042: ret  */ FN_RET(0x005e5e50); r_esp += 4; return;
}

void f_005e6050(void) /* CasinoDemoChooseSlot::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6050);
    /* 005e6050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6051: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6053: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6056: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e6059: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e605c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e605f: cmp dword ptr [ebp - 0xc], 0x311b7c */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x311b7cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6066: je 0x5e607a */ if (fZ) goto L_005e607a;
L_005e6068:; BB(0x005e6068);
    /* 005e6068: cmp dword ptr [ebp - 0xc], 0x311b7d */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x311b7du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e606f: je 0x5e6130 */ if (fZ) goto L_005e6130;
L_005e6075:; BB(0x005e6075);
    /* 005e6075: jmp 0x5e6142 */ goto L_005e6142;
L_005e607a:; BB(0x005e607a);
    /* 005e607a: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e607f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6082: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e6087u); f_005fb3a0();
    /* 005e6087: mov ecx, eax */ r_ecx = r_eax;
    /* 005e6089: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x5e608eu); f_00606570();
    /* 005e608e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e6091: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6094: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e6097: cmp dword ptr [ebp - 0x10], 0x311b7f */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x311b7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e609e: je 0x5e60b4 */ if (fZ) goto L_005e60b4;
L_005e60a0:; BB(0x005e60a0);
    /* 005e60a0: cmp dword ptr [ebp - 0x10], 0x311b80 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x311b80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e60a7: je 0x5e60d4 */ if (fZ) goto L_005e60d4;
L_005e60a9:; BB(0x005e60a9);
    /* 005e60a9: cmp dword ptr [ebp - 0x10], 0x311b81 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x311b81u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e60b0: je 0x5e60f5 */ if (fZ) goto L_005e60f5;
L_005e60b2:; BB(0x005e60b2);
    /* 005e60b2: jmp 0x5e6115 */ goto L_005e6115;
L_005e60b4:; BB(0x005e60b4);
    /* 005e60b4: mov edx, dword ptr [0x75e940] */ r_edx = R32((u32)(0x75e940u));
    /* 005e60ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e60bb: push 0x30ef82 */ { u32 v = 0x30ef82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e60c0: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 005e60c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e60c7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e60cd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005e60d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e60d2u); call_ind(t); }
    /* 005e60d2: jmp 0x5e6130 */ goto L_005e6130;
L_005e60d4:; BB(0x005e60d4);
    /* 005e60d4: mov ecx, dword ptr [0x75e944] */ r_ecx = R32((u32)(0x75e944u));
    /* 005e60da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e60db: push 0x30ef82 */ { u32 v = 0x30ef82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e60e0: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005e60e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e60e8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e60ee: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e60f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e60f3u); call_ind(t); }
    /* 005e60f3: jmp 0x5e6130 */ goto L_005e6130;
L_005e60f5:; BB(0x005e60f5);
    /* 005e60f5: mov eax, dword ptr [0x75e948] */ r_eax = R32((u32)(0x75e948u));
    /* 005e60fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e60fb: push 0x30ef82 */ { u32 v = 0x30ef82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6100: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e6106: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e6108: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e610e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005e6111: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e6113u); call_ind(t); }
    /* 005e6113: jmp 0x5e6130 */ goto L_005e6130;
L_005e6115:; BB(0x005e6115);
    /* 005e6115: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005e6117: jne 0x5e6130 */ if (!fZ) goto L_005e6130;
L_005e6119:; BB(0x005e6119);
    /* 005e6119: push 0x2f3 */ { u32 v = 0x2f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e611e: push 0x6d56f4 */ { u32 v = 0x6d56f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6123: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6128: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e612du); f_005e9f20();
    /* 005e612d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e6130:; BB(0x005e6130);
    /* 005e6130: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6133: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x5e6138u); f_005f87d0();
    /* 005e6138: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e613b: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5e6140u); f_005f8990();
    /* 005e6140: jmp 0x5e614e */ goto L_005e614e;
L_005e6142:; BB(0x005e6142);
    /* 005e6142: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6146: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6149: call 0x5fb000 */ r_esp -= 4; W32(r_esp, 0x5e614eu); f_005fb000();
L_005e614e:; BB(0x005e614e);
    /* 005e614e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6150: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6151: ret 4 */ FN_RET(0x005e6050); r_esp += 8; return;
}

