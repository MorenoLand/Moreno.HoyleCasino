#include "protos.h"

void f_004068d0(void) /* BaccaratRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004068d0);
    /* 004068d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004068d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004068d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004068d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004068d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004068da: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4068dfu); f_005e9e20();
    /* 004068df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004068e2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 004068e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004068eb: mov dword ptr [ecx], 0x6b3214 */ W32((u32)(r_ecx), 0x6b3214u);
    /* 004068f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004068f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004068f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004068f7: ret  */ FN_RET(0x004068d0); r_esp += 4; return;
}

void f_00406900(void) /* BaccaratRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406900);
    /* 00406900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406901: mov ebp, esp */ r_ebp = r_esp;
    /* 00406903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406905: push 0x69d88b */ { u32 v = 0x69d88bu; r_esp -= 4; W32(r_esp, v); }
    /* 0040690a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00406910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406911: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406914: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00406919: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040691b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040691c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040691f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00406925: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00406928: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0040692d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x406932u); f_00686d82();
    /* 00406932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406935: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00406938: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040693f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406943: je 0x406952 */ if (fZ) goto L_00406952;
L_00406945:; BB(0x00406945);
    /* 00406945: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406948: call 0x405200 */ r_esp -= 4; W32(r_esp, 0x40694du); f_00405200();
    /* 0040694d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00406950: jmp 0x406959 */ goto L_00406959;
L_00406952:; BB(0x00406952);
    /* 00406952: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00406959:; BB(0x00406959);
    /* 00406959: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040695c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040695f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00406966: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00406969: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040696c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00406973: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00406974: mov esp, ebp */ r_esp = r_ebp;
    /* 00406976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406977: ret  */ FN_RET(0x00406900); r_esp += 4; return;
}

void f_00406980(void) /* BaccaratRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406980);
    /* 00406980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406981: mov ebp, esp */ r_ebp = r_esp;
    /* 00406983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406987: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040698b: jne 0x406991 */ if (!fZ) goto L_00406991;
L_0040698d:; BB(0x0040698d);
    /* 0040698d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040698f: jmp 0x4069ad */ goto L_004069ad;
L_00406991:; BB(0x00406991);
    /* 00406991: push 0x6b27fc */ { u32 v = 0x6b27fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00406996: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40699bu); f_00630f40();
    /* 0040699b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040699e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040699f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004069a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004069a3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4069a8u); f_00686d8e();
    /* 004069a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004069ab: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004069ad:; BB(0x004069ad);
    /* 004069ad: mov esp, ebp */ r_esp = r_ebp;
    /* 004069af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004069b0: ret 4 */ FN_RET(0x00406980); r_esp += 8; return;
}

void f_004069e0(void) /* BaccaratRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004069e0);
    /* 004069e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004069e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004069e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004069e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004069e7: mov eax, 0x311280 */ r_eax = 0x311280u;
    /* 004069ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004069ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004069ef: ret  */ FN_RET(0x004069e0); r_esp += 4; return;
}

void f_004069f0(void) /* BaccaratRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004069f0);
    /* 004069f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004069f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004069f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004069f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004069f7: mov eax, 0x6b34d4 */ r_eax = 0x6b34d4u;
    /* 004069fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004069fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004069ff: ret  */ FN_RET(0x004069f0); r_esp += 4; return;
}

void f_00406a10(void) /* BaccaratRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406a10);
    /* 00406a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00406a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406a17: mov eax, 0x707180 */ r_eax = 0x707180u;
    /* 00406a1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00406a1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406a1f: ret  */ FN_RET(0x00406a10); r_esp += 4; return;
}

void f_00406a20(void) /* BaccaratRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406a20);
    /* 00406a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00406a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406a27: mov eax, 0x70718c */ r_eax = 0x70718cu;
    /* 00406a2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00406a2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406a2f: ret  */ FN_RET(0x00406a20); r_esp += 4; return;
}

void f_00406a50(void) /* BaccaratRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406a50);
    /* 00406a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00406a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406a57: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406a5b: jne 0x406a61 */ if (!fZ) goto L_00406a61;
L_00406a5d:; BB(0x00406a5d);
    /* 00406a5d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406a5f: jmp 0x406aa8 */ goto L_00406aa8;
L_00406a61:; BB(0x00406a61);
    /* 00406a61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406a64: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 00406a6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406a6d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00406a74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00406a77: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 00406a7e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406a81: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00406a88: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406a8b: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 00406a92: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00406a95: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00406a9c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406a9f: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 00406aa6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00406aa8:; BB(0x00406aa8);
    /* 00406aa8: mov esp, ebp */ r_esp = r_ebp;
    /* 00406aaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406aab: ret 8 */ FN_RET(0x00406a50); r_esp += 12; return;
}

