#include "protos.h"

void f_0053fc50(void) /* ThreeCardPokerRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fc50);
    /* 0053fc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fc57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fc5a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x53fc5fu); f_005e9e20();
    /* 0053fc5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fc62: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 0053fc68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fc6b: mov dword ptr [ecx], 0x6c620c */ W32((u32)(r_ecx), 0x6c620cu);
    /* 0053fc71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fc74: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fc76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fc77: ret  */ FN_RET(0x0053fc50); r_esp += 4; return;
}

void f_0053fc80(void) /* ThreeCardPokerRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fc80);
    /* 0053fc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fc83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc85: push 0x6a4dcb */ { u32 v = 0x6a4dcbu; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053fc90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc91: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fc94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053fc99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053fc9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053fc9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053fca5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053fca8: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fcad: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53fcb2u); f_00686d82();
    /* 0053fcb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fcb5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053fcb8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053fcbf: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fcc3: je 0x53fcd2 */ if (fZ) goto L_0053fcd2;
L_0053fcc5:; BB(0x0053fcc5);
    /* 0053fcc5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053fcc8: call 0x53e9b0 */ r_esp -= 4; W32(r_esp, 0x53fccdu); f_0053e9b0();
    /* 0053fccd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053fcd0: jmp 0x53fcd9 */ goto L_0053fcd9;
L_0053fcd2:; BB(0x0053fcd2);
    /* 0053fcd2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0053fcd9:; BB(0x0053fcd9);
    /* 0053fcd9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053fcdc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053fcdf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053fce6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053fce9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053fcec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053fcf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053fcf4: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fcf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fcf7: ret  */ FN_RET(0x0053fc80); r_esp += 4; return;
}

void f_0053fd00(void) /* ThreeCardPokerRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fd00);
    /* 0053fd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fd07: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fd0b: jne 0x53fd11 */ if (!fZ) goto L_0053fd11;
L_0053fd0d:; BB(0x0053fd0d);
    /* 0053fd0d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fd0f: jmp 0x53fd2d */ goto L_0053fd2d;
L_0053fd11:; BB(0x0053fd11);
    /* 0053fd11: push 0x6c5b68 */ { u32 v = 0x6c5b68u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd16: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53fd1bu); f_00630f40();
    /* 0053fd1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fd1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fd22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd23: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x53fd28u); f_00686d8e();
    /* 0053fd28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fd2b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0053fd2d:; BB(0x0053fd2d);
    /* 0053fd2d: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fd2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fd30: ret 4 */ FN_RET(0x0053fd00); r_esp += 8; return;
}

void f_0053fd60(void) /* ThreeCardPokerRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fd60);
    /* 0053fd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd61: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fd63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fd67: mov eax, 0x310e98 */ r_eax = 0x310e98u;
    /* 0053fd6c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fd6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fd6f: ret  */ FN_RET(0x0053fd60); r_esp += 4; return;
}

void f_0053fd70(void) /* ThreeCardPokerRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fd70);
    /* 0053fd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd71: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fd73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fd77: mov eax, 0x6c6364 */ r_eax = 0x6c6364u;
    /* 0053fd7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fd7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fd7f: ret  */ FN_RET(0x0053fd70); r_esp += 4; return;
}

void f_0053fd90(void) /* ThreeCardPokerRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fd90);
    /* 0053fd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd91: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fd93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fd97: mov eax, 0x73a90c */ r_eax = 0x73a90cu;
    /* 0053fd9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fd9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fd9f: ret  */ FN_RET(0x0053fd90); r_esp += 4; return;
}

void f_0053fda0(void) /* ThreeCardPokerRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fda0);
    /* 0053fda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fda7: mov eax, 0x73a918 */ r_eax = 0x73a918u;
    /* 0053fdac: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fdae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fdaf: ret  */ FN_RET(0x0053fda0); r_esp += 4; return;
}

void f_0053fdd0(void) /* ThreeCardPokerRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fdd0);
    /* 0053fdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fdd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fdd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fdd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fdd7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fddb: jne 0x53fde1 */ if (!fZ) goto L_0053fde1;
L_0053fddd:; BB(0x0053fddd);
    /* 0053fddd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fddf: jmp 0x53fe28 */ goto L_0053fe28;
