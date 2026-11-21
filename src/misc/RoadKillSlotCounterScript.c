#include "protos.h"

void f_00570ad0(void) /* RoadKillSlotCounterScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570ad0);
    /* 00570ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00570ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00570ad7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570ad9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570adc: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x570ae1u); f_005fc0d0();
    /* 00570ae1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570ae4: mov dword ptr [eax], 0x6ca638 */ W32((u32)(r_eax), 0x6ca638u);
    /* 00570aea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570aed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00570af0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00570af3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570af6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00570af9: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00570afc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570aff: mov dword ptr [edx + 0x24], 1 */ W32((u32)(r_edx+0x24u), 0x1u);
    /* 00570b06: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x570b0cu); call_ind(t); }
    /* 00570b0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b0f: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00570b12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b15: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00570b18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b1b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00570b1e: cmp edx, dword ptr [eax + 0x188] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570b24: jge 0x570b2f */ if ((fS==fO)) goto L_00570b2f;
L_00570b26:; BB(0x00570b26);
    /* 00570b26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b29: mov byte ptr [eax + 0x2c], 0 */ W8((u32)(r_eax+0x2cu), 0x0u);
    /* 00570b2d: jmp 0x570b36 */ goto L_00570b36;
L_00570b2f:; BB(0x00570b2f);
    /* 00570b2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b32: mov byte ptr [ecx + 0x2c], 1 */ W8((u32)(r_ecx+0x2cu), 0x1u);
L_00570b36:; BB(0x00570b36);
    /* 00570b36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b39: mov esp, ebp */ r_esp = r_ebp;
    /* 00570b3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570b3c: ret 8 */ FN_RET(0x00570ad0); r_esp += 12; return;
}

void f_00570b40(void) /* RoadKillSlotCounterScript::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570b40);
    /* 00570b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00570b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00570b47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b4a: mov dword ptr [eax], 0x6ca638 */ W32((u32)(r_eax), 0x6ca638u);
    /* 00570b50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b53: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 00570b5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570b5d: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x570b62u); f_005fc150();
    /* 00570b62: mov esp, ebp */ r_esp = r_ebp;
    /* 00570b64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570b65: ret  */ FN_RET(0x00570b40); r_esp += 4; return;
}

void f_00570b70(void) /* RoadKillSlotCounterScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00570b70);
    /* 00570b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00570b73: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570b76: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00570b79: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x570b7fu); call_ind(t); }
    /* 00570b7f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00570b82: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 00570b86: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570b89: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x570b8eu); f_005fc360();
    /* 00570b8e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00570b91: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570b95: je 0x570b9c */ if (fZ) goto L_00570b9c;
L_00570b97:; BB(0x00570b97);
    /* 00570b97: jmp 0x570d31 */ goto L_00570d31;
L_00570b9c:; BB(0x00570b9c);
    /* 00570b9c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570b9f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00570ba2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00570ba5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00570bac: jmp 0x570bb7 */ goto L_00570bb7;
L_00570bae:; BB(0x00570bae);
    /* 00570bae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570bb1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00570bb4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00570bb7:; BB(0x00570bb7);
    /* 00570bb7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570bba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570bbd: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570bc0: jge 0x570cb7 */ if ((fS==fO)) goto L_00570cb7;
L_00570bc6:; BB(0x00570bc6);
    /* 00570bc6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570bc9: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00570bcc: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00570bd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570bd5: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00570bd8: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x570bddu); f_005eb220();
    /* 00570bdd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00570be0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570be3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00570be4: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00570be9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00570be9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00570be9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00570beb: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00570bed: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570bf0: je 0x570c69 */ if (fZ) goto L_00570c69;
L_00570bf2:; BB(0x00570bf2);
    /* 00570bf2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570bf5: movzx eax, byte ptr [edx + 0x2c] */ r_eax = (u32)R8((u32)(r_edx+0x2cu));
    /* 00570bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570bfb: je 0x570c08 */ if (fZ) goto L_00570c08;
L_00570bfd:; BB(0x00570bfd);
    /* 00570bfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570c00: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00570c03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00570c06: jmp 0x570c11 */ goto L_00570c11;