void f_00406ab0(void) /* BaccaratRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406ab0);
    /* 00406ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406ab7: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00406abc: mov esp, ebp */ r_esp = r_ebp;
    /* 00406abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406abf: ret  */ FN_RET(0x00406ab0); r_esp += 4; return;
}

void f_00406ac0(void) /* BaccaratRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406ac0);
    /* 00406ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ac3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406ac6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406ac9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406acd: jne 0x406ad3 */ if (!fZ) goto L_00406ad3;
L_00406acf:; BB(0x00406acf);
    /* 00406acf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406ad1: jmp 0x406ae8 */ goto L_00406ae8;
L_00406ad3:; BB(0x00406ad3);
    /* 00406ad3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406ad6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406ad9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406adc: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 00406adf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406ae2: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 00406ae6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00406ae8:; BB(0x00406ae8);
    /* 00406ae8: mov esp, ebp */ r_esp = r_ebp;
    /* 00406aea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406aeb: ret 4 */ FN_RET(0x00406ac0); r_esp += 8; return;
}

void f_00406af0(void) /* BaccaratRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406af0);
    /* 00406af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406af3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406af6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00406af9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406afb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406b01: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x406b06u); f_005de600();
    /* 00406b06: mov ecx, eax */ r_ecx = r_eax;
    /* 00406b08: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x406b0du); f_0063aae0();
    /* 00406b0d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00406b10: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406b13: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406b16: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406b1a: je 0x406b22 */ if (fZ) goto L_00406b22;
L_00406b1c:; BB(0x00406b1c);
    /* 00406b1c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406b20: jne 0x406b26 */ if (!fZ) goto L_00406b26;
L_00406b22:; BB(0x00406b22);
    /* 00406b22: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406b24: jmp 0x406b3e */ goto L_00406b3e;
L_00406b26:; BB(0x00406b26);
    /* 00406b26: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406b29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406b2c: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00406b2e: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00406b30: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00406b33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406b36: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 00406b39: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 00406b3c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00406b3e:; BB(0x00406b3e);
    /* 00406b3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00406b40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406b41: ret 4 */ FN_RET(0x00406af0); r_esp += 8; return;
}

void f_00406b50(void) /* BaccaratRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406b50);
    /* 00406b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00406b53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406b56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406b59: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406b5d: jne 0x406b63 */ if (!fZ) goto L_00406b63;
L_00406b5f:; BB(0x00406b5f);
    /* 00406b5f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406b61: jmp 0x406b93 */ goto L_00406b93;
L_00406b63:; BB(0x00406b63);
    /* 00406b63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406b66: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406b69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406b6c: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00406b73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406b76: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00406b7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406b80: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00406b87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406b8a: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00406b91: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00406b93:; BB(0x00406b93);
    /* 00406b93: mov esp, ebp */ r_esp = r_ebp;
    /* 00406b95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406b96: ret 4 */ FN_RET(0x00406b50); r_esp += 8; return;
}

void f_00406bc0(void) /* BaccaratRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406bc0);
    /* 00406bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406bc3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406bc9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00406bce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406bd0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406bd3: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00406bd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406bdb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00406bde: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x406be3u); f_0063aae0();
    /* 00406be3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00406be6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406bea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406bed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406bee: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406bf4: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x406bf9u); f_005e0690();
    /* 00406bf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406bfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406bfd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x406c02u); f_0064c8a0();
    /* 00406c02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406c05: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00406c08: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00406c0b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00406c0e: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00406c11: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00406c14: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00406c17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406c19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406c1b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x406c20u); f_0064c8a0();
    /* 00406c20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406c23: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00406c26: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00406c29: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00406c2c: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00406c2f: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00406c32: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00406c35: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00406c3b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x406c40u); f_005f3bf0();
    /* 00406c40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406c42: jne 0x406c5b */ if (!fZ) goto L_00406c5b;
