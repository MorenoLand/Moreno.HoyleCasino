#include "protos.h"

void f_005bb7f0(void) /* logic_error@std::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb7f0);
    /* 005bb7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb7f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb7f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb7f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb7fa: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb7fd: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x5bb803u); call_ind(t); }
    /* 005bb803: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb805: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb806: ret  */ FN_RET(0x005bb7f0); r_esp += 4; return;
}

void f_005bb810(void) /* logic_error@std::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb810);
    /* 005bb810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb811: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb817: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb81a: mov dword ptr [eax], 0x6d1bec */ W32((u32)(r_eax), 0x6d1becu);
    /* 005bb820: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb823: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb826: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5bb82cu); call_ind(t); }
    /* 005bb82c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb82f: call dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); r_esp -= 4; W32(r_esp, 0x5bb835u); call_ind(t); }
    /* 005bb835: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bb838: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005bb83b: je 0x5bb849 */ if (fZ) goto L_005bb849;
L_005bb83d:; BB(0x005bb83d);
    /* 005bb83d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb841: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5bb846u); f_00686cae();
    /* 005bb846: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb849:; BB(0x005bb849);
    /* 005bb849: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb84c: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb84f: ret 4 */ FN_RET(0x005bb810); r_esp += 8; return;
}

void f_005bb860(void) /* logic_error@std::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bb860);
    /* 005bb860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bb861: mov ebp, esp */ r_ebp = r_esp;
    /* 005bb863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bb867: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb86a: mov dword ptr [eax], 0x6d1be0 */ W32((u32)(r_eax), 0x6d1be0u);
    /* 005bb870: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb873: mov dword ptr [ecx], 0x6d1bec */ W32((u32)(r_ecx), 0x6d1becu);
    /* 005bb879: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb87c: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb87f: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5bb885u); call_ind(t); }
    /* 005bb885: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bb888: call dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); r_esp -= 4; W32(r_esp, 0x5bb88eu); call_ind(t); }
    /* 005bb88e: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb891: ret  */ FN_RET(0x005bb860); r_esp += 4; return;
}

void f_005bba10(void) /* logic_error@std::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bba10);
    /* 005bba10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bba11: mov ebp, esp */ r_ebp = r_esp;
    /* 005bba13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bba15: push 0x6a8059 */ { u32 v = 0x6a8059u; r_esp -= 4; W32(r_esp, v); }
    /* 005bba1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bba20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bba21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bba22: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bba27: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bba29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bba2a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bba2d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bba33: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bba36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bba39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bba3a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bba3d: call dword ptr [0x6b2210] */ { u32 t = R32((u32)(0x6b2210u)); r_esp -= 4; W32(r_esp, 0x5bba43u); call_ind(t); }
    /* 005bba43: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bba4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bba4d: mov dword ptr [ecx], 0x6d1bec */ W32((u32)(r_ecx), 0x6d1becu);
    /* 005bba53: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bba56: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bba59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bba5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bba5d: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bba60: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x5bba66u); call_ind(t); }
    /* 005bba66: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bba6d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bba70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bba73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bba7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bba7b: mov esp, ebp */ r_esp = r_ebp;
    /* 005bba7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bba7e: ret 4 */ FN_RET(0x005bba10); r_esp += 8; return;
}

void f_0068d440(void) /* logic_error@std::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068d440);
    /* 0068d440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d441: mov ebp, esp */ r_ebp = r_esp;
    /* 0068d443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068d445: push 0x6ae0f9 */ { u32 v = 0x6ae0f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d44a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068d450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d451: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d452: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068d457: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068d459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d45a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068d45d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068d463: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068d466: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d469: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x68d46fu); call_ind(t); }
    /* 0068d46f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068d476: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d479: mov dword ptr [eax], 0x6d1bec */ W32((u32)(r_eax), 0x6d1becu);
    /* 0068d47f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068d482: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d483: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d486: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068d489: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68d48fu); call_ind(t); }
    /* 0068d48f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068d496: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068d499: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068d49c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068d4a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d4a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0068d4a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d4a7: ret 4 */ FN_RET(0x0068d440); r_esp += 8; return;
}

void f_0068e2b0(void) /* logic_error@std::ctor_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e2b0);
    /* 0068e2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e2b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068e2b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e2ba: mov dword ptr [eax], 0x6e5678 */ W32((u32)(r_eax), 0x6e5678u);
    /* 0068e2c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e2c3: mov dword ptr [ecx], 0x6d1bec */ W32((u32)(r_ecx), 0x6d1becu);
    /* 0068e2c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e2cc: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e2cf: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68e2d5u); call_ind(t); }
    /* 0068e2d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e2d8: call dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); r_esp -= 4; W32(r_esp, 0x68e2deu); call_ind(t); }
    /* 0068e2de: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e2e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e2e1: ret  */ FN_RET(0x0068e2b0); r_esp += 4; return;
}

