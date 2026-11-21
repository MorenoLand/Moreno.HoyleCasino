#include "protos.h"

void f_00572d00(void) /* RoadKillSlotRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572d00);
    /* 00572d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00572d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572d07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572d0a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x572d0fu); f_005e9e20();
    /* 00572d0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572d12: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00572d18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572d1b: mov dword ptr [ecx], 0x6caadc */ W32((u32)(r_ecx), 0x6caadcu);
    /* 00572d21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572d24: mov esp, ebp */ r_esp = r_ebp;
    /* 00572d26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572d27: ret  */ FN_RET(0x00572d00); r_esp += 4; return;
}

void f_00572d30(void) /* RoadKillSlotRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572d30);
    /* 00572d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00572d33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572d35: push 0x6a616b */ { u32 v = 0x6a616bu; r_esp -= 4; W32(r_esp, v); }
    /* 00572d3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00572d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572d41: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572d44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00572d49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00572d4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572d4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00572d4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00572d55: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00572d58: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00572d5d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x572d62u); f_00686d82();
    /* 00572d62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572d65: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00572d68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00572d6f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572d73: je 0x572d82 */ if (fZ) goto L_00572d82;
L_00572d75:; BB(0x00572d75);
    /* 00572d75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572d78: call 0x571fe0 */ r_esp -= 4; W32(r_esp, 0x572d7du); f_00571fe0();
    /* 00572d7d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00572d80: jmp 0x572d89 */ goto L_00572d89;
L_00572d82:; BB(0x00572d82);
    /* 00572d82: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00572d89:; BB(0x00572d89);
    /* 00572d89: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572d8c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00572d8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00572d96: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00572d99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00572d9c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00572da3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00572da4: mov esp, ebp */ r_esp = r_ebp;
    /* 00572da6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572da7: ret  */ FN_RET(0x00572d30); r_esp += 4; return;
}

void f_00572db0(void) /* RoadKillSlotRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572db0);
    /* 00572db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572db7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572dbb: jne 0x572dc1 */ if (!fZ) goto L_00572dc1;
L_00572dbd:; BB(0x00572dbd);
    /* 00572dbd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572dbf: jmp 0x572ddd */ goto L_00572ddd;
L_00572dc1:; BB(0x00572dc1);
    /* 00572dc1: push 0x6c54f0 */ { u32 v = 0x6c54f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572dc6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x572dcbu); f_00630f40();
    /* 00572dcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572dce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572dcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572dd3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x572dd8u); f_00686d8e();
    /* 00572dd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572ddb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00572ddd:; BB(0x00572ddd);
    /* 00572ddd: mov esp, ebp */ r_esp = r_ebp;
    /* 00572ddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572de0: ret 4 */ FN_RET(0x00572db0); r_esp += 8; return;
}

void f_00572e10(void) /* RoadKillSlotRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e10);
    /* 00572e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e17: mov eax, 0x30fef8 */ r_eax = 0x30fef8u;
    /* 00572e1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e1f: ret  */ FN_RET(0x00572e10); r_esp += 4; return;
}

void f_00572e20(void) /* RoadKillSlotRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e20);
    /* 00572e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e27: mov eax, 0x6cac34 */ r_eax = 0x6cac34u;
    /* 00572e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e2f: ret  */ FN_RET(0x00572e20); r_esp += 4; return;
}

void f_00572e40(void) /* RoadKillSlotRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e40);
    /* 00572e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e47: mov eax, 0x749394 */ r_eax = 0x749394u;
    /* 00572e4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e4f: ret  */ FN_RET(0x00572e40); r_esp += 4; return;
}

void f_00572e50(void) /* RoadKillSlotRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e50);
    /* 00572e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e57: mov eax, 0x7493a0 */ r_eax = 0x7493a0u;
    /* 00572e5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e5f: ret  */ FN_RET(0x00572e50); r_esp += 4; return;
}

void f_00572e80(void) /* RoadKillSlotRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e80);
    /* 00572e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e87: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572e8b: jne 0x572e91 */ if (!fZ) goto L_00572e91;
L_00572e8d:; BB(0x00572e8d);
    /* 00572e8d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572e8f: jmp 0x572ed8 */ goto L_00572ed8;
