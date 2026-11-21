#include "protos.h"

void f_00583b60(void) /* KenoRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583b60);
    /* 00583b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00583b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583b67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583b6a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x583b6fu); f_005e9e20();
    /* 00583b6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583b72: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00583b78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583b7b: mov dword ptr [ecx], 0x6cc7d4 */ W32((u32)(r_ecx), 0x6cc7d4u);
    /* 00583b81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583b84: mov esp, ebp */ r_esp = r_ebp;
    /* 00583b86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583b87: ret  */ FN_RET(0x00583b60); r_esp += 4; return;
}

void f_00583b90(void) /* KenoRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583b90);
    /* 00583b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00583b93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00583b95: push 0x6a6c4b */ { u32 v = 0x6a6c4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00583b9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00583ba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583ba1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583ba4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00583ba9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00583bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583bac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00583baf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00583bb5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00583bb8: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00583bbd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x583bc2u); f_00686d82();
    /* 00583bc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583bc5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00583bc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00583bcf: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583bd3: je 0x583be2 */ if (fZ) goto L_00583be2;
L_00583bd5:; BB(0x00583bd5);
    /* 00583bd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00583bd8: call 0x5831c0 */ r_esp -= 4; W32(r_esp, 0x583bddu); f_005831c0();
    /* 00583bdd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00583be0: jmp 0x583be9 */ goto L_00583be9;
L_00583be2:; BB(0x00583be2);
    /* 00583be2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00583be9:; BB(0x00583be9);
    /* 00583be9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00583bec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00583bef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00583bf6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00583bf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583bfc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583c03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00583c04: mov esp, ebp */ r_esp = r_ebp;
    /* 00583c06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583c07: ret  */ FN_RET(0x00583b90); r_esp += 4; return;
}

void f_00583c10(void) /* KenoRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583c10);
    /* 00583c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00583c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583c14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583c17: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583c1b: jne 0x583c21 */ if (!fZ) goto L_00583c21;
L_00583c1d:; BB(0x00583c1d);
    /* 00583c1d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00583c1f: jmp 0x583c3d */ goto L_00583c3d;
L_00583c21:; BB(0x00583c21);
    /* 00583c21: push 0x6cc2f4 */ { u32 v = 0x6cc2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00583c26: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x583c2bu); f_00630f40();
    /* 00583c2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583c2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00583c32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583c33: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x583c38u); f_00686d8e();
    /* 00583c38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583c3b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00583c3d:; BB(0x00583c3d);
    /* 00583c3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00583c3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583c40: ret 4 */ FN_RET(0x00583c10); r_esp += 8; return;
}

void f_00583c70(void) /* KenoRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583c70);
    /* 00583c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00583c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583c77: mov eax, 0x30dfb8 */ r_eax = 0x30dfb8u;
    /* 00583c7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00583c7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583c7f: ret  */ FN_RET(0x00583c70); r_esp += 4; return;
}

void f_00583c80(void) /* KenoRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583c80);
    /* 00583c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00583c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583c87: mov eax, 0x6cc92c */ r_eax = 0x6cc92cu;
    /* 00583c8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00583c8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583c8f: ret  */ FN_RET(0x00583c80); r_esp += 4; return;
}

void f_00583ca0(void) /* KenoRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583ca0);
    /* 00583ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583ca7: mov eax, 0x74bd68 */ r_eax = 0x74bd68u;
    /* 00583cac: mov esp, ebp */ r_esp = r_ebp;
    /* 00583cae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583caf: ret  */ FN_RET(0x00583ca0); r_esp += 4; return;
}

void f_00583cb0(void) /* KenoRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583cb0);
    /* 00583cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583cb7: mov eax, 0x74bd74 */ r_eax = 0x74bd74u;
    /* 00583cbc: mov esp, ebp */ r_esp = r_ebp;
    /* 00583cbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583cbf: ret  */ FN_RET(0x00583cb0); r_esp += 4; return;
}

void f_00583ce0(void) /* KenoRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583ce0);
    /* 00583ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583ce7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583ceb: jne 0x583cf1 */ if (!fZ) goto L_00583cf1;
L_00583ced:; BB(0x00583ced);
    /* 00583ced: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00583cef: jmp 0x583d38 */ goto L_00583d38;
L_00583cf1:; BB(0x00583cf1);
    /* 00583cf1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00583cf4: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00583cfa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583cfd: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00583d04: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00583d07: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 00583d0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00583d11: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00583d18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583d1b: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 00583d22: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00583d25: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00583d2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00583d2f: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00583d36: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00583d38:; BB(0x00583d38);
    /* 00583d38: mov esp, ebp */ r_esp = r_ebp;
    /* 00583d3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583d3b: ret 8 */ FN_RET(0x00583ce0); r_esp += 12; return;
}

void f_00583d40(void) /* KenoRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583d40);
    /* 00583d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00583d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583d47: mov eax, 8 */ r_eax = 0x8u;
    /* 00583d4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00583d4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583d4f: ret  */ FN_RET(0x00583d40); r_esp += 4; return;
}

