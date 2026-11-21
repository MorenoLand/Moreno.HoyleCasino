#include "protos.h"

void f_0066ce30(void) /* ExitFaceDemoButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ce30);
    /* 0066ce30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce31: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ce33: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ce36: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066ce39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce3b: push 0x780e74 */ { u32 v = 0x780e74u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce40: push 0x706b6c */ { u32 v = 0x706b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce47: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0066ce4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce4d: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x66ce52u); f_00686ede();
    /* 0066ce52: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ce55: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066ce58: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ce5c: je 0x66ceb3 */ if (fZ) goto L_0066ceb3;
L_0066ce5e:; BB(0x0066ce5e);
    /* 0066ce5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce61: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ce65: je 0x66ceb3 */ if (fZ) goto L_0066ceb3;
L_0066ce67:; BB(0x0066ce67);
    /* 0066ce67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce6a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066ce6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce70: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0066ce73: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066ce75: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066ce78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ce7au); call_ind(t); }
    /* 0066ce7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce7d: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0066ce80: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0066ce83: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ce86: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066ce89: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ce8d: je 0x66cea2 */ if (fZ) goto L_0066cea2;
L_0066ce8f:; BB(0x0066ce8f);
    /* 0066ce8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066ce94: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ce96: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066ce99: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ce9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ce9du); call_ind(t); }
    /* 0066ce9d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066cea0: jmp 0x66cea9 */ goto L_0066cea9;
L_0066cea2:; BB(0x0066cea2);
    /* 0066cea2: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0066cea9:; BB(0x0066cea9);
    /* 0066cea9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ceac: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
L_0066ceb3:; BB(0x0066ceb3);
    /* 0066ceb3: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ceb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ceb6: ret  */ FN_RET(0x0066ce30); r_esp += 4; return;
}

