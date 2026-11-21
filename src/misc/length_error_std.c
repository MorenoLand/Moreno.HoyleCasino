#include "protos.h"

void f_005bb750(void) /* length_error@std::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb750);
    /* 005bb750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb751: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb755: push 0x6a7fd2 */ { u32 v = 0x6a7fd2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb75a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bb760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb761: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb764: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bb769: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb76b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb76c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bb76f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bb775: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb77a: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005bb77d: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5bb783u); call_ind(t); }
    /* 005bb783: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb78a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005bb78d: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x5bb793u); call_ind(t); }
    /* 005bb793: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bb797: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 005bb79e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005bb7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb7a2: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005bb7a5: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5bb7abu); call_ind(t); }
    /* 005bb7ab: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb7af: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 005bb7b6: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb7bb: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005bb7be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb7bf: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5bb7c4u); f_00686fc0();
    /* 005bb7c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb7cb: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005bb7ce: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5bb7d4u); call_ind(t); }
    /* 005bb7d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb7d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb7de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb7df: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb7e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb7e2: ret  */ FN_RET(0x005bb750); r_esp += 4; return;
}

void f_005bb8a0(void) /* length_error@std::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb8a0);
    /* 005bb8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb8a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb8a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb8aa: mov dword ptr [eax], 0x6d1be0 */ W32((u32)(r_eax), 0x6d1be0u);
    /* 005bb8b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb8b3: mov dword ptr [ecx], 0x6d1bec */ W32((u32)(r_ecx), 0x6d1becu);
    /* 005bb8b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb8bc: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb8bf: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5bb8c5u); call_ind(t); }
    /* 005bb8c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb8c8: call dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); r_esp -= 4; W32(r_esp, 0x5bb8ceu); call_ind(t); }
    /* 005bb8ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bb8d1: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005bb8d4: je 0x5bb8e2 */ if (fZ) goto L_005bb8e2;
L_005bb8d6:; BB(0x005bb8d6);
    /* 005bb8d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb8d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8da: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5bb8dfu); f_00686cae();
    /* 005bb8df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb8e2:; BB(0x005bb8e2);
    /* 005bb8e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb8e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb8e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb8e8: ret 4 */ FN_RET(0x005bb8a0); r_esp += 8; return;
}

void f_005bb8f0(void) /* length_error@std::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb8f0);
    /* 005bb8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb8f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8f5: push 0x6a8002 */ { u32 v = 0x6a8002u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb8fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bb900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb901: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bb904: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bb909: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb90b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb90c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bb90f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bb915: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb91a: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005bb91d: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5bb923u); call_ind(t); }
    /* 005bb923: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb92a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005bb92d: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x5bb933u); call_ind(t); }
    /* 005bb933: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bb937: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 005bb93e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005bb941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb942: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005bb945: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5bb94bu); call_ind(t); }
    /* 005bb94b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb94f: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 005bb956: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb95b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005bb95e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb95f: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5bb964u); f_00686fc0();
    /* 005bb964: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb96b: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005bb96e: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5bb974u); call_ind(t); }
    /* 005bb974: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb977: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb97e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb97f: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb981: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb982: ret  */ FN_RET(0x005bb8f0); r_esp += 4; return;
}

void f_005bb990(void) /* length_error@std::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb990);
    /* 005bb990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb991: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb995: push 0x6a8029 */ { u32 v = 0x6a8029u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb99a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bb9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb9a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb9a2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bb9a7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bb9a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb9aa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bb9ad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bb9b3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bb9b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bb9b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb9ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bb9bd: call dword ptr [0x6b2210] */ { u32 t = R32((u32)(0x6b2210u)); r_esp -= 4; W32(r_esp, 0x5bb9c3u); call_ind(t); }
    /* 005bb9c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb9ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bb9cd: mov dword ptr [ecx], 0x6d1bec */ W32((u32)(r_ecx), 0x6d1becu);
    /* 005bb9d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bb9d6: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bb9d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb9da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bb9dd: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb9e0: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5bb9e6u); call_ind(t); }
    /* 005bb9e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb9ed: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bb9f0: mov dword ptr [eax], 0x6d1be0 */ W32((u32)(r_eax), 0x6d1be0u);
    /* 005bb9f6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bb9f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb9fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bba03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bba04: mov esp, ebp */ r_esp = r_ebp;
    /* 005bba06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bba07: ret 4 */ FN_RET(0x005bb990); r_esp += 8; return;
}

