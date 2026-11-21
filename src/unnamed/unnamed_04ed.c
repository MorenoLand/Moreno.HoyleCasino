#include "protos.h"

void f_004ed190(void) /* sub_4ED190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ed190);
    /* 004ed190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed191: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ed197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed19a: mov ax, word ptr [eax + 0x35a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x35au))) & 0xffffu);
    /* 004ed1a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed1a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed1a4: ret  */ FN_RET(0x004ed190); r_esp += 4; return;
}

void f_004edfa0(void) /* sub_4EDFA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004edfa0);
    /* 004edfa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edfa1: mov ebp, esp */ r_ebp = r_esp;
    /* 004edfa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004edfa6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004edfa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edfac: movsx ecx, word ptr [eax + 0x374] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x374u));
    /* 004edfb3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004edfb6: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004edfb9: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004edfbf: mov esp, ebp */ r_esp = r_ebp;
    /* 004edfc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edfc2: ret  */ FN_RET(0x004edfa0); r_esp += 4; return;
}

