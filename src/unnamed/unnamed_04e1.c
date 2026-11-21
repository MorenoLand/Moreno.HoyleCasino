#include "protos.h"

void f_004e11f0(void) /* sub_4E11F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e11f0);
    /* 004e11f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e11f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004e11f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e11f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e11f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e11fa: mov ax, word ptr [eax + 0x228] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x228u))) & 0xffffu);
    /* 004e1201: mov esp, ebp */ r_esp = r_ebp;
    /* 004e1203: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e1204: ret  */ FN_RET(0x004e11f0); r_esp += 4; return;
}

void f_004e1500(void) /* sub_4E1500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e1500);
    /* 004e1500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e1501: mov ebp, esp */ r_ebp = r_esp;
    /* 004e1503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e1504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e1507: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e150a: mov ax, word ptr [eax + 0x230] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x230u))) & 0xffffu);
    /* 004e1511: mov esp, ebp */ r_esp = r_ebp;
    /* 004e1513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e1514: ret  */ FN_RET(0x004e1500); r_esp += 4; return;
}

void f_004e1630(void) /* sub_4E1630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e1630);
    /* 004e1630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e1631: mov ebp, esp */ r_ebp = r_esp;
    /* 004e1633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e1634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e1637: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e163a: mov ax, word ptr [eax + 0x284] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x284u))) & 0xffffu);
    /* 004e1641: mov esp, ebp */ r_esp = r_ebp;
    /* 004e1643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e1644: ret  */ FN_RET(0x004e1630); r_esp += 4; return;
}