void f_005bee10(void) /* length_error@std::ctor_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bee10);
    /* 005bee10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bee11: mov ebp, esp */ r_ebp = r_esp;
    /* 005bee13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bee15: push 0x6a8282 */ { u32 v = 0x6a8282u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bee21: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bee24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bee29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bee2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bee2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bee2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bee35: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bee3a: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005bee3d: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5bee43u); call_ind(t); }
    /* 005bee43: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bee4a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005bee4d: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x5bee53u); call_ind(t); }
    /* 005bee53: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bee57: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 005bee5e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005bee61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bee62: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005bee65: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5bee6bu); call_ind(t); }
    /* 005bee6b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bee6f: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 005bee76: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bee7b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005bee7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bee7f: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5bee84u); f_00686fc0();
    /* 005bee84: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bee8b: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005bee8e: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5bee94u); call_ind(t); }
    /* 005bee94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bee97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bee9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bee9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005beea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beea2: ret  */ FN_RET(0x005bee10); r_esp += 4; return;
}

void f_005c06f0(void) /* length_error@std::ctor_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c06f0);
    /* 005c06f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c06f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c06f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c06f5: push 0x6a83d2 */ { u32 v = 0x6a83d2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c06fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c0700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0701: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0704: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c0709: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c070b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c070c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c070f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c0715: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c071a: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c071d: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5c0723u); call_ind(t); }
    /* 005c0723: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c072a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c072d: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x5c0733u); call_ind(t); }
    /* 005c0733: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c0737: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 005c073e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005c0741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0742: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005c0745: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5c074bu); call_ind(t); }
    /* 005c074b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c074f: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 005c0756: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c075b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c075e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c075f: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5c0764u); f_00686fc0();
    /* 005c0764: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c076b: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c076e: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5c0774u); call_ind(t); }
    /* 005c0774: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0777: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c077e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c077f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0782: ret  */ FN_RET(0x005c06f0); r_esp += 4; return;
}

void f_005c6020(void) /* length_error@std::ctor_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6020);
    /* 005c6020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6021: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6023: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6025: push 0x6a8752 */ { u32 v = 0x6a8752u; r_esp -= 4; W32(r_esp, v); }
    /* 005c602a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6030: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6031: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6034: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6039: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c603b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c603c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c603f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6045: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c604a: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c604d: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5c6053u); call_ind(t); }
    /* 005c6053: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c605a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c605d: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x5c6063u); call_ind(t); }
    /* 005c6063: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c6067: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 005c606e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005c6071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6072: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005c6075: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5c607bu); call_ind(t); }
    /* 005c607b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c607f: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 005c6086: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c608b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c608e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c608f: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5c6094u); f_00686fc0();
    /* 005c6094: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c609b: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c609e: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5c60a4u); call_ind(t); }
    /* 005c60a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c60a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c60ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c60af: mov esp, ebp */ r_esp = r_ebp;
    /* 005c60b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c60b2: ret  */ FN_RET(0x005c6020); r_esp += 4; return;
}

void f_005c60c0(void) /* length_error@std::ctor_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c60c0);
    /* 005c60c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c60c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c60c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c60c5: push 0x6a8782 */ { u32 v = 0x6a8782u; r_esp -= 4; W32(r_esp, v); }
    /* 005c60ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c60d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c60d1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c60d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c60d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c60db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c60dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c60df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c60e5: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c60ea: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c60ed: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5c60f3u); call_ind(t); }
    /* 005c60f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c60fa: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c60fd: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x5c6103u); call_ind(t); }
    /* 005c6103: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c6107: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 005c610e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005c6111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6112: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005c6115: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5c611bu); call_ind(t); }
    /* 005c611b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c611f: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 005c6126: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c612b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c612e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c612f: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5c6134u); f_00686fc0();
    /* 005c6134: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c613b: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c613e: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5c6144u); call_ind(t); }
    /* 005c6144: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6147: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c614e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c614f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6152: ret  */ FN_RET(0x005c60c0); r_esp += 4; return;
}

