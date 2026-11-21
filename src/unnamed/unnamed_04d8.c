#include "protos.h"

void f_004d8a80(void) /* sub_4D8A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d8a80);
    /* 004d8a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d8a81: mov ebp, esp */ r_ebp = r_esp;
    /* 004d8a83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d8a86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d8a89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d8a8c: movsx ecx, word ptr [eax + 0x1e6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1e6u));
    /* 004d8a93: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004d8a96: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004d8a99: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004d8a9f: mov esp, ebp */ r_esp = r_ebp;
    /* 004d8aa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d8aa2: ret  */ FN_RET(0x004d8a80); r_esp += 4; return;
}

