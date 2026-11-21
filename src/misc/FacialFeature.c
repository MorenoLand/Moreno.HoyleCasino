#include "protos.h"

void f_00663e60(void) /* FacialFeature::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663e60);
    /* 00663e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00663e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663e65: push 0x6acb8a */ { u32 v = 0x6acb8au; r_esp -= 4; W32(r_esp, v); }
    /* 00663e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663e71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663e72: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00663e77: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00663e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663e7a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00663e7d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00663e83: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00663e86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663e89: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x663e8eu); f_005f5bf0();
    /* 00663e8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663e95: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663e98: mov dword ptr [eax], 0x6df8dc */ W32((u32)(r_eax), 0x6df8dcu);
    /* 00663e9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663ea1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00663ea4: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 00663eaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663eac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663eaf: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x663eb4u); f_005eb700();
    /* 00663eb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663ebb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663ebe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663ec1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663ec8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663ec9: mov esp, ebp */ r_esp = r_ebp;
    /* 00663ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663ecc: ret 4 */ FN_RET(0x00663e60); r_esp += 8; return;
}

void f_00663ef0(void) /* FacialFeature::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663ef0);
    /* 00663ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00663ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663ef7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663efa: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x663effu); f_005f54a0();
    /* 00663eff: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00663f02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663f04: je 0x663f42 */ if (fZ) goto L_00663f42;
L_00663f06:; BB(0x00663f06);
    /* 00663f06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00663f09: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663f0d: jne 0x663f42 */ if (!fZ) goto L_00663f42;
L_00663f0f:; BB(0x00663f0f);
    /* 00663f0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663f12: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663f19: je 0x663f42 */ if (fZ) goto L_00663f42;
L_00663f1b:; BB(0x00663f1b);
    /* 00663f1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663f1e: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00663f24: call 0x6480d0 */ r_esp -= 4; W32(r_esp, 0x663f29u); f_006480d0();
    /* 00663f29: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00663f2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663f2e: je 0x663f42 */ if (fZ) goto L_00663f42;
L_00663f30:; BB(0x00663f30);
    /* 00663f30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663f32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663f34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663f37: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00663f3d: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x663f42u); f_006464d0();
L_00663f42:; BB(0x00663f42);
    /* 00663f42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663f46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663f49: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x663f4eu); f_005f4d00();
    /* 00663f4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00663f50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663f51: ret 4 */ FN_RET(0x00663ef0); r_esp += 8; return;
}

void f_00663f60(void) /* FacialFeature::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663f60);
    /* 00663f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00663f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663f67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663f6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663f6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663f6e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x663f73u); f_005f4ed0();
    /* 00663f73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00663f76: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00663f7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663f7d: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663f84: je 0x663fa9 */ if (fZ) goto L_00663fa9;
L_00663f86:; BB(0x00663f86);
    /* 00663f86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663f89: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00663f8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663f90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00663f93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663f94: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00663f99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00663f9b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00663fa1: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 00663fa7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x663fa9u); call_ind(t); }
L_00663fa9:; BB(0x00663fa9);
    /* 00663fa9: mov esp, ebp */ r_esp = r_ebp;
    /* 00663fab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663fac: ret 4 */ FN_RET(0x00663f60); r_esp += 8; return;
}

void f_00663fb0(void) /* FacialFeature::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663fb0);
    /* 00663fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00663fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663fb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663fba: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 00663fbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663fc1: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00663fc5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663fc8: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00663fcc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663fcf: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00663fd2: cmp ecx, dword ptr [0x16306a4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x16306a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663fd8: je 0x664009 */ if (fZ) goto L_00664009;
L_00663fda:; BB(0x00663fda);
    /* 00663fda: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663fdd: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663fe4: je 0x664009 */ if (fZ) goto L_00664009;
L_00663fe6:; BB(0x00663fe6);
    /* 00663fe6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663fe9: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00663fef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ff0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00663ff3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ff4: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00663ff9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00663ffb: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00664001: mov eax, dword ptr [edx + 0x120] */ r_eax = R32((u32)(r_edx+0x120u));
    /* 00664007: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x664009u); call_ind(t); }
L_00664009:; BB(0x00664009);
    /* 00664009: mov esp, ebp */ r_esp = r_ebp;
    /* 0066400b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066400c: ret 4 */ FN_RET(0x00663fb0); r_esp += 8; return;
}

void f_00664010(void) /* FacialFeature::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664010);
    /* 00664010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664011: mov ebp, esp */ r_ebp = r_esp;
    /* 00664013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664017: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066401a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066401b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066401e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x664023u); f_005f4ed0();
    /* 00664023: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00664026: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0066402a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066402d: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664034: je 0x664059 */ if (fZ) goto L_00664059;
L_00664036:; BB(0x00664036);
    /* 00664036: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664039: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0066403f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664040: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00664043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664044: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00664049: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066404b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00664051: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 00664057: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x664059u); call_ind(t); }
L_00664059:; BB(0x00664059);
    /* 00664059: mov esp, ebp */ r_esp = r_ebp;
    /* 0066405b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066405c: ret 4 */ FN_RET(0x00664010); r_esp += 8; return;
}

void f_00664060(void) /* FacialFeature::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664060);
    /* 00664060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664061: mov ebp, esp */ r_ebp = r_esp;
    /* 00664063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664067: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066406a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0066406e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664071: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00664075: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664078: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0066407c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066407f: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664086: je 0x6640ac */ if (fZ) goto L_006640ac;
L_00664088:; BB(0x00664088);
    /* 00664088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066408b: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00664091: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664092: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664096: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0066409c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066409e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006640a4: mov eax, dword ptr [edx + 0x128] */ r_eax = R32((u32)(r_edx+0x128u));
    /* 006640aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6640acu); call_ind(t); }
L_006640ac:; BB(0x006640ac);
    /* 006640ac: mov esp, ebp */ r_esp = r_ebp;
    /* 006640ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006640af: ret 4 */ FN_RET(0x00664060); r_esp += 8; return;
}

