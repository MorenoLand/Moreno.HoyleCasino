#include "protos.h"

void f_005c8c60(void) /* sub_5C8C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8c60);
    /* 005c8c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8c61: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8c63: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8c66: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c8c69: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005c8c6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8c71: mov dword ptr [eax + 0x4f14], ecx */ W32((u32)(r_eax+0x4f14u), r_ecx);
    /* 005c8c77: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005c8c7d: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 005c8c83: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c8c86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8c89: sub ecx, 0x3158d1 */ {  u32 a = r_ecx; u32 b = 0x3158d1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8c8f: imul ecx, ecx, 0x384 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x384u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c8c95: add ecx, 0x793618 */ {  u32 a = r_ecx; u32 b = 0x793618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8c9b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8c9e: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 005c8ca1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c8ca8: jmp 0x5c8cb3 */ goto L_005c8cb3;
L_005c8caa:; BB(0x005c8caa);
    /* 005c8caa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8cad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8cb0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c8cb3:; BB(0x005c8cb3);
    /* 005c8cb3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8cb6: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c8cb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8cbc: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8cbe: jge 0x5c8d37 */ if ((fS==fO)) goto L_005c8d37;
L_005c8cc0:; BB(0x005c8cc0);
    /* 005c8cc0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8cc3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c8cc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8cc9: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c8ccc: lea ecx, [edx + eax + 0x20] */ r_ecx = (u32)(r_edx+r_eax+0x20u);
    /* 005c8cd0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8cd3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8cd6: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8cd9: jg 0x5c8d0c */ if ((!fZ&&fS==fO)) goto L_005c8d0c;
L_005c8cdb:; BB(0x005c8cdb);
    /* 005c8cdb: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005c8ce2: jmp 0x5c8ced */ goto L_005c8ced;
L_005c8ce4:; BB(0x005c8ce4);
    /* 005c8ce4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8ce7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8cea: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005c8ced:; BB(0x005c8ced);
    /* 005c8ced: cmp dword ptr [ebp - 0xc], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8cf1: jge 0x5c8d04 */ if ((fS==fO)) goto L_005c8d04;
L_005c8cf3:; BB(0x005c8cf3);
    /* 005c8cf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8cf6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8cf9: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8cfe: jge 0x5c8d02 */ if ((fS==fO)) goto L_005c8d02;
L_005c8d00:; BB(0x005c8d00);
    /* 005c8d00: jmp 0x5c8d04 */ goto L_005c8d04;
L_005c8d02:; BB(0x005c8d02);
    /* 005c8d02: jmp 0x5c8ce4 */ goto L_005c8ce4;
L_005c8d04:; BB(0x005c8d04);
    /* 005c8d04: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8d07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8d0a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_005c8d0c:; BB(0x005c8d0c);
    /* 005c8d0c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d0f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c8d12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8d15: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c8d18: mov edx, dword ptr [eax + ecx + 0x20] */ r_edx = R32((u32)(r_eax+r_ecx+0x20u));
    /* 005c8d1c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c8d1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8d20: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5c8d25u); f_0062fbf0();
    /* 005c8d25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8d28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8d2b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d2e: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 005c8d32: jmp 0x5c8caa */ goto L_005c8caa;
L_005c8d37:; BB(0x005c8d37);
    /* 005c8d37: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d3a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c8d3d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c8d40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8d41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8d43: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5c8d48u); f_0062fc30();
    /* 005c8d48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8d4b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d4e: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005c8d51: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d54: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c8d57: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c8d5a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8d5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8d5e: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5c8d63u); f_0062fc30();
    /* 005c8d63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8d66: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c8d6a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c8d6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d70: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c8d73: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005c8d76: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d79: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c8d7c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c8d7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d82: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c8d85: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c8d88: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d8b: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c8d90u); f_005c9140();
    /* 005c8d90: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c8d93: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005c8d9a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8d9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8d9d: ret 4 */ FN_RET(0x005c8c60); r_esp += 8; return;
}

void f_005c8dc0(void) /* sub_5C8DC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8dc0);
    /* 005c8dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8dc3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8dc6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c8dc9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8dcc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c8dcf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8dd2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8dd5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8dd8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c8ddb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8dde: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c8de1: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c8de4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c8de7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8dea: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8ded: jg 0x5c8dff */ if ((!fZ&&fS==fO)) goto L_005c8dff;
L_005c8def:; BB(0x005c8def);
    /* 005c8def: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8df1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8df4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8df5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8df8: call 0x5c8e20 */ r_esp -= 4; W32(r_esp, 0x5c8dfdu); f_005c8e20();
    /* 005c8dfd: jmp 0x5c8e13 */ goto L_005c8e13;
L_005c8dff:; BB(0x005c8dff);
    /* 005c8dff: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005c8e03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8e05: je 0x5c8e13 */ if (fZ) goto L_005c8e13;
L_005c8e07:; BB(0x005c8e07);
    /* 005c8e07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e0e: call 0x5c8e20 */ r_esp -= 4; W32(r_esp, 0x5c8e13u); f_005c8e20();
L_005c8e13:; BB(0x005c8e13);
    /* 005c8e13: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8e15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8e16: ret 4 */ FN_RET(0x005c8dc0); r_esp += 8; return;
}

