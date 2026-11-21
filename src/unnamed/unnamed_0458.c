#include "protos.h"

void f_004586d0(void) /* sub_4586D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004586d0);
    /* 004586d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004586d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004586d3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004586d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004586d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004586e0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004586e7: mov byte ptr [ebp - 0xa], 0 */ W8((u32)(r_ebp+0xfffffff6u), 0x0u);
    /* 004586eb: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 004586f1: call 0x460840 */ r_esp -= 4; W32(r_esp, 0x4586f6u); f_00460840();
    /* 004586f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004586f8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004586fb: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004586fe: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 00458701: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00458705: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458707: je 0x4587c2 */ if (fZ) goto L_004587c2;
L_0045870d:; BB(0x0045870d);
    /* 0045870d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458713: call 0x460840 */ r_esp -= 4; W32(r_esp, 0x458718u); f_00460840();
    /* 00458718: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045871b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045871f: jl 0x458730 */ if ((fS!=fO)) goto L_00458730;
L_00458721:; BB(0x00458721);
    /* 00458721: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458725: jg 0x458730 */ if ((!fZ&&fS==fO)) goto L_00458730;
L_00458727:; BB(0x00458727);
    /* 00458727: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0045872e: jmp 0x458737 */ goto L_00458737;
L_00458730:; BB(0x00458730);
    /* 00458730: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00458737:; BB(0x00458737);
    /* 00458737: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 0045873a: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0045873d: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00458741: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458743: je 0x4587c2 */ if (fZ) goto L_004587c2;
L_00458745:; BB(0x00458745);
    /* 00458745: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458748: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458749: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45874eu); f_005dcb00();
    /* 0045874e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458751: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00458754: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458758: je 0x4587c2 */ if (fZ) goto L_004587c2;
L_0045875a:; BB(0x0045875a);
    /* 0045875a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045875d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x458762u); f_0063aac0();
    /* 00458762: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00458764: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00458767: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045876b: je 0x458789 */ if (fZ) goto L_00458789;
L_0045876d:; BB(0x0045876d);
    /* 0045876d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458770: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x458775u); f_0063aac0();
    /* 00458775: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00458777: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045877a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045877e: je 0x458789 */ if (fZ) goto L_00458789;
L_00458780:; BB(0x00458780);
    /* 00458780: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00458787: jmp 0x458790 */ goto L_00458790;
L_00458789:; BB(0x00458789);
    /* 00458789: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00458790:; BB(0x00458790);
    /* 00458790: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00458794: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458796: je 0x4587c2 */ if (fZ) goto L_004587c2;
L_00458798:; BB(0x00458798);
    /* 00458798: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045879b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045879c: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 004587a2: call 0x460b00 */ r_esp -= 4; W32(r_esp, 0x4587a7u); f_00460b00();
    /* 004587a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004587aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004587ac: je 0x4587c2 */ if (fZ) goto L_004587c2;
L_004587ae:; BB(0x004587ae);
    /* 004587ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004587b0: push 0x30e3a2 */ { u32 v = 0x30e3a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004587b5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004587bb: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x4587c0u); f_005f2b20();
    /* 004587c0: jmp 0x4587d2 */ goto L_004587d2;
L_004587c2:; BB(0x004587c2);
    /* 004587c2: push 0x30e3a2 */ { u32 v = 0x30e3a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004587c7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004587cd: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x4587d2u); f_005f2ba0();
L_004587d2:; BB(0x004587d2);
    /* 004587d2: mov esp, ebp */ r_esp = r_ebp;
    /* 004587d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004587d5: ret  */ FN_RET(0x004586d0); r_esp += 4; return;
}

void f_004587e0(void) /* sub_4587E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004587e0);
    /* 004587e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004587e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004587e3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004587e6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004587e9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 004587ef: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x4587f4u); f_0045e8e0();
    /* 004587f4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004587f6: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004587f8: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004587fb: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004587fe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00458801: mov dword ptr [ebp - 0x1c], 3 */ W32((u32)(r_ebp+0xffffffe4u), 0x3u);
    /* 00458808: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 0045880f: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 00458816: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0045881d: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 00458824: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458827: call 0x4586d0 */ r_esp -= 4; W32(r_esp, 0x45882cu); f_004586d0();
    /* 0045882c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458833: jmp 0x45883e */ goto L_0045883e;
