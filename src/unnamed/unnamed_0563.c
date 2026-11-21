#include "protos.h"

void f_00563030(void) /* sub_563030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563030);
    /* 00563030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563031: mov ebp, esp */ r_ebp = r_esp;
    /* 00563033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563037: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056303a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0056303d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056303e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563041: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00563043: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x563048u); f_005eaf00();
    /* 00563048: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056304d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563050: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00563053: call 0x565950 */ r_esp -= 4; W32(r_esp, 0x563058u); f_00565950();
    /* 00563058: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056305d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563060: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00563063: call 0x565950 */ r_esp -= 4; W32(r_esp, 0x563068u); f_00565950();
    /* 00563068: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056306b: call 0x562fb0 */ r_esp -= 4; W32(r_esp, 0x563070u); f_00562fb0();
    /* 00563070: mov esp, ebp */ r_esp = r_ebp;
    /* 00563072: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563073: ret  */ FN_RET(0x00563030); r_esp += 4; return;
}

void f_00563080(void) /* sub_563080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563080);
    /* 00563080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563081: mov ebp, esp */ r_ebp = r_esp;
    /* 00563083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056308a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0056308d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056308e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563091: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00563093: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x563098u); f_005eaf00();
    /* 00563098: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0056309a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056309d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005630a0: call 0x565950 */ r_esp -= 4; W32(r_esp, 0x5630a5u); f_00565950();
    /* 005630a5: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005630a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005630aa: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005630ad: call 0x565950 */ r_esp -= 4; W32(r_esp, 0x5630b2u); f_00565950();
    /* 005630b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005630b5: call 0x562fb0 */ r_esp -= 4; W32(r_esp, 0x5630bau); f_00562fb0();
    /* 005630ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005630bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005630bd: ret  */ FN_RET(0x00563080); r_esp += 4; return;
}

void f_00563710(void) /* sub_563710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563710);
    /* 00563710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563711: mov ebp, esp */ r_ebp = r_esp;
    /* 00563713: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563715: push 0x6a5a74 */ { u32 v = 0x6a5a74u; r_esp -= 4; W32(r_esp, v); }
    /* 0056371a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00563720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563721: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563724: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00563729: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056372b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056372c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056372f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00563735: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00563738: mov dword ptr [ebp - 0x14], 0xa0 */ W32((u32)(r_ebp+0xffffffecu), 0xa0u);
    /* 0056373f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00563744: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x563749u); f_00686d82();
    /* 00563749: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056374c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056374f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563756: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056375a: je 0x563769 */ if (fZ) goto L_00563769;
L_0056375c:; BB(0x0056375c);
    /* 0056375c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056375f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x563764u); f_005eaaf0();
    /* 00563764: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00563767: jmp 0x563770 */ goto L_00563770;
L_00563769:; BB(0x00563769);
    /* 00563769: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00563770:; BB(0x00563770);
    /* 00563770: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00563773: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00563776: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056377d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00563780: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563783: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00563786: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563788: push 0x708 */ { u32 v = 0x708u; r_esp -= 4; W32(r_esp, v); }
    /* 0056378d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056378f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00563791: push 0x312237 */ { u32 v = 0x312237u; r_esp -= 4; W32(r_esp, v); }
    /* 00563796: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00563799: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056379c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5637a1u); f_005eae80();
    /* 005637a1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005637a4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005637a7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005637aa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005637ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005637af: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005637b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5637b4u); call_ind(t); }
    /* 005637b4: add eax, 0x9a */ {  u32 a = r_eax; u32 b = 0x9au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005637b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005637ba: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005637bd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005637c0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005637c3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005637c6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005637c8: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005637cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5637cdu); call_ind(t); }
    /* 005637cd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005637d4: jmp 0x5637df */ goto L_005637df;
L_005637d6:; BB(0x005637d6);
    /* 005637d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005637d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005637dc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005637df:; BB(0x005637df);
    /* 005637df: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005637e3: jge 0x563884 */ if ((fS==fO)) goto L_00563884;
L_005637e9:; BB(0x005637e9);
    /* 005637e9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005637ee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5637f3u); f_00686d82();
    /* 005637f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005637f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005637f9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00563800: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563804: je 0x563813 */ if (fZ) goto L_00563813;
L_00563806:; BB(0x00563806);
    /* 00563806: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00563809: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x56380eu); f_005eaaf0();
    /* 0056380e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00563811: jmp 0x56381a */ goto L_0056381a;
