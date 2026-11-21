#include "protos.h"

void f_005cd330(void) /* sub_5CD330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd330);
    /* 005cd330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd331: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd33a: cmp dword ptr [eax + 0xadc], 0 */ {  u32 a = R32((u32)(r_eax+0xadcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd341: je 0x5cd35c */ if (fZ) goto L_005cd35c;
L_005cd343:; BB(0x005cd343);
    /* 005cd343: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd346: mov edx, dword ptr [ecx + 0xadc] */ r_edx = R32((u32)(r_ecx+0xadcu));
    /* 005cd34c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd34f: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 005cd355: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005cd357: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005cd35a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd35cu); call_ind(t); }
L_005cd35c:; BB(0x005cd35c);
    /* 005cd35c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd35e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd35f: ret  */ FN_RET(0x005cd330); r_esp += 4; return;
}

void f_005cd620(void) /* sub_5CD620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd620);
    /* 005cd620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd621: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd627: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005cd62a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd62b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd62e: call 0x5f0ae0 */ r_esp -= 4; W32(r_esp, 0x5cd633u); f_005f0ae0();
    /* 005cd633: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd636: cmp dword ptr [ecx + 0x1d0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd63d: je 0x5cd68d */ if (fZ) goto L_005cd68d;
L_005cd63f:; BB(0x005cd63f);
    /* 005cd63f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd642: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5cd647u); f_005f54a0();
    /* 005cd647: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005cd64a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd64c: je 0x5cd68d */ if (fZ) goto L_005cd68d;
L_005cd64e:; BB(0x005cd64e);
    /* 005cd64e: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005cd652: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd657: jge 0x5cd674 */ if ((fS==fO)) goto L_005cd674;
L_005cd659:; BB(0x005cd659);
    /* 005cd659: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd65c: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 005cd662: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd665: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 005cd66b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005cd66d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005cd670: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd672u); call_ind(t); }
    /* 005cd672: jmp 0x5cd68d */ goto L_005cd68d;
L_005cd674:; BB(0x005cd674);
    /* 005cd674: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd677: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 005cd67d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd680: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 005cd686: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005cd688: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005cd68b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd68du); call_ind(t); }
L_005cd68d:; BB(0x005cd68d);
    /* 005cd68d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd68f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd690: ret 4 */ FN_RET(0x005cd620); r_esp += 8; return;
}

void f_005cd700(void) /* sub_5CD700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd700);
    /* 005cd700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd701: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd703: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd706: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cd709: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd70c: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd70f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cd712: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd714: cmp dword ptr [ebp - 8], 0xcf1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcf1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd71b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005cd71e: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005cd721: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005cd725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd727: jne 0x5cd753 */ if (!fZ) goto L_005cd753;
L_005cd729:; BB(0x005cd729);
    /* 005cd729: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd72c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd72e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd731: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005cd737: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd739u); call_ind(t); }
    /* 005cd739: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cd73c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd73e: je 0x5cd753 */ if (fZ) goto L_005cd753;
L_005cd740:; BB(0x005cd740);
    /* 005cd740: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd743: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd747: call 0x5cd830 */ r_esp -= 4; W32(r_esp, 0x5cd74cu); f_005cd830();
    /* 005cd74c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cd74f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd751: jne 0x5cd76c */ if (!fZ) goto L_005cd76c;
L_005cd753:; BB(0x005cd753);
    /* 005cd753: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd757: je 0x5cd76a */ if (fZ) goto L_005cd76a;
L_005cd759:; BB(0x005cd759);
    /* 005cd759: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005cd75c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd75d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cd760: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cd762: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005cd765: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005cd768: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cd76au); call_ind(t); }
L_005cd76a:; BB(0x005cd76a);
    /* 005cd76a: jmp 0x5cd7ab */ goto L_005cd7ab;
L_005cd76c:; BB(0x005cd76c);
    /* 005cd76c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd76f: add eax, 0x194 */ {  u32 a = r_eax; u32 b = 0x194u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd775: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd776: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005cd77c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cd77f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd780: fld1  */ FPUSH(1.0);
    /* 005cd782: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cd785: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd787: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cd789: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd78b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005cd78e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd78f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd792: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cd795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd796: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005cd79b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd79d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cd7a3: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005cd7a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd7abu); call_ind(t); }
L_005cd7ab:; BB(0x005cd7ab);
    /* 005cd7ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd7ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd7ae: ret 0x10 */ FN_RET(0x005cd700); r_esp += 20; return;
}

void f_005cd7c0(void) /* sub_5CD7C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd7c0);
    /* 005cd7c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd7c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd7c7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005cd7ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7cb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cd7ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd7d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd7d6: call 0x5cd950 */ r_esp -= 4; W32(r_esp, 0x5cd7dbu); f_005cd950();
    /* 005cd7db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7dc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5cd7e1u); f_0062fbf0();
    /* 005cd7e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd7e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd7e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd7ec: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x5cd7f1u); f_005cd700();
    /* 005cd7f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd7f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd7f4: ret 0xc */ FN_RET(0x005cd7c0); r_esp += 16; return;
}