L_00572e91:; BB(0x00572e91);
    /* 00572e91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572e94: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00572e9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00572e9d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00572ea4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00572ea7: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 00572eae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572eb1: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00572eb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00572ebb: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 00572ec2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00572ec5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00572ecc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572ecf: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00572ed6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00572ed8:; BB(0x00572ed8);
    /* 00572ed8: mov esp, ebp */ r_esp = r_ebp;
    /* 00572eda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572edb: ret 8 */ FN_RET(0x00572e80); r_esp += 12; return;
}

void f_00572ee0(void) /* RoadKillSlotRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572ee0);
    /* 00572ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572ee7: mov eax, 8 */ r_eax = 0x8u;
    /* 00572eec: mov esp, ebp */ r_esp = r_ebp;
    /* 00572eee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572eef: ret  */ FN_RET(0x00572ee0); r_esp += 4; return;
}

void f_00572ef0(void) /* RoadKillSlotRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572ef0);
    /* 00572ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572ef7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572ef9: mov esp, ebp */ r_esp = r_ebp;
    /* 00572efb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572efc: ret 4 */ FN_RET(0x00572ef0); r_esp += 8; return;
}

void f_00572f00(void) /* RoadKillSlotRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572f00);
    /* 00572f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00572f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572f07: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572f09: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f0c: ret 4 */ FN_RET(0x00572f00); r_esp += 8; return;
}

void f_00572f10(void) /* RoadKillSlotRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572f10);
    /* 00572f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00572f13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572f16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00572f19: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572f1d: jne 0x572f23 */ if (!fZ) goto L_00572f23;
L_00572f1f:; BB(0x00572f1f);
    /* 00572f1f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572f21: jmp 0x572f3e */ goto L_00572f3e;
L_00572f23:; BB(0x00572f23);
    /* 00572f23: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572f26: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00572f29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572f2c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00572f32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572f35: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00572f3c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00572f3e:; BB(0x00572f3e);
    /* 00572f3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f41: ret 4 */ FN_RET(0x00572f10); r_esp += 8; return;
}

void f_00572f60(void) /* RoadKillSlotRoomInterface::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572f60);
    /* 00572f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00572f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572f67: mov eax, 0xe */ r_eax = 0xeu;
    /* 00572f6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f6f: ret  */ FN_RET(0x00572f60); r_esp += 4; return;
}

void f_00572f80(void) /* RoadKillSlotRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572f80);
    /* 00572f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00572f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572f87: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00572f89: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f8c: ret 8 */ FN_RET(0x00572f80); r_esp += 12; return;
}

void f_00572fa0(void) /* RoadKillSlotRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572fa0);
    /* 00572fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572fa7: cmp dword ptr [ebp + 8], 0x3102e1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3102e1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572fae: jne 0x572fc1 */ if (!fZ) goto L_00572fc1;
L_00572fb0:; BB(0x00572fb0);
    /* 00572fb0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00572fb2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00572fb8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x572fbdu); f_00653bd0();
    /* 00572fbd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00572fbf: jmp 0x572fc3 */ goto L_00572fc3;
L_00572fc1:; BB(0x00572fc1);
    /* 00572fc1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00572fc3:; BB(0x00572fc3);
    /* 00572fc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00572fc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572fc6: ret 4 */ FN_RET(0x00572fa0); r_esp += 8; return;
}

void f_00572fd0(void) /* RoadKillSlotRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572fd0);
    /* 00572fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572fd7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572fd9: mov esp, ebp */ r_esp = r_ebp;
    /* 00572fdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572fdc: ret 4 */ FN_RET(0x00572fd0); r_esp += 8; return;
}

void f_00572fe0(void) /* RoadKillSlotRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572fe0);
    /* 00572fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572fe7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572fe9: mov esp, ebp */ r_esp = r_ebp;
    /* 00572feb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572fec: ret 4 */ FN_RET(0x00572fe0); r_esp += 8; return;
}

void f_00572ff0(void) /* RoadKillSlotRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572ff0);
    /* 00572ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572ff7: mov eax, 0x7493a4 */ r_eax = 0x7493a4u;
    /* 00572ffc: mov esp, ebp */ r_esp = r_ebp;
    /* 00572ffe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572fff: ret  */ FN_RET(0x00572ff0); r_esp += 4; return;
}

