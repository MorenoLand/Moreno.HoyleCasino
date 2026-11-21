#include "protos.h"

void f_00663040(void) /* sub_663040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663040);
    /* 00663040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663041: mov ebp, esp */ r_ebp = r_esp;
    /* 00663043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663047: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066304a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066304c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066304f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663052: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00663055: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00663058: mov esp, ebp */ r_esp = r_ebp;
    /* 0066305a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066305b: ret 4 */ FN_RET(0x00663040); r_esp += 8; return;
}

void f_006630e0(void) /* sub_6630E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006630e0);
    /* 006630e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006630e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006630e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006630e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006630e9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 006630ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006630ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006630f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006630f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006630f5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006630f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6630f9u); call_ind(t); }
    /* 006630f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006630fc: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 006630ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663102: add edx, dword ptr [eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00663105: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663108: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0066310b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066310e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00663111: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663114: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663117: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066311a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0066311d: cmp eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00663120: jle 0x663159 */ if ((fZ||fS!=fO)) goto L_00663159;
L_00663122:; BB(0x00663122);
    /* 00663122: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663125: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00663128: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066312b: jl 0x66313c */ if ((fS!=fO)) goto L_0066313c;
L_0066312d:; BB(0x0066312d);
    /* 0066312d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663130: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00663133: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00663136: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663139: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
L_0066313c:; BB(0x0066313c);
    /* 0066313c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066313f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00663142: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663145: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00663147: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0066314a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066314d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00663150: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663153: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00663156: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
L_00663159:; BB(0x00663159);
    /* 00663159: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066315c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066315d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663160: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00663162: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663165: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00663167: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x663169u); call_ind(t); }
    /* 00663169: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066316c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066316e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066316f: ret 4 */ FN_RET(0x006630e0); r_esp += 8; return;
}

void f_006635e0(void) /* sub_6635E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006635e0);
    /* 006635e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006635e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006635e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006635e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006635e9:; BB(0x006635e9);
    /* 006635e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006635ec: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006635ef: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6635f4u); f_0060c9a0();
    /* 006635f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006635f6: je 0x663645 */ if (fZ) goto L_00663645;
L_006635f8:; BB(0x006635f8);
    /* 006635f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006635fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006635fd: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663600: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x663605u); f_0060ca40();
    /* 00663605: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00663608: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066360b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066360c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066360f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663612: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x663617u); f_0060c890();
    /* 00663617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066361a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0066361d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663620: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00663623: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663627: je 0x66363c */ if (fZ) goto L_0066363c;
L_00663629:; BB(0x00663629);
    /* 00663629: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066362b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066362e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00663630: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00663633: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00663635: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x663637u); call_ind(t); }
    /* 00663637: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066363a: jmp 0x663643 */ goto L_00663643;
L_0066363c:; BB(0x0066363c);
    /* 0066363c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00663643:; BB(0x00663643);
    /* 00663643: jmp 0x6635e9 */ goto L_006635e9;
L_00663645:; BB(0x00663645);
    /* 00663645: mov esp, ebp */ r_esp = r_ebp;
    /* 00663647: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663648: ret  */ FN_RET(0x006635e0); r_esp += 4; return;
}

void f_00663650(void) /* sub_663650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663650);
    /* 00663650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663651: mov ebp, esp */ r_ebp = r_esp;
    /* 00663653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663655: push 0x6acb5a */ { u32 v = 0x6acb5au; r_esp -= 4; W32(r_esp, v); }
    /* 0066365a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663661: sub esp, 0x434 */ {  u32 a = r_esp; u32 b = 0x434u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663667: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066366c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066366e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00663671: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00663672: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00663673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663674: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00663677: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066367d: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 00663683: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00663685: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66368au); f_00686d82();
    /* 0066368a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066368d: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 00663693: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066369a: cmp dword ptr [ebp - 0x42c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006636a1: je 0x6636b6 */ if (fZ) goto L_006636b6;
L_006636a3:; BB(0x006636a3);
    /* 006636a3: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006636a9: call 0x6634a0 */ r_esp -= 4; W32(r_esp, 0x6636aeu); f_006634a0();
    /* 006636ae: mov dword ptr [ebp - 0x43c], eax */ W32((u32)(r_ebp+0xfffffbc4u), r_eax);
    /* 006636b4: jmp 0x6636c0 */ goto L_006636c0;
L_006636b6:; BB(0x006636b6);
    /* 006636b6: mov dword ptr [ebp - 0x43c], 0 */ W32((u32)(r_ebp+0xfffffbc4u), 0x0u);