L_00458835:; BB(0x00458835);
    /* 00458835: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458838: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045883b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045883e:; BB(0x0045883e);
    /* 0045883e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458842: jge 0x4588f1 */ if ((fS==fO)) goto L_004588f1;
L_00458848:; BB(0x00458848);
    /* 00458848: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045884b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045884e: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00458852: call 0x459cd0 */ r_esp -= 4; W32(r_esp, 0x458857u); f_00459cd0();
    /* 00458857: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045885a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045885b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045885e: call 0x459130 */ r_esp -= 4; W32(r_esp, 0x458863u); f_00459130();
    /* 00458863: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458866: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458869: cmp dword ptr [edx + ecx*4 + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458871: je 0x4588ec */ if (fZ) goto L_004588ec;
L_00458873:; BB(0x00458873);
    /* 00458873: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00458878: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045887b: movzx ecx, byte ptr [eax + 0xf9] */ r_ecx = (u32)R8((u32)(r_eax+0xf9u));
    /* 00458882: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458884: je 0x4588cb */ if (fZ) goto L_004588cb;
L_00458886:; BB(0x00458886);
    /* 00458886: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458889: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045888a: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0045888f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458891: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00458897: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 0045889d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45889fu); call_ind(t); }
    /* 0045889f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004588a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004588a4: jne 0x4588cb */ if (!fZ) goto L_004588cb;
L_004588a6:; BB(0x004588a6);
    /* 004588a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004588a9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004588ac: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 004588b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004588b6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004588b9: mov edx, dword ptr [eax + edx*4 + 0x84] */ r_edx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 004588c0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004588c2: mov ecx, edx */ r_ecx = r_edx;
    /* 004588c4: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 004588c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4588c9u); call_ind(t); }
    /* 004588c9: jmp 0x4588ec */ goto L_004588ec;
L_004588cb:; BB(0x004588cb);
    /* 004588cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004588ce: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004588d1: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 004588d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004588db: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004588de: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 004588e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004588e7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004588ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4588ecu); call_ind(t); }
L_004588ec:; BB(0x004588ec);
    /* 004588ec: jmp 0x458835 */ goto L_00458835;
L_004588f1:; BB(0x004588f1);
    /* 004588f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004588f8: jmp 0x458903 */ goto L_00458903;
L_004588fa:; BB(0x004588fa);
    /* 004588fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004588fd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458900: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00458903:; BB(0x00458903);
    /* 00458903: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458906: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458909: jge 0x458a12 */ if ((fS==fO)) goto L_00458a12;
L_0045890f:; BB(0x0045890f);
    /* 0045890f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458912: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458915: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458918: je 0x458a0d */ if (fZ) goto L_00458a0d;
