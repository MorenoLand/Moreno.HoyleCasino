#include "protos.h"

void f_006012f0(void) /* sciCycleOscillate::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006012f0);
    /* 006012f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006012f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006012f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006012f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006012f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006012f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012fc: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x601301u); f_00600420();
    /* 00601301: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601304: mov dword ptr [eax], 0x6d7570 */ W32((u32)(r_eax), 0x6d7570u);
    /* 0060130a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060130d: mov dword ptr [ecx + 0xc], 1 */ W32((u32)(r_ecx+0xcu), 0x1u);
    /* 00601314: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601317: mov esp, ebp */ r_esp = r_ebp;
    /* 00601319: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060131a: ret  */ FN_RET(0x006012f0); r_esp += 4; return;
}

void f_006013c0(void) /* sciCycleOscillate::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006013c0);
    /* 006013c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006013c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006013c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006013c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006013c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006013ca: cmp dword ptr [eax + 0xc], 1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006013ce: jne 0x6013dc */ if (!fZ) goto L_006013dc;
L_006013d0:; BB(0x006013d0);
    /* 006013d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006013d3: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
    /* 006013da: jmp 0x6013e6 */ goto L_006013e6;
L_006013dc:; BB(0x006013dc);
    /* 006013dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006013df: mov dword ptr [edx + 0xc], 1 */ W32((u32)(r_edx+0xcu), 0x1u);
L_006013e6:; BB(0x006013e6);
    /* 006013e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006013e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006013e9: ret  */ FN_RET(0x006013c0); r_esp += 4; return;
}