void f_005cd830(void) /* sub_5CD830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd830);
    /* 005cd830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd831: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd837: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd83a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd83b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd83e: call 0x5cd950 */ r_esp -= 4; W32(r_esp, 0x5cd843u); f_005cd950();
    /* 005cd843: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd845: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005cd847: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 005cd84a: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005cd84c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd84e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd84f: ret 4 */ FN_RET(0x005cd830); r_esp += 8; return;
}

void f_005cd890(void) /* sub_5CD890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd890);
    /* 005cd890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd891: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd89a: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 005cd8a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8a1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cd8a7: call 0x5f45a0 */ r_esp -= 4; W32(r_esp, 0x5cd8acu); f_005f45a0();
    /* 005cd8ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd8af: ret  */ FN_RET(0x005cd890); r_esp += 4; return;
}

void f_005cd950(void) /* sub_5CD950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd950);
    /* 005cd950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd951: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd953: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd956: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cd959: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd960: jmp 0x5cd96b */ goto L_005cd96b;
L_005cd962:; BB(0x005cd962);
    /* 005cd962: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd965: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd968: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cd96b:; BB(0x005cd96b);
    /* 005cd96b: cmp dword ptr [ebp - 4], 0xd8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd972: jge 0x5cd991 */ if ((fS==fO)) goto L_005cd991;
L_005cd974:; BB(0x005cd974);
    /* 005cd974: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd977: mov edx, dword ptr [ecx*8 + 0x75e180] */ r_edx = R32((u32)(r_ecx*8+0x75e180u));
    /* 005cd97e: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd981: jne 0x5cd98f */ if (!fZ) goto L_005cd98f;
L_005cd983:; BB(0x005cd983);
    /* 005cd983: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd986: mov eax, dword ptr [eax*8 + 0x75e184] */ r_eax = R32((u32)(r_eax*8+0x75e184u));
    /* 005cd98d: jmp 0x5cd993 */ goto L_005cd993;
L_005cd98f:; BB(0x005cd98f);
    /* 005cd98f: jmp 0x5cd962 */ goto L_005cd962;
L_005cd991:; BB(0x005cd991);
    /* 005cd991: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cd993:; BB(0x005cd993);
    /* 005cd993: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd996: ret 4 */ FN_RET(0x005cd950); r_esp += 8; return;
}

void f_005cdd10(void) /* sub_5CDD10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdd10);
    /* 005cdd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd11: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdd13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdd16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cdd19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdd1e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5cdd23u); f_005fb350();
    /* 005cdd23: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cdd26: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005cdd2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdd2c: je 0x5cdd40 */ if (fZ) goto L_005cdd40;
L_005cdd2e:; BB(0x005cdd2e);
    /* 005cdd2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cdd33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd36: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005cdd3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cdd3eu); call_ind(t); }
    /* 005cdd3e: jmp 0x5cdd50 */ goto L_005cdd50;
L_005cdd40:; BB(0x005cdd40);
    /* 005cdd40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cdd45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd48: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005cdd4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cdd50u); call_ind(t); }
L_005cdd50:; BB(0x005cdd50);
    /* 005cdd50: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdd52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdd53: ret 4 */ FN_RET(0x005cdd10); r_esp += 8; return;
}

void f_005cdd60(void) /* sub_5CDD60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdd60);
    /* 005cdd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd61: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdd63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdd66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cdd69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cdd6e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5cdd73u); f_005fb350();
    /* 005cdd73: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cdd76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdd79: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5cdd7eu); f_00600230();
    /* 005cdd7e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdd80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdd81: ret  */ FN_RET(0x005cdd60); r_esp += 4; return;
}

