#include "protos.h"

void f_00567b30(void) /* VPMultiRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567b30);
    /* 00567b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00567b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567b37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567b3a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x567b3fu); f_005e9e20();
    /* 00567b3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567b42: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00567b48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567b4b: mov dword ptr [ecx], 0x6c9fcc */ W32((u32)(r_ecx), 0x6c9fccu);
    /* 00567b51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567b54: mov esp, ebp */ r_esp = r_ebp;
    /* 00567b56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567b57: ret  */ FN_RET(0x00567b30); r_esp += 4; return;
}

void f_00567b60(void) /* VPMultiRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567b60);
    /* 00567b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00567b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00567b65: push 0x6a5c0b */ { u32 v = 0x6a5c0bu; r_esp -= 4; W32(r_esp, v); }
    /* 00567b6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00567b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567b71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567b74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00567b79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00567b7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567b7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00567b7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00567b85: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00567b88: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00567b8d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x567b92u); f_00686d82();
    /* 00567b92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567b95: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00567b98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00567b9f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567ba3: je 0x567bb2 */ if (fZ) goto L_00567bb2;
L_00567ba5:; BB(0x00567ba5);
    /* 00567ba5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00567ba8: call 0x566da0 */ r_esp -= 4; W32(r_esp, 0x567badu); f_00566da0();
    /* 00567bad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00567bb0: jmp 0x567bb9 */ goto L_00567bb9;
L_00567bb2:; BB(0x00567bb2);
    /* 00567bb2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00567bb9:; BB(0x00567bb9);
    /* 00567bb9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00567bbc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00567bbf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00567bc6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00567bc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00567bcc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00567bd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00567bd4: mov esp, ebp */ r_esp = r_ebp;
    /* 00567bd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567bd7: ret  */ FN_RET(0x00567b60); r_esp += 4; return;
}

void f_00567be0(void) /* VPMultiRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567be0);
    /* 00567be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00567be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567be7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567beb: jne 0x567bf1 */ if (!fZ) goto L_00567bf1;
L_00567bed:; BB(0x00567bed);
    /* 00567bed: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00567bef: jmp 0x567c0d */ goto L_00567c0d;
L_00567bf1:; BB(0x00567bf1);
    /* 00567bf1: push 0x6c9750 */ { u32 v = 0x6c9750u; r_esp -= 4; W32(r_esp, v); }
    /* 00567bf6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x567bfbu); f_00630f40();
    /* 00567bfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567bff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567c03: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x567c08u); f_00686d8e();
    /* 00567c08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567c0b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00567c0d:; BB(0x00567c0d);
    /* 00567c0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c10: ret 4 */ FN_RET(0x00567be0); r_esp += 8; return;
}

void f_00567c40(void) /* VPMultiRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567c40);
    /* 00567c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00567c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567c47: mov eax, 0x312220 */ r_eax = 0x312220u;
    /* 00567c4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c4f: ret  */ FN_RET(0x00567c40); r_esp += 4; return;
}

void f_00567c50(void) /* VPMultiRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567c50);
    /* 00567c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00567c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567c57: mov eax, 0x6b88a4 */ r_eax = 0x6b88a4u;
    /* 00567c5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c5f: ret  */ FN_RET(0x00567c50); r_esp += 4; return;
}

void f_00567c70(void) /* VPMultiRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567c70);
    /* 00567c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00567c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567c77: mov eax, 0x74542c */ r_eax = 0x74542cu;
    /* 00567c7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c7f: ret  */ FN_RET(0x00567c70); r_esp += 4; return;
}

void f_00567c80(void) /* VPMultiRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567c80);
    /* 00567c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00567c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567c87: mov eax, 0x74543c */ r_eax = 0x74543cu;
    /* 00567c8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c8f: ret  */ FN_RET(0x00567c80); r_esp += 4; return;
}

void f_00567cb0(void) /* VPMultiRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567cb0);
    /* 00567cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00567cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567cb7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567cbb: jne 0x567cc1 */ if (!fZ) goto L_00567cc1;
L_00567cbd:; BB(0x00567cbd);
    /* 00567cbd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00567cbf: jmp 0x567d08 */ goto L_00567d08;
L_00567cc1:; BB(0x00567cc1);
    /* 00567cc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567cc4: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00567cca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567ccd: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00567cd4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567cd7: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 00567cde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567ce1: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00567ce8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567ceb: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 00567cf2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567cf5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00567cfc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567cff: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00567d06: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00567d08:; BB(0x00567d08);
    /* 00567d08: mov esp, ebp */ r_esp = r_ebp;
    /* 00567d0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567d0b: ret 8 */ FN_RET(0x00567cb0); r_esp += 12; return;
}