L_00563813:; BB(0x00563813);
    /* 00563813: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0056381a:; BB(0x0056381a);
    /* 0056381a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056381d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00563820: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00563827: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056382a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056382d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00563830: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
    /* 00563834: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563836: push 0x709 */ { u32 v = 0x709u; r_esp -= 4; W32(r_esp, v); }
    /* 0056383b: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 00563840: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563843: mov ecx, dword ptr [eax*4 + 0x744034] */ r_ecx = R32((u32)(r_eax*4+0x744034u));
    /* 0056384a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056384b: push 0x312238 */ { u32 v = 0x312238u; r_esp -= 4; W32(r_esp, v); }
    /* 00563850: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563853: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00563856: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056385a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x56385fu); f_005eae80();
    /* 0056385f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00563864: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563867: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056386a: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056386e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563871: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00563874: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00563878: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056387a: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0056387d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56387fu); call_ind(t); }
    /* 0056387f: jmp 0x5637d6 */ goto L_005637d6;
L_00563884:; BB(0x00563884);
    /* 00563884: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00563886: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56388bu); f_00686d82();
    /* 0056388b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056388e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00563891: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00563898: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056389c: je 0x5638ab */ if (fZ) goto L_005638ab;
L_0056389e:; BB(0x0056389e);
    /* 0056389e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005638a1: call 0x5666e0 */ r_esp -= 4; W32(r_esp, 0x5638a6u); f_005666e0();
    /* 005638a6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005638a9: jmp 0x5638b2 */ goto L_005638b2;
L_005638ab:; BB(0x005638ab);
    /* 005638ab: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005638b2:; BB(0x005638b2);
    /* 005638b2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005638b5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005638b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005638bf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005638c2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005638c5: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 005638c8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005638cb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005638ce: call 0x5667d0 */ r_esp -= 4; W32(r_esp, 0x5638d3u); f_005667d0();
    /* 005638d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005638d5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005638d8: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005638db: call 0x566a60 */ r_esp -= 4; W32(r_esp, 0x5638e0u); f_00566a60();
    /* 005638e0: push 0x70a */ { u32 v = 0x70au; r_esp -= 4; W32(r_esp, v); }
    /* 005638e5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005638e8: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005638eb: call 0x566970 */ r_esp -= 4; W32(r_esp, 0x5638f0u); f_00566970();
    /* 005638f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005638f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005638fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005638fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005638fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005638fe: ret  */ FN_RET(0x00563710); r_esp += 4; return;
}

void f_00563900(void) /* sub_563900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563900);
    /* 00563900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563901: mov ebp, esp */ r_ebp = r_esp;
    /* 00563903: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563906: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00563909: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00563910: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 00563915: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0056391b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056391e: mov eax, dword ptr [ecx + edx*4 + 0x6bc] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x6bcu));
    /* 00563925: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00563928: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056392c: jne 0x56393b */ if (!fZ) goto L_0056393b;
L_0056392e:; BB(0x0056392e);
    /* 0056392e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563931: call 0x563ad0 */ r_esp -= 4; W32(r_esp, 0x563936u); f_00563ad0();
    /* 00563936: jmp 0x563a41 */ goto L_00563a41;
L_0056393b:; BB(0x0056393b);
    /* 0056393b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00563942: jmp 0x56394d */ goto L_0056394d;
L_00563944:; BB(0x00563944);
    /* 00563944: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563947: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056394a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0056394d:; BB(0x0056394d);
    /* 0056394d: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563951: jge 0x5639b2 */ if ((fS==fO)) goto L_005639b2;
L_00563953:; BB(0x00563953);
    /* 00563953: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00563959: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0056395c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056395f: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00563962: lea edx, [eax + ecx + 0xf6] */ r_edx = (u32)(r_eax+r_ecx+0xf6u);
    /* 00563969: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056396c: mov cx, word ptr [edx + eax*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 00563970: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
    /* 00563974: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00563978: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00563979: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056397e: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00563984: call 0x564d10 */ r_esp -= 4; W32(r_esp, 0x563989u); f_00564d10();
    /* 00563989: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056398c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056398f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563990: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563993: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563996: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056399a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056399d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005639a0: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005639a4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005639a6: mov ecx, edx */ r_ecx = r_edx;
    /* 005639a8: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005639ae: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5639b0u); call_ind(t); }
    /* 005639b0: jmp 0x563944 */ goto L_00563944;
