#include "protos.h"

void f_00544490(void) /* VideoBlackjackTouchButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544490);
    /* 00544490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544491: mov ebp, esp */ r_ebp = r_esp;
    /* 00544493: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544495: push 0x6a4fa8 */ { u32 v = 0x6a4fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054449a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005444a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005444a1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005444a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005444a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005444ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005444ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005444af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005444b5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005444b8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005444bf: jmp 0x5444ca */ goto L_005444ca;
L_005444c1:; BB(0x005444c1);
    /* 005444c1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005444c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005444c7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005444ca:; BB(0x005444ca);
    /* 005444ca: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005444ce: jge 0x54460b */ if ((fS==fO)) goto L_0054460b;
L_005444d4:; BB(0x005444d4);
    /* 005444d4: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005444d9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5444deu); f_00686d82();
    /* 005444de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005444e1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005444e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005444eb: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005444ef: je 0x54450a */ if (fZ) goto L_0054450a;
L_005444f1:; BB(0x005444f1);
    /* 005444f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005444f4: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5444f9u); f_00601a80();
    /* 005444f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005444fc: mov dword ptr [ecx], 0x6c65ec */ W32((u32)(r_ecx), 0x6c65ecu);
    /* 00544502: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00544505: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00544508: jmp 0x544511 */ goto L_00544511;
L_0054450a:; BB(0x0054450a);
    /* 0054450a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00544511:; BB(0x00544511);
    /* 00544511: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00544514: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00544517: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054451e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544521: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544524: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544527: mov dword ptr [edx + ecx*4 + 0x8c], eax */ W32((u32)(r_edx+r_ecx*4+0x8cu), r_eax);
    /* 0054452e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544530: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544532: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544535: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544538: mov edx, dword ptr [ecx + 0x73b368] */ r_edx = R32((u32)(r_ecx+0x73b368u));
    /* 0054453e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054453f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544542: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544545: mov ecx, dword ptr [eax + 0x73b364] */ r_ecx = R32((u32)(r_eax+0x73b364u));
    /* 0054454b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054454c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054454f: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544552: mov eax, dword ptr [edx + 0x73b360] */ r_eax = R32((u32)(r_edx+0x73b360u));
    /* 00544558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544559: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054455c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054455f: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00544566: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x54456bu); f_005eae80();
    /* 0054456b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054456d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054456f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544571: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544573: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544576: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544579: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00544580: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x544585u); f_006023d0();
    /* 00544585: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544588: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544589: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054458c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054458f: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00544596: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x54459bu); f_005f53e0();
    /* 0054459b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054459e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005445a1: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 005445a8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005445ab: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005445ae: mov byte ptr [edx + 0x1b5], 1 */ W8((u32)(r_edx+0x1b5u), 0x1u);
    /* 005445b5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005445b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005445bb: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 005445c2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005445c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005445c8: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 005445cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005445d1: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005445d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5445d9u); call_ind(t); }
    /* 005445d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005445dc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005445df: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 005445e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005445e9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005445ec: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 005445f3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005445f5: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005445f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5445fau); call_ind(t); }
    /* 005445fa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005445fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005445fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544601: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x544606u); f_005448f0();
    /* 00544606: jmp 0x5444c1 */ goto L_005444c1;
L_0054460b:; BB(0x0054460b);
    /* 0054460b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054460e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00544615: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00544616: mov esp, ebp */ r_esp = r_ebp;
    /* 00544618: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544619: ret  */ FN_RET(0x00544490); r_esp += 4; return;
}

void f_00545dc0(void) /* VideoBlackjackTouchButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545dc0);
    /* 00545dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00545dc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545dc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545dc9: mov eax, dword ptr [0x793408] */ r_eax = R32((u32)(0x793408u));
    /* 00545dce: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00545dd1: mov edx, dword ptr [0x793408] */ r_edx = R32((u32)(0x793408u));
    /* 00545dd7: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00545dda: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00545ddc: mov ecx, eax */ r_ecx = r_eax;
    /* 00545dde: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00545de1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545de3u); call_ind(t); }
    /* 00545de3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545de5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545de6: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00545dec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00545def: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545df0: fld1  */ FPUSH(1.0);
    /* 00545df2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00545df5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545df7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00545df9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545dfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545dfd: push 0x311733 */ { u32 v = 0x311733u; r_esp -= 4; W32(r_esp, v); }
    /* 00545e02: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00545e08: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00545e0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00545e10: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00545e16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545e18u); call_ind(t); }
    /* 00545e18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545e1b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00545e1e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00545e21: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00545e25: ja 0x545f3b */ if ((!fC&&!fZ)) goto L_00545f3b;
L_00545e2b:; BB(0x00545e2b);
    /* 00545e2b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545e2e: jmp dword ptr [eax*4 + 0x545f40] */ { u32 t = R32((u32)(r_eax*4+0x545f40u)); switch (t) { case 0x545e35u: goto L_00545e35; case 0x545e47u: goto L_00545e47; case 0x545e59u: goto L_00545e59; case 0x545e79u: goto L_00545e79; case 0x545ec0u: goto L_00545ec0; case 0x545f07u: goto L_00545f07; case 0x545f14u: goto L_00545f14; case 0x545f30u: goto L_00545f30; case 0x545e69u: goto L_00545e69; default: UNSUP(0x00545e2e, "jump table entry is not a known target"); } }
L_00545e35:; BB(0x00545e35);
    /* 00545e35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545e37: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545e3d: call 0x548d20 */ r_esp -= 4; W32(r_esp, 0x545e42u); f_00548d20();
    /* 00545e42: jmp 0x545f3b */ goto L_00545f3b;
