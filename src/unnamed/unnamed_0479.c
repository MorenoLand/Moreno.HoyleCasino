#include "protos.h"

void f_00479800(void) /* sub_479800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00479800);
    /* 00479800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00479801: mov ebp, esp */ r_ebp = r_esp;
    /* 00479803: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00479806: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00479809: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00479810: jmp 0x47981b */ goto L_0047981b;
L_00479812:; BB(0x00479812);
    /* 00479812: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00479815: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00479818: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047981b:; BB(0x0047981b);
    /* 0047981b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047981e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x479823u); f_0047f950();
    /* 00479823: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00479826: jge 0x479854 */ if ((fS==fO)) goto L_00479854;
L_00479828:; BB(0x00479828);
    /* 00479828: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047982b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047982c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047982f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x479834u); f_0047e390();
    /* 00479834: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00479837: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047983a: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x47983fu); f_004c61b0();
    /* 0047983f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00479842: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479844: je 0x479852 */ if (fZ) goto L_00479852;
L_00479846:; BB(0x00479846);
    /* 00479846: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00479849: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047984c: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
L_00479852:; BB(0x00479852);
    /* 00479852: jmp 0x479812 */ goto L_00479812;
L_00479854:; BB(0x00479854);
    /* 00479854: mov esp, ebp */ r_esp = r_ebp;
    /* 00479856: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00479857: ret 4 */ FN_RET(0x00479800); r_esp += 8; return;
}

void f_00479860(void) /* sub_479860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00479860);
    /* 00479860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00479861: mov ebp, esp */ r_ebp = r_esp;
    /* 00479863: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00479866: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00479869: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00479870: jmp 0x47987b */ goto L_0047987b;
L_00479872:; BB(0x00479872);
    /* 00479872: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00479875: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00479878: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047987b:; BB(0x0047987b);
    /* 0047987b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047987e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x479883u); f_0047f950();
    /* 00479883: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00479886: jge 0x4798ad */ if ((fS==fO)) goto L_004798ad;
L_00479888:; BB(0x00479888);
    /* 00479888: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047988b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047988c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047988f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x479894u); f_0047e390();
    /* 00479894: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00479897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047989a: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x47989fu); f_004c61b0();
    /* 0047989f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004798a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004798a4: je 0x4798ab */ if (fZ) goto L_004798ab;
L_004798a6:; BB(0x004798a6);
    /* 004798a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004798a9: jmp 0x4798af */ goto L_004798af;
L_004798ab:; BB(0x004798ab);
    /* 004798ab: jmp 0x479872 */ goto L_00479872;
L_004798ad:; BB(0x004798ad);
    /* 004798ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004798af:; BB(0x004798af);
    /* 004798af: mov esp, ebp */ r_esp = r_ebp;
    /* 004798b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004798b2: ret  */ FN_RET(0x00479860); r_esp += 4; return;
}

void f_00479930(void) /* sub_479930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00479930);
    /* 00479930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00479931: mov ebp, esp */ r_ebp = r_esp;
    /* 00479933: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00479936: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00479939: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047993c: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x479941u); f_004798c0();
    /* 00479941: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00479944: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00479947: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47994cu); f_004c7010();
    /* 0047994c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0047994e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479951: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00479954: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00479956: mov esp, ebp */ r_esp = r_ebp;
    /* 00479958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00479959: ret  */ FN_RET(0x00479930); r_esp += 4; return;
}

void f_00479960(void) /* sub_479960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00479960);
    /* 00479960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00479961: mov ebp, esp */ r_ebp = r_esp;
    /* 00479963: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00479966: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00479969: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0047996e: mov cl, byte ptr [eax + 0x39] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x39u))) & 0xffu);
    /* 00479971: mov byte ptr [ebp - 0xd], cl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_ecx);
    /* 00479974: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00479978: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047997a: je 0x479992 */ if (fZ) goto L_00479992;
L_0047997c:; BB(0x0047997c);
    /* 0047997c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00479982: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00479985: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x47998au); f_004f6840();
    /* 0047998a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047998c: je 0x479992 */ if (fZ) goto L_00479992;
L_0047998e:; BB(0x0047998e);
    /* 0047998e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00479990: jmp 0x4799dc */ goto L_004799dc;
L_00479992:; BB(0x00479992);
    /* 00479992: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00479999: jmp 0x4799a4 */ goto L_004799a4;