L_0045891e:; BB(0x0045891e);
    /* 0045891e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458921: and ecx, 0x80000003 */ {  u32 a = r_ecx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 00458927: jns 0x45892e */ if (!fS) goto L_0045892e;
L_00458929:; BB(0x00458929);
    /* 00458929: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0045892a: or ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0045892d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0045892e:; BB(0x0045892e);
    /* 0045892e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045892f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x458934u); f_005dcb00();
    /* 00458934: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458937: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045893a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045893d: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00458943: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 00458946: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 0045894a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045894c: je 0x458a0d */ if (fZ) goto L_00458a0d;
L_00458952:; BB(0x00458952);
    /* 00458952: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00458958: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x45895du); f_005da7b0();
    /* 0045895d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00458960: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458962: je 0x458a0d */ if (fZ) goto L_00458a0d;
L_00458968:; BB(0x00458968);
    /* 00458968: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045896b: and eax, 0x80000003 */ {  u32 a = r_eax; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00458970: jns 0x458977 */ if (!fS) goto L_00458977;
L_00458972:; BB(0x00458972);
    /* 00458972: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458973: or eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458976: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00458977:; BB(0x00458977);
    /* 00458977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458978: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045897e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00458980: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00458986: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 0045898c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45898eu); call_ind(t); }
    /* 0045898e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00458991: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458993: jne 0x458a0d */ if (!fZ) goto L_00458a0d;
L_00458995:; BB(0x00458995);
    /* 00458995: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458998: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045899b: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0045899f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589a2: and edx, 0x80000003 */ {  u32 a = r_edx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 004589a8: jns 0x4589af */ if (!fS) goto L_004589af;
L_004589aa:; BB(0x004589aa);
    /* 004589aa: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004589ab: or edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004589ae: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004589af:; BB(0x004589af);
    /* 004589af: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004589b5: lea ecx, [ecx + edx + 0x17c] */ r_ecx = (u32)(r_ecx+r_edx+0x17cu);
    /* 004589bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004589c0: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004589c3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004589c5: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004589c8: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004589cb: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004589cf: jne 0x458a0d */ if (!fZ) goto L_00458a0d;
L_004589d1:; BB(0x004589d1);
    /* 004589d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589d4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004589d5: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004589d8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004589da: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004589dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004589de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589e1: and edx, 0x80000003 */ {  u32 a = r_edx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 004589e7: jns 0x4589ee */ if (!fS) goto L_004589ee;
L_004589e9:; BB(0x004589e9);
    /* 004589e9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004589ea: or edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004589ed: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004589ee:; BB(0x004589ee);
    /* 004589ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004589ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589f2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004589f5: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 004589f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004589fc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004589ff: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00458a03: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458a05: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00458a0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458a0du); call_ind(t); }
L_00458a0d:; BB(0x00458a0d);
    /* 00458a0d: jmp 0x4588fa */ goto L_004588fa;
L_00458a12:; BB(0x00458a12);
    /* 00458a12: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00458a18: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x458a1du); f_005da7b0();
    /* 00458a1d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00458a20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a22: je 0x458a43 */ if (fZ) goto L_00458a43;
L_00458a24:; BB(0x00458a24);
    /* 00458a24: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a2b: jne 0x458a43 */ if (!fZ) goto L_00458a43;
L_00458a2d:; BB(0x00458a2d);
    /* 00458a2d: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 00458a33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00458a35: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00458a3b: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 00458a41: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x458a43u); call_ind(t); }
L_00458a43:; BB(0x00458a43);
    /* 00458a43: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00458a48: cmp dword ptr [eax + 0x108], -1 */ {  u32 a = R32((u32)(r_eax+0x108u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458a4f: jle 0x458b15 */ if ((fZ||fS!=fO)) goto L_00458b15;
L_00458a55:; BB(0x00458a55);
    /* 00458a55: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458a5b: cmp dword ptr [ecx + 0x108], 5 */ {  u32 a = R32((u32)(r_ecx+0x108u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458a62: jge 0x458b15 */ if ((fS==fO)) goto L_00458b15;
L_00458a68:; BB(0x00458a68);
    /* 00458a68: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00458a6e: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00458a74: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00458a77: cmp dword ptr [ebp - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458a7b: jle 0x458aec */ if ((fZ||fS!=fO)) goto L_00458aec;
L_00458a7d:; BB(0x00458a7d);
    /* 00458a7d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458a83: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00458a89: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00458a8c: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458a90: jge 0x458aec */ if ((fS==fO)) goto L_00458aec;
L_00458a92:; BB(0x00458a92);
    /* 00458a92: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00458a97: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 00458a9d: mov edx, dword ptr [ebp + ecx*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe4u));
    /* 00458aa1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00458aa4: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00458aa9: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 00458aaf: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00458ab2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00458ab5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458ab8: sub eax, dword ptr [ebp + edx*4 - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458abc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00458abf: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458ac3: jge 0x458ace */ if ((fS==fO)) goto L_00458ace;
L_00458ac5:; BB(0x00458ac5);
    /* 00458ac5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458ac8: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458acb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00458ace:; BB(0x00458ace);
    /* 00458ace: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458ad1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458ad2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458ad5: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00458ad8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458adb: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00458ade: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00458ae0: mov ecx, eax */ r_ecx = r_eax;
    /* 00458ae2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00458ae8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458aeau); call_ind(t); }
    /* 00458aea: jmp 0x458b13 */ goto L_00458b13;
L_00458aec:; BB(0x00458aec);
    /* 00458aec: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458af2: mov edx, dword ptr [ecx + 0x108] */ r_edx = R32((u32)(r_ecx+0x108u));
    /* 00458af8: mov eax, dword ptr [ebp + edx*4 - 0x1c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe4u));
    /* 00458afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458afd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458b00: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00458b03: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458b06: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00458b09: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458b0b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00458b11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458b13u); call_ind(t); }
L_00458b13:; BB(0x00458b13);
    /* 00458b13: jmp 0x458b2d */ goto L_00458b2d;
L_00458b15:; BB(0x00458b15);
    /* 00458b15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458b17: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458b1a: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00458b1d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458b20: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00458b23: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458b25: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00458b2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458b2du); call_ind(t); }
L_00458b2d:; BB(0x00458b2d);
    /* 00458b2d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458b33: cmp dword ptr [ecx + 0x118], -1 */ {  u32 a = R32((u32)(r_ecx+0x118u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458b3a: jne 0x458b44 */ if (!fZ) goto L_00458b44;
L_00458b3c:; BB(0x00458b3c);
    /* 00458b3c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458b3f: call 0x459580 */ r_esp -= 4; W32(r_esp, 0x458b44u); f_00459580();
L_00458b44:; BB(0x00458b44);
    /* 00458b44: mov esp, ebp */ r_esp = r_ebp;
    /* 00458b46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458b47: ret  */ FN_RET(0x004587e0); r_esp += 4; return;
}

void f_00458b50(void) /* sub_458B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458b50);
    /* 00458b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00458b53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458b56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00458b59: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458b5c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00458b5f: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458b63: jl 0x458b67 */ if ((fS!=fO)) goto L_00458b67;
L_00458b65:; BB(0x00458b65);
    /* 00458b65: jmp 0x458bce */ goto L_00458bce;
L_00458b67:; BB(0x00458b67);
    /* 00458b67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458b6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458b6d: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 00458b70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458b73: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458b78: je 0x458bce */ if (fZ) goto L_00458bce;
L_00458b7a:; BB(0x00458b7a);
    /* 00458b7a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00458b7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458b7e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458b81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458b82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458b85: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458b88: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 00458b8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458b8e: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00458b92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458b95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458b98: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00458b9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458b9e: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00458ba2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458ba4: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00458baa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458bacu); call_ind(t); }
    /* 00458bac: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458bb0: je 0x458bce */ if (fZ) goto L_00458bce;
L_00458bb2:; BB(0x00458bb2);
    /* 00458bb2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458bb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458bb6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x458bbbu); f_005dcb00();
    /* 00458bbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458bbe: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00458bc1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458bc4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00458bc6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458bc9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00458bcc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x458bceu); call_ind(t); }
L_00458bce:; BB(0x00458bce);
    /* 00458bce: mov esp, ebp */ r_esp = r_ebp;
    /* 00458bd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458bd1: ret 8 */ FN_RET(0x00458b50); r_esp += 12; return;
}

void f_00458be0(void) /* sub_458BE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458be0);
    /* 00458be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00458be3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458be5: push 0x69f04f */ { u32 v = 0x69f04fu; r_esp -= 4; W32(r_esp, v); }
    /* 00458bea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00458bf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458bf1: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458bf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00458bf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00458bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458bfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00458bff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00458c05: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00458c08: mov dword ptr [ebp - 0x38], 0xffffffff */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffffu);
    /* 00458c0f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458c12: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00458c15: mov dword ptr [ebp - 0x2c], 0x178 */ W32((u32)(r_ebp+0xffffffd4u), 0x178u);
    /* 00458c1c: mov dword ptr [ebp - 0x28], 0x15a */ W32((u32)(r_ebp+0xffffffd8u), 0x15au);
    /* 00458c23: mov dword ptr [ebp - 0x24], 0xcb */ W32((u32)(r_ebp+0xffffffdcu), 0xcbu);
    /* 00458c2a: mov dword ptr [ebp - 0x20], 0x15a */ W32((u32)(r_ebp+0xffffffe0u), 0x15au);
    /* 00458c31: mov dword ptr [ebp - 0x1c], 0x218 */ W32((u32)(r_ebp+0xffffffe4u), 0x218u);
    /* 00458c38: mov dword ptr [ebp - 0x18], 0xa6 */ W32((u32)(r_ebp+0xffffffe8u), 0xa6u);
    /* 00458c3f: mov dword ptr [ebp - 0x14], 0x31 */ W32((u32)(r_ebp+0xffffffecu), 0x31u);
    /* 00458c46: mov dword ptr [ebp - 0x10], 0xa6 */ W32((u32)(r_ebp+0xfffffff0u), 0xa6u);
    /* 00458c4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458c50: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458c53: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00458c57: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00458c5a: mov edx, dword ptr [eax + ecx*4 + 8] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x8u));
    /* 00458c5e: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00458c61: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00458c66: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458c69: mov cl, byte ptr [eax + 0xe5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xe5u))) & 0xffu);
    /* 00458c6f: mov byte ptr [ebp - 0x41], cl */ W8((u32)(r_ebp+0xffffffbfu), (u8)r_ecx);
    /* 00458c72: movzx edx, byte ptr [ebp - 0x41] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffbfu));
    /* 00458c76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458c78: je 0x458c8d */ if (fZ) goto L_00458c8d;
L_00458c7a:; BB(0x00458c7a);
    /* 00458c7a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458c7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458c81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458c82: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458c85: call 0x458e90 */ r_esp -= 4; W32(r_esp, 0x458c8au); f_00458e90();
    /* 00458c8a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00458c8d:; BB(0x00458c8d);
    /* 00458c8d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00458c90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458c91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458c95: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458c9b: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x458ca0u); f_004604d0();
    /* 00458ca0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458ca3: mov word ptr [ecx + 0x190], ax */ W16((u32)(r_ecx+0x190u), (u16)r_eax);
    /* 00458caa: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458cad: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00458cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458cb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458cb7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00458cba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458cbb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458cbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458cbf: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458cc2: call 0x4590a0 */ r_esp -= 4; W32(r_esp, 0x458cc7u); f_004590a0();
    /* 00458cc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458cc8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458ccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ccc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458ccf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458cd0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458cd3: call 0x459030 */ r_esp -= 4; W32(r_esp, 0x458cd8u); f_00459030();
    /* 00458cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458cd9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458cdc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00458cde: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458ce1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00458ce4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x458ce6u); call_ind(t); }
    /* 00458ce6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458ce9: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ced: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458cf0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00458cf2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458cf5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00458cf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458cfau); call_ind(t); }
    /* 00458cfa: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458cfe: je 0x458d61 */ if (fZ) goto L_00458d61;
L_00458d00:; BB(0x00458d00);
    /* 00458d00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458d04: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x458d09u); f_005dcb00();
    /* 00458d09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458d0c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00458d0f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00458d12: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x458d17u); f_0063aac0();
    /* 00458d17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458d19: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00458d1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00458d1e: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d22: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00458d25: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00458d28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d2a: jne 0x458d4f */ if (!fZ) goto L_00458d4f;
L_00458d2c:; BB(0x00458d2c);
    /* 00458d2c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458d2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458d30: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x458d35u); f_005dcb00();
    /* 00458d35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458d38: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00458d3b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00458d3e: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00458d44: mov byte ptr [ebp - 0x51], cl */ W8((u32)(r_ebp+0xffffffafu), (u8)r_ecx);
    /* 00458d47: movzx edx, byte ptr [ebp - 0x51] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffafu));
    /* 00458d4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d4d: je 0x458d61 */ if (fZ) goto L_00458d61;
L_00458d4f:; BB(0x00458d4f);
    /* 00458d4f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458d52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00458d54: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458d57: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00458d5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458d5cu); call_ind(t); }
    /* 00458d5c: jmp 0x458e71 */ goto L_00458e71;
L_00458d61:; BB(0x00458d61);
    /* 00458d61: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458d64: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00458d66: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458d69: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00458d6c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458d6eu); call_ind(t); }
    /* 00458d6e: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458d74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458d77: cmp edx, dword ptr [ecx + 0x118] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x118u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d7d: jne 0x458e71 */ if (!fZ) goto L_00458e71;
L_00458d83:; BB(0x00458d83);
    /* 00458d83: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00458d88: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00458d8b: cmp ecx, dword ptr [eax + 0x11c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x11cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458d91: jne 0x458d9a */ if (!fZ) goto L_00458d9a;
L_00458d93:; BB(0x00458d93);
    /* 00458d93: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00458d9a:; BB(0x00458d9a);
    /* 00458d9a: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00458da0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458da3: cmp eax, dword ptr [edx + 0x120] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x120u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458da9: jne 0x458db2 */ if (!fZ) goto L_00458db2;
L_00458dab:; BB(0x00458dab);
    /* 00458dab: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00458db2:; BB(0x00458db2);
    /* 00458db2: cmp dword ptr [ebp - 0x38], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458db6: je 0x458e71 */ if (fZ) goto L_00458e71;
L_00458dbc:; BB(0x00458dbc);
    /* 00458dbc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458dbf: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458dc2: cmp dword ptr [edx + ecx*4 + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458dc7: jne 0x458e14 */ if (!fZ) goto L_00458e14;
L_00458dc9:; BB(0x00458dc9);
    /* 00458dc9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00458dce: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x458dd3u); f_00686d82();
    /* 00458dd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458dd6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00458dd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458de0: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458de4: je 0x458df3 */ if (fZ) goto L_00458df3;
L_00458de6:; BB(0x00458de6);
    /* 00458de6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00458de9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x458deeu); f_005eaaf0();
    /* 00458dee: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00458df1: jmp 0x458dfa */ goto L_00458dfa;
L_00458df3:; BB(0x00458df3);
    /* 00458df3: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00458dfa:; BB(0x00458dfa);
    /* 00458dfa: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00458dfd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00458e00: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00458e07: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458e0a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458e0d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00458e10: mov dword ptr [edx + ecx*4 + 0x7c], eax */ W32((u32)(r_edx+r_ecx*4+0x7cu), r_eax);
L_00458e14:; BB(0x00458e14);
    /* 00458e14: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458e16: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00458e18: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458e1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00458e1d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458e20: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00458e23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458e25u); call_ind(t); }
    /* 00458e25: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458e28: add eax, dword ptr [ebp + ecx*8 - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458e2d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458e30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00458e32: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00458e35: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00458e38: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x458e3au); call_ind(t); }
    /* 00458e3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458e3d: add eax, dword ptr [ebp + ecx*8 - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458e41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458e42: push 0x18a89 */ { u32 v = 0x18a89u; r_esp -= 4; W32(r_esp, v); }
    /* 00458e47: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458e4a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458e4d: mov ecx, dword ptr [eax + edx*4 + 0x7c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x7cu));
    /* 00458e51: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x458e56u); f_005eae80();
    /* 00458e56: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458e59: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458e5c: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 00458e60: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00458e63: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00458e66: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 00458e6a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00458e6c: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00458e6f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x458e71u); call_ind(t); }
L_00458e71:; BB(0x00458e71);
    /* 00458e71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458e74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00458e7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00458e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458e7f: ret 8 */ FN_RET(0x00458be0); r_esp += 12; return;
}

void f_00458e90(void) /* sub_458E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00458e90);
    /* 00458e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00458e93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00458e97: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00458e9a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00458e9d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00458ea0: cmp dword ptr [ebp + 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458ea4: jge 0x458f0a */ if ((fS==fO)) goto L_00458f0a;
L_00458ea6:; BB(0x00458ea6);
    /* 00458ea6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00458ead: jmp 0x458eb8 */ goto L_00458eb8;
L_00458eaf:; BB(0x00458eaf);
    /* 00458eaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458eb2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00458eb5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00458eb8:; BB(0x00458eb8);
    /* 00458eb8: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458ebc: jge 0x458f05 */ if ((fS==fO)) goto L_00458f05;
L_00458ebe:; BB(0x00458ebe);
    /* 00458ebe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458ec2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ec6: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458ecc: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x458ed1u); f_004604d0();
    /* 00458ed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ed2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458ed5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458ed6: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458edc: call 0x461220 */ r_esp -= 4; W32(r_esp, 0x458ee1u); f_00461220();
    /* 00458ee1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00458ee4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458ee6: jne 0x458f03 */ if (!fZ) goto L_00458f03;
L_00458ee8:; BB(0x00458ee8);
    /* 00458ee8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458eec: je 0x458efb */ if (fZ) goto L_00458efb;
L_00458eee:; BB(0x00458eee);
    /* 00458eee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00458ef1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458ef4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00458ef7: jmp 0x458eaf */ goto L_00458eaf;
L_00458efb:; BB(0x00458efb);
    /* 00458efb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00458efe: jmp 0x459021 */ goto L_00459021;
L_00458f03:; BB(0x00458f03);
    /* 00458f03: jmp 0x458eaf */ goto L_00458eaf;
L_00458f05:; BB(0x00458f05);
    /* 00458f05: jmp 0x45901e */ goto L_0045901e;
L_00458f0a:; BB(0x00458f0a);
    /* 00458f0a: cmp dword ptr [ebp + 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f0e: jne 0x458f9e */ if (!fZ) goto L_00458f9e;
L_00458f14:; BB(0x00458f14);
    /* 00458f14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458f17: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00458f1d: mov ax, word ptr [edx + ecx*2 + 0xa2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xa2u))) & 0xffffu);
    /* 00458f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458f26: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x458f2bu); f_00641280();
    /* 00458f2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458f2e: mov esi, eax */ r_esi = r_eax;
    /* 00458f30: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458f33: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00458f39: mov ax, word ptr [edx + ecx*2 + 0xac] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xacu))) & 0xffffu);
    /* 00458f41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458f42: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x458f47u); f_00641280();
    /* 00458f47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458f4a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458f4c: jl 0x458f74 */ if ((fS!=fO)) goto L_00458f74;
L_00458f4e:; BB(0x00458f4e);
    /* 00458f4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458f51: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00458f57: mov ax, word ptr [edx + ecx*2 + 0xa2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xa2u))) & 0xffffu);
    /* 00458f5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458f60: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458f64: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458f6a: call 0x461360 */ r_esp -= 4; W32(r_esp, 0x458f6fu); f_00461360();
    /* 00458f6f: jmp 0x459021 */ goto L_00459021;
L_00458f74:; BB(0x00458f74);
    /* 00458f74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458f77: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00458f7c: mov cx, word ptr [eax + edx*2 + 0xac] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xacu))) & 0xffffu);
    /* 00458f84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00458f85: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00458f88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458f89: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458f8f: call 0x461360 */ r_esp -= 4; W32(r_esp, 0x458f94u); f_00461360();
    /* 00458f94: jmp 0x459021 */ goto L_00459021;
L_00458f9e:; BB(0x00458f9e);
    /* 00458f9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458fa1: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458fa7: mov dx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xa2u))) & 0xffffu);
    /* 00458faf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458fb0: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x458fb5u); f_00641280();
    /* 00458fb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458fb8: mov esi, eax */ r_esi = r_eax;
    /* 00458fba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458fbd: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458fc3: mov dx, word ptr [ecx + eax*2 + 0xac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xacu))) & 0xffffu);
    /* 00458fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458fcc: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x458fd1u); f_00641280();
    /* 00458fd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458fd4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458fd6: jge 0x458ffb */ if ((fS==fO)) goto L_00458ffb;
L_00458fd8:; BB(0x00458fd8);
    /* 00458fd8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458fdb: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458fe1: mov dx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xa2u))) & 0xffffu);
    /* 00458fe9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458fea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458fee: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00458ff4: call 0x461360 */ r_esp -= 4; W32(r_esp, 0x458ff9u); f_00461360();
    /* 00458ff9: jmp 0x459021 */ goto L_00459021;
L_00458ffb:; BB(0x00458ffb);
    /* 00458ffb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00458ffe: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00459004: mov ax, word ptr [edx + ecx*2 + 0xac] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xacu))) & 0xffffu);
    /* 0045900c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045900d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00459010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459011: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00459017: call 0x461360 */ r_esp -= 4; W32(r_esp, 0x45901cu); f_00461360();
    /* 0045901c: jmp 0x459021 */ goto L_00459021;
L_0045901e:; BB(0x0045901e);
    /* 0045901e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_00459021:; BB(0x00459021);
    /* 00459021: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00459022: mov esp, ebp */ r_esp = r_ebp;
    /* 00459024: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459025: ret 8 */ FN_RET(0x00458e90); r_esp += 12; return;
}