L_006636c0:; BB(0x006636c0);
    /* 006636c0: mov eax, dword ptr [ebp - 0x43c] */ r_eax = R32((u32)(r_ebp+0xfffffbc4u));
    /* 006636c6: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
    /* 006636cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006636d3: mov ecx, dword ptr [ebp - 0x428] */ r_ecx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 006636d9: mov dword ptr [ebp - 0x420], ecx */ W32((u32)(r_ebp+0xfffffbe0u), r_ecx);
    /* 006636df: mov byte ptr [ebp - 0x414], 0 */ W8((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 006636e6: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006636eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006636ed: lea edx, [ebp - 0x413] */ r_edx = (u32)(r_ebp+0xfffffbedu);
    /* 006636f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006636f4: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6636f9u); f_00686fa2();
    /* 006636f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006636fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006636ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663700: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00663705: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066370a: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066370f: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 00663715: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663716: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66371cu); call_ind(t); }
    /* 0066371c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066371f: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00663724: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 0066372a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066372b: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x663730u); f_005ea9c0();
    /* 00663730: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663733: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 00663739: cmp dword ptr [ebp - 0x41c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663740: je 0x663796 */ if (fZ) goto L_00663796;
L_00663742:; BB(0x00663742);
    /* 00663742: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00663748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663749: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066374b: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066374d: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00663753: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663757: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66375du); call_ind(t); }
    /* 0066375d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663760: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00663766: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663767: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66376du); call_ind(t); }
    /* 0066376d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663770: mov dword ptr [ebp - 0x424], 0 */ W32((u32)(r_ebp+0xfffffbdcu), 0x0u);
    /* 0066377a: jmp 0x66378b */ goto L_0066378b;
L_0066377c:; BB(0x0066377c);
    /* 0066377c: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00663782: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663785: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
L_0066378b:; BB(0x0066378b);
    /* 0066378b: cmp dword ptr [ebp - 0x424], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00663792: jge 0x663796 */ if ((fS==fO)) goto L_00663796;
L_00663794:; BB(0x00663794);
    /* 00663794: jmp 0x66377c */ goto L_0066377c;
L_00663796:; BB(0x00663796);
    /* 00663796: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0066379c: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066379f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006637a0: call 0x665200 */ r_esp -= 4; W32(r_esp, 0x6637a5u); f_00665200();
    /* 006637a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006637a8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006637ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006637ad: jne 0x6637b6 */ if (!fZ) goto L_006637b6;
L_006637af:; BB(0x006637af);
    /* 006637af: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006637b1: jmp 0x663978 */ goto L_00663978;
L_006637b6:; BB(0x006637b6);
    /* 006637b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006637b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006637ba: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 006637c0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006637c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006637c4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6637c9u); f_00686d8e();
    /* 006637c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006637cc: mov dword ptr [ebp - 0x418], 0 */ W32((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 006637d6: jmp 0x6637e7 */ goto L_006637e7;
L_006637d8:; BB(0x006637d8);
    /* 006637d8: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 006637de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006637e1: mov dword ptr [ebp - 0x418], edx */ W32((u32)(r_ebp+0xfffffbe8u), r_edx);
L_006637e7:; BB(0x006637e7);
    /* 006637e7: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006637ed: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006637f0: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6637f5u); f_0060c9a0();
    /* 006637f5: cmp dword ptr [ebp - 0x418], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006637fb: jge 0x6638a1 */ if ((fS==fO)) goto L_006638a1;
L_00663801:; BB(0x00663801);
    /* 00663801: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663804: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663805: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066380b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066380c: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00663812: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x663817u); f_006639a0();
    /* 00663817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663818: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66381du); f_00686ec0();
    /* 0066381d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663822: jne 0x66389c */ if (!fZ) goto L_0066389c;
L_00663824:; BB(0x00663824);
    /* 00663824: mov esi, dword ptr [ebp - 0x420] */ r_esi = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0066382a: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066382d: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00663833: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663834: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066383a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066383d: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x663842u); f_0060ca40();
    /* 00663842: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663845: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0066384a: mov edi, eax */ r_edi = r_eax;
    /* 0066384c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0066384e: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00663854: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 0066385a: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 00663860: mov dword ptr [ebp - 0x430], ecx */ W32((u32)(r_ebp+0xfffffbd0u), r_ecx);
    /* 00663866: cmp dword ptr [ebp - 0x430], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066386d: je 0x66388b */ if (fZ) goto L_0066388b;
L_0066386f:; BB(0x0066386f);
    /* 0066386f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663871: mov edx, dword ptr [ebp - 0x430] */ r_edx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00663877: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00663879: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 0066387f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00663881: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x663883u); call_ind(t); }
    /* 00663883: mov dword ptr [ebp - 0x440], eax */ W32((u32)(r_ebp+0xfffffbc0u), r_eax);
    /* 00663889: jmp 0x663895 */ goto L_00663895;
L_0066388b:; BB(0x0066388b);
    /* 0066388b: mov dword ptr [ebp - 0x440], 0 */ W32((u32)(r_ebp+0xfffffbc0u), 0x0u);
L_00663895:; BB(0x00663895);
    /* 00663895: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00663897: jmp 0x663978 */ goto L_00663978;
L_0066389c:; BB(0x0066389c);
    /* 0066389c: jmp 0x6637d8 */ goto L_006637d8;
L_006638a1:; BB(0x006638a1);
    /* 006638a1: mov dword ptr [ebp - 0x418], 0 */ W32((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 006638ab: jmp 0x6638bc */ goto L_006638bc;
L_006638ad:; BB(0x006638ad);
    /* 006638ad: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 006638b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006638b6: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
L_006638bc:; BB(0x006638bc);
    /* 006638bc: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006638c2: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006638c5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6638cau); f_0060c9a0();
    /* 006638ca: cmp dword ptr [ebp - 0x418], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006638d0: jge 0x66394b */ if ((fS==fO)) goto L_0066394b;
L_006638d2:; BB(0x006638d2);
    /* 006638d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006638d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006638d6: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 006638dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006638dd: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006638e3: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x6638e8u); f_006639a0();
    /* 006638e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006638e9: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x6638efu); call_ind(t); }
    /* 006638ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006638f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006638f4: jle 0x663946 */ if ((fZ||fS!=fO)) goto L_00663946;
L_006638f6:; BB(0x006638f6);
    /* 006638f6: cmp dword ptr [ebp - 0x418], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006638fd: jne 0x663916 */ if (!fZ) goto L_00663916;
L_006638ff:; BB(0x006638ff);
    /* 006638ff: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00663905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663906: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066390c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066390f: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x663914u); f_0060c7d0();
    /* 00663914: jmp 0x663944 */ goto L_00663944;
L_00663916:; BB(0x00663916);
    /* 00663916: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0066391c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066391d: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00663923: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00663926: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663927: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066392d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663930: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x663935u); f_0060ca40();
    /* 00663935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663936: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066393c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066393f: call 0x60cb20 */ r_esp -= 4; W32(r_esp, 0x663944u); f_0060cb20();
L_00663944:; BB(0x00663944);
    /* 00663944: jmp 0x66394b */ goto L_0066394b;
L_00663946:; BB(0x00663946);
    /* 00663946: jmp 0x6638ad */ goto L_006638ad;
L_0066394b:; BB(0x0066394b);
    /* 0066394b: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00663951: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663954: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x663959u); f_0060c9a0();
    /* 00663959: cmp dword ptr [ebp - 0x418], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066395f: jne 0x663976 */ if (!fZ) goto L_00663976;
L_00663961:; BB(0x00663961);
    /* 00663961: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00663967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663968: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066396e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663971: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x663976u); f_0060c840();
L_00663976:; BB(0x00663976);
    /* 00663976: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00663978:; BB(0x00663978);
    /* 00663978: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066397b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663982: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00663984: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00663985: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663988: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066398a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66398fu); f_00686d72();
    /* 0066398f: mov esp, ebp */ r_esp = r_ebp;
    /* 00663991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663992: ret 4 */ FN_RET(0x00663650); r_esp += 8; return;
}

void f_006639a0(void) /* sub_6639A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006639a0);
    /* 006639a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006639a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006639a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006639a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006639a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006639ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006639ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006639b0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006639b3: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6639b8u); f_0060ca40();
    /* 006639b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006639bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006639be: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006639c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006639c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006639c4: ret 4 */ FN_RET(0x006639a0); r_esp += 8; return;
}

void f_006639d0(void) /* sub_6639D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006639d0);
    /* 006639d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006639d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006639d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006639d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006639d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006639e0: jmp 0x6639eb */ goto L_006639eb;
L_006639e2:; BB(0x006639e2);
    /* 006639e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006639e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006639e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006639eb:; BB(0x006639eb);
    /* 006639eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006639ee: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006639f1: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6639f6u); f_0060c9a0();
    /* 006639f6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006639f9: jge 0x663a25 */ if ((fS==fO)) goto L_00663a25;
L_006639fb:; BB(0x006639fb);
    /* 006639fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006639fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006639ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663a02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663a03: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00663a06: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663a09: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x663a0eu); f_0060ca40();
    /* 00663a0e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663a11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663a12: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x663a17u); f_00686ec0();
    /* 00663a17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663a1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663a1c: jne 0x663a23 */ if (!fZ) goto L_00663a23;
L_00663a1e:; BB(0x00663a1e);
    /* 00663a1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663a21: jmp 0x663a28 */ goto L_00663a28;
L_00663a23:; BB(0x00663a23);
    /* 00663a23: jmp 0x6639e2 */ goto L_006639e2;
L_00663a25:; BB(0x00663a25);
    /* 00663a25: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00663a28:; BB(0x00663a28);
    /* 00663a28: mov esp, ebp */ r_esp = r_ebp;
    /* 00663a2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663a2b: ret 4 */ FN_RET(0x006639d0); r_esp += 8; return;
}

