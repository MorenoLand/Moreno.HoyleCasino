#include "protos.h"

void f_00605540(void) /* sciSliderThumb::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605540);
    /* 00605540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605541: mov ebp, esp */ r_ebp = r_esp;
    /* 00605543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605547: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060554a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x60554fu); f_005f5bf0();
    /* 0060554f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605552: mov dword ptr [eax], 0x6d7964 */ W32((u32)(r_eax), 0x6d7964u);
    /* 00605558: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060555b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060555e: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 00605564: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605567: mov esp, ebp */ r_esp = r_ebp;
    /* 00605569: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060556a: ret 4 */ FN_RET(0x00605540); r_esp += 8; return;
}

void f_00605590(void) /* sciSliderThumb::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605590);
    /* 00605590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605591: mov ebp, esp */ r_ebp = r_esp;
    /* 00605593: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605596: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605599: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060559c: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 006055a2: call 0x6050d0 */ r_esp -= 4; W32(r_esp, 0x6055a7u); f_006050d0();
    /* 006055a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006055aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006055ac: je 0x6055ca */ if (fZ) goto L_006055ca;
L_006055ae:; BB(0x006055ae);
    /* 006055ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006055b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006055b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006055b5: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x6055bau); f_005f4b60();
    /* 006055ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006055bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006055bf: je 0x6055ca */ if (fZ) goto L_006055ca;
L_006055c1:; BB(0x006055c1);
    /* 006055c1: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 006055c8: jmp 0x6055d1 */ goto L_006055d1;
L_006055ca:; BB(0x006055ca);
    /* 006055ca: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_006055d1:; BB(0x006055d1);
    /* 006055d1: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 006055d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006055d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006055d7: ret 4 */ FN_RET(0x00605590); r_esp += 8; return;
}

void f_006055e0(void) /* sciSliderThumb::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006055e0);
    /* 006055e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006055e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006055e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006055e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006055e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006055ec: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 006055f2: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 006055f5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006055f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006055fb: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00605601: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00605604: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00605607: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060560a: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00605610: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00605613: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00605616: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605619: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0060561f: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00605622: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00605625: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605628: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060562a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060562d: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00605633: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605635u); call_ind(t); }
    /* 00605635: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00605638: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060563a: je 0x60575b */ if (fZ) goto L_0060575b;
L_00605640:; BB(0x00605640);
    /* 00605640: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605643: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00605649: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x60564eu); f_006050f0();
    /* 0060564e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00605651: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605653: je 0x6056b9 */ if (fZ) goto L_006056b9;
L_00605655:; BB(0x00605655);
    /* 00605655: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605658: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060565b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0060565e: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00605661: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00605664: jge 0x605679 */ if ((fS==fO)) goto L_00605679;
L_00605666:; BB(0x00605666);
    /* 00605666: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00605669: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060566a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060566d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060566f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605672: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00605675: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x605677u); call_ind(t); }
    /* 00605677: jmp 0x6056b7 */ goto L_006056b7;
L_00605679:; BB(0x00605679);
    /* 00605679: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060567c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060567f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00605682: sub edx, dword ptr [ecx + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00605685: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00605688: jle 0x60569d */ if ((fZ||fS!=fO)) goto L_0060569d;
L_0060568a:; BB(0x0060568a);
    /* 0060568a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060568d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060568e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605691: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00605693: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605696: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00605699: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60569bu); call_ind(t); }
    /* 0060569b: jmp 0x6056b7 */ goto L_006056b7;
L_0060569d:; BB(0x0060569d);
    /* 0060569d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006056a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056a3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006056a6: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006056a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006056aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006056af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056b2: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006056b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6056b7u); call_ind(t); }
L_006056b7:; BB(0x006056b7);
    /* 006056b7: jmp 0x60571b */ goto L_0060571b;
L_006056b9:; BB(0x006056b9);
    /* 006056b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006056bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056bf: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006056c2: sub eax, dword ptr [edx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006056c5: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006056c8: jge 0x6056dd */ if ((fS==fO)) goto L_006056dd;
L_006056ca:; BB(0x006056ca);
    /* 006056ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006056cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006056ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006056d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056d6: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 006056d9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6056dbu); call_ind(t); }
    /* 006056db: jmp 0x60571b */ goto L_0060571b;
L_006056dd:; BB(0x006056dd);
    /* 006056dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006056e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056e3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006056e6: sub edx, dword ptr [ecx + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006056e9: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006056ec: jle 0x605701 */ if ((fZ||fS!=fO)) goto L_00605701;
