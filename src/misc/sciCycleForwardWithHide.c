#include "protos.h"

void f_005bf080(void) /* sciCycleForwardWithHide::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf080);
    /* 005bf080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf081: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf087: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bf08a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf08b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf08e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5bf093u); f_006010a0();
    /* 005bf093: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf096: mov dword ptr [ecx], 0x6d1cd4 */ W32((u32)(r_ecx), 0x6d1cd4u);
    /* 005bf09c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bf09f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bf0a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0a4: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005bf0a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf0ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf0ad: ret 8 */ FN_RET(0x005bf080); r_esp += 12; return;
}

void f_005bf0b0(void) /* sciCycleForwardWithHide::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf0b0);
    /* 005bf0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf0b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf0b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0ba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bf0bd: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5bf0c2u); f_005eb220();
    /* 005bf0c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0c5: cmp eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf0c8: jne 0x5bf0d9 */ if (!fZ) goto L_005bf0d9;
L_005bf0ca:; BB(0x005bf0ca);
    /* 005bf0ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf0cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0d2: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005bf0d5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bf0d7u); call_ind(t); }
    /* 005bf0d7: jmp 0x5bf0e1 */ goto L_005bf0e1;
L_005bf0d9:; BB(0x005bf0d9);
    /* 005bf0d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0dc: call 0x600e30 */ r_esp -= 4; W32(r_esp, 0x5bf0e1u); f_00600e30();
L_005bf0e1:; BB(0x005bf0e1);
    /* 005bf0e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0e4: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf0e8: jl 0x5bf105 */ if ((fS!=fO)) goto L_005bf105;
L_005bf0ea:; BB(0x005bf0ea);
    /* 005bf0ea: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005bf0f0: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5bf0f5u); f_005f3e50();
    /* 005bf0f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf0f8: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf0fb: jl 0x5bf105 */ if ((fS!=fO)) goto L_005bf105;
L_005bf0fd:; BB(0x005bf0fd);
    /* 005bf0fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf100: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x5bf105u); f_006005d0();
L_005bf105:; BB(0x005bf105);
    /* 005bf105: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf108: ret  */ FN_RET(0x005bf0b0); r_esp += 4; return;
}

void f_005bf110(void) /* sciCycleForwardWithHide::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf110);
    /* 005bf110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf111: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf117: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf11a: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf11e: je 0x5bf135 */ if (fZ) goto L_005bf135;
L_005bf120:; BB(0x005bf120);
    /* 005bf120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf122: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf125: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bf128: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf12b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bf12e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005bf130: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005bf133: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bf135u); call_ind(t); }
L_005bf135:; BB(0x005bf135);
    /* 005bf135: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf138: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005bf13b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bf13d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf140: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005bf143: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005bf149: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5bf14eu); f_005f3e50();
    /* 005bf14e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf151: add eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bf154: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf157: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005bf15a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf15d: mov byte ptr [eax + 0x19], 1 */ W8((u32)(r_eax+0x19u), 0x1u);
    /* 005bf161: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf163: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf164: ret  */ FN_RET(0x005bf110); r_esp += 4; return;
}

