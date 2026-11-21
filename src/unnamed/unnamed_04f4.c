#include "protos.h"

void f_004f4200(void) /* sub_4F4200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f4200);
    /* 004f4200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4201: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f4207: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f420a: mov byte ptr [eax + 1], 0 */ W8((u32)(r_eax+0x1u), 0x0u);
    /* 004f420e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4211: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 004f4218: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f421b: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 004f4222: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4225: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 004f422c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f422f: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 004f4236: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4239: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 004f4240: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4243: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 004f424a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f424d: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 004f4254: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4257: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 004f425e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4261: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 004f4268: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f426b: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 004f4272: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4275: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 004f427c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f427f: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 004f4286: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4289: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 004f4290: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4293: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 004f429a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f429d: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 004f42a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42a7: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 004f42ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42b1: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 004f42b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42bb: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 004f42c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42c5: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 004f42cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42cf: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004f42d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42d9: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 004f42e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42e6: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 004f42f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42f3: mov word ptr [edx + 6], 0 */ W16((u32)(r_edx+0x6u), 0x0u);
    /* 004f42f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f42fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004f42fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f42ff: ret  */ FN_RET(0x004f4200); r_esp += 4; return;
}

void f_004f4300(void) /* sub_4F4300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f4300);
    /* 004f4300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4301: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f4307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f430a: call 0x4f9760 */ r_esp -= 4; W32(r_esp, 0x4f430fu); f_004f9760();
    /* 004f430f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4311: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4312: ret  */ FN_RET(0x004f4300); r_esp += 4; return;
}

