#include "protos.h"

void f_0054c3f0(void) /* VideoPokerAI::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c3f0);
    /* 0054c3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c3f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c3f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054c3f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c3fc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x54c401u); f_005e9e20();
    /* 0054c401: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c404: mov dword ptr [eax], 0x6c7dc0 */ W32((u32)(r_eax), 0x6c7dc0u);
    /* 0054c40a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c40d: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 0054c411: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c414: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 0054c41b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054c422: jmp 0x54c42d */ goto L_0054c42d;
L_0054c424:; BB(0x0054c424);
    /* 0054c424: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c427: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c42a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054c42d:; BB(0x0054c42d);
    /* 0054c42d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c431: jge 0x54c44c */ if ((fS==fO)) goto L_0054c44c;
L_0054c433:; BB(0x0054c433);
    /* 0054c433: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c436: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c439: mov word ptr [edx + ecx*2 + 4], 0 */ W16((u32)(r_edx+r_ecx*2+0x4u), 0x0u);
    /* 0054c440: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c443: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c446: mov byte ptr [eax + 0x14], 0xff */ W8((u32)(r_eax+0x14u), 0xffu);
    /* 0054c44a: jmp 0x54c424 */ goto L_0054c424;
L_0054c44c:; BB(0x0054c44c);
    /* 0054c44c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c44f: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c451: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c452: ret  */ FN_RET(0x0054c3f0); r_esp += 4; return;
}

