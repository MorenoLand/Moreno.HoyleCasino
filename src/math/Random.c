#include "protos.h"

void f_006145e0(void) /* Random::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006145e0);
    /* 006145e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006145e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006145e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006145e5: push 0x6ab128 */ { u32 v = 0x6ab128u; r_esp -= 4; W32(r_esp, v); }
    /* 006145ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006145f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006145f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006145f2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006145f7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006145f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006145fa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006145fd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00614603: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00614606: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00614609: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x61460eu); f_0062aea0();
    /* 0061460e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614615: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00614618: mov dword ptr [eax], 0x6d8550 */ W32((u32)(r_eax), 0x6d8550u);
    /* 0061461e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614622: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00614625: call 0x614670 */ r_esp -= 4; W32(r_esp, 0x61462au); f_00614670();
    /* 0061462a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00614631: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00614634: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614637: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061463e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061463f: mov esp, ebp */ r_esp = r_ebp;
    /* 00614641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614642: ret 4 */ FN_RET(0x006145e0); r_esp += 8; return;
}

void f_006146a0(void) /* random::func_006146a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006146a0);
    /* 006146a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006146a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006146a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006146a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006146a9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006146ad: jne 0x6146cd */ if (!fZ) goto L_006146cd;
L_006146af:; BB(0x006146af);
    /* 006146af: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006146b3: jne 0x6146c9 */ if (!fZ) goto L_006146c9;
L_006146b5:; BB(0x006146b5);
    /* 006146b5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006146b7: push 0x6d855c */ { u32 v = 0x6d855cu; r_esp -= 4; W32(r_esp, v); }
    /* 006146bc: push 0x6d8554 */ { u32 v = 0x6d8554u; r_esp -= 4; W32(r_esp, v); }
    /* 006146c1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6146c6u); f_005e9f20();
    /* 006146c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006146c9:; BB(0x006146c9);
    /* 006146c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006146cb: jmp 0x614708 */ goto L_00614708;
L_006146cd:; BB(0x006146cd);
    /* 006146cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_006146d4:; BB(0x006146d4);
    /* 006146d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006146d7: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006146da: jbe 0x6146e9 */ if ((fC||fZ)) goto L_006146e9;
L_006146dc:; BB(0x006146dc);
    /* 006146dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006146df: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006146e1: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006146e4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006146e7: jmp 0x6146d4 */ goto L_006146d4;
L_006146e9:; BB(0x006146e9);
    /* 006146e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006146ec: call 0x614710 */ r_esp -= 4; W32(r_esp, 0x6146f1u); f_00614710();
    /* 006146f1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006146f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006146f7: and eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006146fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006146fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00614700: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00614703: jae 0x6146e9 */ if (!fC) goto L_006146e9;
L_00614705:; BB(0x00614705);
    /* 00614705: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_00614708:; BB(0x00614708);
    /* 00614708: mov esp, ebp */ r_esp = r_ebp;
    /* 0061470a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061470b: ret 4 */ FN_RET(0x006146a0); r_esp += 8; return;
}