L_005639b2:; BB(0x005639b2);
    /* 005639b2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005639b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005639b6: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005639bc: call 0x5604b0 */ r_esp -= 4; W32(r_esp, 0x5639c1u); f_005604b0();
    /* 005639c1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005639c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005639c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005639c8: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005639ce: call 0x5603b0 */ r_esp -= 4; W32(r_esp, 0x5639d3u); f_005603b0();
    /* 005639d3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005639d6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005639d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005639da: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005639dd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005639e0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005639e3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005639e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005639e8: mov ecx, eax */ r_ecx = r_eax;
    /* 005639ea: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005639f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5639f2u); call_ind(t); }
    /* 005639f2: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005639f6: jne 0x563a01 */ if (!fZ) goto L_00563a01;
L_005639f8:; BB(0x005639f8);
    /* 005639f8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005639fb: mov byte ptr [ecx + 0x20], 0 */ W8((u32)(r_ecx+0x20u), 0x0u);
    /* 005639ff: jmp 0x563a39 */ goto L_00563a39;
L_00563a01:; BB(0x00563a01);
    /* 00563a01: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563a04: mov byte ptr [edx + 0x20], 1 */ W8((u32)(r_edx+0x20u), 0x1u);
    /* 00563a08: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563a0c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563a0f: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00563a12: call 0x566b00 */ r_esp -= 4; W32(r_esp, 0x563a17u); f_00566b00();
    /* 00563a17: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 00563a1d: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00563a23: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00563a26: mov edx, dword ptr [eax + ecx*4 + 0x780] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x780u));
    /* 00563a2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00563a2e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563a31: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00563a34: call 0x566ae0 */ r_esp -= 4; W32(r_esp, 0x563a39u); f_00566ae0();
L_00563a39:; BB(0x00563a39);
    /* 00563a39: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563a3c: call 0x563a50 */ r_esp -= 4; W32(r_esp, 0x563a41u); f_00563a50();
L_00563a41:; BB(0x00563a41);
    /* 00563a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00563a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563a44: ret 4 */ FN_RET(0x00563900); r_esp += 8; return;
}

void f_00563a50(void) /* sub_563A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563a50);
    /* 00563a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00563a53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563a56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00563a59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563a5c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00563a5f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563a62: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00563a65: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00563a67: mov ecx, eax */ r_ecx = r_eax;
    /* 00563a69: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00563a6c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563a6eu); call_ind(t); }
    /* 00563a6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563a75: jmp 0x563a80 */ goto L_00563a80;
L_00563a77:; BB(0x00563a77);
    /* 00563a77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563a7a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563a7d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00563a80:; BB(0x00563a80);
    /* 00563a80: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563a84: jge 0x563aa5 */ if ((fS==fO)) goto L_00563aa5;
L_00563a86:; BB(0x00563a86);
    /* 00563a86: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563a89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563a8c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00563a90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563a93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563a96: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00563a9a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00563a9c: mov ecx, edx */ r_ecx = r_edx;
    /* 00563a9e: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00563aa1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x563aa3u); call_ind(t); }
    /* 00563aa3: jmp 0x563a77 */ goto L_00563a77;
L_00563aa5:; BB(0x00563aa5);
    /* 00563aa5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563aa8: movzx ecx, byte ptr [eax + 0x20] */ r_ecx = (u32)R8((u32)(r_eax+0x20u));
    /* 00563aac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563aae: je 0x563abd */ if (fZ) goto L_00563abd;
L_00563ab0:; BB(0x00563ab0);
    /* 00563ab0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563ab3: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00563ab6: call 0x5669c0 */ r_esp -= 4; W32(r_esp, 0x563abbu); f_005669c0();
    /* 00563abb: jmp 0x563ac8 */ goto L_00563ac8;
L_00563abd:; BB(0x00563abd);
    /* 00563abd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563ac0: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00563ac3: call 0x566a20 */ r_esp -= 4; W32(r_esp, 0x563ac8u); f_00566a20();
L_00563ac8:; BB(0x00563ac8);
    /* 00563ac8: mov esp, ebp */ r_esp = r_ebp;
    /* 00563aca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563acb: ret  */ FN_RET(0x00563a50); r_esp += 4; return;
}

void f_00563ad0(void) /* sub_563AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563ad0);
    /* 00563ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00563ad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563ad6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00563ad9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563adc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00563adf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563ae2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00563ae5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00563ae7: mov ecx, eax */ r_ecx = r_eax;
    /* 00563ae9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00563aec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563aeeu); call_ind(t); }
    /* 00563aee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563af5: jmp 0x563b00 */ goto L_00563b00;
L_00563af7:; BB(0x00563af7);
    /* 00563af7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563afa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563afd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00563b00:; BB(0x00563b00);
    /* 00563b00: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563b04: jge 0x563b25 */ if ((fS==fO)) goto L_00563b25;
