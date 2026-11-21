#include "protos.h"

void f_004cbe00(void) /* sub_4CBE00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cbe00);
    /* 004cbe00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cbe01: mov ebp, esp */ r_ebp = r_esp;
    /* 004cbe03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cbe06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cbe09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cbe0c: movsx ecx, word ptr [eax + 0x112] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x112u));
    /* 004cbe13: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004cbe16: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004cbe19: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004cbe1f: mov esp, ebp */ r_esp = r_ebp;
    /* 004cbe21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbe22: ret  */ FN_RET(0x004cbe00); r_esp += 4; return;
}

void f_004cbe30(void) /* sub_4CBE30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cbe30);
    /* 004cbe30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cbe31: mov ebp, esp */ r_ebp = r_esp;
    /* 004cbe33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cbe36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cbe39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cbe3c: movsx ecx, word ptr [eax + 0x118] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x118u));
    /* 004cbe43: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004cbe46: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004cbe49: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004cbe4f: mov esp, ebp */ r_esp = r_ebp;
    /* 004cbe51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbe52: ret  */ FN_RET(0x004cbe30); r_esp += 4; return;
}