L_00406c44:; BB(0x00406c44);
    /* 00406c44: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00406c47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c48: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00406c4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c4c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00406c4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c50: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406c56: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x406c5bu); f_005e0c40();
L_00406c5b:; BB(0x00406c5b);
    /* 00406c5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406c5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406c5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406c61: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00406c64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c65: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00406c68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c69: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00406c6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c6d: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00406c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c71: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00406c74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c75: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00406c78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c79: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00406c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c7d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00406c80: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00406c83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c84: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00406c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406c88: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 00406c8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406c8c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00406c8f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406c92: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x406c97u); f_0064c5c0();
    /* 00406c97: mov ecx, eax */ r_ecx = r_eax;
    /* 00406c99: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x406c9eu); f_0064c5c0();
    /* 00406c9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00406ca0: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x406ca5u); f_0064c5c0();
    /* 00406ca5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00406ca8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ca9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00406cab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406cac: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x406cb1u); f_0064c8d0();
    /* 00406cb1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406cb4: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00406cb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406cb8: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 00406cbd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x406cc2u); f_00630f40();
    /* 00406cc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406cc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406cc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406ccb: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x406cd0u); f_00654390();
    /* 00406cd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406cd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406cd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406cd6: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00406cd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406cda: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00406cdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406cde: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00406ce1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ce2: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 00406ce5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ce6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00406ce9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406cec: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x406cf1u); f_0064c5c0();
    /* 00406cf1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00406cf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406cf5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406cf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406cf8: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x406cfdu); f_0064c8d0();
    /* 00406cfd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406d00: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00406d03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406d04: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 00406d09: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x406d0eu); f_00630f40();
    /* 00406d0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406d11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406d12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406d17: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x406d1cu); f_00654390();
    /* 00406d1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d22: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00406d25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406d26: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00406d29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406d2a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00406d2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406d2e: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 00406d34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406d35: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00406d38: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406d3b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x406d40u); f_0064c5c0();
    /* 00406d40: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00406d43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406d44: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00406d46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406d47: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x406d4cu); f_0064c8d0();
    /* 00406d4c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406d4f: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00406d52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406d53: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d58: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x406d5du); f_00630f40();
    /* 00406d5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406d61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d63: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406d66: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x406d6bu); f_00654390();
    /* 00406d6b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00406d6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406d70: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00406d72: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x406d77u); f_00686d72();
    /* 00406d77: mov esp, ebp */ r_esp = r_ebp;
    /* 00406d79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406d7a: ret 8 */ FN_RET(0x00406bc0); r_esp += 12; return;
}

void f_00406d80(void) /* BaccaratRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406d80);
    /* 00406d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00406d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406d87: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d8c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406d91: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x406d96u); f_005fb5a0();
    /* 00406d96: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d9b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00406d9d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406da0: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x406da5u); f_005fb5a0();
    /* 00406da5: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406daa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00406dac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406daf: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x406db4u); f_005fb5a0();
    /* 00406db4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00406db6: mov esp, ebp */ r_esp = r_ebp;
    /* 00406db8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406db9: ret 4 */ FN_RET(0x00406d80); r_esp += 8; return;
}

void f_00406dc0(void) /* BaccaratRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406dc0);
    /* 00406dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406dc3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406dc6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00406dc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406dcb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406dce: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x406dd3u); f_0063aae0();
    /* 00406dd3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406dd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406dd9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00406ddc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406ddf: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406de2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406de5: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406de7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00406dea: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00406dec: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406def: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00406df2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406df5: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406df8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406dfb: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00406dfe: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00406e01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00406e03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e06: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406e09: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00406e0c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00406e0e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00406e11: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00406e14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e17: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00406e1a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00406e1d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00406e20: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00406e23: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00406e25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e28: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406e2b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00406e2e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00406e30: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00406e33: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00406e36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406e39: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406e3c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00406e3f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00406e42: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406e44: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00406e4a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00406e4c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406e52: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00406e58: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x406e5au); call_ind(t); }
    /* 00406e5a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00406e5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406e5f: je 0x406ede */ if (fZ) goto L_00406ede;
L_00406e61:; BB(0x00406e61);
    /* 00406e61: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00406e67: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x406e6cu); f_005f3bf0();
    /* 00406e6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406e6e: jne 0x406ede */ if (!fZ) goto L_00406ede;
L_00406e70:; BB(0x00406e70);
    /* 00406e70: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00406e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406e74: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00406e77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00406e78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406e7c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406e82: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x406e87u); f_005e0c40();
    /* 00406e87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00406e8a: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406e8d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00406e90: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00406e92: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406e95: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00406e97: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00406e9a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00406e9d: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406ea0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406ea3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00406ea6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00406ea9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00406eab: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406eae: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00406eb1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00406eb3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00406eb6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00406eb9: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406ebc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00406ebf: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00406ec2: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00406ec5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00406ec7: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406eca: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00406ecd: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00406ecf: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00406ed2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00406ed5: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00406ed8: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00406edb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_00406ede:; BB(0x00406ede);
    /* 00406ede: mov esp, ebp */ r_esp = r_ebp;
    /* 00406ee0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406ee1: ret 0x10 */ FN_RET(0x00406dc0); r_esp += 20; return;
}

