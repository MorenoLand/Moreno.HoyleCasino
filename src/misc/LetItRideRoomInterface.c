#include "protos.h"

void f_0044bde0(void) /* LetItRideRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bde0);
    /* 0044bde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bde7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bdea: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x44bdefu); f_005e9e20();
    /* 0044bdef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bdf2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 0044bdf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bdfb: mov dword ptr [ecx], 0x6b918c */ W32((u32)(r_ecx), 0x6b918cu);
    /* 0044be01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044be04: mov esp, ebp */ r_esp = r_ebp;
    /* 0044be06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044be07: ret  */ FN_RET(0x0044bde0); r_esp += 4; return;
}

void f_0044be10(void) /* LetItRideRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044be10);
    /* 0044be10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044be11: mov ebp, esp */ r_ebp = r_esp;
    /* 0044be13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044be15: push 0x69eebb */ { u32 v = 0x69eebbu; r_esp -= 4; W32(r_esp, v); }
    /* 0044be1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044be20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044be21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044be24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044be29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044be2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044be2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044be2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044be35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044be38: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0044be3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44be42u); f_00686d82();
    /* 0044be42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044be45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044be48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044be4f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044be53: je 0x44be62 */ if (fZ) goto L_0044be62;
L_0044be55:; BB(0x0044be55);
    /* 0044be55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044be58: call 0x44ab50 */ r_esp -= 4; W32(r_esp, 0x44be5du); f_0044ab50();
    /* 0044be5d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044be60: jmp 0x44be69 */ goto L_0044be69;
L_0044be62:; BB(0x0044be62);
    /* 0044be62: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0044be69:; BB(0x0044be69);
    /* 0044be69: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044be6c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044be6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044be76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044be79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044be7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044be83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044be84: mov esp, ebp */ r_esp = r_ebp;
    /* 0044be86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044be87: ret  */ FN_RET(0x0044be10); r_esp += 4; return;
}

void f_0044be90(void) /* LetItRideRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044be90);
    /* 0044be90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044be91: mov ebp, esp */ r_ebp = r_esp;
    /* 0044be93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044be94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044be97: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044be9b: jne 0x44bea1 */ if (!fZ) goto L_0044bea1;
L_0044be9d:; BB(0x0044be9d);
    /* 0044be9d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044be9f: jmp 0x44bebd */ goto L_0044bebd;
L_0044bea1:; BB(0x0044bea1);
    /* 0044bea1: push 0x6b8b38 */ { u32 v = 0x6b8b38u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bea6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44beabu); f_00630f40();
    /* 0044beab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044beae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044beaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044beb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044beb3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x44beb8u); f_00686d8e();
    /* 0044beb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044bebb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044bebd:; BB(0x0044bebd);
    /* 0044bebd: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bebf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bec0: ret 4 */ FN_RET(0x0044be90); r_esp += 8; return;
}

void f_0044bef0(void) /* LetItRideRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bef0);
    /* 0044bef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bef1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bef7: mov eax, 0x310ab0 */ r_eax = 0x310ab0u;
    /* 0044befc: mov esp, ebp */ r_esp = r_ebp;
    /* 0044befe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044beff: ret  */ FN_RET(0x0044bef0); r_esp += 4; return;
}

void f_0044bf00(void) /* LetItRideRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bf00);
    /* 0044bf00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf01: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bf03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bf07: mov eax, 0x6b92e4 */ r_eax = 0x6b92e4u;
    /* 0044bf0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bf0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bf0f: ret  */ FN_RET(0x0044bf00); r_esp += 4; return;
}

void f_0044bf20(void) /* LetItRideRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bf20);
    /* 0044bf20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bf23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bf27: mov eax, 0x7172f8 */ r_eax = 0x7172f8u;
    /* 0044bf2c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bf2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bf2f: ret  */ FN_RET(0x0044bf20); r_esp += 4; return;
}

void f_0044bf30(void) /* LetItRideRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bf30);
    /* 0044bf30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf31: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bf33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bf37: mov eax, 0x717300 */ r_eax = 0x717300u;
    /* 0044bf3c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bf3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bf3f: ret  */ FN_RET(0x0044bf30); r_esp += 4; return;
}

void f_0044bf60(void) /* LetItRideRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bf60);
    /* 0044bf60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf61: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bf63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bf67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bf6b: jne 0x44bf71 */ if (!fZ) goto L_0044bf71;
