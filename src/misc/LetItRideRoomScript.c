#include "protos.h"

void f_0044bd20(void) /* LetItRideRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bd20);
    /* 0044bd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bd23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bd26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bd29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bd2c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0044bd2f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044bd32: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bd36: je 0x44bd43 */ if (fZ) goto L_0044bd43;
L_0044bd38:; BB(0x0044bd38);
    /* 0044bd38: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bd3f: je 0x44bd50 */ if (fZ) goto L_0044bd50;
L_0044bd41:; BB(0x0044bd41);
    /* 0044bd41: jmp 0x44bd7b */ goto L_0044bd7b;
L_0044bd43:; BB(0x0044bd43);
    /* 0044bd43: mov ecx, dword ptr [0x790714] */ r_ecx = R32((u32)(0x790714u));
    /* 0044bd49: call 0x4497a0 */ r_esp -= 4; W32(r_esp, 0x44bd4eu); f_004497a0();
    /* 0044bd4e: jmp 0x44bd96 */ goto L_0044bd96;
L_0044bd50:; BB(0x0044bd50);
    /* 0044bd50: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044bd56: call 0x44ca20 */ r_esp -= 4; W32(r_esp, 0x44bd5bu); f_0044ca20();
    /* 0044bd5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bd60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044bd62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bd65: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0044bd68: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44bd6au); call_ind(t); }
    /* 0044bd6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bd6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044bd71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bd74: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0044bd77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44bd79u); call_ind(t); }
    /* 0044bd79: jmp 0x44bd96 */ goto L_0044bd96;
L_0044bd7b:; BB(0x0044bd7b);
    /* 0044bd7b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0044bd7d: jne 0x44bd96 */ if (!fZ) goto L_0044bd96;
L_0044bd7f:; BB(0x0044bd7f);
    /* 0044bd7f: push 0x1b5 */ { u32 v = 0x1b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd84: push 0x6b9128 */ { u32 v = 0x6b9128u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd89: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd8e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44bd93u); f_005e9f20();
    /* 0044bd93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044bd96:; BB(0x0044bd96);
    /* 0044bd96: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bd98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bd99: ret  */ FN_RET(0x0044bd20); r_esp += 4; return;
}

