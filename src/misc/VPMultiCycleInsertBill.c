#include "protos.h"

void f_00563370(void) /* VPMultiCycleInsertBill::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563370);
    /* 00563370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563371: mov ebp, esp */ r_ebp = r_esp;
    /* 00563373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563377: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056337a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056337b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056337e: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x563383u); f_00600a70();
    /* 00563383: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563386: mov dword ptr [ecx], 0x6c98d0 */ W32((u32)(r_ecx), 0x6c98d0u);
    /* 0056338c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056338f: mov esp, ebp */ r_esp = r_ebp;
    /* 00563391: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563392: ret 4 */ FN_RET(0x00563370); r_esp += 8; return;
}

void f_005633c0(void) /* VPMultiCycleInsertBill::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005633c0);
    /* 005633c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005633c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005633c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005633c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005633c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005633c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005633cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005633cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005633d0: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x5633d5u); f_006004e0();
    /* 005633d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005633d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005633da: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005633dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005633e0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005633e3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005633e5: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005633eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5633edu); call_ind(t); }
    /* 005633ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005633f0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005633f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005633f6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005633f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005633fb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005633fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563400u); call_ind(t); }
    /* 00563400: mov esp, ebp */ r_esp = r_ebp;
    /* 00563402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563403: ret 8 */ FN_RET(0x005633c0); r_esp += 12; return;
}

void f_00563410(void) /* VPMultiCycleInsertBill::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563410);
    /* 00563410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563411: mov ebp, esp */ r_ebp = r_esp;
    /* 00563413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056341a: call 0x600b30 */ r_esp -= 4; W32(r_esp, 0x56341fu); f_00600b30();
    /* 0056341f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563422: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00563425: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563428: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056342b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056342d: mov ecx, eax */ r_ecx = r_eax;
    /* 0056342f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00563432: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563434u); call_ind(t); }
    /* 00563434: mov esp, ebp */ r_esp = r_ebp;
    /* 00563436: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563437: ret  */ FN_RET(0x00563410); r_esp += 4; return;
}