void f_00406ef0(void) /* BaccaratRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406ef0);
    /* 00406ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406ef7: cmp dword ptr [ebp + 8], 0x311280 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x311280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406efe: jne 0x406f11 */ if (!fZ) goto L_00406f11;
L_00406f00:; BB(0x00406f00);
    /* 00406f00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406f02: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00406f08: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x406f0du); f_00653bd0();
    /* 00406f0d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00406f0f: jmp 0x406f13 */ goto L_00406f13;
L_00406f11:; BB(0x00406f11);
    /* 00406f11: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00406f13:; BB(0x00406f13);
    /* 00406f13: mov esp, ebp */ r_esp = r_ebp;
    /* 00406f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406f16: ret 4 */ FN_RET(0x00406ef0); r_esp += 8; return;
}

void f_00406f20(void) /* BaccaratRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406f20);
    /* 00406f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00406f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406f27: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406f29: mov esp, ebp */ r_esp = r_ebp;
    /* 00406f2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406f2c: ret 4 */ FN_RET(0x00406f20); r_esp += 8; return;
}

void f_00406f30(void) /* BaccaratRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406f30);
    /* 00406f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00406f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406f37: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406f39: mov esp, ebp */ r_esp = r_ebp;
    /* 00406f3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406f3c: ret 4 */ FN_RET(0x00406f30); r_esp += 8; return;
}

void f_00406f40(void) /* BaccaratRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406f40);
    /* 00406f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00406f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406f47: mov eax, 0x707190 */ r_eax = 0x707190u;
    /* 00406f4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00406f4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406f4f: ret  */ FN_RET(0x00406f40); r_esp += 4; return;
}

void f_00406f50(void) /* BaccaratRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406f50);
    /* 00406f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00406f53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406f55: push 0x69d8b4 */ { u32 v = 0x69d8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00406f5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00406f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406f61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406f62: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00406f67: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406f69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406f6a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00406f6d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00406f73: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00406f76: mov eax, dword ptr [0x790300] */ r_eax = R32((u32)(0x790300u));
    /* 00406f7b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00406f7e: jne 0x406fe9 */ if (!fZ) goto L_00406fe9;
L_00406f80:; BB(0x00406f80);
    /* 00406f80: mov ecx, dword ptr [0x790300] */ r_ecx = R32((u32)(0x790300u));
    /* 00406f86: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00406f89: mov dword ptr [0x790300], ecx */ W32((u32)(0x790300u), r_ecx);
    /* 00406f8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00406f96: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00406f9c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00406f9e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406fa4: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 00406faa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x406facu); call_ind(t); }
    /* 00406fac: mov dword ptr [0x7071b4], eax */ W32((u32)(0x7071b4u), r_eax);
    /* 00406fb1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00406fb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406fb8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406fbe: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00406fc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x406fc6u); call_ind(t); }
    /* 00406fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406fc7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406fcd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00406fcf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00406fd5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 00406fdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x406fddu); call_ind(t); }
    /* 00406fdd: mov dword ptr [0x7071b8], eax */ W32((u32)(0x7071b8u), r_eax);
    /* 00406fe2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00406fe9:; BB(0x00406fe9);
    /* 00406fe9: cmp dword ptr [ebp + 8], 0x311281 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x311281u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406ff0: jne 0x406ffb */ if (!fZ) goto L_00406ffb;
L_00406ff2:; BB(0x00406ff2);
    /* 00406ff2: mov eax, 0x7071b0 */ r_eax = 0x7071b0u;
    /* 00406ff7: jmp 0x406ffd */ goto L_00406ffd;
L_00406ffb:; BB(0x00406ffb);
    /* 00406ffb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00406ffd:; BB(0x00406ffd);
    /* 00406ffd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00407000: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00407007: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00407008: mov esp, ebp */ r_esp = r_ebp;
    /* 0040700a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040700b: ret 4 */ FN_RET(0x00406f50); r_esp += 8; return;
}

