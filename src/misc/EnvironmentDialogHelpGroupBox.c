#include "protos.h"

void f_00656280(void) /* EnvironmentDialogHelpGroupBox::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00656280);
    /* 00656280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656281: mov ebp, esp */ r_ebp = r_esp;
    /* 00656283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00656287: cmp dword ptr [0x16306a0], 0 */ {  u32 a = R32((u32)(0x16306a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065628e: jne 0x656292 */ if (!fZ) goto L_00656292;
L_00656290:; BB(0x00656290);
    /* 00656290: jmp 0x6562d8 */ goto L_006562d8;
L_00656292:; BB(0x00656292);
    /* 00656292: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00656295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656296: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 0065629c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065629e: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 006562a4: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 006562a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6562a9u); call_ind(t); }
    /* 006562a9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006562ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006562ae: je 0x6562b2 */ if (fZ) goto L_006562b2;
L_006562b0:; BB(0x006562b0);
    /* 006562b0: jmp 0x6562d8 */ goto L_006562d8;
L_006562b2:; BB(0x006562b2);
    /* 006562b2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006562b5: cmp dword ptr [edx + 0x18], 3 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006562b9: jne 0x6562d8 */ if (!fZ) goto L_006562d8;
L_006562bb:; BB(0x006562bb);
    /* 006562bb: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006562c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006562c3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006562c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006562c9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006562cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006562ce: mov ecx, eax */ r_ecx = r_eax;
    /* 006562d0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006562d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6562d8u); call_ind(t); }
L_006562d8:; BB(0x006562d8);
    /* 006562d8: mov esp, ebp */ r_esp = r_ebp;
    /* 006562da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006562db: ret 4 */ FN_RET(0x00656280); r_esp += 8; return;
}

void f_00680d40(void) /* EnvironmentDialogHelpGroupBox::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680d40);
    /* 00680d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00680d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00680d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680d4a: call 0x6266e0 */ r_esp -= 4; W32(r_esp, 0x680d4fu); f_006266e0();
    /* 00680d4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680d52: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00680d55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680d58: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00680d5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680d5d: mov ecx, eax */ r_ecx = r_eax;
    /* 00680d5f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00680d62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680d64u); call_ind(t); }
    /* 00680d64: mov esp, ebp */ r_esp = r_ebp;
    /* 00680d66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680d67: ret  */ FN_RET(0x00680d40); r_esp += 4; return;
}

void f_00680d70(void) /* EnvironmentDialogHelpGroupBox::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680d70);
    /* 00680d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00680d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00680d77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680d7a: call 0x626760 */ r_esp -= 4; W32(r_esp, 0x680d7fu); f_00626760();
    /* 00680d7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680d82: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00680d85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680d88: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00680d8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680d8d: mov ecx, eax */ r_ecx = r_eax;
    /* 00680d8f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00680d92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680d94u); call_ind(t); }
    /* 00680d94: mov esp, ebp */ r_esp = r_ebp;
    /* 00680d96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680d97: ret  */ FN_RET(0x00680d70); r_esp += 4; return;
}

