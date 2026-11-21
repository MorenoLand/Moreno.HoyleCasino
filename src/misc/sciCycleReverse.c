#include "protos.h"

void f_00600c60(void) /* sciCycleReverse::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600c60);
    /* 00600c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00600c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600c67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600c6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c6e: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x600c73u); f_00600420();
    /* 00600c73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c76: mov dword ptr [ecx], 0x6d7490 */ W32((u32)(r_ecx), 0x6d7490u);
    /* 00600c7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c7f: mov dword ptr [edx + 0xc], 0xffffffff */ W32((u32)(r_edx+0xcu), 0xffffffffu);
    /* 00600c86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c89: mov esp, ebp */ r_esp = r_ebp;
    /* 00600c8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600c8c: ret 4 */ FN_RET(0x00600c60); r_esp += 8; return;
}

void f_00600cb0(void) /* sciCycleReverse::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600cb0);
    /* 00600cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00600cb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600cb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00600cb9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600cbc: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00600cc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600cc2: jne 0x600cc6 */ if (!fZ) goto L_00600cc6;
L_00600cc4:; BB(0x00600cc4);
    /* 00600cc4: jmp 0x600d15 */ goto L_00600d15;
L_00600cc6:; BB(0x00600cc6);
    /* 00600cc6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600cc9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600ccb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600cce: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00600cd1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x600cd3u); call_ind(t); }
    /* 00600cd3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00600cd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600cd9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600cdc: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x600ce1u); f_005eb220();
    /* 00600ce1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600ce4: je 0x600d15 */ if (fZ) goto L_00600d15;
L_00600ce6:; BB(0x00600ce6);
    /* 00600ce6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600cea: jge 0x600cfb */ if ((fS==fO)) goto L_00600cfb;
L_00600cec:; BB(0x00600cec);
    /* 00600cec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600cef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00600cf1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600cf4: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00600cf7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600cf9u); call_ind(t); }
    /* 00600cf9: jmp 0x600d15 */ goto L_00600d15;
L_00600cfb:; BB(0x00600cfb);
    /* 00600cfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600cfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600cff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600d02: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600d05: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600d08: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00600d0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600d0d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00600d13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600d15u); call_ind(t); }
L_00600d15:; BB(0x00600d15);
    /* 00600d15: mov esp, ebp */ r_esp = r_ebp;
    /* 00600d17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600d18: ret  */ FN_RET(0x00600cb0); r_esp += 4; return;
}

void f_00600d20(void) /* sciCycleReverse::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600d20);
    /* 00600d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00600d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600d27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600d2a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00600d2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600d2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600d31: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600d34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600d37: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00600d3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600d3c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00600d42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600d44u); call_ind(t); }
    /* 00600d44: mov esp, ebp */ r_esp = r_ebp;
    /* 00600d46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600d47: ret  */ FN_RET(0x00600d20); r_esp += 4; return;
}

