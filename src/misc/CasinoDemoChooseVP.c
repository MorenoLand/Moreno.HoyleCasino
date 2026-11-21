#include "protos.h"

void f_005e5a70(void) /* CasinoDemoChooseVP::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5a70);
    /* 005e5a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a71: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5a73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a75: push 0x6a98c1 */ { u32 v = 0x6a98c1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e5a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a82: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e5a87: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e5a89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e5a8d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e5a93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e5a96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5a9d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5e5aa2u); f_005f71f0();
    /* 005e5aa2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e5aa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5aac: mov dword ptr [eax], 0x6d5654 */ W32((u32)(r_eax), 0x6d5654u);
    /* 005e5ab2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ab4: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ab9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5abc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5e5ac1u); f_005f83d0();
    /* 005e5ac1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ac3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ac5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5ac8: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5e5acdu); f_005f7340();
    /* 005e5acd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5ad4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5ad7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5ada: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e5ae1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5ae2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5ae4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5ae5: ret  */ FN_RET(0x005e5a70); r_esp += 4; return;
}

void f_005e5b10(void) /* CasinoDemoChooseVP::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5b10);
    /* 005e5b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5b17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b19: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b1d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b1f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b21: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b23: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b28: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b2a: push 0x6c8514 */ { u32 v = 0x6c8514u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b2f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5b34u); f_00630f40();
    /* 005e5b34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5b37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b38: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5b3f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e5b44u); f_005fa5b0();
    /* 005e5b44: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b46: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b48: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b4a: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b4c: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b4e: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b53: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5b58u); f_00630f40();
    /* 005e5b58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b5e: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b63: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b65: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b6a: push 0x311b7c */ { u32 v = 0x311b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5b74: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e5b79u); f_005f9de0();
    /* 005e5b79: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b7d: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b7f: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b81: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b83: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b88: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5b8du); f_00630f40();
    /* 005e5b8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b93: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b98: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b9a: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b9f: push 0x311b7d */ { u32 v = 0x311b7du; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ba4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ba6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5ba9: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e5baeu); f_005f9de0();
    /* 005e5bae: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bb0: push 0x311b7c */ { u32 v = 0x311b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5bb8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e5bbdu); f_005fb300();
    /* 005e5bbd: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5bbf: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x5e5bc4u); f_006026f0();
    /* 005e5bc4: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bc6: push 0x311b7d */ { u32 v = 0x311b7du; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5bce: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e5bd3u); f_005fb300();
    /* 005e5bd3: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5bd5: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x5e5bdau); f_006026f0();
    /* 005e5bda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bdc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bde: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5be0: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5be2: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5be4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5be6: push 0x6c8bd8 */ { u32 v = 0x6c8bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5beb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5bf0u); f_00630f40();
    /* 005e5bf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bf4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bf6: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bf8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bfa: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005e5bff: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c04: push 0x311b82 */ { u32 v = 0x311b82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5c10: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5e5c15u); f_005f9ff0();
    /* 005e5c15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c17: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c1b: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c1d: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c1f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c21: push 0x6c8b90 */ { u32 v = 0x6c8b90u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c26: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e5c2bu); f_00630f40();
    /* 005e5c2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c31: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c33: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c35: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c3a: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c3f: push 0x311b83 */ { u32 v = 0x311b83u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5c4b: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5e5c50u); f_005f9ff0();
    /* 005e5c50: push 0x311b82 */ { u32 v = 0x311b82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c55: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5c5d: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e5c62u); f_005fb3a0();
    /* 005e5c62: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5c64: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x5e5c69u); f_006065d0();
    /* 005e5c69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c6b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c70: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c75: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c7a: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c7f: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c81: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c85: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c87: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c89: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c8b: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c90: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c94: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5c9b: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x5e5ca0u); f_005fa790();
    /* 005e5ca0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ca2: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ca4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ca6: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ca8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5caa: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cac: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cb1: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cb3: push 0x6d5698 */ { u32 v = 0x6d5698u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cb8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5cbf: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e5cc4u); f_005fa5b0();
    /* 005e5cc4: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5cc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5cc7: ret  */ FN_RET(0x005e5b10); r_esp += 4; return;
}

