#include "protos.h"

void f_00469e90(void) /* FoldButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469e90);
    /* 00469e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00469e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00469e97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469e9a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x469e9fu); f_00601a80();
    /* 00469e9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469ea2: mov dword ptr [eax], 0x6bb7bc */ W32((u32)(r_eax), 0x6bb7bcu);
    /* 00469ea8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469eab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00469eae: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00469eb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469eb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00469eb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469eba: ret 4 */ FN_RET(0x00469e90); r_esp += 8; return;
}

void f_00469ec0(void) /* FoldButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469ec0);
    /* 00469ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00469ec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00469ec6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00469ec9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00469ed0: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00469ed6: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x469edbu); f_0057ae30();
    /* 00469edb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469edd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469edf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469ee5: call 0x47aab0 */ r_esp -= 4; W32(r_esp, 0x469eeau); f_0047aab0();
    /* 00469eea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469eec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469eef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00469ef1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469ef4: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00469efa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x469efcu); call_ind(t); }
    /* 00469efc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469eff: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00469f05: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x469f0au); f_005f87d0();
    /* 00469f0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469f0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469f0e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469f11: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00469f17: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x469f1cu); f_00519a40();
    /* 00469f1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00469f1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469f1f: ret  */ FN_RET(0x00469ec0); r_esp += 4; return;
}

