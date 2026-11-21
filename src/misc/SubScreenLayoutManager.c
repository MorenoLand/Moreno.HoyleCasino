#include "protos.h"

void f_00663180(void) /* SubScreenLayoutManager::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663180);
    /* 00663180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663181: mov ebp, esp */ r_ebp = r_esp;
    /* 00663183: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663186: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00663189: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0066318c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066318d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00663190: call 0x663080 */ r_esp -= 4; W32(r_esp, 0x663195u); f_00663080();
    /* 00663195: mov ecx, 0xf5 */ r_ecx = 0xf5u;
    /* 0066319a: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066319d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006631a0: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 006631a3: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 006631a6: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 006631a9: fmul qword ptr [0x6df890] */ ST(0) = ST(0) * R_F64((u32)(0x6df890u));
    /* 006631af: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006631b2: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 006631b5: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 006631b8: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006631bb: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6631c0u); f_00686cc0();
    /* 006631c0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006631c3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006631c6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006631c9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006631cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006631ce: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006631d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006631d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006631d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006631d7: ret 4 */ FN_RET(0x00663180); r_esp += 8; return;
}