void f_005c6950(void) /* length_error@std::ctor_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c6950);
    /* 005c6950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6951: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6955: push 0x6a87b2 */ { u32 v = 0x6a87b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c695a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6961: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c6969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c696b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c696c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c696f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c6975: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c697a: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c697d: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5c6983u); call_ind(t); }
    /* 005c6983: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c698a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c698d: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x5c6993u); call_ind(t); }
    /* 005c6993: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c6997: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 005c699e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005c69a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c69a2: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005c69a5: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5c69abu); call_ind(t); }
    /* 005c69ab: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c69af: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 005c69b6: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c69bb: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c69be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c69bf: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x5c69c4u); f_00686fc0();
    /* 005c69c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c69cb: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005c69ce: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5c69d4u); call_ind(t); }
    /* 005c69d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c69d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c69de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c69df: mov esp, ebp */ r_esp = r_ebp;
    /* 005c69e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c69e2: ret  */ FN_RET(0x005c6950); r_esp += 4; return;
}

void f_006126e0(void) /* length_error@std::ctor_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006126e0);
    /* 006126e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006126e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006126e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006126e5: push 0x6aafc2 */ { u32 v = 0x6aafc2u; r_esp -= 4; W32(r_esp, v); }
    /* 006126ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006126f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006126f1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006126f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006126f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006126fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006126fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006126ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00612705: push 0x6d1bf4 */ { u32 v = 0x6d1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061270a: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 0061270d: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x612713u); call_ind(t); }
    /* 00612713: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061271a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0061271d: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x612723u); call_ind(t); }
    /* 00612723: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00612727: mov dword ptr [ebp - 0x34], 0x6d1bec */ W32((u32)(r_ebp+0xffffffccu), 0x6d1becu);
    /* 0061272e: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 00612731: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612732: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 00612735: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x61273bu); call_ind(t); }
    /* 0061273b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061273f: mov dword ptr [ebp - 0x34], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffccu), 0x6d1be0u);
    /* 00612746: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061274b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0061274e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061274f: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x612754u); f_00686fc0();
    /* 00612754: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061275b: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 0061275e: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x612764u); call_ind(t); }
    /* 00612764: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612767: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061276e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061276f: mov esp, ebp */ r_esp = r_ebp;
    /* 00612771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612772: ret  */ FN_RET(0x006126e0); r_esp += 4; return;
}

void f_0068d070(void) /* length_error@std::ctor_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d070);
    /* 0068d070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d071: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068d075: push 0x6ae0c9 */ { u32 v = 0x6ae0c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068d080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d081: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d087: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068d08c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068d08e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d08f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068d092: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068d098: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0068d09e: mov dword ptr [ebp - 0x5c], 0x6666666 */ W32((u32)(r_ebp+0xffffffa4u), 0x6666666u);
    /* 0068d0a5: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068d0a9: jbe 0x68d0b6 */ if ((fC||fZ)) goto L_0068d0b6;
L_0068d0ab:; BB(0x0068d0ab);
    /* 0068d0ab: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0068d0ae: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0068d0b4: jmp 0x68d0c0 */ goto L_0068d0c0;
L_0068d0b6:; BB(0x0068d0b6);
    /* 0068d0b6: mov dword ptr [ebp - 0xc4], 1 */ W32((u32)(r_ebp+0xffffff3cu), 0x1u);
L_0068d0c0:; BB(0x0068d0c0);
    /* 0068d0c0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0068d0c6: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068d0c9: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d0cf: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068d0d2: ja 0x68d11a */ if ((!fC&&!fZ)) goto L_0068d11a;
L_0068d0d4:; BB(0x0068d0d4);
    /* 0068d0d4: push 0x6e5660 */ { u32 v = 0x6e5660u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d0d9: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0068d0dc: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x68d0e2u); call_ind(t); }
    /* 0068d0e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068d0e9: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0068d0ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d0ed: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0068d0f0: call 0x68d440 */ r_esp -= 4; W32(r_esp, 0x68d0f5u); f_0068d440();
    /* 0068d0f5: mov dword ptr [ebp - 0x3c], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffc4u), 0x6d1be0u);
    /* 0068d0fc: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068d101: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0068d104: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d105: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x68d10au); f_00686fc0();
    /* 0068d10a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068d111: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0068d114: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68d11au); call_ind(t); }
L_0068d11a:; BB(0x0068d11a);
    /* 0068d11a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d11c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068d11f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d120: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d126: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d129: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d12a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d12d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d12e: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d134: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d137: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d138: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d13e: call 0x68e670 */ r_esp -= 4; W32(r_esp, 0x68d143u); f_0068e670();
    /* 0068d143: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068d146: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d14c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068d14f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068d152: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d158: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0068d15b: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d161: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068d164: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d167: jne 0x68d19d */ if (!fZ) goto L_0068d19d;
