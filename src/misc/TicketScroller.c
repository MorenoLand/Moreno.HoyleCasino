#include "protos.h"

void f_0058df60(void) /* TicketScroller::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058df60);
    /* 0058df60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058df61: mov ebp, esp */ r_ebp = r_esp;
    /* 0058df63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058df64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058df67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058df69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df6c: call 0x5845c0 */ r_esp -= 4; W32(r_esp, 0x58df71u); f_005845c0();
    /* 0058df71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df74: mov dword ptr [eax], 0x6cd9fc */ W32((u32)(r_eax), 0x6cd9fcu);
    /* 0058df7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058df7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0058df7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058df80: ret  */ FN_RET(0x0058df60); r_esp += 4; return;
}

void f_0058e000(void) /* TicketScroller::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058e000);
    /* 0058e000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e001: mov ebp, esp */ r_ebp = r_esp;
    /* 0058e003: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058e006: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058e009: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058e00e: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058e014: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e01a: mov eax, dword ptr [edx + ecx*4 + 0x3bf4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3bf4u));
    /* 0058e021: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058e024: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e028: je 0x58e032 */ if (fZ) goto L_0058e032;
L_0058e02a:; BB(0x0058e02a);
    /* 0058e02a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058e02d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0058e030: jmp 0x58e039 */ goto L_0058e039;
L_0058e032:; BB(0x0058e032);
    /* 0058e032: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0058e039:; BB(0x0058e039);
    /* 0058e039: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e03c: mov esp, ebp */ r_esp = r_ebp;
    /* 0058e03e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e03f: ret  */ FN_RET(0x0058e000); r_esp += 4; return;
}

void f_0058e050(void) /* TicketScroller::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058e050);
    /* 0058e050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e051: mov ebp, esp */ r_ebp = r_esp;
    /* 0058e053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058e057: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058e05a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e05b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058e05e: call 0x5855e0 */ r_esp -= 4; W32(r_esp, 0x58e063u); f_005855e0();
    /* 0058e063: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058e066: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e067: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e06d: call 0x58a630 */ r_esp -= 4; W32(r_esp, 0x58e072u); f_0058a630();
    /* 0058e072: mov esp, ebp */ r_esp = r_ebp;
    /* 0058e074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e075: ret 4 */ FN_RET(0x0058e050); r_esp += 8; return;
}