L_0047999b:; BB(0x0047999b);
    /* 0047999b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047999e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004799a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004799a4:; BB(0x004799a4);
    /* 004799a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004799a7: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4799acu); f_0047f950();
    /* 004799ac: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004799af: jge 0x4799da */ if ((fS==fO)) goto L_004799da;
L_004799b1:; BB(0x004799b1);
    /* 004799b1: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004799b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004799b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004799b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004799b9: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004799be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004799c0: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004799c6: mov eax, dword ptr [edx + 0x27c] */ r_eax = R32((u32)(r_edx+0x27cu));
    /* 004799cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4799ceu); call_ind(t); }
    /* 004799ce: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004799d2: je 0x4799d8 */ if (fZ) goto L_004799d8;
L_004799d4:; BB(0x004799d4);
    /* 004799d4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004799d6: jmp 0x4799dc */ goto L_004799dc;
L_004799d8:; BB(0x004799d8);
    /* 004799d8: jmp 0x47999b */ goto L_0047999b;
L_004799da:; BB(0x004799da);
    /* 004799da: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004799dc:; BB(0x004799dc);
    /* 004799dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004799de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004799df: ret  */ FN_RET(0x00479960); r_esp += 4; return;
}

void f_004799e0(void) /* sub_4799E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004799e0);
    /* 004799e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004799e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004799e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004799e5: push 0x69fe82 */ { u32 v = 0x69fe82u; r_esp -= 4; W32(r_esp, v); }
    /* 004799ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004799f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004799f1: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004799f7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004799fc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004799fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004799ff: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00479a02: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00479a08: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00479a0b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00479a0d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00479a13: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x479a18u); f_006375d0();
    /* 00479a18: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00479a1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479a1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479a1f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479a22: call 0x47aab0 */ r_esp -= 4; W32(r_esp, 0x479a27u); f_0047aab0();
    /* 00479a27: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00479a2d: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00479a32: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x479a37u); f_00686d82();
    /* 00479a37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479a3a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00479a3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00479a44: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479a48: je 0x479a57 */ if (fZ) goto L_00479a57;
L_00479a4a:; BB(0x00479a4a);
    /* 00479a4a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479a4d: call 0x465760 */ r_esp -= 4; W32(r_esp, 0x479a52u); f_00465760();
    /* 00479a52: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00479a55: jmp 0x479a5e */ goto L_00479a5e;
