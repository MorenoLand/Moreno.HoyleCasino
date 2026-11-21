#include "protos.h"

void f_00613a60(void) /* VWindowRECT::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613a60);
    /* 00613a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00613a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613a65: push 0x6ab102 */ { u32 v = 0x6ab102u; r_esp -= 4; W32(r_esp, v); }
    /* 00613a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613a71: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613a74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00613a79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00613a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613a7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00613a7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00613a85: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00613a88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613a8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613a8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00613a90: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613a93: jl 0x613a9b */ if ((fS!=fO)) goto L_00613a9b;
L_00613a95:; BB(0x00613a95);
    /* 00613a95: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 00613a99: jmp 0x613ab3 */ goto L_00613ab3;
L_00613a9b:; BB(0x00613a9b);
    /* 00613a9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613a9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613aa1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00613aa4: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613aa7: jl 0x613aaf */ if ((fS!=fO)) goto L_00613aaf;
L_00613aa9:; BB(0x00613aa9);
    /* 00613aa9: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 00613aad: jmp 0x613ab3 */ goto L_00613ab3;
L_00613aaf:; BB(0x00613aaf);
    /* 00613aaf: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
L_00613ab3:; BB(0x00613ab3);
    /* 00613ab3: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00613ab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613ab9: je 0x613ac0 */ if (fZ) goto L_00613ac0;
L_00613abb:; BB(0x00613abb);
    /* 00613abb: jmp 0x613b4b */ goto L_00613b4b;
L_00613ac0:; BB(0x00613ac0);
    /* 00613ac0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613ac3: movzx edx, byte ptr [ecx + 0x80] */ r_edx = (u32)R8((u32)(r_ecx+0x80u));
    /* 00613aca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613acc: jne 0x613ad0 */ if (!fZ) goto L_00613ad0;
L_00613ace:; BB(0x00613ace);
    /* 00613ace: jmp 0x613b4b */ goto L_00613b4b;
L_00613ad0:; BB(0x00613ad0);
    /* 00613ad0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00613ad2: call 0x612ef0 */ r_esp -= 4; W32(r_esp, 0x613ad7u); f_00612ef0();
    /* 00613ad7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613ada: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00613add: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00613ae4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613ae8: je 0x613b03 */ if (fZ) goto L_00613b03;
L_00613aea:; BB(0x00613aea);
    /* 00613aea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613aed: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x613af2u); f_0062aea0();
    /* 00613af2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613af5: mov dword ptr [eax], 0x6d8520 */ W32((u32)(r_eax), 0x6d8520u);
    /* 00613afb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613afe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00613b01: jmp 0x613b0a */ goto L_00613b0a;
L_00613b03:; BB(0x00613b03);
    /* 00613b03: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00613b0a:; BB(0x00613b0a);
    /* 00613b0a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613b0d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00613b10: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613b17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00613b1a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00613b1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613b20: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613b23: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00613b26: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00613b28: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00613b2a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00613b2d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00613b30: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00613b33: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00613b36: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00613b39: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00613b3c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613b3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613b40: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613b43: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613b46: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x613b4bu); f_0062aa20();
L_00613b4b:; BB(0x00613b4b);
    /* 00613b4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613b4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613b55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613b56: mov esp, ebp */ r_esp = r_ebp;
    /* 00613b58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613b59: ret 4 */ FN_RET(0x00613a60); r_esp += 8; return;
}

void f_006145b0(void) /* VWindowRECT::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006145b0);
    /* 006145b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006145b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006145b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006145b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006145b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006145ba: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x6145bfu); f_0062aef0();
    /* 006145bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006145c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006145c5: je 0x6145d5 */ if (fZ) goto L_006145d5;
L_006145c7:; BB(0x006145c7);
    /* 006145c7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006145c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006145cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006145cd: call 0x612fa0 */ r_esp -= 4; W32(r_esp, 0x6145d2u); f_00612fa0();
    /* 006145d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006145d5:; BB(0x006145d5);
    /* 006145d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006145d8: mov esp, ebp */ r_esp = r_ebp;
    /* 006145da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006145db: ret 4 */ FN_RET(0x006145b0); r_esp += 8; return;
}