L_0044bf6d:; BB(0x0044bf6d);
    /* 0044bf6d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044bf6f: jmp 0x44bfb8 */ goto L_0044bfb8;
L_0044bf71:; BB(0x0044bf71);
    /* 0044bf71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bf74: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 0044bf7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044bf7d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 0044bf84: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044bf87: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 0044bf8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bf91: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 0044bf98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044bf9b: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 0044bfa2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044bfa5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0044bfac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bfaf: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 0044bfb6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044bfb8:; BB(0x0044bfb8);
    /* 0044bfb8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bfba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bfbb: ret 8 */ FN_RET(0x0044bf60); r_esp += 12; return;
}

void f_0044bfc0(void) /* LetItRideRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bfc0);
    /* 0044bfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bfc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bfc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bfc7: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0044bfcc: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bfce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bfcf: ret  */ FN_RET(0x0044bfc0); r_esp += 4; return;
}

void f_0044bfd0(void) /* LetItRideRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bfd0);
    /* 0044bfd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bfd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bfd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bfd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044bfd9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bfdd: jne 0x44bfe3 */ if (!fZ) goto L_0044bfe3;
L_0044bfdf:; BB(0x0044bfdf);
    /* 0044bfdf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044bfe1: jmp 0x44bff8 */ goto L_0044bff8;
L_0044bfe3:; BB(0x0044bfe3);
    /* 0044bfe3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bfe6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044bfe9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bfec: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0044bfef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bff2: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 0044bff6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044bff8:; BB(0x0044bff8);
    /* 0044bff8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bffb: ret 4 */ FN_RET(0x0044bfd0); r_esp += 8; return;
}

void f_0044c000(void) /* LetItRideRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c000);
    /* 0044c000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c001: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c003: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c006: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044c009: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c00b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c011: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x44c016u); f_005de600();
    /* 0044c016: mov ecx, eax */ r_ecx = r_eax;
    /* 0044c018: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x44c01du); f_0063aae0();
    /* 0044c01d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044c020: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044c023: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044c026: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c02a: je 0x44c032 */ if (fZ) goto L_0044c032;
L_0044c02c:; BB(0x0044c02c);
    /* 0044c02c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c030: jne 0x44c036 */ if (!fZ) goto L_0044c036;
L_0044c032:; BB(0x0044c032);
    /* 0044c032: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044c034: jmp 0x44c04e */ goto L_0044c04e;
L_0044c036:; BB(0x0044c036);
    /* 0044c036: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c039: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c03c: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0044c03e: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0044c040: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c043: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c046: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0044c049: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 0044c04c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044c04e:; BB(0x0044c04e);
    /* 0044c04e: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c050: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c051: ret 4 */ FN_RET(0x0044c000); r_esp += 8; return;
}

void f_0044c060(void) /* LetItRideRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c060);
    /* 0044c060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c061: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c063: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c066: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044c069: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c06d: jne 0x44c073 */ if (!fZ) goto L_0044c073;
L_0044c06f:; BB(0x0044c06f);
    /* 0044c06f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044c071: jmp 0x44c0a3 */ goto L_0044c0a3;
L_0044c073:; BB(0x0044c073);
    /* 0044c073: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044c076: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044c079: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c07c: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0044c083: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c086: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0044c08d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c090: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0044c097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c09a: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0044c0a1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044c0a3:; BB(0x0044c0a3);
    /* 0044c0a3: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c0a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c0a6: ret 4 */ FN_RET(0x0044c060); r_esp += 8; return;
}

void f_0044c0c0(void) /* LetItRideRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c0c0);
    /* 0044c0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c0c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c0c7: mov eax, 8 */ r_eax = 0x8u;
    /* 0044c0cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c0ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c0cf: ret  */ FN_RET(0x0044c0c0); r_esp += 4; return;
}

void f_0044c0d0(void) /* LetItRideRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c0d0);
    /* 0044c0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c0d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c0d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044c0d9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c0db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044c0de: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x44c0e3u); f_0063aae0();
    /* 0044c0e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044c0e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c0e9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044c0ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c0ef: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c0f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044c0f5: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c0f7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044c0fa: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0044c0fc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044c0ff: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044c102: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c105: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c108: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044c10b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0044c10e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044c111: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044c113: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c116: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c119: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044c11c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0044c11e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044c121: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044c124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c127: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044c12a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044c12d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0044c130: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0044c133: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044c135: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c138: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c13b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0044c13e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0044c140: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0044c143: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044c146: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c149: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c14c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0044c14f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0044c152: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c154: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0044c15a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044c15c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c162: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0044c168: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44c16au); call_ind(t); }
    /* 0044c16a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044c16d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c16f: je 0x44c1ef */ if (fZ) goto L_0044c1ef;