L_0068d169:; BB(0x0068d169);
    /* 0068d169: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d16f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d172: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d175: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068d178: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d17e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d181: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0068d184: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0068d187: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d18a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d18c: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d192: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d195: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d198: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0068d19b: jmp 0x68d202 */ goto L_0068d202;
L_0068d19d:; BB(0x0068d19d);
    /* 0068d19d: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0068d1a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d1a3: je 0x68d1d9 */ if (fZ) goto L_0068d1d9;
L_0068d1a5:; BB(0x0068d1a5);
    /* 0068d1a5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068d1a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d1ab: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d1ad: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d1b3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d1b6: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0068d1b9: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068d1bc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d1bf: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d1c1: jne 0x68d1d7 */ if (!fZ) goto L_0068d1d7;
L_0068d1c3:; BB(0x0068d1c3);
    /* 0068d1c3: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d1c9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d1cc: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0068d1cf: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0068d1d2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d1d5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0068d1d7:; BB(0x0068d1d7);
    /* 0068d1d7: jmp 0x68d202 */ goto L_0068d202;
L_0068d1d9:; BB(0x0068d1d9);
    /* 0068d1d9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068d1dc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d1df: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0068d1e2: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d1e8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d1eb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d1ee: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d1f1: jne 0x68d202 */ if (!fZ) goto L_0068d202;
L_0068d1f3:; BB(0x0068d1f3);
    /* 0068d1f3: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d1f9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d1fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d1ff: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_0068d202:; BB(0x0068d202);
    /* 0068d202: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d205: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0068d208:; BB(0x0068d208);
    /* 0068d208: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d20b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d20e: movsx eax, byte ptr [edx + 0x34] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x34u));
    /* 0068d212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d214: jne 0x68d3d7 */ if (!fZ) goto L_0068d3d7;
L_0068d21a:; BB(0x0068d21a);
    /* 0068d21a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d21d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d220: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068d223: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0068d226: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0068d229: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d22b: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0068d22e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d231: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0068d234: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0068d237: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d239: jne 0x68d2fa */ if (!fZ) goto L_0068d2fa;
L_0068d23f:; BB(0x0068d23f);
    /* 0068d23f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d242: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d245: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068d248: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0068d24b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068d24e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068d250: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068d253: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0068d256: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068d259: movsx edx, byte ptr [ecx + 0x34] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x34u));
    /* 0068d25d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d25f: jne 0x68d295 */ if (!fZ) goto L_0068d295;
L_0068d261:; BB(0x0068d261);
    /* 0068d261: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d264: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d267: mov byte ptr [ecx + 0x34], 1 */ W8((u32)(r_ecx+0x34u), 0x1u);
    /* 0068d26b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d26e: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068d272: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d275: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d278: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068d27b: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0068d27e: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0068d281: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d283: mov byte ptr [eax + 0x34], 0 */ W8((u32)(r_eax+0x34u), 0x0u);
    /* 0068d287: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d28a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d28d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d290: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068d293: jmp 0x68d2f5 */ goto L_0068d2f5;
L_0068d295:; BB(0x0068d295);
    /* 0068d295: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d298: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d29b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d29e: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d2a1: jne 0x68d2bb */ if (!fZ) goto L_0068d2bb;
L_0068d2a3:; BB(0x0068d2a3);
    /* 0068d2a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d2a6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d2a9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068d2ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d2af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d2b0: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d2b6: call 0x68e3c0 */ r_esp -= 4; W32(r_esp, 0x68d2bbu); f_0068e3c0();
L_0068d2bb:; BB(0x0068d2bb);
    /* 0068d2bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d2be: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d2c1: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068d2c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d2c8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d2cb: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068d2ce: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0068d2d4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0068d2da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d2dc: mov byte ptr [eax + 0x34], 0 */ W8((u32)(r_eax+0x34u), 0x0u);
    /* 0068d2e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d2e3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d2e6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d2e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d2ea: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d2f0: call 0x68e470 */ r_esp -= 4; W32(r_esp, 0x68d2f5u); f_0068e470();
