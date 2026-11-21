#include "protos.h"

void f_005570e0(void) /* VideoPokerState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005570e0);
    /* 005570e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005570e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005570e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005570e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005570e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005570ea: call 0x5d0980 */ r_esp -= 4; W32(r_esp, 0x5570efu); f_005d0980();
    /* 005570ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005570f2: mov dword ptr [eax], 0x6c8e28 */ W32((u32)(r_eax), 0x6c8e28u);
    /* 005570f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005570fb: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00557102: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557105: mov esp, ebp */ r_esp = r_ebp;
    /* 00557107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557108: ret  */ FN_RET(0x005570e0); r_esp += 4; return;
}

void f_00557110(void) /* VideoPokerState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557110);
    /* 00557110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557111: mov ebp, esp */ r_ebp = r_esp;
    /* 00557113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00557115: push 0x6a5758 */ { u32 v = 0x6a5758u; r_esp -= 4; W32(r_esp, v); }
    /* 0055711a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00557120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557121: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557124: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00557129: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055712b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055712c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0055712f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00557135: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00557138: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055713b: mov dword ptr [eax], 0x6c8e28 */ W32((u32)(r_eax), 0x6c8e28u);
    /* 00557141: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557148: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055714b: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0055714e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00557151: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00557154: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00557157: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055715b: je 0x557170 */ if (fZ) goto L_00557170;
L_0055715d:; BB(0x0055715d);
    /* 0055715d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055715f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557162: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00557164: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557167: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00557169: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55716bu); call_ind(t); }
    /* 0055716b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0055716e: jmp 0x557177 */ goto L_00557177;
L_00557170:; BB(0x00557170);
    /* 00557170: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00557177:; BB(0x00557177);
    /* 00557177: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055717e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00557181: call 0x5d0a00 */ r_esp -= 4; W32(r_esp, 0x557186u); f_005d0a00();
    /* 00557186: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557189: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00557190: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00557191: mov esp, ebp */ r_esp = r_ebp;
    /* 00557193: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557194: ret  */ FN_RET(0x00557110); r_esp += 4; return;
}

