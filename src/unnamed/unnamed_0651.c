#include "protos.h"

void f_00651950(void) /* sub_651950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00651950);
    /* 00651950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651951: mov ebp, esp */ r_ebp = r_esp;
    /* 00651953: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651956: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00651959: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065195c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0065195f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651960: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651963: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00651965: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x65196au); f_005f1ad0();
    /* 0065196a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065196d: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00651970: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00651973: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651976: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00651979: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065197d: je 0x651992 */ if (fZ) goto L_00651992;
L_0065197f:; BB(0x0065197f);
    /* 0065197f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651981: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00651984: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651986: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00651989: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065198b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65198du); call_ind(t); }
    /* 0065198d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00651990: jmp 0x651999 */ goto L_00651999;
L_00651992:; BB(0x00651992);
    /* 00651992: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00651999:; BB(0x00651999);
    /* 00651999: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065199c: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0065199f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006519a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006519a5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006519a8: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006519ac: je 0x6519c1 */ if (fZ) goto L_006519c1;
L_006519ae:; BB(0x006519ae);
    /* 006519ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006519b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006519b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006519b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006519b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006519ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6519bcu); call_ind(t); }
    /* 006519bc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006519bf: jmp 0x6519c8 */ goto L_006519c8;
L_006519c1:; BB(0x006519c1);
    /* 006519c1: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006519c8:; BB(0x006519c8);
    /* 006519c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006519cf: jmp 0x6519da */ goto L_006519da;
L_006519d1:; BB(0x006519d1);
    /* 006519d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006519d4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006519d7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006519da:; BB(0x006519da);
    /* 006519da: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006519de: jge 0x651a15 */ if ((fS==fO)) goto L_00651a15;
L_006519e0:; BB(0x006519e0);
    /* 006519e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006519e3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006519e6: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 006519ea: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006519ed: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006519f0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006519f3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006519f7: je 0x651a0c */ if (fZ) goto L_00651a0c;
L_006519f9:; BB(0x006519f9);
    /* 006519f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006519fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006519fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651a00: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651a03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651a05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651a07u); call_ind(t); }
    /* 00651a07: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00651a0a: jmp 0x651a13 */ goto L_00651a13;
L_00651a0c:; BB(0x00651a0c);
    /* 00651a0c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00651a13:; BB(0x00651a13);
    /* 00651a13: jmp 0x6519d1 */ goto L_006519d1;
L_00651a15:; BB(0x00651a15);
    /* 00651a15: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00651a1c: jmp 0x651a27 */ goto L_00651a27;
L_00651a1e:; BB(0x00651a1e);
    /* 00651a1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651a21: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00651a27:; BB(0x00651a27);
    /* 00651a27: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651a2b: jge 0x651a95 */ if ((fS==fO)) goto L_00651a95;
L_00651a2d:; BB(0x00651a2d);
    /* 00651a2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651a30: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651a33: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 00651a37: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00651a3a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00651a3d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00651a40: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651a44: je 0x651a59 */ if (fZ) goto L_00651a59;
L_00651a46:; BB(0x00651a46);
    /* 00651a46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651a48: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651a4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651a4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651a50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651a52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651a54u); call_ind(t); }
    /* 00651a54: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00651a57: jmp 0x651a60 */ goto L_00651a60;
L_00651a59:; BB(0x00651a59);
    /* 00651a59: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00651a60:; BB(0x00651a60);
    /* 00651a60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651a63: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651a66: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 00651a6a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00651a6d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00651a70: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00651a73: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651a77: je 0x651a8c */ if (fZ) goto L_00651a8c;
L_00651a79:; BB(0x00651a79);
    /* 00651a79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651a7b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00651a7e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651a80: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00651a83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651a85: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x651a87u); call_ind(t); }
    /* 00651a87: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00651a8a: jmp 0x651a93 */ goto L_00651a93;
L_00651a8c:; BB(0x00651a8c);
    /* 00651a8c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00651a93:; BB(0x00651a93);
    /* 00651a93: jmp 0x651a1e */ goto L_00651a1e;
L_00651a95:; BB(0x00651a95);
    /* 00651a95: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00651a9c: jmp 0x651aa7 */ goto L_00651aa7;
L_00651a9e:; BB(0x00651a9e);
    /* 00651a9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651aa1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00651aa4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00651aa7:; BB(0x00651aa7);
    /* 00651aa7: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651aab: jge 0x651ae2 */ if ((fS==fO)) goto L_00651ae2;
L_00651aad:; BB(0x00651aad);
    /* 00651aad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651ab0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651ab3: mov eax, dword ptr [edx + ecx*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 00651ab7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00651aba: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00651abd: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00651ac0: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651ac4: je 0x651ad9 */ if (fZ) goto L_00651ad9;
L_00651ac6:; BB(0x00651ac6);
    /* 00651ac6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651ac8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00651acb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651acd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00651ad0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651ad2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x651ad4u); call_ind(t); }
    /* 00651ad4: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00651ad7: jmp 0x651ae0 */ goto L_00651ae0;
L_00651ad9:; BB(0x00651ad9);
    /* 00651ad9: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00651ae0:; BB(0x00651ae0);
    /* 00651ae0: jmp 0x651a9e */ goto L_00651a9e;
L_00651ae2:; BB(0x00651ae2);
    /* 00651ae2: mov esp, ebp */ r_esp = r_ebp;
    /* 00651ae4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651ae5: ret  */ FN_RET(0x00651950); r_esp += 4; return;
}