void f_00583d50(void) /* KenoRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583d50);
    /* 00583d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00583d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583d54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583d57: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00583d59: mov esp, ebp */ r_esp = r_ebp;
    /* 00583d5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583d5c: ret 4 */ FN_RET(0x00583d50); r_esp += 8; return;
}

void f_00583d60(void) /* KenoRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583d60);
    /* 00583d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00583d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583d67: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00583d69: mov esp, ebp */ r_esp = r_ebp;
    /* 00583d6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583d6c: ret 4 */ FN_RET(0x00583d60); r_esp += 8; return;
}

void f_00583d70(void) /* KenoRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583d70);
    /* 00583d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00583d73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583d76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00583d79: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583d7d: jne 0x583d83 */ if (!fZ) goto L_00583d83;
L_00583d7f:; BB(0x00583d7f);
    /* 00583d7f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00583d81: jmp 0x583d9e */ goto L_00583d9e;
L_00583d83:; BB(0x00583d83);
    /* 00583d83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00583d86: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00583d89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583d8c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00583d92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583d95: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00583d9c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00583d9e:; BB(0x00583d9e);
    /* 00583d9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00583da0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583da1: ret 4 */ FN_RET(0x00583d70); r_esp += 8; return;
}

void f_00583dc0(void) /* KenoRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583dc0);
    /* 00583dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583dc7: mov eax, 7 */ r_eax = 0x7u;
    /* 00583dcc: mov esp, ebp */ r_esp = r_ebp;
    /* 00583dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583dcf: ret  */ FN_RET(0x00583dc0); r_esp += 4; return;
}

void f_00583dd0(void) /* KenoRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583dd0);
    /* 00583dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583dd3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583dd6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00583dd9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00583ddb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583dde: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x583de3u); f_0063aae0();
    /* 00583de3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00583de6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00583de9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00583deb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583dee: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00583df0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00583df3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00583df5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00583df8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00583dfb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583dfe: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00583e01: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00583e04: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00583e07: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00583e0a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00583e0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583e0f: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583e11: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00583e14: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00583e16: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00583e19: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00583e1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583e1f: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00583e22: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00583e25: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00583e28: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00583e2a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00583e30: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00583e32: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00583e38: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00583e3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583e40u); call_ind(t); }
    /* 00583e40: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00583e43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583e45: je 0x583ec5 */ if (fZ) goto L_00583ec5;
L_00583e47:; BB(0x00583e47);
    /* 00583e47: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00583e4d: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x583e52u); f_005f3bf0();
    /* 00583e52: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583e55: jne 0x583ec5 */ if (!fZ) goto L_00583ec5;
L_00583e57:; BB(0x00583e57);
    /* 00583e57: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00583e5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583e5b: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00583e5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583e5f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583e62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583e63: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00583e69: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x583e6eu); f_005e0c40();
    /* 00583e6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00583e71: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00583e74: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00583e77: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00583e79: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00583e7c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00583e7e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00583e81: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00583e84: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583e87: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00583e8a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00583e8d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00583e90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00583e92: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583e95: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00583e98: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00583e9a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00583e9d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00583ea0: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583ea3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00583ea6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00583ea9: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00583eac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00583eae: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583eb1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00583eb4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00583eb6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00583eb9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00583ebc: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583ebf: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00583ec2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_00583ec5:; BB(0x00583ec5);
    /* 00583ec5: mov esp, ebp */ r_esp = r_ebp;
    /* 00583ec7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583ec8: ret 0x10 */ FN_RET(0x00583dd0); r_esp += 20; return;
}

void f_00583ed0(void) /* KenoRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583ed0);
    /* 00583ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583ed3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583ed6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00583edb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00583edd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00583ee0: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00583ee3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00583ee5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00583ee8: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x583eedu); f_0063aae0();
    /* 00583eed: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00583ef0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583ef2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583ef4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x583ef9u); f_0064c8a0();
    /* 00583ef9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583efc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00583eff: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00583f02: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00583f05: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00583f08: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00583f0b: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00583f0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583f10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583f12: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x583f17u); f_0064c8a0();
    /* 00583f17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583f1a: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00583f1d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00583f20: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00583f23: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00583f26: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00583f29: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00583f2c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00583f2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f30: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00583f33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f34: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00583f3a: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x583f3fu); f_005e0690();
    /* 00583f3f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00583f45: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x583f4au); f_005f3bf0();
    /* 00583f4a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583f4d: jne 0x583f66 */ if (!fZ) goto L_00583f66;