L_0053fde1:; BB(0x0053fde1);
    /* 0053fde1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fde4: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 0053fdea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053fded: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 0053fdf4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053fdf7: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 0053fdfe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fe01: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 0053fe08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053fe0b: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 0053fe12: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053fe15: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0053fe1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fe1f: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 0053fe26: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0053fe28:; BB(0x0053fe28);
    /* 0053fe28: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fe2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fe2b: ret 8 */ FN_RET(0x0053fdd0); r_esp += 12; return;
}

void f_0053fe30(void) /* ThreeCardPokerRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fe30);
    /* 0053fe30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe31: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fe33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fe37: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0053fe3c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fe3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fe3f: ret  */ FN_RET(0x0053fe30); r_esp += 4; return;
}

void f_0053fe40(void) /* ThreeCardPokerRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fe40);
    /* 0053fe40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe41: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fe43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fe46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053fe49: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe4d: jne 0x53fe53 */ if (!fZ) goto L_0053fe53;
L_0053fe4f:; BB(0x0053fe4f);
    /* 0053fe4f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fe51: jmp 0x53fe68 */ goto L_0053fe68;
L_0053fe53:; BB(0x0053fe53);
    /* 0053fe53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fe56: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053fe59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fe5c: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0053fe5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fe62: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 0053fe66: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0053fe68:; BB(0x0053fe68);
    /* 0053fe68: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fe6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fe6b: ret 4 */ FN_RET(0x0053fe40); r_esp += 8; return;
}

void f_0053fe70(void) /* ThreeCardPokerRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fe70);
    /* 0053fe70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe71: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fe73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fe76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053fe79: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe7b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053fe81: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x53fe86u); f_005de600();
    /* 0053fe86: mov ecx, eax */ r_ecx = r_eax;
    /* 0053fe88: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x53fe8du); f_0063aae0();
    /* 0053fe8d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053fe90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fe93: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053fe96: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe9a: je 0x53fea2 */ if (fZ) goto L_0053fea2;
L_0053fe9c:; BB(0x0053fe9c);
    /* 0053fe9c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fea0: jne 0x53fea6 */ if (!fZ) goto L_0053fea6;
L_0053fea2:; BB(0x0053fea2);
    /* 0053fea2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fea4: jmp 0x53febe */ goto L_0053febe;
L_0053fea6:; BB(0x0053fea6);
    /* 0053fea6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fea9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053feac: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0053feae: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0053feb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053feb3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053feb6: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0053feb9: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 0053febc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0053febe:; BB(0x0053febe);
    /* 0053febe: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fec1: ret 4 */ FN_RET(0x0053fe70); r_esp += 8; return;
}

void f_0053fed0(void) /* ThreeCardPokerRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fed0);
    /* 0053fed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fed1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fed3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fed6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053fed9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fedd: jne 0x53fee3 */ if (!fZ) goto L_0053fee3;
L_0053fedf:; BB(0x0053fedf);
    /* 0053fedf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fee1: jmp 0x53ff13 */ goto L_0053ff13;
L_0053fee3:; BB(0x0053fee3);
    /* 0053fee3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fee6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053fee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053feec: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0053fef3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fef6: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0053fefd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ff00: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0053ff07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ff0a: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0053ff11: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0053ff13:; BB(0x0053ff13);
    /* 0053ff13: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ff15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ff16: ret 4 */ FN_RET(0x0053fed0); r_esp += 8; return;
}

void f_0053ff30(void) /* ThreeCardPokerRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ff30);
    /* 0053ff30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff31: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ff33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053ff37: mov eax, 0xe */ r_eax = 0xeu;
    /* 0053ff3c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ff3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ff3f: ret  */ FN_RET(0x0053ff30); r_esp += 4; return;
}

void f_0053ff40(void) /* ThreeCardPokerRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ff40);
    /* 0053ff40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff41: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ff43: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ff46: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053ff49: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ff4e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x53ff53u); f_0063aae0();
    /* 0053ff53: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053ff56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ff59: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053ff5c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ff5f: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ff62: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053ff65: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ff67: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0053ff6a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0053ff6c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053ff6f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053ff72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ff75: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ff78: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053ff7b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0053ff7e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0053ff81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053ff83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ff86: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053ff89: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0053ff8c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0053ff8e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0053ff91: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053ff94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ff97: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053ff9a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0053ff9d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0053ffa0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0053ffa3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053ffa5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ffa8: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ffab: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0053ffae: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0053ffb0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0053ffb3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053ffb6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ffb9: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053ffbc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0053ffbf: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0053ffc2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ffc4: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0053ffca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053ffcc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053ffd2: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0053ffd8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53ffdau); call_ind(t); }
    /* 0053ffda: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053ffdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ffdf: je 0x54005f */ if (fZ) goto L_0054005f;
