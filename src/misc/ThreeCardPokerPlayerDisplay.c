#include "protos.h"

void f_0053bb30(void) /* ThreeCardPokerPlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053bb30);
    /* 0053bb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb31: mov ebp, esp */ r_ebp = r_esp;
    /* 0053bb33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053bb36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053bb39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053bb3c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x53bb41u); f_005e9e20();
    /* 0053bb41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053bb44: mov dword ptr [eax], 0x6c5bdc */ W32((u32)(r_eax), 0x6c5bdcu);
    /* 0053bb4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053bb51: jmp 0x53bb5c */ goto L_0053bb5c;
L_0053bb53:; BB(0x0053bb53);
    /* 0053bb53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053bb56: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053bb59: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0053bb5c:; BB(0x0053bb5c);
    /* 0053bb5c: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053bb60: jge 0x53bb72 */ if ((fS==fO)) goto L_0053bb72;
L_0053bb62:; BB(0x0053bb62);
    /* 0053bb62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053bb65: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053bb68: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 0053bb70: jmp 0x53bb53 */ goto L_0053bb53;
L_0053bb72:; BB(0x0053bb72);
    /* 0053bb72: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053bb75: mov esp, ebp */ r_esp = r_ebp;
    /* 0053bb77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053bb78: ret  */ FN_RET(0x0053bb30); r_esp += 4; return;
}

void f_0053bb80(void) /* ThreeCardPokerPlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053bb80);
    /* 0053bb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb81: mov ebp, esp */ r_ebp = r_esp;
    /* 0053bb83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb85: push 0x6a4b8a */ { u32 v = 0x6a4b8au; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053bb90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb91: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053bb94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053bb99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053bb9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053bb9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053bba5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0053bba8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bbab: mov dword ptr [eax], 0x6c5bdc */ W32((u32)(r_eax), 0x6c5bdcu);
    /* 0053bbb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053bbb8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0053bbbf: jmp 0x53bbca */ goto L_0053bbca;
L_0053bbc1:; BB(0x0053bbc1);
    /* 0053bbc1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bbc4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053bbc7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0053bbca:; BB(0x0053bbca);
    /* 0053bbca: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053bbce: jge 0x53bc05 */ if ((fS==fO)) goto L_0053bc05;
L_0053bbd0:; BB(0x0053bbd0);
    /* 0053bbd0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bbd3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bbd6: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0053bbda: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053bbdd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bbe0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0053bbe3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bbe7: je 0x53bbfc */ if (fZ) goto L_0053bbfc;
L_0053bbe9:; BB(0x0053bbe9);
    /* 0053bbe9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bbeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bbee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053bbf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bbf3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053bbf5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53bbf7u); call_ind(t); }
    /* 0053bbf7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053bbfa: jmp 0x53bc03 */ goto L_0053bc03;
L_0053bbfc:; BB(0x0053bbfc);
    /* 0053bbfc: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0053bc03:; BB(0x0053bc03);
    /* 0053bc03: jmp 0x53bbc1 */ goto L_0053bbc1;
L_0053bc05:; BB(0x0053bc05);
    /* 0053bc05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053bc0c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bc0f: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x53bc14u); f_005e9e40();
    /* 0053bc14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053bc17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053bc1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053bc1f: mov esp, ebp */ r_esp = r_ebp;
    /* 0053bc21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053bc22: ret  */ FN_RET(0x0053bb80); r_esp += 4; return;
}

