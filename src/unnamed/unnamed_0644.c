#include "protos.h"

void f_006449f0(void) /* sub_6449F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006449f0);
    /* 006449f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006449f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006449f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006449f5: push 0x6abd71 */ { u32 v = 0x6abd71u; r_esp -= 4; W32(r_esp, v); }
    /* 006449fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00644a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644a01: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644a04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00644a09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00644a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644a0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00644a0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00644a15: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00644a18: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00644a1f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00644a26: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00644a2d: jmp 0x644a38 */ goto L_00644a38;
L_00644a2f:; BB(0x00644a2f);
    /* 00644a2f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644a32: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644a35: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00644a38:; BB(0x00644a38);
    /* 00644a38: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644a3b: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644a3e: jge 0x644cca */ if ((fS==fO)) goto L_00644cca;
L_00644a44:; BB(0x00644a44);
    /* 00644a44: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644a47: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00644a48: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00644a4d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00644a4d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00644a4d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00644a4f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00644a52: add eax, dword ptr [edx*8 + 0x763438] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*8+0x763438u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644a59: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00644a5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644a5f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00644a60: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00644a65: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00644a65, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00644a65, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00644a67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00644a6a: add eax, dword ptr [edx*8 + 0x76343c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*8+0x76343cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644a71: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00644a74: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644a77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644a7a: cmp dword ptr [edx + ecx*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644a82: jne 0x644ac9 */ if (!fZ) goto L_00644ac9;
L_00644a84:; BB(0x00644a84);
    /* 00644a84: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644a87: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00644a8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644a8b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644a8e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00644a90: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644a93: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00644a99: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644a9bu); call_ind(t); }
    /* 00644a9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644a9e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644aa1: mov dword ptr [edx + ecx*4 + 0x194], eax */ W32((u32)(r_edx+r_ecx*4+0x194u), r_eax);
    /* 00644aa8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644aab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644aae: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644ab5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644ab8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644abb: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644ac2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00644ac4: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00644ac7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644ac9u); call_ind(t); }
L_00644ac9:; BB(0x00644ac9);
    /* 00644ac9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644acc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644acf: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644ad6: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00644ada: mov word ptr [eax + 0x190], cx */ W16((u32)(r_eax+0x190u), (u16)r_ecx);
    /* 00644ae1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644ae4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644ae7: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 00644aee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644af1: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00644af7: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 00644afd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b00: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x644b05u); f_005f53c0();
    /* 00644b05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b08: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 00644b0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644b0d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b10: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b13: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644b1a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b1d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b20: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644b27: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00644b29: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00644b2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644b2eu); call_ind(t); }
    /* 00644b2e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644b33: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b36: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00644b39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644b3bu); call_ind(t); }
    /* 00644b3b: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644b3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644b3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644b44: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b47: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00644b4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644b4cu); call_ind(t); }
    /* 00644b4c: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644b50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b53: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b56: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644b5d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b60: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b63: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644b6a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00644b6c: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00644b6f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644b71u); call_ind(t); }
    /* 00644b71: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b74: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b77: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644b7e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b81: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b84: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644b8b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00644b8d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00644b90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644b92u); call_ind(t); }
    /* 00644b92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644b95: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644b98: cmp dword ptr [edx + ecx*4 + 0x1194], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644ba0: jne 0x644c30 */ if (!fZ) goto L_00644c30;
L_00644ba6:; BB(0x00644ba6);
    /* 00644ba6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00644bab: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x644bb0u); f_00686d82();
    /* 00644bb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00644bb3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00644bb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00644bbd: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644bc1: je 0x644bd0 */ if (fZ) goto L_00644bd0;
L_00644bc3:; BB(0x00644bc3);
    /* 00644bc3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00644bc6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x644bcbu); f_005eaaf0();
    /* 00644bcb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00644bce: jmp 0x644bd7 */ goto L_00644bd7;