void f_00573000(void) /* RoadKillSlotRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00573000);
    /* 00573000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573001: mov ebp, esp */ r_ebp = r_esp;
    /* 00573003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00573005: push 0x6a6194 */ { u32 v = 0x6a6194u; r_esp -= 4; W32(r_esp, v); }
    /* 0057300a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00573010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573011: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00573012: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00573017: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00573019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057301a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057301d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00573023: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00573026: mov eax, dword ptr [0x793454] */ r_eax = R32((u32)(0x793454u));
    /* 0057302b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0057302e: jne 0x573099 */ if (!fZ) goto L_00573099;
L_00573030:; BB(0x00573030);
    /* 00573030: mov ecx, dword ptr [0x793454] */ r_ecx = R32((u32)(0x793454u));
    /* 00573036: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00573039: mov dword ptr [0x793454], ecx */ W32((u32)(0x793454u), r_ecx);
    /* 0057303f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00573046: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057304c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057304e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00573054: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0057305a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57305cu); call_ind(t); }
    /* 0057305c: mov dword ptr [0x7493b8], eax */ W32((u32)(0x7493b8u), r_eax);
    /* 00573061: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00573066: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573068: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057306e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00573074: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573076u); call_ind(t); }
    /* 00573076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573077: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057307d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057307f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00573085: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0057308b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57308du); call_ind(t); }
    /* 0057308d: mov dword ptr [0x7493bc], eax */ W32((u32)(0x7493bcu), r_eax);
    /* 00573092: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00573099:; BB(0x00573099);
    /* 00573099: cmp dword ptr [ebp + 8], 0x3102e2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3102e2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005730a0: jne 0x5730ab */ if (!fZ) goto L_005730ab;
L_005730a2:; BB(0x005730a2);
    /* 005730a2: mov eax, 0x7493b4 */ r_eax = 0x7493b4u;
    /* 005730a7: jmp 0x5730ad */ goto L_005730ad;
L_005730ab:; BB(0x005730ab);
    /* 005730ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005730ad:; BB(0x005730ad);
    /* 005730ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005730b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005730b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005730b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005730ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005730bb: ret 4 */ FN_RET(0x00573000); r_esp += 8; return;
}

void f_005730c0(void) /* RoadKillSlotRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005730c0);
    /* 005730c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005730c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005730c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005730c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005730c7: mov eax, 0x748b58 */ r_eax = 0x748b58u;
    /* 005730cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005730ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005730cf: ret  */ FN_RET(0x005730c0); r_esp += 4; return;
}

void f_005730d0(void) /* RoadKillSlotRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005730d0);
    /* 005730d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005730d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005730d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005730d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005730d7: mov eax, 0x74933c */ r_eax = 0x74933cu;
    /* 005730dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005730de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005730df: ret  */ FN_RET(0x005730d0); r_esp += 4; return;
}

void f_005730e0(void) /* RoadKillSlotRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005730e0);
    /* 005730e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005730e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005730e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005730e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005730e7: cmp dword ptr [ebp + 0xc], 0x30fef8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x30fef8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005730ee: je 0x5730f4 */ if (fZ) goto L_005730f4;
L_005730f0:; BB(0x005730f0);
    /* 005730f0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005730f2: jmp 0x573161 */ goto L_00573161;
L_005730f4:; BB(0x005730f4);
    /* 005730f4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005730fa: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x5730ffu); f_005de170();
    /* 005730ff: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00573105: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x57310au); f_005e2f90();
    /* 0057310a: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0057310f: mov dword ptr [eax + 0x4f14], 0xffffffff */ W32((u32)(r_eax+0x4f14u), 0xffffffffu);
    /* 00573119: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057311c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057311d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00573123: call 0x5e05c0 */ r_esp -= 4; W32(r_esp, 0x573128u); f_005e05c0();
    /* 00573128: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057312e: mov dword ptr [edx + 0x4f10], eax */ W32((u32)(r_edx+0x4f10u), r_eax);
    /* 00573134: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00573136: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00573138: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0057313d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057313f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00573145: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0057314b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57314du); call_ind(t); }
    /* 0057314d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00573150: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573152: jne 0x57315f */ if (!fZ) goto L_0057315f;
L_00573154:; BB(0x00573154);
    /* 00573154: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057315a: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x57315fu); f_005e3130();
L_0057315f:; BB(0x0057315f);
    /* 0057315f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00573161:; BB(0x00573161);
    /* 00573161: mov esp, ebp */ r_esp = r_ebp;
    /* 00573163: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573164: ret 8 */ FN_RET(0x005730e0); r_esp += 12; return;
}

