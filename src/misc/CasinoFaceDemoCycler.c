#include "protos.h"

void f_005d4b80(void) /* CasinoFaceDemoCycler::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4b80);
    /* 005d4b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b81: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4b87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b90: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x5d4b95u); f_00600f30();
    /* 005d4b95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b98: mov dword ptr [ecx], 0x6d3cc8 */ W32((u32)(r_ecx), 0x6d3cc8u);
    /* 005d4b9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ba1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4ba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4ba4: ret 4 */ FN_RET(0x005d4b80); r_esp += 8; return;
}

void f_005d4bd0(void) /* CasinoFaceDemoCycler::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4bd0);
    /* 005d4bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4bd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4bd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d4bd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4bdc: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 005d4be0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4be2: jne 0x5d4be6 */ if (!fZ) goto L_005d4be6;
L_005d4be4:; BB(0x005d4be4);
    /* 005d4be4: jmp 0x5d4c4e */ goto L_005d4c4e;
L_005d4be6:; BB(0x005d4be6);
    /* 005d4be6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4be9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4beb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4bee: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005d4bf1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d4bf3u); call_ind(t); }
    /* 005d4bf3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d4bf6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4bf9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d4bfc: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5d4c01u); f_005eb220();
    /* 005d4c01: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c04: je 0x5d4c4e */ if (fZ) goto L_005d4c4e;
L_005d4c06:; BB(0x005d4c06);
    /* 005d4c06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4c09: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c0c: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c0f: jne 0x5d4c34 */ if (!fZ) goto L_005d4c34;
L_005d4c11:; BB(0x005d4c11);
    /* 005d4c11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4c18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4c1f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d4c22: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4c25: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d4c28: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d4c2a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005d4c30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4c32u); call_ind(t); }
    /* 005d4c32: jmp 0x5d4c4e */ goto L_005d4c4e;
L_005d4c34:; BB(0x005d4c34);
    /* 005d4c34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c38: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4c3b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d4c3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4c41: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005d4c44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4c46: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005d4c4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4c4eu); call_ind(t); }
L_005d4c4e:; BB(0x005d4c4e);
    /* 005d4c4e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4c50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c51: ret  */ FN_RET(0x005d4bd0); r_esp += 4; return;
}

