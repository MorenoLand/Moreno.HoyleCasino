#include "protos.h"

void f_004106f0(void) /* BlackjackDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004106f0);
    /* 004106f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004106f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004106f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004106f5: push 0x69dc35 */ { u32 v = 0x69dc35u; r_esp -= 4; W32(r_esp, v); }
    /* 004106fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410701: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410704: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00410709: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041070b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041070c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041070f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00410715: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00410718: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0041071b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041071c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041071f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x410724u); f_005fc0d0();
    /* 00410724: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041072b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041072e: mov dword ptr [ecx], 0x6b3af0 */ W32((u32)(r_ecx), 0x6b3af0u);
    /* 00410734: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410737: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041073a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0041073d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410740: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00410743: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00410746: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410749: mov byte ptr [eax + 0x25], 0 */ W8((u32)(r_eax+0x25u), 0x0u);
    /* 0041074d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410750: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00410753: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00410756: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041075a: ja 0x4107ce */ if ((!fC&&!fZ)) goto L_004107ce;
L_0041075c:; BB(0x0041075c);
    /* 0041075c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041075f: jmp dword ptr [eax*4 + 0x410890] */ { u32 t = R32((u32)(r_eax*4+0x410890u)); switch (t) { case 0x41077bu: goto L_0041077b; case 0x410790u: goto L_00410790; case 0x410766u: goto L_00410766; case 0x4107a4u: goto L_004107a4; case 0x4107b9u: goto L_004107b9; default: UNSUP(0x0041075f, "jump table entry is not a known target"); } }
L_00410766:; BB(0x00410766);
    /* 00410766: push 0x13a7 */ { u32 v = 0x13a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041076b: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410771: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00410774: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410779u); f_005eaf00();
    /* 00410779: jmp 0x4107e9 */ goto L_004107e9;
L_0041077b:; BB(0x0041077b);
    /* 0041077b: push 0x13a8 */ { u32 v = 0x13a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00410780: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00410786: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00410789: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x41078eu); f_005eaf00();
    /* 0041078e: jmp 0x4107e9 */ goto L_004107e9;
L_00410790:; BB(0x00410790);
    /* 00410790: push 0x13a9 */ { u32 v = 0x13a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00410795: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041079a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0041079d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4107a2u); f_005eaf00();
    /* 004107a2: jmp 0x4107e9 */ goto L_004107e9;
L_004107a4:; BB(0x004107a4);
    /* 004107a4: push 0x13aa */ { u32 v = 0x13aau; r_esp -= 4; W32(r_esp, v); }
    /* 004107a9: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004107af: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 004107b2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4107b7u); f_005eaf00();
    /* 004107b7: jmp 0x4107e9 */ goto L_004107e9;
L_004107b9:; BB(0x004107b9);
    /* 004107b9: push 0x13ab */ { u32 v = 0x13abu; r_esp -= 4; W32(r_esp, v); }
    /* 004107be: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 004107c4: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004107c7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4107ccu); f_005eaf00();
    /* 004107cc: jmp 0x4107e9 */ goto L_004107e9;
L_004107ce:; BB(0x004107ce);
    /* 004107ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004107d0: jne 0x4107e9 */ if (!fZ) goto L_004107e9;
