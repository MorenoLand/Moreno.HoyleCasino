#include "protos.h"

void f_00615a20(void) /* sciScrollRect::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615a20);
    /* 00615a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00615a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615a27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615a2a: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x615a2fu); f_005f6130();
    /* 00615a2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615a32: mov dword ptr [eax], 0x6d86cc */ W32((u32)(r_eax), 0x6d86ccu);
    /* 00615a38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615a3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00615a3e: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00615a41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615a44: mov esp, ebp */ r_esp = r_ebp;
    /* 00615a46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615a47: ret 4 */ FN_RET(0x00615a20); r_esp += 8; return;
}

void f_00615a70(void) /* sciScrollRect::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615a70);
    /* 00615a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00615a73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615a76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615a79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615a7c: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00615a7f: call 0x615140 */ r_esp -= 4; W32(r_esp, 0x615a84u); f_00615140();
    /* 00615a84: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00615a87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615a89: je 0x615aa7 */ if (fZ) goto L_00615aa7;
L_00615a8b:; BB(0x00615a8b);
    /* 00615a8b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00615a8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00615a8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615a92: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x615a97u); f_005f4b60();
    /* 00615a97: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615a9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615a9c: je 0x615aa7 */ if (fZ) goto L_00615aa7;
L_00615a9e:; BB(0x00615a9e);
    /* 00615a9e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00615aa5: jmp 0x615aae */ goto L_00615aae;
L_00615aa7:; BB(0x00615aa7);
    /* 00615aa7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00615aae:; BB(0x00615aae);
    /* 00615aae: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00615ab1: mov esp, ebp */ r_esp = r_ebp;
    /* 00615ab3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615ab4: ret 4 */ FN_RET(0x00615a70); r_esp += 8; return;
}

void f_00615ac0(void) /* sciScrollRect::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615ac0);
    /* 00615ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00615ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615ac7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00615aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615acb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615ace: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x615ad3u); f_005f4ed0();
    /* 00615ad3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615ad6: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00615ada: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615add: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00615ae0: call 0x615140 */ r_esp -= 4; W32(r_esp, 0x615ae5u); f_00615140();
    /* 00615ae5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615aea: je 0x615afb */ if (fZ) goto L_00615afb;
L_00615aec:; BB(0x00615aec);
    /* 00615aec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615aef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615af0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615af3: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00615af6: call 0x615640 */ r_esp -= 4; W32(r_esp, 0x615afbu); f_00615640();
L_00615afb:; BB(0x00615afb);
    /* 00615afb: mov esp, ebp */ r_esp = r_ebp;
    /* 00615afd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615afe: ret 4 */ FN_RET(0x00615ac0); r_esp += 8; return;
}

