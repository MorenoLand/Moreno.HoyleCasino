#include "protos.h"

void f_005ff190(void) /* sciMenuDelayScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff190);
    /* 005ff190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff191: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff197: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ff19a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff19b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff19e: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5ff1a3u); f_005fc0d0();
    /* 005ff1a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff1a6: mov dword ptr [ecx], 0x6d70fc */ W32((u32)(r_ecx), 0x6d70fcu);
    /* 005ff1ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff1af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff1b2: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005ff1b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff1b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff1ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff1bb: ret 8 */ FN_RET(0x005ff190); r_esp += 12; return;
}

void f_005ff1c0(void) /* sciMenuDelayScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff1c0);
    /* 005ff1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff1c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff1c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff1c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff1cc: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5ff1d1u); f_005fc360();
    /* 005ff1d1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ff1d4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff1d8: je 0x5ff1e2 */ if (fZ) goto L_005ff1e2;
L_005ff1da:; BB(0x005ff1da);
    /* 005ff1da: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff1de: je 0x5ff1f5 */ if (fZ) goto L_005ff1f5;
L_005ff1e0:; BB(0x005ff1e0);
    /* 005ff1e0: jmp 0x5ff200 */ goto L_005ff200;
L_005ff1e2:; BB(0x005ff1e2);
    /* 005ff1e2: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff1e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff1e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff1e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ff1eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff1ee: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ff1f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ff1f3u); call_ind(t); }
    /* 005ff1f3: jmp 0x5ff200 */ goto L_005ff200;
L_005ff1f5:; BB(0x005ff1f5);
    /* 005ff1f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff1f8: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005ff1fb: call 0x5fd330 */ r_esp -= 4; W32(r_esp, 0x5ff200u); f_005fd330();
L_005ff200:; BB(0x005ff200);
    /* 005ff200: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff202: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff203: ret  */ FN_RET(0x005ff1c0); r_esp += 4; return;
}

