#include "protos.h"

void f_005abce0(void) /* sub_5ABCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005abce0);
    /* 005abce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005abce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005abce3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005abce6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005abce9: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005abcee: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005abcf1: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5abcf6u); f_005eb240();
    /* 005abcf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005abcf8: jle 0x5abd60 */ if ((fZ||fS!=fO)) goto L_005abd60;
L_005abcfa:; BB(0x005abcfa);
    /* 005abcfa: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005abd00: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005abd03: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5abd08u); f_005eb240();
    /* 005abd08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005abd0a: jle 0x5abd60 */ if ((fZ||fS!=fO)) goto L_005abd60;
L_005abd0c:; BB(0x005abd0c);
    /* 005abd0c: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005abd12: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005abd15: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5abd1au); f_005eb240();
    /* 005abd1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005abd1c: jle 0x5abd60 */ if ((fZ||fS!=fO)) goto L_005abd60;
L_005abd1e:; BB(0x005abd1e);
    /* 005abd1e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005abd24: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5abd29u); f_00637630();
    /* 005abd29: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005abd2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abd2e: je 0x5abd60 */ if (fZ) goto L_005abd60;
L_005abd30:; BB(0x005abd30);
    /* 005abd30: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 005abd37: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abd39: jne 0x5abd60 */ if (!fZ) goto L_005abd60;
L_005abd3b:; BB(0x005abd3b);
    /* 005abd3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abd3e: movzx eax, byte ptr [edx + 0x20] */ r_eax = (u32)R8((u32)(r_edx+0x20u));
    /* 005abd42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abd44: jne 0x5abd60 */ if (!fZ) goto L_005abd60;
L_005abd46:; BB(0x005abd46);
    /* 005abd46: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abd4c: movzx edx, byte ptr [ecx + 0x5c0] */ r_edx = (u32)R8((u32)(r_ecx+0x5c0u));
    /* 005abd53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abd55: jne 0x5abd60 */ if (!fZ) goto L_005abd60;
L_005abd57:; BB(0x005abd57);
    /* 005abd57: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005abd5e: jmp 0x5abd67 */ goto L_005abd67;
L_005abd60:; BB(0x005abd60);
    /* 005abd60: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005abd67:; BB(0x005abd67);
    /* 005abd67: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005abd6a: mov esp, ebp */ r_esp = r_ebp;
    /* 005abd6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005abd6d: ret  */ FN_RET(0x005abce0); r_esp += 4; return;
}

