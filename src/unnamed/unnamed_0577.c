#include "protos.h"

void f_00577c60(void) /* sub_577C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577c60);
    /* 00577c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00577c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577c67: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00577c6d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x577c72u); f_005f3e50();
    /* 00577c72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577c75: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00577c78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577c79: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x577c7eu); f_00686eba();
    /* 00577c7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577c81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577c84: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00577c87: cmp eax, dword ptr [ecx + 0x178] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x178u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577c8d: jge 0x577ca1 */ if ((fS==fO)) goto L_00577ca1;
L_00577c8f:; BB(0x00577c8f);
    /* 00577c8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577c92: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00577c95: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x577c9au); f_005eb610();
    /* 00577c9a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00577c9d: jmp 0x577ccb */ goto L_00577ccb;
L_00577ca1:; BB(0x00577ca1);
    /* 00577ca1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00577ca7: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x577cacu); f_005f3e50();
    /* 00577cac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577caf: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00577cb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577cb5: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00577cb8: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x577cbdu); f_005eb610();
    /* 00577cbd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00577cc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577cc3: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00577cc6: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00577cc9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00577ccb:; BB(0x00577ccb);
    /* 00577ccb: mov esp, ebp */ r_esp = r_ebp;
    /* 00577ccd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577cce: ret  */ FN_RET(0x00577c60); r_esp += 4; return;
}

