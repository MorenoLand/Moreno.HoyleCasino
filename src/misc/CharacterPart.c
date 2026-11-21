#include "protos.h"

void f_00648c70(void) /* CharacterPart::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648c70);
    /* 00648c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00648c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c7a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x648c7fu); f_005f5bf0();
    /* 00648c7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c82: mov dword ptr [eax], 0x6dc8dc */ W32((u32)(r_eax), 0x6dc8dcu);
    /* 00648c88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c8b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648c8e: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 00648c94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648c97: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00648c9a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00648c9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648ca0: mov esp, ebp */ r_esp = r_ebp;
    /* 00648ca2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648ca3: ret 8 */ FN_RET(0x00648c70); r_esp += 12; return;
}

void f_00648cd0(void) /* CharacterPart::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648cd0);
    /* 00648cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648cd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648cda: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x648cdfu); f_005f54a0();
    /* 00648cdf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00648ce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648ce4: je 0x648d6d */ if (fZ) goto L_00648d6d;
L_00648cea:; BB(0x00648cea);
    /* 00648cea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648ced: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648cf4: je 0x648d6d */ if (fZ) goto L_00648d6d;
L_00648cf6:; BB(0x00648cf6);
    /* 00648cf6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648cf9: cmp dword ptr [edx + 0x18], 1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648cfd: jne 0x648d6d */ if (!fZ) goto L_00648d6d;
L_00648cff:; BB(0x00648cff);
    /* 00648cff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648d02: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00648d08: call 0x6480d0 */ r_esp -= 4; W32(r_esp, 0x648d0du); f_006480d0();
    /* 00648d0d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00648d10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648d12: je 0x648d6d */ if (fZ) goto L_00648d6d;
L_00648d14:; BB(0x00648d14);
    /* 00648d14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648d17: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 00648d1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648d1d: je 0x648d2d */ if (fZ) goto L_00648d2d;
L_00648d1f:; BB(0x00648d1f);
    /* 00648d1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00648d22: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00648d26: cmp edx, 0x72 */ {  u32 a = r_edx; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648d29: jne 0x648d2d */ if (!fZ) goto L_00648d2d;
L_00648d2b:; BB(0x00648d2b);
    /* 00648d2b: jmp 0x648d79 */ goto L_00648d79;
L_00648d2d:; BB(0x00648d2d);
    /* 00648d2d: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00648d32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00648d34: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648d3a: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 00648d40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648d42u); call_ind(t); }
    /* 00648d42: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00648d45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648d47: je 0x648d4b */ if (fZ) goto L_00648d4b;
L_00648d49:; BB(0x00648d49);
    /* 00648d49: jmp 0x648d79 */ goto L_00648d79;
L_00648d4b:; BB(0x00648d4b);
    /* 00648d4b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648d4e: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00648d54: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 00648d5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648d5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00648d5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648d62: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00648d68: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x648d6du); f_006464d0();
L_00648d6d:; BB(0x00648d6d);
    /* 00648d6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648d70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648d71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648d74: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x648d79u); f_005f4d00();
L_00648d79:; BB(0x00648d79);
    /* 00648d79: mov esp, ebp */ r_esp = r_ebp;
    /* 00648d7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648d7c: ret 4 */ FN_RET(0x00648cd0); r_esp += 8; return;
}

void f_00648d80(void) /* CharacterPart::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648d80);
    /* 00648d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00648d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648d87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00648d8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648d8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648d8e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x648d93u); f_005f4ed0();
    /* 00648d93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00648d96: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00648d9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648d9d: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00648da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648da4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00648da7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648da8: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00648dae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00648db0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648db6: mov edx, dword ptr [eax + 0x11c] */ r_edx = R32((u32)(r_eax+0x11cu));
    /* 00648dbc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x648dbeu); call_ind(t); }
    /* 00648dbe: mov esp, ebp */ r_esp = r_ebp;
    /* 00648dc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648dc1: ret 4 */ FN_RET(0x00648d80); r_esp += 8; return;
}

void f_00648dd0(void) /* CharacterPart::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648dd0);
    /* 00648dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648dd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648dd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00648dda: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 00648dde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648de1: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00648de5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648de8: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00648dec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648def: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00648df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648df6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648df9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648dfa: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00648dff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00648e01: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648e07: mov eax, dword ptr [edx + 0x120] */ r_eax = R32((u32)(r_edx+0x120u));
    /* 00648e0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648e0fu); call_ind(t); }
    /* 00648e0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00648e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648e12: ret 4 */ FN_RET(0x00648dd0); r_esp += 8; return;
}

void f_00648e20(void) /* CharacterPart::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648e20);
    /* 00648e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00648e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648e27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00648e2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648e2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648e2e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x648e33u); f_005f4ed0();
    /* 00648e33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00648e36: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00648e3a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648e3d: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00648e43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648e44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00648e47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648e48: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00648e4e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00648e50: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648e56: mov edx, dword ptr [eax + 0x124] */ r_edx = R32((u32)(r_eax+0x124u));
    /* 00648e5c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x648e5eu); call_ind(t); }
    /* 00648e5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00648e60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648e61: ret 4 */ FN_RET(0x00648e20); r_esp += 8; return;
}

void f_00648e70(void) /* CharacterPart::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648e70);
    /* 00648e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00648e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648e77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00648e7a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 00648e7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648e81: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00648e85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648e88: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00648e8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648e8f: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00648e95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648e96: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648e99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648e9a: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00648e9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00648ea1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648ea7: mov eax, dword ptr [edx + 0x128] */ r_eax = R32((u32)(r_edx+0x128u));
    /* 00648ead: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648eafu); call_ind(t); }
    /* 00648eaf: mov esp, ebp */ r_esp = r_ebp;
    /* 00648eb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648eb2: ret 4 */ FN_RET(0x00648e70); r_esp += 8; return;
}