void f_00567d10(void) /* VPMultiRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567d10);
    /* 00567d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00567d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567d17: mov eax, 8 */ r_eax = 0x8u;
    /* 00567d1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567d1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567d1f: ret  */ FN_RET(0x00567d10); r_esp += 4; return;
}

void f_00567d40(void) /* VPMultiRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567d40);
    /* 00567d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00567d43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567d46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00567d49: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567d4d: jne 0x567d53 */ if (!fZ) goto L_00567d53;
L_00567d4f:; BB(0x00567d4f);
    /* 00567d4f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00567d51: jmp 0x567d6e */ goto L_00567d6e;
L_00567d53:; BB(0x00567d53);
    /* 00567d53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567d56: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00567d59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567d5c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00567d62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567d65: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00567d6c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00567d6e:; BB(0x00567d6e);
    /* 00567d6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00567d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567d71: ret 4 */ FN_RET(0x00567d40); r_esp += 8; return;
}

void f_00567d90(void) /* VPMultiRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567d90);
    /* 00567d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00567d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567d97: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00567d9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567d9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567d9f: ret  */ FN_RET(0x00567d90); r_esp += 4; return;
}

void f_00567da0(void) /* VPMultiRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567da0);
    /* 00567da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00567da3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567da6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00567da9: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00567dab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567dae: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x567db3u); f_0063aae0();
    /* 00567db3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00567db6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00567db8: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00567dbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00567dbf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00567dc5: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00567dcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567dcdu); call_ind(t); }
    /* 00567dcd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00567dd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567dd2: je 0x567e9c */ if (fZ) goto L_00567e9c;
L_00567dd8:; BB(0x00567dd8);
    /* 00567dd8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00567dde: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x567de3u); f_005f3bf0();
    /* 00567de3: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567de6: jne 0x567e9c */ if (!fZ) goto L_00567e9c;
L_00567dec:; BB(0x00567dec);
    /* 00567dec: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00567def: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00567df1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567df4: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00567df6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00567df9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00567dfb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00567dfe: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00567e01: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567e04: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00567e07: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00567e0a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00567e0d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00567e10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567e12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567e15: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00567e17: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00567e1a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00567e1c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00567e1f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00567e22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567e25: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00567e28: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00567e2b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00567e2e: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00567e31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567e32: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00567e35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567e36: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567e39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567e3a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00567e40: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x567e45u); f_005e0c40();
    /* 00567e45: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00567e48: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00567e4b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00567e4e: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00567e50: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00567e53: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00567e55: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00567e58: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00567e5b: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00567e5e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00567e61: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00567e64: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00567e67: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00567e69: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00567e6c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00567e6f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00567e71: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00567e74: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00567e77: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00567e7a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00567e7d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00567e80: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00567e83: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00567e85: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00567e88: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00567e8b: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00567e8d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00567e90: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00567e93: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00567e96: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00567e99: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_00567e9c:; BB(0x00567e9c);
    /* 00567e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567e9f: ret 0x10 */ FN_RET(0x00567da0); r_esp += 20; return;
}

void f_00567eb0(void) /* VPMultiRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567eb0);
    /* 00567eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00567eb3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567eb6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00567ebb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00567ebd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00567ec0: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00567ec3: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ec5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00567ec8: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x567ecdu); f_0063aae0();
    /* 00567ecd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00567ed0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ed2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ed4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x567ed9u); f_0064c8a0();
    /* 00567ed9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567edc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00567edf: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00567ee2: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00567ee5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00567ee8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00567eeb: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00567eee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ef0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ef2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x567ef7u); f_0064c8a0();
    /* 00567ef7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567efa: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00567efd: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00567f00: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00567f03: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00567f06: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00567f09: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00567f0c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00567f0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f10: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00567f13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f14: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00567f1a: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x567f1fu); f_005e0690();
    /* 00567f1f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00567f25: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x567f2au); f_005f3bf0();
    /* 00567f2a: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567f2d: jne 0x567f46 */ if (!fZ) goto L_00567f46;