L_0044c171:; BB(0x0044c171);
    /* 0044c171: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044c177: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x44c17cu); f_005f3bf0();
    /* 0044c17c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c17f: jne 0x44c1ef */ if (!fZ) goto L_0044c1ef;
L_0044c181:; BB(0x0044c181);
    /* 0044c181: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0044c184: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c185: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0044c188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c189: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044c18c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c18d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c193: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x44c198u); f_005e0c40();
    /* 0044c198: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044c19b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c19e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044c1a1: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c1a3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044c1a6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0044c1a8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044c1ab: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044c1ae: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c1b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044c1b4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0044c1b7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044c1ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044c1bc: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c1bf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0044c1c2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0044c1c4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044c1c7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044c1ca: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c1cd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0044c1d0: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0044c1d3: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0044c1d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044c1d8: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c1db: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0044c1de: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0044c1e0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0044c1e3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044c1e6: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c1e9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0044c1ec: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0044c1ef:; BB(0x0044c1ef);
    /* 0044c1ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c1f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c1f2: ret 0x10 */ FN_RET(0x0044c0d0); r_esp += 20; return;
}

void f_0044c200(void) /* LetItRideRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c200);
    /* 0044c200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c201: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c203: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c209: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044c20e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c210: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044c213: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0044c219: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c21b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044c21e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x44c223u); f_0063aae0();
    /* 0044c223: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044c226: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c228: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c22a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44c22fu); f_0064c8a0();
    /* 0044c22f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c232: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0044c235: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0044c238: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0044c23b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0044c23e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0044c241: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0044c244: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c246: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c248: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44c24du); f_0064c8a0();
    /* 0044c24d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c250: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0044c253: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0044c256: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044c259: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0044c25c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0044c25f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044c262: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044c265: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c266: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044c269: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c26a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c270: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x44c275u); f_005e0690();
    /* 0044c275: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044c27b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x44c280u); f_005f3bf0();
    /* 0044c280: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c283: jne 0x44c29c */ if (!fZ) goto L_0044c29c;
L_0044c285:; BB(0x0044c285);
    /* 0044c285: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0044c288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c289: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0044c28c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c28d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044c290: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c291: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c297: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x44c29cu); f_005e0c40();
L_0044c29c:; BB(0x0044c29c);
    /* 0044c29c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c29e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2a2: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0044c2a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2a6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044c2a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2aa: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044c2ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2ae: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 0044c2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2b2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044c2b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2b6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044c2b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2ba: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 0044c2bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2be: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044c2c1: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0044c2c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2c5: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0044c2c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2c9: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0044c2cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2cd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044c2d0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c2d3: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44c2d8u); f_0064c5c0();
    /* 0044c2d8: mov ecx, eax */ r_ecx = r_eax;
    /* 0044c2da: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44c2dfu); f_0064c5c0();
    /* 0044c2df: mov ecx, eax */ r_ecx = r_eax;
    /* 0044c2e1: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44c2e6u); f_0064c5c0();
    /* 0044c2e6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0044c2e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2ea: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044c2ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2ed: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x44c2f2u); f_0064c8d0();
    /* 0044c2f2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c2f5: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0044c2f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2f9: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c2fe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44c303u); f_00630f40();
    /* 0044c303: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c307: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c309: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044c30c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x44c311u); f_00654390();
    /* 0044c311: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c313: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c315: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c317: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0044c31a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c31b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044c31e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c31f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044c322: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c323: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 0044c326: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c327: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044c32a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c32d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44c332u); f_0064c5c0();
    /* 0044c332: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044c335: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c336: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044c338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c339: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x44c33eu); f_0064c8d0();
    /* 0044c33e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c341: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0044c344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c345: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c34a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44c34fu); f_00630f40();
    /* 0044c34f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c353: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c355: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044c358: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x44c35du); f_00654390();
    /* 0044c35d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c35f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c361: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c363: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0044c366: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c367: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044c36a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c36b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044c36e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c36f: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0044c375: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c376: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044c379: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c37c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44c381u); f_0064c5c0();
    /* 0044c381: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0044c384: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c385: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044c387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c388: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x44c38du); f_0064c8d0();
    /* 0044c38d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c390: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0044c393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c394: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c399: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44c39eu); f_00630f40();
    /* 0044c39e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c3a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044c3a7: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x44c3acu); f_00654390();
    /* 0044c3ac: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044c3ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c3b1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c3b3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44c3b8u); f_00686d72();
    /* 0044c3b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c3ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c3bb: ret 8 */ FN_RET(0x0044c200); r_esp += 12; return;
}