L_00570c08:; BB(0x00570c08);
    /* 00570c08: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570c0b: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00570c0e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00570c11:; BB(0x00570c11);
    /* 00570c11: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00570c14: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00570c17: cmp dword ptr [ebp - 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570c1b: jne 0x570c24 */ if (!fZ) goto L_00570c24;
L_00570c1d:; BB(0x00570c1d);
    /* 00570c1d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00570c24:; BB(0x00570c24);
    /* 00570c24: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570c28: jne 0x570c31 */ if (!fZ) goto L_00570c31;
L_00570c2a:; BB(0x00570c2a);
    /* 00570c2a: mov dword ptr [ebp - 0xc], 0x13 */ W32((u32)(r_ebp+0xfffffff4u), 0x13u);
L_00570c31:; BB(0x00570c31);
    /* 00570c31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570c34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570c35: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c38: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00570c3b: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00570c41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570c44: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00570c47: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c4a: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00570c4d: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00570c53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570c56: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00570c59: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00570c5b: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00570c61: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570c63u); call_ind(t); }
    /* 00570c63: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 00570c67: jmp 0x570ca4 */ goto L_00570ca4;
L_00570c69:; BB(0x00570c69);
    /* 00570c69: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c6c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00570c6f: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 00570c76: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c79: cmp dword ptr [eax + 0x24], edx */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570c7c: jge 0x570ca4 */ if ((fS==fO)) goto L_00570ca4;
L_00570c7e:; BB(0x00570c7e);
    /* 00570c7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00570c81: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00570c84: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c87: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570c8a: jne 0x570ca4 */ if (!fZ) goto L_00570ca4;
L_00570c8c:; BB(0x00570c8c);
    /* 00570c8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c8f: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00570c92: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00570c95: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c98: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00570c9b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570c9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00570ca1: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_00570ca4:; BB(0x00570ca4);
    /* 00570ca4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00570ca7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00570ca8: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00570cad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00570cad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00570cad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00570caf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00570cb2: jmp 0x570bae */ goto L_00570bae;
L_00570cb7:; BB(0x00570cb7);
    /* 00570cb7: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00570cbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570cbd: je 0x570d1d */ if (fZ) goto L_00570d1d;
L_00570cbf:; BB(0x00570cbf);
    /* 00570cbf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570cc2: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00570cc5: add ecx, 0x12c */ {  u32 a = r_ecx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00570ccb: cmp dword ptr [ebp - 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00570cce: jbe 0x570cfd */ if ((fC||fZ)) goto L_00570cfd;
L_00570cd0:; BB(0x00570cd0);
    /* 00570cd0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570cd3: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00570cd6: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 00570cdd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570ce0: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570ce3: jge 0x570cf4 */ if ((fS==fO)) goto L_00570cf4;
L_00570ce5:; BB(0x00570ce5);
    /* 00570ce5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570ce8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00570ceb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00570cee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570cf1: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
L_00570cf4:; BB(0x00570cf4);
    /* 00570cf4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570cf7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00570cfa: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_00570cfd:; BB(0x00570cfd);
    /* 00570cfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570cff: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570d02: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00570d04: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570d07: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00570d0a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570d0cu); call_ind(t); }
    /* 00570d0c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00570d0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570d11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570d13: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570d16: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00570d19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570d1bu); call_ind(t); }
    /* 00570d1b: jmp 0x570d2f */ goto L_00570d2f;
L_00570d1d:; BB(0x00570d1d);
    /* 00570d1d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570d20: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00570d23: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570d26: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00570d29: mov dword ptr [edx + 0x188], ecx */ W32((u32)(r_edx+0x188u), r_ecx);
L_00570d2f:; BB(0x00570d2f);
    /* 00570d2f: jmp 0x570d4c */ goto L_00570d4c;
L_00570d31:; BB(0x00570d31);
    /* 00570d31: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00570d33: jne 0x570d4c */ if (!fZ) goto L_00570d4c;
L_00570d35:; BB(0x00570d35);
    /* 00570d35: push 0x602 */ { u32 v = 0x602u; r_esp -= 4; W32(r_esp, v); }
    /* 00570d3a: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00570d3f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00570d44: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x570d49u); f_005e9f20();
    /* 00570d49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00570d4c:; BB(0x00570d4c);
    /* 00570d4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00570d4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570d4f: ret  */ FN_RET(0x00570b70); r_esp += 4; return;
}

