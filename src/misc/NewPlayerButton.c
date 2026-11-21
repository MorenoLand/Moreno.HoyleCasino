#include "protos.h"

void f_006610a0(void) /* NewPlayerButton::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006610a0);
    /* 006610a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006610a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006610a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006610a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006610a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006610aa: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006610ae: jne 0x661127 */ if (!fZ) goto L_00661127;
L_006610b0:; BB(0x006610b0);
    /* 006610b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006610b3: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006610b7: jne 0x661127 */ if (!fZ) goto L_00661127;
L_006610b9:; BB(0x006610b9);
    /* 006610b9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006610bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006610bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006610c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006610c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006610c5: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 006610cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6610cdu); call_ind(t); }
    /* 006610cd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006610d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006610d2: je 0x661127 */ if (fZ) goto L_00661127;
L_006610d4:; BB(0x006610d4);
    /* 006610d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006610d7: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 006610db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006610dd: jne 0x661127 */ if (!fZ) goto L_00661127;
L_006610df:; BB(0x006610df);
    /* 006610df: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006610e2: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006610e5: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006610e8: je 0x661127 */ if (fZ) goto L_00661127;
L_006610ea:; BB(0x006610ea);
    /* 006610ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006610ed: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006610f0: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006610f3: je 0x661127 */ if (fZ) goto L_00661127;
L_006610f5:; BB(0x006610f5);
    /* 006610f5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006610f8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006610fb: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006610fe: je 0x661127 */ if (fZ) goto L_00661127;
L_00661100:; BB(0x00661100);
    /* 00661100: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00661106: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066110d: je 0x661127 */ if (fZ) goto L_00661127;
L_0066110f:; BB(0x0066110f);
    /* 0066110f: mov edx, dword ptr [0x16306b0] */ r_edx = R32((u32)(0x16306b0u));
    /* 00661115: movzx eax, byte ptr [edx + 0x1c1] */ r_eax = (u32)R8((u32)(r_edx+0x1c1u));
    /* 0066111c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066111e: je 0x661127 */ if (fZ) goto L_00661127;
L_00661120:; BB(0x00661120);
    /* 00661120: mov byte ptr [0x795fbe], 1 */ W8((u32)(0x795fbeu), 0x1u);
L_00661127:; BB(0x00661127);
    /* 00661127: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066112a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066112b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066112e: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x661133u); f_005f4d00();
    /* 00661133: mov esp, ebp */ r_esp = r_ebp;
    /* 00661135: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661136: ret 4 */ FN_RET(0x006610a0); r_esp += 8; return;
}