L_004107d2:; BB(0x004107d2);
    /* 004107d2: push 0x498 */ { u32 v = 0x498u; r_esp -= 4; W32(r_esp, v); }
    /* 004107d7: push 0x6b38c8 */ { u32 v = 0x6b38c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004107dc: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004107e1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4107e6u); f_005e9f20();
    /* 004107e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004107e9:; BB(0x004107e9);
    /* 004107e9: push 0x13a6 */ { u32 v = 0x13a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004107ee: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 004107f4: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004107f7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4107fcu); f_005eaf00();
    /* 004107fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004107fe: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410803: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00410806: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0041080c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0041080f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410811: mov ecx, eax */ r_ecx = r_eax;
    /* 00410813: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00410819: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41081bu); call_ind(t); }
    /* 0041081b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041081d: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410823: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00410826: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041082b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0041082e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00410830: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00410836: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410838u); call_ind(t); }
    /* 00410838: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0041083d: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410843: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00410846: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041084b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0041084e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00410850: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00410853: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410855u); call_ind(t); }
    /* 00410855: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0041085a: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410860: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00410863: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410868: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0041086b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041086d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00410870: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410872u); call_ind(t); }
    /* 00410872: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00410879: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041087c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041087f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00410886: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00410887: mov esp, ebp */ r_esp = r_ebp;
    /* 00410889: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041088a: ret 0xc */ FN_RET(0x004106f0); r_esp += 16; return;
}

