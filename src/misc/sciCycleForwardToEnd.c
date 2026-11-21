#include "protos.h"

void f_00600e30(void) /* sciCycleForwardToEnd::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600e30);
    /* 00600e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00600e33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600e36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00600e39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e3c: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00600e40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600e42: jne 0x600e46 */ if (!fZ) goto L_00600e46;
L_00600e44:; BB(0x00600e44);
    /* 00600e44: jmp 0x600ec2 */ goto L_00600ec2;
L_00600e46:; BB(0x00600e46);
    /* 00600e46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e49: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600e4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e4e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00600e51: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x600e53u); call_ind(t); }
    /* 00600e53: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00600e56: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e59: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600e5c: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x600e61u); f_005eb220();
    /* 00600e61: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600e64: je 0x600ec2 */ if (fZ) goto L_00600ec2;
L_00600e66:; BB(0x00600e66);
    /* 00600e66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600e6c: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600e6f: je 0x600e7a */ if (fZ) goto L_00600e7a;
L_00600e71:; BB(0x00600e71);
    /* 00600e71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e74: cmp dword ptr [eax + 0x1c], -1 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600e78: jne 0x600ea8 */ if (!fZ) goto L_00600ea8;
L_00600e7a:; BB(0x00600e7a);
    /* 00600e7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e7d: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00600e80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600e81: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e84: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600e87: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e8a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600e8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00600e8f: mov ecx, eax */ r_ecx = r_eax;
    /* 00600e91: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00600e97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600e99u); call_ind(t); }
    /* 00600e99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600e9c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00600e9e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600ea1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00600ea4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600ea6u); call_ind(t); }
    /* 00600ea6: jmp 0x600ec2 */ goto L_00600ec2;
L_00600ea8:; BB(0x00600ea8);
    /* 00600ea8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600eab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600eac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600eaf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600eb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600eb5: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00600eb8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600eba: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00600ec0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600ec2u); call_ind(t); }
L_00600ec2:; BB(0x00600ec2);
    /* 00600ec2: mov esp, ebp */ r_esp = r_ebp;
    /* 00600ec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600ec5: ret  */ FN_RET(0x00600e30); r_esp += 4; return;
}

void f_006010a0(void) /* sciCycleForwardToEnd::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006010a0);
    /* 006010a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006010a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006010a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006010a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006010a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006010aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006010ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006010ae: call 0x600de0 */ r_esp -= 4; W32(r_esp, 0x6010b3u); f_00600de0();
    /* 006010b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006010b6: mov dword ptr [ecx], 0x6d7538 */ W32((u32)(r_ecx), 0x6d7538u);
    /* 006010bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006010bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006010c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006010c2: ret 4 */ FN_RET(0x006010a0); r_esp += 8; return;
}

