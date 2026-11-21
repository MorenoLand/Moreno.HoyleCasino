#include "protos.h"

void f_00671a10(void) /* RewardsOpenButton::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671a10);
    /* 00671a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00671a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671a17: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671a1d: call 0x6378e0 */ r_esp -= 4; W32(r_esp, 0x671a22u); f_006378e0();
    /* 00671a22: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00671a25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671a27: je 0x671a53 */ if (fZ) goto L_00671a53;
L_00671a29:; BB(0x00671a29);
    /* 00671a29: push 0x27ac41 */ { u32 v = 0x27ac41u; r_esp -= 4; W32(r_esp, v); }
    /* 00671a2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00671a33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a36: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00671a3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671a3eu); call_ind(t); }
    /* 00671a3e: push 0x27ac43 */ { u32 v = 0x27ac43u; r_esp -= 4; W32(r_esp, v); }
    /* 00671a43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a46: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00671a4c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x671a51u); f_005eaf00();
    /* 00671a51: jmp 0x671a7b */ goto L_00671a7b;
L_00671a53:; BB(0x00671a53);
    /* 00671a53: push 0x27ac42 */ { u32 v = 0x27ac42u; r_esp -= 4; W32(r_esp, v); }
    /* 00671a58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a5b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00671a5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a60: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00671a66: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x671a68u); call_ind(t); }
    /* 00671a68: push 0x27ac44 */ { u32 v = 0x27ac44u; r_esp -= 4; W32(r_esp, v); }
    /* 00671a6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a70: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00671a76: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x671a7bu); f_005eaf00();
L_00671a7b:; BB(0x00671a7b);
    /* 00671a7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a7e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00671a84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a87: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00671a8d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00671a8f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00671a92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671a94u); call_ind(t); }
    /* 00671a94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671a97: call 0x602500 */ r_esp -= 4; W32(r_esp, 0x671a9cu); f_00602500();
    /* 00671a9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00671a9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671a9f: ret  */ FN_RET(0x00671a10); r_esp += 4; return;
}

void f_00671aa0(void) /* RewardsOpenButton::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671aa0);
    /* 00671aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00671aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671aaa: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00671ab0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671ab3: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00671ab9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00671abb: mov ecx, eax */ r_ecx = r_eax;
    /* 00671abd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00671ac0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671ac2u); call_ind(t); }
    /* 00671ac2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671ac5: call 0x602550 */ r_esp -= 4; W32(r_esp, 0x671acau); f_00602550();
    /* 00671aca: mov esp, ebp */ r_esp = r_ebp;
    /* 00671acc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671acd: ret  */ FN_RET(0x00671aa0); r_esp += 4; return;
}

void f_00671ad0(void) /* RewardsOpenButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671ad0);
    /* 00671ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00671ad3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671ad6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00671ad9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671adf: call 0x6378e0 */ r_esp -= 4; W32(r_esp, 0x671ae4u); f_006378e0();
    /* 00671ae4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00671ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671ae9: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00671aec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671aed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671af0: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00671af6: call 0x670e30 */ r_esp -= 4; W32(r_esp, 0x671afbu); f_00670e30();
    /* 00671afb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671b01: call 0x6378e0 */ r_esp -= 4; W32(r_esp, 0x671b06u); f_006378e0();
    /* 00671b06: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00671b09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671b0b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00671b0e: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 00671b11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671b17: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x671b1cu); f_006375b0();
    /* 00671b1c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00671b1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671b22: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x671b27u); f_0063aac0();
    /* 00671b27: mov dl, byte ptr [ebp - 5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 00671b2a: mov byte ptr [eax + 0x368], dl */ W8((u32)(r_eax+0x368u), (u8)r_edx);
    /* 00671b30: mov esp, ebp */ r_esp = r_ebp;
    /* 00671b32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671b33: ret  */ FN_RET(0x00671ad0); r_esp += 4; return;
}

void f_00671b40(void) /* RewardsOpenButton::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671b40);
    /* 00671b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00671b43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671b45: push 0x6ad1e5 */ { u32 v = 0x6ad1e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00671b4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671b51: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671b54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671b59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671b5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00671b5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671b65: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00671b68: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00671b6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00671b6f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671b75: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00671b7b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671b7du); call_ind(t); }
    /* 00671b7d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00671b80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671b82: jne 0x671b89 */ if (!fZ) goto L_00671b89;
L_00671b84:; BB(0x00671b84);
    /* 00671b84: jmp 0x671c6b */ goto L_00671c6b;
L_00671b89:; BB(0x00671b89);
    /* 00671b89: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671b8c: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00671b92: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00671b95: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671b98: mov dword ptr [ecx + 0x1e4], eax */ W32((u32)(r_ecx+0x1e4u), r_eax);
    /* 00671b9e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671ba1: cmp dword ptr [edx + 0x1e4], 0 */ {  u32 a = R32((u32)(r_edx+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671ba8: jne 0x671c27 */ if (!fZ) goto L_00671c27;
L_00671baa:; BB(0x00671baa);
    /* 00671baa: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00671bac: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x671bb1u); f_00686d82();
    /* 00671bb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671bb4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00671bb7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671bbe: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671bc2: je 0x671bd3 */ if (fZ) goto L_00671bd3;
L_00671bc4:; BB(0x00671bc4);
    /* 00671bc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671bc6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00671bc9: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x671bceu); f_006010a0();
    /* 00671bce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00671bd1: jmp 0x671bda */ goto L_00671bda;
L_00671bd3:; BB(0x00671bd3);
    /* 00671bd3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00671bda:; BB(0x00671bda);
    /* 00671bda: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671bdd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00671be0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671be7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671bea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671beb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671bee: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 00671bf4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x671bf9u); f_005f5d50();
    /* 00671bf9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671bfc: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00671c02: mov dword ptr [ecx + 0x178], 7 */ W32((u32)(r_ecx+0x178u), 0x7u);
    /* 00671c0c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00671c0e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x671c13u); f_0062fbf0();
    /* 00671c13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671c16: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00671c19: add eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671c1e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671c21: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
L_00671c27:; BB(0x00671c27);
    /* 00671c27: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671c2a: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00671c30: cmp dword ptr [ecx + 0x180], 0 */ {  u32 a = R32((u32)(r_ecx+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671c37: jne 0x671c6b */ if (!fZ) goto L_00671c6b;
L_00671c39:; BB(0x00671c39);
    /* 00671c39: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671c3c: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 00671c42: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x671c47u); f_005eb220();
    /* 00671c47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671c49: je 0x671c6b */ if (fZ) goto L_00671c6b;
L_00671c4b:; BB(0x00671c4b);
    /* 00671c4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671c4d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671c50: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00671c56: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671c59: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00671c5f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00671c61: mov ecx, eax */ r_ecx = r_eax;
    /* 00671c63: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00671c69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671c6bu); call_ind(t); }
L_00671c6b:; BB(0x00671c6b);
    /* 00671c6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671c6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00671c75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671c76: mov esp, ebp */ r_esp = r_ebp;
    /* 00671c78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671c79: ret  */ FN_RET(0x00671b40); r_esp += 4; return;
}