L_0068d2f5:; BB(0x0068d2f5);
    /* 0068d2f5: jmp 0x68d3d2 */ goto L_0068d3d2;
L_0068d2fa:; BB(0x0068d2fa);
    /* 0068d2fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d2fd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d300: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068d303: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0068d309: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0068d30f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d311: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0068d317: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0068d31d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d31f: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0068d322: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068d325: movsx edx, byte ptr [ecx + 0x34] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x34u));
    /* 0068d329: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d32b: jne 0x68d367 */ if (!fZ) goto L_0068d367;
L_0068d32d:; BB(0x0068d32d);
    /* 0068d32d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d330: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d333: mov byte ptr [ecx + 0x34], 1 */ W8((u32)(r_ecx+0x34u), 0x1u);
    /* 0068d337: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d33a: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068d33e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d341: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d344: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068d347: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0068d34d: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0068d353: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068d355: mov byte ptr [eax + 0x34], 0 */ W8((u32)(r_eax+0x34u), 0x0u);
    /* 0068d359: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d35c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d35f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d362: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068d365: jmp 0x68d3d2 */ goto L_0068d3d2;
L_0068d367:; BB(0x0068d367);
    /* 0068d367: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d36a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d36d: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0068d373: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0068d379: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d37c: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d37e: jne 0x68d398 */ if (!fZ) goto L_0068d398;
L_0068d380:; BB(0x0068d380);
    /* 0068d380: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d383: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d386: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068d389: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d38c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d38d: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d393: call 0x68e470 */ r_esp -= 4; W32(r_esp, 0x68d398u); f_0068e470();
L_0068d398:; BB(0x0068d398);
    /* 0068d398: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d39b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d39e: mov byte ptr [eax + 0x34], 1 */ W8((u32)(r_eax+0x34u), 0x1u);
    /* 0068d3a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d3a5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d3a8: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068d3ab: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0068d3b1: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068d3b7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d3b9: mov byte ptr [ecx + 0x34], 0 */ W8((u32)(r_ecx+0x34u), 0x0u);
    /* 0068d3bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d3c0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d3c3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d3c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d3c7: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d3cd: call 0x68e3c0 */ r_esp -= 4; W32(r_esp, 0x68d3d2u); f_0068e3c0();
L_0068d3d2:; BB(0x0068d3d2);
    /* 0068d3d2: jmp 0x68d208 */ goto L_0068d208;
L_0068d3d7:; BB(0x0068d3d7);
    /* 0068d3d7: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d3dd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d3e0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068d3e3: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0068d3e9: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0068d3ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068d3f1: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068d3f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d3f8: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0068d3fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068d401: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d404: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068d407: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d40e: jne 0x68d416 */ if (!fZ) goto L_0068d416;
L_0068d410:; BB(0x0068d410);
    /* 0068d410: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68d416u); call_ind(t); }
L_0068d416:; BB(0x0068d416);
    /* 0068d416: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d419: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d41f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d421: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068d424: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d427: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068d42e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d42f: mov esp, ebp */ r_esp = r_ebp;
    /* 0068d431: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d432: ret 0x10 */ FN_RET(0x0068d070); r_esp += 20; return;
}

