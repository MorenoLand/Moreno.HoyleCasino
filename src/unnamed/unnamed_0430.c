#include "protos.h"

void f_00430000(void) /* sub_430000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00430000);
    /* 00430000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00430001: mov ebp, esp */ r_ebp = r_esp;
    /* 00430003: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00430006: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00430009: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043000f: call 0x434af0 */ r_esp -= 4; W32(r_esp, 0x430014u); f_00434af0();
    /* 00430014: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00430017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430019: jne 0x43005a */ if (!fZ) goto L_0043005a;
L_0043001b:; BB(0x0043001b);
    /* 0043001b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043001d: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00430020: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430026: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043002d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00430030: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00430035: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00430038: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043003e: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00430045: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00430048: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043004b: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043004e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043004f: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00430055: call 0x42a4a0 */ r_esp -= 4; W32(r_esp, 0x43005au); f_0042a4a0();
L_0043005a:; BB(0x0043005a);
    /* 0043005a: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00430060: call 0x42a270 */ r_esp -= 4; W32(r_esp, 0x430065u); f_0042a270();
    /* 00430065: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043006b: call 0x434af0 */ r_esp -= 4; W32(r_esp, 0x430070u); f_00434af0();
    /* 00430070: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00430073: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430075: je 0x4300c0 */ if (fZ) goto L_004300c0;
L_00430077:; BB(0x00430077);
    /* 00430077: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430079: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043007c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430082: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00430089: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043008c: mov eax, 1 */ r_eax = 0x1u;
    /* 00430091: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00430094: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043009a: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 004300a1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004300a4: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004300a9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004300ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004300af: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004300b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004300b5: mov dword ptr [edx + 0xac4], ecx */ W32((u32)(r_edx+0xac4u), r_ecx);
    /* 004300bb: jmp 0x43021a */ goto L_0043021a;
L_004300c0:; BB(0x004300c0);
    /* 004300c0: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004300c6: call 0x437150 */ r_esp -= 4; W32(r_esp, 0x4300cbu); f_00437150();
    /* 004300cb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004300ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d0: je 0x430101 */ if (fZ) goto L_00430101;
L_004300d2:; BB(0x004300d2);
    /* 004300d2: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004300d8: mov edx, dword ptr [ecx + 0xadc] */ r_edx = R32((u32)(r_ecx+0xadcu));
    /* 004300de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004300e1: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004300e6: mov dword ptr [eax + 0xadc], edx */ W32((u32)(r_eax+0xadcu), r_edx);
    /* 004300ec: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004300f2: mov dword ptr [ecx + 0xaec], 4 */ W32((u32)(r_ecx+0xaecu), 0x4u);
    /* 004300fc: jmp 0x43021a */ goto L_0043021a;
L_00430101:; BB(0x00430101);
    /* 00430101: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430107: call 0x437250 */ r_esp -= 4; W32(r_esp, 0x43010cu); f_00437250();
    /* 0043010c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043010f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430111: je 0x430141 */ if (fZ) goto L_00430141;
L_00430113:; BB(0x00430113);
    /* 00430113: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00430118: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 0043011e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00430121: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430127: mov dword ptr [edx + 0xadc], ecx */ W32((u32)(r_edx+0xadcu), r_ecx);
    /* 0043012d: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00430132: mov dword ptr [eax + 0xaec], 3 */ W32((u32)(r_eax+0xaecu), 0x3u);
    /* 0043013c: jmp 0x43021a */ goto L_0043021a;
L_00430141:; BB(0x00430141);
    /* 00430141: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430147: call 0x437200 */ r_esp -= 4; W32(r_esp, 0x43014cu); f_00437200();
    /* 0043014c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043014f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430151: je 0x430198 */ if (fZ) goto L_00430198;
L_00430153:; BB(0x00430153);
    /* 00430153: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430159: mov eax, dword ptr [edx + 0xadc] */ r_eax = R32((u32)(r_edx+0xadcu));
    /* 0043015f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430162: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430168: mov dword ptr [ecx + 0xadc], eax */ W32((u32)(r_ecx+0xadcu), r_eax);
    /* 0043016e: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430174: mov dword ptr [edx + 0xaec], 1 */ W32((u32)(r_edx+0xaecu), 0x1u);
    /* 0043017e: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00430183: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00430186: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430189: mov dword ptr [ecx + 0xac4], 0 */ W32((u32)(r_ecx+0xac4u), 0x0u);
    /* 00430193: jmp 0x43021a */ goto L_0043021a;
L_00430198:; BB(0x00430198);
    /* 00430198: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043019e: call 0x437340 */ r_esp -= 4; W32(r_esp, 0x4301a3u); f_00437340();
    /* 004301a3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004301a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004301a8: je 0x43021a */ if (fZ) goto L_0043021a;
L_004301aa:; BB(0x004301aa);
    /* 004301aa: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004301af: mov dword ptr [eax + 0xaec], 2 */ W32((u32)(r_eax+0xaecu), 0x2u);
    /* 004301b9: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004301bf: mov dword ptr [ecx + 0xadc], 0 */ W32((u32)(r_ecx+0xadcu), 0x0u);
    /* 004301c9: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 004301cf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004301d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004301d5: mov byte ptr [eax + 0xac0], 0 */ W8((u32)(r_eax+0xac0u), 0x0u);
    /* 004301dc: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004301e2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004301e5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004301e8: mov dword ptr [edx + 0xac4], 0 */ W32((u32)(r_edx+0xac4u), 0x0u);
    /* 004301f2: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 004301f8: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4301fdu); f_005da7b0();
    /* 004301fd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00430200: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430202: je 0x43021a */ if (fZ) goto L_0043021a;
L_00430204:; BB(0x00430204);
    /* 00430204: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043020a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043020c: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430212: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 00430218: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43021au); call_ind(t); }
L_0043021a:; BB(0x0043021a);
    /* 0043021a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043021c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043021d: ret  */ FN_RET(0x00430000); r_esp += 4; return;
}

