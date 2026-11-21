#include "protos.h"

void f_0052e750(void) /* SlotMachineArm::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052e750);
    /* 0052e750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052e751: mov ebp, esp */ r_ebp = r_esp;
    /* 0052e753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e755: push 0x6a4573 */ { u32 v = 0x6a4573u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e75a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052e760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e761: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e762: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052e767: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e76a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052e76d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052e773: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052e776: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e779: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52e77eu); f_005f5bf0();
    /* 0052e77e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052e785: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e788: mov dword ptr [eax], 0x6c3bd4 */ W32((u32)(r_eax), 0x6c3bd4u);
    /* 0052e78e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e790: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e793: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x52e798u); f_005eb700();
    /* 0052e798: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052e79f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e7a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052e7a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052e7ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e7ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e7af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e7b0: ret  */ FN_RET(0x0052e750); r_esp += 4; return;
}

void f_0052e7e0(void) /* SlotMachineArm::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052e7e0);
    /* 0052e7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052e7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052e7e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e7e5: push 0x6a4599 */ { u32 v = 0x6a4599u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e7ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052e7f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e7f1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052e7f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052e7f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e7fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e7fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052e7ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052e805: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052e808: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052e80b: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0052e80f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e811: je 0x52e818 */ if (fZ) goto L_0052e818;
L_0052e813:; BB(0x0052e813);
    /* 0052e813: jmp 0x52e9cd */ goto L_0052e9cd;
L_0052e818:; BB(0x0052e818);
    /* 0052e818: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052e81b: cmp dword ptr [edx + 0x18], 1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e81f: jne 0x52e899 */ if (!fZ) goto L_0052e899;
L_0052e821:; BB(0x0052e821);
    /* 0052e821: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052e824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e825: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052e828: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x52e82du); f_005f56a0();
    /* 0052e82d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052e830: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e832: je 0x52e899 */ if (fZ) goto L_0052e899;
L_0052e834:; BB(0x0052e834);
    /* 0052e834: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e83a: call 0x535e20 */ r_esp -= 4; W32(r_esp, 0x52e83fu); f_00535e20();
    /* 0052e83f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0052e842: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e844: je 0x52e899 */ if (fZ) goto L_0052e899;
L_0052e846:; BB(0x0052e846);
    /* 0052e846: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052e849: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0052e84d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e84f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52e854u); f_00686d82();
    /* 0052e854: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e857: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052e85a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052e861: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e865: je 0x52e874 */ if (fZ) goto L_0052e874;
L_0052e867:; BB(0x0052e867);
    /* 0052e867: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052e86a: call 0x530f30 */ r_esp -= 4; W32(r_esp, 0x52e86fu); f_00530f30();
    /* 0052e86f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052e872: jmp 0x52e87b */ goto L_0052e87b;
L_0052e874:; BB(0x0052e874);
    /* 0052e874: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0052e87b:; BB(0x0052e87b);
    /* 0052e87b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e87e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052e881: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052e888: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e88b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e88c: mov eax, dword ptr [0x793388] */ r_eax = R32((u32)(0x793388u));
    /* 0052e891: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052e894: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x52e899u); f_005fc420();
L_0052e899:; BB(0x0052e899);
    /* 0052e899: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052e89c: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e8a0: jne 0x52e9cd */ if (!fZ) goto L_0052e9cd;
L_0052e8a6:; BB(0x0052e8a6);
    /* 0052e8a6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052e8a9: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0052e8ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8ae: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x52e8b4u); call_ind(t); }
    /* 0052e8b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e8b7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052e8ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052e8bd: sub ecx, 0x62 */ {  u32 a = r_ecx; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e8c0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052e8c3: cmp dword ptr [ebp - 0x20], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052e8c7: ja 0x52e9cd */ if ((!fC&&!fZ)) goto L_0052e9cd;
L_0052e8cd:; BB(0x0052e8cd);
    /* 0052e8cd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052e8d0: movzx eax, byte ptr [edx + 0x52e9f8] */ r_eax = (u32)R8((u32)(r_edx+0x52e9f8u));
    /* 0052e8d7: jmp dword ptr [eax*4 + 0x52e9e0] */ { u32 t = R32((u32)(r_eax*4+0x52e9e0u)); switch (t) { case 0x52e971u: goto L_0052e971; case 0x52e8deu: goto L_0052e8de; case 0x52e9a0u: goto L_0052e9a0; case 0x52e942u: goto L_0052e942; case 0x52e910u: goto L_0052e910; case 0x52e9cdu: goto L_0052e9cd; default: UNSUP(0x0052e8d7, "jump table entry is not a known target"); } }
L_0052e8de:; BB(0x0052e8de);
    /* 0052e8de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8e0: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8e5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052e8eb: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x52e8f0u); f_005f2a60();
    /* 0052e8f0: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e8f2: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x52e8f7u); f_006026d0();
    /* 0052e8f7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052e8fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e8fc: je 0x52e90b */ if (fZ) goto L_0052e90b;
L_0052e8fe:; BB(0x0052e8fe);
    /* 0052e8fe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e900: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e906: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x52e90bu); f_00535ae0();
L_0052e90b:; BB(0x0052e90b);
    /* 0052e90b: jmp 0x52e9cd */ goto L_0052e9cd;
L_0052e910:; BB(0x0052e910);
    /* 0052e910: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e912: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e917: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052e91d: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x52e922u); f_005f2a60();
    /* 0052e922: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e924: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x52e929u); f_006026d0();
    /* 0052e929: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0052e92c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e92e: je 0x52e93d */ if (fZ) goto L_0052e93d;
L_0052e930:; BB(0x0052e930);
    /* 0052e930: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e932: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e938: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x52e93du); f_00535ae0();
L_0052e93d:; BB(0x0052e93d);
    /* 0052e93d: jmp 0x52e9cd */ goto L_0052e9cd;
L_0052e942:; BB(0x0052e942);
    /* 0052e942: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e944: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e949: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052e94f: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x52e954u); f_005f2a60();
    /* 0052e954: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e956: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x52e95bu); f_006026d0();
    /* 0052e95b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052e95e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e960: je 0x52e96f */ if (fZ) goto L_0052e96f;
L_0052e962:; BB(0x0052e962);
    /* 0052e962: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e964: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e96a: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x52e96fu); f_00535ae0();
L_0052e96f:; BB(0x0052e96f);
    /* 0052e96f: jmp 0x52e9cd */ goto L_0052e9cd;
L_0052e971:; BB(0x0052e971);
    /* 0052e971: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e973: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e978: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052e97e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x52e983u); f_005f2a60();
    /* 0052e983: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e985: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x52e98au); f_006026d0();
    /* 0052e98a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052e98d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e98f: je 0x52e99e */ if (fZ) goto L_0052e99e;
L_0052e991:; BB(0x0052e991);
    /* 0052e991: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e993: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e999: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x52e99eu); f_00535ae0();
L_0052e99e:; BB(0x0052e99e);
    /* 0052e99e: jmp 0x52e9cd */ goto L_0052e9cd;
L_0052e9a0:; BB(0x0052e9a0);
    /* 0052e9a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e9a2: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 0052e9a7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052e9ad: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x52e9b2u); f_005f2a60();
    /* 0052e9b2: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e9b4: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x52e9b9u); f_006026d0();
    /* 0052e9b9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0052e9bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e9be: je 0x52e9cd */ if (fZ) goto L_0052e9cd;
L_0052e9c0:; BB(0x0052e9c0);
    /* 0052e9c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e9c2: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e9c8: call 0x535ae0 */ r_esp -= 4; W32(r_esp, 0x52e9cdu); f_00535ae0();
L_0052e9cd:; BB(0x0052e9cd);
    /* 0052e9cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052e9d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052e9d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e9d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e9da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e9db: ret 4 */ FN_RET(0x0052e7e0); r_esp += 8; return;
}