void f_005c8e20(void) /* sub_5C8E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8e20);
    /* 005c8e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8e21: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8e23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8e26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c8e29: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e2c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c8e2f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8e32: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e35: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c8e38: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c8e3b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8e3e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c8e3f: idiv dword ptr [ebp - 0xc] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff4u)); if (!d) UNSUP(0x005c8e3f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c8e3f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c8e42: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c8e45: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e48: call 0x5c8f70 */ r_esp -= 4; W32(r_esp, 0x5c8e4du); f_005c8f70();
    /* 005c8e4d: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005c8e51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8e53: je 0x5c8e85 */ if (fZ) goto L_005c8e85;
L_005c8e55:; BB(0x005c8e55);
    /* 005c8e55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e58: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c8e5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c8e5e: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8e61: jle 0x5c8e6f */ if ((fZ||fS!=fO)) goto L_005c8e6f;
L_005c8e63:; BB(0x005c8e63);
    /* 005c8e63: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e66: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c8e69: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c8e6c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005c8e6f:; BB(0x005c8e6f);
    /* 005c8e6f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e72: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c8e75: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8e78: jge 0x5c8e83 */ if ((fS==fO)) goto L_005c8e83;
L_005c8e7a:; BB(0x005c8e7a);
    /* 005c8e7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e7d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c8e80: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_005c8e83:; BB(0x005c8e83);
    /* 005c8e83: jmp 0x5c8ebc */ goto L_005c8ebc;
L_005c8e85:; BB(0x005c8e85);
    /* 005c8e85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e88: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c8e8b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c8e8e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8e91: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8e94: jle 0x5c8ea5 */ if ((fZ||fS!=fO)) goto L_005c8ea5;
L_005c8e96:; BB(0x005c8e96);
    /* 005c8e96: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8e99: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c8e9c: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c8e9f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8ea2: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005c8ea5:; BB(0x005c8ea5);
    /* 005c8ea5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8ea8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c8eab: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8eae: jl 0x5c8ebc */ if ((fS!=fO)) goto L_005c8ebc;
L_005c8eb0:; BB(0x005c8eb0);
    /* 005c8eb0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c8eb3: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c8eb6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8eb9: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005c8ebc:; BB(0x005c8ebc);
    /* 005c8ebc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8ebf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ec0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8ec3: call 0x5c8ed0 */ r_esp -= 4; W32(r_esp, 0x5c8ec8u); f_005c8ed0();
    /* 005c8ec8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8eca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8ecb: ret 8 */ FN_RET(0x005c8e20); r_esp += 12; return;
}