L_00644bd0:; BB(0x00644bd0);
    /* 00644bd0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00644bd7:; BB(0x00644bd7);
    /* 00644bd7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00644bda: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00644bdd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00644be4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644be7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644bea: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00644bed: mov dword ptr [edx + ecx*4 + 0x1194], eax */ W32((u32)(r_edx+r_ecx*4+0x1194u), r_eax);
    /* 00644bf4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644bf7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644bfa: mov eax, dword ptr [edx + ecx*4 + 0x1194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1194u));
    /* 00644c01: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c04: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00644c07: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00644c0a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00644c0c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c0f: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x644c14u); f_005f53c0();
    /* 00644c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644c15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00644c17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00644c19: push 0x30136d */ { u32 v = 0x30136du; r_esp -= 4; W32(r_esp, v); }
    /* 00644c1e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644c21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c24: mov ecx, dword ptr [ecx + eax*4 + 0x1194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00644c2b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x644c30u); f_005eae80();
L_00644c30:; BB(0x00644c30);
    /* 00644c30: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00644c35: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c38: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00644c3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644c3du); call_ind(t); }
    /* 00644c3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00644c40: lea edx, [eax + ecx - 1] */ r_edx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 00644c44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644c45: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00644c4a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c4d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00644c50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644c52u); call_ind(t); }
    /* 00644c52: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00644c55: lea edx, [eax + ecx - 2] */ r_edx = (u32)(r_eax+r_ecx+0xfffffffeu);
    /* 00644c59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644c5a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644c5d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c60: mov edx, dword ptr [ecx + eax*4 + 0x1194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00644c67: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644c6a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c6d: mov ecx, dword ptr [ecx + eax*4 + 0x1194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00644c74: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00644c76: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00644c79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644c7bu); call_ind(t); }
    /* 00644c7b: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644c7f: jne 0x644ca4 */ if (!fZ) goto L_00644ca4;
L_00644c81:; BB(0x00644c81);
    /* 00644c81: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644c84: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c87: mov eax, dword ptr [edx + ecx*4 + 0x1194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1194u));
    /* 00644c8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644c91: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644c94: mov ecx, dword ptr [edx + ecx*4 + 0x1194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1194u));
    /* 00644c9b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00644c9d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00644ca0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644ca2u); call_ind(t); }
    /* 00644ca2: jmp 0x644cc5 */ goto L_00644cc5;
L_00644ca4:; BB(0x00644ca4);
    /* 00644ca4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644ca7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644caa: mov edx, dword ptr [ecx + eax*4 + 0x1194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00644cb1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644cb4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644cb7: mov ecx, dword ptr [ecx + eax*4 + 0x1194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00644cbe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00644cc0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00644cc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644cc5u); call_ind(t); }
L_00644cc5:; BB(0x00644cc5);
    /* 00644cc5: jmp 0x644a2f */ goto L_00644a2f;
L_00644cca:; BB(0x00644cca);
    /* 00644cca: jmp 0x644cd5 */ goto L_00644cd5;
L_00644ccc:; BB(0x00644ccc);
    /* 00644ccc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644ccf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00644cd2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00644cd5:; BB(0x00644cd5);
    /* 00644cd5: cmp dword ptr [ebp - 0x10], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644cdc: jge 0x644d44 */ if ((fS==fO)) goto L_00644d44;
L_00644cde:; BB(0x00644cde);
    /* 00644cde: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644ce1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644ce4: cmp dword ptr [eax + edx*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644cec: je 0x644d0f */ if (fZ) goto L_00644d0f;
L_00644cee:; BB(0x00644cee);
    /* 00644cee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644cf1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644cf4: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644cfb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644cfe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644d01: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644d08: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00644d0a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00644d0d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644d0fu); call_ind(t); }
L_00644d0f:; BB(0x00644d0f);
    /* 00644d0f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644d12: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644d15: cmp dword ptr [ecx + eax*4 + 0x1194], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644d1d: je 0x644d42 */ if (fZ) goto L_00644d42;
L_00644d1f:; BB(0x00644d1f);
    /* 00644d1f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644d22: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644d25: mov ecx, dword ptr [eax + edx*4 + 0x1194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1194u));
    /* 00644d2c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644d2f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644d32: mov edx, dword ptr [eax + edx*4 + 0x1194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1194u));
    /* 00644d39: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00644d3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00644d3d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00644d40: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644d42u); call_ind(t); }
L_00644d42:; BB(0x00644d42);
    /* 00644d42: jmp 0x644ccc */ goto L_00644ccc;
L_00644d44:; BB(0x00644d44);
    /* 00644d44: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644d47: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x644d4cu); f_005eb570();
    /* 00644d4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00644d4f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00644d56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644d57: mov esp, ebp */ r_esp = r_ebp;
    /* 00644d59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644d5a: ret 8 */ FN_RET(0x006449f0); r_esp += 12; return;
}