void f_00407010(void) /* BaccaratRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407010);
    /* 00407010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407011: mov ebp, esp */ r_ebp = r_esp;
    /* 00407013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407017: mov eax, 0x706c00 */ r_eax = 0x706c00u;
    /* 0040701c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040701e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040701f: ret  */ FN_RET(0x00407010); r_esp += 4; return;
}

void f_00407020(void) /* BaccaratRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407020);
    /* 00407020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407021: mov ebp, esp */ r_ebp = r_esp;
    /* 00407023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407027: mov eax, 0x7070c0 */ r_eax = 0x7070c0u;
    /* 0040702c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040702e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040702f: ret  */ FN_RET(0x00407020); r_esp += 4; return;
}

void f_00407030(void) /* BaccaratRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407030);
    /* 00407030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407031: mov ebp, esp */ r_ebp = r_esp;
    /* 00407033: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407036: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407039: cmp dword ptr [ebp + 0xc], 0x311280 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x311280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407040: jne 0x407106 */ if (!fZ) goto L_00407106;
L_00407046:; BB(0x00407046);
    /* 00407046: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040704d: jne 0x407065 */ if (!fZ) goto L_00407065;
L_0040704f:; BB(0x0040704f);
    /* 0040704f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407051: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407053: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00407059: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x40705eu); f_005dbd00();
    /* 0040705e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00407060: jmp 0x40712f */ goto L_0040712f;
L_00407065:; BB(0x00407065);
    /* 00407065: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0040706b: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x407070u); f_005e2f90();
    /* 00407070: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407073: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00407076: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00407079: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040707f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00407082: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00407086: ja 0x4070d6 */ if ((!fC&&!fZ)) goto L_004070d6;
L_00407088:; BB(0x00407088);
    /* 00407088: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040708b: jmp dword ptr [edx*4 + 0x407138] */ { u32 t = R32((u32)(r_edx*4+0x407138u)); switch (t) { case 0x407092u: goto L_00407092; case 0x4070a3u: goto L_004070a3; case 0x4070b5u: goto L_004070b5; case 0x4070c7u: goto L_004070c7; default: UNSUP(0x0040708b, "jump table entry is not a known target"); } }
L_00407092:; BB(0x00407092);
    /* 00407092: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00407097: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 004070a1: jmp 0x4070d6 */ goto L_004070d6;
L_004070a3:; BB(0x004070a3);
    /* 004070a3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004070a9: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 004070b3: jmp 0x4070d6 */ goto L_004070d6;
L_004070b5:; BB(0x004070b5);
    /* 004070b5: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004070bb: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 004070c5: jmp 0x4070d6 */ goto L_004070d6;
L_004070c7:; BB(0x004070c7);
    /* 004070c7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004070cc: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_004070d6:; BB(0x004070d6);
    /* 004070d6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004070d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004070da: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004070e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004070e2: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004070e8: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 004070ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4070f0u); call_ind(t); }
    /* 004070f0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004070f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004070f5: jne 0x407102 */ if (!fZ) goto L_00407102;
L_004070f7:; BB(0x004070f7);
    /* 004070f7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004070fd: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x407102u); f_005e3130();
L_00407102:; BB(0x00407102);
    /* 00407102: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00407104: jmp 0x40712f */ goto L_0040712f;
L_00407106:; BB(0x00407106);
    /* 00407106: cmp dword ptr [ebp + 8], 0x311280 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x311280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040710d: jne 0x40712d */ if (!fZ) goto L_0040712d;
L_0040710f:; BB(0x0040710f);
    /* 0040710f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407111: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407113: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00407119: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040711b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00407121: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 00407127: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x407129u); call_ind(t); }
    /* 00407129: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0040712b: jmp 0x40712f */ goto L_0040712f;
L_0040712d:; BB(0x0040712d);
    /* 0040712d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0040712f:; BB(0x0040712f);
    /* 0040712f: mov esp, ebp */ r_esp = r_ebp;
    /* 00407131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407132: ret 8 */ FN_RET(0x00407030); r_esp += 12; return;
}

void f_00418290(void) /* BaccaratRoomInterface::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418290);
    /* 00418290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418291: mov ebp, esp */ r_ebp = r_esp;
    /* 00418293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418297: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0041829c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041829e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041829f: ret  */ FN_RET(0x00418290); r_esp += 4; return;
}

void f_005404e0(void) /* BaccaratRoomInterface::vfunc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005404e0);
    /* 005404e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005404e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005404e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005404e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005404e7: mov eax, 0xb */ r_eax = 0xbu;
    /* 005404ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005404ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005404ef: ret  */ FN_RET(0x005404e0); r_esp += 4; return;
}

