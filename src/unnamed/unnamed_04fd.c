#include "protos.h"

void f_004fd030(void) /* sub_4FD030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd030);
    /* 004fd030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd031: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd033: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd036: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fd039: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fd03e: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004fd044: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fd047: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fd04a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004fd04d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd051: je 0x4fd066 */ if (fZ) goto L_004fd066;
L_004fd053:; BB(0x004fd053);
    /* 004fd053: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd055: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd058: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fd05a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd05d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fd05f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd061u); call_ind(t); }
    /* 004fd061: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fd064: jmp 0x4fd06d */ goto L_004fd06d;
L_004fd066:; BB(0x004fd066);
    /* 004fd066: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004fd06d:; BB(0x004fd06d);
    /* 004fd06d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd06f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd070: ret  */ FN_RET(0x004fd030); r_esp += 4; return;
}

