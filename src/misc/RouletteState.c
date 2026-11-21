#include "protos.h"

void f_00527bd0(void) /* RouletteState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527bd0);
    /* 00527bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00527bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527bd5: push 0x6a420b */ { u32 v = 0x6a420bu; r_esp -= 4; W32(r_esp, v); }
    /* 00527bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00527be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527be1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527be4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00527be9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527bec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00527bef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00527bf5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00527bf8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00527bfb: mov dword ptr [eax], 0x6c37c4 */ W32((u32)(r_eax), 0x6c37c4u);
    /* 00527c01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00527c08: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00527c0f: jmp 0x527c1a */ goto L_00527c1a;
L_00527c11:; BB(0x00527c11);
    /* 00527c11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527c14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527c17: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00527c1a:; BB(0x00527c1a);
    /* 00527c1a: cmp dword ptr [ebp - 0x10], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527c21: jge 0x527c58 */ if ((fS==fO)) goto L_00527c58;
L_00527c23:; BB(0x00527c23);
    /* 00527c23: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527c26: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00527c29: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00527c2d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00527c30: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00527c33: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00527c36: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527c3a: je 0x527c4f */ if (fZ) goto L_00527c4f;
L_00527c3c:; BB(0x00527c3c);
    /* 00527c3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00527c3e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00527c41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00527c43: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527c46: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00527c48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x527c4au); call_ind(t); }
    /* 00527c4a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00527c4d: jmp 0x527c56 */ goto L_00527c56;
L_00527c4f:; BB(0x00527c4f);
    /* 00527c4f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00527c56:; BB(0x00527c56);
    /* 00527c56: jmp 0x527c11 */ goto L_00527c11;
L_00527c58:; BB(0x00527c58);
    /* 00527c58: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00527c5f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00527c62: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x527c67u); f_005e9e40();
    /* 00527c67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00527c6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00527c71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527c72: mov esp, ebp */ r_esp = r_ebp;
    /* 00527c74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527c75: ret  */ FN_RET(0x00527bd0); r_esp += 4; return;
}

void f_00528b60(void) /* roulettestate::func_00528b60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528b60);
    /* 00528b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00528b63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528b66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00528b69: mov dword ptr [ebp - 4], 0xfffffc18 */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffc18u);
    /* 00528b70: push 0xfffffc18 */ { u32 v = 0xfffffc18u; r_esp -= 4; W32(r_esp, v); }
    /* 00528b75: push 0x6c3808 */ { u32 v = 0x6c3808u; r_esp -= 4; W32(r_esp, v); }
    /* 00528b7a: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00528b7f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00528b82: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x528b87u); f_00607960();
    /* 00528b87: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00528b8a: cmp dword ptr [ebp - 4], 0xfffffc18 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfffffc18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528b91: je 0x528b99 */ if (fZ) goto L_00528b99;
L_00528b93:; BB(0x00528b93);
    /* 00528b93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528b96: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_00528b99:; BB(0x00528b99);
    /* 00528b99: cmp dword ptr [ebp + 8], -2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528b9d: jle 0x528ba5 */ if ((fZ||fS!=fO)) goto L_00528ba5;
L_00528b9f:; BB(0x00528b9f);
    /* 00528b9f: cmp dword ptr [ebp + 8], 0x26 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528ba3: jl 0x528bbc */ if ((fS!=fO)) goto L_00528bbc;
L_00528ba5:; BB(0x00528ba5);
    /* 00528ba5: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 00528baa: push 0x6c37ec */ { u32 v = 0x6c37ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00528baf: push 0x6c37c8 */ { u32 v = 0x6c37c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00528bb4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x528bb9u); f_005e9f20();
    /* 00528bb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00528bbc:; BB(0x00528bbc);
    /* 00528bbc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528bbf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00528bc2: mov dword ptr [eax + 0xd3c], ecx */ W32((u32)(r_eax+0xd3cu), r_ecx);
    /* 00528bc8: mov esp, ebp */ r_esp = r_ebp;
    /* 00528bca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528bcb: ret 4 */ FN_RET(0x00528b60); r_esp += 8; return;
}

void f_00528bd0(void) /* roulettestate::func_00528bd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528bd0);
    /* 00528bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00528bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00528bd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528bda: cmp dword ptr [eax + 0xd3c], -2 */ {  u32 a = R32((u32)(r_eax+0xd3cu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528be1: jle 0x528bef */ if ((fZ||fS!=fO)) goto L_00528bef;
L_00528be3:; BB(0x00528be3);
    /* 00528be3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528be6: cmp dword ptr [ecx + 0xd3c], 0x26 */ {  u32 a = R32((u32)(r_ecx+0xd3cu)); u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528bed: jl 0x528c06 */ if ((fS!=fO)) goto L_00528c06;
L_00528bef:; BB(0x00528bef);
    /* 00528bef: push 0x1cb */ { u32 v = 0x1cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00528bf4: push 0x6c37ec */ { u32 v = 0x6c37ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00528bf9: push 0x6c3820 */ { u32 v = 0x6c3820u; r_esp -= 4; W32(r_esp, v); }
    /* 00528bfe: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x528c03u); f_005e9f20();
    /* 00528c03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00528c06:; BB(0x00528c06);
    /* 00528c06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528c09: mov eax, dword ptr [eax + 0xd3c] */ r_eax = R32((u32)(r_eax+0xd3cu));
    /* 00528c0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00528c11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528c12: ret  */ FN_RET(0x00528bd0); r_esp += 4; return;
}

