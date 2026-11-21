#include "protos.h"

void f_00674240(void) /* FileNameEditBox::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674240);
    /* 00674240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674241: mov ebp, esp */ r_ebp = r_esp;
    /* 00674243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00674247: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067424a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067424b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067424e: call 0x60b7d0 */ r_esp -= 4; W32(r_esp, 0x674253u); f_0060b7d0();
    /* 00674253: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00674256: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0067425a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067425c: je 0x674266 */ if (fZ) goto L_00674266;
L_0067425e:; BB(0x0067425e);
    /* 0067425e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674261: call 0x674270 */ r_esp -= 4; W32(r_esp, 0x674266u); f_00674270();
L_00674266:; BB(0x00674266);
    /* 00674266: mov esp, ebp */ r_esp = r_ebp;
    /* 00674268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674269: ret 4 */ FN_RET(0x00674240); r_esp += 8; return;
}

void f_00674870(void) /* FileNameEditBox::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674870);
    /* 00674870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674871: mov ebp, esp */ r_ebp = r_esp;
    /* 00674873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00674877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067487a: mov dword ptr [eax], 0x6e147c */ W32((u32)(r_eax), 0x6e147cu);
    /* 00674880: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674883: call 0x60b5b0 */ r_esp -= 4; W32(r_esp, 0x674888u); f_0060b5b0();
    /* 00674888: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0067488b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0067488e: je 0x67489c */ if (fZ) goto L_0067489c;
L_00674890:; BB(0x00674890);
    /* 00674890: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674894: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x674899u); f_00686cae();
    /* 00674899: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067489c:; BB(0x0067489c);
    /* 0067489c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067489f: mov esp, ebp */ r_esp = r_ebp;
    /* 006748a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006748a2: ret 4 */ FN_RET(0x00674870); r_esp += 8; return;
}

