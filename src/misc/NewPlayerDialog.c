#include "protos.h"

void f_00660b70(void) /* NewPlayerDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660b70);
    /* 00660b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00660b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660b75: push 0x6ac95b */ { u32 v = 0x6ac95bu; r_esp -= 4; W32(r_esp, v); }
    /* 00660b7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660b81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660b82: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00660b87: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00660b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660b8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00660b8d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00660b93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00660b96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660b98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660b9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660b9d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x660ba2u); f_005f71f0();
    /* 00660ba2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660ba9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660bac: mov dword ptr [eax], 0x6df13c */ W32((u32)(r_eax), 0x6df13cu);
    /* 00660bb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660bb4: push 0x30d4f3 */ { u32 v = 0x30d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 00660bb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660bbc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x660bc1u); f_005f83d0();
    /* 00660bc1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00660bc8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660bcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660bce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660bd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660bd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00660bd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660bd9: ret  */ FN_RET(0x00660b70); r_esp += 4; return;
}

void f_00660c00(void) /* NewPlayerDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660c00);
    /* 00660c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00660c03: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660c06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00660c09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00660c0c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00660c0f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c13: je 0x660c20 */ if (fZ) goto L_00660c20;
L_00660c15:; BB(0x00660c15);
    /* 00660c15: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c19: je 0x660c44 */ if (fZ) goto L_00660c44;
L_00660c1b:; BB(0x00660c1b);
    /* 00660c1b: jmp 0x660cfe */ goto L_00660cfe;
L_00660c20:; BB(0x00660c20);
    /* 00660c20: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660c26: call 0x65ec60 */ r_esp -= 4; W32(r_esp, 0x660c2bu); f_0065ec60();
    /* 00660c2b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00660c2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c30: je 0x660c3f */ if (fZ) goto L_00660c3f;
L_00660c32:; BB(0x00660c32);
    /* 00660c32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660c34: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660c3a: call 0x65eab0 */ r_esp -= 4; W32(r_esp, 0x660c3fu); f_0065eab0();
L_00660c3f:; BB(0x00660c3f);
    /* 00660c3f: jmp 0x660cfe */ goto L_00660cfe;