L_0053ffe1:; BB(0x0053ffe1);
    /* 0053ffe1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053ffe7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x53ffecu); f_005f3bf0();
    /* 0053ffec: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ffef: jne 0x54005f */ if (!fZ) goto L_0054005f;
L_0053fff1:; BB(0x0053fff1);
    /* 0053fff1: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0053fff4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fff5: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0053fff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fff9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fffd: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00540003: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x540008u); f_005e0c40();
    /* 00540008: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054000b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054000e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00540011: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00540013: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00540016: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00540018: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054001b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054001e: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00540021: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00540024: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00540027: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0054002a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054002c: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054002f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00540032: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00540034: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00540037: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054003a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054003d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00540040: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00540043: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00540046: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540048: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054004b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0054004e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00540050: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00540053: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00540056: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00540059: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0054005c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0054005f:; BB(0x0054005f);
    /* 0054005f: mov esp, ebp */ r_esp = r_ebp;
    /* 00540061: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540062: ret 0x10 */ FN_RET(0x0053ff40); r_esp += 20; return;
}

void f_00540070(void) /* ThreeCardPokerRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540070);
    /* 00540070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540071: mov ebp, esp */ r_ebp = r_esp;
    /* 00540073: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540079: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0054007e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540080: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00540083: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00540089: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0054008b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054008e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x540093u); f_0063aae0();
    /* 00540093: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00540096: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540098: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054009a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x54009fu); f_0064c8a0();
    /* 0054009f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005400a2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005400a5: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005400a8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005400ab: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005400ae: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005400b1: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005400b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005400b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005400b8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5400bdu); f_0064c8a0();
    /* 005400bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005400c0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005400c3: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005400c6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005400c9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005400cc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005400cf: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005400d2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005400d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005400d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005400d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005400da: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005400e0: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x5400e5u); f_005e0690();
    /* 005400e5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005400eb: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5400f0u); f_005f3bf0();
    /* 005400f0: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400f3: jne 0x54010c */ if (!fZ) goto L_0054010c;
L_005400f5:; BB(0x005400f5);
    /* 005400f5: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005400f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005400f9: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 005400fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005400fd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00540100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540101: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00540107: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x54010cu); f_005e0c40();
L_0054010c:; BB(0x0054010c);
    /* 0054010c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054010e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540110: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540112: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00540115: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540116: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00540119: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054011a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054011d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054011e: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00540121: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540122: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00540125: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540126: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00540129: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054012a: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 0054012d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054012e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00540131: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00540134: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540135: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00540138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540139: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0054013c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054013d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00540140: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00540143: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x540148u); f_0064c5c0();
    /* 00540148: mov ecx, eax */ r_ecx = r_eax;
    /* 0054014a: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x54014fu); f_0064c5c0();
    /* 0054014f: mov ecx, eax */ r_ecx = r_eax;
    /* 00540151: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x540156u); f_0064c5c0();
    /* 00540156: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00540159: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054015a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0054015c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054015d: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x540162u); f_0064c8d0();
    /* 00540162: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540165: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00540168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540169: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 0054016e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x540173u); f_00630f40();
    /* 00540173: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540177: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540179: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054017c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x540181u); f_00654390();
    /* 00540181: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540185: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540187: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0054018a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054018b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0054018e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054018f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00540192: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540193: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 00540196: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540197: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054019a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054019d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5401a2u); f_0064c5c0();
    /* 005401a2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005401a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005401a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005401a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005401a9: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5401aeu); f_0064c8d0();
    /* 005401ae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005401b1: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005401b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005401b5: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 005401ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5401bfu); f_00630f40();
    /* 005401bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005401c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005401c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005401c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005401c8: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5401cdu); f_00654390();
    /* 005401cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005401cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005401d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005401d3: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005401d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005401d7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005401da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005401db: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005401de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005401df: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 005401e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005401e6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005401e9: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005401ec: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5401f1u); f_0064c5c0();
    /* 005401f1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005401f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005401f5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005401f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005401f8: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5401fdu); f_0064c8d0();
    /* 005401fd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540200: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00540203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540204: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 00540209: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54020eu); f_00630f40();
    /* 0054020e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540212: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00540214: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540217: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x54021cu); f_00654390();
    /* 0054021c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054021e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540221: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00540223: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x540228u); f_00686d72();
    /* 00540228: mov esp, ebp */ r_esp = r_ebp;
    /* 0054022a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054022b: ret 8 */ FN_RET(0x00540070); r_esp += 12; return;
}