void f_005cde20(void) /* sub_5CDE20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cde20);
    /* 005cde20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cde21: mov ebp, esp */ r_ebp = r_esp;
    /* 005cde23: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cde29: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cde2e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cde30: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cde33: mov dword ptr [ebp - 0xe4], ecx */ W32((u32)(r_ebp+0xffffff1cu), r_ecx);
    /* 005cde39: mov dword ptr [ebp - 0x14], 0x6d2c88 */ W32((u32)(r_ebp+0xffffffecu), 0x6d2c88u);
    /* 005cde40: mov dword ptr [ebp - 0x10], 0x6d2c6c */ W32((u32)(r_ebp+0xfffffff0u), 0x6d2c6cu);
    /* 005cde47: mov dword ptr [ebp - 0xc], 0x6b3148 */ W32((u32)(r_ebp+0xfffffff4u), 0x6b3148u);
    /* 005cde4e: mov dword ptr [ebp - 8], 0x6d2c50 */ W32((u32)(r_ebp+0xfffffff8u), 0x6d2c50u);
    /* 005cde55: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 005cde5f: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 005cde69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cde6c: mov ecx, dword ptr [eax + 0x4cc] */ r_ecx = R32((u32)(r_eax+0x4ccu));
    /* 005cde72: mov edx, dword ptr [eax + 0x4d0] */ r_edx = R32((u32)(r_eax+0x4d0u));
    /* 005cde78: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 005cde7e: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 005cde84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cde87: mov ecx, dword ptr [eax + 0x4c4] */ r_ecx = R32((u32)(r_eax+0x4c4u));
    /* 005cde8d: mov edx, dword ptr [eax + 0x4c8] */ r_edx = R32((u32)(r_eax+0x4c8u));
    /* 005cde93: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cde96: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cde99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cde9b: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cdea1: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x5cdea6u); f_005f89d0();
    /* 005cdea6: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdead: jge 0x5cdebe */ if ((fS==fO)) goto L_005cdebe;
L_005cdeaf:; BB(0x005cdeaf);
    /* 005cdeaf: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005cdeb5: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cdeb8: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
L_005cdebe:; BB(0x005cdebe);
    /* 005cdebe: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdec5: jge 0x5cded6 */ if ((fS==fO)) goto L_005cded6;
L_005cdec7:; BB(0x005cdec7);
    /* 005cdec7: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005cdecd: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cded0: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
L_005cded6:; BB(0x005cded6);
    /* 005cded6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdeda: jge 0x5cdee5 */ if ((fS==fO)) goto L_005cdee5;
L_005cdedc:; BB(0x005cdedc);
    /* 005cdedc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cdedf: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cdee2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005cdee5:; BB(0x005cdee5);
    /* 005cdee5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdee9: jge 0x5cdef4 */ if ((fS==fO)) goto L_005cdef4;
L_005cdeeb:; BB(0x005cdeeb);
    /* 005cdeeb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cdeee: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cdef1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005cdef4:; BB(0x005cdef4);
    /* 005cdef4: lea ecx, [ebp - 0xc0] */ r_ecx = (u32)(r_ebp+0xffffff40u);
    /* 005cdefa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdefb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cdefe: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005cdf01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf02: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cdf08: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cdf0a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cdf10: mov eax, dword ptr [edx + 0x27c] */ r_eax = R32((u32)(r_edx+0x27cu));
    /* 005cdf16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cdf18u); call_ind(t); }
    /* 005cdf18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cdf1f: jmp 0x5cdf2a */ goto L_005cdf2a;
L_005cdf21:; BB(0x005cdf21);
    /* 005cdf21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdf24: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cdf27: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cdf2a:; BB(0x005cdf2a);
    /* 005cdf2a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cdf2e: jge 0x5ce154 */ if ((fS==fO)) goto L_005ce154;
L_005cdf34:; BB(0x005cdf34);
    /* 005cdf34: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf36: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf3a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdf3d: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cdf40: add edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cdf43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf44: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf46: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf48: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf4a: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdf4f: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005cdf53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf54: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cdf59u); f_00630f40();
    /* 005cdf59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdf5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdf60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf63: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cdf69: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cdf6eu); f_005fa5b0();
    /* 005cdf6e: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005cdf74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdf77: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005cdf7d: cmp dword ptr [ebp - 0xe8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005cdf84: ja 0x5ce11c */ if ((!fC&&!fZ)) goto L_005ce11c;
