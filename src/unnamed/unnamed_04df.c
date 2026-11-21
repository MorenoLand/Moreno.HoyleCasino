#include "protos.h"

void f_004dfad0(void) /* sub_4DFAD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004dfad0);
    /* 004dfad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dfad1: mov ebp, esp */ r_ebp = r_esp;
    /* 004dfad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dfad6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004dfad9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004dfadc: movsx ecx, word ptr [eax + 0x214] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x214u));
    /* 004dfae3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004dfae6: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004dfae9: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004dfaef: mov esp, ebp */ r_esp = r_ebp;
    /* 004dfaf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dfaf2: ret  */ FN_RET(0x004dfad0); r_esp += 4; return;
}