void f_00540230(void) /* ThreeCardPokerRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540230);
    /* 00540230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540231: mov ebp, esp */ r_ebp = r_esp;
    /* 00540233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540237: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054023c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054023e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540241: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x540246u); f_005fb5a0();
    /* 00540246: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054024b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054024d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540250: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x540255u); f_005fb5a0();
    /* 00540255: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054025a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054025c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054025f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x540264u); f_005fb5a0();
    /* 00540264: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00540266: mov esp, ebp */ r_esp = r_ebp;
    /* 00540268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540269: ret 4 */ FN_RET(0x00540230); r_esp += 8; return;
}

void f_00540270(void) /* ThreeCardPokerRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540270);
    /* 00540270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540271: mov ebp, esp */ r_ebp = r_esp;
    /* 00540273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540277: cmp dword ptr [ebp + 8], 0x310e98 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x310e98u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054027e: jne 0x540291 */ if (!fZ) goto L_00540291;
L_00540280:; BB(0x00540280);
    /* 00540280: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00540282: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00540288: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x54028du); f_00653bd0();
    /* 0054028d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054028f: jmp 0x540293 */ goto L_00540293;
L_00540291:; BB(0x00540291);
    /* 00540291: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00540293:; BB(0x00540293);
    /* 00540293: mov esp, ebp */ r_esp = r_ebp;
    /* 00540295: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540296: ret 4 */ FN_RET(0x00540270); r_esp += 8; return;
}

void f_005402a0(void) /* ThreeCardPokerRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005402a0);
    /* 005402a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005402a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005402a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005402a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005402a7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005402a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005402ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005402ac: ret 4 */ FN_RET(0x005402a0); r_esp += 8; return;
}

void f_005402b0(void) /* ThreeCardPokerRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005402b0);
    /* 005402b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005402b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005402b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005402b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005402b7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005402b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005402bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005402bc: ret 4 */ FN_RET(0x005402b0); r_esp += 8; return;
}

void f_005402c0(void) /* ThreeCardPokerRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005402c0);
    /* 005402c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005402c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005402c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005402c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005402c7: mov eax, 0x73a91c */ r_eax = 0x73a91cu;
    /* 005402cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005402ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005402cf: ret  */ FN_RET(0x005402c0); r_esp += 4; return;
}

void f_005402d0(void) /* ThreeCardPokerRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005402d0);
    /* 005402d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005402d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005402d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005402d5: push 0x6a4df4 */ { u32 v = 0x6a4df4u; r_esp -= 4; W32(r_esp, v); }
    /* 005402da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005402e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005402e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005402e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005402e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005402e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005402ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005402ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005402f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005402f6: mov eax, dword ptr [0x7933fc] */ r_eax = R32((u32)(0x7933fcu));
    /* 005402fb: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005402fe: jne 0x540369 */ if (!fZ) goto L_00540369;
L_00540300:; BB(0x00540300);
    /* 00540300: mov ecx, dword ptr [0x7933fc] */ r_ecx = R32((u32)(0x7933fcu));
    /* 00540306: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00540309: mov dword ptr [0x7933fc], ecx */ W32((u32)(0x7933fcu), r_ecx);
    /* 0054030f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540316: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0054031c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054031e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00540324: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0054032a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x54032cu); call_ind(t); }
    /* 0054032c: mov dword ptr [0x73a940], eax */ W32((u32)(0x73a940u), r_eax);
    /* 00540331: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00540336: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00540338: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054033e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00540344: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x540346u); call_ind(t); }
    /* 00540346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540347: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054034d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054034f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00540355: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0054035b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54035du); call_ind(t); }
    /* 0054035d: mov dword ptr [0x73a944], eax */ W32((u32)(0x73a944u), r_eax);
    /* 00540362: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00540369:; BB(0x00540369);
    /* 00540369: cmp dword ptr [ebp + 8], 0x310e99 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x310e99u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540370: jne 0x54037b */ if (!fZ) goto L_0054037b;