L_006056ee:; BB(0x006056ee);
    /* 006056ee: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006056f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006056f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006056f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006056fa: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 006056fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6056ffu); call_ind(t); }
    /* 006056ff: jmp 0x60571b */ goto L_0060571b;
L_00605701:; BB(0x00605701);
    /* 00605701: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605704: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605707: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0060570a: sub eax, dword ptr [edx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060570d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060570e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605711: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00605713: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605716: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00605719: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60571bu); call_ind(t); }
L_0060571b:; BB(0x0060571b);
    /* 0060571b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060571e: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00605724: call 0x6052f0 */ r_esp -= 4; W32(r_esp, 0x605729u); f_006052f0();
    /* 00605729: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060572c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605730: je 0x605754 */ if (fZ) goto L_00605754;
L_00605732:; BB(0x00605732);
    /* 00605732: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605735: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0060573b: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x605740u); f_005f5400();
    /* 00605740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605741: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605744: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00605747: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060574a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060574d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060574f: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00605752: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605754u); call_ind(t); }
L_00605754:; BB(0x00605754);
    /* 00605754: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605757: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0060575b:; BB(0x0060575b);
    /* 0060575b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060575d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060575e: ret 4 */ FN_RET(0x006055e0); r_esp += 8; return;
}

void f_00605770(void) /* sciSliderThumb::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605770);
    /* 00605770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605771: mov ebp, esp */ r_ebp = r_esp;
    /* 00605773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605777: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060577a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060577b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060577e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x605783u); f_005f4ed0();
    /* 00605783: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605786: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0060578a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060578d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060578f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605792: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00605795: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x605797u); call_ind(t); }
    /* 00605797: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060579a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0060579d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060579f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006057a2: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006057a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006057a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006057aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006057ad: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006057b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6057b2u); call_ind(t); }
    /* 006057b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006057b5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006057b8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006057ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006057bd: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006057c0: mov esp, ebp */ r_esp = r_ebp;
    /* 006057c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006057c3: ret 4 */ FN_RET(0x00605770); r_esp += 8; return;
}

void f_006057d0(void) /* sciSliderThumb::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006057d0);
    /* 006057d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006057d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006057d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006057d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006057d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006057da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006057db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006057de: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x6057e3u); f_005f4f50();
    /* 006057e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006057e6: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 006057ea: mov esp, ebp */ r_esp = r_ebp;
    /* 006057ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006057ed: ret 4 */ FN_RET(0x006057d0); r_esp += 8; return;
}

void f_006057f0(void) /* sciSliderThumb::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006057f0);
    /* 006057f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006057f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006057f3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006057f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006057f9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006057fc: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00605802: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 00605805: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00605808: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060580b: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00605811: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00605814: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00605817: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060581a: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00605820: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00605823: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00605826: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605829: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0060582f: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00605832: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00605835: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00605838: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060583b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060583e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00605841: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605844: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 0060584a: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x60584fu); f_006050f0();
    /* 0060584f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00605852: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605854: je 0x605874 */ if (fZ) goto L_00605874;
L_00605856:; BB(0x00605856);
    /* 00605856: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605859: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060585c: jge 0x605864 */ if ((fS==fO)) goto L_00605864;
L_0060585e:; BB(0x0060585e);
    /* 0060585e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605861: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00605864:; BB(0x00605864);
    /* 00605864: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00605867: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060586a: jle 0x605872 */ if ((fZ||fS!=fO)) goto L_00605872;
L_0060586c:; BB(0x0060586c);
    /* 0060586c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060586f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00605872:; BB(0x00605872);
    /* 00605872: jmp 0x605890 */ goto L_00605890;
L_00605874:; BB(0x00605874);
    /* 00605874: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00605877: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060587a: jge 0x605882 */ if ((fS==fO)) goto L_00605882;
L_0060587c:; BB(0x0060587c);
    /* 0060587c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060587f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00605882:; BB(0x00605882);
    /* 00605882: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00605885: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00605888: jle 0x605890 */ if ((fZ||fS!=fO)) goto L_00605890;
L_0060588a:; BB(0x0060588a);
    /* 0060588a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060588d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00605890:; BB(0x00605890);
    /* 00605890: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605894: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00605897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605898: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060589b: call 0x5eb260 */ r_esp -= 4; W32(r_esp, 0x6058a0u); f_005eb260();
    /* 006058a0: mov esp, ebp */ r_esp = r_ebp;
    /* 006058a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006058a3: ret 8 */ FN_RET(0x006057f0); r_esp += 12; return;
}