void f_004108b0(void) /* BlackjackDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004108b0);
    /* 004108b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004108b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004108b3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004108b6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004108bb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004108bd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004108c0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004108c3: mov dword ptr [ebp - 0x24], 0x18a8b */ W32((u32)(r_ebp+0xffffffdcu), 0x18a8bu);
    /* 004108ca: mov dword ptr [ebp - 0x20], 0x18a8c */ W32((u32)(r_ebp+0xffffffe0u), 0x18a8cu);
    /* 004108d1: mov dword ptr [ebp - 0x1c], 0x18a8d */ W32((u32)(r_ebp+0xffffffe4u), 0x18a8du);
    /* 004108d8: mov word ptr [ebp - 0x10], 6 */ W16((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 004108de: mov word ptr [ebp - 0xe], 6 */ W16((u32)(r_ebp+0xfffffff2u), 0x6u);
    /* 004108e4: mov word ptr [ebp - 0xc], 6 */ W16((u32)(r_ebp+0xfffffff4u), 0x6u);
    /* 004108ea: mov word ptr [ebp - 0xa], 5 */ W16((u32)(r_ebp+0xfffffff6u), 0x5u);
    /* 004108f0: mov word ptr [ebp - 8], 5 */ W16((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 004108f6: mov word ptr [ebp - 6], 7 */ W16((u32)(r_ebp+0xfffffffau), 0x7u);
    /* 004108fc: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410901: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00410904: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00410907: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0041090d: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00410910: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00410913: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410916: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x41091bu); f_005fc360();
    /* 0041091b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0041091e: cmp dword ptr [ebp - 0x2c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00410922: ja 0x410d17 */ if ((!fC&&!fZ)) goto L_00410d17;
L_00410928:; BB(0x00410928);
    /* 00410928: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041092b: jmp dword ptr [ecx*4 + 0x410d28] */ { u32 t = R32((u32)(r_ecx*4+0x410d28u)); switch (t) { case 0x410932u: goto L_00410932; case 0x4109bau: goto L_004109ba; case 0x410b34u: goto L_00410b34; case 0x410badu: goto L_00410bad; case 0x410cc8u: goto L_00410cc8; default: UNSUP(0x0041092b, "jump table entry is not a known target"); } }
L_00410932:; BB(0x00410932);
    /* 00410932: mov word ptr [0x79031c], 0 */ W16((u32)(0x79031cu), 0x0u);
    /* 0041093b: mov word ptr [0x790318], 0 */ W16((u32)(0x790318u), 0x0u);
    /* 00410944: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410947: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x41094cu); f_005eb240();
    /* 0041094c: mov word ptr [0x790314], ax */ W16((u32)(0x790314u), (u16)r_eax);
    /* 00410952: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410955: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x41095au); f_005eb240();
    /* 0041095a: mov word ptr [0x790310], ax */ W16((u32)(0x790310u), (u16)r_eax);
    /* 00410960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410962: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410965: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00410967: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041096a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00410970: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x410972u); call_ind(t); }
    /* 00410972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410974: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410977: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410979: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041097c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00410982: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410984u); call_ind(t); }
    /* 00410984: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041098a: call 0x418e70 */ r_esp -= 4; W32(r_esp, 0x41098fu); f_00418e70();
    /* 0041098f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410995: cmp dword ptr [ecx + 0x4c8], eax */ {  u32 a = R32((u32)(r_ecx+0x4c8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041099b: jne 0x4109a4 */ if (!fZ) goto L_004109a4;
L_0041099d:; BB(0x0041099d);
    /* 0041099d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109a0: mov byte ptr [edx + 0x25], 1 */ W8((u32)(r_edx+0x25u), 0x1u);
L_004109a4:; BB(0x004109a4);
    /* 004109a4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004109a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004109a8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004109ad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004109b0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004109b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4109b5u); call_ind(t); }
    /* 004109b5: jmp 0x410d17 */ goto L_00410d17;
L_004109ba:; BB(0x004109ba);
    /* 004109ba: mov cx, word ptr [0x79031c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x79031cu))) & 0xffffu);
    /* 004109c1: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004109c5: mov word ptr [0x79031c], cx */ W16((u32)(0x79031cu), (u16)r_ecx);
    /* 004109cc: movsx edx, word ptr [0x79031c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 004109d3: movsx eax, word ptr [0x790314] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790314u));
    /* 004109da: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004109dc: jg 0x4109f6 */ if ((!fZ&&fS==fO)) goto L_004109f6;
L_004109de:; BB(0x004109de);
    /* 004109de: movsx ecx, word ptr [0x79031c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 004109e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004109e6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004109e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004109eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004109ee: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004109f4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4109f6u); call_ind(t); }
L_004109f6:; BB(0x004109f6);
    /* 004109f6: movsx eax, word ptr [0x79031c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 004109fd: movsx ecx, word ptr [0x790310] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790310u));
    /* 00410a04: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410a06: jg 0x410a20 */ if ((!fZ&&fS==fO)) goto L_00410a20;
L_00410a08:; BB(0x00410a08);
    /* 00410a08: movsx edx, word ptr [0x79031c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410a0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410a10: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410a13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410a15: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410a18: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00410a1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410a20u); call_ind(t); }
L_00410a20:; BB(0x00410a20);
    /* 00410a20: movsx ecx, word ptr [0x79031c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410a27: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410a2a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00410a2d: movsx edx, word ptr [ebp + eax*2 - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff0u));
    /* 00410a32: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00410a35: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410a37: jne 0x410a7a */ if (!fZ) goto L_00410a7a;
L_00410a39:; BB(0x00410a39);
    /* 00410a39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410a3c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00410a42: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00410a45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410a46: fld1  */ FPUSH(1.0);
    /* 00410a48: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00410a4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a4d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a53: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410a55: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x410a5au); f_0062fbf0();
    /* 00410a5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410a5d: mov eax, dword ptr [ebp + eax*4 - 0x24] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffdcu));
    /* 00410a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410a62: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00410a68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410a6a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00410a70: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00410a76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410a78u); call_ind(t); }
    /* 00410a78: jmp 0x410ac0 */ goto L_00410ac0;
L_00410a7a:; BB(0x00410a7a);
    /* 00410a7a: movsx ecx, word ptr [0x79031c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410a81: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410a84: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00410a87: movsx edx, word ptr [ebp + eax*2 - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff0u));
    /* 00410a8c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410a8e: jne 0x410ac0 */ if (!fZ) goto L_00410ac0;
L_00410a90:; BB(0x00410a90);
    /* 00410a90: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410a92: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00410a97: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 00410a9d: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x410aa2u); f_006436c0();
    /* 00410aa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410aa3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410aa6: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00410aa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410aaa: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410ab0: call 0x419670 */ r_esp -= 4; W32(r_esp, 0x410ab5u); f_00419670();
    /* 00410ab5: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410abb: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x410ac0u); f_0040cc00();
L_00410ac0:; BB(0x00410ac0);
    /* 00410ac0: movsx eax, word ptr [0x79031c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410ac7: movsx ecx, word ptr [0x790314] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790314u));
    /* 00410ace: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410ad0: jl 0x410ae4 */ if ((fS!=fO)) goto L_00410ae4;
L_00410ad2:; BB(0x00410ad2);
    /* 00410ad2: movsx edx, word ptr [0x79031c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410ad9: movsx eax, word ptr [0x790310] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790310u));
    /* 00410ae0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410ae2: jge 0x410af5 */ if ((fS==fO)) goto L_00410af5;
L_00410ae4:; BB(0x00410ae4);
    /* 00410ae4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410ae6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ae9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410aeb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410aee: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410af1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410af3u); call_ind(t); }
    /* 00410af3: jmp 0x410b20 */ goto L_00410b20;
L_00410af5:; BB(0x00410af5);
    /* 00410af5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410af8: movzx edx, byte ptr [ecx + 0x25] */ r_edx = (u32)R8((u32)(r_ecx+0x25u));
    /* 00410afc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410afe: je 0x410b11 */ if (fZ) goto L_00410b11;
L_00410b00:; BB(0x00410b00);
    /* 00410b00: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b02: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410b07: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b0a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410b0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410b0fu); call_ind(t); }
    /* 00410b0f: jmp 0x410b20 */ goto L_00410b20;
L_00410b11:; BB(0x00410b11);
    /* 00410b11: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b13: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410b18: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b1b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410b1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410b20u); call_ind(t); }
L_00410b20:; BB(0x00410b20);
    /* 00410b20: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b22: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410b27: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b2a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00410b2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410b2fu); call_ind(t); }
    /* 00410b2f: jmp 0x410d17 */ goto L_00410d17;
L_00410b34:; BB(0x00410b34);
    /* 00410b34: mov word ptr [0x79031c], 0 */ W16((u32)(0x79031cu), 0x0u);
    /* 00410b3d: push 0x13af */ { u32 v = 0x13afu; r_esp -= 4; W32(r_esp, v); }
    /* 00410b42: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410b45: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410b4au); f_005eaf00();
    /* 00410b4a: push 0x13ae */ { u32 v = 0x13aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00410b4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410b52: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410b57u); f_005eaf00();
    /* 00410b57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410b5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410b5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410b61: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00410b67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410b69u); call_ind(t); }
    /* 00410b69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410b6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410b70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410b73: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00410b79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410b7bu); call_ind(t); }
    /* 00410b7b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410b7e: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410b83u); f_005eb240();
    /* 00410b83: mov word ptr [0x790314], ax */ W16((u32)(0x790314u), (u16)r_eax);
    /* 00410b89: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410b8c: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410b91u); f_005eb240();
    /* 00410b91: mov word ptr [0x790310], ax */ W16((u32)(0x790310u), (u16)r_eax);
    /* 00410b97: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b99: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410b9b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410b9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410ba0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ba3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00410ba6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410ba8u); call_ind(t); }
    /* 00410ba8: jmp 0x410d17 */ goto L_00410d17;
L_00410bad:; BB(0x00410bad);
    /* 00410bad: mov cx, word ptr [0x79031c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x79031cu))) & 0xffffu);
    /* 00410bb4: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00410bb8: mov word ptr [0x79031c], cx */ W16((u32)(0x79031cu), (u16)r_ecx);
    /* 00410bbf: movsx edx, word ptr [0x79031c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410bc6: movsx eax, word ptr [0x790314] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790314u));
    /* 00410bcd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410bcf: jg 0x410be9 */ if ((!fZ&&fS==fO)) goto L_00410be9;
L_00410bd1:; BB(0x00410bd1);
    /* 00410bd1: movsx ecx, word ptr [0x79031c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410bd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410bd9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410bdc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00410bde: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410be1: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00410be7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x410be9u); call_ind(t); }
L_00410be9:; BB(0x00410be9);
    /* 00410be9: movsx eax, word ptr [0x79031c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410bf0: movsx ecx, word ptr [0x790310] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790310u));
    /* 00410bf7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410bf9: jg 0x410c13 */ if ((!fZ&&fS==fO)) goto L_00410c13;
L_00410bfb:; BB(0x00410bfb);
    /* 00410bfb: movsx edx, word ptr [0x79031c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410c02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410c03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410c06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410c08: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410c0b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00410c11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410c13u); call_ind(t); }
L_00410c13:; BB(0x00410c13);
    /* 00410c13: movsx ecx, word ptr [0x79031c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410c1a: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410c1d: jne 0x410c3a */ if (!fZ) goto L_00410c3a;
L_00410c1f:; BB(0x00410c1f);
    /* 00410c1f: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00410c25: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00410c28: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410c2e: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 00410c31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410c33: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00410c36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410c38u); call_ind(t); }
    /* 00410c38: jmp 0x410c73 */ goto L_00410c73;
L_00410c3a:; BB(0x00410c3a);
    /* 00410c3a: movsx ecx, word ptr [0x79031c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410c41: movsx edx, word ptr [ebp - 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffau));
    /* 00410c45: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410c47: jne 0x410c73 */ if (!fZ) goto L_00410c73;
L_00410c49:; BB(0x00410c49);
    /* 00410c49: push 0x13b1 */ { u32 v = 0x13b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410c4e: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410c53: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00410c56: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410c5bu); f_005eaf00();
    /* 00410c5b: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410c61: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 00410c64: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410c69: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00410c6c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00410c6e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00410c71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410c73u); call_ind(t); }
L_00410c73:; BB(0x00410c73);
    /* 00410c73: movsx ecx, word ptr [0x79031c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410c7a: movsx edx, word ptr [0x790314] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790314u));
    /* 00410c81: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410c83: jl 0x410c97 */ if ((fS!=fO)) goto L_00410c97;
L_00410c85:; BB(0x00410c85);
    /* 00410c85: movsx eax, word ptr [0x79031c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79031cu));
    /* 00410c8c: movsx ecx, word ptr [0x790310] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790310u));
    /* 00410c93: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410c95: jge 0x410ca8 */ if ((fS==fO)) goto L_00410ca8;
L_00410c97:; BB(0x00410c97);
    /* 00410c97: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410c99: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410c9c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00410c9e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410ca1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00410ca4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x410ca6u); call_ind(t); }
    /* 00410ca6: jmp 0x410cb7 */ goto L_00410cb7;
L_00410ca8:; BB(0x00410ca8);
    /* 00410ca8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410caa: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410caf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cb2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410cb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410cb7u); call_ind(t); }
L_00410cb7:; BB(0x00410cb7);
    /* 00410cb7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410cb9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410cbe: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cc1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00410cc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410cc6u); call_ind(t); }
    /* 00410cc6: jmp 0x410d17 */ goto L_00410d17;
L_00410cc8:; BB(0x00410cc8);
    /* 00410cc8: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 00410ccd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410cd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410cd2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410cd5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00410cd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410cdau); call_ind(t); }
    /* 00410cda: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00410cdf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410ce2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410ce4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410ce7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00410cea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410cecu); call_ind(t); }
    /* 00410cec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cef: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410cf3: je 0x410d17 */ if (fZ) goto L_00410d17;
L_00410cf5:; BB(0x00410cf5);
    /* 00410cf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410cf7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410cfa: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00410cfd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d00: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00410d03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410d05: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00410d08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410d0au); call_ind(t); }
    /* 00410d0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410d0c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00410d0f: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00410d12: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x410d17u); f_005fc420();
L_00410d17:; BB(0x00410d17);
    /* 00410d17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410d1a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00410d1c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x410d21u); f_00686d72();
    /* 00410d21: mov esp, ebp */ r_esp = r_ebp;
    /* 00410d23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410d24: ret  */ FN_RET(0x004108b0); r_esp += 4; return;
}

