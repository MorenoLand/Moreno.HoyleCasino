#include "protos.h"

void f_005dd400(void) /* sub_5DD400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd400);
    /* 005dd400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd401: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dd407: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd40a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005dd40d: mov byte ptr [eax + 0x94], cl */ W8((u32)(r_eax+0x94u), (u8)r_ecx);
    /* 005dd413: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd416: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dd418: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd41b: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 005dd421: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dd423u); call_ind(t); }
    /* 005dd423: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd426: ret 4 */ FN_RET(0x005dd400); r_esp += 8; return;
}

