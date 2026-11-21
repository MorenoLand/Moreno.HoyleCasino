#include "protos.h"

void f_0040caf0(void) /* sub_40CAF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040caf0);
    /* 0040caf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040caf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040caf3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040caf6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040caf9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040cb00: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040cb07: mov byte ptr [ebp - 0xa], 0 */ W8((u32)(r_ebp+0xfffffff6u), 0x0u);
    /* 0040cb0b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040cb11: call 0x419dd0 */ r_esp -= 4; W32(r_esp, 0x40cb16u); f_00419dd0();
    /* 0040cb16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040cb18: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cb1b: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040cb1e: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0040cb21: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0040cb25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cb27: je 0x40cbe2 */ if (fZ) goto L_0040cbe2;
L_0040cb2d:; BB(0x0040cb2d);
    /* 0040cb2d: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040cb33: call 0x419dd0 */ r_esp -= 4; W32(r_esp, 0x40cb38u); f_00419dd0();
    /* 0040cb38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040cb3b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cb3f: jl 0x40cb50 */ if ((fS!=fO)) goto L_0040cb50;
L_0040cb41:; BB(0x0040cb41);
    /* 0040cb41: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cb45: jg 0x40cb50 */ if ((!fZ&&fS==fO)) goto L_0040cb50;
L_0040cb47:; BB(0x0040cb47);
    /* 0040cb47: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0040cb4e: jmp 0x40cb57 */ goto L_0040cb57;
L_0040cb50:; BB(0x0040cb50);
    /* 0040cb50: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040cb57:; BB(0x0040cb57);
    /* 0040cb57: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 0040cb5a: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0040cb5d: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0040cb61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cb63: je 0x40cbe2 */ if (fZ) goto L_0040cbe2;
L_0040cb65:; BB(0x0040cb65);
    /* 0040cb65: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cb68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb69: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40cb6eu); f_005dcb00();
    /* 0040cb6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040cb71: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040cb74: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cb78: je 0x40cbe2 */ if (fZ) goto L_0040cbe2;
L_0040cb7a:; BB(0x0040cb7a);
    /* 0040cb7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cb7d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40cb82u); f_0063aac0();
    /* 0040cb82: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040cb84: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040cb87: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cb8b: je 0x40cba9 */ if (fZ) goto L_0040cba9;
L_0040cb8d:; BB(0x0040cb8d);
    /* 0040cb8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cb90: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40cb95u); f_0063aac0();
    /* 0040cb95: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0040cb97: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040cb9a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cb9e: je 0x40cba9 */ if (fZ) goto L_0040cba9;
L_0040cba0:; BB(0x0040cba0);
    /* 0040cba0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0040cba7: jmp 0x40cbb0 */ goto L_0040cbb0;
L_0040cba9:; BB(0x0040cba9);
    /* 0040cba9: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0040cbb0:; BB(0x0040cbb0);
    /* 0040cbb0: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0040cbb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cbb6: je 0x40cbe2 */ if (fZ) goto L_0040cbe2;
L_0040cbb8:; BB(0x0040cbb8);
    /* 0040cbb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbbc: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040cbc2: call 0x41a080 */ r_esp -= 4; W32(r_esp, 0x40cbc7u); f_0041a080();
    /* 0040cbc7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040cbca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cbcc: je 0x40cbe2 */ if (fZ) goto L_0040cbe2;
L_0040cbce:; BB(0x0040cbce);
    /* 0040cbce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbd0: push 0x30d7ef */ { u32 v = 0x30d7efu; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbd5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040cbdb: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x40cbe0u); f_005f2b20();
    /* 0040cbe0: jmp 0x40cbf2 */ goto L_0040cbf2;
L_0040cbe2:; BB(0x0040cbe2);
    /* 0040cbe2: push 0x30d7ef */ { u32 v = 0x30d7efu; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbe7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040cbed: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40cbf2u); f_005f2ba0();
L_0040cbf2:; BB(0x0040cbf2);
    /* 0040cbf2: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cbf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cbf5: ret  */ FN_RET(0x0040caf0); r_esp += 4; return;
}

void f_0040cc00(void) /* sub_40CC00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cc00);
    /* 0040cc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cc01: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cc03: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cc06: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040cc09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cc0c: call 0x40caf0 */ r_esp -= 4; W32(r_esp, 0x40cc11u); f_0040caf0();
    /* 0040cc11: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040cc16: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0040cc1c: mov edx, dword ptr [ecx + 0x808] */ r_edx = R32((u32)(r_ecx+0x808u));
    /* 0040cc22: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040cc25: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040cc2a: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0040cc30: mov edx, dword ptr [ecx + 0x80c] */ r_edx = R32((u32)(r_ecx+0x80cu));
    /* 0040cc36: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040cc39: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040cc3c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040cc3f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc42: jne 0x40cc57 */ if (!fZ) goto L_0040cc57;