void f_005e5cd0(void) /* CasinoDemoChooseVP::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5cd0);
    /* 005e5cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5cd3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5cd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e5cd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e5cdc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e5cdf: cmp dword ptr [ebp - 0xc], 0x311b7c */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x311b7cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5ce6: je 0x5e5cfa */ if (fZ) goto L_005e5cfa;
L_005e5ce8:; BB(0x005e5ce8);
    /* 005e5ce8: cmp dword ptr [ebp - 0xc], 0x311b7d */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x311b7du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5cef: je 0x5e5d87 */ if (fZ) goto L_005e5d87;
L_005e5cf5:; BB(0x005e5cf5);
    /* 005e5cf5: jmp 0x5e5d99 */ goto L_005e5d99;
L_005e5cfa:; BB(0x005e5cfa);
    /* 005e5cfa: push 0x311b7e */ { u32 v = 0x311b7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5d02: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5e5d07u); f_005fb3a0();
    /* 005e5d07: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5d09: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x5e5d0eu); f_00606570();
    /* 005e5d0e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e5d11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5d14: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e5d17: cmp dword ptr [ebp - 0x10], 0x311b82 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x311b82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5d1e: je 0x5e5d2b */ if (fZ) goto L_005e5d2b;
L_005e5d20:; BB(0x005e5d20);
    /* 005e5d20: cmp dword ptr [ebp - 0x10], 0x311b83 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x311b83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5d27: je 0x5e5d4b */ if (fZ) goto L_005e5d4b;
L_005e5d29:; BB(0x005e5d29);
    /* 005e5d29: jmp 0x5e5d6c */ goto L_005e5d6c;
L_005e5d2b:; BB(0x005e5d2b);
    /* 005e5d2b: mov edx, dword ptr [0x75e914] */ r_edx = R32((u32)(0x75e914u));
    /* 005e5d31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d32: push 0x30f359 */ { u32 v = 0x30f359u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d37: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 005e5d3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5d3e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e5d44: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005e5d47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5d49u); call_ind(t); }
    /* 005e5d49: jmp 0x5e5d87 */ goto L_005e5d87;
L_005e5d4b:; BB(0x005e5d4b);
    /* 005e5d4b: mov ecx, dword ptr [0x75e918] */ r_ecx = R32((u32)(0x75e918u));
    /* 005e5d51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d52: push 0x30f359 */ { u32 v = 0x30f359u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d57: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005e5d5d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5d5f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e5d65: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e5d68: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e5d6au); call_ind(t); }
    /* 005e5d6a: jmp 0x5e5d87 */ goto L_005e5d87;
L_005e5d6c:; BB(0x005e5d6c);
    /* 005e5d6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e5d6e: jne 0x5e5d87 */ if (!fZ) goto L_005e5d87;
L_005e5d70:; BB(0x005e5d70);
    /* 005e5d70: push 0x2a0 */ { u32 v = 0x2a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d75: push 0x6d56f4 */ { u32 v = 0x6d56f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d7a: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d7f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e5d84u); f_005e9f20();
    /* 005e5d84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e5d87:; BB(0x005e5d87);
    /* 005e5d87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5d8a: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x5e5d8fu); f_005f87d0();
    /* 005e5d8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5d92: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5e5d97u); f_005f8990();
    /* 005e5d97: jmp 0x5e5da5 */ goto L_005e5da5;
L_005e5d99:; BB(0x005e5d99);
    /* 005e5d99: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e5d9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5da0: call 0x5fb000 */ r_esp -= 4; W32(r_esp, 0x5e5da5u); f_005fb000();
L_005e5da5:; BB(0x005e5da5);
    /* 005e5da5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5da8: ret 4 */ FN_RET(0x005e5cd0); r_esp += 8; return;
}