L_005cdf8a:; BB(0x005cdf8a);
    /* 005cdf8a: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005cdf90: jmp dword ptr [ecx*4 + 0x5ce238] */ { u32 t = R32((u32)(r_ecx*4+0x5ce238u)); switch (t) { case 0x5cdf97u: goto L_005cdf97; case 0x5cdfc7u: goto L_005cdfc7; case 0x5ce03au: goto L_005ce03a; case 0x5ce0f6u: goto L_005ce0f6; default: UNSUP(0x005cdf90, "jump table entry is not a known target"); } }
L_005cdf97:; BB(0x005cdf97);
    /* 005cdf97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf9d: lea edx, [ebp - 0xb8] */ r_edx = (u32)(r_ebp+0xffffff48u);
    /* 005cdfa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdfa4: lea eax, [ebp - 0xd4] */ r_eax = (u32)(r_ebp+0xffffff2cu);
    /* 005cdfaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdfab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cdfae: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5cdfb3u); f_005d5a90();
    /* 005cdfb3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005cdfb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdfb7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cdfb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdfba: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5cdfbfu); f_0064c8d0();
    /* 005cdfbf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdfc2: jmp 0x5ce11c */ goto L_005ce11c;
L_005cdfc7:; BB(0x005cdfc7);
    /* 005cdfc7: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cdfcd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5cdfd2u); f_005da7b0();
    /* 005cdfd2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cdfd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdfd7: je 0x5ce012 */ if (fZ) goto L_005ce012;
L_005cdfd9:; BB(0x005cdfd9);
    /* 005cdfd9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cdfdc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005cdfdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdfe0: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cdfe5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cdfe7: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cdfed: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005cdff3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cdff5u); call_ind(t); }
    /* 005cdff5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cdff8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdffa: je 0x5ce012 */ if (fZ) goto L_005ce012;
L_005cdffc:; BB(0x005cdffc);
    /* 005cdffc: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce001: lea edx, [ebp - 0xb8] */ r_edx = (u32)(r_ebp+0xffffff48u);
    /* 005ce007: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce008: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5ce00du); f_00686d8e();
    /* 005ce00d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce010: jmp 0x5ce035 */ goto L_005ce035;
L_005ce012:; BB(0x005ce012);
    /* 005ce012: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce014: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce016: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce018: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 005ce01e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce01f: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ce025: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce026: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005ce02c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce02d: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5ce032u); f_0064c8d0();
    /* 005ce032: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce035:; BB(0x005ce035);
    /* 005ce035: jmp 0x5ce11c */ goto L_005ce11c;
L_005ce03a:; BB(0x005ce03a);
    /* 005ce03a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ce03d: cmp dword ptr [eax + 0x4cc], 0 */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce044: jne 0x5ce078 */ if (!fZ) goto L_005ce078;