L_00563b06:; BB(0x00563b06);
    /* 00563b06: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563b0c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00563b10: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b13: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563b16: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00563b1a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00563b1c: mov ecx, edx */ r_ecx = r_edx;
    /* 00563b1e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00563b21: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x563b23u); call_ind(t); }
    /* 00563b23: jmp 0x563af7 */ goto L_00563af7;
L_00563b25:; BB(0x00563b25);
    /* 00563b25: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563b28: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00563b2b: call 0x566a20 */ r_esp -= 4; W32(r_esp, 0x563b30u); f_00566a20();
    /* 00563b30: mov esp, ebp */ r_esp = r_ebp;
    /* 00563b32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563b33: ret  */ FN_RET(0x00563ad0); r_esp += 4; return;
}

void f_00563c20(void) /* sub_563C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563c20);
    /* 00563c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00563c23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563c26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00563c29: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00563c2d: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00563c33: call 0x568790 */ r_esp -= 4; W32(r_esp, 0x563c38u); f_00568790();
    /* 00563c38: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00563c3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563c3d: je 0x563c4d */ if (fZ) goto L_00563c4d;
L_00563c3f:; BB(0x00563c3f);
    /* 00563c3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563c42: movzx edx, byte ptr [ecx + 0x90c] */ r_edx = (u32)R8((u32)(r_ecx+0x90cu));
    /* 00563c49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563c4b: jne 0x563c60 */ if (!fZ) goto L_00563c60;
L_00563c4d:; BB(0x00563c4d);
    /* 00563c4d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563c50: mov ecx, dword ptr [eax + 0x560] */ r_ecx = R32((u32)(r_eax+0x560u));
    /* 00563c56: call 0x563ad0 */ r_esp -= 4; W32(r_esp, 0x563c5bu); f_00563ad0();
    /* 00563c5b: jmp 0x563d1e */ goto L_00563d1e;
L_00563c60:; BB(0x00563c60);
    /* 00563c60: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00563c67: jmp 0x563c72 */ goto L_00563c72;
L_00563c69:; BB(0x00563c69);
    /* 00563c69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563c6c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563c6f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00563c72:; BB(0x00563c72);
    /* 00563c72: cmp dword ptr [ebp - 8], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563c76: jge 0x563c9a */ if ((fS==fO)) goto L_00563c9a;
L_00563c78:; BB(0x00563c78);
    /* 00563c78: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563c7b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563c7e: cmp dword ptr [eax + edx*4 + 0x848], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x848u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563c86: je 0x563c98 */ if (fZ) goto L_00563c98;
L_00563c88:; BB(0x00563c88);
    /* 00563c88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563c8b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563c8e: mov dword ptr [ecx + 0x844], edx */ W32((u32)(r_ecx+0x844u), r_edx);
    /* 00563c94: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_00563c98:; BB(0x00563c98);
    /* 00563c98: jmp 0x563c69 */ goto L_00563c69;
L_00563c9a:; BB(0x00563c9a);
    /* 00563c9a: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00563c9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563ca0: jne 0x563caf */ if (!fZ) goto L_00563caf;
L_00563ca2:; BB(0x00563ca2);
    /* 00563ca2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563ca5: mov dword ptr [ecx + 0x844], 0xffffffff */ W32((u32)(r_ecx+0x844u), 0xffffffffu);
