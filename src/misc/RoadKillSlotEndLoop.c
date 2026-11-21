#include "protos.h"

void f_00571420(void) /* RoadKillSlotEndLoop::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571420);
    /* 00571420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571421: mov ebp, esp */ r_ebp = r_esp;
    /* 00571423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571427: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057142a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057142b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057142e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x571433u); f_006010a0();
    /* 00571433: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571436: mov dword ptr [ecx], 0x6ca744 */ W32((u32)(r_ecx), 0x6ca744u);
    /* 0057143c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057143f: mov esp, ebp */ r_esp = r_ebp;
    /* 00571441: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571442: ret 4 */ FN_RET(0x00571420); r_esp += 8; return;
}

void f_00571470(void) /* RoadKillSlotEndLoop::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571470);
    /* 00571470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571471: mov ebp, esp */ r_ebp = r_esp;
    /* 00571473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571477: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057147a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057147d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571480: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00571483: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00571485: mov ecx, eax */ r_ecx = r_eax;
    /* 00571487: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057148a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57148cu); call_ind(t); }
    /* 0057148c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057148f: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x571494u); f_006005d0();
    /* 00571494: mov esp, ebp */ r_esp = r_ebp;
    /* 00571496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571497: ret  */ FN_RET(0x00571470); r_esp += 4; return;
}