L_00567f2f:; BB(0x00567f2f);
    /* 00567f2f: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00567f32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567f33: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00567f36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f37: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00567f3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f3b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00567f41: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x567f46u); f_005e0c40();
L_00567f46:; BB(0x00567f46);
    /* 00567f46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00567f48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00567f4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00567f4c: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00567f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567f50: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00567f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f54: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00567f57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f58: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00567f5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567f5c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00567f5f: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x567f64u); f_0064c5c0();
    /* 00567f64: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00567f67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00567f6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00567f6b: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x567f70u); f_0064c8d0();
    /* 00567f70: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567f73: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00567f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567f77: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 00567f7c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x567f81u); f_00630f40();
    /* 00567f81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567f87: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567f8a: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x567f8fu); f_00654390();
    /* 00567f8f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00567f91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567f94: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00567f96: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x567f9bu); f_00686d72();
    /* 00567f9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00567f9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567f9e: ret 8 */ FN_RET(0x00567eb0); r_esp += 12; return;
}

void f_00567fb0(void) /* VPMultiRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567fb0);
    /* 00567fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00567fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567fb7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567fbc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00567fbe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00567fc1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x567fc6u); f_005fb5a0();
    /* 00567fc6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00567fc8: mov esp, ebp */ r_esp = r_ebp;
    /* 00567fca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567fcb: ret 4 */ FN_RET(0x00567fb0); r_esp += 8; return;
}

void f_00567fd0(void) /* VPMultiRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567fd0);
    /* 00567fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00567fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567fd7: cmp dword ptr [ebp + 8], 0x312220 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x312220u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567fde: jne 0x567ff1 */ if (!fZ) goto L_00567ff1;
L_00567fe0:; BB(0x00567fe0);
    /* 00567fe0: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00567fe2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00567fe8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x567fedu); f_00653bd0();
    /* 00567fed: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00567fef: jmp 0x567ff3 */ goto L_00567ff3;
L_00567ff1:; BB(0x00567ff1);
    /* 00567ff1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00567ff3:; BB(0x00567ff3);
    /* 00567ff3: mov esp, ebp */ r_esp = r_ebp;
    /* 00567ff5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567ff6: ret 4 */ FN_RET(0x00567fd0); r_esp += 8; return;
}

void f_00568000(void) /* VPMultiRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568000);
    /* 00568000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568001: mov ebp, esp */ r_ebp = r_esp;
    /* 00568003: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568006: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00568009: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0056800b: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00568010: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00568012: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568018: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0056801e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x568020u); call_ind(t); }
    /* 00568020: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00568023: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568027: jne 0x568040 */ if (!fZ) goto L_00568040;
L_00568029:; BB(0x00568029);
    /* 00568029: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 0056802e: push 0x6ca16c */ { u32 v = 0x6ca16cu; r_esp -= 4; W32(r_esp, v); }
    /* 00568033: push 0x6ca15c */ { u32 v = 0x6ca15cu; r_esp -= 4; W32(r_esp, v); }
    /* 00568038: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56803du); f_005e9f20();
    /* 0056803d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00568040:; BB(0x00568040);
    /* 00568040: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00568043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568044: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568047: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00568049: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056804c: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0056804f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x568051u); call_ind(t); }
    /* 00568051: mov esp, ebp */ r_esp = r_ebp;
    /* 00568053: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568054: ret 4 */ FN_RET(0x00568000); r_esp += 8; return;
}

void f_00568060(void) /* VPMultiRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568060);
    /* 00568060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568061: mov ebp, esp */ r_ebp = r_esp;
    /* 00568063: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568066: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00568069: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0056806b: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00568070: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00568072: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568078: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0056807e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x568080u); call_ind(t); }
    /* 00568080: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00568083: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568087: jne 0x5680a0 */ if (!fZ) goto L_005680a0;
L_00568089:; BB(0x00568089);
    /* 00568089: push 0x138 */ { u32 v = 0x138u; r_esp -= 4; W32(r_esp, v); }
    /* 0056808e: push 0x6ca16c */ { u32 v = 0x6ca16cu; r_esp -= 4; W32(r_esp, v); }
    /* 00568093: push 0x6ca15c */ { u32 v = 0x6ca15cu; r_esp -= 4; W32(r_esp, v); }
    /* 00568098: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56809du); f_005e9f20();
    /* 0056809d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005680a0:; BB(0x005680a0);
    /* 005680a0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005680a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005680a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005680a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005680a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005680ac: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005680af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5680b1u); call_ind(t); }
    /* 005680b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005680b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005680b4: ret 4 */ FN_RET(0x00568060); r_esp += 8; return;
}

void f_005680c0(void) /* VPMultiRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005680c0);
    /* 005680c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005680c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005680c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005680c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005680c7: mov eax, 0x745440 */ r_eax = 0x745440u;
    /* 005680cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005680ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005680cf: ret  */ FN_RET(0x005680c0); r_esp += 4; return;
}