L_00563caf:; BB(0x00563caf);
    /* 00563caf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563cb2: cmp dword ptr [edx + 0x844], -1 */ {  u32 a = R32((u32)(r_edx+0x844u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563cb9: jne 0x563cd5 */ if (!fZ) goto L_00563cd5;
L_00563cbb:; BB(0x00563cbb);
    /* 00563cbb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563cbe: mov ecx, dword ptr [eax + 0x844] */ r_ecx = R32((u32)(r_eax+0x844u));
    /* 00563cc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563cc5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563cc8: mov ecx, dword ptr [edx + 0x560] */ r_ecx = R32((u32)(r_edx+0x560u));
    /* 00563cce: call 0x563900 */ r_esp -= 4; W32(r_esp, 0x563cd3u); f_00563900();
    /* 00563cd3: jmp 0x563d1e */ goto L_00563d1e;
L_00563cd5:; BB(0x00563cd5);
    /* 00563cd5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00563cd7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563cda: mov ecx, dword ptr [eax + 0x844] */ r_ecx = R32((u32)(r_eax+0x844u));
    /* 00563ce0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563ce1: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00563ce7: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00563cea: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x563cefu); f_0056b950();
    /* 00563cef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00563cf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563cf4: je 0x563d10 */ if (fZ) goto L_00563d10;
L_00563cf6:; BB(0x00563cf6);
    /* 00563cf6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563cf9: mov edx, dword ptr [ecx + 0x844] */ r_edx = R32((u32)(r_ecx+0x844u));
    /* 00563cff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00563d00: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563d03: mov ecx, dword ptr [eax + 0x560] */ r_ecx = R32((u32)(r_eax+0x560u));
    /* 00563d09: call 0x563900 */ r_esp -= 4; W32(r_esp, 0x563d0eu); f_00563900();
    /* 00563d0e: jmp 0x563d1e */ goto L_00563d1e;
L_00563d10:; BB(0x00563d10);
    /* 00563d10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563d13: mov ecx, dword ptr [ecx + 0x560] */ r_ecx = R32((u32)(r_ecx+0x560u));
    /* 00563d19: call 0x563ad0 */ r_esp -= 4; W32(r_esp, 0x563d1eu); f_00563ad0();
L_00563d1e:; BB(0x00563d1e);
    /* 00563d1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00563d20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563d21: ret  */ FN_RET(0x00563c20); r_esp += 4; return;
}

void f_00563fb0(void) /* sub_563FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563fb0);
    /* 00563fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00563fb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563fb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00563fb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563fc0: jmp 0x563fcb */ goto L_00563fcb;
L_00563fc2:; BB(0x00563fc2);
    /* 00563fc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563fc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00563fc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00563fcb:; BB(0x00563fcb);
    /* 00563fcb: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563fcf: jge 0x5640d3 */ if ((fS==fO)) goto L_005640d3;
L_00563fd5:; BB(0x00563fd5);
    /* 00563fd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00563fd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563fda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563fdb: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00563fe1: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00563fe4: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x563fe9u); f_0056b950();
    /* 00563fe9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563fec: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563fef: mov byte ptr [ecx + 0x564], al */ W8((u32)(r_ecx+0x564u), (u8)r_eax);
    /* 00563ff5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00563ffc: jmp 0x564007 */ goto L_00564007;
L_00563ffe:; BB(0x00563ffe);
    /* 00563ffe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564001: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00564004: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00564007:; BB(0x00564007);
    /* 00564007: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056400b: jge 0x5640ac */ if ((fS==fO)) goto L_005640ac;
L_00564011:; BB(0x00564011);
    /* 00564011: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564014: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564017: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056401a: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00564021: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564024: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564028: je 0x564062 */ if (fZ) goto L_00564062;
L_0056402a:; BB(0x0056402a);
    /* 0056402a: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0056402c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056402f: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564032: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564035: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 0056403c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056403f: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00564042: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564045: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564048: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056404b: lea eax, [ecx + eax + 0xc8] */ r_eax = (u32)(r_ecx+r_eax+0xc8u);
    /* 00564052: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00564055: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00564058: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056405a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00564060: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x564062u); call_ind(t); }
L_00564062:; BB(0x00564062);
    /* 00564062: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564065: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564068: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056406d: je 0x5640a7 */ if (fZ) goto L_005640a7;
L_0056406f:; BB(0x0056406f);
    /* 0056406f: push 0x31222a */ { u32 v = 0x31222au; r_esp -= 4; W32(r_esp, v); }
    /* 00564074: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564077: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056407a: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0056407e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x564083u); f_005eaf00();
    /* 00564083: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564086: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00564088: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564089: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056408c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056408f: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00564093: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564096: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564099: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0056409d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056409f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005640a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5640a7u); call_ind(t); }
L_005640a7:; BB(0x005640a7);
    /* 005640a7: jmp 0x563ffe */ goto L_00563ffe;
L_005640ac:; BB(0x005640ac);
    /* 005640ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005640af: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005640b2: cmp dword ptr [edx + ecx*4 + 0x49c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005640ba: je 0x5640ce */ if (fZ) goto L_005640ce;
L_005640bc:; BB(0x005640bc);
    /* 005640bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005640bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005640c2: mov ecx, dword ptr [ecx + eax*4 + 0x49c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x49cu));
    /* 005640c9: call 0x566310 */ r_esp -= 4; W32(r_esp, 0x5640ceu); f_00566310();
L_005640ce:; BB(0x005640ce);
    /* 005640ce: jmp 0x563fc2 */ goto L_00563fc2;
L_005640d3:; BB(0x005640d3);
    /* 005640d3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005640d6: mov byte ptr [edx + 0x90c], 0 */ W8((u32)(r_edx+0x90cu), 0x0u);
    /* 005640dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005640df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005640e0: ret  */ FN_RET(0x00563fb0); r_esp += 4; return;
}