L_00660c44:; BB(0x00660c44);
    /* 00660c44: mov edx, dword ptr [0x16306b0] */ r_edx = R32((u32)(0x16306b0u));
    /* 00660c4a: cmp dword ptr [edx + 0x1cc], 0 */ {  u32 a = R32((u32)(r_edx+0x1ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c51: je 0x660c97 */ if (fZ) goto L_00660c97;
L_00660c53:; BB(0x00660c53);
    /* 00660c53: mov eax, dword ptr [0x16306b0] */ r_eax = R32((u32)(0x16306b0u));
    /* 00660c58: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 00660c5e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00660c61: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00660c64: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00660c67: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c6b: je 0x660c80 */ if (fZ) goto L_00660c80;
L_00660c6d:; BB(0x00660c6d);
    /* 00660c6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660c6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660c72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660c74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660c77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00660c79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660c7bu); call_ind(t); }
    /* 00660c7b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00660c7e: jmp 0x660c87 */ goto L_00660c87;
L_00660c80:; BB(0x00660c80);
    /* 00660c80: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00660c87:; BB(0x00660c87);
    /* 00660c87: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660c8d: mov dword ptr [ecx + 0x1cc], 0 */ W32((u32)(r_ecx+0x1ccu), 0x0u);
L_00660c97:; BB(0x00660c97);
    /* 00660c97: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660c9d: call 0x65ea70 */ r_esp -= 4; W32(r_esp, 0x660ca2u); f_0065ea70();
    /* 00660ca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660ca4: jne 0x660cf1 */ if (!fZ) goto L_00660cf1;
L_00660ca6:; BB(0x00660ca6);
    /* 00660ca6: mov edx, dword ptr [0x16306b0] */ r_edx = R32((u32)(0x16306b0u));
    /* 00660cac: movzx eax, byte ptr [edx + 0x1d4] */ r_eax = (u32)R8((u32)(r_edx+0x1d4u));
    /* 00660cb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660cb5: je 0x660cd7 */ if (fZ) goto L_00660cd7;
L_00660cb7:; BB(0x00660cb7);
    /* 00660cb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660cb9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660cbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00660cc1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660cc7: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00660cca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660cccu); call_ind(t); }
    /* 00660ccc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00660ccf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660cd1: jne 0x660cd5 */ if (!fZ) goto L_00660cd5;
L_00660cd3:; BB(0x00660cd3);
    /* 00660cd3: jmp 0x660cfe */ goto L_00660cfe;
L_00660cd5:; BB(0x00660cd5);
    /* 00660cd5: jmp 0x660cef */ goto L_00660cef;
L_00660cd7:; BB(0x00660cd7);
    /* 00660cd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660cd9: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660cdf: call 0x65eab0 */ r_esp -= 4; W32(r_esp, 0x660ce4u); f_0065eab0();
    /* 00660ce4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00660cea: call 0x64ed50 */ r_esp -= 4; W32(r_esp, 0x660cefu); f_0064ed50();
L_00660cef:; BB(0x00660cef);
    /* 00660cef: jmp 0x660cfe */ goto L_00660cfe;
L_00660cf1:; BB(0x00660cf1);
    /* 00660cf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660cf3: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660cf9: call 0x65eab0 */ r_esp -= 4; W32(r_esp, 0x660cfeu); f_0065eab0();
L_00660cfe:; BB(0x00660cfe);
    /* 00660cfe: mov esp, ebp */ r_esp = r_ebp;
    /* 00660d00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660d01: ret 4 */ FN_RET(0x00660c00); r_esp += 8; return;
}

void f_00660d10(void) /* NewPlayerDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660d10);
    /* 00660d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00660d13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d15: push 0x6ac981 */ { u32 v = 0x6ac981u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660d21: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660d24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00660d29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00660d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660d2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00660d2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00660d35: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00660d38: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d3a: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d3e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d40: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d42: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d44: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d49: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d4b: push 0x6df194 */ { u32 v = 0x6df194u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d50: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660d55u); f_00630f40();
    /* 00660d55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660d59: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d5d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660d60: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x660d65u); f_005fa5b0();
    /* 00660d65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d6b: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d70: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d72: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d76: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d78: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d7c: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d85: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660d88: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x660d8du); f_005fa880();
    /* 00660d8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660d93: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d98: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660d9d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660da2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660da4: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00660da6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00660da8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660daa: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00660daf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660db1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660db3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660db6: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x660dbbu); f_005fa880();
    /* 00660dbb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00660dc2: jmp 0x660dcd */ goto L_00660dcd;
L_00660dc4:; BB(0x00660dc4);
    /* 00660dc4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660dc7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00660dca: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00660dcd:; BB(0x00660dcd);
    /* 00660dcd: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00660dd1: jge 0x660ed7 */ if ((fS==fO)) goto L_00660ed7;
L_00660dd7:; BB(0x00660dd7);
    /* 00660dd7: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00660ddc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x660de1u); f_00686d82();
    /* 00660de1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660de4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00660de7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660dee: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660df2: je 0x660e01 */ if (fZ) goto L_00660e01;
L_00660df4:; BB(0x00660df4);
    /* 00660df4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00660df7: call 0x661060 */ r_esp -= 4; W32(r_esp, 0x660dfcu); f_00661060();
    /* 00660dfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00660dff: jmp 0x660e08 */ goto L_00660e08;
L_00660e01:; BB(0x00660e01);
    /* 00660e01: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00660e08:; BB(0x00660e08);
    /* 00660e08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00660e0b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00660e0e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00660e15: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660e18: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00660e1a: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00660e1c: and edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00660e1f: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00660e22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660e25: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00660e27: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00660e29: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660e2e: mov ecx, dword ptr [eax*4 + 0x770a90] */ r_ecx = R32((u32)(r_eax*4+0x770a90u));
    /* 00660e35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660e36: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660e3bu); f_00630f40();
    /* 00660e3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660e3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e41: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660e44: mov eax, dword ptr [edx*8 + 0x770a84] */ r_eax = R32((u32)(r_edx*8+0x770a84u));
    /* 00660e4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660e4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660e4f: mov edx, dword ptr [ecx*8 + 0x770a80] */ r_edx = R32((u32)(r_ecx*8+0x770a80u));
    /* 00660e56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660e57: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660e5a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00660e5c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00660e5e: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00660e61: add eax, 0x30d4e5 */ {  u32 a = r_eax; u32 b = 0x30d4e5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00660e66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660e67: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00660e6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660e6b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00660e6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660e6f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660e72: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x660e77u); f_005f9de0();
    /* 00660e77: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00660e7a: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660e7e: jne 0x660ed2 */ if (!fZ) goto L_00660ed2;
L_00660e80:; BB(0x00660e80);
    /* 00660e80: mov eax, dword ptr [0x16306b0] */ r_eax = R32((u32)(0x16306b0u));
    /* 00660e85: movzx ecx, byte ptr [eax + 0x1d4] */ r_ecx = (u32)R8((u32)(r_eax+0x1d4u));
    /* 00660e8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660e8e: je 0x660ed2 */ if (fZ) goto L_00660ed2;
L_00660e90:; BB(0x00660e90);
    /* 00660e90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e92: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660e98: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x660e9du); f_005fb720();
    /* 00660e9d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00660ea0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00660ea3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00660ea5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00660ea8: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00660eae: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x660eb0u); call_ind(t); }
    /* 00660eb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660eb2: jne 0x660ed2 */ if (!fZ) goto L_00660ed2;
L_00660eb4:; BB(0x00660eb4);
    /* 00660eb4: push 0x6deca8 */ { u32 v = 0x6deca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660eb9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660ebeu); f_00630f40();
    /* 00660ebe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660ec1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660ec2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660ec5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660ec7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00660eca: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00660ed0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660ed2u); call_ind(t); }
L_00660ed2:; BB(0x00660ed2);
    /* 00660ed2: jmp 0x660dc4 */ goto L_00660dc4;
L_00660ed7:; BB(0x00660ed7);
    /* 00660ed7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00660ed9: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00660edb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660edd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00660edf: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00660ee1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00660ee3: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660ee8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00660eea: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660eef: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00660ef1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00660ef3: push 0x30d4e3 */ { u32 v = 0x30d4e3u; r_esp -= 4; W32(r_esp, v); }
    /* 00660ef8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660efa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660efc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660eff: call 0x5fa6a0 */ r_esp -= 4; W32(r_esp, 0x660f04u); f_005fa6a0();
    /* 00660f04: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660f0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00660f0c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660f12: mov eax, dword ptr [edx + 0x36c] */ r_eax = R32((u32)(r_edx+0x36cu));
    /* 00660f18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660f1au); call_ind(t); }
    /* 00660f1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660f1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660f20: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x660f25u); f_005fb810();
    /* 00660f25: mov ecx, eax */ r_ecx = r_eax;
    /* 00660f27: call 0x60c120 */ r_esp -= 4; W32(r_esp, 0x660f2cu); f_0060c120();
    /* 00660f2c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660f2e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f30: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f32: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f34: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660f36: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f38: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f3a: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f3c: push 0x6df17c */ { u32 v = 0x6df17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660f41: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660f46u); f_00630f40();
    /* 00660f46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660f4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f4e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660f51: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x660f56u); f_005fa5b0();
    /* 00660f56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660f59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660f60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660f61: mov esp, ebp */ r_esp = r_ebp;
    /* 00660f63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660f64: ret  */ FN_RET(0x00660d10); r_esp += 4; return;
}