L_00583f4f:; BB(0x00583f4f);
    /* 00583f4f: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00583f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583f53: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00583f56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f57: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00583f5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f5b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00583f61: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x583f66u); f_005e0c40();
L_00583f66:; BB(0x00583f66);
    /* 00583f66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00583f68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00583f6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00583f6c: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00583f6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583f70: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00583f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f74: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00583f77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f78: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00583f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583f7c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00583f7f: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x583f84u); f_0064c5c0();
    /* 00583f84: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00583f87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00583f8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583f8b: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x583f90u); f_0064c8d0();
    /* 00583f90: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583f93: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00583f96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583f97: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 00583f9c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x583fa1u); f_00630f40();
    /* 00583fa1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583fa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583fa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583fa7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583faa: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x583fafu); f_00654390();
    /* 00583faf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00583fb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00583fb4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00583fb6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x583fbbu); f_00686d72();
    /* 00583fbb: mov esp, ebp */ r_esp = r_ebp;
    /* 00583fbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583fbe: ret 8 */ FN_RET(0x00583ed0); r_esp += 12; return;
}

void f_00583fd0(void) /* KenoRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583fd0);
    /* 00583fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583fd7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583fdc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00583fde: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00583fe1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x583fe6u); f_005fb5a0();
    /* 00583fe6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00583fe8: mov esp, ebp */ r_esp = r_ebp;
    /* 00583fea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583feb: ret 4 */ FN_RET(0x00583fd0); r_esp += 8; return;
}

void f_00583ff0(void) /* KenoRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583ff0);
    /* 00583ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00583ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583ff7: cmp dword ptr [ebp + 8], 0x30dfb8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30dfb8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583ffe: jne 0x584011 */ if (!fZ) goto L_00584011;
L_00584000:; BB(0x00584000);
    /* 00584000: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00584002: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00584008: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x58400du); f_00653bd0();
    /* 0058400d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0058400f: jmp 0x584013 */ goto L_00584013;
L_00584011:; BB(0x00584011);
    /* 00584011: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00584013:; BB(0x00584013);
    /* 00584013: mov esp, ebp */ r_esp = r_ebp;
    /* 00584015: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584016: ret 4 */ FN_RET(0x00583ff0); r_esp += 8; return;
}

void f_00584020(void) /* KenoRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584020);
    /* 00584020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584021: mov ebp, esp */ r_ebp = r_esp;
    /* 00584023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584027: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00584029: mov esp, ebp */ r_esp = r_ebp;
    /* 0058402b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058402c: ret 4 */ FN_RET(0x00584020); r_esp += 8; return;
}

void f_00584030(void) /* KenoRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584030);
    /* 00584030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584031: mov ebp, esp */ r_ebp = r_esp;
    /* 00584033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584037: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00584039: mov esp, ebp */ r_esp = r_ebp;
    /* 0058403b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058403c: ret 4 */ FN_RET(0x00584030); r_esp += 8; return;
}

void f_00584040(void) /* KenoRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584040);
    /* 00584040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584041: mov ebp, esp */ r_ebp = r_esp;
    /* 00584043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584047: mov eax, 0x74bd78 */ r_eax = 0x74bd78u;
    /* 0058404c: mov esp, ebp */ r_esp = r_ebp;
    /* 0058404e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058404f: ret  */ FN_RET(0x00584040); r_esp += 4; return;
}

void f_00584060(void) /* KenoRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584060);
    /* 00584060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584061: mov ebp, esp */ r_ebp = r_esp;
    /* 00584063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584067: mov eax, 0x74b618 */ r_eax = 0x74b618u;
    /* 0058406c: mov esp, ebp */ r_esp = r_ebp;
    /* 0058406e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058406f: ret  */ FN_RET(0x00584060); r_esp += 4; return;
}

void f_00584070(void) /* KenoRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584070);
    /* 00584070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584071: mov ebp, esp */ r_ebp = r_esp;
    /* 00584073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584077: mov eax, 0x74bc68 */ r_eax = 0x74bc68u;
    /* 0058407c: mov esp, ebp */ r_esp = r_ebp;
    /* 0058407e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058407f: ret  */ FN_RET(0x00584070); r_esp += 4; return;
}

void f_00584080(void) /* KenoRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584080);
    /* 00584080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584081: mov ebp, esp */ r_ebp = r_esp;
    /* 00584083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584087: cmp dword ptr [ebp + 0xc], 0x186bf */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058408e: je 0x58409d */ if (fZ) goto L_0058409d;
L_00584090:; BB(0x00584090);
    /* 00584090: cmp dword ptr [ebp + 0xc], 0x186be */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186beu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584097: je 0x58409d */ if (fZ) goto L_0058409d;
L_00584099:; BB(0x00584099);
    /* 00584099: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0058409b: jmp 0x5840c5 */ goto L_005840c5;
L_0058409d:; BB(0x0058409d);
    /* 0058409d: cmp dword ptr [ebp + 8], 0x30dfb9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30dfb9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005840a4: jne 0x5840c3 */ if (!fZ) goto L_005840c3;
L_005840a6:; BB(0x005840a6);
    /* 005840a6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005840a8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005840aa: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005840af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005840b1: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005840b7: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005840bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5840bfu); call_ind(t); }
    /* 005840bf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005840c1: jmp 0x5840c5 */ goto L_005840c5;
L_005840c3:; BB(0x005840c3);
    /* 005840c3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005840c5:; BB(0x005840c5);
    /* 005840c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005840c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005840c8: ret 8 */ FN_RET(0x00584080); r_esp += 12; return;
}

