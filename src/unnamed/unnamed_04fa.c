#include "protos.h"

void f_004fa1a0(void) /* sub_4FA1A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa1a0);
    /* 004fa1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa1a7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004fa1ac: mov ecx, dword ptr [eax + 0x4f18] */ r_ecx = R32((u32)(r_eax+0x4f18u));
    /* 004fa1b2: mov edx, dword ptr [ecx*4 + 0x71ee04] */ r_edx = R32((u32)(r_ecx*4+0x71ee04u));
    /* 004fa1b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fa1bfu); f_00630f40();
    /* 004fa1bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa1c2: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa1c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa1c5: ret  */ FN_RET(0x004fa1a0); r_esp += 4; return;
}

void f_004fa2e0(void) /* sub_4FA2E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa2e0);
    /* 004fa2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa2e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa2e5: push 0x6a2767 */ { u32 v = 0x6a2767u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa2ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fa2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa2f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa2f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fa2f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa2fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa2fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fa2ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fa305: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fa308: push 0x7d4 */ { u32 v = 0x7d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa30d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fa312u); f_00686d82();
    /* 004fa312: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa315: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fa318: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fa31f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa323: je 0x4fa332 */ if (fZ) goto L_004fa332;
L_004fa325:; BB(0x004fa325);
    /* 004fa325: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fa328: call 0x479140 */ r_esp -= 4; W32(r_esp, 0x4fa32du); f_00479140();
    /* 004fa32d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fa330: jmp 0x4fa339 */ goto L_004fa339;
L_004fa332:; BB(0x004fa332);
    /* 004fa332: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004fa339:; BB(0x004fa339);
    /* 004fa339: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa33c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fa33f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fa346: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fa349: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fa34c: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 004fa352: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fa355: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004fa35b: call 0x4799e0 */ r_esp -= 4; W32(r_esp, 0x4fa360u); f_004799e0();
    /* 004fa360: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa363: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fa36a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa36b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa36d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa36e: ret  */ FN_RET(0x004fa2e0); r_esp += 4; return;
}