L_00545e47:; BB(0x00545e47);
    /* 00545e47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545e49: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545e4f: call 0x548d20 */ r_esp -= 4; W32(r_esp, 0x545e54u); f_00548d20();
    /* 00545e54: jmp 0x545f3b */ goto L_00545f3b;
L_00545e59:; BB(0x00545e59);
    /* 00545e59: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00545e5f: call 0x544e30 */ r_esp -= 4; W32(r_esp, 0x545e64u); f_00544e30();
    /* 00545e64: jmp 0x545f3b */ goto L_00545f3b;
L_00545e69:; BB(0x00545e69);
    /* 00545e69: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00545e6f: call 0x544f00 */ r_esp -= 4; W32(r_esp, 0x545e74u); f_00544f00();
    /* 00545e74: jmp 0x545f3b */ goto L_00545f3b;
L_00545e79:; BB(0x00545e79);
    /* 00545e79: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545e7f: call 0x549ad0 */ r_esp -= 4; W32(r_esp, 0x545e84u); f_00549ad0();
    /* 00545e84: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00545e87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545e89: je 0x545e98 */ if (fZ) goto L_00545e98;
L_00545e8b:; BB(0x00545e8b);
    /* 00545e8b: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545e91: call 0x549c00 */ r_esp -= 4; W32(r_esp, 0x545e96u); f_00549c00();
    /* 00545e96: jmp 0x545ebe */ goto L_00545ebe;
L_00545e98:; BB(0x00545e98);
    /* 00545e98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545e9a: push 0x6c6774 */ { u32 v = 0x6c6774u; r_esp -= 4; W32(r_esp, v); }
    /* 00545e9f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x545ea4u); f_00630f40();
    /* 00545ea4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545ea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545ea8: push 0x6c674c */ { u32 v = 0x6c674cu; r_esp -= 4; W32(r_esp, v); }
    /* 00545ead: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x545eb2u); f_00630f40();
    /* 00545eb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545eb6: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x545ebbu); f_0062ff10();
    /* 00545ebb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00545ebe:; BB(0x00545ebe);
    /* 00545ebe: jmp 0x545f3b */ goto L_00545f3b;
L_00545ec0:; BB(0x00545ec0);
    /* 00545ec0: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545ec6: call 0x5497a0 */ r_esp -= 4; W32(r_esp, 0x545ecbu); f_005497a0();
    /* 00545ecb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00545ece: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545ed0: je 0x545edf */ if (fZ) goto L_00545edf;
L_00545ed2:; BB(0x00545ed2);
    /* 00545ed2: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545ed8: call 0x5499a0 */ r_esp -= 4; W32(r_esp, 0x545eddu); f_005499a0();
    /* 00545edd: jmp 0x545f05 */ goto L_00545f05;
L_00545edf:; BB(0x00545edf);
    /* 00545edf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545ee1: push 0x6c6728 */ { u32 v = 0x6c6728u; r_esp -= 4; W32(r_esp, v); }
    /* 00545ee6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x545eebu); f_00630f40();
    /* 00545eeb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545eee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545eef: push 0x6c6700 */ { u32 v = 0x6c6700u; r_esp -= 4; W32(r_esp, v); }
    /* 00545ef4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x545ef9u); f_00630f40();
    /* 00545ef9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545efd: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x545f02u); f_0062ff10();
    /* 00545f02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00545f05:; BB(0x00545f05);
    /* 00545f05: jmp 0x545f3b */ goto L_00545f3b;
L_00545f07:; BB(0x00545f07);
    /* 00545f07: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545f0d: call 0x549750 */ r_esp -= 4; W32(r_esp, 0x545f12u); f_00549750();
    /* 00545f12: jmp 0x545f3b */ goto L_00545f3b;
L_00545f14:; BB(0x00545f14);
    /* 00545f14: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00545f16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545f18: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00545f1e: call 0x545410 */ r_esp -= 4; W32(r_esp, 0x545f23u); f_00545410();
    /* 00545f23: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545f29: call 0x5491f0 */ r_esp -= 4; W32(r_esp, 0x545f2eu); f_005491f0();
    /* 00545f2e: jmp 0x545f3b */ goto L_00545f3b;
L_00545f30:; BB(0x00545f30);
    /* 00545f30: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545f36: call 0x5496a0 */ r_esp -= 4; W32(r_esp, 0x545f3bu); f_005496a0();
L_00545f3b:; BB(0x00545f3b);
    /* 00545f3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00545f3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545f3e: ret  */ FN_RET(0x00545dc0); r_esp += 4; return;
}

void f_005472f0(void) /* VideoBlackjackTouchButton::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005472f0);
    /* 005472f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005472f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005472f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005472f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005472f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005472fa: mov dword ptr [eax], 0x6c65ec */ W32((u32)(r_eax), 0x6c65ecu);
    /* 00547300: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547303: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x547308u); f_00601ba0();
    /* 00547308: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054730b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0054730e: je 0x54731c */ if (fZ) goto L_0054731c;
L_00547310:; BB(0x00547310);
    /* 00547310: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547313: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547314: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x547319u); f_00686cae();
    /* 00547319: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054731c:; BB(0x0054731c);
    /* 0054731c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054731f: mov esp, ebp */ r_esp = r_ebp;
    /* 00547321: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547322: ret 4 */ FN_RET(0x005472f0); r_esp += 8; return;
}