void f_0068d820(void) /* length_error@std::ctor_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d820);
    /* 0068d820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d821: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068d825: push 0x6ae149 */ { u32 v = 0x6ae149u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d82a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068d830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d831: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068d837: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068d83c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068d83e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d83f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068d842: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068d848: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0068d84e: mov dword ptr [ebp - 0x5c], 0x4924924 */ W32((u32)(r_ebp+0xffffffa4u), 0x4924924u);
    /* 0068d855: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068d859: jbe 0x68d866 */ if ((fC||fZ)) goto L_0068d866;
L_0068d85b:; BB(0x0068d85b);
    /* 0068d85b: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0068d85e: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0068d864: jmp 0x68d870 */ goto L_0068d870;
L_0068d866:; BB(0x0068d866);
    /* 0068d866: mov dword ptr [ebp - 0xc4], 1 */ W32((u32)(r_ebp+0xffffff3cu), 0x1u);
L_0068d870:; BB(0x0068d870);
    /* 0068d870: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0068d876: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068d879: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d87f: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068d882: ja 0x68d8ca */ if ((!fC&&!fZ)) goto L_0068d8ca;
L_0068d884:; BB(0x0068d884);
    /* 0068d884: push 0x6e5660 */ { u32 v = 0x6e5660u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d889: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0068d88c: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x68d892u); call_ind(t); }
    /* 0068d892: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068d899: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0068d89c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d89d: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0068d8a0: call 0x68d440 */ r_esp -= 4; W32(r_esp, 0x68d8a5u); f_0068d440();
    /* 0068d8a5: mov dword ptr [ebp - 0x3c], 0x6d1be0 */ W32((u32)(r_ebp+0xffffffc4u), 0x6d1be0u);
    /* 0068d8ac: push 0x6fc53c */ { u32 v = 0x6fc53cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8b1: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0068d8b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8b5: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x68d8bau); f_00686fc0();
    /* 0068d8ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068d8c1: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0068d8c4: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68d8cau); call_ind(t); }
L_0068d8ca:; BB(0x0068d8ca);
    /* 0068d8ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8cc: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068d8cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8d0: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d8d6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d8d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8da: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d8dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8de: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d8e4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d8e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d8e8: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d8ee: call 0x68ecb0 */ r_esp -= 4; W32(r_esp, 0x68d8f3u); f_0068ecb0();
    /* 0068d8f3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068d8f6: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d8fc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068d8ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068d902: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d908: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0068d90b: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d911: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068d914: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d917: jne 0x68d94d */ if (!fZ) goto L_0068d94d;
L_0068d919:; BB(0x0068d919);
    /* 0068d919: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d91f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d922: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d925: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068d928: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d92e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d931: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0068d934: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0068d937: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d93a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d93c: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d942: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d945: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d948: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0068d94b: jmp 0x68d9b2 */ goto L_0068d9b2;
L_0068d94d:; BB(0x0068d94d);
    /* 0068d94d: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0068d951: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d953: je 0x68d989 */ if (fZ) goto L_0068d989;
L_0068d955:; BB(0x0068d955);
    /* 0068d955: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068d958: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d95b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068d95d: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d963: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d966: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0068d969: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068d96c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d96f: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d971: jne 0x68d987 */ if (!fZ) goto L_0068d987;
L_0068d973:; BB(0x0068d973);
    /* 0068d973: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d979: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d97c: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0068d97f: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0068d982: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d985: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0068d987:; BB(0x0068d987);
    /* 0068d987: jmp 0x68d9b2 */ goto L_0068d9b2;
L_0068d989:; BB(0x0068d989);
    /* 0068d989: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068d98c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d98f: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0068d992: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d998: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d99b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068d99e: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d9a1: jne 0x68d9b2 */ if (!fZ) goto L_0068d9b2;
L_0068d9a3:; BB(0x0068d9a3);
    /* 0068d9a3: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0068d9a9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068d9ac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d9af: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_0068d9b2:; BB(0x0068d9b2);
    /* 0068d9b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d9b5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0068d9b8:; BB(0x0068d9b8);
    /* 0068d9b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d9bb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d9be: movsx eax, byte ptr [edx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x44u));
    /* 0068d9c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d9c4: jne 0x68db87 */ if (!fZ) goto L_0068db87;
L_0068d9ca:; BB(0x0068d9ca);
    /* 0068d9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d9cd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068d9d0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068d9d3: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0068d9d6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0068d9d9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068d9db: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0068d9de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d9e1: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0068d9e4: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0068d9e7: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d9e9: jne 0x68daaa */ if (!fZ) goto L_0068daaa;
L_0068d9ef:; BB(0x0068d9ef);
    /* 0068d9ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068d9f2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068d9f5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068d9f8: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0068d9fb: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068d9fe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068da00: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068da03: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0068da06: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068da09: movsx edx, byte ptr [ecx + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x44u));
    /* 0068da0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068da0f: jne 0x68da45 */ if (!fZ) goto L_0068da45;
L_0068da11:; BB(0x0068da11);
    /* 0068da11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da14: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068da17: mov byte ptr [ecx + 0x44], 1 */ W8((u32)(r_ecx+0x44u), 0x1u);
    /* 0068da1b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068da1e: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068da22: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da25: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068da28: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068da2b: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0068da2e: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0068da31: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068da33: mov byte ptr [eax + 0x44], 0 */ W8((u32)(r_eax+0x44u), 0x0u);
    /* 0068da37: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da3a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068da3d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068da40: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068da43: jmp 0x68daa5 */ goto L_0068daa5;