void f_0044c3c0(void) /* LetItRideRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c3c0);
    /* 0044c3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c3c7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044c3d1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x44c3d6u); f_005fb5a0();
    /* 0044c3d6: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3db: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044c3e0: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x44c3e5u); f_005fb5a0();
    /* 0044c3e5: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3ea: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044c3ef: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x44c3f4u); f_005fb5a0();
    /* 0044c3f4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044c3f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c3f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c3f9: ret 4 */ FN_RET(0x0044c3c0); r_esp += 8; return;
}

void f_0044c400(void) /* LetItRideRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c400);
    /* 0044c400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c401: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c407: cmp dword ptr [ebp + 8], 0x310ab0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x310ab0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c40e: jne 0x44c421 */ if (!fZ) goto L_0044c421;
L_0044c410:; BB(0x0044c410);
    /* 0044c410: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c412: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0044c418: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x44c41du); f_00653bd0();
    /* 0044c41d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044c41f: jmp 0x44c423 */ goto L_0044c423;
L_0044c421:; BB(0x0044c421);
    /* 0044c421: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044c423:; BB(0x0044c423);
    /* 0044c423: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c426: ret 4 */ FN_RET(0x0044c400); r_esp += 8; return;
}

void f_0044c430(void) /* LetItRideRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c430);
    /* 0044c430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c431: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c437: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044c439: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c43b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c43c: ret 4 */ FN_RET(0x0044c430); r_esp += 8; return;
}

void f_0044c440(void) /* LetItRideRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c440);
    /* 0044c440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c441: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c447: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044c449: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c44b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c44c: ret 4 */ FN_RET(0x0044c440); r_esp += 8; return;
}

void f_0044c450(void) /* LetItRideRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c450);
    /* 0044c450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c451: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c457: mov eax, 0x717304 */ r_eax = 0x717304u;
    /* 0044c45c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c45e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c45f: ret  */ FN_RET(0x0044c450); r_esp += 4; return;
}

void f_0044c460(void) /* LetItRideRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c460);
    /* 0044c460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c461: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c465: push 0x69eee4 */ { u32 v = 0x69eee4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c46a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044c470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c471: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c472: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044c477: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c479: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c47a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044c47d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044c483: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044c486: mov eax, dword ptr [0x790720] */ r_eax = R32((u32)(0x790720u));
    /* 0044c48b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0044c48e: jne 0x44c4f9 */ if (!fZ) goto L_0044c4f9;
L_0044c490:; BB(0x0044c490);
    /* 0044c490: mov ecx, dword ptr [0x790720] */ r_ecx = R32((u32)(0x790720u));
    /* 0044c496: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c499: mov dword ptr [0x790720], ecx */ W32((u32)(0x790720u), r_ecx);
    /* 0044c49f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044c4a6: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0044c4ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044c4ae: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c4b4: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0044c4ba: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44c4bcu); call_ind(t); }
    /* 0044c4bc: mov dword ptr [0x717328], eax */ W32((u32)(0x717328u), r_eax);
    /* 0044c4c1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0044c4c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044c4c8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c4ce: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 0044c4d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44c4d6u); call_ind(t); }
    /* 0044c4d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c4d7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c4dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044c4df: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c4e5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0044c4eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44c4edu); call_ind(t); }
    /* 0044c4ed: mov dword ptr [0x71732c], eax */ W32((u32)(0x71732cu), r_eax);
    /* 0044c4f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0044c4f9:; BB(0x0044c4f9);
    /* 0044c4f9: cmp dword ptr [ebp + 8], 0x310ab1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x310ab1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c500: jne 0x44c50b */ if (!fZ) goto L_0044c50b;
L_0044c502:; BB(0x0044c502);
    /* 0044c502: mov eax, 0x717324 */ r_eax = 0x717324u;
    /* 0044c507: jmp 0x44c50d */ goto L_0044c50d;
L_0044c50b:; BB(0x0044c50b);
    /* 0044c50b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0044c50d:; BB(0x0044c50d);
    /* 0044c50d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044c510: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044c517: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c518: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c51a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c51b: ret 4 */ FN_RET(0x0044c460); r_esp += 8; return;
}

