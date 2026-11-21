#include "protos.h"

void f_005bfc40(void) /* OneOfNineScript@OneOfNine::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfc40);
    /* 005bfc40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc41: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfc43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc4c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5bfc51u); f_005fc0d0();
    /* 005bfc51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc54: mov dword ptr [eax], 0x6d1d18 */ W32((u32)(r_eax), 0x6d1d18u);
    /* 005bfc5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bfc60: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005bfc63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc66: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bfc69: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005bfc6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfc71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfc72: ret 8 */ FN_RET(0x005bfc40); r_esp += 12; return;
}

void f_005bfc80(void) /* OneOfNineScript@OneOfNine::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfc80);
    /* 005bfc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc81: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfc83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bfc86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfc89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc8c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5bfc91u); f_005fc360();
    /* 005bfc91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bfc94: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfc98: je 0x5bfca2 */ if (fZ) goto L_005bfca2;
L_005bfc9a:; BB(0x005bfc9a);
    /* 005bfc9a: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfc9e: je 0x5bfcb3 */ if (fZ) goto L_005bfcb3;
L_005bfca0:; BB(0x005bfca0);
    /* 005bfca0: jmp 0x5bfcd4 */ goto L_005bfcd4;
L_005bfca2:; BB(0x005bfca2);
    /* 005bfca2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfca4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfca7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bfca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfcac: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bfcaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bfcb1u); call_ind(t); }
    /* 005bfcb1: jmp 0x5bfcd4 */ goto L_005bfcd4;
L_005bfcb3:; BB(0x005bfcb3);
    /* 005bfcb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfcb6: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005bfcb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfcba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfcbd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005bfcc0: call 0x5bfbc0 */ r_esp -= 4; W32(r_esp, 0x5bfcc5u); f_005bfbc0();
    /* 005bfcc5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bfcc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfcca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bfccc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfccf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bfcd2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bfcd4u); call_ind(t); }
L_005bfcd4:; BB(0x005bfcd4);
    /* 005bfcd4: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfcd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfcd7: ret  */ FN_RET(0x005bfc80); r_esp += 4; return;
}