L_0040cc44:; BB(0x0040cc44);
    /* 0040cc44: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cc47: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0040cc4a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cc4d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0040cc50: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040cc52: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040cc55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40cc57u); call_ind(t); }
L_0040cc57:; BB(0x0040cc57);
    /* 0040cc57: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040cc5e: jmp 0x40cc69 */ goto L_0040cc69;
L_0040cc60:; BB(0x0040cc60);
    /* 0040cc60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc63: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040cc66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040cc69:; BB(0x0040cc69);
    /* 0040cc69: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cc6d: jge 0x40cd1b */ if ((fS==fO)) goto L_0040cd1b;
L_0040cc73:; BB(0x0040cc73);
    /* 0040cc73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cc79: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0040cc7d: call 0x40e090 */ r_esp -= 4; W32(r_esp, 0x40cc82u); f_0040e090();
    /* 0040cc82: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cc86: je 0x40cd16 */ if (fZ) goto L_0040cd16;
L_0040cc8c:; BB(0x0040cc8c);
    /* 0040cc8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cc8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cc90: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040cc96: call 0x419eb0 */ r_esp -= 4; W32(r_esp, 0x40cc9bu); f_00419eb0();
    /* 0040cc9b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040cc9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cca0: je 0x40cd16 */ if (fZ) goto L_0040cd16;
L_0040cca2:; BB(0x0040cca2);
    /* 0040cca2: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040cca8: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x40ccadu); f_005da7b0();
    /* 0040ccad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040ccb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ccb2: je 0x40cd16 */ if (fZ) goto L_0040cd16;
L_0040ccb4:; BB(0x0040ccb4);
    /* 0040ccb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ccb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ccb8: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0040ccbe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ccc0: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040ccc6: mov edx, dword ptr [eax + 0x2c4] */ r_edx = R32((u32)(r_eax+0x2c4u));
    /* 0040cccc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40ccceu); call_ind(t); }
    /* 0040ccce: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040ccd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ccd3: jne 0x40cd16 */ if (!fZ) goto L_0040cd16;
L_0040ccd5:; BB(0x0040ccd5);
    /* 0040ccd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ccd8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ccdb: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040ccdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cce2: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040cce8: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ccf0: jne 0x40cd16 */ if (!fZ) goto L_0040cd16;
L_0040ccf2:; BB(0x0040ccf2);
    /* 0040ccf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ccf4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ccf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ccf8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ccfb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ccfe: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040cd02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040cd08: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040cd0c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040cd0e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0040cd14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40cd16u); call_ind(t); }
L_0040cd16:; BB(0x0040cd16);
    /* 0040cd16: jmp 0x40cc60 */ goto L_0040cc60;
L_0040cd1b:; BB(0x0040cd1b);
    /* 0040cd1b: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040cd21: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x40cd26u); f_005da7b0();
    /* 0040cd26: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040cd29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cd2b: je 0x40cd4c */ if (fZ) goto L_0040cd4c;
L_0040cd2d:; BB(0x0040cd2d);
    /* 0040cd2d: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cd34: jne 0x40cd4c */ if (!fZ) goto L_0040cd4c;
L_0040cd36:; BB(0x0040cd36);
    /* 0040cd36: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0040cd3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040cd3e: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040cd44: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0040cd4a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40cd4cu); call_ind(t); }
L_0040cd4c:; BB(0x0040cd4c);
    /* 0040cd4c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cd4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cd4f: ret  */ FN_RET(0x0040cc00); r_esp += 4; return;
}

void f_0040cd50(void) /* sub_40CD50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040cd50);
    /* 0040cd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd51: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cd53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cd56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040cd59: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cd5d: jl 0x40cd65 */ if ((fS!=fO)) goto L_0040cd65;
L_0040cd5f:; BB(0x0040cd5f);
    /* 0040cd5f: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040cd63: jl 0x40cd67 */ if ((fS!=fO)) goto L_0040cd67;
L_0040cd65:; BB(0x0040cd65);
    /* 0040cd65: jmp 0x40cdb6 */ goto L_0040cdb6;
L_0040cd67:; BB(0x0040cd67);
    /* 0040cd67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040cd6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd6d: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cd72: je 0x40cdb6 */ if (fZ) goto L_0040cdb6;
L_0040cd74:; BB(0x0040cd74);
    /* 0040cd74: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040cd77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040cd7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040cd7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd82: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040cd86: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040cd89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040cd8c: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040cd90: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040cd92: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0040cd98: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40cd9au); call_ind(t); }
    /* 0040cd9a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040cd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cd9e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40cda3u); f_005dcb00();
    /* 0040cda3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040cda6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040cda9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cdac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040cdae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040cdb1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0040cdb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40cdb6u); call_ind(t); }
L_0040cdb6:; BB(0x0040cdb6);
    /* 0040cdb6: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cdb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cdb9: ret 8 */ FN_RET(0x0040cd50); r_esp += 12; return;
}

