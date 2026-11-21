#include "protos.h"

void f_00577b80(void) /* SultanFadeCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577b80);
    /* 00577b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00577b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577b87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00577b8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577b8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577b8e: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x577b93u); f_00600420();
    /* 00577b93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577b96: mov dword ptr [ecx], 0x6cb134 */ W32((u32)(r_ecx), 0x6cb134u);
    /* 00577b9c: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00577ba0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577ba2: je 0x577bb0 */ if (fZ) goto L_00577bb0;
L_00577ba4:; BB(0x00577ba4);
    /* 00577ba4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577ba7: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00577bae: jmp 0x577bba */ goto L_00577bba;
L_00577bb0:; BB(0x00577bb0);
    /* 00577bb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577bb3: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
L_00577bba:; BB(0x00577bba);
    /* 00577bba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577bbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00577bbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577bc0: ret 8 */ FN_RET(0x00577b80); r_esp += 12; return;
}

void f_00577bf0(void) /* SultanFadeCycle::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577bf0);
    /* 00577bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00577bf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577bf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00577bf9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577bfc: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00577c00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577c02: jne 0x577c06 */ if (!fZ) goto L_00577c06;
L_00577c04:; BB(0x00577c04);
    /* 00577c04: jmp 0x577c51 */ goto L_00577c51;
L_00577c06:; BB(0x00577c06);
    /* 00577c06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577c09: call 0x577c60 */ r_esp -= 4; W32(r_esp, 0x577c0eu); f_00577c60();
    /* 00577c0e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00577c11: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577c14: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00577c17: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x577c1cu); f_005eb610();
    /* 00577c1c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00577c1f: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577c22: je 0x577c51 */ if (fZ) goto L_00577c51;
L_00577c24:; BB(0x00577c24);
    /* 00577c24: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577c2b: jge 0x577c33 */ if ((fS==fO)) goto L_00577c33;
L_00577c2d:; BB(0x00577c2d);
    /* 00577c2d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577c31: jg 0x577c42 */ if ((!fZ&&fS==fO)) goto L_00577c42;
L_00577c33:; BB(0x00577c33);
    /* 00577c33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577c36: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00577c38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577c3b: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00577c3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577c40u); call_ind(t); }
    /* 00577c40: jmp 0x577c51 */ goto L_00577c51;
L_00577c42:; BB(0x00577c42);
    /* 00577c42: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 00577c45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577c46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577c49: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00577c4c: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x577c51u); f_005eb5d0();
L_00577c51:; BB(0x00577c51);
    /* 00577c51: mov esp, ebp */ r_esp = r_ebp;
    /* 00577c53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577c54: ret  */ FN_RET(0x00577bf0); r_esp += 4; return;
}

void f_00577cd0(void) /* SultanFadeCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577cd0);
    /* 00577cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00577cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577cd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577cda: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577cde: je 0x577cf5 */ if (fZ) goto L_00577cf5;
L_00577ce0:; BB(0x00577ce0);
    /* 00577ce0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577ce2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577ce5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00577ce8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577ceb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00577cee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00577cf0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00577cf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577cf5u); call_ind(t); }
L_00577cf5:; BB(0x00577cf5);
    /* 00577cf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577cf8: cmp dword ptr [ecx + 0xc], 1 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577cfc: jne 0x577d10 */ if (!fZ) goto L_00577d10;
L_00577cfe:; BB(0x00577cfe);
    /* 00577cfe: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577d03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d06: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00577d09: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x577d0eu); f_005eb5d0();
    /* 00577d0e: jmp 0x577d30 */ goto L_00577d30;
L_00577d10:; BB(0x00577d10);
    /* 00577d10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577d12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d15: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00577d18: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x577d1du); f_005eb5d0();
    /* 00577d1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d20: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00577d23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d26: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00577d29: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00577d2b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00577d2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577d30u); call_ind(t); }
L_00577d30:; BB(0x00577d30);
    /* 00577d30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d33: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x577d38u); f_006005d0();
    /* 00577d38: mov esp, ebp */ r_esp = r_ebp;
    /* 00577d3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577d3b: ret  */ FN_RET(0x00577cd0); r_esp += 4; return;
}