void f_00663a30(void) /* sub_663A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663a30);
    /* 00663a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00663a33: sub esp, 0x538 */ {  u32 a = r_esp; u32 b = 0x538u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663a39: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00663a3e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00663a40: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00663a43: mov dword ptr [ebp - 0x538], ecx */ W32((u32)(r_ebp+0xfffffac8u), r_ecx);
    /* 00663a49: mov eax, dword ptr [ebp - 0x538] */ r_eax = R32((u32)(r_ebp+0xfffffac8u));
    /* 00663a4f: mov byte ptr [eax + 0x14], 0 */ W8((u32)(r_eax+0x14u), 0x0u);
    /* 00663a53: push 0x6df8bc */ { u32 v = 0x6df8bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00663a58: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00663a5d: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663a62: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00663a67: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00663a6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663a6e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x663a74u); call_ind(t); }
    /* 00663a74: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663a77: mov ecx, dword ptr [ebp - 0x538] */ r_ecx = R32((u32)(r_ebp+0xfffffac8u));
    /* 00663a7d: call 0x6635e0 */ r_esp -= 4; W32(r_esp, 0x663a82u); f_006635e0();
    /* 00663a82: lea edx, [ebp - 0x530] */ r_edx = (u32)(r_ebp+0xfffffad0u);
    /* 00663a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663a89: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00663a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663a90: call dword ptr [0x6b2308] */ { u32 t = R32((u32)(0x6b2308u)); r_esp -= 4; W32(r_esp, 0x663a96u); call_ind(t); }
    /* 00663a96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663a99: mov dword ptr [ebp - 0x534], eax */ W32((u32)(r_ebp+0xfffffaccu), r_eax);
    /* 00663a9f: cmp dword ptr [ebp - 0x534], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffaccu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663aa6: jne 0x663aaf */ if (!fZ) goto L_00663aaf;
