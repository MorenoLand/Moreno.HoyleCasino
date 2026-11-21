#include "protos.h"

void f_00463c70(void) /* Card::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463c70);
    /* 00463c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00463c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463c7a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x463c7fu); f_005e9e20();
    /* 00463c7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463c82: mov dword ptr [eax], 0x6ba8e0 */ W32((u32)(r_eax), 0x6ba8e0u);
    /* 00463c88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463c8b: mov byte ptr [ecx + 0x14], 0 */ W8((u32)(r_ecx+0x14u), 0x0u);
    /* 00463c8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463c92: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00463c99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463c9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00463c9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463c9f: ret  */ FN_RET(0x00463c70); r_esp += 4; return;
}

void f_00463ca0(void) /* Card::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463ca0);
    /* 00463ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00463ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00463ca5: push 0x69f3fe */ { u32 v = 0x69f3feu; r_esp -= 4; W32(r_esp, v); }
    /* 00463caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00463cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463cb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463cb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00463cb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00463cbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463cbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00463cbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00463cc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00463cc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463ccb: mov dword ptr [eax], 0x6ba8e0 */ W32((u32)(r_eax), 0x6ba8e0u);
    /* 00463cd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00463cd8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463cdb: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463cdf: je 0x463d1a */ if (fZ) goto L_00463d1a;
L_00463ce1:; BB(0x00463ce1);
    /* 00463ce1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463ce4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00463ce7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00463cea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00463ced: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00463cf0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463cf4: je 0x463d09 */ if (fZ) goto L_00463d09;
L_00463cf6:; BB(0x00463cf6);
    /* 00463cf6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00463cf8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00463cfb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00463cfd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00463d00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00463d02: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x463d04u); call_ind(t); }
    /* 00463d04: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00463d07: jmp 0x463d10 */ goto L_00463d10;
L_00463d09:; BB(0x00463d09);
    /* 00463d09: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00463d10:; BB(0x00463d10);
    /* 00463d10: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463d13: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_00463d1a:; BB(0x00463d1a);
    /* 00463d1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00463d21: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463d24: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x463d29u); f_005e9e40();
    /* 00463d29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00463d2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00463d33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00463d34: mov esp, ebp */ r_esp = r_ebp;
    /* 00463d36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463d37: ret  */ FN_RET(0x00463ca0); r_esp += 4; return;
}

void f_00641620(void) /* card::func_00641620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641620);
    /* 00641620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641621: mov ebp, esp */ r_ebp = r_esp;
    /* 00641623: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641626: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064162d: jmp 0x641638 */ goto L_00641638;
L_0064162f:; BB(0x0064162f);
    /* 0064162f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641632: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641635: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00641638:; BB(0x00641638);
    /* 00641638: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064163b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064163c: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x641641u); f_00686ecc();
    /* 00641641: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641644: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641647: jge 0x641668 */ if ((fS==fO)) goto L_00641668;
L_00641649:; BB(0x00641649);
    /* 00641649: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064164d: jle 0x641668 */ if ((fZ||fS!=fO)) goto L_00641668;
L_0064164f:; BB(0x0064164f);
    /* 0064164f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641652: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641655: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00641658: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064165b: jne 0x641666 */ if (!fZ) goto L_00641666;
L_0064165d:; BB(0x0064165d);
    /* 0064165d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00641660: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00641663: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00641666:; BB(0x00641666);
    /* 00641666: jmp 0x64162f */ goto L_0064162f;
L_00641668:; BB(0x00641668);
    /* 00641668: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064166b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064166c: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x641671u); f_00686ecc();
    /* 00641671: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641674: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641677: jne 0x641690 */ if (!fZ) goto L_00641690;
L_00641679:; BB(0x00641679);
    /* 00641679: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064167c: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00641682: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00641685: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0064168b: jmp 0x64187c */ goto L_0064187c;
L_00641690:; BB(0x00641690);
    /* 00641690: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641693: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641696: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00641699: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064169c: jl 0x64170d */ if ((fS!=fO)) goto L_0064170d;
