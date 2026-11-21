#include "protos.h"

void f_006014a0(void) /* sciCycleToggle::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006014a0);
    /* 006014a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006014a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006014a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006014a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006014a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014ac: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 006014b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006014b2: jne 0x6014b6 */ if (!fZ) goto L_006014b6;
L_006014b4:; BB(0x006014b4);
    /* 006014b4: jmp 0x60150d */ goto L_0060150d;
L_006014b6:; BB(0x006014b6);
    /* 006014b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006014bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014be: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006014c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6014c3u); call_ind(t); }
    /* 006014c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006014c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006014c8: jne 0x6014cc */ if (!fZ) goto L_006014cc;
L_006014ca:; BB(0x006014ca);
    /* 006014ca: jmp 0x60150d */ goto L_0060150d;
L_006014cc:; BB(0x006014cc);
    /* 006014cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014cf: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 006014d2: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x6014d7u); f_005eb220();
    /* 006014d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014da: cmp eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006014dd: jne 0x6014ea */ if (!fZ) goto L_006014ea;
L_006014df:; BB(0x006014df);
    /* 006014df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014e2: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006014e5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006014e8: jmp 0x6014f3 */ goto L_006014f3;
L_006014ea:; BB(0x006014ea);
    /* 006014ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014ed: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006014f0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006014f3:; BB(0x006014f3);
    /* 006014f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006014f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006014f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006014fa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006014fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601500: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00601503: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601505: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0060150b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60150du); call_ind(t); }
L_0060150d:; BB(0x0060150d);
    /* 0060150d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060150f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601510: ret  */ FN_RET(0x006014a0); r_esp += 4; return;
}

void f_006019e0(void) /* sciCycleToggle::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006019e0);
    /* 006019e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006019e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006019e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006019e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006019e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006019ea: mov dword ptr [eax], 0x6d75a8 */ W32((u32)(r_eax), 0x6d75a8u);
    /* 006019f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006019f3: call 0x6004c0 */ r_esp -= 4; W32(r_esp, 0x6019f8u); f_006004c0();
    /* 006019f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006019fb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006019fe: je 0x601a0c */ if (fZ) goto L_00601a0c;
L_00601a00:; BB(0x00601a00);
    /* 00601a00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601a03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601a04: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x601a09u); f_00686cae();
    /* 00601a09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00601a0c:; BB(0x00601a0c);
    /* 00601a0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601a0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00601a11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601a12: ret 4 */ FN_RET(0x006019e0); r_esp += 8; return;
}

