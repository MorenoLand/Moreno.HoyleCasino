#include "protos.h"

void f_00425260(void) /* CaribbeanStudRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425260);
    /* 00425260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425261: mov ebp, esp */ r_ebp = r_esp;
    /* 00425263: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425266: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425269: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042526c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0042526f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00425272: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425276: je 0x425283 */ if (fZ) goto L_00425283;
L_00425278:; BB(0x00425278);
    /* 00425278: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042527f: je 0x425290 */ if (fZ) goto L_00425290;
L_00425281:; BB(0x00425281);
    /* 00425281: jmp 0x4252bb */ goto L_004252bb;
L_00425283:; BB(0x00425283);
    /* 00425283: mov ecx, dword ptr [0x79035c] */ r_ecx = R32((u32)(0x79035cu));
    /* 00425289: call 0x422600 */ r_esp -= 4; W32(r_esp, 0x42528eu); f_00422600();
    /* 0042528e: jmp 0x4252d6 */ goto L_004252d6;
L_00425290:; BB(0x00425290);
    /* 00425290: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00425296: call 0x425fb0 */ r_esp -= 4; W32(r_esp, 0x42529bu); f_00425fb0();
    /* 0042529b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042529d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004252a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252a5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004252a8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4252aau); call_ind(t); }
    /* 004252aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004252ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004252b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252b4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004252b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4252b9u); call_ind(t); }
    /* 004252b9: jmp 0x4252d6 */ goto L_004252d6;
L_004252bb:; BB(0x004252bb);
    /* 004252bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004252bd: jne 0x4252d6 */ if (!fZ) goto L_004252d6;
L_004252bf:; BB(0x004252bf);
    /* 004252bf: push 0x1f6 */ { u32 v = 0x1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 004252c4: push 0x6b6558 */ { u32 v = 0x6b6558u; r_esp -= 4; W32(r_esp, v); }
    /* 004252c9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004252ce: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4252d3u); f_005e9f20();
    /* 004252d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004252d6:; BB(0x004252d6);
    /* 004252d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004252d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004252d9: ret  */ FN_RET(0x00425260); r_esp += 4; return;
}