void f_0044c520(void) /* LetItRideRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c520);
    /* 0044c520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c521: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c527: mov eax, 0x716d70 */ r_eax = 0x716d70u;
    /* 0044c52c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c52e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c52f: ret  */ FN_RET(0x0044c520); r_esp += 4; return;
}

void f_0044c530(void) /* LetItRideRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c530);
    /* 0044c530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c531: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c537: mov eax, 0x717230 */ r_eax = 0x717230u;
    /* 0044c53c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c53e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c53f: ret  */ FN_RET(0x0044c530); r_esp += 4; return;
}

void f_0044c540(void) /* LetItRideRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c540);
    /* 0044c540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c541: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c546: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c549: cmp dword ptr [ebp + 0xc], 0x310ab0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x310ab0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c550: jne 0x44c616 */ if (!fZ) goto L_0044c616;
L_0044c556:; BB(0x0044c556);
    /* 0044c556: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c55d: jne 0x44c575 */ if (!fZ) goto L_0044c575;
L_0044c55f:; BB(0x0044c55f);
    /* 0044c55f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c561: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c563: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0044c569: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x44c56eu); f_005dbd00();
    /* 0044c56e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044c570: jmp 0x44c63f */ goto L_0044c63f;
L_0044c575:; BB(0x0044c575);
    /* 0044c575: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c57b: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x44c580u); f_005e2f90();
    /* 0044c580: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044c583: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044c586: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c589: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c58f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044c592: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0044c596: ja 0x44c5e6 */ if ((!fC&&!fZ)) goto L_0044c5e6;
L_0044c598:; BB(0x0044c598);
    /* 0044c598: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044c59b: jmp dword ptr [edx*4 + 0x44c648] */ { u32 t = R32((u32)(r_edx*4+0x44c648u)); switch (t) { case 0x44c5a2u: goto L_0044c5a2; case 0x44c5b3u: goto L_0044c5b3; case 0x44c5c5u: goto L_0044c5c5; case 0x44c5d7u: goto L_0044c5d7; default: UNSUP(0x0044c59b, "jump table entry is not a known target"); } }
L_0044c5a2:; BB(0x0044c5a2);
    /* 0044c5a2: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0044c5a7: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 0044c5b1: jmp 0x44c5e6 */ goto L_0044c5e6;
L_0044c5b3:; BB(0x0044c5b3);
    /* 0044c5b3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c5b9: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 0044c5c3: jmp 0x44c5e6 */ goto L_0044c5e6;
L_0044c5c5:; BB(0x0044c5c5);
    /* 0044c5c5: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0044c5cb: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 0044c5d5: jmp 0x44c5e6 */ goto L_0044c5e6;
L_0044c5d7:; BB(0x0044c5d7);
    /* 0044c5d7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0044c5dc: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_0044c5e6:; BB(0x0044c5e6);
    /* 0044c5e6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c5e8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c5ea: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c5f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044c5f2: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c5f8: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0044c5fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44c600u); call_ind(t); }
    /* 0044c600: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044c603: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c605: jne 0x44c612 */ if (!fZ) goto L_0044c612;
L_0044c607:; BB(0x0044c607);
    /* 0044c607: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c60d: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x44c612u); f_005e3130();
L_0044c612:; BB(0x0044c612);
    /* 0044c612: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044c614: jmp 0x44c63f */ goto L_0044c63f;
L_0044c616:; BB(0x0044c616);
    /* 0044c616: cmp dword ptr [ebp + 8], 0x310ab0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x310ab0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c61d: jne 0x44c63d */ if (!fZ) goto L_0044c63d;
L_0044c61f:; BB(0x0044c61f);
    /* 0044c61f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c621: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c623: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0044c629: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044c62b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044c631: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 0044c637: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44c639u); call_ind(t); }
    /* 0044c639: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044c63b: jmp 0x44c63f */ goto L_0044c63f;
L_0044c63d:; BB(0x0044c63d);
    /* 0044c63d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044c63f:; BB(0x0044c63f);
    /* 0044c63f: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c642: ret 8 */ FN_RET(0x0044c540); r_esp += 12; return;
}