L_00540372:; BB(0x00540372);
    /* 00540372: mov eax, 0x73a93c */ r_eax = 0x73a93cu;
    /* 00540377: jmp 0x54037d */ goto L_0054037d;
L_0054037b:; BB(0x0054037b);
    /* 0054037b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0054037d:; BB(0x0054037d);
    /* 0054037d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540380: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00540387: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00540388: mov esp, ebp */ r_esp = r_ebp;
    /* 0054038a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054038b: ret 4 */ FN_RET(0x005402d0); r_esp += 8; return;
}

void f_00540390(void) /* ThreeCardPokerRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540390);
    /* 00540390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540391: mov ebp, esp */ r_ebp = r_esp;
    /* 00540393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540397: mov eax, 0x73a380 */ r_eax = 0x73a380u;
    /* 0054039c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054039e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054039f: ret  */ FN_RET(0x00540390); r_esp += 4; return;
}

void f_005403a0(void) /* ThreeCardPokerRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005403a0);
    /* 005403a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005403a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005403a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005403a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005403a7: mov eax, 0x73a840 */ r_eax = 0x73a840u;
    /* 005403ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005403ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005403af: ret  */ FN_RET(0x005403a0); r_esp += 4; return;
}

void f_005403b0(void) /* ThreeCardPokerRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005403b0);
    /* 005403b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005403b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005403b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005403b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005403b9: cmp dword ptr [ebp + 0xc], 0x310e98 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x310e98u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005403c0: jne 0x540486 */ if (!fZ) goto L_00540486;
L_005403c6:; BB(0x005403c6);
    /* 005403c6: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005403cd: jne 0x5403e5 */ if (!fZ) goto L_005403e5;
L_005403cf:; BB(0x005403cf);
    /* 005403cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005403d1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005403d3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005403d9: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x5403deu); f_005dbd00();
    /* 005403de: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005403e0: jmp 0x5404af */ goto L_005404af;
L_005403e5:; BB(0x005403e5);
    /* 005403e5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005403eb: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5403f0u); f_005e2f90();
    /* 005403f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005403f3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005403f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005403f9: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005403ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00540402: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00540406: ja 0x540456 */ if ((!fC&&!fZ)) goto L_00540456;
L_00540408:; BB(0x00540408);
    /* 00540408: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054040b: jmp dword ptr [edx*4 + 0x5404b8] */ { u32 t = R32((u32)(r_edx*4+0x5404b8u)); switch (t) { case 0x540412u: goto L_00540412; case 0x540423u: goto L_00540423; case 0x540435u: goto L_00540435; case 0x540447u: goto L_00540447; default: UNSUP(0x0054040b, "jump table entry is not a known target"); } }
L_00540412:; BB(0x00540412);
    /* 00540412: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00540417: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 00540421: jmp 0x540456 */ goto L_00540456;
L_00540423:; BB(0x00540423);
    /* 00540423: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00540429: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 00540433: jmp 0x540456 */ goto L_00540456;
L_00540435:; BB(0x00540435);
    /* 00540435: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0054043b: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 00540445: jmp 0x540456 */ goto L_00540456;
L_00540447:; BB(0x00540447);
    /* 00540447: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0054044c: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_00540456:; BB(0x00540456);
    /* 00540456: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540458: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0054045a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00540460: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540462: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00540468: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0054046e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x540470u); call_ind(t); }
    /* 00540470: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00540473: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540475: jne 0x540482 */ if (!fZ) goto L_00540482;
L_00540477:; BB(0x00540477);
    /* 00540477: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054047d: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x540482u); f_005e3130();
L_00540482:; BB(0x00540482);
    /* 00540482: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00540484: jmp 0x5404af */ goto L_005404af;
L_00540486:; BB(0x00540486);
    /* 00540486: cmp dword ptr [ebp + 8], 0x310e98 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x310e98u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054048d: jne 0x5404ad */ if (!fZ) goto L_005404ad;
L_0054048f:; BB(0x0054048f);
    /* 0054048f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540491: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00540493: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00540499: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054049b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005404a1: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 005404a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5404a9u); call_ind(t); }
    /* 005404a9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005404ab: jmp 0x5404af */ goto L_005404af;
L_005404ad:; BB(0x005404ad);
    /* 005404ad: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005404af:; BB(0x005404af);
    /* 005404af: mov esp, ebp */ r_esp = r_ebp;
    /* 005404b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005404b2: ret 8 */ FN_RET(0x005403b0); r_esp += 12; return;
}