void f_005680d0(void) /* VPMultiRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005680d0);
    /* 005680d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005680d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005680d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005680d5: push 0x6a5c34 */ { u32 v = 0x6a5c34u; r_esp -= 4; W32(r_esp, v); }
    /* 005680da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005680e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005680e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005680e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005680e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005680e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005680ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005680ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005680f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005680f6: mov eax, dword ptr [0x793448] */ r_eax = R32((u32)(0x793448u));
    /* 005680fb: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005680fe: jne 0x568169 */ if (!fZ) goto L_00568169;
L_00568100:; BB(0x00568100);
    /* 00568100: mov ecx, dword ptr [0x793448] */ r_ecx = R32((u32)(0x793448u));
    /* 00568106: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00568109: mov dword ptr [0x793448], ecx */ W32((u32)(0x793448u), r_ecx);
    /* 0056810f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00568116: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0056811c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056811e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568124: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0056812a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56812cu); call_ind(t); }
    /* 0056812c: mov dword ptr [0x745454], eax */ W32((u32)(0x745454u), r_eax);
    /* 00568131: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00568136: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00568138: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0056813e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00568144: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x568146u); call_ind(t); }
    /* 00568146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568147: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0056814d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056814f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568155: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0056815b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56815du); call_ind(t); }
    /* 0056815d: mov dword ptr [0x745458], eax */ W32((u32)(0x745458u), r_eax);
    /* 00568162: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00568169:; BB(0x00568169);
    /* 00568169: cmp dword ptr [ebp + 8], 0x312221 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x312221u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568170: jne 0x56817b */ if (!fZ) goto L_0056817b;
L_00568172:; BB(0x00568172);
    /* 00568172: mov eax, 0x745450 */ r_eax = 0x745450u;
    /* 00568177: jmp 0x56817d */ goto L_0056817d;
L_0056817b:; BB(0x0056817b);
    /* 0056817b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0056817d:; BB(0x0056817d);
    /* 0056817d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00568180: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00568187: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568188: mov esp, ebp */ r_esp = r_ebp;
    /* 0056818a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056818b: ret 4 */ FN_RET(0x005680d0); r_esp += 8; return;
}

void f_00568190(void) /* VPMultiRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568190);
    /* 00568190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568191: mov ebp, esp */ r_ebp = r_esp;
    /* 00568193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568197: mov eax, 0x744960 */ r_eax = 0x744960u;
    /* 0056819c: mov esp, ebp */ r_esp = r_ebp;
    /* 0056819e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056819f: ret  */ FN_RET(0x00568190); r_esp += 4; return;
}

void f_005681a0(void) /* VPMultiRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005681a0);
    /* 005681a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005681a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005681a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005681a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005681a7: mov eax, 0x7452d8 */ r_eax = 0x7452d8u;
    /* 005681ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005681ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005681af: ret  */ FN_RET(0x005681a0); r_esp += 4; return;
}

void f_005681b0(void) /* VPMultiRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005681b0);
    /* 005681b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005681b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005681b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005681b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005681b9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005681bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005681bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005681c0: call 0x568250 */ r_esp -= 4; W32(r_esp, 0x5681c5u); f_00568250();
    /* 005681c5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005681c8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005681cc: jne 0x5681d2 */ if (!fZ) goto L_005681d2;
L_005681ce:; BB(0x005681ce);
    /* 005681ce: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005681d0: jmp 0x56823d */ goto L_0056823d;
L_005681d2:; BB(0x005681d2);
    /* 005681d2: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005681d8: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x5681ddu); f_005de170();
    /* 005681dd: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005681e3: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5681e8u); f_005e2f90();
    /* 005681e8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005681ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005681f1: mov dword ptr [ecx + 0x4f14], edx */ W32((u32)(r_ecx+0x4f14u), r_edx);
    /* 005681f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005681fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005681fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005681fe: call 0x5682a0 */ r_esp -= 4; W32(r_esp, 0x568203u); f_005682a0();
    /* 00568203: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568209: mov dword ptr [ecx + 0x4f10], eax */ W32((u32)(r_ecx+0x4f10u), r_eax);
    /* 0056820f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00568211: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00568213: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00568219: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056821b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568221: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 00568227: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x568229u); call_ind(t); }
    /* 00568229: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056822c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056822e: jne 0x56823b */ if (!fZ) goto L_0056823b;
L_00568230:; BB(0x00568230);
    /* 00568230: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568236: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x56823bu); f_005e3130();
L_0056823b:; BB(0x0056823b);
    /* 0056823b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0056823d:; BB(0x0056823d);
    /* 0056823d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056823f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568240: ret 8 */ FN_RET(0x005681b0); r_esp += 12; return;
}