void f_00430220(void) /* sub_430220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00430220);
    /* 00430220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00430221: mov ebp, esp */ r_ebp = r_esp;
    /* 00430223: sub esp, 0x1bc */ {  u32 a = r_esp; u32 b = 0x1bcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00430229: mov dword ptr [ebp - 0x164], ecx */ W32((u32)(r_ebp+0xfffffe9cu), r_ecx);
    /* 0043022f: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 00430236: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 0043023d: mov dword ptr [ebp - 0x58], 0xffffffff */ W32((u32)(r_ebp+0xffffffa8u), 0xffffffffu);
    /* 00430244: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0043024b: mov dword ptr [ebp - 0x5c], 0xffffffff */ W32((u32)(r_ebp+0xffffffa4u), 0xffffffffu);
    /* 00430252: fldz  */ FPUSH(0.0);
    /* 00430254: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00430257: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0043025d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00430260: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00430265: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 0043026b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043026e: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 00430274: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00430276: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043027c: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00430282: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x430284u); call_ind(t); }
    /* 00430284: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00430287: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0043028a: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 0043028f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430291: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430297: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0043029d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43029fu); call_ind(t); }
    /* 0043029f: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004302a2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004302a5: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 004302ab: mov ecx, dword ptr [ecx + 0x168] */ r_ecx = R32((u32)(r_ecx+0x168u));
    /* 004302b1: call 0x5cd890 */ r_esp -= 4; W32(r_esp, 0x4302b6u); f_005cd890();
    /* 004302b6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004302b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004302bb: je 0x4302e0 */ if (fZ) goto L_004302e0;
L_004302bd:; BB(0x004302bd);
    /* 004302bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004302bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004302c1: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 004302c6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004302c9: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 004302cf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004302d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004302d4: mov ecx, eax */ r_ecx = r_eax;
    /* 004302d6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004302d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4302dbu); call_ind(t); }
    /* 004302db: jmp 0x431119 */ goto L_00431119;
L_004302e0:; BB(0x004302e0);
    /* 004302e0: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004302e6: mov edx, dword ptr [ecx + 0xae8] */ r_edx = R32((u32)(r_ecx+0xae8u));
    /* 004302ec: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004302ef: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004302f2: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 004302f8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004302fe: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 00430304: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
    /* 0043030a: cmp dword ptr [ebp - 0x168], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00430311: ja 0x430f3b */ if ((!fC&&!fZ)) goto L_00430f3b;
L_00430317:; BB(0x00430317);
    /* 00430317: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043031d: jmp dword ptr [eax*4 + 0x431120] */ { u32 t = R32((u32)(r_eax*4+0x431120u)); switch (t) { case 0x430324u: goto L_00430324; case 0x4307dfu: goto L_004307df; case 0x430477u: goto L_00430477; case 0x430baau: goto L_00430baa; case 0x430d17u: goto L_00430d17; case 0x430db5u: goto L_00430db5; case 0x430e02u: goto L_00430e02; case 0x430e4fu: goto L_00430e4f; case 0x430e9cu: goto L_00430e9c; default: UNSUP(0x0043031d, "jump table entry is not a known target"); } }
L_00430324:; BB(0x00430324);
    /* 00430324: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043032a: mov edx, dword ptr [ecx + 0xab4] */ r_edx = R32((u32)(r_ecx+0xab4u));
    /* 00430330: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00430333: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430337: jl 0x43034d */ if ((fS!=fO)) goto L_0043034d;
L_00430339:; BB(0x00430339);
    /* 00430339: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0043033e: mov ecx, dword ptr [eax + 0xab4] */ r_ecx = R32((u32)(r_eax+0xab4u));
    /* 00430344: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00430347: cmp dword ptr [ebp - 0x68], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043034b: jl 0x430352 */ if ((fS!=fO)) goto L_00430352;
L_0043034d:; BB(0x0043034d);
    /* 0043034d: jmp 0x430f3b */ goto L_00430f3b;
L_00430352:; BB(0x00430352);
    /* 00430352: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00430358: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0043035b: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430361: mov eax, dword ptr [edx + 0xab4] */ r_eax = R32((u32)(r_edx+0xab4u));
    /* 00430367: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0043036a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0043036d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043036e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430373u); f_005dcb00();
    /* 00430373: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430376: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00430379: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0043037c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430381u); f_0063aac0();
    /* 00430381: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430383: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00430386: cmp dword ptr [ebp - 0x70], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043038a: je 0x4303ab */ if (fZ) goto L_004303ab;
L_0043038c:; BB(0x0043038c);
    /* 0043038c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0043038f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430394u); f_0063aac0();
    /* 00430394: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430396: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00430399: cmp dword ptr [ebp - 0x74], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043039d: je 0x4303ab */ if (fZ) goto L_004303ab;
L_0043039f:; BB(0x0043039f);
    /* 0043039f: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 004303a9: jmp 0x4303b5 */ goto L_004303b5;
L_004303ab:; BB(0x004303ab);
    /* 004303ab: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
L_004303b5:; BB(0x004303b5);
    /* 004303b5: movzx ecx, byte ptr [ebp - 0x16c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe94u));
    /* 004303bc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004303be: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004303c0: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004303c3: add ecx, 0x7e1 */ {  u32 a = r_ecx; u32 b = 0x7e1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004303c9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004303cc: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 004303d2: mov eax, dword ptr [edx + 0xab4] */ r_eax = R32((u32)(r_edx+0xab4u));
    /* 004303d8: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004303db: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004303de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004303df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4303e4u); f_005dcb00();
    /* 004303e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004303e7: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004303ed: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004303f3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4303f8u); f_0063aac0();
    /* 004303f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004303fa: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 004303fd: cmp dword ptr [ebp - 0x80], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430401: je 0x43042b */ if (fZ) goto L_0043042b;
L_00430403:; BB(0x00430403);
    /* 00430403: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00430409: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43040eu); f_0063aac0();
    /* 0043040e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430410: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00430416: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043041d: je 0x43042b */ if (fZ) goto L_0043042b;
L_0043041f:; BB(0x0043041f);
    /* 0043041f: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
    /* 00430429: jmp 0x430435 */ goto L_00430435;
L_0043042b:; BB(0x0043042b);
    /* 0043042b: mov dword ptr [ebp - 0x170], 1 */ W32((u32)(r_ebp+0xfffffe90u), 0x1u);
L_00430435:; BB(0x00430435);
    /* 00430435: movzx ecx, byte ptr [ebp - 0x170] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe90u));
    /* 0043043c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043043e: je 0x43044c */ if (fZ) goto L_0043044c;
L_00430440:; BB(0x00430440);
    /* 00430440: mov dword ptr [ebp - 0x174], 0xffffffff */ W32((u32)(r_ebp+0xfffffe8cu), 0xffffffffu);
    /* 0043044a: jmp 0x430469 */ goto L_00430469;
L_0043044c:; BB(0x0043044c);
    /* 0043044c: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00430452: mov dword ptr [ebp - 0x174], edx */ W32((u32)(r_ebp+0xfffffe8cu), r_edx);
    /* 00430458: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0043045d: mov ecx, dword ptr [eax + 0xab4] */ r_ecx = R32((u32)(r_eax+0xab4u));
    /* 00430463: mov dword ptr [ebp - 0x174], ecx */ W32((u32)(r_ebp+0xfffffe8cu), r_ecx);
L_00430469:; BB(0x00430469);
    /* 00430469: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0043046f: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00430472: jmp 0x430f3b */ goto L_00430f3b;
L_00430477:; BB(0x00430477);
    /* 00430477: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0043047d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00430480: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00430483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430484: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430489u); f_005dcb00();
    /* 00430489: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043048c: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00430492: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00430498: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43049du); f_0063aac0();
    /* 0043049d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043049f: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 004304a5: cmp dword ptr [ebp - 0x90], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004304ac: je 0x4304d6 */ if (fZ) goto L_004304d6;
L_004304ae:; BB(0x004304ae);
    /* 004304ae: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 004304b4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4304b9u); f_0063aac0();
    /* 004304b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004304bb: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 004304c1: cmp dword ptr [ebp - 0x94], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004304c8: je 0x4304d6 */ if (fZ) goto L_004304d6;
L_004304ca:; BB(0x004304ca);
    /* 004304ca: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
    /* 004304d4: jmp 0x4304e0 */ goto L_004304e0;
L_004304d6:; BB(0x004304d6);
    /* 004304d6: mov dword ptr [ebp - 0x178], 1 */ W32((u32)(r_ebp+0xfffffe88u), 0x1u);
L_004304e0:; BB(0x004304e0);
    /* 004304e0: movzx eax, byte ptr [ebp - 0x178] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe88u));
    /* 004304e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004304e9: je 0x4304f2 */ if (fZ) goto L_004304f2;
L_004304eb:; BB(0x004304eb);
    /* 004304eb: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
L_004304f2:; BB(0x004304f2);
    /* 004304f2: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 004304f8: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4304fdu); f_005da7b0();
    /* 004304fd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00430500: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430502: je 0x43068f */ if (fZ) goto L_0043068f;
L_00430508:; BB(0x00430508);
    /* 00430508: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0043050a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43050fu); f_0062fbf0();
    /* 0043050f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430512: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430515: jle 0x43068f */ if ((fZ||fS!=fO)) goto L_0043068f;
L_0043051b:; BB(0x0043051b);
    /* 0043051b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043051e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043051f: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 00430524: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430526: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043052c: mov eax, dword ptr [edx + 0x2c8] */ r_eax = R32((u32)(r_edx+0x2c8u));
    /* 00430532: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x430534u); call_ind(t); }
    /* 00430534: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00430537: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430539: je 0x4305d5 */ if (fZ) goto L_004305d5;
L_0043053f:; BB(0x0043053f);
    /* 0043053f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00430542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430543: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430548u); f_005dcb00();
    /* 00430548: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043054b: mov ecx, eax */ r_ecx = r_eax;
    /* 0043054d: call 0x5d5920 */ r_esp -= 4; W32(r_esp, 0x430552u); f_005d5920();
    /* 00430552: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00430555: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430557: je 0x4305d5 */ if (fZ) goto L_004305d5;
L_00430559:; BB(0x00430559);
    /* 00430559: fld1  */ FPUSH(1.0);
    /* 0043055b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0043055e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00430561: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00430562: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430567u); f_005dcb00();
    /* 00430567: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043056a: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00430570: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00430576: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43057bu); f_0063aac0();
    /* 0043057b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043057d: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00430583: cmp dword ptr [ebp - 0x9c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043058a: je 0x4305b4 */ if (fZ) goto L_004305b4;
L_0043058c:; BB(0x0043058c);
    /* 0043058c: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00430592: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430597u); f_0063aac0();
    /* 00430597: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430599: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0043059f: cmp dword ptr [ebp - 0xa0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004305a6: je 0x4305b4 */ if (fZ) goto L_004305b4;
L_004305a8:; BB(0x004305a8);
    /* 004305a8: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
    /* 004305b2: jmp 0x4305be */ goto L_004305be;
L_004305b4:; BB(0x004305b4);
    /* 004305b4: mov dword ptr [ebp - 0x17c], 1 */ W32((u32)(r_ebp+0xfffffe84u), 0x1u);
L_004305be:; BB(0x004305be);
    /* 004305be: movzx ecx, byte ptr [ebp - 0x17c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe84u));
    /* 004305c5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004305c7: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004305c9: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004305cc: add ecx, 0x3f2 */ {  u32 a = r_ecx; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004305d2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_004305d5:; BB(0x004305d5);
    /* 004305d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004305d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004305d9: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 004305de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004305e0: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 004305e6: mov eax, dword ptr [edx + 0x2cc] */ r_eax = R32((u32)(r_edx+0x2ccu));
    /* 004305ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4305eeu); call_ind(t); }
    /* 004305ee: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004305f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004305f3: je 0x43068f */ if (fZ) goto L_0043068f;
L_004305f9:; BB(0x004305f9);
    /* 004305f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004305fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004305fd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430602u); f_005dcb00();
    /* 00430602: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430605: mov ecx, eax */ r_ecx = r_eax;
    /* 00430607: call 0x5d58d0 */ r_esp -= 4; W32(r_esp, 0x43060cu); f_005d58d0();
    /* 0043060c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043060f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430611: je 0x43068f */ if (fZ) goto L_0043068f;
L_00430613:; BB(0x00430613);
    /* 00430613: fld1  */ FPUSH(1.0);
    /* 00430615: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00430618: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043061b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043061c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430621u); f_005dcb00();
    /* 00430621: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430624: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0043062a: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00430630: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430635u); f_0063aac0();
    /* 00430635: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430637: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0043063d: cmp dword ptr [ebp - 0xa8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430644: je 0x43066e */ if (fZ) goto L_0043066e;
L_00430646:; BB(0x00430646);
    /* 00430646: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0043064c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430651u); f_0063aac0();
    /* 00430651: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430653: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00430659: cmp dword ptr [ebp - 0xac], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430660: je 0x43066e */ if (fZ) goto L_0043066e;
L_00430662:; BB(0x00430662);
    /* 00430662: mov dword ptr [ebp - 0x180], 0 */ W32((u32)(r_ebp+0xfffffe80u), 0x0u);
    /* 0043066c: jmp 0x430678 */ goto L_00430678;
L_0043066e:; BB(0x0043066e);
    /* 0043066e: mov dword ptr [ebp - 0x180], 1 */ W32((u32)(r_ebp+0xfffffe80u), 0x1u);
L_00430678:; BB(0x00430678);
    /* 00430678: movzx ecx, byte ptr [ebp - 0x180] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe80u));
    /* 0043067f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00430681: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00430683: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00430686: add ecx, 0x3f3 */ {  u32 a = r_ecx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043068c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_0043068f:; BB(0x0043068f);
    /* 0043068f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00430692: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430693: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430699: call 0x43b5e0 */ r_esp -= 4; W32(r_esp, 0x43069eu); f_0043b5e0();
    /* 0043069e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004306a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004306a3: je 0x43071c */ if (fZ) goto L_0043071c;
L_004306a5:; BB(0x004306a5);
    /* 004306a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004306a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004306a9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4306aeu); f_005dcb00();
    /* 004306ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004306b1: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004306b7: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004306bd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4306c2u); f_0063aac0();
    /* 004306c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004306c4: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 004306ca: cmp dword ptr [ebp - 0xb4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004306d1: je 0x4306fb */ if (fZ) goto L_004306fb;
L_004306d3:; BB(0x004306d3);
    /* 004306d3: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004306d9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4306deu); f_0063aac0();
    /* 004306de: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004306e0: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 004306e6: cmp dword ptr [ebp - 0xb8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004306ed: je 0x4306fb */ if (fZ) goto L_004306fb;
L_004306ef:; BB(0x004306ef);
    /* 004306ef: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
    /* 004306f9: jmp 0x430705 */ goto L_00430705;
L_004306fb:; BB(0x004306fb);
    /* 004306fb: mov dword ptr [ebp - 0x184], 1 */ W32((u32)(r_ebp+0xfffffe7cu), 0x1u);
L_00430705:; BB(0x00430705);
    /* 00430705: movzx ecx, byte ptr [ebp - 0x184] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe7cu));
    /* 0043070c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0043070e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00430710: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00430713: add ecx, 0x3f7 */ {  u32 a = r_ecx; u32 b = 0x3f7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00430719: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_0043071c:; BB(0x0043071c);
    /* 0043071c: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430722: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430724: cmp dword ptr [edx + 0xadc], 3 */ {  u32 a = R32((u32)(r_edx+0xadcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043072b: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0043072e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00430731: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430733: je 0x4307da */ if (fZ) goto L_004307da;
L_00430739:; BB(0x00430739);
    /* 00430739: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043073f: mov eax, dword ptr [edx + 0xab4] */ r_eax = R32((u32)(r_edx+0xab4u));
    /* 00430745: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0043074b: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00430751: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430754: jne 0x4307da */ if (!fZ) goto L_004307da;
L_0043075a:; BB(0x0043075a);
    /* 0043075a: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00430760: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00430763: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00430766: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430767: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43076cu); f_005dcb00();
    /* 0043076c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043076f: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00430775: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0043077b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430780u); f_0063aac0();
    /* 00430780: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430782: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00430788: cmp dword ptr [ebp - 0xc4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043078f: je 0x4307b9 */ if (fZ) goto L_004307b9;
L_00430791:; BB(0x00430791);
    /* 00430791: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00430797: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43079cu); f_0063aac0();
    /* 0043079c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043079e: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 004307a4: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004307ab: je 0x4307b9 */ if (fZ) goto L_004307b9;
L_004307ad:; BB(0x004307ad);
    /* 004307ad: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 004307b7: jmp 0x4307c3 */ goto L_004307c3;
L_004307b9:; BB(0x004307b9);
    /* 004307b9: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
L_004307c3:; BB(0x004307c3);
    /* 004307c3: movzx edx, byte ptr [ebp - 0x188] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe78u));
    /* 004307ca: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 004307cc: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 004307ce: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004307d1: add edx, 0x7e2 */ {  u32 a = r_edx; u32 b = 0x7e2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004307d7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_004307da:; BB(0x004307da);
    /* 004307da: jmp 0x430f3b */ goto L_00430f3b;
L_004307df:; BB(0x004307df);
    /* 004307df: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 004307e5: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004307e8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004307ee: call 0x43b310 */ r_esp -= 4; W32(r_esp, 0x4307f3u); f_0043b310();
    /* 004307f3: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004307f6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004307fc: call 0x43b3f0 */ r_esp -= 4; W32(r_esp, 0x430801u); f_0043b3f0();
    /* 00430801: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00430804: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430808: je 0x4309d3 */ if (fZ) goto L_004309d3;
L_0043080e:; BB(0x0043080e);
    /* 0043080e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00430811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430812: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430817u); f_005dcb00();
    /* 00430817: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043081a: mov ecx, dword ptr [eax + 0x4cc] */ r_ecx = R32((u32)(r_eax+0x4ccu));
    /* 00430820: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430823: jle 0x4309d3 */ if ((fZ||fS!=fO)) goto L_004309d3;
L_00430829:; BB(0x00430829);
    /* 00430829: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043082c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043082d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430832u); f_005dcb00();
    /* 00430832: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430835: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0043083b: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00430841: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430846u); f_0063aac0();
    /* 00430846: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430848: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0043084e: cmp dword ptr [ebp - 0xd0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430855: je 0x43087f */ if (fZ) goto L_0043087f;
L_00430857:; BB(0x00430857);
    /* 00430857: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0043085d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430862u); f_0063aac0();
    /* 00430862: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00430864: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 0043086a: cmp dword ptr [ebp - 0xd4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430871: je 0x43087f */ if (fZ) goto L_0043087f;
L_00430873:; BB(0x00430873);
    /* 00430873: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 0043087d: jmp 0x430889 */ goto L_00430889;
L_0043087f:; BB(0x0043087f);
    /* 0043087f: mov dword ptr [ebp - 0x18c], 1 */ W32((u32)(r_ebp+0xfffffe74u), 0x1u);
L_00430889:; BB(0x00430889);
    /* 00430889: movzx edx, byte ptr [ebp - 0x18c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe74u));
    /* 00430890: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430892: je 0x4308a0 */ if (fZ) goto L_004308a0;
L_00430894:; BB(0x00430894);
    /* 00430894: mov dword ptr [ebp - 0x190], 0xffffffff */ W32((u32)(r_ebp+0xfffffe70u), 0xffffffffu);
    /* 0043089e: jmp 0x4308a9 */ goto L_004308a9;
L_004308a0:; BB(0x004308a0);
    /* 004308a0: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004308a3: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
L_004308a9:; BB(0x004308a9);
    /* 004308a9: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 004308af: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004308b2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004308b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004308b6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4308bbu); f_005dcb00();
    /* 004308bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004308be: mov eax, dword ptr [eax + 0x4cc] */ r_eax = R32((u32)(r_eax+0x4ccu));
    /* 004308c4: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004308c7: jle 0x43094e */ if ((fZ||fS!=fO)) goto L_0043094e;
L_004308cd:; BB(0x004308cd);
    /* 004308cd: fld1  */ FPUSH(1.0);
    /* 004308cf: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004308d2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004308d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004308d6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4308dbu); f_005dcb00();
    /* 004308db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004308de: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 004308e4: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 004308ea: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4308efu); f_0063aac0();
    /* 004308ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004308f1: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 004308f7: cmp dword ptr [ebp - 0xdc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004308fe: je 0x430928 */ if (fZ) goto L_00430928;
L_00430900:; BB(0x00430900);
    /* 00430900: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00430906: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43090bu); f_0063aac0();
    /* 0043090b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043090d: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00430913: cmp dword ptr [ebp - 0xe0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043091a: je 0x430928 */ if (fZ) goto L_00430928;
L_0043091c:; BB(0x0043091c);
    /* 0043091c: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 00430926: jmp 0x430932 */ goto L_00430932;
L_00430928:; BB(0x00430928);
    /* 00430928: mov dword ptr [ebp - 0x194], 1 */ W32((u32)(r_ebp+0xfffffe6cu), 0x1u);
L_00430932:; BB(0x00430932);
    /* 00430932: movzx ecx, byte ptr [ebp - 0x194] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe6cu));
    /* 00430939: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0043093b: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0043093d: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00430940: add ecx, 0x403 */ {  u32 a = r_ecx; u32 b = 0x403u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00430946: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00430949: jmp 0x430f3b */ goto L_00430f3b;
L_0043094e:; BB(0x0043094e);
    /* 0043094e: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00430954: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00430957: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043095a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043095b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430960u); f_005dcb00();
    /* 00430960: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430963: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00430969: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0043096f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430974u); f_0063aac0();
    /* 00430974: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430976: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0043097c: cmp dword ptr [ebp - 0xe8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430983: je 0x4309ad */ if (fZ) goto L_004309ad;
L_00430985:; BB(0x00430985);
    /* 00430985: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0043098b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430990u); f_0063aac0();
    /* 00430990: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00430992: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 00430998: cmp dword ptr [ebp - 0xec], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043099f: je 0x4309ad */ if (fZ) goto L_004309ad;
L_004309a1:; BB(0x004309a1);
    /* 004309a1: mov dword ptr [ebp - 0x198], 0 */ W32((u32)(r_ebp+0xfffffe68u), 0x0u);
    /* 004309ab: jmp 0x4309b7 */ goto L_004309b7;
L_004309ad:; BB(0x004309ad);
    /* 004309ad: mov dword ptr [ebp - 0x198], 1 */ W32((u32)(r_ebp+0xfffffe68u), 0x1u);
L_004309b7:; BB(0x004309b7);
    /* 004309b7: movzx edx, byte ptr [ebp - 0x198] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe68u));
    /* 004309be: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 004309c0: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 004309c2: and edx, 0xffffffec */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004309c5: add edx, 0x404 */ {  u32 a = r_edx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004309cb: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004309ce: jmp 0x430f3b */ goto L_00430f3b;
L_004309d3:; BB(0x004309d3);
    /* 004309d3: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004309d7: je 0x430ba5 */ if (fZ) goto L_00430ba5;
L_004309dd:; BB(0x004309dd);
    /* 004309dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004309e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309e1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4309e6u); f_005dcb00();
    /* 004309e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004309e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004309ec: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004309ee: cmp dword ptr [eax + 0x4cc], ecx */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004309f4: jge 0x430ba5 */ if ((fS==fO)) goto L_00430ba5;
L_004309fa:; BB(0x004309fa);
    /* 004309fa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004309fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004309fe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430a03u); f_005dcb00();
    /* 00430a03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430a06: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00430a0c: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00430a12: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430a17u); f_0063aac0();
    /* 00430a17: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430a19: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00430a1f: cmp dword ptr [ebp - 0xf4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430a26: je 0x430a50 */ if (fZ) goto L_00430a50;
L_00430a28:; BB(0x00430a28);
    /* 00430a28: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00430a2e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430a33u); f_0063aac0();
    /* 00430a33: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00430a35: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 00430a3b: cmp dword ptr [ebp - 0xf8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430a42: je 0x430a50 */ if (fZ) goto L_00430a50;
L_00430a44:; BB(0x00430a44);
    /* 00430a44: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
    /* 00430a4e: jmp 0x430a5a */ goto L_00430a5a;
L_00430a50:; BB(0x00430a50);
    /* 00430a50: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
L_00430a5a:; BB(0x00430a5a);
    /* 00430a5a: movzx edx, byte ptr [ebp - 0x19c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe64u));
    /* 00430a61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430a63: je 0x430a71 */ if (fZ) goto L_00430a71;
L_00430a65:; BB(0x00430a65);
    /* 00430a65: mov dword ptr [ebp - 0x1a0], 0xffffffff */ W32((u32)(r_ebp+0xfffffe60u), 0xffffffffu);
    /* 00430a6f: jmp 0x430a7a */ goto L_00430a7a;
L_00430a71:; BB(0x00430a71);
    /* 00430a71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00430a74: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
L_00430a7a:; BB(0x00430a7a);
    /* 00430a7a: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 00430a80: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00430a83: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00430a86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430a87: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430a8cu); f_005dcb00();
    /* 00430a8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430a8f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00430a92: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00430a94: cmp dword ptr [eax + 0x4cc], ecx */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430a9a: jge 0x430b21 */ if ((fS==fO)) goto L_00430b21;
L_00430aa0:; BB(0x00430aa0);
    /* 00430aa0: fld1  */ FPUSH(1.0);
    /* 00430aa2: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00430aa5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00430aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430aa9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430aaeu); f_005dcb00();
    /* 00430aae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430ab1: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00430ab7: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00430abd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430ac2u); f_0063aac0();
    /* 00430ac2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430ac4: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00430aca: cmp dword ptr [ebp - 0x100], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430ad1: je 0x430afb */ if (fZ) goto L_00430afb;
L_00430ad3:; BB(0x00430ad3);
    /* 00430ad3: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00430ad9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430adeu); f_0063aac0();
    /* 00430ade: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00430ae0: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 00430ae6: cmp dword ptr [ebp - 0x104], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430aed: je 0x430afb */ if (fZ) goto L_00430afb;
L_00430aef:; BB(0x00430aef);
    /* 00430aef: mov dword ptr [ebp - 0x1a4], 0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x0u);
    /* 00430af9: jmp 0x430b05 */ goto L_00430b05;
L_00430afb:; BB(0x00430afb);
    /* 00430afb: mov dword ptr [ebp - 0x1a4], 1 */ W32((u32)(r_ebp+0xfffffe5cu), 0x1u);
L_00430b05:; BB(0x00430b05);
    /* 00430b05: movzx edx, byte ptr [ebp - 0x1a4] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe5cu));
    /* 00430b0c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00430b0e: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00430b10: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00430b13: add edx, 0x401 */ {  u32 a = r_edx; u32 b = 0x401u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00430b19: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00430b1c: jmp 0x430f3b */ goto L_00430f3b;
L_00430b21:; BB(0x00430b21);
    /* 00430b21: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00430b27: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00430b2a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00430b2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430b2e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430b33u); f_005dcb00();
    /* 00430b33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430b36: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00430b3c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00430b42: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430b47u); f_0063aac0();
    /* 00430b47: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00430b49: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 00430b4f: cmp dword ptr [ebp - 0x10c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430b56: je 0x430b80 */ if (fZ) goto L_00430b80;
L_00430b58:; BB(0x00430b58);
    /* 00430b58: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00430b5e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430b63u); f_0063aac0();
    /* 00430b63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430b65: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 00430b6b: cmp dword ptr [ebp - 0x110], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430b72: je 0x430b80 */ if (fZ) goto L_00430b80;
L_00430b74:; BB(0x00430b74);
    /* 00430b74: mov dword ptr [ebp - 0x1a8], 0 */ W32((u32)(r_ebp+0xfffffe58u), 0x0u);
    /* 00430b7e: jmp 0x430b8a */ goto L_00430b8a;
L_00430b80:; BB(0x00430b80);
    /* 00430b80: mov dword ptr [ebp - 0x1a8], 1 */ W32((u32)(r_ebp+0xfffffe58u), 0x1u);
L_00430b8a:; BB(0x00430b8a);
    /* 00430b8a: movzx eax, byte ptr [ebp - 0x1a8] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe58u));
    /* 00430b91: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00430b93: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00430b95: and eax, 0xffffffe6 */ {  u32 a = r_eax; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00430b98: add eax, 0x402 */ {  u32 a = r_eax; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430b9d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00430ba0: jmp 0x430f3b */ goto L_00430f3b;
L_00430ba5:; BB(0x00430ba5);
    /* 00430ba5: jmp 0x430f3b */ goto L_00430f3b;
L_00430baa:; BB(0x00430baa);
    /* 00430baa: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430bb0: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x430bb5u); f_005db190();
    /* 00430bb5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00430bb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430bba: je 0x430d12 */ if (fZ) goto L_00430d12;
L_00430bc0:; BB(0x00430bc0);
    /* 00430bc0: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430bc6: mov eax, dword ptr [edx + 0xacc] */ r_eax = R32((u32)(r_edx+0xaccu));
    /* 00430bcc: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430bd2: add eax, dword ptr [ecx + 0xad0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xad0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430bd8: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430bdb: jne 0x430d12 */ if (!fZ) goto L_00430d12;
L_00430be1:; BB(0x00430be1);
    /* 00430be1: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430be7: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x430becu); f_005dac90();
    /* 00430bec: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430bef: je 0x430d12 */ if (fZ) goto L_00430d12;
L_00430bf5:; BB(0x00430bf5);
    /* 00430bf5: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430bfb: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x430c00u); f_005dac90();
    /* 00430c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430c01: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430c06u); f_005dcb00();
    /* 00430c06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430c09: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 00430c0f: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00430c15: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430c1au); f_0063aac0();
    /* 00430c1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430c1c: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 00430c22: cmp dword ptr [ebp - 0x118], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430c29: je 0x430c53 */ if (fZ) goto L_00430c53;
L_00430c2b:; BB(0x00430c2b);
    /* 00430c2b: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00430c31: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430c36u); f_0063aac0();
    /* 00430c36: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430c38: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00430c3e: cmp dword ptr [ebp - 0x11c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430c45: je 0x430c53 */ if (fZ) goto L_00430c53;
L_00430c47:; BB(0x00430c47);
    /* 00430c47: mov dword ptr [ebp - 0x1ac], 0 */ W32((u32)(r_ebp+0xfffffe54u), 0x0u);
    /* 00430c51: jmp 0x430c5d */ goto L_00430c5d;
L_00430c53:; BB(0x00430c53);
    /* 00430c53: mov dword ptr [ebp - 0x1ac], 1 */ W32((u32)(r_ebp+0xfffffe54u), 0x1u);
L_00430c5d:; BB(0x00430c5d);
    /* 00430c5d: movzx ecx, byte ptr [ebp - 0x1ac] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe54u));
    /* 00430c64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430c66: je 0x430c74 */ if (fZ) goto L_00430c74;
L_00430c68:; BB(0x00430c68);
    /* 00430c68: mov dword ptr [ebp - 0x1b0], 0xffffffff */ W32((u32)(r_ebp+0xfffffe50u), 0xffffffffu);
    /* 00430c72: jmp 0x430c85 */ goto L_00430c85;
L_00430c74:; BB(0x00430c74);
    /* 00430c74: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430c7a: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x430c7fu); f_005dac90();
    /* 00430c7f: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
L_00430c85:; BB(0x00430c85);
    /* 00430c85: mov edx, dword ptr [ebp - 0x1b0] */ r_edx = R32((u32)(r_ebp+0xfffffe50u));
    /* 00430c8b: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00430c8e: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430c94: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x430c99u); f_005dac90();
    /* 00430c99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430c9a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x430c9fu); f_005dcb00();
    /* 00430c9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430ca2: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 00430ca8: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00430cae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430cb3u); f_0063aac0();
    /* 00430cb3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00430cb5: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00430cbb: cmp dword ptr [ebp - 0x124], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430cc2: je 0x430cec */ if (fZ) goto L_00430cec;
L_00430cc4:; BB(0x00430cc4);
    /* 00430cc4: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00430cca: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x430ccfu); f_0063aac0();
    /* 00430ccf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00430cd1: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 00430cd7: cmp dword ptr [ebp - 0x128], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430cde: je 0x430cec */ if (fZ) goto L_00430cec;
L_00430ce0:; BB(0x00430ce0);
    /* 00430ce0: mov dword ptr [ebp - 0x1b4], 0 */ W32((u32)(r_ebp+0xfffffe4cu), 0x0u);
    /* 00430cea: jmp 0x430cf6 */ goto L_00430cf6;
L_00430cec:; BB(0x00430cec);
    /* 00430cec: mov dword ptr [ebp - 0x1b4], 1 */ W32((u32)(r_ebp+0xfffffe4cu), 0x1u);
L_00430cf6:; BB(0x00430cf6);
    /* 00430cf6: movzx edx, byte ptr [ebp - 0x1b4] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe4cu));
    /* 00430cfd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00430cff: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00430d01: and edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00430d04: add edx, 0x3fd */ {  u32 a = r_edx; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00430d0a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00430d0d: fld1  */ FPUSH(1.0);
    /* 00430d0f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00430d12:; BB(0x00430d12);
    /* 00430d12: jmp 0x430f3b */ goto L_00430f3b;
L_00430d17:; BB(0x00430d17);
    /* 00430d17: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00430d1c: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00430d22: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00430d28: mov dword ptr [ecx + 0xae4], 0xffffffff */ W32((u32)(r_ecx+0xae4u), 0xffffffffu);
    /* 00430d32: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00430d38: mov dword ptr [edx + 0xae8], 0xffffffff */ W32((u32)(r_edx+0xae8u), 0xffffffffu);
    /* 00430d42: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 00430d47: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00430d4a: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 00430d50: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 00430d56: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 00430d5c: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00430d62: push 0x6b6e20 */ { u32 v = 0x6b6e20u; r_esp -= 4; W32(r_esp, v); }
    /* 00430d67: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x430d6cu); f_0062fde0();
    /* 00430d6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430d6f: cmp dword ptr [ebp - 0x138], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430d76: je 0x430d97 */ if (fZ) goto L_00430d97;
L_00430d78:; BB(0x00430d78);
    /* 00430d78: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00430d7d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430d80: je 0x430d97 */ if (fZ) goto L_00430d97;
L_00430d82:; BB(0x00430d82);
    /* 00430d82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00430d84: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00430d8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00430d8c: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00430d92: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00430d95: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x430d97u); call_ind(t); }
L_00430d97:; BB(0x00430d97);
    /* 00430d97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00430d99: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00430d9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430da0: push 0xd01b */ { u32 v = 0xd01bu; r_esp -= 4; W32(r_esp, v); }
    /* 00430da5: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00430dab: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x430db0u); f_005cd800();
    /* 00430db0: jmp 0x431119 */ goto L_00431119;
L_00430db5:; BB(0x00430db5);
    /* 00430db5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430dbb: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 00430dc1: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00430dc7: mov dword ptr [edx + 0xae4], 0xffffffff */ W32((u32)(r_edx+0xae4u), 0xffffffffu);
    /* 00430dd1: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00430dd7: mov dword ptr [eax + 0xae8], 0xffffffff */ W32((u32)(r_eax+0xae8u), 0xffffffffu);
    /* 00430de1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00430de3: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00430de9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00430dec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430ded: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 00430df2: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 00430df8: call 0x42df00 */ r_esp -= 4; W32(r_esp, 0x430dfdu); f_0042df00();
    /* 00430dfd: jmp 0x431119 */ goto L_00431119;
L_00430e02:; BB(0x00430e02);
    /* 00430e02: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430e08: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 00430e0e: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00430e14: mov dword ptr [edx + 0xae4], 0xffffffff */ W32((u32)(r_edx+0xae4u), 0xffffffffu);
    /* 00430e1e: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00430e24: mov dword ptr [eax + 0xae8], 0xffffffff */ W32((u32)(r_eax+0xae8u), 0xffffffffu);
    /* 00430e2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00430e30: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00430e36: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00430e39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430e3a: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 00430e3f: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 00430e45: call 0x42e250 */ r_esp -= 4; W32(r_esp, 0x430e4au); f_0042e250();
    /* 00430e4a: jmp 0x431119 */ goto L_00431119;
L_00430e4f:; BB(0x00430e4f);
    /* 00430e4f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430e55: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
    /* 00430e5b: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 00430e61: mov dword ptr [edx + 0xae4], 0xffffffff */ W32((u32)(r_edx+0xae4u), 0xffffffffu);
    /* 00430e6b: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 00430e71: mov dword ptr [eax + 0xae8], 0xffffffff */ W32((u32)(r_eax+0xae8u), 0xffffffffu);
    /* 00430e7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00430e7d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00430e83: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00430e86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430e87: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 00430e8c: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 00430e92: call 0x42eef0 */ r_esp -= 4; W32(r_esp, 0x430e97u); f_0042eef0();
    /* 00430e97: jmp 0x431119 */ goto L_00431119;
L_00430e9c:; BB(0x00430e9c);
    /* 00430e9c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00430ea2: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 00430ea8: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00430eae: mov dword ptr [edx + 0xae4], 0xffffffff */ W32((u32)(r_edx+0xae4u), 0xffffffffu);
    /* 00430eb8: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00430ebe: mov dword ptr [eax + 0xae8], 0xffffffff */ W32((u32)(r_eax+0xae8u), 0xffffffffu);
    /* 00430ec8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00430ece: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00430ed1: mov dword ptr [ebp - 0x150], edx */ W32((u32)(r_ebp+0xfffffeb0u), r_edx);
    /* 00430ed7: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 00430edc: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 00430ee2: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 00430ee8: push 0x6b7354 */ { u32 v = 0x6b7354u; r_esp -= 4; W32(r_esp, v); }
    /* 00430eed: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x430ef2u); f_0062fde0();
    /* 00430ef2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430ef5: cmp dword ptr [ebp - 0x150], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430efc: je 0x430f1d */ if (fZ) goto L_00430f1d;
L_00430efe:; BB(0x00430efe);
    /* 00430efe: mov edx, 1 */ r_edx = 0x1u;
    /* 00430f03: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430f06: je 0x430f1d */ if (fZ) goto L_00430f1d;
L_00430f08:; BB(0x00430f08);
    /* 00430f08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f0a: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00430f10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430f12: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00430f18: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00430f1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x430f1du); call_ind(t); }
L_00430f1d:; BB(0x00430f1d);
    /* 00430f1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f1f: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00430f25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00430f26: push 0xd4e4 */ { u32 v = 0xd4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f2b: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00430f31: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x430f36u); f_005cd800();
    /* 00430f36: jmp 0x431119 */ goto L_00431119;
L_00430f3b:; BB(0x00430f3b);
    /* 00430f3b: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00430f41: mov dword ptr [ebp - 0x154], edx */ W32((u32)(r_ebp+0xfffffeacu), r_edx);
    /* 00430f47: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 00430f4d: mov dword ptr [eax + 0xae4], 0xffffffff */ W32((u32)(r_eax+0xae4u), 0xffffffffu);
    /* 00430f57: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00430f5d: mov dword ptr [ecx + 0xae8], 0xffffffff */ W32((u32)(r_ecx+0xae8u), 0xffffffffu);
    /* 00430f67: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430f6b: jne 0x430fe2 */ if (!fZ) goto L_00430fe2;
L_00430f6d:; BB(0x00430f6d);
    /* 00430f6d: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430f71: jne 0x430f95 */ if (!fZ) goto L_00430f95;
L_00430f73:; BB(0x00430f73);
    /* 00430f73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f77: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00430f7d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00430f80: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00430f86: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00430f89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00430f8b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00430f8e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x430f90u); call_ind(t); }
    /* 00430f90: jmp 0x431119 */ goto L_00431119;
L_00430f95:; BB(0x00430f95);
    /* 00430f95: cmp dword ptr [ebp - 0x58], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430f99: jne 0x430fbe */ if (!fZ) goto L_00430fbe;
L_00430f9b:; BB(0x00430f9b);
    /* 00430f9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f9d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00430fa3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00430fa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430fa7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00430faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430fab: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00430fb1: mov ecx, dword ptr [ecx + 0x168] */ r_ecx = R32((u32)(r_ecx+0x168u));
    /* 00430fb7: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x430fbcu); f_005cd7c0();
    /* 00430fbc: jmp 0x430fe2 */ goto L_00430fe2;
L_00430fbe:; BB(0x00430fbe);
    /* 00430fbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00430fc0: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00430fc6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00430fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430fca: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00430fcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00430fce: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00430fd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430fd2: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 00430fd7: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 00430fdd: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x430fe2u); f_005cd700();
L_00430fe2:; BB(0x00430fe2);
    /* 00430fe2: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430fe6: je 0x431070 */ if (fZ) goto L_00431070;
L_00430fec:; BB(0x00430fec);
    /* 00430fec: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00430ff2: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x430ff7u); f_00636730();
    /* 00430ff7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430ff9: je 0x431070 */ if (fZ) goto L_00431070;
L_00430ffb:; BB(0x00430ffb);
    /* 00430ffb: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430fff: jle 0x431092 */ if ((fZ||fS!=fO)) goto L_00431092;
L_00431005:; BB(0x00431005);
    /* 00431005: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00431008: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431009: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43100eu); f_005dcb00();
    /* 0043100e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431011: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 00431017: mov ecx, dword ptr [ebp - 0x160] */ r_ecx = R32((u32)(r_ebp+0xfffffea0u));
    /* 0043101d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x431022u); f_0063aac0();
    /* 00431022: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00431024: mov dword ptr [ebp - 0x158], edx */ W32((u32)(r_ebp+0xfffffea8u), r_edx);
    /* 0043102a: cmp dword ptr [ebp - 0x158], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffea8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431031: je 0x43105b */ if (fZ) goto L_0043105b;
L_00431033:; BB(0x00431033);
    /* 00431033: mov ecx, dword ptr [ebp - 0x160] */ r_ecx = R32((u32)(r_ebp+0xfffffea0u));
    /* 00431039: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43103eu); f_0063aac0();
    /* 0043103e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00431040: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 00431046: cmp dword ptr [ebp - 0x15c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffea4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043104d: je 0x43105b */ if (fZ) goto L_0043105b;
L_0043104f:; BB(0x0043104f);
    /* 0043104f: mov dword ptr [ebp - 0x1b8], 0 */ W32((u32)(r_ebp+0xfffffe48u), 0x0u);
    /* 00431059: jmp 0x431065 */ goto L_00431065;
L_0043105b:; BB(0x0043105b);
    /* 0043105b: mov dword ptr [ebp - 0x1b8], 1 */ W32((u32)(r_ebp+0xfffffe48u), 0x1u);
L_00431065:; BB(0x00431065);
    /* 00431065: movzx ecx, byte ptr [ebp - 0x1b8] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe48u));
    /* 0043106c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043106e: je 0x431092 */ if (fZ) goto L_00431092;
L_00431070:; BB(0x00431070);
    /* 00431070: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431072: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00431074: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0043107a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043107d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00431083: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00431086: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00431088: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043108b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43108du); call_ind(t); }
    /* 0043108d: jmp 0x431119 */ goto L_00431119;
L_00431092:; BB(0x00431092);
    /* 00431092: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431096: je 0x4310a3 */ if (fZ) goto L_004310a3;
L_00431098:; BB(0x00431098);
    /* 00431098: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043109b: mov dword ptr [ebp - 0x1bc], ecx */ W32((u32)(r_ebp+0xfffffe44u), r_ecx);
    /* 004310a1: jmp 0x4310b4 */ goto L_004310b4;
L_004310a3:; BB(0x004310a3);
    /* 004310a3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004310a9: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x4310aeu); f_00636c50();
    /* 004310ae: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
L_004310b4:; BB(0x004310b4);
    /* 004310b4: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 004310ba: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 004310bd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004310c0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004310c3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004310c6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004310c9: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 004310cc: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004310cf: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 004310d2: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004310d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004310d7: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 004310dd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004310e0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004310e6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004310e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004310eb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004310ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4310f0u); call_ind(t); }
    /* 004310f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004310f2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004310f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004310fa: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x4310ffu); f_00637810();
    /* 004310ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431100: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00431106: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00431109: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043110a: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 0043110d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043110e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00431114: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x431119u); f_00639390();
L_00431119:; BB(0x00431119);
    /* 00431119: mov esp, ebp */ r_esp = r_ebp;
    /* 0043111b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043111c: ret  */ FN_RET(0x00430220); r_esp += 4; return;
}