L_005ce046:; BB(0x005ce046);
    /* 005ce046: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ce049: cmp dword ptr [ecx + 0x4d0], 0 */ {  u32 a = R32((u32)(r_ecx+0x4d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce050: jne 0x5ce078 */ if (!fZ) goto L_005ce078;
L_005ce052:; BB(0x005ce052);
    /* 005ce052: push 0x6d2c34 */ { u32 v = 0x6d2c34u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce057: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce05cu); f_00630f40();
    /* 005ce05c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce05f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce060: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ce066: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ce068: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ce06e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005ce074: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ce076u); call_ind(t); }
    /* 005ce076: jmp 0x5ce0d1 */ goto L_005ce0d1;
L_005ce078:; BB(0x005ce078);
    /* 005ce078: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ce07b: call 0x5d58d0 */ r_esp -= 4; W32(r_esp, 0x5ce080u); f_005d58d0();
    /* 005ce080: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ce083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce085: je 0x5ce0ad */ if (fZ) goto L_005ce0ad;
L_005ce087:; BB(0x005ce087);
    /* 005ce087: push 0x6d2c18 */ { u32 v = 0x6d2c18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce08c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce091u); f_00630f40();
    /* 005ce091: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce095: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ce09b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce09d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ce0a3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ce0a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce0abu); call_ind(t); }
    /* 005ce0ab: jmp 0x5ce0d1 */ goto L_005ce0d1;
L_005ce0ad:; BB(0x005ce0ad);
    /* 005ce0ad: push 0x6d2bfc */ { u32 v = 0x6d2bfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0b2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce0b7u); f_00630f40();
    /* 005ce0b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce0ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0bb: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ce0c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce0c3: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ce0c9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ce0cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce0d1u); call_ind(t); }
L_005ce0d1:; BB(0x005ce0d1);
    /* 005ce0d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0d7: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 005ce0dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0de: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005ce0e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0e5: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005ce0eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0ec: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5ce0f1u); f_0064c8d0();
    /* 005ce0f1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce0f4: jmp 0x5ce11c */ goto L_005ce11c;
L_005ce0f6:; BB(0x005ce0f6);
    /* 005ce0f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0fc: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 005ce102: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce103: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ce106: mov eax, dword ptr [edx + 0x4c8] */ r_eax = R32((u32)(r_edx+0x4c8u));
    /* 005ce10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce10d: mov ecx, dword ptr [edx + 0x4c4] */ r_ecx = R32((u32)(r_edx+0x4c4u));
    /* 005ce113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce114: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5ce119u); f_0064c8d0();
    /* 005ce119: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce11c:; BB(0x005ce11c);
    /* 005ce11c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce11e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce120: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce122: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce125: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ce128: add edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ce12b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce12c: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce12e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce130: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce132: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce134: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 005ce13a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce13b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce13e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce141: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce144: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005ce14a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5ce14fu); f_005fa5b0();
    /* 005ce14f: jmp 0x5cdf21 */ goto L_005cdf21;
L_005ce154:; BB(0x005ce154);
    /* 005ce154: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce156: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce158: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce15a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce15c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce15e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce160: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce165: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce167: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce16c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce16e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce170: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005ce176: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5ce17bu); f_005fa5b0();
    /* 005ce17b: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005ce181: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ce184: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ce189u); f_0063aac0();
    /* 005ce189: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce18c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce18d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ce193: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x5ce198u); f_005ee710();
    /* 005ce198: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ce19b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ce1a0u); f_0063aac0();
    /* 005ce1a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ce1a2: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 005ce1a8: cmp dword ptr [ebp - 0xd8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce1af: je 0x5ce1d6 */ if (fZ) goto L_005ce1d6;
L_005ce1b1:; BB(0x005ce1b1);
    /* 005ce1b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ce1b4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ce1b9u); f_0063aac0();
    /* 005ce1b9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ce1bb: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005ce1c1: cmp dword ptr [ebp - 0xdc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce1c8: je 0x5ce1d6 */ if (fZ) goto L_005ce1d6;
L_005ce1ca:; BB(0x005ce1ca);
    /* 005ce1ca: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 005ce1d4: jmp 0x5ce1e0 */ goto L_005ce1e0;
L_005ce1d6:; BB(0x005ce1d6);
    /* 005ce1d6: mov dword ptr [ebp - 0xec], 1 */ W32((u32)(r_ebp+0xffffff14u), 0x1u);
L_005ce1e0:; BB(0x005ce1e0);
    /* 005ce1e0: movzx ecx, byte ptr [ebp - 0xec] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff14u));
    /* 005ce1e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce1e9: je 0x5ce228 */ if (fZ) goto L_005ce228;
L_005ce1eb:; BB(0x005ce1eb);
    /* 005ce1eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ce1ee: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5ce1f3u); f_005d52e0();
    /* 005ce1f3: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005ce1f6: mov byte ptr [ebp - 0xdd], dl */ W8((u32)(r_ebp+0xffffff23u), (u8)r_edx);
    /* 005ce1fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce1fe: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce203: movsx eax, byte ptr [ebp - 0xdd] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff23u));
    /* 005ce20a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce20b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce20d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce20f: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce214: push 0x41d */ { u32 v = 0x41du; r_esp -= 4; W32(r_esp, v); }
    /* 005ce219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce21d: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005ce223: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5ce228u); f_005f9ce0();
L_005ce228:; BB(0x005ce228);
    /* 005ce228: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ce22b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce22d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ce232u); f_00686d72();
    /* 005ce232: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce234: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce235: ret 4 */ FN_RET(0x005cde20); r_esp += 8; return;
}

