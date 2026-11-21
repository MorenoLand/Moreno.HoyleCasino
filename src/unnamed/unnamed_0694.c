#include "protos.h"

void f_00694090(void) /* sub_694090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694090);
    /* 00694090: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00694094: and eax, 0xbf800000 */ {  u32 a = r_eax; u32 b = 0xbf800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00694099: or eax, 0x3f800000 */ {  u32 a = r_eax; u32 b = 0x3f800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069409e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006940a2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006940a6: ret  */ FN_RET(0x00694090); r_esp += 4; return;
}

void f_006940b0(void) /* sub_6940B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006940b0);
    /* 006940b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006940b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006940b3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 006940b6: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006940b9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006940bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006940bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006940be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006940bf: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006940c1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006940c4: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 006940c8: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 006940d0: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 006940d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006940d8: jle 0x69443b */ if ((fZ||fS!=fO)) goto L_0069443b;
L_006940de:; BB(0x006940de);
    /* 006940de: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006940e1: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006940e4: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006940e9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006940eb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006940ef: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006940f3: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
L_006940f7:; BB(0x006940f7);
    /* 006940f7: mov ecx, dword ptr [eax - 0x400] */ r_ecx = R32((u32)(r_eax+0xfffffc00u));
    /* 006940fd: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00694100: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00694103: cmp dword ptr [ecx + edx], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694107: jne 0x694115 */ if (!fZ) goto L_00694115;
L_00694109:; BB(0x00694109);
    /* 00694109: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0069410b: cmp dword ptr [edx + esi*4], 0 */ {  u32 a = R32((u32)(r_edx+r_esi*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069410f: je 0x69440f */ if (fZ) goto L_0069440f;
L_00694115:; BB(0x00694115);
    /* 00694115: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00694117: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0069411a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069411d: mov esi, dword ptr [ecx + edx] */ r_esi = R32((u32)(r_ecx+r_edx));
    /* 00694120: mov edi, dword ptr [eax + edx] */ r_edi = R32((u32)(r_eax+r_edx));
    /* 00694123: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00694127: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 0069412b: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0069412f: lea esi, [esi + edx*4] */ r_esi = (u32)(r_esi+r_edx*4);
    /* 00694132: lea edx, [edi + edx*4] */ r_edx = (u32)(r_edi+r_edx*4);
    /* 00694135: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00694139: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0069413c: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00694140: mov esi, dword ptr [ecx + edx] */ r_esi = R32((u32)(r_ecx+r_edx));
    /* 00694143: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 00694146: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00694149: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 0069414d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00694150: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00694154: mov eax, dword ptr [edx + esi*4 + 0xfc] */ r_eax = R32((u32)(r_edx+r_esi*4+0xfcu));
    /* 0069415b: fld qword ptr [eax*8 + 0x787408] */ FPUSH(R_F64((u32)(r_eax*8+0x787408u)));
    /* 00694162: mov eax, dword ptr [edx + esi*4 + 0x138] */ r_eax = R32((u32)(r_edx+r_esi*4+0x138u));
    /* 00694169: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0069416d: fld qword ptr [eax*8 + 0x787408] */ FPUSH(R_F64((u32)(r_eax*8+0x787408u)));
    /* 00694174: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00694177: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0069417b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0069417e: cmp dword ptr [eax + 0x1f8], 0 */ {  u32 a = R32((u32)(r_eax+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694185: je 0x69418d */ if (fZ) goto L_0069418d;
L_00694187:; BB(0x00694187);
    /* 00694187: mov ebx, dword ptr [eax + 0x200] */ r_ebx = R32((u32)(r_eax+0x200u));
L_0069418d:; BB(0x0069418d);
    /* 0069418d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069418f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00694193: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00694196: lea esi, [esi + eax*4] */ r_esi = (u32)(r_esi+r_eax*4);
    /* 00694199: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069419b: mov edx, dword ptr [edx + eax*4 + 0x84] */ r_edx = R32((u32)(r_edx+r_eax*4+0x84u));
    /* 006941a2: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 006941a5: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006941a9: mov dword ptr [ecx + eax], 1 */ W32((u32)(r_ecx+r_eax), 0x1u);
    /* 006941b0: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006941b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006941b6: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006941bd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006941c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006941c2: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006941c4: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 006941c8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006941ca: jle 0x69440b */ if ((fZ||fS!=fO)) goto L_0069440b;
L_006941d0:; BB(0x006941d0);
    /* 006941d0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006941d2: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
L_006941d6:; BB(0x006941d6);
    /* 006941d6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006941da: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 006941e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006941e4: jle 0x694327 */ if ((fZ||fS!=fO)) goto L_00694327;
L_006941ea:; BB(0x006941ea);
    /* 006941ea: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 006941ee: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 006941f2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006941f6: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006941f8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006941fc: mov eax, ecx */ r_eax = r_ecx;
    /* 006941fe: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00694202: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694204: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00694208: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0069420c: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00694210: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00694212: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00694214: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00694216: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694218: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0069421c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00694220: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00694224: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00694228: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_0069422c:; BB(0x0069422c);
    /* 0069422c: cmp edx, dword ptr [ebp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069422f: jge 0x694465 */ if ((fS==fO)) goto L_00694465;
L_00694235:; BB(0x00694235);
    /* 00694235: cmp edx, dword ptr [esp + 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694239: jl 0x694262 */ if ((fS!=fO)) goto L_00694262;
L_0069423b:; BB(0x0069423b);
    /* 0069423b: fld dword ptr [ecx + esi] */ FPUSH(R_F32((u32)(r_ecx+r_esi)));
    /* 0069423e: fabs  */ ST(0) = fabsl(ST(0));
    /* 00694240: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00694244: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00694246: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694248: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069424d: jne 0x694262 */ if (!fZ) goto L_00694262;
L_0069424f:; BB(0x0069424f);
    /* 0069424f: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00694251: fabs  */ ST(0) = fabsl(ST(0));
    /* 00694253: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00694257: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00694259: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069425b: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00694260: je 0x694291 */ if (fZ) goto L_00694291;
L_00694262:; BB(0x00694262);
    /* 00694262: fld dword ptr [ecx + esi] */ FPUSH(R_F32((u32)(r_ecx+r_esi)));
    /* 00694265: fabs  */ ST(0) = fabsl(ST(0));
    /* 00694267: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0069426b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069426d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069426f: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00694274: jne 0x694442 */ if (!fZ) goto L_00694442;
L_0069427a:; BB(0x0069427a);
    /* 0069427a: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0069427c: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069427e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00694282: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00694284: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694286: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069428b: jne 0x694442 */ if (!fZ) goto L_00694442;
L_00694291:; BB(0x00694291);
    /* 00694291: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00694295: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00694299: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069429b: lea edi, [ebx + esi] */ r_edi = (u32)(r_ebx+r_esi);
    /* 0069429e: lea eax, [ecx + esi] */ r_eax = (u32)(r_ecx+r_esi);
    /* 006942a1: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 006942a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006942a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006942a7: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 006942aa: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006942ac: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006942b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006942b1: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 006942b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006942b6: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 006942b9: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 006942bd: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 006942c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006942c1: call 0x694560 */ r_esp -= 4; W32(r_esp, 0x6942c6u); f_00694560();
    /* 006942c6: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 006942c8: fadd dword ptr [0x6b3654] */ ST(0) = ST(0) + R_F32((u32)(0x6b3654u));
    /* 006942ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006942d1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006942d4: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x6942d9u); f_00686fb4();
    /* 006942d9: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 006942df: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006942e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006942e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006942e8: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006942eb: jp 0x6942fd */ if (fP) goto L_006942fd;
L_006942ed:; BB(0x006942ed);
    /* 006942ed: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 006942ef: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006942f1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006942f3: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 006942f7: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006942fb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006942fd:; BB(0x006942fd);
    /* 006942fd: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_00694301:; BB(0x00694301);
    /* 00694301: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00694305: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00694309: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069430c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069430f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00694313: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00694317: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694318: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00694319: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0069431d: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00694321: jne 0x69422c */ if (!fZ) goto L_0069422c;
L_00694327:; BB(0x00694327);
    /* 00694327: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0069432a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0069432d: mov eax, dword ptr [ecx + 0x1f8] */ r_eax = R32((u32)(r_ecx+0x1f8u));
    /* 00694333: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00694337: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694339: je 0x6943e3 */ if (fZ) goto L_006943e3;
L_0069433f:; BB(0x0069433f);
    /* 0069433f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694341: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00694349: jle 0x6943e3 */ if ((fZ||fS!=fO)) goto L_006943e3;
L_0069434f:; BB(0x0069434f);
    /* 0069434f: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
L_00694353:; BB(0x00694353);
    /* 00694353: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00694356: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0069435a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0069435d: fcomp qword ptr [eax + 0x208] */ fx_compare(ST(0), R_F64((u32)(r_eax+0x208u))); FPOP();
    /* 00694363: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694365: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069436a: jne 0x6943e3 */ if (!fZ) goto L_006943e3;
L_0069436c:; BB(0x0069436c);
    /* 0069436c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00694370: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00694373: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00694375: mov esi, dword ptr [ebx + edx] */ r_esi = R32((u32)(r_ebx+r_edx));
    /* 00694378: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069437a: jge 0x6943cb */ if ((fS==fO)) goto L_006943cb;
L_0069437c:; BB(0x0069437c);
    /* 0069437c: cmp esi, dword ptr [esp + 0x44] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694380: jl 0x6943cb */ if ((fS!=fO)) goto L_006943cb;
L_00694382:; BB(0x00694382);
    /* 00694382: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00694386: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694389: fld dword ptr [eax + esi*4] */ FPUSH(R_F32((u32)(r_eax+r_esi*4)));
    /* 0069438c: fadd dword ptr [0x6b3654] */ ST(0) = ST(0) + R_F32((u32)(0x6b3654u));
    /* 00694392: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00694395: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x69439au); f_00686fb4();
    /* 0069439a: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 006943a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006943a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006943a5: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006943a8: jp 0x6943cb */ if (fP) goto L_006943cb;
L_006943aa:; BB(0x006943aa);
    /* 006943aa: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006943ae: mov edx, dword ptr [ecx + esi*4] */ r_edx = R32((u32)(r_ecx+r_esi*4));
    /* 006943b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006943b2: call 0x694090 */ r_esp -= 4; W32(r_esp, 0x6943b7u); f_00694090();
    /* 006943b7: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
    /* 006943ba: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006943be: fsub dword ptr [0x6b3650] */ ST(0) = ST(0) - R_F32((u32)(0x6b3650u));
    /* 006943c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006943c7: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
L_006943cb:; BB(0x006943cb);
    /* 006943cb: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 006943cf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006943d3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006943d4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006943d7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006943d9: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006943dd: jl 0x694353 */ if ((fS!=fO)) goto L_00694353;
L_006943e3:; BB(0x006943e3);
    /* 006943e3: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 006943e7: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 006943eb: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 006943f2: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006943f4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006943f6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006943f9: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 006943fd: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00694401: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00694403: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694405: jl 0x6941d6 */ if ((fS!=fO)) goto L_006941d6;
L_0069440b:; BB(0x0069440b);
    /* 0069440b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_0069440f:; BB(0x0069440f);
    /* 0069440f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00694412: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00694416: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0069441a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069441b: mov esi, dword ptr [edx + 0x484] */ r_esi = R32((u32)(r_edx+0x484u));
    /* 00694421: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694424: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00694427: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694429: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0069442d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00694431: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00694435: jl 0x6940f7 */ if ((fS!=fO)) goto L_006940f7;
L_0069443b:; BB(0x0069443b);
    /* 0069443b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069443c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069443d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069443e: mov esp, ebp */ r_esp = r_ebp;
    /* 00694440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694441: ret  */ FN_RET(0x006940b0); r_esp += 4; return;
L_00694442:; BB(0x00694442);
    /* 00694442: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00694446: mov ecx, dword ptr [ecx + esi] */ r_ecx = R32((u32)(r_ecx+r_esi));
    /* 00694449: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069444b: lea edx, [ebx + esi] */ r_edx = (u32)(r_ebx+r_esi);
    /* 0069444e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069444f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00694451: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694454: call 0x694480 */ r_esp -= 4; W32(r_esp, 0x694459u); f_00694480();
    /* 00694459: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0069445d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694460: jmp 0x694301 */ goto L_00694301;
L_00694465:; BB(0x00694465);
    /* 00694465: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00694469: mov dword ptr [ebx + esi], 0 */ W32((u32)(r_ebx+r_esi), 0x0u);
    /* 00694470: mov dword ptr [edx + esi], 0 */ W32((u32)(r_edx+r_esi), 0x0u);
    /* 00694477: jmp 0x694301 */ goto L_00694301;
}

void f_00694480(void) /* sub_694480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694480);
    /* 00694480: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00694484: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00694488: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694489: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0069448b: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069448d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069448f: fabs  */ ST(0) = fabsl(ST(0));
    /* 00694491: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00694493: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00694495: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694497: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069449c: jne 0x6944a5 */ if (!fZ) goto L_006944a5;
L_0069449e:; BB(0x0069449e);
    /* 0069449e: mov esi, 1 */ r_esi = 0x1u;
    /* 006944a3: jmp 0x6944a7 */ goto L_006944a7;
L_006944a5:; BB(0x006944a5);
    /* 006944a5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006944a7:; BB(0x006944a7);
    /* 006944a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006944a9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006944ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006944ad: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006944b0: jp 0x6944b9 */ if (fP) goto L_006944b9;
L_006944b2:; BB(0x006944b2);
    /* 006944b2: mov eax, 1 */ r_eax = 0x1u;
    /* 006944b7: jmp 0x6944bb */ goto L_006944bb;
L_006944b9:; BB(0x006944b9);
    /* 006944b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006944bb:; BB(0x006944bb);
    /* 006944bb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006944bd: jne 0x6944e1 */ if (!fZ) goto L_006944e1;
L_006944bf:; BB(0x006944bf);
    /* 006944bf: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006944c3: fabs  */ ST(0) = fabsl(ST(0));
    /* 006944c5: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006944c9: fabs  */ ST(0) = fabsl(ST(0));
    /* 006944cb: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006944cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006944cf: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006944d2: jp 0x6944db */ if (fP) goto L_006944db;
L_006944d4:; BB(0x006944d4);
    /* 006944d4: mov eax, 1 */ r_eax = 0x1u;
    /* 006944d9: jmp 0x6944dd */ goto L_006944dd;
L_006944db:; BB(0x006944db);
    /* 006944db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006944dd:; BB(0x006944dd);
    /* 006944dd: lea esi, [eax + eax - 1] */ r_esi = (u32)(r_eax+r_eax+0xffffffffu);
L_006944e1:; BB(0x006944e1);
    /* 006944e1: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006944e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006944e5: jne 0x694508 */ if (!fZ) goto L_00694508;
L_006944e7:; BB(0x006944e7);
    /* 006944e7: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006944e9: fcomp dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); FPOP();
    /* 006944ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006944f1: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006944f6: jne 0x694500 */ if (!fZ) goto L_00694500;
L_006944f8:; BB(0x006944f8);
    /* 006944f8: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006944fa: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 006944fc: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 006944fe: jmp 0x694529 */ goto L_00694529;
L_00694500:; BB(0x00694500);
    /* 00694500: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00694502: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00694504: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00694506: jmp 0x694529 */ goto L_00694529;
L_00694508:; BB(0x00694508);
    /* 00694508: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069450a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069450c: fcomp dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); FPOP();
    /* 00694512: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694514: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00694519: jne 0x694521 */ if (!fZ) goto L_00694521;
L_0069451b:; BB(0x0069451b);
    /* 0069451b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0069451d: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0069451f: jmp 0x694525 */ goto L_00694525;
L_00694521:; BB(0x00694521);
    /* 00694521: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00694523: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
L_00694525:; BB(0x00694525);
    /* 00694525: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00694527: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
L_00694529:; BB(0x00694529);
    /* 00694529: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0069452b: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069452d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069452f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00694531: fmul qword ptr [0x6e57b8] */ ST(0) = ST(0) * R_F64((u32)(0x6e57b8u));
    /* 00694537: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00694539: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069453b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069453e: jp 0x69454f */ if (fP) goto L_0069454f;
L_00694540:; BB(0x00694540);
    /* 00694540: fmul qword ptr [0x6d7e38] */ ST(0) = ST(0) * R_F64((u32)(0x6d7e38u));
    /* 00694546: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00694548: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0069454a: fchs  */ ST(0) = -ST(0);
    /* 0069454c: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0069454e: ret  */ FN_RET(0x00694480); r_esp += 4; return;
L_0069454f:; BB(0x0069454f);
    /* 0069454f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00694551: ret  */ FN_RET(0x00694480); r_esp += 4; return;
}

void f_00694560(void) /* sub_694560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694560);
    /* 00694560: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694561: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694562: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00694566: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694567: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0069456b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069456d: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069456f: mov eax, esi */ r_eax = r_esi;
    /* 00694571: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00694574: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694576: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00694577: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00694578: mov ebx, eax */ r_ebx = r_eax;
    /* 0069457a: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 0069457f: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00694581: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00694583: mov edx, ecx */ r_edx = r_ecx;
    /* 00694585: not edx */ r_edx = ~r_edx;
    /* 00694587: and edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00694589: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069458b: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069458d: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069458f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00694591: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694592: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00694594: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00694597: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00694598: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694599: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069459b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069459f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006945a0: fld dword ptr [ecx*4 + 0x787850] */ FPUSH(R_F32((u32)(r_ecx*4+0x787850u)));
    /* 006945a7: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 006945ad: fmul dword ptr [edx*4 + 0x787450] */ ST(0) = ST(0) * R_F32((u32)(r_edx*4+0x787450u));
    /* 006945b4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006945b8: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 006945bc: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 006945be: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006945c4: ret  */ FN_RET(0x00694560); r_esp += 4; return;
}

void f_006945d0(void) /* sub_6945D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006945d0);
    /* 006945d0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006945d3: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006945d7: mov eax, ecx */ r_eax = r_ecx;
    /* 006945d9: and eax, 0x1fffff */ {  u32 a = r_eax; u32 b = 0x1fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006945de: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006945e2: mov eax, ecx */ r_eax = r_ecx;
    /* 006945e4: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006945e8: sar eax, 0x15 */ { u32 c = (21u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006945eb: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006945f0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006945f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 006945f6: jns 0x694602 */ if (!fS) goto L_00694602;
L_006945f8:; BB(0x006945f8);
    /* 006945f8: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 006945fc: fchs  */ ST(0) = -ST(0);
    /* 006945fe: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
L_00694602:; BB(0x00694602);
    /* 00694602: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00694606: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0069460a: add eax, 0xfffffcec */ {  u32 a = r_eax; u32 b = 0xfffffcecu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069460f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694610: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694612: call 0x69d572 */ r_esp -= 4; W32(r_esp, 0x694617u); f_0069d572();
    /* 00694617: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069461a: ret  */ FN_RET(0x006945d0); r_esp += 4; return;
}

void f_00694620(void) /* sub_694620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694620);
    /* 00694620: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694626: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694627: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694628: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694629: mov esi, dword ptr [esp + 0xa0] */ r_esi = R32((u32)(r_esp+0xa0u));
    /* 00694630: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694632: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694633: mov eax, esi */ r_eax = r_esi;
    /* 00694635: jne 0x69463e */ if (!fZ) goto L_0069463e;
L_00694637:; BB(0x00694637);
    /* 00694637: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
L_0069463e:; BB(0x0069463e);
    /* 0069463e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00694641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694642: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x694647u); f_006872fa();
    /* 00694647: mov ebp, dword ptr [esp + 0xa0] */ r_ebp = R32((u32)(r_esp+0xa0u));
    /* 0069464e: mov edx, eax */ r_edx = r_eax;
    /* 00694650: mov ecx, 0x21 */ r_ecx = 0x21u;
    /* 00694655: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694657: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 0069465b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069465e: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00694660: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 00694667: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00694669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069466b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069466f: jle 0x694713 */ if ((fZ||fS!=fO)) goto L_00694713;
L_00694675:; BB(0x00694675);
    /* 00694675: mov edi, edx */ r_edi = r_edx;
    /* 00694677: jmp 0x694680 */ goto L_00694680;
L_00694679:; BB(0x00694679);
    /* 00694679: mov esi, dword ptr [esp + 0xa4] */ r_esi = R32((u32)(r_esp+0xa4u));
L_00694680:; BB(0x00694680);
    /* 00694680: mov ecx, dword ptr [ebp + ebx*4] */ r_ecx = R32((u32)(r_ebp+r_ebx*4));
    /* 00694684: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694686: jle 0x6946f8 */ if ((fZ||fS!=fO)) goto L_006946f8;
L_00694688:; BB(0x00694688);
    /* 00694688: mov esi, dword ptr [esp + ecx*4 + 0x14] */ r_esi = R32((u32)(r_esp+r_ecx*4+0x14u));
    /* 0069468c: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069468f: jge 0x69469d */ if ((fS==fO)) goto L_0069469d;
L_00694691:; BB(0x00694691);
    /* 00694691: mov edx, esi */ r_edx = r_esi;
    /* 00694693: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00694695: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694697: jne 0x694771 */ if (!fZ) goto L_00694771;
L_0069469d:; BB(0x0069469d);
    /* 0069469d: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0069469f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006946a2: mov eax, ecx */ r_eax = r_ecx;
L_006946a4:; BB(0x006946a4);
    /* 006946a4: mov edx, dword ptr [esp + eax*4 + 0x14] */ r_edx = R32((u32)(r_esp+r_eax*4+0x14u));
    /* 006946a8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006946ab: jne 0x6946b9 */ if (!fZ) goto L_006946b9;
L_006946ad:; BB(0x006946ad);
    /* 006946ad: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006946ae: mov dword ptr [esp + eax*4 + 0x14], edx */ W32((u32)(r_esp+r_eax*4+0x14u), r_edx);
    /* 006946b2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006946b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006946b5: jg 0x6946a4 */ if ((!fZ&&fS==fO)) goto L_006946a4;
L_006946b7:; BB(0x006946b7);
    /* 006946b7: jmp 0x6946d0 */ goto L_006946d0;
L_006946b9:; BB(0x006946b9);
    /* 006946b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006946bc: jne 0x6946c4 */ if (!fZ) goto L_006946c4;
L_006946be:; BB(0x006946be);
    /* 006946be: inc dword ptr [esp + 0x18] */ { u32 ad = (u32)(r_esp+0x18u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006946c2: jmp 0x6946d0 */ goto L_006946d0;
L_006946c4:; BB(0x006946c4);
    /* 006946c4: mov edx, dword ptr [esp + eax*4 + 0x10] */ r_edx = R32((u32)(r_esp+r_eax*4+0x10u));
    /* 006946c8: lea eax, [esp + eax*4 + 0x14] */ r_eax = (u32)(r_esp+r_eax*4+0x14u);
    /* 006946cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006946ce: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_006946d0:; BB(0x006946d0);
    /* 006946d0: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 006946d3: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006946d6: jge 0x6946ff */ if ((fS==fO)) goto L_006946ff;
L_006946d8:; BB(0x006946d8);
    /* 006946d8: mov ecx, dword ptr [esp + eax*4 + 0x14] */ r_ecx = R32((u32)(r_esp+r_eax*4+0x14u));
    /* 006946dc: mov edx, ecx */ r_edx = r_ecx;
    /* 006946de: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006946e0: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006946e2: jne 0x6946ff */ if (!fZ) goto L_006946ff;
L_006946e4:; BB(0x006946e4);
    /* 006946e4: mov esi, ecx */ r_esi = r_ecx;
    /* 006946e6: mov ecx, dword ptr [esp + eax*4 + 0x10] */ r_ecx = R32((u32)(r_esp+r_eax*4+0x10u));
    /* 006946ea: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006946ec: mov dword ptr [esp + eax*4 + 0x14], ecx */ W32((u32)(r_esp+r_eax*4+0x14u), r_ecx);
    /* 006946f0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006946f1: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006946f4: jl 0x6946d8 */ if ((fS!=fO)) goto L_006946d8;
L_006946f6:; BB(0x006946f6);
    /* 006946f6: jmp 0x6946ff */ goto L_006946ff;
L_006946f8:; BB(0x006946f8);
    /* 006946f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006946fa: jne 0x6946ff */ if (!fZ) goto L_006946ff;
L_006946fc:; BB(0x006946fc);
    /* 006946fc: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_006946ff:; BB(0x006946ff);
    /* 006946ff: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 00694706: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00694707: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694709: jl 0x694679 */ if ((fS!=fO)) goto L_00694679;
L_0069470f:; BB(0x0069470f);
    /* 0069470f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00694713:; BB(0x00694713);
    /* 00694713: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00694715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694717: jle 0x694764 */ if ((fZ||fS!=fO)) goto L_00694764;
L_00694719:; BB(0x00694719);
    /* 00694719: mov edi, edx */ r_edi = r_edx;
L_0069471b:; BB(0x0069471b);
    /* 0069471b: mov edx, dword ptr [ebp + ebx*4] */ r_edx = R32((u32)(r_ebp+r_ebx*4));
    /* 0069471f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694721: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00694723: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694725: jle 0x694740 */ if ((fZ||fS!=fO)) goto L_00694740;
L_00694727:; BB(0x00694727);
    /* 00694727: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
L_00694729:; BB(0x00694729);
    /* 00694729: mov ebp, esi */ r_ebp = r_esi;
    /* 0069472b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069472d: shr ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0069472f: and ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00694732: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694734: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694735: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694737: jl 0x694729 */ if ((fS!=fO)) goto L_00694729;
L_00694739:; BB(0x00694739);
    /* 00694739: mov ebp, dword ptr [esp + 0x9c] */ r_ebp = R32((u32)(r_esp+0x9cu));
L_00694740:; BB(0x00694740);
    /* 00694740: mov ecx, dword ptr [esp + 0xa4] */ r_ecx = R32((u32)(r_esp+0xa4u));
    /* 00694747: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694749: je 0x69474f */ if (fZ) goto L_0069474f;
L_0069474b:; BB(0x0069474b);
    /* 0069474b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069474d: je 0x694754 */ if (fZ) goto L_00694754;
L_0069474f:; BB(0x0069474f);
    /* 0069474f: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00694751: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00694754:; BB(0x00694754);
    /* 00694754: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 0069475b: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069475c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069475e: jl 0x69471b */ if ((fS!=fO)) goto L_0069471b;
L_00694760:; BB(0x00694760);
    /* 00694760: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00694764:; BB(0x00694764);
    /* 00694764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694765: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694766: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694767: mov eax, edx */ r_eax = r_edx;
    /* 00694769: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069476a: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694770: ret  */ FN_RET(0x00694620); r_esp += 4; return;
L_00694771:; BB(0x00694771);
    /* 00694771: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00694775: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694776: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69477bu); f_00687300();
    /* 0069477b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069477e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694780: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694781: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694783: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694784: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069478a: ret  */ FN_RET(0x00694620); r_esp += 4; return;
}

void f_00694790(void) /* sub_694790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694790);
    /* 00694790: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694791: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694792: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694793: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00694797: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694798: fild dword ptr [esi + 4] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x4u)));
    /* 0069479b: fild dword ptr [esi] */ FPUSH((long double)(i32)R32((u32)(r_esi)));
    /* 0069479d: fdivr dword ptr [0x6b3650] */ ST(0) = R_F32((u32)(0x6b3650u)) / ST(0);
    /* 006947a3: call 0x69d578 */ r_esp -= 4; W32(r_esp, 0x6947a8u); f_0069d578();
    /* 006947a8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006947ab: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006947ae: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x6947b3u); f_00686fb4();
    /* 006947b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006947b6: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x6947bbu); f_00687450();
    /* 006947bb: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 006947bd: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 006947c0: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
L_006947c4:; BB(0x006947c4);
    /* 006947c4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006947c9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006947cb: mov edx, ecx */ r_edx = r_ecx;
    /* 006947cd: jle 0x6947e3 */ if ((fZ||fS!=fO)) goto L_006947e3;
L_006947cf:; BB(0x006947cf);
    /* 006947cf: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 006947d2: mov esi, ebx */ r_esi = r_ebx;
L_006947d4:; BB(0x006947d4);
    /* 006947d4: mov ebp, edi */ r_ebp = r_edi;
    /* 006947d6: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006947d9: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006947dc: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006947dd: jne 0x6947d4 */ if (!fZ) goto L_006947d4;
L_006947df:; BB(0x006947df);
    /* 006947df: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_006947e3:; BB(0x006947e3);
    /* 006947e3: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006947e5: jg 0x6947ee */ if ((!fZ&&fS==fO)) goto L_006947ee;
L_006947e7:; BB(0x006947e7);
    /* 006947e7: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006947e9: jg 0x6947f1 */ if ((!fZ&&fS==fO)) goto L_006947f1;
L_006947eb:; BB(0x006947eb);
    /* 006947eb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006947ec: jmp 0x6947c4 */ goto L_006947c4;
L_006947ee:; BB(0x006947ee);
    /* 006947ee: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006947ef: jmp 0x6947c4 */ goto L_006947c4;
L_006947f1:; BB(0x006947f1);
    /* 006947f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006947f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006947f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006947f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006947f5: ret  */ FN_RET(0x00694790); r_esp += 4; return;
}

void f_00694800(void) /* sub_694800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694800);
    /* 00694800: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694803: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694805: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00694809: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069480b: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0069480e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694811: je 0x694820 */ if (fZ) goto L_00694820;
L_00694813:; BB(0x00694813);
    /* 00694813: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694816: je 0x694820 */ if (fZ) goto L_00694820;
L_00694818:; BB(0x00694818);
    /* 00694818: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694819: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069481b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069481c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069481f: ret  */ FN_RET(0x00694800); r_esp += 4; return;
L_00694820:; BB(0x00694820);
    /* 00694820: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00694823: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694824: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694826: call 0x6945d0 */ r_esp -= 4; W32(r_esp, 0x69482bu); f_006945d0();
    /* 0069482b: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 0069482e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00694832: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694833: call 0x6945d0 */ r_esp -= 4; W32(r_esp, 0x694838u); f_006945d0();
    /* 00694838: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0069483a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069483c: imul edx, dword ptr [esp + 0x34] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x34u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00694841: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00694845: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694846: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69484bu); f_0068738e();
    /* 0069484b: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0069484f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00694852: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694855: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00694856: je 0x6948f8 */ if (fZ) goto L_006948f8;
L_0069485c:; BB(0x0069485c);
    /* 0069485c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069485d: jne 0x6949a9 */ if (!fZ) goto L_006949a9;
L_00694863:; BB(0x00694863);
    /* 00694863: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00694866: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00694868: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069486a: jle 0x6949a9 */ if ((fZ||fS!=fO)) goto L_006949a9;
L_00694870:; BB(0x00694870);
    /* 00694870: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00694874:; BB(0x00694874);
    /* 00694874: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694876: je 0x694881 */ if (fZ) goto L_00694881;
L_00694878:; BB(0x00694878);
    /* 00694878: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069487b: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069487f: je 0x6948e4 */ if (fZ) goto L_006948e4;
L_00694881:; BB(0x00694881);
    /* 00694881: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00694883: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00694885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694887: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0069488f: jle 0x6948e3 */ if ((fZ||fS!=fO)) goto L_006948e3;
L_00694891:; BB(0x00694891);
    /* 00694891: mov edi, eax */ r_edi = r_eax;
    /* 00694893: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 00694896: imul edi, edx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00694899: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069489b: fild dword ptr [ebx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_edi*4)));
    /* 0069489e: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 006948a1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006948a3: fabs  */ ST(0) = fabsl(ST(0));
    /* 006948a5: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 006948a9: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 006948ad: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 006948b1: je 0x6948b7 */ if (fZ) goto L_006948b7;
L_006948b3:; BB(0x006948b3);
    /* 006948b3: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
L_006948b7:; BB(0x006948b7);
    /* 006948b7: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 006948bb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006948bd: je 0x6948d0 */ if (fZ) goto L_006948d0;
L_006948bf:; BB(0x006948bf);
    /* 006948bf: mov ebx, dword ptr [edi + ebp*4] */ r_ebx = R32((u32)(r_edi+r_ebp*4));
    /* 006948c2: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006948c5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006948c9: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006948cb: fstp dword ptr [eax + ebx*4] */ W_F32((u32)(r_eax+r_ebx*4), ST(0)); FPOP();
    /* 006948ce: jmp 0x6948dc */ goto L_006948dc;
L_006948d0:; BB(0x006948d0);
    /* 006948d0: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006948d3: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 006948d7: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006948d9: fstp dword ptr [ebx + eax*4] */ W_F32((u32)(r_ebx+r_eax*4), ST(0)); FPOP();
L_006948dc:; BB(0x006948dc);
    /* 006948dc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006948de: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006948df: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006948e1: jl 0x694891 */ if ((fS!=fO)) goto L_00694891;
L_006948e3:; BB(0x006948e3);
    /* 006948e3: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006948e4:; BB(0x006948e4);
    /* 006948e4: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006948e7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006948e8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006948ea: jl 0x694874 */ if ((fS!=fO)) goto L_00694874;
L_006948ec:; BB(0x006948ec);
    /* 006948ec: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006948f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006948f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006948f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006948f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006948f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006948f7: ret  */ FN_RET(0x00694800); r_esp += 4; return;
L_006948f8:; BB(0x006948f8);
    /* 006948f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006948f9: call 0x694790 */ r_esp -= 4; W32(r_esp, 0x6948feu); f_00694790();
    /* 006948fe: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00694901: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00694905: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694908: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069490a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069490c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00694910: jle 0x6949a9 */ if ((fZ||fS!=fO)) goto L_006949a9;
L_00694916:; BB(0x00694916);
    /* 00694916: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069491a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069491c: je 0x694927 */ if (fZ) goto L_00694927;
L_0069491e:; BB(0x0069491e);
    /* 0069491e: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00694921: cmp dword ptr [ecx + eax*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694925: je 0x694999 */ if (fZ) goto L_00694999;
L_00694927:; BB(0x00694927);
    /* 00694927: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00694929: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069492b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069492d: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00694935: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0069493a: jle 0x694998 */ if ((fZ||fS!=fO)) goto L_00694998;
L_0069493c:; BB(0x0069493c);
    /* 0069493c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069493d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0069493d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069493d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069493f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00694940: idiv dword ptr [esp + 0x1c] */ { i32 d = (i32)R32((u32)(r_esp+0x1cu)); if (!d) UNSUP(0x00694940, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00694940, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00694944: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00694947: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 0069494a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0069494d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069494f: fabs  */ ST(0) = fabsl(ST(0));
    /* 00694951: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00694955: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 00694959: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0069495d: je 0x694963 */ if (fZ) goto L_00694963;
L_0069495f:; BB(0x0069495f);
    /* 0069495f: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
L_00694963:; BB(0x00694963);
    /* 00694963: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00694967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694969: je 0x69497c */ if (fZ) goto L_0069497c;
L_0069496b:; BB(0x0069496b);
    /* 0069496b: mov edx, dword ptr [eax + ebp*4] */ r_edx = R32((u32)(r_eax+r_ebp*4));
    /* 0069496e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00694972: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00694975: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694977: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0069497a: jmp 0x694988 */ goto L_00694988;
L_0069497c:; BB(0x0069497c);
    /* 0069497c: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069497f: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00694983: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694985: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
L_00694988:; BB(0x00694988);
    /* 00694988: imul ebx, dword ptr [esp + 0x1c] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_esp+0x1cu)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069498d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069498f: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00694993: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00694994: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694996: jl 0x69493c */ if ((fS!=fO)) goto L_0069493c;
L_00694998:; BB(0x00694998);
    /* 00694998: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00694999:; BB(0x00694999);
    /* 00694999: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0069499c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069499d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069499f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006949a3: jl 0x694916 */ if ((fS!=fO)) goto L_00694916;
L_006949a9:; BB(0x006949a9);
    /* 006949a9: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006949ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006949ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006949af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006949b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006949b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006949b4: ret  */ FN_RET(0x00694800); r_esp += 4; return;
}

void f_006949c0(void) /* sub_6949C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006949c0);
    /* 006949c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006949c1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006949c5: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006949c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006949ca: je 0x694a7f */ if (fZ) goto L_00694a7f;
L_006949d0:; BB(0x006949d0);
    /* 006949d0: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006949d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006949d5: je 0x6949e0 */ if (fZ) goto L_006949e0;
L_006949d7:; BB(0x006949d7);
    /* 006949d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006949d8: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6949ddu); f_00687300();
    /* 006949dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006949e0:; BB(0x006949e0);
    /* 006949e0: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006949e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006949e5: je 0x6949f0 */ if (fZ) goto L_006949f0;
L_006949e7:; BB(0x006949e7);
    /* 006949e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006949e8: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6949edu); f_00687300();
    /* 006949ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006949f0:; BB(0x006949f0);
    /* 006949f0: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006949f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006949f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006949f6: je 0x694a3c */ if (fZ) goto L_00694a3c;
L_006949f8:; BB(0x006949f8);
    /* 006949f8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006949fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006949fb: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a00u); f_00687300();
    /* 00694a00: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00694a03: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00694a06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694a07: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a0cu); f_00687300();
    /* 00694a0c: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00694a0f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00694a12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694a13: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a18u); f_00687300();
    /* 00694a18: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 00694a1b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00694a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694a1f: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a24u); f_00687300();
    /* 00694a24: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 00694a27: mov ecx, 6 */ r_ecx = 0x6u;
    /* 00694a2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694a2e: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00694a30: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00694a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694a34: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a39u); f_00687300();
    /* 00694a39: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694a3c:; BB(0x00694a3c);
    /* 00694a3c: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00694a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694a41: je 0x694a73 */ if (fZ) goto L_00694a73;
L_00694a43:; BB(0x00694a43);
    /* 00694a43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00694a45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694a46: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a4bu); f_00687300();
    /* 00694a4b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00694a4e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00694a51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694a52: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a57u); f_00687300();
    /* 00694a57: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00694a5a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00694a5c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00694a5e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00694a61: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00694a64: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00694a67: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00694a6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694a6b: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694a70u); f_00687300();
    /* 00694a70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694a73:; BB(0x00694a73);
    /* 00694a73: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00694a78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694a7a: mov edi, esi */ r_edi = r_esi;
    /* 00694a7c: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00694a7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00694a7f:; BB(0x00694a7f);
    /* 00694a7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694a80: ret  */ FN_RET(0x006949c0); r_esp += 4; return;
}

void f_00694a90(void) /* sub_694A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694a90);
    /* 00694a90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694a91: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00694a95: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00694a98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694a9a: je 0x694aab */ if (fZ) goto L_00694aab;
L_00694a9c:; BB(0x00694a9c);
    /* 00694a9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694a9d: call 0x6949c0 */ r_esp -= 4; W32(r_esp, 0x694aa2u); f_006949c0();
    /* 00694aa2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694aa3: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694aa8u); f_00687300();
    /* 00694aa8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694aab:; BB(0x00694aab);
    /* 00694aab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694aac: ret  */ FN_RET(0x00694a90); r_esp += 4; return;
}

void f_00694ab0(void) /* sub_694AB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694ab0);
    /* 00694ab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694ab1: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00694ab5: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00694ab8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694aba: je 0x694ac5 */ if (fZ) goto L_00694ac5;
L_00694abc:; BB(0x00694abc);
    /* 00694abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694abd: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694ac2u); f_00687300();
    /* 00694ac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694ac5:; BB(0x00694ac5);
    /* 00694ac5: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00694ac8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694aca: je 0x694ad5 */ if (fZ) goto L_00694ad5;
L_00694acc:; BB(0x00694acc);
    /* 00694acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694acd: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694ad2u); f_00687300();
    /* 00694ad2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694ad5:; BB(0x00694ad5);
    /* 00694ad5: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00694ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694ada: je 0x694ae5 */ if (fZ) goto L_00694ae5;
L_00694adc:; BB(0x00694adc);
    /* 00694adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694add: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694ae2u); f_00687300();
    /* 00694ae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694ae5:; BB(0x00694ae5);
    /* 00694ae5: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00694ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694aea: je 0x694af5 */ if (fZ) goto L_00694af5;
L_00694aec:; BB(0x00694aec);
    /* 00694aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694aed: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694af2u); f_00687300();
    /* 00694af2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694af5:; BB(0x00694af5);
    /* 00694af5: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00694af8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694afa: je 0x694b05 */ if (fZ) goto L_00694b05;
L_00694afc:; BB(0x00694afc);
    /* 00694afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694afd: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694b02u); f_00687300();
    /* 00694b02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00694b05:; BB(0x00694b05);
    /* 00694b05: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 00694b0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694b0c: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00694b0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694b0f: ret  */ FN_RET(0x00694ab0); r_esp += 4; return;
}

void f_00694b10(void) /* sub_694B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694b10);
    /* 00694b10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694b11: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00694b15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694b16: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00694b1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694b1b: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 00694b20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694b22: mov edi, ebx */ r_edi = r_ebx;
    /* 00694b24: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00694b26: mov dword ptr [ebx + 0xc], esi */ W32((u32)(r_ebx+0xcu), r_esi);
    /* 00694b29: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00694b2c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00694b2f: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00694b32: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 00694b35: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00694b37: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00694b39: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00694b3c: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00694b3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00694b41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694b42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694b43: call 0x694620 */ r_esp -= 4; W32(r_esp, 0x694b48u); f_00694620();
    /* 00694b48: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00694b4b: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00694b4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00694b50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694b51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694b52: call 0x694800 */ r_esp -= 4; W32(r_esp, 0x694b57u); f_00694800();
    /* 00694b57: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694b5a: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00694b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694b5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694b60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694b61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694b62: ret  */ FN_RET(0x00694b10); r_esp += 4; return;
}

void f_00694b70(void) /* sub_694B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694b70);
    /* 00694b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00694b73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694b76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694b77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694b78: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00694b7b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694b7c: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 00694b81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694b83: mov edi, esi */ r_edi = r_esi;
    /* 00694b85: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00694b87: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00694b89: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00694b8c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00694b8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694b91: jle 0x694ba4 */ if ((fZ||fS!=fO)) goto L_00694ba4;
L_00694b93:; BB(0x00694b93);
    /* 00694b93: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00694b96: mov edx, eax */ r_edx = r_eax;
L_00694b98:; BB(0x00694b98);
    /* 00694b98: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694b9b: jle 0x694b9e */ if ((fZ||fS!=fO)) goto L_00694b9e;
L_00694b9d:; BB(0x00694b9d);
    /* 00694b9d: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00694b9e:; BB(0x00694b9e);
    /* 00694b9e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694ba1: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00694ba2: jne 0x694b98 */ if (!fZ) goto L_00694b98;
L_00694ba4:; BB(0x00694ba4);
    /* 00694ba4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00694ba7: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 00694baa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00694bac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694bad: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00694baf: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00694bb2: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00694bb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694bb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694bb7: call 0x694620 */ r_esp -= 4; W32(r_esp, 0x694bbcu); f_00694620();
    /* 00694bbc: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00694bbf: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 00694bc6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00694bc9: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694bcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694bcf: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00694bd1: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x694bd6u); f_00687340();
    /* 00694bd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00694bd9: mov eax, esp */ r_eax = r_esp;
    /* 00694bdb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694bdd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00694be0: jne 0x694bf8 */ if (!fZ) goto L_00694bf8;
L_00694be2:; BB(0x00694be2);
    /* 00694be2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694be3: call 0x694ab0 */ r_esp -= 4; W32(r_esp, 0x694be8u); f_00694ab0();
    /* 00694be8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694beb: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694bee: lea esp, [ebp - 0x20] */ r_esp = (u32)(r_ebp+0xffffffe0u);
    /* 00694bf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694bf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694bf3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694bf4: mov esp, ebp */ r_esp = r_ebp;
    /* 00694bf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694bf7: ret  */ FN_RET(0x00694b70); r_esp += 4; return;
L_00694bf8:; BB(0x00694bf8);
    /* 00694bf8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694bfa: jle 0x694c32 */ if ((fZ||fS!=fO)) goto L_00694c32;
L_00694bfc:; BB(0x00694bfc);
    /* 00694bfc: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694bfe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00694c01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00694c04: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_00694c07:; BB(0x00694c07);
    /* 00694c07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00694c0a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00694c0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694c0d: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x694c12u); f_00694f20();
    /* 00694c12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00694c15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00694c18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694c1b: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00694c1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694c20: mov dword ptr [edx + ecx], ecx */ W32((u32)(r_edx+r_ecx), r_ecx);
    /* 00694c23: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694c26: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00694c27: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00694c2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00694c2d: jne 0x694c07 */ if (!fZ) goto L_00694c07;
L_00694c2f:; BB(0x00694c2f);
    /* 00694c2f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
L_00694c32:; BB(0x00694c32);
    /* 00694c32: push 0x694f80 */ { u32 v = 0x694f80u; r_esp -= 4; W32(r_esp, v); }
    /* 00694c37: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00694c39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694c3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694c3b: call 0x686ed8 */ r_esp -= 4; W32(r_esp, 0x694c40u); f_00686ed8();
    /* 00694c40: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00694c43: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694c46: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694c49: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00694c4b: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x694c50u); f_00687340();
    /* 00694c50: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00694c53: mov dword ptr [ebp - 4], esp */ W32((u32)(r_ebp+0xfffffffcu), r_esp);
    /* 00694c56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694c57: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x694c5cu); f_006872fa();
    /* 00694c5c: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00694c5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694c62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694c64: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694c66: jle 0x694cb1 */ if ((fZ||fS!=fO)) goto L_00694cb1;
L_00694c68:; BB(0x00694c68);
    /* 00694c68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00694c6b: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 00694c6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00694c71: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00694c73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694c76: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00694c79: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00694c7c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694c7d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694c7f: jl 0x694c68 */ if ((fS!=fO)) goto L_00694c68;
L_00694c81:; BB(0x00694c81);
    /* 00694c81: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694c83: jle 0x694cb1 */ if ((fZ||fS!=fO)) goto L_00694cb1;
L_00694c85:; BB(0x00694c85);
    /* 00694c85: mov eax, ecx */ r_eax = r_ecx;
    /* 00694c87: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00694c8a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00694c8c: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 00694c8f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00694c92: jmp 0x694c97 */ goto L_00694c97;
L_00694c94:; BB(0x00694c94);
    /* 00694c94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
L_00694c97:; BB(0x00694c97);
    /* 00694c97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00694c99: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00694c9c: mov ecx, dword ptr [ecx + eax] */ r_ecx = R32((u32)(r_ecx+r_eax));
    /* 00694c9f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694ca2: mov dword ptr [edi + edx*4], ecx */ W32((u32)(r_edi+r_edx*4), r_ecx);
    /* 00694ca5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00694ca8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00694ca9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00694cac: jne 0x694c94 */ if (!fZ) goto L_00694c94;
L_00694cae:; BB(0x00694cae);
    /* 00694cae: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_00694cb1:; BB(0x00694cb1);
    /* 00694cb1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00694cb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00694cb5: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x694cbau); f_00687300();
    /* 00694cba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694cbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694cbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694cbf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694cc0: call 0x694800 */ r_esp -= 4; W32(r_esp, 0x694cc5u); f_00694800();
    /* 00694cc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00694cc8: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00694ccb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694ccc: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x694cd1u); f_006872fa();
    /* 00694cd1: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00694cd4: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00694cd7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694cda: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00694cdc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694cde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694ce0: jle 0x694d00 */ if ((fZ||fS!=fO)) goto L_00694d00;
L_00694ce2:; BB(0x00694ce2);
    /* 00694ce2: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00694ce5: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694ce9: jle 0x694cf8 */ if ((fZ||fS!=fO)) goto L_00694cf8;
L_00694ceb:; BB(0x00694ceb);
    /* 00694ceb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694cee: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 00694cf1: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00694cf4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694cf5: mov dword ptr [ebx + edx*4], eax */ W32((u32)(r_ebx+r_edx*4), r_eax);
L_00694cf8:; BB(0x00694cf8);
    /* 00694cf8: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00694cfb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694cfc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694cfe: jl 0x694ce2 */ if ((fS!=fO)) goto L_00694ce2;
L_00694d00:; BB(0x00694d00);
    /* 00694d00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694d01: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x694d06u); f_006872fa();
    /* 00694d06: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00694d09: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00694d0c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00694d0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694d11: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694d13: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00694d16: jle 0x694d45 */ if ((fZ||fS!=fO)) goto L_00694d45;
L_00694d18:; BB(0x00694d18);
    /* 00694d18: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00694d1b: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00694d1e: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 00694d21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694d23: jle 0x694d3d */ if ((fZ||fS!=fO)) goto L_00694d3d;
L_00694d25:; BB(0x00694d25);
    /* 00694d25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694d28: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00694d2b: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00694d2d: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 00694d30: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 00694d33: mov byte ptr [edx + ebx], al */ W8((u32)(r_edx+r_ebx), (u8)r_eax);
    /* 00694d36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00694d39: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694d3a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00694d3d:; BB(0x00694d3d);
    /* 00694d3d: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00694d40: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694d41: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694d43: jl 0x694d18 */ if ((fS!=fO)) goto L_00694d18;
L_00694d45:; BB(0x00694d45);
    /* 00694d45: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00694d48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694d49: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x694d4eu); f_00699aa0();
    /* 00694d4e: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694d51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694d54: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694d57: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00694d5a: jge 0x694d63 */ if ((fS==fO)) goto L_00694d63;
L_00694d5c:; BB(0x00694d5c);
    /* 00694d5c: mov dword ptr [esi + 0x24], 5 */ W32((u32)(r_esi+0x24u), 0x5u);
L_00694d63:; BB(0x00694d63);
    /* 00694d63: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00694d66: mov eax, 8 */ r_eax = 0x8u;
    /* 00694d6b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694d6d: jle 0x694d72 */ if ((fZ||fS!=fO)) goto L_00694d72;
L_00694d6f:; BB(0x00694d6f);
    /* 00694d6f: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
L_00694d72:; BB(0x00694d72);
    /* 00694d72: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00694d75: mov eax, 1 */ r_eax = 0x1u;
    /* 00694d7a: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00694d7c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00694d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00694d7f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00694d82: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x694d87u); f_0068738e();
    /* 00694d87: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00694d8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00694d8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694d90: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00694d92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00694d94: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 00694d97: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 00694d9a: jle 0x694e22 */ if ((fZ||fS!=fO)) goto L_00694e22;
L_00694da0:; BB(0x00694da0);
    /* 00694da0: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
L_00694da3:; BB(0x00694da3);
    /* 00694da3: movsx ecx, byte ptr [eax + ebx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx));
    /* 00694da7: cmp dword ptr [esi + 0x28], ecx */ {  u32 a = R32((u32)(r_esi+0x28u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694daa: jge 0x694daf */ if ((fS==fO)) goto L_00694daf;
L_00694dac:; BB(0x00694dac);
    /* 00694dac: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
L_00694daf:; BB(0x00694daf);
    /* 00694daf: movsx edx, byte ptr [eax + ebx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx));
    /* 00694db3: cmp edx, dword ptr [esi + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694db6: jg 0x694e17 */ if ((!fZ&&fS==fO)) goto L_00694e17;
L_00694db8:; BB(0x00694db8);
    /* 00694db8: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00694dbb: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 00694dbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00694dbf: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x694dc4u); f_00694f20();
    /* 00694dc4: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00694dc7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00694dca: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00694dcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694dd0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00694dd2: movsx edx, byte ptr [eax + ebx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx));
    /* 00694dd6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694dd8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00694ddd: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00694ddf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00694de1: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00694de4: jle 0x694e17 */ if ((fZ||fS!=fO)) goto L_00694e17;
L_00694de6:; BB(0x00694de6);
    /* 00694de6: mov eax, edi */ r_eax = r_edi;
    /* 00694de8: mov ecx, edx */ r_ecx = r_edx;
    /* 00694dea: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00694dec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00694def: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00694df2: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00694df4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00694df5: mov ecx, eax */ r_ecx = r_eax;
    /* 00694df7: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 00694dfa: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 00694dfd: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00694e00: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00694e03: movsx edx, byte ptr [eax + ebx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx));
    /* 00694e07: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694e09: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00694e0e: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00694e10: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694e12: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00694e15: jl 0x694de6 */ if ((fS!=fO)) goto L_00694de6;
L_00694e17:; BB(0x00694e17);
    /* 00694e17: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00694e1a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00694e1b: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694e1d: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 00694e20: jl 0x694da3 */ if ((fS!=fO)) goto L_00694da3;
L_00694e22:; BB(0x00694e22);
    /* 00694e22: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 00694e25: mov ecx, 0x1f */ r_ecx = 0x1fu;
    /* 00694e2a: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694e2c: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00694e31: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00694e33: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00694e35: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 00694e38: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 00694e3b: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00694e3e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00694e41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00694e44: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694e46: jle 0x694f07 */ if ((fZ||fS!=fO)) goto L_00694f07;
L_00694e4c:; BB(0x00694e4c);
    /* 00694e4c: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 00694e4f: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 00694e54: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00694e56: mov ebx, edi */ r_ebx = r_edi;
    /* 00694e58: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00694e5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694e5b: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x694e60u); f_00694f20();
    /* 00694e60: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00694e63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694e66: cmp dword ptr [ecx + eax*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694e6a: jne 0x694ef8 */ if (!fZ) goto L_00694ef8;
L_00694e70:; BB(0x00694e70);
    /* 00694e70: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694e73: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00694e76: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00694e79: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694e7b: jge 0x694e93 */ if ((fS==fO)) goto L_00694e93;
L_00694e7d:; BB(0x00694e7d);
    /* 00694e7d: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00694e80: lea ecx, [ecx + eax*4] */ r_ecx = (u32)(r_ecx+r_eax*4);
L_00694e83:; BB(0x00694e83);
    /* 00694e83: cmp dword ptr [ecx], ebx */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00694e85: ja 0x694e90 */ if ((!fC&&!fZ)) goto L_00694e90;
L_00694e87:; BB(0x00694e87);
    /* 00694e87: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00694e88: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694e89: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694e8c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694e8e: jl 0x694e83 */ if ((fS!=fO)) goto L_00694e83;
L_00694e90:; BB(0x00694e90);
    /* 00694e90: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_00694e93:; BB(0x00694e93);
    /* 00694e93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00694e96: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694e98: jge 0x694eb7 */ if ((fS==fO)) goto L_00694eb7;
L_00694e9a:; BB(0x00694e9a);
    /* 00694e9a: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00694e9d: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
L_00694ea0:; BB(0x00694ea0);
    /* 00694ea0: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00694ea2: and edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00694ea5: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00694ea7: jb 0x694eb1 */ if (fC) goto L_00694eb1;
L_00694ea9:; BB(0x00694ea9);
    /* 00694ea9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694eaa: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694ead: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694eaf: jl 0x694ea0 */ if ((fS!=fO)) goto L_00694ea0;
L_00694eb1:; BB(0x00694eb1);
    /* 00694eb1: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694eb4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00694eb7:; BB(0x00694eb7);
    /* 00694eb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00694eba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00694ebd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00694ec0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694ec2: cmp ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00694ec8: jbe 0x694ecf */ if ((fC||fZ)) goto L_00694ecf;
L_00694eca:; BB(0x00694eca);
    /* 00694eca: mov edi, 0x7fff */ r_edi = 0x7fffu;
L_00694ecf:; BB(0x00694ecf);
    /* 00694ecf: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00694ed4: jbe 0x694edb */ if ((fC||fZ)) goto L_00694edb;
L_00694ed6:; BB(0x00694ed6);
    /* 00694ed6: mov eax, 0x7fff */ r_eax = 0x7fffu;
L_00694edb:; BB(0x00694edb);
    /* 00694edb: or edi, 0xffff0000 */ {  u32 a = r_edi; u32 b = 0xffff0000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694ee1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694ee2: shl edi, 0xf */ { u32 c = (15u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00694ee5: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00694ee7: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x694eecu); f_00694f20();
    /* 00694eec: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00694eef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694ef2: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 00694ef5: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_00694ef8:; BB(0x00694ef8);
    /* 00694ef8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00694efb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00694efc: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694efe: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00694f01: jl 0x694e4c */ if ((fS!=fO)) goto L_00694e4c;
L_00694f07:; BB(0x00694f07);
    /* 00694f07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f09: lea esp, [ebp - 0x20] */ r_esp = (u32)(r_ebp+0xffffffe0u);
    /* 00694f0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694f0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694f0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694f0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00694f11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694f12: ret  */ FN_RET(0x00694b70); r_esp += 4; return;
}

void f_00694f20(void) /* sub_694F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694f20);
    /* 00694f20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00694f24: mov ecx, eax */ r_ecx = r_eax;
    /* 00694f26: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00694f29: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00694f2c: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f2e: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00694f33: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f35: mov ecx, eax */ r_ecx = r_eax;
    /* 00694f37: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00694f3a: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00694f3d: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f3f: and eax, 0xff00ff */ {  u32 a = r_eax; u32 b = 0xff00ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00694f44: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f46: mov ecx, eax */ r_ecx = r_eax;
    /* 00694f48: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00694f4b: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00694f4e: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f50: and eax, 0xf0f0f0f */ {  u32 a = r_eax; u32 b = 0xf0f0f0fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00694f55: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f57: lea ecx, [eax*4] */ r_ecx = (u32)(r_eax*4);
    /* 00694f5e: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00694f61: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f63: and eax, 0x33333333 */ {  u32 a = r_eax; u32 b = 0x33333333u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00694f68: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f6a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00694f6d: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00694f6f: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f71: and eax, 0x55555555 */ {  u32 a = r_eax; u32 b = 0x55555555u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00694f76: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694f78: ret  */ FN_RET(0x00694f20); r_esp += 4; return;
}

void f_00694f80(void) /* sub_694F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694f80);
    /* 00694f80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00694f84: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00694f88: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00694f8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00694f8c: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00694f8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00694f90: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00694f92: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00694f94: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694f96: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00694f98: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00694f9a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00694f9c: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694f9e: ret  */ FN_RET(0x00694f80); r_esp += 4; return;
}

void f_00694fa0(void) /* sub_694FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00694fa0);
    /* 00694fa0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694fa1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00694fa5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00694fa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00694fa7: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00694fab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00694fac: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00694fb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00694fb3: mov edi, esi */ r_edi = r_esi;
    /* 00694fb5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00694fb7: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00694fb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694fba: mov dword ptr [esi + 0x30], 1 */ W32((u32)(r_esi+0x30u), 0x1u);
    /* 00694fc1: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x694fc6u); f_0069d470();
    /* 00694fc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694fc9: cmp eax, 0x564342 */ {  u32 a = r_eax; u32 b = 0x564342u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694fce: jne 0x6951c1 */ if (!fZ) goto L_006951c1;
L_00694fd4:; BB(0x00694fd4);
    /* 00694fd4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00694fd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694fd7: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x694fdcu); f_0069d470();
    /* 00694fdc: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00694fde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694fdf: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00694fe1: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x694fe6u); f_0069d470();
    /* 00694fe6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694fe9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00694fec: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00694fef: je 0x6951c1 */ if (fZ) goto L_006951c1;
L_00694ff5:; BB(0x00694ff5);
    /* 00694ff5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00694ff7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00694ff8: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x694ffdu); f_0069d470();
    /* 00694ffd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695000: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00695003: je 0x695079 */ if (fZ) goto L_00695079;
L_00695005:; BB(0x00695005);
    /* 00695005: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00695006: je 0x695010 */ if (fZ) goto L_00695010;
L_00695008:; BB(0x00695008);
    /* 00695008: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695009: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069500a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069500b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069500e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069500f: ret  */ FN_RET(0x00694fa0); r_esp += 4; return;
L_00695010:; BB(0x00695010);
    /* 00695010: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00695012: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695013: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x695018u); f_0069d470();
    /* 00695018: mov ebp, eax */ r_ebp = r_eax;
    /* 0069501a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069501d: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00695020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695021: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00695022: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x695027u); f_006872fa();
    /* 00695027: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0069502a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069502d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695030: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00695032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695034: jle 0x695107 */ if ((fZ||fS!=fO)) goto L_00695107;
L_0069503a:; BB(0x0069503a);
    /* 0069503a: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069503c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069503d: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x695042u); f_00699aa0();
    /* 00695042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695043: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695044: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x695049u); f_0069d470();
    /* 00695049: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069504c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069504f: je 0x6951c1 */ if (fZ) goto L_006951c1;
L_00695055:; BB(0x00695055);
    /* 00695055: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00695057: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695059: jle 0x69506c */ if ((fZ||fS!=fO)) goto L_0069506c;
L_0069505b:; BB(0x0069505b);
    /* 0069505b: cmp edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069505e: jge 0x69506c */ if ((fS==fO)) goto L_0069506c;
L_00695060:; BB(0x00695060);
    /* 00695060: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00695063: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00695064: mov dword ptr [edx + edi*4], ebp */ W32((u32)(r_edx+r_edi*4), r_ebp);
    /* 00695067: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695068: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069506a: jl 0x69505b */ if ((fS!=fO)) goto L_0069505b;
L_0069506c:; BB(0x0069506c);
    /* 0069506c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069506f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00695070: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695072: jl 0x69503a */ if ((fS!=fO)) goto L_0069503a;
L_00695074:; BB(0x00695074);
    /* 00695074: jmp 0x695107 */ goto L_00695107;
L_00695079:; BB(0x00695079);
    /* 00695079: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069507c: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069507f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695080: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x695085u); f_006872fa();
    /* 00695085: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00695087: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695088: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0069508b: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x695090u); f_0069d470();
    /* 00695090: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695093: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00695095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695097: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069509a: je 0x6950e0 */ if (fZ) goto L_006950e0;
L_0069509c:; BB(0x0069509c);
    /* 0069509c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069509e: jle 0x695107 */ if ((fZ||fS!=fO)) goto L_00695107;
L_006950a0:; BB(0x006950a0);
    /* 006950a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006950a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006950a3: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6950a8u); f_0069d470();
    /* 006950a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006950ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006950ad: je 0x6950cc */ if (fZ) goto L_006950cc;
L_006950af:; BB(0x006950af);
    /* 006950af: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006950b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006950b2: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6950b7u); f_0069d470();
    /* 006950b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006950ba: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006950bd: je 0x6951c1 */ if (fZ) goto L_006951c1;
L_006950c3:; BB(0x006950c3);
    /* 006950c3: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006950c6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006950c7: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 006950ca: jmp 0x6950d6 */ goto L_006950d6;
L_006950cc:; BB(0x006950cc);
    /* 006950cc: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006950cf: mov dword ptr [edx + edi*4], 0 */ W32((u32)(r_edx+r_edi*4), 0x0u);
L_006950d6:; BB(0x006950d6);
    /* 006950d6: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006950d9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006950da: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006950dc: jl 0x6950a0 */ if ((fS!=fO)) goto L_006950a0;
L_006950de:; BB(0x006950de);
    /* 006950de: jmp 0x695107 */ goto L_00695107;
L_006950e0:; BB(0x006950e0);
    /* 006950e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006950e2: jle 0x695107 */ if ((fZ||fS!=fO)) goto L_00695107;
L_006950e4:; BB(0x006950e4);
    /* 006950e4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006950e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006950e7: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6950ecu); f_0069d470();
    /* 006950ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006950ef: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006950f2: je 0x6951c1 */ if (fZ) goto L_006951c1;
L_006950f8:; BB(0x006950f8);
    /* 006950f8: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006950fb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006950fc: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 006950ff: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00695102: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695103: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695105: jl 0x6950e4 */ if ((fS!=fO)) goto L_006950e4;
L_00695107:; BB(0x00695107);
    /* 00695107: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00695109: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069510a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69510fu); f_0069d470();
    /* 0069510f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695112: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00695115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695117: je 0x6951d2 */ if (fZ) goto L_006951d2;
L_0069511d:; BB(0x0069511d);
    /* 0069511d: jle 0x6951c1 */ if ((fZ||fS!=fO)) goto L_006951c1;
L_00695123:; BB(0x00695123);
    /* 00695123: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695126: jg 0x6951c1 */ if ((!fZ&&fS==fO)) goto L_006951c1;
L_0069512c:; BB(0x0069512c);
    /* 0069512c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0069512e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069512f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x695134u); f_0069d470();
    /* 00695134: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00695136: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695137: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0069513a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69513fu); f_0069d470();
    /* 0069513f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00695141: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695142: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00695145: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69514au); f_0069d470();
    /* 0069514a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069514b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069514d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069514e: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00695151: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x695156u); f_0069d470();
    /* 00695156: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00695159: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0069515c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069515f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00695161: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00695162: je 0x69516f */ if (fZ) goto L_0069516f;
L_00695164:; BB(0x00695164);
    /* 00695164: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00695165: jne 0x69517a */ if (!fZ) goto L_0069517a;
L_00695167:; BB(0x00695167);
    /* 00695167: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00695169: imul edi, dword ptr [esi + 4] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esi+0x4u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069516d: jmp 0x69517a */ goto L_0069517a;
L_0069516f:; BB(0x0069516f);
    /* 0069516f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695170: call 0x694790 */ r_esp -= 4; W32(r_esp, 0x695175u); f_00694790();
    /* 00695175: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695178: mov edi, eax */ r_edi = r_eax;
L_0069517a:; BB(0x0069517a);
    /* 0069517a: lea eax, [edi*4] */ r_eax = (u32)(r_edi*4);
    /* 00695181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695182: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00695186: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x69518bu); f_006872fa();
    /* 0069518b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069518e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00695190: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695192: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00695195: jle 0x6951b1 */ if ((fZ||fS!=fO)) goto L_006951b1;
L_00695197:; BB(0x00695197);
    /* 00695197: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0069519a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069519b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069519c: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6951a1u); f_0069d470();
    /* 006951a1: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 006951a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006951a7: mov dword ptr [ecx + ebp*4], eax */ W32((u32)(r_ecx+r_ebp*4), r_eax);
    /* 006951aa: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006951ab: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006951ad: jl 0x695197 */ if ((fS!=fO)) goto L_00695197;
L_006951af:; BB(0x006951af);
    /* 006951af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_006951b1:; BB(0x006951b1);
    /* 006951b1: je 0x6951d2 */ if (fZ) goto L_006951d2;
L_006951b3:; BB(0x006951b3);
    /* 006951b3: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 006951b6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006951ba: cmp dword ptr [eax + edx - 4], -1 */ {  u32 a = R32((u32)(r_eax+r_edx+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006951bf: jne 0x6951d2 */ if (!fZ) goto L_006951d2;
L_006951c1:; BB(0x006951c1);
    /* 006951c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006951c2: call 0x6949c0 */ r_esp -= 4; W32(r_esp, 0x6951c7u); f_006949c0();
    /* 006951c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006951ca: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006951cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006951ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006951cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006951d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006951d1: ret  */ FN_RET(0x00694fa0); r_esp += 4; return;
L_006951d2:; BB(0x006951d2);
    /* 006951d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006951d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006951d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006951d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006951d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006951d8: ret  */ FN_RET(0x00694fa0); r_esp += 4; return;
}