L_00663aa8:; BB(0x00663aa8);
    /* 00663aa8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00663aaa: jmp 0x663b36 */ goto L_00663b36;
L_00663aaf:; BB(0x00663aaf);
    /* 00663aaf: cmp dword ptr [ebp - 0x510], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffaf0u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663ab6: jne 0x663adb */ if (!fZ) goto L_00663adb;
L_00663ab8:; BB(0x00663ab8);
    /* 00663ab8: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 00663abe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663abf: mov ecx, dword ptr [ebp - 0x538] */ r_ecx = R32((u32)(r_ebp+0xfffffac8u));
    /* 00663ac5: call 0x663650 */ r_esp -= 4; W32(r_esp, 0x663acau); f_00663650();
    /* 00663aca: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00663acd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663acf: jne 0x663adb */ if (!fZ) goto L_00663adb;
L_00663ad1:; BB(0x00663ad1);
    /* 00663ad1: mov eax, dword ptr [ebp - 0x538] */ r_eax = R32((u32)(r_ebp+0xfffffac8u));
    /* 00663ad7: mov byte ptr [eax + 0x14], 1 */ W8((u32)(r_eax+0x14u), 0x1u);
L_00663adb:; BB(0x00663adb);
    /* 00663adb: lea ecx, [ebp - 0x530] */ r_ecx = (u32)(r_ebp+0xfffffad0u);
    /* 00663ae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ae2: mov edx, dword ptr [ebp - 0x534] */ r_edx = R32((u32)(r_ebp+0xfffffaccu));
    /* 00663ae8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ae9: call dword ptr [0x6b2304] */ { u32 t = R32((u32)(0x6b2304u)); r_esp -= 4; W32(r_esp, 0x663aefu); call_ind(t); }
    /* 00663aef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663af2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663af4: jne 0x663b24 */ if (!fZ) goto L_00663b24;
