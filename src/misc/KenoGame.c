#include "protos.h"

void f_00582f70(void) /* KenoGame::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582f70);
    /* 00582f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00582f73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00582f75: push 0x6a6b38 */ { u32 v = 0x6a6b38u; r_esp -= 4; W32(r_esp, v); }
    /* 00582f7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00582f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582f81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582f84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00582f89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00582f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582f8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00582f8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00582f95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00582f98: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00582f9b: mov dword ptr [eax], 0x6cc2f0 */ W32((u32)(r_eax), 0x6cc2f0u);
    /* 00582fa1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582fa8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00582fab: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582faf: je 0x582fea */ if (fZ) goto L_00582fea;
L_00582fb1:; BB(0x00582fb1);
    /* 00582fb1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00582fb4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00582fb7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00582fba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00582fbd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00582fc0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582fc4: je 0x582fd9 */ if (fZ) goto L_00582fd9;
L_00582fc6:; BB(0x00582fc6);
    /* 00582fc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582fc8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00582fcb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00582fcd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00582fd0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00582fd2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x582fd4u); call_ind(t); }
    /* 00582fd4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00582fd7: jmp 0x582fe0 */ goto L_00582fe0;
L_00582fd9:; BB(0x00582fd9);
    /* 00582fd9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00582fe0:; BB(0x00582fe0);
    /* 00582fe0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00582fe3: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
L_00582fea:; BB(0x00582fea);
    /* 00582fea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00582ff1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00582ff4: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x582ff9u); f_005e9e40();
    /* 00582ff9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00582ffc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583003: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00583004: mov esp, ebp */ r_esp = r_ebp;
    /* 00583006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583007: ret  */ FN_RET(0x00582f70); r_esp += 4; return;
}