L_0068da45:; BB(0x0068da45);
    /* 0068da45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da48: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068da4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da4e: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068da51: jne 0x68da6b */ if (!fZ) goto L_0068da6b;
L_0068da53:; BB(0x0068da53);
    /* 0068da53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da56: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068da59: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068da5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068da60: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068da66: call 0x68eb50 */ r_esp -= 4; W32(r_esp, 0x68da6bu); f_0068eb50();
L_0068da6b:; BB(0x0068da6b);
    /* 0068da6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da6e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068da71: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068da75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da78: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068da7b: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068da7e: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0068da84: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0068da8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068da8c: mov byte ptr [eax + 0x44], 0 */ W8((u32)(r_eax+0x44u), 0x0u);
    /* 0068da90: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068da93: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068da96: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068da99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068da9a: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068daa0: call 0x68ec00 */ r_esp -= 4; W32(r_esp, 0x68daa5u); f_0068ec00();
L_0068daa5:; BB(0x0068daa5);
    /* 0068daa5: jmp 0x68db82 */ goto L_0068db82;
L_0068daaa:; BB(0x0068daaa);
    /* 0068daaa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068daad: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068dab0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068dab3: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0068dab9: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0068dabf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068dac1: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0068dac7: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0068dacd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068dacf: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0068dad2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068dad5: movsx edx, byte ptr [ecx + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x44u));
    /* 0068dad9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dadb: jne 0x68db17 */ if (!fZ) goto L_0068db17;
L_0068dadd:; BB(0x0068dadd);
    /* 0068dadd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068dae0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dae3: mov byte ptr [ecx + 0x44], 1 */ W8((u32)(r_ecx+0x44u), 0x1u);
    /* 0068dae7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068daea: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068daee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068daf1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068daf4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068daf7: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0068dafd: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0068db03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068db05: mov byte ptr [eax + 0x44], 0 */ W8((u32)(r_eax+0x44u), 0x0u);
    /* 0068db09: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db0c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068db0f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068db12: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068db15: jmp 0x68db82 */ goto L_0068db82;
L_0068db17:; BB(0x0068db17);
    /* 0068db17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db1a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068db1d: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0068db23: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0068db29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db2c: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068db2e: jne 0x68db48 */ if (!fZ) goto L_0068db48;
L_0068db30:; BB(0x0068db30);
    /* 0068db30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db33: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068db36: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068db39: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068db3d: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068db43: call 0x68ec00 */ r_esp -= 4; W32(r_esp, 0x68db48u); f_0068ec00();
L_0068db48:; BB(0x0068db48);
    /* 0068db48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db4b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068db4e: mov byte ptr [eax + 0x44], 1 */ W8((u32)(r_eax+0x44u), 0x1u);
    /* 0068db52: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db55: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068db58: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068db5b: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0068db61: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068db67: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068db69: mov byte ptr [ecx + 0x44], 0 */ W8((u32)(r_ecx+0x44u), 0x0u);
    /* 0068db6d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068db70: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068db73: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068db76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068db77: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068db7d: call 0x68eb50 */ r_esp -= 4; W32(r_esp, 0x68db82u); f_0068eb50();
L_0068db82:; BB(0x0068db82);
    /* 0068db82: jmp 0x68d9b8 */ goto L_0068d9b8;
L_0068db87:; BB(0x0068db87);
    /* 0068db87: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068db8d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068db90: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068db93: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0068db99: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0068db9f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068dba1: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068dba5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068dba8: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0068dbae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068dbb1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068dbb4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068dbb7: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dbbe: jne 0x68dbc6 */ if (!fZ) goto L_0068dbc6;
L_0068dbc0:; BB(0x0068dbc0);
    /* 0068dbc0: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68dbc6u); call_ind(t); }
L_0068dbc6:; BB(0x0068dbc6);
    /* 0068dbc6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068dbc9: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0068dbcf: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068dbd1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068dbd4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068dbd7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068dbde: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068dbdf: mov esp, ebp */ r_esp = r_ebp;
    /* 0068dbe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068dbe2: ret 0x10 */ FN_RET(0x0068d820); r_esp += 20; return;
}