L_00663af6:; BB(0x00663af6);
    /* 00663af6: cmp dword ptr [ebp - 0x510], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffaf0u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663afd: jne 0x663b22 */ if (!fZ) goto L_00663b22;
L_00663aff:; BB(0x00663aff);
    /* 00663aff: lea eax, [ebp - 0x50c] */ r_eax = (u32)(r_ebp+0xfffffaf4u);
    /* 00663b05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663b06: mov ecx, dword ptr [ebp - 0x538] */ r_ecx = R32((u32)(r_ebp+0xfffffac8u));
    /* 00663b0c: call 0x663650 */ r_esp -= 4; W32(r_esp, 0x663b11u); f_00663650();
    /* 00663b11: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00663b14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663b16: jne 0x663b22 */ if (!fZ) goto L_00663b22;
L_00663b18:; BB(0x00663b18);
    /* 00663b18: mov edx, dword ptr [ebp - 0x538] */ r_edx = R32((u32)(r_ebp+0xfffffac8u));
    /* 00663b1e: mov byte ptr [edx + 0x14], 1 */ W8((u32)(r_edx+0x14u), 0x1u);
L_00663b22:; BB(0x00663b22);
    /* 00663b22: jmp 0x663adb */ goto L_00663adb;
L_00663b24:; BB(0x00663b24);
    /* 00663b24: mov eax, dword ptr [ebp - 0x534] */ r_eax = R32((u32)(r_ebp+0xfffffaccu));
    /* 00663b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663b2b: call dword ptr [0x6b2300] */ { u32 t = R32((u32)(0x6b2300u)); r_esp -= 4; W32(r_esp, 0x663b31u); call_ind(t); }
    /* 00663b31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663b34: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00663b36:; BB(0x00663b36);
    /* 00663b36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663b39: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00663b3b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x663b40u); f_00686d72();
    /* 00663b40: mov esp, ebp */ r_esp = r_ebp;
    /* 00663b42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663b43: ret  */ FN_RET(0x00663a30); r_esp += 4; return;
}

void f_00663b50(void) /* sub_663B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663b50);
    /* 00663b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00663b53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663b56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00663b59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663b60: jmp 0x663b6b */ goto L_00663b6b;
L_00663b62:; BB(0x00663b62);
    /* 00663b62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663b65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663b68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00663b6b:; BB(0x00663b6b);
    /* 00663b6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00663b6e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663b71: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x663b76u); f_0060c9a0();
    /* 00663b76: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00663b79: jge 0x663ba4 */ if ((fS==fO)) goto L_00663ba4;
L_00663b7b:; BB(0x00663b7b);
    /* 00663b7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00663b7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663b7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663b82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663b83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00663b86: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663b89: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x663b8eu); f_0060ca40();
    /* 00663b8e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663b91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663b92: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x663b97u); f_00686ec0();
    /* 00663b97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663b9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663b9c: jne 0x663ba2 */ if (!fZ) goto L_00663ba2;
L_00663b9e:; BB(0x00663b9e);
    /* 00663b9e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00663ba0: jmp 0x663ba6 */ goto L_00663ba6;
L_00663ba2:; BB(0x00663ba2);
    /* 00663ba2: jmp 0x663b62 */ goto L_00663b62;
L_00663ba4:; BB(0x00663ba4);
    /* 00663ba4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00663ba6:; BB(0x00663ba6);
    /* 00663ba6: mov esp, ebp */ r_esp = r_ebp;
    /* 00663ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663ba9: ret 4 */ FN_RET(0x00663b50); r_esp += 8; return;
}

void f_00663bb0(void) /* sub_663BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663bb0);
    /* 00663bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00663bb3: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663bb9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00663bbe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00663bc0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00663bc3: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00663bca: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663bcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663bd1: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00663bd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663bd8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x663bddu); f_00686fa2();
    /* 00663bdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663be0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00663be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663be4: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00663be9: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663bee: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00663bf3: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00663bf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663bfa: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x663c00u); call_ind(t); }
    /* 00663c00: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663c03: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00663c08: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00663c0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663c0f: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x663c14u); f_005ea9c0();
    /* 00663c14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663c17: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00663c1d: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663c24: je 0x663c3a */ if (fZ) goto L_00663c3a;