L_0064169e:; BB(0x0064169e);
    /* 0064169e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006416a1: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006416a4: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 006416a7: cmp edx, 0x39 */ {  u32 a = r_edx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006416aa: jg 0x64170d */ if ((!fZ&&fS==fO)) goto L_0064170d;
L_006416ac:; BB(0x006416ac);
    /* 006416ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006416af: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006416b2: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 006416b6: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006416b9: jl 0x6416f7 */ if ((fS!=fO)) goto L_006416f7;
L_006416bb:; BB(0x006416bb);
    /* 006416bb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006416be: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006416c1: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 006416c5: cmp eax, 0x39 */ {  u32 a = r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006416c8: jg 0x6416f7 */ if ((!fZ&&fS==fO)) goto L_006416f7;
L_006416ca:; BB(0x006416ca);
    /* 006416ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006416cd: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006416d0: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 006416d3: sub edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006416d6: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006416d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006416dc: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006416df: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 006416e3: lea edx, [edx + ecx - 0x30] */ r_edx = (u32)(r_edx+r_ecx+0xffffffd0u);
    /* 006416e7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006416ea: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006416ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006416ef: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006416f2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006416f5: jmp 0x641708 */ goto L_00641708;
L_006416f7:; BB(0x006416f7);
    /* 006416f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006416fa: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006416fd: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00641700: sub eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00641703: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00641706: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00641708:; BB(0x00641708);
    /* 00641708: jmp 0x6417e7 */ goto L_006417e7;
L_0064170d:; BB(0x0064170d);
    /* 0064170d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641710: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641713: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00641716: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00641719: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064171c: sub ecx, 0x41 */ {  u32 a = r_ecx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064171f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00641722: cmp dword ptr [ebp - 8], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00641726: ja 0x6417cc */ if ((!fC&&!fZ)) goto L_006417cc;
L_0064172c:; BB(0x0064172c);
    /* 0064172c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064172f: movzx eax, byte ptr [edx + 0x6418a8] */ r_eax = (u32)R8((u32)(r_edx+0x6418a8u));
    /* 00641736: jmp dword ptr [eax*4 + 0x641880] */ { u32 t = R32((u32)(r_eax*4+0x641880u)); switch (t) { case 0x64174bu: goto L_0064174b; case 0x6417b6u: goto L_006417b6; case 0x6417abu: goto L_006417ab; case 0x641772u: goto L_00641772; case 0x641759u: goto L_00641759; case 0x641767u: goto L_00641767; case 0x6417a0u: goto L_006417a0; case 0x6417c1u: goto L_006417c1; case 0x64173du: goto L_0064173d; case 0x6417ccu: goto L_006417cc; default: UNSUP(0x00641736, "jump table entry is not a known target"); } }
L_0064173d:; BB(0x0064173d);
    /* 0064173d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00641740: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 00641746: jmp 0x6417e7 */ goto L_006417e7;
L_0064174b:; BB(0x0064174b);
    /* 0064174b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0064174e: mov dword ptr [edx], 0xe */ W32((u32)(r_edx), 0xeu);
    /* 00641754: jmp 0x6417e7 */ goto L_006417e7;
L_00641759:; BB(0x00641759);
    /* 00641759: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064175c: mov dword ptr [eax], 0xd */ W32((u32)(r_eax), 0xdu);
    /* 00641762: jmp 0x6417e7 */ goto L_006417e7;
L_00641767:; BB(0x00641767);
    /* 00641767: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0064176a: mov dword ptr [ecx], 0xc */ W32((u32)(r_ecx), 0xcu);
    /* 00641770: jmp 0x6417e7 */ goto L_006417e7;
L_00641772:; BB(0x00641772);
    /* 00641772: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641775: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641778: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0064177c: cmp eax, 0x6f */ {  u32 a = r_eax; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064177f: jne 0x641795 */ if (!fZ) goto L_00641795;
L_00641781:; BB(0x00641781);
    /* 00641781: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00641784: mov dword ptr [ecx], 0xf */ W32((u32)(r_ecx), 0xfu);
    /* 0064178a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064178d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641790: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00641793: jmp 0x64179e */ goto L_0064179e;
L_00641795:; BB(0x00641795);
    /* 00641795: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00641798: mov dword ptr [eax], 0xb */ W32((u32)(r_eax), 0xbu);
L_0064179e:; BB(0x0064179e);
    /* 0064179e: jmp 0x6417e7 */ goto L_006417e7;
L_006417a0:; BB(0x006417a0);
    /* 006417a0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006417a3: mov dword ptr [ecx], 0xe */ W32((u32)(r_ecx), 0xeu);
    /* 006417a9: jmp 0x6417e7 */ goto L_006417e7;
L_006417ab:; BB(0x006417ab);
    /* 006417ab: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006417ae: mov dword ptr [edx], 0xd */ W32((u32)(r_edx), 0xdu);
    /* 006417b4: jmp 0x6417e7 */ goto L_006417e7;
L_006417b6:; BB(0x006417b6);
    /* 006417b6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006417b9: mov dword ptr [eax], 0xc */ W32((u32)(r_eax), 0xcu);
    /* 006417bf: jmp 0x6417e7 */ goto L_006417e7;
L_006417c1:; BB(0x006417c1);
    /* 006417c1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006417c4: mov dword ptr [ecx], 0xb */ W32((u32)(r_ecx), 0xbu);
    /* 006417ca: jmp 0x6417e7 */ goto L_006417e7;
L_006417cc:; BB(0x006417cc);
    /* 006417cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006417ce: jne 0x6417e7 */ if (!fZ) goto L_006417e7;
L_006417d0:; BB(0x006417d0);
    /* 006417d0: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 006417d5: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006417da: push 0x6d9834 */ { u32 v = 0x6d9834u; r_esp -= 4; W32(r_esp, v); }
    /* 006417df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6417e4u); f_005e9f20();
    /* 006417e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006417e7:; BB(0x006417e7);
    /* 006417e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006417ea: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006417ed: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 006417f1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006417f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006417f7: sub eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006417fa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006417fd: cmp dword ptr [ebp - 0xc], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00641801: ja 0x641861 */ if ((!fC&&!fZ)) goto L_00641861;
L_00641803:; BB(0x00641803);
    /* 00641803: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641806: movzx edx, byte ptr [ecx + 0x6418ec] */ r_edx = (u32)R8((u32)(r_ecx+0x6418ecu));
    /* 0064180d: jmp dword ptr [edx*4 + 0x6418cc] */ { u32 t = R32((u32)(r_edx*4+0x6418ccu)); switch (t) { case 0x641814u: goto L_00641814; case 0x64181fu: goto L_0064181f; case 0x64182au: goto L_0064182a; case 0x641856u: goto L_00641856; case 0x641835u: goto L_00641835; case 0x641840u: goto L_00641840; case 0x64184bu: goto L_0064184b; case 0x641861u: goto L_00641861; default: UNSUP(0x0064180d, "jump table entry is not a known target"); } }
L_00641814:; BB(0x00641814);
    /* 00641814: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00641817: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0064181d: jmp 0x64187c */ goto L_0064187c;
L_0064181f:; BB(0x0064181f);
    /* 0064181f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00641822: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 00641828: jmp 0x64187c */ goto L_0064187c;
L_0064182a:; BB(0x0064182a);
    /* 0064182a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0064182d: mov dword ptr [edx], 2 */ W32((u32)(r_edx), 0x2u);
    /* 00641833: jmp 0x64187c */ goto L_0064187c;
L_00641835:; BB(0x00641835);
    /* 00641835: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00641838: mov dword ptr [eax], 3 */ W32((u32)(r_eax), 0x3u);
    /* 0064183e: jmp 0x64187c */ goto L_0064187c;
L_00641840:; BB(0x00641840);
    /* 00641840: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00641843: mov dword ptr [ecx], 4 */ W32((u32)(r_ecx), 0x4u);
    /* 00641849: jmp 0x64187c */ goto L_0064187c;
L_0064184b:; BB(0x0064184b);
    /* 0064184b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0064184e: mov dword ptr [edx], 5 */ W32((u32)(r_edx), 0x5u);
    /* 00641854: jmp 0x64187c */ goto L_0064187c;
L_00641856:; BB(0x00641856);
    /* 00641856: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00641859: mov dword ptr [eax], 6 */ W32((u32)(r_eax), 0x6u);
    /* 0064185f: jmp 0x64187c */ goto L_0064187c;
L_00641861:; BB(0x00641861);
    /* 00641861: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00641863: jne 0x64187c */ if (!fZ) goto L_0064187c;
L_00641865:; BB(0x00641865);
    /* 00641865: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0064186a: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064186f: push 0x6d9834 */ { u32 v = 0x6d9834u; r_esp -= 4; W32(r_esp, v); }
    /* 00641874: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x641879u); f_005e9f20();
    /* 00641879: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064187c:; BB(0x0064187c);
    /* 0064187c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064187e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064187f: ret  */ FN_RET(0x00641620); r_esp += 4; return;
}

void f_006424c0(void) /* card::func_006424c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006424c0);
    /* 006424c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006424c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006424c3: sub esp, 0x808 */ {  u32 a = r_esp; u32 b = 0x808u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006424c9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006424ce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006424d0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006424d3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006424d7: jg 0x6424f0 */ if ((!fZ&&fS==fO)) goto L_006424f0;
L_006424d9:; BB(0x006424d9);
    /* 006424d9: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 006424de: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006424e3: push 0x6dc3f4 */ { u32 v = 0x6dc3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006424e8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6424edu); f_005e9f20();
    /* 006424ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006424f0:; BB(0x006424f0);
    /* 006424f0: cmp dword ptr [ebp + 0x10], 0x400 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006424f7: jle 0x642510 */ if ((fZ||fS!=fO)) goto L_00642510;
L_006424f9:; BB(0x006424f9);
    /* 006424f9: push 0x1f6 */ { u32 v = 0x1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 006424fe: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00642503: push 0x6dc3d8 */ { u32 v = 0x6dc3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00642508: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64250du); f_005e9f20();
    /* 0064250d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00642510:; BB(0x00642510);
    /* 00642510: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642517: jmp 0x642522 */ goto L_00642522;
L_00642519:; BB(0x00642519);
    /* 00642519: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064251c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064251f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00642522:; BB(0x00642522);
    /* 00642522: cmp dword ptr [ebp - 4], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642529: jge 0x64253a */ if ((fS==fO)) goto L_0064253a;
L_0064252b:; BB(0x0064252b);
    /* 0064252b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064252e: mov word ptr [ebp + eax*2 - 0x808], 0 */ W16((u32)(r_ebp+r_eax*2+0xfffff7f8u), 0x0u);
    /* 00642538: jmp 0x642519 */ goto L_00642519;
L_0064253a:; BB(0x0064253a);
    /* 0064253a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642541: jmp 0x64254c */ goto L_0064254c;
L_00642543:; BB(0x00642543);
    /* 00642543: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642546: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00642549: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0064254c:; BB(0x0064254c);
    /* 0064254c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064254f: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642552: jge 0x64256b */ if ((fS==fO)) goto L_0064256b;
L_00642554:; BB(0x00642554);
    /* 00642554: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064255a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064255d: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00642561: mov word ptr [ebp + eax*2 - 0x808], cx */ W16((u32)(r_ebp+r_eax*2+0xfffff7f8u), (u16)r_ecx);
    /* 00642569: jmp 0x642543 */ goto L_00642543;
L_0064256b:; BB(0x0064256b);
    /* 0064256b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0064256e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064256f: lea eax, [ebp - 0x808] */ r_eax = (u32)(r_ebp+0xfffff7f8u);
    /* 00642575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642576: call 0x641ed0 */ r_esp -= 4; W32(r_esp, 0x64257bu); f_00641ed0();
    /* 0064257b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064257e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642585: jmp 0x642590 */ goto L_00642590;
L_00642587:; BB(0x00642587);
    /* 00642587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064258a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064258d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00642590:; BB(0x00642590);
    /* 00642590: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642593: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642596: jge 0x6425e7 */ if ((fS==fO)) goto L_006425e7;
L_00642598:; BB(0x00642598);
    /* 00642598: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064259b: movzx ecx, word ptr [ebp + eax*2 - 0x808] */ r_ecx = (u32)R16((u32)(r_ebp+r_eax*2+0xfffff7f8u));
    /* 006425a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006425a5: jne 0x6425a9 */ if (!fZ) goto L_006425a9;
L_006425a7:; BB(0x006425a7);
    /* 006425a7: jmp 0x642587 */ goto L_00642587;
L_006425a9:; BB(0x006425a9);
    /* 006425a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006425ac: mov ax, word ptr [ebp + edx*2 - 0x808] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+r_edx*2+0xfffff7f8u))) & 0xffffu);
    /* 006425b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006425b5: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x6425bau); f_00641290();
    /* 006425ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006425bd: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006425c0: je 0x6425c4 */ if (fZ) goto L_006425c4;
L_006425c2:; BB(0x006425c2);
    /* 006425c2: jmp 0x642587 */ goto L_00642587;
L_006425c4:; BB(0x006425c4);
    /* 006425c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006425c7: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006425ca: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006425cd: jne 0x6425e5 */ if (!fZ) goto L_006425e5;
L_006425cf:; BB(0x006425cf);
    /* 006425cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006425d2: mov ax, word ptr [ebp + edx*2 - 0x808] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+r_edx*2+0xfffff7f8u))) & 0xffffu);
    /* 006425da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006425db: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x6425e0u); f_00641280();
    /* 006425e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006425e3: jmp 0x6425e9 */ goto L_006425e9;
L_006425e5:; BB(0x006425e5);
    /* 006425e5: jmp 0x642587 */ goto L_00642587;
L_006425e7:; BB(0x006425e7);
    /* 006425e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006425e9:; BB(0x006425e9);
    /* 006425e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006425ec: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006425ee: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6425f3u); f_00686d72();
    /* 006425f3: mov esp, ebp */ r_esp = r_ebp;
    /* 006425f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006425f6: ret  */ FN_RET(0x006424c0); r_esp += 4; return;
}

void f_00642620(void) /* card::func_00642620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642620);
    /* 00642620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642621: mov ebp, esp */ r_ebp = r_esp;
    /* 00642623: sub esp, 0x808 */ {  u32 a = r_esp; u32 b = 0x808u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642629: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064262e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00642630: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00642633: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642637: jg 0x642650 */ if ((!fZ&&fS==fO)) goto L_00642650;
L_00642639:; BB(0x00642639);
    /* 00642639: push 0x217 */ { u32 v = 0x217u; r_esp -= 4; W32(r_esp, v); }
    /* 0064263e: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00642643: push 0x6dc3f4 */ { u32 v = 0x6dc3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642648: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64264du); f_005e9f20();
    /* 0064264d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00642650:; BB(0x00642650);
    /* 00642650: cmp dword ptr [ebp + 0x10], 0x400 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642657: jle 0x642670 */ if ((fZ||fS!=fO)) goto L_00642670;
L_00642659:; BB(0x00642659);
    /* 00642659: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 0064265e: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00642663: push 0x6dc3d8 */ { u32 v = 0x6dc3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00642668: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64266du); f_005e9f20();
    /* 0064266d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00642670:; BB(0x00642670);
    /* 00642670: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642677: jmp 0x642682 */ goto L_00642682;
L_00642679:; BB(0x00642679);
    /* 00642679: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064267c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064267f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00642682:; BB(0x00642682);
    /* 00642682: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642685: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642688: jge 0x6426a1 */ if ((fS==fO)) goto L_006426a1;
L_0064268a:; BB(0x0064268a);
    /* 0064268a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064268d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642690: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00642693: mov dx, word ptr [eax + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00642697: mov word ptr [ebp + ecx*2 - 0x808], dx */ W16((u32)(r_ebp+r_ecx*2+0xfffff7f8u), (u16)r_edx);
    /* 0064269f: jmp 0x642679 */ goto L_00642679;
L_006426a1:; BB(0x006426a1);
    /* 006426a1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006426a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006426a5: lea ecx, [ebp - 0x808] */ r_ecx = (u32)(r_ebp+0xfffff7f8u);
    /* 006426ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006426ac: call 0x641e20 */ r_esp -= 4; W32(r_esp, 0x6426b1u); f_00641e20();
    /* 006426b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006426b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006426bb: jmp 0x6426c6 */ goto L_006426c6;
L_006426bd:; BB(0x006426bd);
    /* 006426bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006426c0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006426c3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006426c6:; BB(0x006426c6);
    /* 006426c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006426c9: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006426cc: jge 0x64271c */ if ((fS==fO)) goto L_0064271c;
L_006426ce:; BB(0x006426ce);
    /* 006426ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006426d1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006426d4: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 006426d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006426da: jne 0x6426de */ if (!fZ) goto L_006426de;
L_006426dc:; BB(0x006426dc);
    /* 006426dc: jmp 0x6426bd */ goto L_006426bd;
L_006426de:; BB(0x006426de);
    /* 006426de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006426e1: mov dx, word ptr [ebp + ecx*2 - 0x808] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xfffff7f8u))) & 0xffffu);
    /* 006426e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006426ea: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x6426efu); f_00641290();
    /* 006426ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006426f2: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006426f5: je 0x6426f9 */ if (fZ) goto L_006426f9;
L_006426f7:; BB(0x006426f7);
    /* 006426f7: jmp 0x6426bd */ goto L_006426bd;
L_006426f9:; BB(0x006426f9);
    /* 006426f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006426fc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006426ff: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00642702: jne 0x64271a */ if (!fZ) goto L_0064271a;
L_00642704:; BB(0x00642704);
    /* 00642704: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642707: mov dx, word ptr [ebp + ecx*2 - 0x808] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xfffff7f8u))) & 0xffffu);
    /* 0064270f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642710: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642715u); f_00641280();
    /* 00642715: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642718: jmp 0x64271e */ goto L_0064271e;
L_0064271a:; BB(0x0064271a);
    /* 0064271a: jmp 0x6426bd */ goto L_006426bd;
L_0064271c:; BB(0x0064271c);
    /* 0064271c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064271e:; BB(0x0064271e);
    /* 0064271e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00642721: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00642723: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x642728u); f_00686d72();
    /* 00642728: mov esp, ebp */ r_esp = r_ebp;
    /* 0064272a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064272b: ret  */ FN_RET(0x00642620); r_esp += 4; return;
}

void f_00642e70(void) /* card::func_00642e70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642e70);
    /* 00642e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00642e73: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642e76: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00642e79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00642e80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00642e83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00642e86: mov dword ptr [eax + 0x804], ecx */ W32((u32)(r_eax+0x804u), r_ecx);
    /* 00642e8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00642e8f: mov eax, dword ptr [edx + 0x804] */ r_eax = R32((u32)(r_edx+0x804u));
    /* 00642e95: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00642e98: cmp dword ptr [ebp - 0x18], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00642e9c: ja 0x64360e */ if ((!fC&&!fZ)) goto L_0064360e;
L_00642ea2:; BB(0x00642ea2);
    /* 00642ea2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00642ea5: jmp dword ptr [ecx*4 + 0x643650] */ { u32 t = R32((u32)(r_ecx*4+0x643650u)); switch (t) { case 0x642eacu: goto L_00642eac; case 0x642f09u: goto L_00642f09; case 0x642f80u: goto L_00642f80; case 0x642ff7u: goto L_00642ff7; case 0x64306eu: goto L_0064306e; case 0x6430e5u: goto L_006430e5; case 0x643142u: goto L_00643142; case 0x643256u: goto L_00643256; case 0x6431b9u: goto L_006431b9; case 0x6432d3u: goto L_006432d3; case 0x6432d8u: goto L_006432d8; case 0x6432ddu: goto L_006432dd; case 0x6432e2u: goto L_006432e2; case 0x64335fu: goto L_0064335f; case 0x64341du: goto L_0064341d; case 0x6434d6u: goto L_006434d6; case 0x643533u: goto L_00643533; case 0x643590u: goto L_00643590; default: UNSUP(0x00642ea5, "jump table entry is not a known target"); } }
L_00642eac:; BB(0x00642eac);
    /* 00642eac: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00642eb3: jmp 0x642ebe */ goto L_00642ebe;
L_00642eb5:; BB(0x00642eb5);
    /* 00642eb5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642eb8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00642ebb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00642ebe:; BB(0x00642ebe);
    /* 00642ebe: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642ec2: jg 0x642f04 */ if ((!fZ&&fS==fO)) goto L_00642f04;
L_00642ec4:; BB(0x00642ec4);
    /* 00642ec4: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00642ecb: jmp 0x642ed6 */ goto L_00642ed6;
L_00642ecd:; BB(0x00642ecd);
    /* 00642ecd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642ed0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642ed3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00642ed6:; BB(0x00642ed6);
    /* 00642ed6: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642eda: jg 0x642f02 */ if ((!fZ&&fS==fO)) goto L_00642f02;
L_00642edc:; BB(0x00642edc);
    /* 00642edc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642edf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642ee0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642ee3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642ee4: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x642ee9u); f_00641230();
    /* 00642ee9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642eec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642eef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00642ef2: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00642ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642efa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642efd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00642f00: jmp 0x642ecd */ goto L_00642ecd;
L_00642f02:; BB(0x00642f02);
    /* 00642f02: jmp 0x642eb5 */ goto L_00642eb5;
L_00642f04:; BB(0x00642f04);
    /* 00642f04: jmp 0x643629 */ goto L_00643629;
L_00642f09:; BB(0x00642f09);
    /* 00642f09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00642f10: jmp 0x642f1b */ goto L_00642f1b;
L_00642f12:; BB(0x00642f12);
    /* 00642f12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00642f15: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00642f18: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00642f1b:; BB(0x00642f1b);
    /* 00642f1b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642f1f: jge 0x642f7b */ if ((fS==fO)) goto L_00642f7b;
L_00642f21:; BB(0x00642f21);
    /* 00642f21: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00642f28: jmp 0x642f33 */ goto L_00642f33;
L_00642f2a:; BB(0x00642f2a);
    /* 00642f2a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642f2d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00642f30: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00642f33:; BB(0x00642f33);
    /* 00642f33: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642f37: jg 0x642f79 */ if ((!fZ&&fS==fO)) goto L_00642f79;
L_00642f39:; BB(0x00642f39);
    /* 00642f39: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00642f40: jmp 0x642f4b */ goto L_00642f4b;
L_00642f42:; BB(0x00642f42);
    /* 00642f42: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642f45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642f48: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00642f4b:; BB(0x00642f4b);
    /* 00642f4b: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642f4f: jg 0x642f77 */ if ((!fZ&&fS==fO)) goto L_00642f77;
L_00642f51:; BB(0x00642f51);
    /* 00642f51: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642f54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642f55: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642f58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642f59: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x642f5eu); f_00641230();
    /* 00642f5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642f61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642f64: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00642f67: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00642f6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642f6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642f72: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00642f75: jmp 0x642f42 */ goto L_00642f42;
L_00642f77:; BB(0x00642f77);
    /* 00642f77: jmp 0x642f2a */ goto L_00642f2a;
L_00642f79:; BB(0x00642f79);
    /* 00642f79: jmp 0x642f12 */ goto L_00642f12;
L_00642f7b:; BB(0x00642f7b);
    /* 00642f7b: jmp 0x643629 */ goto L_00643629;
L_00642f80:; BB(0x00642f80);
    /* 00642f80: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00642f87: jmp 0x642f92 */ goto L_00642f92;
L_00642f89:; BB(0x00642f89);
    /* 00642f89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00642f8c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00642f8f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00642f92:; BB(0x00642f92);
    /* 00642f92: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642f96: jge 0x642ff2 */ if ((fS==fO)) goto L_00642ff2;
L_00642f98:; BB(0x00642f98);
    /* 00642f98: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00642f9f: jmp 0x642faa */ goto L_00642faa;
L_00642fa1:; BB(0x00642fa1);
    /* 00642fa1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642fa4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00642fa7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00642faa:; BB(0x00642faa);
    /* 00642faa: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642fae: jg 0x642ff0 */ if ((!fZ&&fS==fO)) goto L_00642ff0;
L_00642fb0:; BB(0x00642fb0);
    /* 00642fb0: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00642fb7: jmp 0x642fc2 */ goto L_00642fc2;
L_00642fb9:; BB(0x00642fb9);
    /* 00642fb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642fbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642fbf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00642fc2:; BB(0x00642fc2);
    /* 00642fc2: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642fc6: jg 0x642fee */ if ((!fZ&&fS==fO)) goto L_00642fee;
L_00642fc8:; BB(0x00642fc8);
    /* 00642fc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642fcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642fcc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642fcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642fd0: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x642fd5u); f_00641230();
    /* 00642fd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642fd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642fdb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00642fde: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00642fe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642fe6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642fe9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00642fec: jmp 0x642fb9 */ goto L_00642fb9;
L_00642fee:; BB(0x00642fee);
    /* 00642fee: jmp 0x642fa1 */ goto L_00642fa1;
L_00642ff0:; BB(0x00642ff0);
    /* 00642ff0: jmp 0x642f89 */ goto L_00642f89;
L_00642ff2:; BB(0x00642ff2);
    /* 00642ff2: jmp 0x643629 */ goto L_00643629;
L_00642ff7:; BB(0x00642ff7);
    /* 00642ff7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00642ffe: jmp 0x643009 */ goto L_00643009;
L_00643000:; BB(0x00643000);
    /* 00643000: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00643003: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00643006: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00643009:; BB(0x00643009);
    /* 00643009: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064300d: jge 0x643069 */ if ((fS==fO)) goto L_00643069;
L_0064300f:; BB(0x0064300f);
    /* 0064300f: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00643016: jmp 0x643021 */ goto L_00643021;
L_00643018:; BB(0x00643018);
    /* 00643018: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064301b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064301e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00643021:; BB(0x00643021);
    /* 00643021: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643025: jg 0x643067 */ if ((!fZ&&fS==fO)) goto L_00643067;
L_00643027:; BB(0x00643027);
    /* 00643027: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0064302e: jmp 0x643039 */ goto L_00643039;
L_00643030:; BB(0x00643030);
    /* 00643030: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643033: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643036: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00643039:; BB(0x00643039);
    /* 00643039: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064303d: jg 0x643065 */ if ((!fZ&&fS==fO)) goto L_00643065;
L_0064303f:; BB(0x0064303f);
    /* 0064303f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643042: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643043: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643046: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643047: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x64304cu); f_00641230();
    /* 0064304c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064304f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643052: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643055: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 0064305a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064305d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643060: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00643063: jmp 0x643030 */ goto L_00643030;
L_00643065:; BB(0x00643065);
    /* 00643065: jmp 0x643018 */ goto L_00643018;
L_00643067:; BB(0x00643067);
    /* 00643067: jmp 0x643000 */ goto L_00643000;
L_00643069:; BB(0x00643069);
    /* 00643069: jmp 0x643629 */ goto L_00643629;
L_0064306e:; BB(0x0064306e);
    /* 0064306e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00643075: jmp 0x643080 */ goto L_00643080;
L_00643077:; BB(0x00643077);
    /* 00643077: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064307a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064307d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00643080:; BB(0x00643080);
    /* 00643080: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643084: jge 0x6430e0 */ if ((fS==fO)) goto L_006430e0;
L_00643086:; BB(0x00643086);
    /* 00643086: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0064308d: jmp 0x643098 */ goto L_00643098;
L_0064308f:; BB(0x0064308f);
    /* 0064308f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643092: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643095: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00643098:; BB(0x00643098);
    /* 00643098: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064309c: jg 0x6430de */ if ((!fZ&&fS==fO)) goto L_006430de;
L_0064309e:; BB(0x0064309e);
    /* 0064309e: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 006430a5: jmp 0x6430b0 */ goto L_006430b0;
L_006430a7:; BB(0x006430a7);
    /* 006430a7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006430aa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006430ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_006430b0:; BB(0x006430b0);
    /* 006430b0: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006430b4: jg 0x6430dc */ if ((!fZ&&fS==fO)) goto L_006430dc;
L_006430b6:; BB(0x006430b6);
    /* 006430b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006430b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006430ba: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006430bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006430be: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6430c3u); f_00641230();
    /* 006430c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006430c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006430c9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006430cc: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 006430d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006430d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006430d7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006430da: jmp 0x6430a7 */ goto L_006430a7;
L_006430dc:; BB(0x006430dc);
    /* 006430dc: jmp 0x64308f */ goto L_0064308f;
L_006430de:; BB(0x006430de);
    /* 006430de: jmp 0x643077 */ goto L_00643077;
L_006430e0:; BB(0x006430e0);
    /* 006430e0: jmp 0x643629 */ goto L_00643629;
L_006430e5:; BB(0x006430e5);
    /* 006430e5: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 006430ec: jmp 0x6430f7 */ goto L_006430f7;
L_006430ee:; BB(0x006430ee);
    /* 006430ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006430f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006430f4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006430f7:; BB(0x006430f7);
    /* 006430f7: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006430fb: jg 0x64313d */ if ((!fZ&&fS==fO)) goto L_0064313d;
L_006430fd:; BB(0x006430fd);
    /* 006430fd: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00643104: jmp 0x64310f */ goto L_0064310f;
L_00643106:; BB(0x00643106);
    /* 00643106: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643109: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064310c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0064310f:; BB(0x0064310f);
    /* 0064310f: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643113: jg 0x64313b */ if ((!fZ&&fS==fO)) goto L_0064313b;
L_00643115:; BB(0x00643115);
    /* 00643115: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643119: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064311c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064311d: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643122u); f_00641230();
    /* 00643122: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643125: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643128: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064312b: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 00643130: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643133: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643136: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00643139: jmp 0x643106 */ goto L_00643106;
L_0064313b:; BB(0x0064313b);
    /* 0064313b: jmp 0x6430ee */ goto L_006430ee;
L_0064313d:; BB(0x0064313d);
    /* 0064313d: jmp 0x643629 */ goto L_00643629;
L_00643142:; BB(0x00643142);
    /* 00643142: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00643149: jmp 0x643154 */ goto L_00643154;
L_0064314b:; BB(0x0064314b);
    /* 0064314b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064314e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643151: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00643154:; BB(0x00643154);
    /* 00643154: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643158: jge 0x6431b4 */ if ((fS==fO)) goto L_006431b4;
L_0064315a:; BB(0x0064315a);
    /* 0064315a: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00643161: jmp 0x64316c */ goto L_0064316c;
L_00643163:; BB(0x00643163);
    /* 00643163: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643166: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00643169: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0064316c:; BB(0x0064316c);
    /* 0064316c: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643170: jg 0x6431b2 */ if ((!fZ&&fS==fO)) goto L_006431b2;
L_00643172:; BB(0x00643172);
    /* 00643172: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00643179: jmp 0x643184 */ goto L_00643184;
L_0064317b:; BB(0x0064317b);
    /* 0064317b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064317e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643181: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00643184:; BB(0x00643184);
    /* 00643184: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643188: jg 0x6431b0 */ if ((!fZ&&fS==fO)) goto L_006431b0;
L_0064318a:; BB(0x0064318a);
    /* 0064318a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064318d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064318e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643191: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643192: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643197u); f_00641230();
    /* 00643197: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064319a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064319d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006431a0: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 006431a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006431a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006431ab: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006431ae: jmp 0x64317b */ goto L_0064317b;
L_006431b0:; BB(0x006431b0);
    /* 006431b0: jmp 0x643163 */ goto L_00643163;
L_006431b2:; BB(0x006431b2);
    /* 006431b2: jmp 0x64314b */ goto L_0064314b;
L_006431b4:; BB(0x006431b4);
    /* 006431b4: jmp 0x643629 */ goto L_00643629;
L_006431b9:; BB(0x006431b9);
    /* 006431b9: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 006431c0: jmp 0x6431cb */ goto L_006431cb;
L_006431c2:; BB(0x006431c2);
    /* 006431c2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006431c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006431c8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006431cb:; BB(0x006431cb);
    /* 006431cb: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006431cf: jg 0x643211 */ if ((!fZ&&fS==fO)) goto L_00643211;
L_006431d1:; BB(0x006431d1);
    /* 006431d1: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 006431d8: jmp 0x6431e3 */ goto L_006431e3;
L_006431da:; BB(0x006431da);
    /* 006431da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006431dd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006431e0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_006431e3:; BB(0x006431e3);
    /* 006431e3: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006431e7: jg 0x64320f */ if ((!fZ&&fS==fO)) goto L_0064320f;
L_006431e9:; BB(0x006431e9);
    /* 006431e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006431ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006431ed: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006431f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006431f1: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6431f6u); f_00641230();
    /* 006431f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006431f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006431fc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006431ff: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00643204: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643207: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064320a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064320d: jmp 0x6431da */ goto L_006431da;
L_0064320f:; BB(0x0064320f);
    /* 0064320f: jmp 0x6431c2 */ goto L_006431c2;
L_00643211:; BB(0x00643211);
    /* 00643211: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00643213: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00643215: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x64321au); f_00641230();
    /* 0064321a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064321d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643220: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643223: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00643228: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064322b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064322e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00643231: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00643233: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00643235: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x64323au); f_00641230();
    /* 0064323a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064323d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643240: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643243: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00643248: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064324b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064324e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00643251: jmp 0x643629 */ goto L_00643629;
L_00643256:; BB(0x00643256);
    /* 00643256: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0064325d: jmp 0x643268 */ goto L_00643268;
L_0064325f:; BB(0x0064325f);
    /* 0064325f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643262: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00643265: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00643268:; BB(0x00643268);
    /* 00643268: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064326c: jg 0x6432ae */ if ((!fZ&&fS==fO)) goto L_006432ae;
L_0064326e:; BB(0x0064326e);
    /* 0064326e: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00643275: jmp 0x643280 */ goto L_00643280;
L_00643277:; BB(0x00643277);
    /* 00643277: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064327a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064327d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00643280:; BB(0x00643280);
    /* 00643280: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643284: jg 0x6432ac */ if ((!fZ&&fS==fO)) goto L_006432ac;
L_00643286:; BB(0x00643286);
    /* 00643286: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643289: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064328a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064328d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064328e: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643293u); f_00641230();
    /* 00643293: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643296: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643299: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064329c: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 006432a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006432a4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006432a7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006432aa: jmp 0x643277 */ goto L_00643277;
L_006432ac:; BB(0x006432ac);
    /* 006432ac: jmp 0x64325f */ goto L_0064325f;
L_006432ae:; BB(0x006432ae);
    /* 006432ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006432b0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006432b2: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6432b7u); f_00641230();
    /* 006432b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006432ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006432bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006432c0: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 006432c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006432c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006432cb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006432ce: jmp 0x643629 */ goto L_00643629;
L_006432d3:; BB(0x006432d3);
    /* 006432d3: jmp 0x643629 */ goto L_00643629;
L_006432d8:; BB(0x006432d8);
    /* 006432d8: jmp 0x643629 */ goto L_00643629;
L_006432dd:; BB(0x006432dd);
    /* 006432dd: jmp 0x643629 */ goto L_00643629;
L_006432e2:; BB(0x006432e2);
    /* 006432e2: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 006432e9: jmp 0x6432f4 */ goto L_006432f4;
L_006432eb:; BB(0x006432eb);
    /* 006432eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006432ee: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006432f1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006432f4:; BB(0x006432f4);
    /* 006432f4: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006432f8: jg 0x64333a */ if ((!fZ&&fS==fO)) goto L_0064333a;
L_006432fa:; BB(0x006432fa);
    /* 006432fa: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00643301: jmp 0x64330c */ goto L_0064330c;
L_00643303:; BB(0x00643303);
    /* 00643303: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643306: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643309: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0064330c:; BB(0x0064330c);
    /* 0064330c: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643310: jg 0x643338 */ if ((!fZ&&fS==fO)) goto L_00643338;
L_00643312:; BB(0x00643312);
    /* 00643312: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643315: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643316: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643319: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064331a: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x64331fu); f_00641230();
    /* 0064331f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643322: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643325: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643328: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 0064332d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643330: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643333: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00643336: jmp 0x643303 */ goto L_00643303;
L_00643338:; BB(0x00643338);
    /* 00643338: jmp 0x6432eb */ goto L_006432eb;
L_0064333a:; BB(0x0064333a);
    /* 0064333a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064333c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064333e: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643343u); f_00641230();
    /* 00643343: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643346: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643349: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064334c: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00643351: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643354: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643357: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064335a: jmp 0x643629 */ goto L_00643629;
L_0064335f:; BB(0x0064335f);
    /* 0064335f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00643366: jmp 0x643371 */ goto L_00643371;
L_00643368:; BB(0x00643368);
    /* 00643368: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064336b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064336e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00643371:; BB(0x00643371);
    /* 00643371: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643375: jge 0x643418 */ if ((fS==fO)) goto L_00643418;
L_0064337b:; BB(0x0064337b);
    /* 0064337b: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00643382: jmp 0x64338d */ goto L_0064338d;
L_00643384:; BB(0x00643384);
    /* 00643384: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643387: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064338a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0064338d:; BB(0x0064338d);
    /* 0064338d: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643391: jg 0x6433d3 */ if ((!fZ&&fS==fO)) goto L_006433d3;
L_00643393:; BB(0x00643393);
    /* 00643393: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0064339a: jmp 0x6433a5 */ goto L_006433a5;
L_0064339c:; BB(0x0064339c);
    /* 0064339c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064339f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006433a2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_006433a5:; BB(0x006433a5);
    /* 006433a5: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006433a9: jg 0x6433d1 */ if ((!fZ&&fS==fO)) goto L_006433d1;
L_006433ab:; BB(0x006433ab);
    /* 006433ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006433ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006433af: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006433b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006433b3: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6433b8u); f_00641230();
    /* 006433b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006433bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006433be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006433c1: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 006433c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006433c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006433cc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006433cf: jmp 0x64339c */ goto L_0064339c;
L_006433d1:; BB(0x006433d1);
    /* 006433d1: jmp 0x643384 */ goto L_00643384;
L_006433d3:; BB(0x006433d3);
    /* 006433d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006433d5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006433d7: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6433dcu); f_00641230();
    /* 006433dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006433df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006433e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006433e5: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 006433ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006433ed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006433f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006433f3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006433f5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006433f7: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6433fcu); f_00641230();
    /* 006433fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006433ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643402: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643405: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 0064340a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064340d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643410: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00643413: jmp 0x643368 */ goto L_00643368;
L_00643418:; BB(0x00643418);
    /* 00643418: jmp 0x643629 */ goto L_00643629;
L_0064341d:; BB(0x0064341d);
    /* 0064341d: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00643424: jmp 0x64342f */ goto L_0064342f;
L_00643426:; BB(0x00643426);
    /* 00643426: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643429: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064342c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0064342f:; BB(0x0064342f);
    /* 0064342f: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643433: jg 0x643475 */ if ((!fZ&&fS==fO)) goto L_00643475;
L_00643435:; BB(0x00643435);
    /* 00643435: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0064343c: jmp 0x643447 */ goto L_00643447;
L_0064343e:; BB(0x0064343e);
    /* 0064343e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643441: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643444: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00643447:; BB(0x00643447);
    /* 00643447: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064344b: jg 0x643473 */ if ((!fZ&&fS==fO)) goto L_00643473;
L_0064344d:; BB(0x0064344d);
    /* 0064344d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643451: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643454: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643455: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x64345au); f_00641230();
    /* 0064345a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064345d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643460: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643463: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 00643468: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064346b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064346e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00643471: jmp 0x64343e */ goto L_0064343e;
L_00643473:; BB(0x00643473);
    /* 00643473: jmp 0x643426 */ goto L_00643426;
L_00643475:; BB(0x00643475);
    /* 00643475: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0064347c: jmp 0x643487 */ goto L_00643487;
L_0064347e:; BB(0x0064347e);
    /* 0064347e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643481: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643484: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00643487:; BB(0x00643487);
    /* 00643487: cmp dword ptr [ebp - 0xc], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064348b: jg 0x6434b1 */ if ((!fZ&&fS==fO)) goto L_006434b1;
L_0064348d:; BB(0x0064348d);
    /* 0064348d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064348f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643492: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643493: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643498u); f_00641230();
    /* 00643498: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064349b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064349e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006434a1: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 006434a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006434a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006434ac: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006434af: jmp 0x64347e */ goto L_0064347e;
L_006434b1:; BB(0x006434b1);
    /* 006434b1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006434b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006434b5: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6434bau); f_00641230();
    /* 006434ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006434bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006434c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006434c3: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 006434c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006434cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006434ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006434d1: jmp 0x643629 */ goto L_00643629;
L_006434d6:; BB(0x006434d6);
    /* 006434d6: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 006434dd: jmp 0x6434e8 */ goto L_006434e8;
L_006434df:; BB(0x006434df);
    /* 006434df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006434e2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006434e5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006434e8:; BB(0x006434e8);
    /* 006434e8: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006434ec: jg 0x64352e */ if ((!fZ&&fS==fO)) goto L_0064352e;
L_006434ee:; BB(0x006434ee);
    /* 006434ee: mov dword ptr [ebp - 0xc], 7 */ W32((u32)(r_ebp+0xfffffff4u), 0x7u);
    /* 006434f5: jmp 0x643500 */ goto L_00643500;
L_006434f7:; BB(0x006434f7);
    /* 006434f7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006434fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006434fd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00643500:; BB(0x00643500);
    /* 00643500: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643504: jg 0x64352c */ if ((!fZ&&fS==fO)) goto L_0064352c;
L_00643506:; BB(0x00643506);
    /* 00643506: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064350a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064350d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064350e: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643513u); f_00641230();
    /* 00643513: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643516: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643519: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064351c: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 00643521: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643524: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643527: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064352a: jmp 0x6434f7 */ goto L_006434f7;
L_0064352c:; BB(0x0064352c);
    /* 0064352c: jmp 0x6434df */ goto L_006434df;
L_0064352e:; BB(0x0064352e);
    /* 0064352e: jmp 0x643629 */ goto L_00643629;
L_00643533:; BB(0x00643533);
    /* 00643533: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0064353a: jmp 0x643545 */ goto L_00643545;
L_0064353c:; BB(0x0064353c);
    /* 0064353c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064353f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643542: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00643545:; BB(0x00643545);
    /* 00643545: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643549: jg 0x64358b */ if ((!fZ&&fS==fO)) goto L_0064358b;
L_0064354b:; BB(0x0064354b);
    /* 0064354b: mov dword ptr [ebp - 0xc], 7 */ W32((u32)(r_ebp+0xfffffff4u), 0x7u);
    /* 00643552: jmp 0x64355d */ goto L_0064355d;
L_00643554:; BB(0x00643554);
    /* 00643554: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643557: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064355a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0064355d:; BB(0x0064355d);
    /* 0064355d: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643561: jg 0x643589 */ if ((!fZ&&fS==fO)) goto L_00643589;
L_00643563:; BB(0x00643563);
    /* 00643563: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643566: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643567: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064356a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064356b: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643570u); f_00641230();
    /* 00643570: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643573: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643576: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643579: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 0064357e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643581: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643584: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00643587: jmp 0x643554 */ goto L_00643554;
L_00643589:; BB(0x00643589);
    /* 00643589: jmp 0x64353c */ goto L_0064353c;
L_0064358b:; BB(0x0064358b);
    /* 0064358b: jmp 0x643629 */ goto L_00643629;
L_00643590:; BB(0x00643590);
    /* 00643590: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00643597: jmp 0x6435a2 */ goto L_006435a2;
L_00643599:; BB(0x00643599);
    /* 00643599: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064359c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064359f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006435a2:; BB(0x006435a2);
    /* 006435a2: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006435a6: jg 0x64360c */ if ((!fZ&&fS==fO)) goto L_0064360c;
L_006435a8:; BB(0x006435a8);
    /* 006435a8: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
    /* 006435af: jmp 0x6435ba */ goto L_006435ba;
L_006435b1:; BB(0x006435b1);
    /* 006435b1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006435b4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006435b7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006435ba:; BB(0x006435ba);
    /* 006435ba: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006435be: jg 0x64360a */ if ((!fZ&&fS==fO)) goto L_0064360a;
L_006435c0:; BB(0x006435c0);
    /* 006435c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006435c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006435c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006435c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006435c8: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6435cdu); f_00641230();
    /* 006435cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006435d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006435d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006435d6: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 006435db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006435de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006435e1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006435e4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006435e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006435e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006435eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006435ec: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x6435f1u); f_00641230();
    /* 006435f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006435f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006435f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006435fa: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 006435ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643602: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643605: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00643608: jmp 0x6435b1 */ goto L_006435b1;
L_0064360a:; BB(0x0064360a);
    /* 0064360a: jmp 0x643599 */ goto L_00643599;
L_0064360c:; BB(0x0064360c);
    /* 0064360c: jmp 0x643629 */ goto L_00643629;
L_0064360e:; BB(0x0064360e);
    /* 0064360e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00643610: jne 0x643629 */ if (!fZ) goto L_00643629;
L_00643612:; BB(0x00643612);
    /* 00643612: push 0x397 */ { u32 v = 0x397u; r_esp -= 4; W32(r_esp, v); }
    /* 00643617: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064361c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00643621: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x643626u); f_005e9f20();
    /* 00643626: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00643629:; BB(0x00643629);
    /* 00643629: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064362c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064362f: mov dword ptr [edx + 0x80c], eax */ W32((u32)(r_edx+0x80cu), r_eax);
    /* 00643635: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643638: mov edx, dword ptr [ecx + 0x80c] */ r_edx = R32((u32)(r_ecx+0x80cu));
    /* 0064363e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00643641: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643642: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643645: call 0x6436a0 */ r_esp -= 4; W32(r_esp, 0x64364au); f_006436a0();
    /* 0064364a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064364c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064364d: ret 4 */ FN_RET(0x00642e70); r_esp += 8; return;
}

void f_006436c0(void) /* card::func_006436c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006436c0);
    /* 006436c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006436c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006436c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006436c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006436c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006436cc: cmp dword ptr [eax + 0x808], 0 */ {  u32 a = R32((u32)(r_eax+0x808u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006436d3: jge 0x6436f5 */ if ((fS==fO)) goto L_006436f5;
L_006436d5:; BB(0x006436d5);
    /* 006436d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006436d7: jne 0x6436f0 */ if (!fZ) goto L_006436f0;
L_006436d9:; BB(0x006436d9);
    /* 006436d9: push 0x3a7 */ { u32 v = 0x3a7u; r_esp -= 4; W32(r_esp, v); }
    /* 006436de: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006436e3: push 0x6d9834 */ { u32 v = 0x6d9834u; r_esp -= 4; W32(r_esp, v); }
    /* 006436e8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6436edu); f_005e9f20();
    /* 006436ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006436f0:; BB(0x006436f0);
    /* 006436f0: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 006436f3: jmp 0x643723 */ goto L_00643723;
L_006436f5:; BB(0x006436f5);
    /* 006436f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006436f8: mov ecx, dword ptr [eax + 0x808] */ r_ecx = R32((u32)(r_eax+0x808u));
    /* 006436fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643701: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00643706: mov word ptr [ebp - 6], ax */ W16((u32)(r_ebp+0xfffffffau), (u16)r_eax);
    /* 0064370a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064370d: mov edx, dword ptr [ecx + 0x808] */ r_edx = R32((u32)(r_ecx+0x808u));
    /* 00643713: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00643716: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643719: mov dword ptr [eax + 0x808], edx */ W32((u32)(r_eax+0x808u), r_edx);
    /* 0064371f: mov ax, word ptr [ebp - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffau))) & 0xffffu);
L_00643723:; BB(0x00643723);
    /* 00643723: mov esp, ebp */ r_esp = r_ebp;
    /* 00643725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643726: ret  */ FN_RET(0x006436c0); r_esp += 4; return;
}

void f_00643880(void) /* card::func_00643880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00643880);
    /* 00643880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643881: mov ebp, esp */ r_ebp = r_esp;
    /* 00643883: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643886: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643887: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064388a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064388e: jl 0x64389e */ if ((fS!=fO)) goto L_0064389e;
L_00643890:; BB(0x00643890);
    /* 00643890: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643893: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00643896: cmp ecx, dword ptr [eax + 0x80c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x80cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064389c: jl 0x6438b5 */ if ((fS!=fO)) goto L_006438b5;
L_0064389e:; BB(0x0064389e);
    /* 0064389e: push 0x3f7 */ { u32 v = 0x3f7u; r_esp -= 4; W32(r_esp, v); }
    /* 006438a3: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006438a8: push 0x6dc41c */ { u32 v = 0x6dc41cu; r_esp -= 4; W32(r_esp, v); }
    /* 006438ad: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6438b2u); f_005e9f20();
    /* 006438b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006438b5:; BB(0x006438b5);
    /* 006438b5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006438bc: jmp 0x6438c7 */ goto L_006438c7;
L_006438be:; BB(0x006438be);
    /* 006438be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006438c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006438c4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006438c7:; BB(0x006438c7);
    /* 006438c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006438ca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006438cd: cmp edx, dword ptr [ecx + 0x80c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x80cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006438d3: jge 0x643917 */ if ((fS==fO)) goto L_00643917;
L_006438d5:; BB(0x006438d5);
    /* 006438d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006438d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006438db: movzx edx, word ptr [ecx + eax*2 + 4] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x4u));
    /* 006438e0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006438e3: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006438e7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006438ea: jne 0x643915 */ if (!fZ) goto L_00643915;
L_006438ec:; BB(0x006438ec);
    /* 006438ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006438ef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006438f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006438f5: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 006438f8: mov ax, word ptr [esi + eax*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2+0x4u))) & 0xffffu);
    /* 006438fd: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00643902: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00643905: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643908: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0064390c: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 00643911: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00643913: jmp 0x643926 */ goto L_00643926;
L_00643915:; BB(0x00643915);
    /* 00643915: jmp 0x6438be */ goto L_006438be;
L_00643917:; BB(0x00643917);
    /* 00643917: push 0x6dc404 */ { u32 v = 0x6dc404u; r_esp -= 4; W32(r_esp, v); }
    /* 0064391c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x643921u); f_0062fde0();
    /* 00643921: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643924: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00643926:; BB(0x00643926);
    /* 00643926: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643927: mov esp, ebp */ r_esp = r_ebp;
    /* 00643929: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064392a: ret 8 */ FN_RET(0x00643880); r_esp += 12; return;
}

void f_00643930(void) /* card::func_00643930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00643930);
    /* 00643930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643931: mov ebp, esp */ r_ebp = r_esp;
    /* 00643933: sub esp, 0x74c */ {  u32 a = r_esp; u32 b = 0x74cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643939: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064393e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643940: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00643943: mov dword ptr [ebp - 0x744], ecx */ W32((u32)(r_ebp+0xfffff8bcu), r_ecx);
    /* 00643949: mov eax, dword ptr [ebp - 0x744] */ r_eax = R32((u32)(r_ebp+0xfffff8bcu));
    /* 0064394f: mov ecx, dword ptr [eax + 0x80c] */ r_ecx = R32((u32)(r_eax+0x80cu));
    /* 00643955: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00643958: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064395b: cmp dword ptr [ebp + 8], 6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064395f: jle 0x643978 */ if ((fZ||fS!=fO)) goto L_00643978;
L_00643961:; BB(0x00643961);
    /* 00643961: push 0x416 */ { u32 v = 0x416u; r_esp -= 4; W32(r_esp, v); }
    /* 00643966: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064396b: push 0x6dc44c */ { u32 v = 0x6dc44cu; r_esp -= 4; W32(r_esp, v); }
    /* 00643970: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x643975u); f_005e9f20();
    /* 00643975: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00643978:; BB(0x00643978);
    /* 00643978: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064397f: jmp 0x64398a */ goto L_0064398a;
L_00643981:; BB(0x00643981);
    /* 00643981: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643984: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643987: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064398a:; BB(0x0064398a);
    /* 0064398a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064398d: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643990: jge 0x6439f7 */ if ((fS==fO)) goto L_006439f7;
L_00643992:; BB(0x00643992);
    /* 00643992: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643995: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643996: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00643999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064399a: push 0x6dc440 */ { u32 v = 0x6dc440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064399f: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 006439a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006439a6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6439acu); call_ind(t); }
    /* 006439ac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006439af: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006439b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006439b7: imul edx, edx, 0xff */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006439bd: lea eax, [ebp + edx - 0x730] */ r_eax = (u32)(r_ebp+r_edx+0xfffff8d0u);
    /* 006439c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006439c5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006439ca: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 006439d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006439d1: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006439d7: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006439da: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006439e0: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 006439e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006439e5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 006439e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6439eau); call_ind(t); }
    /* 006439ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006439ed: mov dword ptr [ebp + ecx*4 - 0x1c], 0 */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), 0x0u);
    /* 006439f5: jmp 0x643981 */ goto L_00643981;
L_006439f7:; BB(0x006439f7);
    /* 006439f7: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 006439fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006439fd: je 0x643bb8 */ if (fZ) goto L_00643bb8;
L_00643a03:; BB(0x00643a03);
    /* 00643a03: mov dword ptr [ebp - 0x738], 0 */ W32((u32)(r_ebp+0xfffff8c8u), 0x0u);
    /* 00643a0d: jmp 0x643a1e */ goto L_00643a1e;
L_00643a0f:; BB(0x00643a0f);
    /* 00643a0f: mov eax, dword ptr [ebp - 0x738] */ r_eax = R32((u32)(r_ebp+0xfffff8c8u));
    /* 00643a15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643a18: mov dword ptr [ebp - 0x738], eax */ W32((u32)(r_ebp+0xfffff8c8u), r_eax);
L_00643a1e:; BB(0x00643a1e);
    /* 00643a1e: mov ecx, dword ptr [ebp - 0x738] */ r_ecx = R32((u32)(r_ebp+0xfffff8c8u));
    /* 00643a24: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643a27: jge 0x643bb3 */ if ((fS==fO)) goto L_00643bb3;
L_00643a2d:; BB(0x00643a2d);
    /* 00643a2d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00643a34: jmp 0x643a3f */ goto L_00643a3f;
L_00643a36:; BB(0x00643a36);
    /* 00643a36: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643a39: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643a3c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00643a3f:; BB(0x00643a3f);
    /* 00643a3f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643a42: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643a45: jge 0x643bae */ if ((fS==fO)) goto L_00643bae;
L_00643a4b:; BB(0x00643a4b);
    /* 00643a4b: lea ecx, [ebp - 0x740] */ r_ecx = (u32)(r_ebp+0xfffff8c0u);
    /* 00643a51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643a52: lea edx, [ebp - 0x130] */ r_edx = (u32)(r_ebp+0xfffffed0u);
    /* 00643a58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643a59: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643a5c: mov ecx, dword ptr [ebp + eax*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 00643a60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643a61: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643a64: imul edx, edx, 0xff */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00643a6a: lea eax, [ebp + edx - 0x730] */ r_eax = (u32)(r_ebp+r_edx+0xfffff8d0u);
    /* 00643a71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643a72: call 0x641620 */ r_esp -= 4; W32(r_esp, 0x643a77u); f_00641620();
    /* 00643a77: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643a7a: cmp dword ptr [ebp - 0x130], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643a81: je 0x643a8c */ if (fZ) goto L_00643a8c;
L_00643a83:; BB(0x00643a83);
    /* 00643a83: cmp dword ptr [ebp - 0x740], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643a8a: jne 0x643aa1 */ if (!fZ) goto L_00643aa1;
L_00643a8c:; BB(0x00643a8c);
    /* 00643a8c: cmp dword ptr [ebp - 0x130], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643a93: je 0x643aa1 */ if (fZ) goto L_00643aa1;
L_00643a95:; BB(0x00643a95);
    /* 00643a95: mov dword ptr [ebp - 0x748], 0 */ W32((u32)(r_ebp+0xfffff8b8u), 0x0u);
    /* 00643a9f: jmp 0x643aab */ goto L_00643aab;
L_00643aa1:; BB(0x00643aa1);
    /* 00643aa1: mov dword ptr [ebp - 0x748], 1 */ W32((u32)(r_ebp+0xfffff8b8u), 0x1u);
L_00643aab:; BB(0x00643aab);
    /* 00643aab: mov cl, byte ptr [ebp - 0x748] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff8b8u))) & 0xffu);
    /* 00643ab1: mov byte ptr [ebp - 0x731], cl */ W8((u32)(r_ebp+0xfffff8cfu), (u8)r_ecx);
    /* 00643ab7: movzx edx, byte ptr [ebp - 0x731] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff8cfu));
    /* 00643abe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643ac0: je 0x643b8f */ if (fZ) goto L_00643b8f;
L_00643ac6:; BB(0x00643ac6);
    /* 00643ac6: mov eax, dword ptr [ebp - 0x740] */ r_eax = R32((u32)(r_ebp+0xfffff8c0u));
    /* 00643acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643acd: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00643ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643ad4: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643ad9u); f_00641230();
    /* 00643ad9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643adc: mov word ptr [ebp - 0x73c], ax */ W16((u32)(r_ebp+0xfffff8c4u), (u16)r_eax);
    /* 00643ae3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00643ae6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643ae7: mov ax, word ptr [ebp - 0x73c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffff8c4u))) & 0xffffu);
    /* 00643aee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643aef: mov ecx, dword ptr [ebp - 0x744] */ r_ecx = R32((u32)(r_ebp+0xfffff8bcu));
    /* 00643af5: call 0x643880 */ r_esp -= 4; W32(r_esp, 0x643afau); f_00643880();
    /* 00643afa: mov byte ptr [ebp - 0x129], al */ W8((u32)(r_ebp+0xfffffed7u), (u8)r_eax);
    /* 00643b00: movzx ecx, byte ptr [ebp - 0x129] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed7u));
    /* 00643b07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643b09: jne 0x643b6d */ if (!fZ) goto L_00643b6d;
L_00643b0b:; BB(0x00643b0b);
    /* 00643b0b: cmp dword ptr [ebp - 0x130], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643b12: jne 0x643b20 */ if (!fZ) goto L_00643b20;
L_00643b14:; BB(0x00643b14);
    /* 00643b14: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
    /* 00643b1e: jmp 0x643b33 */ goto L_00643b33;
L_00643b20:; BB(0x00643b20);
    /* 00643b20: cmp dword ptr [ebp - 0x130], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643b27: jne 0x643b33 */ if (!fZ) goto L_00643b33;
L_00643b29:; BB(0x00643b29);
    /* 00643b29: mov dword ptr [ebp - 0x130], 0xe */ W32((u32)(r_ebp+0xfffffed0u), 0xeu);
L_00643b33:; BB(0x00643b33);
    /* 00643b33: mov edx, dword ptr [ebp - 0x740] */ r_edx = R32((u32)(r_ebp+0xfffff8c0u));
    /* 00643b39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643b3a: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00643b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643b41: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643b46u); f_00641230();
    /* 00643b46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643b49: mov word ptr [ebp - 0x73c], ax */ W16((u32)(r_ebp+0xfffff8c4u), (u16)r_eax);
    /* 00643b50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00643b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643b54: mov dx, word ptr [ebp - 0x73c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffff8c4u))) & 0xffffu);
    /* 00643b5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643b5c: mov ecx, dword ptr [ebp - 0x744] */ r_ecx = R32((u32)(r_ebp+0xfffff8bcu));
    /* 00643b62: call 0x643880 */ r_esp -= 4; W32(r_esp, 0x643b67u); f_00643880();
    /* 00643b67: mov byte ptr [ebp - 0x129], al */ W8((u32)(r_ebp+0xfffffed7u), (u8)r_eax);
L_00643b6d:; BB(0x00643b6d);
    /* 00643b6d: movzx eax, byte ptr [ebp - 0x129] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffed7u));
    /* 00643b74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643b76: jne 0x643b8f */ if (!fZ) goto L_00643b8f;
L_00643b78:; BB(0x00643b78);
    /* 00643b78: push 0x441 */ { u32 v = 0x441u; r_esp -= 4; W32(r_esp, v); }
    /* 00643b7d: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643b82: push 0x6dc438 */ { u32 v = 0x6dc438u; r_esp -= 4; W32(r_esp, v); }
    /* 00643b87: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x643b8cu); f_005e9f20();
    /* 00643b8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00643b8f:; BB(0x00643b8f);
    /* 00643b8f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643b92: mov eax, dword ptr [ebp + edx*4 - 0x1c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe4u));
    /* 00643b96: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643b99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643b9c: mov dword ptr [ebp + ecx*4 - 0x1c], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), r_eax);
    /* 00643ba0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00643ba3: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00643ba6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00643ba9: jmp 0x643a36 */ goto L_00643a36;
L_00643bae:; BB(0x00643bae);
    /* 00643bae: jmp 0x643a0f */ goto L_00643a0f;
L_00643bb3:; BB(0x00643bb3);
    /* 00643bb3: jmp 0x643ccf */ goto L_00643ccf;
L_00643bb8:; BB(0x00643bb8);
    /* 00643bb8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00643bbf: jmp 0x643bca */ goto L_00643bca;
L_00643bc1:; BB(0x00643bc1);
    /* 00643bc1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643bc4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643bc7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00643bca:; BB(0x00643bca);
    /* 00643bca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643bcd: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643bd0: jge 0x643ccf */ if ((fS==fO)) goto L_00643ccf;
L_00643bd6:; BB(0x00643bd6);
    /* 00643bd6: mov dword ptr [ebp - 0x738], 0 */ W32((u32)(r_ebp+0xfffff8c8u), 0x0u);
    /* 00643be0: jmp 0x643bf1 */ goto L_00643bf1;
L_00643be2:; BB(0x00643be2);
    /* 00643be2: mov edx, dword ptr [ebp - 0x738] */ r_edx = R32((u32)(r_ebp+0xfffff8c8u));
    /* 00643be8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643beb: mov dword ptr [ebp - 0x738], edx */ W32((u32)(r_ebp+0xfffff8c8u), r_edx);
L_00643bf1:; BB(0x00643bf1);
    /* 00643bf1: mov eax, dword ptr [ebp - 0x738] */ r_eax = R32((u32)(r_ebp+0xfffff8c8u));
    /* 00643bf7: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643bfa: jge 0x643cca */ if ((fS==fO)) goto L_00643cca;
L_00643c00:; BB(0x00643c00);
    /* 00643c00: lea ecx, [ebp - 0x740] */ r_ecx = (u32)(r_ebp+0xfffff8c0u);
    /* 00643c06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643c07: lea edx, [ebp - 0x130] */ r_edx = (u32)(r_ebp+0xfffffed0u);
    /* 00643c0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643c0e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643c11: mov ecx, dword ptr [ebp + eax*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 00643c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643c16: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643c19: imul edx, edx, 0xff */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00643c1f: lea eax, [ebp + edx - 0x730] */ r_eax = (u32)(r_ebp+r_edx+0xfffff8d0u);
    /* 00643c26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643c27: call 0x641620 */ r_esp -= 4; W32(r_esp, 0x643c2cu); f_00641620();
    /* 00643c2c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643c2f: cmp dword ptr [ebp - 0x130], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643c36: je 0x643c41 */ if (fZ) goto L_00643c41;
L_00643c38:; BB(0x00643c38);
    /* 00643c38: cmp dword ptr [ebp - 0x740], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643c3f: jne 0x643c56 */ if (!fZ) goto L_00643c56;
L_00643c41:; BB(0x00643c41);
    /* 00643c41: cmp dword ptr [ebp - 0x130], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643c48: je 0x643c56 */ if (fZ) goto L_00643c56;
L_00643c4a:; BB(0x00643c4a);
    /* 00643c4a: mov dword ptr [ebp - 0x74c], 0 */ W32((u32)(r_ebp+0xfffff8b4u), 0x0u);
    /* 00643c54: jmp 0x643c60 */ goto L_00643c60;
L_00643c56:; BB(0x00643c56);
    /* 00643c56: mov dword ptr [ebp - 0x74c], 1 */ W32((u32)(r_ebp+0xfffff8b4u), 0x1u);
L_00643c60:; BB(0x00643c60);
    /* 00643c60: mov cl, byte ptr [ebp - 0x74c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff8b4u))) & 0xffu);
    /* 00643c66: mov byte ptr [ebp - 0x731], cl */ W8((u32)(r_ebp+0xfffff8cfu), (u8)r_ecx);
    /* 00643c6c: movzx edx, byte ptr [ebp - 0x731] */ r_edx = (u32)R8((u32)(r_ebp+0xfffff8cfu));
    /* 00643c73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643c75: je 0x643cab */ if (fZ) goto L_00643cab;
L_00643c77:; BB(0x00643c77);
    /* 00643c77: mov eax, dword ptr [ebp - 0x740] */ r_eax = R32((u32)(r_ebp+0xfffff8c0u));
    /* 00643c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643c7e: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00643c84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643c85: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x643c8au); f_00641230();
    /* 00643c8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643c8d: mov word ptr [ebp - 0x73c], ax */ W16((u32)(r_ebp+0xfffff8c4u), (u16)r_eax);
    /* 00643c94: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00643c97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643c98: mov ax, word ptr [ebp - 0x73c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffff8c4u))) & 0xffffu);
    /* 00643c9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643ca0: mov ecx, dword ptr [ebp - 0x744] */ r_ecx = R32((u32)(r_ebp+0xfffff8bcu));
    /* 00643ca6: call 0x643880 */ r_esp -= 4; W32(r_esp, 0x643cabu); f_00643880();
L_00643cab:; BB(0x00643cab);
    /* 00643cab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643cae: mov edx, dword ptr [ebp + ecx*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe4u));
    /* 00643cb2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00643cb5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643cb8: mov dword ptr [ebp + eax*4 - 0x1c], edx */ W32((u32)(r_ebp+r_eax*4+0xffffffe4u), r_edx);
    /* 00643cbc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00643cbf: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00643cc2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00643cc5: jmp 0x643be2 */ goto L_00643be2;
L_00643cca:; BB(0x00643cca);
    /* 00643cca: jmp 0x643bc1 */ goto L_00643bc1;
L_00643ccf:; BB(0x00643ccf);
    /* 00643ccf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00643cd2: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643cd4: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x643cd9u); f_00686d72();
    /* 00643cd9: mov esp, ebp */ r_esp = r_ebp;
    /* 00643cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643cdc: ret 0x10 */ FN_RET(0x00643930); r_esp += 20; return;
}

void f_00643e70(void) /* card::func_00643e70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00643e70);
    /* 00643e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00643e73: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643e76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643e77: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00643e7b: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643e80: je 0x643e8a */ if (fZ) goto L_00643e8a;
L_00643e82:; BB(0x00643e82);
    /* 00643e82: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00643e86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643e88: je 0x643eaa */ if (fZ) goto L_00643eaa;
L_00643e8a:; BB(0x00643e8a);
    /* 00643e8a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00643e90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00643e92: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643e98: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00643e9e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x643ea0u); call_ind(t); }
    /* 00643ea0: jmp 0x6442be */ goto L_006442be;
L_00643eaa:; BB(0x00643eaa);
    /* 00643eaa: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00643eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643eaf: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x643eb4u); f_00641280();
    /* 00643eb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643eb7: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643eba: jne 0x64402e */ if (!fZ) goto L_0064402e;
L_00643ec0:; BB(0x00643ec0);
    /* 00643ec0: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00643ec4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643ec5: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x643ecau); f_00641290();
    /* 00643eca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643ecd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643ed0: jne 0x64402e */ if (!fZ) goto L_0064402e;
L_00643ed6:; BB(0x00643ed6);
    /* 00643ed6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643edc: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x643ee1u); f_006375b0();
    /* 00643ee1: mov ecx, eax */ r_ecx = r_eax;
    /* 00643ee3: call 0x639ff0 */ r_esp -= 4; W32(r_esp, 0x643ee8u); f_00639ff0();
    /* 00643ee8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00643eeb: cmp dword ptr [ebp - 0x1c], 0x3010b0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3010b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643ef2: jg 0x643f22 */ if ((!fZ&&fS==fO)) goto L_00643f22;
L_00643ef4:; BB(0x00643ef4);
    /* 00643ef4: cmp dword ptr [ebp - 0x1c], 0x3010b0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3010b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643efb: je 0x643fd8 */ if (fZ) goto L_00643fd8;
L_00643f01:; BB(0x00643f01);
    /* 00643f01: cmp dword ptr [ebp - 0x1c], 0xaf0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xaf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643f08: je 0x643f63 */ if (fZ) goto L_00643f63;
L_00643f0a:; BB(0x00643f0a);
    /* 00643f0a: cmp dword ptr [ebp - 0x1c], 0x69f7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x69f7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643f11: je 0x643fba */ if (fZ) goto L_00643fba;
L_00643f17:; BB(0x00643f17);
    /* 00643f17: cmp dword ptr [ebp - 0x1c], 0x6c2e */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x6c2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643f1e: je 0x643f7e */ if (fZ) goto L_00643f7e;
L_00643f20:; BB(0x00643f20);
    /* 00643f20: jmp 0x643f48 */ goto L_00643f48;
L_00643f22:; BB(0x00643f22);
    /* 00643f22: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643f25: sub edx, 0x3010b1 */ {  u32 a = r_edx; u32 b = 0x3010b1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00643f2b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00643f2e: cmp dword ptr [ebp - 0x1c], 0x9f */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00643f35: ja 0x643f48 */ if ((!fC&&!fZ)) goto L_00643f48;
L_00643f37:; BB(0x00643f37);
    /* 00643f37: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643f3a: movzx ecx, byte ptr [eax + 0x6442d8] */ r_ecx = (u32)R8((u32)(r_eax+0x6442d8u));
    /* 00643f41: jmp dword ptr [ecx*4 + 0x6442c4] */ { u32 t = R32((u32)(r_ecx*4+0x6442c4u)); switch (t) { case 0x643ff6u: goto L_00643ff6; case 0x643fd8u: goto L_00643fd8; case 0x643f9cu: goto L_00643f9c; case 0x644014u: goto L_00644014; case 0x643f48u: goto L_00643f48; default: UNSUP(0x00643f41, "jump table entry is not a known target"); } }
L_00643f48:; BB(0x00643f48);
    /* 00643f48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00643f4a: jne 0x643f63 */ if (!fZ) goto L_00643f63;
L_00643f4c:; BB(0x00643f4c);
    /* 00643f4c: push 0x491 */ { u32 v = 0x491u; r_esp -= 4; W32(r_esp, v); }
    /* 00643f51: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643f56: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00643f5b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x643f60u); f_005e9f20();
    /* 00643f60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00643f63:; BB(0x00643f63);
    /* 00643f63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643f69: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00643f6b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643f71: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00643f77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x643f79u); call_ind(t); }
    /* 00643f79: jmp 0x6442be */ goto L_006442be;
L_00643f7e:; BB(0x00643f7e);
    /* 00643f7e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00643f86: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643f8c: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00643f92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x643f94u); call_ind(t); }
    /* 00643f94: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643f97: jmp 0x6442be */ goto L_006442be;
L_00643f9c:; BB(0x00643f9c);
    /* 00643f9c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643fa2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00643fa4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643faa: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00643fb0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x643fb2u); call_ind(t); }
    /* 00643fb2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643fb5: jmp 0x6442be */ goto L_006442be;
L_00643fba:; BB(0x00643fba);
    /* 00643fba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643fc0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00643fc2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643fc8: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00643fce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x643fd0u); call_ind(t); }
    /* 00643fd0: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643fd3: jmp 0x6442be */ goto L_006442be;
L_00643fd8:; BB(0x00643fd8);
    /* 00643fd8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643fde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00643fe0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643fe6: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00643fec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x643feeu); call_ind(t); }
    /* 00643fee: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643ff1: jmp 0x6442be */ goto L_006442be;
L_00643ff6:; BB(0x00643ff6);
    /* 00643ff6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643ffc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00643ffe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644004: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 0064400a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64400cu); call_ind(t); }
    /* 0064400c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064400f: jmp 0x6442be */ goto L_006442be;
L_00644014:; BB(0x00644014);
    /* 00644014: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064401a: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x64401fu); f_006375b0();
    /* 0064401f: mov ecx, eax */ r_ecx = r_eax;
    /* 00644021: call 0x639ff0 */ r_esp -= 4; W32(r_esp, 0x644026u); f_00639ff0();
    /* 00644026: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644029: jmp 0x6442be */ goto L_006442be;
L_0064402e:; BB(0x0064402e);
    /* 0064402e: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00644032: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644033: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x644038u); f_00641280();
    /* 00644038: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064403b: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064403e: jne 0x6441b3 */ if (!fZ) goto L_006441b3;
L_00644044:; BB(0x00644044);
    /* 00644044: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00644048: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644049: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x64404eu); f_00641290();
    /* 0064404e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00644051: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644054: jne 0x6441b3 */ if (!fZ) goto L_006441b3;
L_0064405a:; BB(0x0064405a);
    /* 0064405a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644060: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x644065u); f_006375b0();
    /* 00644065: mov ecx, eax */ r_ecx = r_eax;
    /* 00644067: call 0x639ff0 */ r_esp -= 4; W32(r_esp, 0x64406cu); f_00639ff0();
    /* 0064406c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064406f: cmp dword ptr [ebp - 0x20], 0x3010b0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3010b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644076: jg 0x6440a6 */ if ((!fZ&&fS==fO)) goto L_006440a6;
L_00644078:; BB(0x00644078);
    /* 00644078: cmp dword ptr [ebp - 0x20], 0x3010b0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3010b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064407f: je 0x64415d */ if (fZ) goto L_0064415d;
L_00644085:; BB(0x00644085);
    /* 00644085: cmp dword ptr [ebp - 0x20], 0xaf0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xaf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064408c: je 0x6440e6 */ if (fZ) goto L_006440e6;
L_0064408e:; BB(0x0064408e);
    /* 0064408e: cmp dword ptr [ebp - 0x20], 0x69f7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x69f7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644095: je 0x64413f */ if (fZ) goto L_0064413f;
L_0064409b:; BB(0x0064409b);
    /* 0064409b: cmp dword ptr [ebp - 0x20], 0x6c2e */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x6c2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006440a2: je 0x644104 */ if (fZ) goto L_00644104;
L_006440a4:; BB(0x006440a4);
    /* 006440a4: jmp 0x6440cb */ goto L_006440cb;
L_006440a6:; BB(0x006440a6);
    /* 006440a6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006440a9: sub eax, 0x3010b1 */ {  u32 a = r_eax; u32 b = 0x3010b1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006440ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006440b1: cmp dword ptr [ebp - 0x20], 0x9f */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006440b8: ja 0x6440cb */ if ((!fC&&!fZ)) goto L_006440cb;
L_006440ba:; BB(0x006440ba);
    /* 006440ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006440bd: movzx edx, byte ptr [ecx + 0x64438c] */ r_edx = (u32)R8((u32)(r_ecx+0x64438cu));
    /* 006440c4: jmp dword ptr [edx*4 + 0x644378] */ { u32 t = R32((u32)(r_edx*4+0x644378u)); switch (t) { case 0x64417bu: goto L_0064417b; case 0x64415du: goto L_0064415d; case 0x644121u: goto L_00644121; case 0x644199u: goto L_00644199; case 0x6440cbu: goto L_006440cb; default: UNSUP(0x006440c4, "jump table entry is not a known target"); } }
L_006440cb:; BB(0x006440cb);
    /* 006440cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006440cd: jne 0x6440e6 */ if (!fZ) goto L_006440e6;
L_006440cf:; BB(0x006440cf);
    /* 006440cf: push 0x4a8 */ { u32 v = 0x4a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006440d4: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006440d9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006440de: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6440e3u); f_005e9f20();
    /* 006440e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006440e6:; BB(0x006440e6);
    /* 006440e6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006440ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006440ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006440f4: mov edx, dword ptr [eax + 0x1a4] */ r_edx = R32((u32)(r_eax+0x1a4u));
    /* 006440fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6440fcu); call_ind(t); }
    /* 006440fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006440ff: jmp 0x6442be */ goto L_006442be;
L_00644104:; BB(0x00644104);
    /* 00644104: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00644109: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064410b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644111: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00644117: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644119u); call_ind(t); }
    /* 00644119: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064411c: jmp 0x6442be */ goto L_006442be;
L_00644121:; BB(0x00644121);
    /* 00644121: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644127: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644129: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064412f: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00644135: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644137u); call_ind(t); }
    /* 00644137: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064413a: jmp 0x6442be */ goto L_006442be;
L_0064413f:; BB(0x0064413f);
    /* 0064413f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644145: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644147: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064414d: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00644153: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644155u); call_ind(t); }
    /* 00644155: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644158: jmp 0x6442be */ goto L_006442be;
L_0064415d:; BB(0x0064415d);
    /* 0064415d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644163: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644165: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064416b: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00644171: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644173u); call_ind(t); }
    /* 00644173: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644176: jmp 0x6442be */ goto L_006442be;
L_0064417b:; BB(0x0064417b);
    /* 0064417b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644181: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644183: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00644189: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 0064418f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644191u); call_ind(t); }
    /* 00644191: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644194: jmp 0x6442be */ goto L_006442be;
L_00644199:; BB(0x00644199);
    /* 00644199: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064419f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6441a4u); f_006375b0();
    /* 006441a4: mov ecx, eax */ r_ecx = r_eax;
    /* 006441a6: call 0x639ff0 */ r_esp -= 4; W32(r_esp, 0x6441abu); f_00639ff0();
    /* 006441ab: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006441ae: jmp 0x6442be */ goto L_006442be;
L_006441b3:; BB(0x006441b3);
    /* 006441b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006441b9: call 0x6388b0 */ r_esp -= 4; W32(r_esp, 0x6441beu); f_006388b0();
    /* 006441be: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006441c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006441c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006441c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006441c8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006441ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006441d0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006441d6: mov edx, dword ptr [eax + 0x1bc] */ r_edx = R32((u32)(r_eax+0x1bcu));
    /* 006441dc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6441deu); call_ind(t); }
    /* 006441de: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006441e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006441e3: je 0x6441ed */ if (fZ) goto L_006441ed;
L_006441e5:; BB(0x006441e5);
    /* 006441e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006441e8: jmp 0x6442be */ goto L_006442be;
L_006441ed:; BB(0x006441ed);
    /* 006441ed: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 006441f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006441f2: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x6441f7u); f_00641290();
    /* 006441f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006441fa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006441fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644200: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00644203: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00644206: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064420a: ja 0x64423a */ if ((!fC&&!fZ)) goto L_0064423a;
L_0064420c:; BB(0x0064420c);
    /* 0064420c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064420f: jmp dword ptr [eax*4 + 0x64442c] */ { u32 t = R32((u32)(r_eax*4+0x64442cu)); switch (t) { case 0x644216u: goto L_00644216; case 0x64421fu: goto L_0064421f; case 0x644228u: goto L_00644228; case 0x644231u: goto L_00644231; default: UNSUP(0x0064420f, "jump table entry is not a known target"); } }
L_00644216:; BB(0x00644216);
    /* 00644216: mov dword ptr [ebp - 8], 0xd */ W32((u32)(r_ebp+0xfffffff8u), 0xdu);
    /* 0064421d: jmp 0x64425c */ goto L_0064425c;
L_0064421f:; BB(0x0064421f);
    /* 0064421f: mov dword ptr [ebp - 8], 0x1a */ W32((u32)(r_ebp+0xfffffff8u), 0x1au);
    /* 00644226: jmp 0x64425c */ goto L_0064425c;
L_00644228:; BB(0x00644228);
    /* 00644228: mov dword ptr [ebp - 8], 0x27 */ W32((u32)(r_ebp+0xfffffff8u), 0x27u);
    /* 0064422f: jmp 0x64425c */ goto L_0064425c;
L_00644231:; BB(0x00644231);
    /* 00644231: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00644238: jmp 0x64425c */ goto L_0064425c;
L_0064423a:; BB(0x0064423a);
    /* 0064423a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0064423c: jne 0x644255 */ if (!fZ) goto L_00644255;
L_0064423e:; BB(0x0064423e);
    /* 0064423e: push 0x4c7 */ { u32 v = 0x4c7u; r_esp -= 4; W32(r_esp, v); }
    /* 00644243: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00644248: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0064424d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x644252u); f_005e9f20();
    /* 00644252: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00644255:; BB(0x00644255);
    /* 00644255: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0064425c:; BB(0x0064425c);
    /* 0064425c: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00644260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644261: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x644266u); f_00641280();
    /* 00644266: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00644269: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064426c: je 0x644280 */ if (fZ) goto L_00644280;
L_0064426e:; BB(0x0064426e);
    /* 0064426e: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00644272: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644273: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x644278u); f_00641280();
    /* 00644278: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064427b: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064427e: jne 0x644288 */ if (!fZ) goto L_00644288;
L_00644280:; BB(0x00644280);
    /* 00644280: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644283: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644286: jmp 0x6442be */ goto L_006442be;
L_00644288:; BB(0x00644288);
    /* 00644288: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064428b: add esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064428e: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00644292: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644293: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x644298u); f_00641280();
    /* 00644298: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064429b: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
    /* 0064429f: jmp 0x6442be */ goto L_006442be;
L_006442be:; BB(0x006442be);
    /* 006442be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006442bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006442c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006442c2: ret  */ FN_RET(0x00643e70); r_esp += 4; return;
}

void f_00644480(void) /* card::func_00644480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644480);
    /* 00644480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644481: mov ebp, esp */ r_ebp = r_esp;
    /* 00644483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644484: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00644488: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064448d: je 0x644497 */ if (fZ) goto L_00644497;
L_0064448f:; BB(0x0064448f);
    /* 0064448f: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00644493: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644495: je 0x64449f */ if (fZ) goto L_0064449f;
L_00644497:; BB(0x00644497);
    /* 00644497: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064449a: jmp 0x644562 */ goto L_00644562;
L_0064449f:; BB(0x0064449f);
    /* 0064449f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006444a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006444a3: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 006444a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006444a8: call 0x643e70 */ r_esp -= 4; W32(r_esp, 0x6444adu); f_00643e70();
    /* 006444ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006444b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006444b1: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006444b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006444b8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006444be: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 006444c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6444c6u); call_ind(t); }
    /* 006444c6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006444c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006444cb: jne 0x6444d4 */ if (!fZ) goto L_006444d4;
L_006444cd:; BB(0x006444cd);
    /* 006444cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006444cf: jmp 0x644562 */ goto L_00644562;
L_006444d4:; BB(0x006444d4);
    /* 006444d4: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 006444d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006444d9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x6444deu); f_00641280();
    /* 006444de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006444e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006444e4: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006444e8: jne 0x6444f1 */ if (!fZ) goto L_006444f1;
L_006444ea:; BB(0x006444ea);
    /* 006444ea: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
L_006444f1:; BB(0x006444f1);
    /* 006444f1: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006444f5: jne 0x644548 */ if (!fZ) goto L_00644548;
L_006444f7:; BB(0x006444f7);
    /* 006444f7: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 006444fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006444fc: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x644501u); f_00641290();
    /* 00644501: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00644504: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644507: jne 0x644510 */ if (!fZ) goto L_00644510;
L_00644509:; BB(0x00644509);
    /* 00644509: mov eax, 0x34 */ r_eax = 0x34u;
    /* 0064450e: jmp 0x644562 */ goto L_00644562;
L_00644510:; BB(0x00644510);
    /* 00644510: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00644514: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644515: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x64451au); f_00641290();
    /* 0064451a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064451d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644520: jne 0x644529 */ if (!fZ) goto L_00644529;
L_00644522:; BB(0x00644522);
    /* 00644522: mov eax, 0x35 */ r_eax = 0x35u;
    /* 00644527: jmp 0x644562 */ goto L_00644562;
L_00644529:; BB(0x00644529);
    /* 00644529: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0064452b: jne 0x644544 */ if (!fZ) goto L_00644544;
L_0064452d:; BB(0x0064452d);
    /* 0064452d: push 0x4ef */ { u32 v = 0x4efu; r_esp -= 4; W32(r_esp, v); }
    /* 00644532: push 0x6dc3c0 */ { u32 v = 0x6dc3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00644537: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0064453c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x644541u); f_005e9f20();
    /* 00644541: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00644544:; BB(0x00644544);
    /* 00644544: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00644546: jmp 0x644562 */ goto L_00644562;
L_00644548:; BB(0x00644548);
    /* 00644548: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0064454c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064454d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x644552u); f_00641290();
    /* 00644552: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00644555: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00644558: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064455b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064455e: lea eax, [eax + edx - 2] */ r_eax = (u32)(r_eax+r_edx+0xfffffffeu);
L_00644562:; BB(0x00644562);
    /* 00644562: mov esp, ebp */ r_esp = r_ebp;
    /* 00644564: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644565: ret  */ FN_RET(0x00644480); r_esp += 4; return;
}

