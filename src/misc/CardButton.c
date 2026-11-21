#include "protos.h"

void f_00590a80(void) /* CardButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590a80);
    /* 00590a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00590a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590a84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590a85: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00590a88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590a8b: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 00590a92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590a94: je 0x590b67 */ if (fZ) goto L_00590b67;
L_00590a9a:; BB(0x00590a9a);
    /* 00590a9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590a9d: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00590aa3: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00590aa9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00590aac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590aaf: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00590ab5: mov dword ptr [eax + 0x1f0], ecx */ W32((u32)(r_eax+0x1f0u), r_ecx);
    /* 00590abb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590abe: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 00590ac5: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590aca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x590acfu); f_00630f40();
    /* 00590acf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590ad6: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00590adc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590adf: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00590ae5: imul edx, edx, 0x1d0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1d0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590aeb: mov eax, dword ptr [eax + 0x1e4] */ r_eax = R32((u32)(r_eax+0x1e4u));
    /* 00590af1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590af4: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00590afa: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590afd: mov esi, dword ptr [esi + 0x1e0] */ r_esi = R32((u32)(r_esi+0x1e0u));
    /* 00590b03: imul esi, esi, 0x1d0 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x1d0u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590b09: add esi, dword ptr [ecx + 0x1e4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1e4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00590b0f: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 00590b12: mov ecx, esi */ r_ecx = r_esi;
    /* 00590b14: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00590b1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590b1cu); call_ind(t); }
    /* 00590b1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590b1f: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00590b25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590b28: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00590b2e: imul ecx, ecx, 0x178 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x178u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590b34: mov edx, dword ptr [edx + 0x1e8] */ r_edx = R32((u32)(r_edx+0x1e8u));
    /* 00590b3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590b3d: mov eax, dword ptr [eax + 0x1e4] */ r_eax = R32((u32)(r_eax+0x1e4u));
    /* 00590b43: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590b46: mov esi, dword ptr [esi + 0x1e0] */ r_esi = R32((u32)(r_esi+0x1e0u));
    /* 00590b4c: imul esi, esi, 0x178 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x178u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590b52: add esi, dword ptr [eax + 0x1e8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1e8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00590b58: mov edx, dword ptr [edx + ecx] */ r_edx = R32((u32)(r_edx+r_ecx));
    /* 00590b5b: mov ecx, esi */ r_ecx = r_esi;
    /* 00590b5d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00590b60: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590b62u); call_ind(t); }
    /* 00590b62: jmp 0x590c53 */ goto L_00590c53;
L_00590b67:; BB(0x00590b67);
    /* 00590b67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590b6a: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00590b70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590b73: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00590b79: mov edx, dword ptr [edx + 0x1f0] */ r_edx = R32((u32)(r_edx+0x1f0u));
    /* 00590b7f: cmp edx, dword ptr [ecx + 0x1ec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590b85: jge 0x590c53 */ if ((fS==fO)) goto L_00590c53;
L_00590b8b:; BB(0x00590b8b);
    /* 00590b8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590b8e: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00590b94: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00590b9a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00590b9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590ba0: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00590ba6: mov dword ptr [ecx + 0x1f0], edx */ W32((u32)(r_ecx+0x1f0u), r_edx);
    /* 00590bac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590baf: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 00590bb6: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 00590bbb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x590bc0u); f_00630f40();
    /* 00590bc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590bc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590bc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590bc7: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00590bcd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590bd0: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00590bd6: imul eax, eax, 0x1d0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1d0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590bdc: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00590be2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590be5: mov edx, dword ptr [edx + 0x1e4] */ r_edx = R32((u32)(r_edx+0x1e4u));
    /* 00590beb: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590bee: mov esi, dword ptr [esi + 0x1e0] */ r_esi = R32((u32)(r_esi+0x1e0u));
    /* 00590bf4: imul esi, esi, 0x1d0 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x1d0u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590bfa: add esi, dword ptr [edx + 0x1e4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x1e4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00590c00: mov eax, dword ptr [ecx + eax] */ r_eax = R32((u32)(r_ecx+r_eax));
    /* 00590c03: mov ecx, esi */ r_ecx = r_esi;
    /* 00590c05: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00590c0b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x590c0du); call_ind(t); }
    /* 00590c0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c10: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00590c16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c19: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00590c1f: imul eax, eax, 0x178 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x178u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590c25: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 00590c2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c2e: mov edx, dword ptr [edx + 0x1e4] */ r_edx = R32((u32)(r_edx+0x1e4u));
    /* 00590c34: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c37: mov esi, dword ptr [esi + 0x1e0] */ r_esi = R32((u32)(r_esi+0x1e0u));
    /* 00590c3d: imul esi, esi, 0x178 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x178u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590c43: add esi, dword ptr [edx + 0x1e8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x1e8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00590c49: mov eax, dword ptr [ecx + eax] */ r_eax = R32((u32)(r_ecx+r_eax));
    /* 00590c4c: mov ecx, esi */ r_ecx = r_esi;
    /* 00590c4e: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00590c51: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x590c53u); call_ind(t); }
L_00590c53:; BB(0x00590c53);
    /* 00590c53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c56: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00590c5c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00590c5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590c60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590c63: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 00590c69: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x590c6eu); f_00519a40();
    /* 00590c6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00590c6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00590c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590c72: ret  */ FN_RET(0x00590a80); r_esp += 4; return;
}

void f_00594670(void) /* CardButton::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00594670);
    /* 00594670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594671: mov ebp, esp */ r_ebp = r_esp;
    /* 00594673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00594677: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059467a: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0059467d: je 0x5946b8 */ if (fZ) goto L_005946b8;
L_0059467f:; BB(0x0059467f);
    /* 0059467f: push 0x590a50 */ { u32 v = 0x590a50u; r_esp -= 4; W32(r_esp, v); }
    /* 00594684: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594687: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 0059468a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059468b: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00594690: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594694: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x594699u); f_00686e57();
    /* 00594699: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059469c: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0059469f: je 0x5946b0 */ if (fZ) goto L_005946b0;
L_005946a1:; BB(0x005946a1);
    /* 005946a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005946a4: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005946a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005946a8: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5946adu); f_00686cae();
    /* 005946ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005946b0:; BB(0x005946b0);
    /* 005946b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005946b3: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005946b6: jmp 0x5946d7 */ goto L_005946d7;
L_005946b8:; BB(0x005946b8);
    /* 005946b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005946bb: call 0x590a50 */ r_esp -= 4; W32(r_esp, 0x5946c0u); f_00590a50();
    /* 005946c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005946c3: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005946c6: je 0x5946d4 */ if (fZ) goto L_005946d4;
L_005946c8:; BB(0x005946c8);
    /* 005946c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005946cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005946cc: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5946d1u); f_00686cae();
    /* 005946d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005946d4:; BB(0x005946d4);
    /* 005946d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005946d7:; BB(0x005946d7);
    /* 005946d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005946d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005946da: ret 4 */ FN_RET(0x00594670); r_esp += 8; return;
}