void f_005c8ed0(void) /* sub_5C8ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8ed0);
    /* 005c8ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8ed3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8ed6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8ed9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8edc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c8edf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8ee2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c8ee5: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c8ee9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8eec: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005c8eef: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8ef1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8ef2: ret 4 */ FN_RET(0x005c8ed0); r_esp += 8; return;
}

void f_005c8f00(void) /* sub_5C8F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8f00);
    /* 005c8f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8f03: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8f06: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c8f09: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8f0c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c8f0f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8f12: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8f15: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c8f18: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c8f1b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8f1e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c8f1f: idiv dword ptr [ebp - 0xc] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff4u)); if (!d) UNSUP(0x005c8f1f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c8f1f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c8f22: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8f25: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c8f28: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8f2b: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c8f2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8f31: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8f34: jle 0x5c8f59 */ if ((fZ||fS!=fO)) goto L_005c8f59;
L_005c8f36:; BB(0x005c8f36);
    /* 005c8f36: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005c8f3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f3c: je 0x5c8f47 */ if (fZ) goto L_005c8f47;
L_005c8f3e:; BB(0x005c8f3e);
    /* 005c8f3e: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005c8f45: jmp 0x5c8f53 */ goto L_005c8f53;
L_005c8f47:; BB(0x005c8f47);
    /* 005c8f47: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8f4a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c8f4d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c8f50: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005c8f53:; BB(0x005c8f53);
    /* 005c8f53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c8f56: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c8f59:; BB(0x005c8f59);
    /* 005c8f59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8f5d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8f60: call 0x5c8ed0 */ r_esp -= 4; W32(r_esp, 0x5c8f65u); f_005c8ed0();
    /* 005c8f65: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8f67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8f68: ret 4 */ FN_RET(0x005c8f00); r_esp += 8; return;
}

void f_005c8f70(void) /* sub_5C8F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8f70);
    /* 005c8f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8f71: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8f73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8f76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8f79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8f7c: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c8f81u); f_005c9140();
    /* 005c8f81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c8f88: jmp 0x5c8f93 */ goto L_005c8f93;
L_005c8f8a:; BB(0x005c8f8a);
    /* 005c8f8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8f8d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8f90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c8f93:; BB(0x005c8f93);
    /* 005c8f93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8f96: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c8f99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8f9c: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8f9f: jge 0x5c8fad */ if ((fS==fO)) goto L_005c8fad;
L_005c8fa1:; BB(0x005c8fa1);
    /* 005c8fa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c8fa4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8fa7: mov byte ptr [ecx + 0x34], 0 */ W8((u32)(r_ecx+0x34u), 0x0u);
    /* 005c8fab: jmp 0x5c8f8a */ goto L_005c8f8a;
L_005c8fad:; BB(0x005c8fad);
    /* 005c8fad: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8faf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8fb0: ret  */ FN_RET(0x005c8f70); r_esp += 4; return;
}

void f_005c8fc0(void) /* sub_5C8FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8fc0);
    /* 005c8fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8fc3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8fc6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c8fc9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8fcc: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 005c8fd6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c8fdd: jmp 0x5c8fe8 */ goto L_005c8fe8;
L_005c8fdf:; BB(0x005c8fdf);
    /* 005c8fdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8fe2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8fe5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c8fe8:; BB(0x005c8fe8);
    /* 005c8fe8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8feb: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c8fee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8ff1: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8ff3: jge 0x5c9005 */ if ((fS==fO)) goto L_005c9005;
L_005c8ff5:; BB(0x005c8ff5);
    /* 005c8ff5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8ff8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8ffb: mov dword ptr [eax + edx*4 + 0x18], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0x18u), 0xffffffffu);
    /* 005c9003: jmp 0x5c8fdf */ goto L_005c8fdf;
L_005c9005:; BB(0x005c9005);
    /* 005c9005: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9008: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c900b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c900e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9011: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c9014: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c9017: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c901a: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c901d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c901e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9021: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5c9026u); f_005d0a20();
    /* 005c9026: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9028: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9029: ret  */ FN_RET(0x005c8fc0); r_esp += 4; return;
}