L_00479a57:; BB(0x00479a57);
    /* 00479a57: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00479a5e:; BB(0x00479a5e);
    /* 00479a5e: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00479a61: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00479a64: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479a6b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479a6e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00479a71: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00479a74: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479a77: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00479a7a: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x479a7fu); f_005f87d0();
    /* 00479a7f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479a82: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00479a85: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479a88: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00479a8b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479a8d: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00479a90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479a92u); call_ind(t); }
    /* 00479a92: mov word ptr [ebp - 0x14], 1 */ W16((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00479a98: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00479a9c: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00479a9f: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00479aa3: jle 0x479abc */ if ((fZ||fS!=fO)) goto L_00479abc;
L_00479aa5:; BB(0x00479aa5);
    /* 00479aa5: cmp dword ptr [ebp - 0x68], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00479aa9: jle 0x479aad */ if ((fZ||fS!=fO)) goto L_00479aad;
L_00479aab:; BB(0x00479aab);
    /* 00479aab: jmp 0x479abc */ goto L_00479abc;
L_00479aad:; BB(0x00479aad);
    /* 00479aad: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00479ab1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00479ab2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479ab5: call 0x47cb10 */ r_esp -= 4; W32(r_esp, 0x479abau); f_0047cb10();
    /* 00479aba: jmp 0x479ac6 */ goto L_00479ac6;
L_00479abc:; BB(0x00479abc);
    /* 00479abc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00479abe: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479ac1: call 0x47cb10 */ r_esp -= 4; W32(r_esp, 0x479ac6u); f_0047cb10();
L_00479ac6:; BB(0x00479ac6);
    /* 00479ac6: mov word ptr [ebp - 0x14], 1 */ W16((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00479acc: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00479ad0: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00479ad3: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00479ad6: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00479ad9: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00479adc: cmp dword ptr [ebp - 0x6c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00479ae0: ja 0x479b02 */ if ((!fC&&!fZ)) goto L_00479b02;
L_00479ae2:; BB(0x00479ae2);
    /* 00479ae2: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00479ae5: movzx eax, byte ptr [edx + 0x47a330] */ r_eax = (u32)R8((u32)(r_edx+0x47a330u));
    /* 00479aec: jmp dword ptr [eax*4 + 0x47a328] */ { u32 t = R32((u32)(r_eax*4+0x47a328u)); switch (t) { case 0x479af3u: goto L_00479af3; case 0x479b02u: goto L_00479b02; default: UNSUP(0x00479aec, "jump table entry is not a known target"); } }
L_00479af3:; BB(0x00479af3);
    /* 00479af3: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00479af7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00479af8: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479afb: call 0x47be00 */ r_esp -= 4; W32(r_esp, 0x479b00u); f_0047be00();
    /* 00479b00: jmp 0x479b0c */ goto L_00479b0c;
L_00479b02:; BB(0x00479b02);
    /* 00479b02: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00479b04: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479b07: call 0x47be00 */ r_esp -= 4; W32(r_esp, 0x479b0cu); f_0047be00();
L_00479b0c:; BB(0x00479b0c);
    /* 00479b0c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479b0f: mov dword ptr [0x791364], edx */ W32((u32)(0x791364u), r_edx);
    /* 00479b15: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00479b1b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x479b20u); f_0047f950();
    /* 00479b20: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479b23: mov dword ptr [ecx + 0x42c], eax */ W32((u32)(r_ecx+0x42cu), r_eax);
    /* 00479b29: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00479b2f: mov eax, dword ptr [edx + 0x4f18] */ r_eax = R32((u32)(r_edx+0x4f18u));
    /* 00479b35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00479b36: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479b39: call 0x47d810 */ r_esp -= 4; W32(r_esp, 0x479b3eu); f_0047d810();
    /* 00479b3e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479b41: mov dword ptr [ecx + 0x454], 1 */ W32((u32)(r_ecx+0x454u), 0x1u);
    /* 00479b4b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00479b4d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x479b52u); f_00686d82();
    /* 00479b52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479b55: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00479b58: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00479b5f: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479b63: je 0x479b72 */ if (fZ) goto L_00479b72;
L_00479b65:; BB(0x00479b65);
    /* 00479b65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00479b68: call 0x465190 */ r_esp -= 4; W32(r_esp, 0x479b6du); f_00465190();
    /* 00479b6d: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00479b70: jmp 0x479b79 */ goto L_00479b79;
L_00479b72:; BB(0x00479b72);
    /* 00479b72: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00479b79:; BB(0x00479b79);
    /* 00479b79: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00479b7c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00479b7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479b86: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479b89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479b8c: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00479b8f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00479b91: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x479b96u); f_00686d82();
    /* 00479b96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479b99: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00479b9c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00479ba3: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479ba7: je 0x479bb6 */ if (fZ) goto L_00479bb6;
L_00479ba9:; BB(0x00479ba9);
    /* 00479ba9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00479bac: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x479bb1u); f_0060c5f0();
    /* 00479bb1: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00479bb4: jmp 0x479bbd */ goto L_00479bbd;
L_00479bb6:; BB(0x00479bb6);
    /* 00479bb6: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00479bbd:; BB(0x00479bbd);
    /* 00479bbd: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00479bc0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00479bc3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479bca: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479bcd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00479bd0: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 00479bd3: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479bd8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x479bddu); f_00686d82();
    /* 00479bdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479be0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00479be3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00479bea: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479bee: je 0x479bfd */ if (fZ) goto L_00479bfd;
L_00479bf0:; BB(0x00479bf0);
    /* 00479bf0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00479bf3: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x479bf8u); f_005ec5a0();
    /* 00479bf8: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00479bfb: jmp 0x479c04 */ goto L_00479c04;
L_00479bfd:; BB(0x00479bfd);
    /* 00479bfd: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00479c04:; BB(0x00479c04);
    /* 00479c04: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00479c07: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00479c0a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479c11: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c14: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00479c17: mov dword ptr [eax + 0xe4], ecx */ W32((u32)(r_eax+0xe4u), r_ecx);
    /* 00479c1d: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00479c22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479c24: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c27: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00479c2d: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c30: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00479c36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00479c38: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00479c3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479c3du); call_ind(t); }
    /* 00479c3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00479c3e: mov ecx, esp */ r_ecx = r_esp;
    /* 00479c40: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00479c47: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00479c4a: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00479c4f: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00479c52: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00479c54: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00479c56: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c59: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00479c5f: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x479c64u); f_005ecd00();
    /* 00479c64: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00479c66: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c69: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 00479c6f: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x479c74u); f_005eccb0();
    /* 00479c74: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00479c79: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c7c: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00479c82: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x479c87u); f_005ecc60();
    /* 00479c87: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00479c89: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c8c: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00479c92: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x479c97u); f_005ef310();
    /* 00479c97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00479c99: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479c9c: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00479ca2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479ca5: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 00479cab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00479cad: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00479cb0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479cb2u); call_ind(t); }
    /* 00479cb2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479cb5: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00479cbb: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479cbe: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00479cc4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479cc6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00479cc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479ccbu); call_ind(t); }
    /* 00479ccb: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479cce: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00479cd4: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479cd7: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00479cdd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479cdf: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00479ce2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479ce4u); call_ind(t); }
    /* 00479ce4: push 0x6bb048 */ { u32 v = 0x6bb048u; r_esp -= 4; W32(r_esp, v); }
    /* 00479ce9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479cec: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00479cf2: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479cf5: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00479cfb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479cfd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00479d03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479d05u); call_ind(t); }
    /* 00479d05: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479d0a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x479d0fu); f_00686d82();
    /* 00479d0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479d12: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00479d15: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00479d1c: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479d20: je 0x479d2f */ if (fZ) goto L_00479d2f;
L_00479d22:; BB(0x00479d22);
    /* 00479d22: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00479d25: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x479d2au); f_005ec5a0();
    /* 00479d2a: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00479d2d: jmp 0x479d36 */ goto L_00479d36;
L_00479d2f:; BB(0x00479d2f);
    /* 00479d2f: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00479d36:; BB(0x00479d36);
    /* 00479d36: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00479d39: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00479d3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479d43: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479d46: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00479d49: mov dword ptr [edx + 0x498], eax */ W32((u32)(r_edx+0x498u), r_eax);
    /* 00479d4f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479d52: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00479d58: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479d5b: mov ecx, dword ptr [eax + 0xe4] */ r_ecx = R32((u32)(r_eax+0xe4u));
    /* 00479d61: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479d63: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00479d66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479d68u); call_ind(t); }
    /* 00479d68: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00479d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00479d6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479d6e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479d71: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 00479d77: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479d7a: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 00479d80: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479d82: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00479d85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479d87u); call_ind(t); }
    /* 00479d87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00479d88: mov ecx, esp */ r_ecx = r_esp;
    /* 00479d8a: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00479d91: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00479d94: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00479d99: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00479d9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00479d9e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00479da0: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479da3: mov ecx, dword ptr [ecx + 0x498] */ r_ecx = R32((u32)(r_ecx+0x498u));
    /* 00479da9: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x479daeu); f_005ecd00();
    /* 00479dae: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00479db0: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479db3: mov ecx, dword ptr [edx + 0x498] */ r_ecx = R32((u32)(r_edx+0x498u));
    /* 00479db9: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x479dbeu); f_005eccb0();
    /* 00479dbe: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00479dc3: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479dc6: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 00479dcc: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x479dd1u); f_005ecc60();
    /* 00479dd1: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00479dd3: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479dd6: mov ecx, dword ptr [ecx + 0x498] */ r_ecx = R32((u32)(r_ecx+0x498u));
    /* 00479ddc: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x479de1u); f_005ef310();
    /* 00479de1: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479de4: mov ecx, dword ptr [edx + 0xe4] */ r_ecx = R32((u32)(r_edx+0xe4u));
    /* 00479dea: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x479defu); f_005f53c0();
    /* 00479def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00479df0: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479df3: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 00479df9: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479dfc: mov eax, dword ptr [edx + 0x498] */ r_eax = R32((u32)(r_edx+0x498u));
    /* 00479e02: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479e04: mov ecx, eax */ r_ecx = r_eax;
    /* 00479e06: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00479e09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479e0bu); call_ind(t); }
    /* 00479e0b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479e0e: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 00479e14: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479e17: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 00479e1d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479e1f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00479e22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479e24u); call_ind(t); }
    /* 00479e24: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479e27: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 00479e2d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479e30: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 00479e36: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479e38: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00479e3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479e3du); call_ind(t); }
    /* 00479e3d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00479e42: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479e45: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 00479e4b: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479e4e: mov ecx, dword ptr [eax + 0x498] */ r_ecx = R32((u32)(r_eax+0x498u));
    /* 00479e54: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479e56: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00479e5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479e5eu); call_ind(t); }
    /* 00479e5e: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479e63: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x479e68u); f_00686d82();
    /* 00479e68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479e6b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00479e6e: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00479e75: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479e79: je 0x479e88 */ if (fZ) goto L_00479e88;
L_00479e7b:; BB(0x00479e7b);
    /* 00479e7b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00479e7e: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x479e83u); f_005ec5a0();
    /* 00479e83: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00479e86: jmp 0x479e8f */ goto L_00479e8f;
L_00479e88:; BB(0x00479e88);
    /* 00479e88: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00479e8f:; BB(0x00479e8f);
    /* 00479e8f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00479e92: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00479e95: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479e9c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479e9f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00479ea2: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00479ea8: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00479ead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479eaf: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479eb2: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00479eb8: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479ebb: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00479ec1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479ec3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00479ec6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479ec8u); call_ind(t); }
    /* 00479ec8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00479ec9: mov ecx, esp */ r_ecx = r_esp;
    /* 00479ecb: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00479ed2: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00479ed5: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00479eda: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00479edd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00479edf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00479ee1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479ee4: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00479eea: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x479eefu); f_005ecd00();
    /* 00479eef: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00479ef1: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479ef4: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 00479efa: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x479effu); f_005eccb0();
    /* 00479eff: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00479f04: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f07: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00479f0d: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x479f12u); f_005ecc60();
    /* 00479f12: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00479f14: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f17: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00479f1d: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x479f22u); f_005ef310();
    /* 00479f22: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 00479f27: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f2a: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00479f30: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f33: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00479f39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00479f3b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00479f3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479f40u); call_ind(t); }
    /* 00479f40: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f43: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00479f49: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f4c: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00479f52: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479f54: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00479f57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479f59u); call_ind(t); }
    /* 00479f59: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f5c: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00479f62: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f65: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00479f6b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479f6d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00479f70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479f72u); call_ind(t); }
    /* 00479f72: push 0x6bc6ac */ { u32 v = 0x6bc6acu; r_esp -= 4; W32(r_esp, v); }
    /* 00479f77: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x479f7cu); f_00630f40();
    /* 00479f7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479f7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00479f80: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f83: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00479f89: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479f8c: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00479f92: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479f94: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00479f9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479f9cu); call_ind(t); }
    /* 00479f9c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479fa1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x479fa6u); f_00686d82();
    /* 00479fa6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00479fa9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00479fac: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00479fb3: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479fb7: je 0x479fc9 */ if (fZ) goto L_00479fc9;
L_00479fb9:; BB(0x00479fb9);
    /* 00479fb9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00479fbc: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x479fc1u); f_005ec5a0();
    /* 00479fc1: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00479fc7: jmp 0x479fd3 */ goto L_00479fd3;
L_00479fc9:; BB(0x00479fc9);
    /* 00479fc9: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00479fd3:; BB(0x00479fd3);
    /* 00479fd3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00479fd9: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00479fdc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479fe3: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479fe6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00479fe9: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 00479fef: push 0x128 */ { u32 v = 0x128u; r_esp -= 4; W32(r_esp, v); }
    /* 00479ff4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00479ff6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00479ff9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 00479fff: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a002: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0047a008: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047a00a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0047a00d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a00fu); call_ind(t); }
    /* 0047a00f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a010: mov ecx, esp */ r_ecx = r_esp;
    /* 0047a012: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0047a019: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0047a01c: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0047a021: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0047a024: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a026: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a028: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a02b: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 0047a031: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x47a036u); f_005ecd00();
    /* 0047a036: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a038: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a03b: mov ecx, dword ptr [edx + 0xe0] */ r_ecx = R32((u32)(r_edx+0xe0u));
    /* 0047a041: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x47a046u); f_005eccb0();
    /* 0047a046: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a04b: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a04e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0047a054: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x47a059u); f_005ecc60();
    /* 0047a059: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a05b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a05e: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 0047a064: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x47a069u); f_005ef310();
    /* 0047a069: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a06e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a071: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0047a077: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a07a: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 0047a080: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047a082: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047a085: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a087u); call_ind(t); }
    /* 0047a087: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a08a: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0047a090: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a093: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0047a099: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047a09b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047a09e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a0a0u); call_ind(t); }
    /* 0047a0a0: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a0a3: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0047a0a9: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a0ac: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0047a0b2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047a0b4: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0047a0b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a0b9u); call_ind(t); }
    /* 0047a0b9: push 0x6bc6ac */ { u32 v = 0x6bc6acu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a0be: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47a0c3u); f_00630f40();
    /* 0047a0c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a0c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a0c7: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a0ca: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0047a0d0: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a0d3: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0047a0d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047a0db: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047a0e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a0e3u); call_ind(t); }
    /* 0047a0e3: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a0e8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47a0edu); f_00686d82();
    /* 0047a0ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a0f0: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0047a0f3: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0047a0fa: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a0fe: je 0x47a110 */ if (fZ) goto L_0047a110;
L_0047a100:; BB(0x0047a100);
    /* 0047a100: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a103: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x47a108u); f_005eaaf0();
    /* 0047a108: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0047a10e: jmp 0x47a11a */ goto L_0047a11a;
L_0047a110:; BB(0x0047a110);
    /* 0047a110: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0047a11a:; BB(0x0047a11a);
    /* 0047a11a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0047a120: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0047a123: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047a12a: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a12d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0047a130: mov dword ptr [edx + 0x49c], eax */ W32((u32)(r_edx+0x49cu), r_eax);
    /* 0047a136: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a13b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a13e: mov ecx, dword ptr [ecx + 0x49c] */ r_ecx = R32((u32)(r_ecx+0x49cu));
    /* 0047a144: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x47a149u); f_005eaf00();
    /* 0047a149: push 0x1ea */ { u32 v = 0x1eau; r_esp -= 4; W32(r_esp, v); }
    /* 0047a14e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a151: mov eax, dword ptr [edx + 0x49c] */ r_eax = R32((u32)(r_edx+0x49cu));
    /* 0047a157: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a15a: mov ecx, dword ptr [ecx + 0x49c] */ r_ecx = R32((u32)(r_ecx+0x49cu));
    /* 0047a160: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047a162: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047a165: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a167u); call_ind(t); }
    /* 0047a167: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a16a: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 0047a170: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a173: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0047a179: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047a17b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047a17e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a180u); call_ind(t); }
    /* 0047a180: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a183: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 0047a189: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a18c: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0047a192: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047a194: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0047a197: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a199u); call_ind(t); }
    /* 0047a199: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a19e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47a1a3u); f_00686d82();
    /* 0047a1a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a1a6: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0047a1a9: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0047a1b0: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a1b4: je 0x47a1c6 */ if (fZ) goto L_0047a1c6;
L_0047a1b6:; BB(0x0047a1b6);
    /* 0047a1b6: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0047a1b9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x47a1beu); f_005eaaf0();
    /* 0047a1be: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0047a1c4: jmp 0x47a1d0 */ goto L_0047a1d0;
L_0047a1c6:; BB(0x0047a1c6);
    /* 0047a1c6: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0047a1d0:; BB(0x0047a1d0);
    /* 0047a1d0: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0047a1d6: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0047a1d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047a1e0: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a1e3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0047a1e6: mov dword ptr [edx + 0x4a0], eax */ W32((u32)(r_edx+0x4a0u), r_eax);
    /* 0047a1ec: push 0x18a89 */ { u32 v = 0x18a89u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a1f1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a1f4: mov ecx, dword ptr [ecx + 0x4a0] */ r_ecx = R32((u32)(r_ecx+0x4a0u));
    /* 0047a1fa: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x47a1ffu); f_005eaf00();
    /* 0047a1ff: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a202: mov eax, dword ptr [edx + 0x4a0] */ r_eax = R32((u32)(r_edx+0x4a0u));
    /* 0047a208: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a20b: mov ecx, dword ptr [ecx + 0x4a0] */ r_ecx = R32((u32)(r_ecx+0x4a0u));
    /* 0047a211: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047a213: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047a216: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a218u); call_ind(t); }
    /* 0047a218: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a21b: mov ecx, dword ptr [ecx + 0xe4] */ r_ecx = R32((u32)(r_ecx+0xe4u));
    /* 0047a221: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x47a226u); f_005f53c0();
    /* 0047a226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a227: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a22a: mov eax, dword ptr [edx + 0x4a0] */ r_eax = R32((u32)(r_edx+0x4a0u));
    /* 0047a230: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a233: mov ecx, dword ptr [ecx + 0x4a0] */ r_ecx = R32((u32)(r_ecx+0x4a0u));
    /* 0047a239: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047a23b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047a23e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a240u); call_ind(t); }
    /* 0047a240: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a243: mov edx, dword ptr [ecx + 0x4a0] */ r_edx = R32((u32)(r_ecx+0x4a0u));
    /* 0047a249: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a24c: mov ecx, dword ptr [eax + 0x4a0] */ r_ecx = R32((u32)(r_eax+0x4a0u));
    /* 0047a252: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047a254: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0047a257: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47a259u); call_ind(t); }
    /* 0047a259: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047a25f: call 0x4fb770 */ r_esp -= 4; W32(r_esp, 0x47a264u); f_004fb770();
    /* 0047a264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a265: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047a26b: call 0x5f2cb0 */ r_esp -= 4; W32(r_esp, 0x47a270u); f_005f2cb0();
    /* 0047a270: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a273: mov byte ptr [ecx + 0x409], 0 */ W8((u32)(r_ecx+0x409u), 0x0u);
    /* 0047a27a: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a27d: mov byte ptr [edx + 0x40a], 0 */ W8((u32)(r_edx+0x40au), 0x0u);
    /* 0047a284: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a287: mov byte ptr [eax + 0x40b], 0 */ W8((u32)(r_eax+0x40bu), 0x0u);
    /* 0047a28e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a291: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
    /* 0047a29b: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a29e: mov byte ptr [edx + 0x104], 0 */ W8((u32)(r_edx+0x104u), 0x0u);
    /* 0047a2a5: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047a2ab: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x47a2b0u); f_005da7b0();
    /* 0047a2b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a2b1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a2b4: call 0x47a5c0 */ r_esp -= 4; W32(r_esp, 0x47a2b9u); f_0047a5c0();
    /* 0047a2b9: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047a2bf: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x47a2c4u); f_005da7b0();
    /* 0047a2c4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047a2c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a2c9: je 0x47a2f9 */ if (fZ) goto L_0047a2f9;
L_0047a2cb:; BB(0x0047a2cb);
    /* 0047a2cb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047a2d1: mov edx, dword ptr [ecx + 0x4efc] */ r_edx = R32((u32)(r_ecx+0x4efcu));
    /* 0047a2d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a2d8: call 0x5204a0 */ r_esp -= 4; W32(r_esp, 0x47a2ddu); f_005204a0();
    /* 0047a2dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a2e0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a2e3: jne 0x47a2ef */ if (!fZ) goto L_0047a2ef;
L_0047a2e5:; BB(0x0047a2e5);
    /* 0047a2e5: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a2e8: call 0x480970 */ r_esp -= 4; W32(r_esp, 0x47a2edu); f_00480970();
    /* 0047a2ed: jmp 0x47a2f7 */ goto L_0047a2f7;
L_0047a2ef:; BB(0x0047a2ef);
    /* 0047a2ef: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a2f2: call 0x480b70 */ r_esp -= 4; W32(r_esp, 0x47a2f7u); f_00480b70();
L_0047a2f7:; BB(0x0047a2f7);
    /* 0047a2f7: jmp 0x47a301 */ goto L_0047a301;
L_0047a2f9:; BB(0x0047a2f9);
    /* 0047a2f9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a2fc: call 0x47a830 */ r_esp -= 4; W32(r_esp, 0x47a301u); f_0047a830();
L_0047a301:; BB(0x0047a301);
    /* 0047a301: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a304: call 0x47a970 */ r_esp -= 4; W32(r_esp, 0x47a309u); f_0047a970();
    /* 0047a309: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a30c: mov dword ptr [eax + 0x410], 0 */ W32((u32)(r_eax+0x410u), 0x0u);
    /* 0047a316: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047a319: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047a320: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047a321: mov esp, ebp */ r_esp = r_ebp;
    /* 0047a323: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047a324: ret  */ FN_RET(0x004799e0); r_esp += 4; return;
}

