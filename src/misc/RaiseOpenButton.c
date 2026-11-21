#include "protos.h"

void f_00469d90(void) /* RaiseOpenButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469d90);
    /* 00469d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00469d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00469d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469d9a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x469d9fu); f_00601a80();
    /* 00469d9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469da2: mov dword ptr [eax], 0x6bb6c4 */ W32((u32)(r_eax), 0x6bb6c4u);
    /* 00469da8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469dab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00469dae: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00469db4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469db7: mov esp, ebp */ r_esp = r_ebp;
    /* 00469db9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469dba: ret 4 */ FN_RET(0x00469d90); r_esp += 8; return;
}

void f_00469dc0(void) /* RaiseOpenButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469dc0);
    /* 00469dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00469dc3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00469dc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00469dc9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00469dd0: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00469dd6: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x469ddbu); f_0057ae30();
    /* 00469ddb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469ddd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469ddf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469de5: call 0x47aab0 */ r_esp -= 4; W32(r_esp, 0x469deau); f_0047aab0();
    /* 00469dea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00469def: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00469df1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00469df4: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00469dfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x469dfcu); call_ind(t); }
    /* 00469dfc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00469dff: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00469e05: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x469e0au); f_005f87d0();
    /* 00469e0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469e0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469e0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00469e11: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00469e17: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x469e1cu); f_00519a40();
    /* 00469e1c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00469e22: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00469e28: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 00469e2e: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00469e34: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00469e3a: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 00469e40: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00469e42: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00469e48: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x469e4au); call_ind(t); }
    /* 00469e4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469e4b: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x469e50u); f_0064cab0();
    /* 00469e50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469e53: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00469e56: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00469e59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00469e5c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00469e5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469e65: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469e68: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00469e6e: jle 0x469e7e */ if ((fZ||fS!=fO)) goto L_00469e7e;
L_00469e70:; BB(0x00469e70);
    /* 00469e70: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00469e75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469e78: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
L_00469e7e:; BB(0x00469e7e);
    /* 00469e7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00469e80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469e81: ret  */ FN_RET(0x00469dc0); r_esp += 4; return;
}

