#include "protos.h"

void f_00601690(void) /* sciCycleRandom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601690);
    /* 00601690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601691: mov ebp, esp */ r_ebp = r_esp;
    /* 00601693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060169c: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x6016a1u); f_00600420();
    /* 006016a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006016a4: mov dword ptr [eax], 0x6d75e0 */ W32((u32)(r_eax), 0x6d75e0u);
    /* 006016aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006016ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006016af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006016b0: ret  */ FN_RET(0x00601690); r_esp += 4; return;
}

void f_006016e0(void) /* sciCycleRandom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006016e0);
    /* 006016e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006016e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006016e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006016e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006016e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006016ec: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 006016f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006016f2: jne 0x6016f6 */ if (!fZ) goto L_006016f6;
L_006016f4:; BB(0x006016f4);
    /* 006016f4: jmp 0x60171d */ goto L_0060171d;
L_006016f6:; BB(0x006016f6);
    /* 006016f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006016f9: call 0x601730 */ r_esp -= 4; W32(r_esp, 0x6016feu); f_00601730();
    /* 006016fe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00601701: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601704: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601705: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601708: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060170b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060170e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00601711: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601713: mov ecx, eax */ r_ecx = r_eax;
    /* 00601715: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0060171b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60171du); call_ind(t); }
L_0060171d:; BB(0x0060171d);
    /* 0060171d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060171f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601720: ret  */ FN_RET(0x006016e0); r_esp += 4; return;
}

