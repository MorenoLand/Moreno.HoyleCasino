#include "protos.h"

void f_0045eb00(void) /* PaiGowRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045eb00);
    /* 0045eb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb01: mov ebp, esp */ r_ebp = r_esp;
    /* 0045eb03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045eb06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045eb09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eb0c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0045eb0f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045eb12: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eb16: je 0x45eb23 */ if (fZ) goto L_0045eb23;
L_0045eb18:; BB(0x0045eb18);
    /* 0045eb18: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eb1f: je 0x45eb30 */ if (fZ) goto L_0045eb30;
L_0045eb21:; BB(0x0045eb21);
    /* 0045eb21: jmp 0x45eb5b */ goto L_0045eb5b;
L_0045eb23:; BB(0x0045eb23);
    /* 0045eb23: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045eb29: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45eb2eu); f_0045b300();
    /* 0045eb2e: jmp 0x45eb76 */ goto L_0045eb76;
L_0045eb30:; BB(0x0045eb30);
    /* 0045eb30: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045eb36: call 0x45ffe0 */ r_esp -= 4; W32(r_esp, 0x45eb3bu); f_0045ffe0();
    /* 0045eb3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eb40: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045eb42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eb45: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0045eb48: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45eb4au); call_ind(t); }
    /* 0045eb4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eb4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045eb51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eb54: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0045eb57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45eb59u); call_ind(t); }
    /* 0045eb59: jmp 0x45eb76 */ goto L_0045eb76;
L_0045eb5b:; BB(0x0045eb5b);
    /* 0045eb5b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0045eb5d: jne 0x45eb76 */ if (!fZ) goto L_0045eb76;
L_0045eb5f:; BB(0x0045eb5f);
    /* 0045eb5f: push 0x23c */ { u32 v = 0x23cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb64: push 0x6ba04c */ { u32 v = 0x6ba04cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb69: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb6e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x45eb73u); f_005e9f20();
    /* 0045eb73: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045eb76:; BB(0x0045eb76);
    /* 0045eb76: mov esp, ebp */ r_esp = r_ebp;
    /* 0045eb78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045eb79: ret  */ FN_RET(0x0045eb00); r_esp += 4; return;
}