L_00663c26:; BB(0x00663c26);
    /* 00663c26: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00663c2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663c2d: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x663c33u); call_ind(t); }
    /* 00663c33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663c36: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00663c38: jmp 0x663c3c */ goto L_00663c3c;
L_00663c3a:; BB(0x00663c3a);
    /* 00663c3a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00663c3c:; BB(0x00663c3c);
    /* 00663c3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663c3f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00663c41: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x663c46u); f_00686d72();
    /* 00663c46: mov esp, ebp */ r_esp = r_ebp;
    /* 00663c48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663c49: ret  */ FN_RET(0x00663bb0); r_esp += 4; return;
}

void f_00663c70(void) /* sub_663C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663c70);
    /* 00663c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00663c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663c74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00663c75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00663c76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663c79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663c7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663c80: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663c83: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x663c88u); f_0060ca40();
    /* 00663c88: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00663c8b: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 00663c90: mov esi, eax */ r_esi = r_eax;
    /* 00663c92: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00663c95: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00663c97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00663c98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00663c99: mov esp, ebp */ r_esp = r_ebp;
    /* 00663c9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663c9c: ret 8 */ FN_RET(0x00663c70); r_esp += 12; return;
}

void f_00663d10(void) /* sub_663D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663d10);
    /* 00663d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00663d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663d17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663d1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663d1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663d1e: call 0x6639d0 */ r_esp -= 4; W32(r_esp, 0x663d23u); f_006639d0();
    /* 00663d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663d24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663d27: call 0x663d40 */ r_esp -= 4; W32(r_esp, 0x663d2cu); f_00663d40();
    /* 00663d2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00663d2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663d2f: ret 4 */ FN_RET(0x00663d10); r_esp += 8; return;
}

void f_00663d40(void) /* sub_663D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663d40);
    /* 00663d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00663d43: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663d49: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00663d4e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00663d50: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00663d53: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 00663d59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663d5d: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00663d63: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663d66: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x663d6bu); f_0060ca40();
    /* 00663d6b: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00663d71: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00663d77: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663d7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663d7b: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00663d80: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663d85: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00663d8a: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 00663d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663d91: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x663d97u); call_ind(t); }
    /* 00663d97: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663d9a: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00663da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663da1: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00663da7: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663daa: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x663dafu); f_0060c890();
    /* 00663daf: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00663db5: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 00663dbb: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00663dc1: mov dword ptr [ebp - 0x11c], edx */ W32((u32)(r_ebp+0xfffffee4u), r_edx);
    /* 00663dc7: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663dce: je 0x663dec */ if (fZ) goto L_00663dec;
L_00663dd0:; BB(0x00663dd0);
    /* 00663dd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663dd2: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 00663dd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00663dda: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00663de0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00663de2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x663de4u); call_ind(t); }
    /* 00663de4: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00663dea: jmp 0x663df6 */ goto L_00663df6;
L_00663dec:; BB(0x00663dec);
    /* 00663dec: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_00663df6:; BB(0x00663df6);
    /* 00663df6: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 00663dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663dfd: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x663e03u); call_ind(t); }
    /* 00663e03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663e06: push 0x6df8cc */ { u32 v = 0x6df8ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00663e0b: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 00663e11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00663e12: call dword ptr [0x6b22fc] */ { u32 t = R32((u32)(0x6b22fcu)); r_esp -= 4; W32(r_esp, 0x663e18u); call_ind(t); }
    /* 00663e18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663e1b: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00663e21: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663e28: je 0x663e4e */ if (fZ) goto L_00663e4e;
L_00663e2a:; BB(0x00663e2a);
    /* 00663e2a: push 0x6df8c4 */ { u32 v = 0x6df8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00663e2f: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00663e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663e36: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x663e3bu); f_00686d8e();
    /* 00663e3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663e3e: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 00663e44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663e45: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x663e4bu); call_ind(t); }
    /* 00663e4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00663e4e:; BB(0x00663e4e);
    /* 00663e4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663e51: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00663e53: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x663e58u); f_00686d72();
    /* 00663e58: mov esp, ebp */ r_esp = r_ebp;
    /* 00663e5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663e5b: ret 4 */ FN_RET(0x00663d40); r_esp += 8; return;
}

