#include "protos.h"

void f_004842b0(void) /* sub_4842B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004842b0);
    /* 004842b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004842b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004842b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004842b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004842b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004842bc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4842c1u); f_0063aac0();
    /* 004842c1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004842c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004842c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004842c8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004842cc: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004842cf: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 004842d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004842d4: je 0x4842ea */ if (fZ) goto L_004842ea;
L_004842d6:; BB(0x004842d6);
    /* 004842d6: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 004842d8: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 004842dd: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 004842e2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4842e7u); f_005e9f20();
    /* 004842e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004842ea:; BB(0x004842ea);
    /* 004842ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004842ed: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4842f2u); f_0063aac0();
    /* 004842f2: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 004842f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004842f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004842f8: ret  */ FN_RET(0x004842b0); r_esp += 4; return;
}

void f_00484300(void) /* sub_484300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484300);
    /* 00484300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484301: mov ebp, esp */ r_ebp = r_esp;
    /* 00484303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00484307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048430a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00484310: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00484313: mov word ptr [ecx + 4], 0 */ W16((u32)(r_ecx+0x4u), 0x0u);
    /* 00484319: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048431c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048431e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048431f: ret  */ FN_RET(0x00484300); r_esp += 4; return;
}

void f_00484470(void) /* sub_484470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484470);
    /* 00484470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484471: mov ebp, esp */ r_ebp = r_esp;
    /* 00484473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00484477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048447a: call 0x4a1d40 */ r_esp -= 4; W32(r_esp, 0x48447fu); f_004a1d40();
    /* 0048447f: mov esp, ebp */ r_esp = r_ebp;
    /* 00484481: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484482: ret  */ FN_RET(0x00484470); r_esp += 4; return;
}

void f_004845f0(void) /* sub_4845F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004845f0);
    /* 004845f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004845f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004845f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004845f5: push 0x6a000d */ { u32 v = 0x6a000du; r_esp -= 4; W32(r_esp, v); }
    /* 004845fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00484600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484601: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00484609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048460b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048460c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0048460f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00484615: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00484618: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0048461f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00484622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484623: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00484626: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x48462bu); f_00484320();
    /* 0048462b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00484632: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00484639: jmp 0x484644 */ goto L_00484644;
L_0048463b:; BB(0x0048463b);
    /* 0048463b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048463e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484641: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00484644:; BB(0x00484644);
    /* 00484644: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484647: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0048464b: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048464e: jge 0x484663 */ if ((fS==fO)) goto L_00484663;
L_00484650:; BB(0x00484650);
    /* 00484650: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484653: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00484655: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484659: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0048465c: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x484661u); f_00484830();
    /* 00484661: jmp 0x48463b */ goto L_0048463b;
L_00484663:; BB(0x00484663);
    /* 00484663: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00484666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484667: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048466a: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x48466fu); f_00484320();
    /* 0048466f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00484672: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00484675: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00484678: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048467c: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0048467f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x484684u); f_00484470();
    /* 00484684: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00484687: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048468a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00484691: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00484692: mov esp, ebp */ r_esp = r_ebp;
    /* 00484694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484695: ret 8 */ FN_RET(0x004845f0); r_esp += 12; return;
}

void f_004846a0(void) /* sub_4846A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004846a0);
    /* 004846a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004846a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004846a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004846a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004846a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004846b0: jmp 0x4846bb */ goto L_004846bb;
L_004846b2:; BB(0x004846b2);
    /* 004846b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004846b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004846b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004846bb:; BB(0x004846bb);
    /* 004846bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004846be: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 004846c2: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004846c5: jge 0x4846da */ if ((fS==fO)) goto L_004846da;
L_004846c7:; BB(0x004846c7);
    /* 004846c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004846ca: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004846cc: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004846cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004846d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004846d3: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x4846d8u); f_00484830();
    /* 004846d8: jmp 0x4846b2 */ goto L_004846b2;
L_004846da:; BB(0x004846da);
    /* 004846da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004846dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004846df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004846e0: ret 4 */ FN_RET(0x004846a0); r_esp += 8; return;
}

void f_004846f0(void) /* sub_4846F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004846f0);
    /* 004846f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004846f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004846f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004846f5: push 0x6a0049 */ { u32 v = 0x6a0049u; r_esp -= 4; W32(r_esp, v); }
    /* 004846fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00484700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484701: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484704: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00484709: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048470b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048470c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0048470f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00484715: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00484718: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0048471f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484723: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00484726: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x48472bu); f_00484320();
    /* 0048472b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00484732: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00484739: jmp 0x484744 */ goto L_00484744;
L_0048473b:; BB(0x0048473b);
    /* 0048473b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048473e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484741: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00484744:; BB(0x00484744);
    /* 00484744: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00484747: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0048474b: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048474e: jge 0x48477b */ if ((fS==fO)) goto L_0048477b;
L_00484750:; BB(0x00484750);
    /* 00484750: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00484753: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00484755: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484759: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0048475c: call 0x484ba0 */ r_esp -= 4; W32(r_esp, 0x484761u); f_00484ba0();
    /* 00484761: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00484764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484766: je 0x484779 */ if (fZ) goto L_00484779;
L_00484768:; BB(0x00484768);
    /* 00484768: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048476b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048476d: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484770: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484771: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00484774: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x484779u); f_00484ad0();
L_00484779:; BB(0x00484779);
    /* 00484779: jmp 0x48473b */ goto L_0048473b;
L_0048477b:; BB(0x0048477b);
    /* 0048477b: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0048477e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048477f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00484782: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x484787u); f_00484320();
    /* 00484787: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048478a: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0048478d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00484790: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00484794: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00484797: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x48479cu); f_00484470();
    /* 0048479c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048479f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004847a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004847a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004847aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004847ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004847ad: ret 8 */ FN_RET(0x004846f0); r_esp += 12; return;
}

void f_004847b0(void) /* sub_4847B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004847b0);
    /* 004847b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004847b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004847b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004847b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004847b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004847c0: jmp 0x4847cb */ goto L_004847cb;
L_004847c2:; BB(0x004847c2);
    /* 004847c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004847c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004847c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004847cb:; BB(0x004847cb);
    /* 004847cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004847ce: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 004847d2: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004847d5: jge 0x484802 */ if ((fS==fO)) goto L_00484802;
L_004847d7:; BB(0x004847d7);
    /* 004847d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004847da: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004847dc: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004847df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004847e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004847e3: call 0x484ba0 */ r_esp -= 4; W32(r_esp, 0x4847e8u); f_00484ba0();
    /* 004847e8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004847eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004847ed: je 0x484800 */ if (fZ) goto L_00484800;
L_004847ef:; BB(0x004847ef);
    /* 004847ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004847f2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004847f4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004847f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004847f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004847fb: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x484800u); f_00484ad0();
L_00484800:; BB(0x00484800);
    /* 00484800: jmp 0x4847c2 */ goto L_004847c2;
L_00484802:; BB(0x00484802);
    /* 00484802: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00484805: mov esp, ebp */ r_esp = r_ebp;
    /* 00484807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484808: ret 4 */ FN_RET(0x004847b0); r_esp += 8; return;
}

void f_00484b80(void) /* sub_484B80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484b80);
    /* 00484b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00484b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00484b87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00484b8a: mov word ptr [eax + 4], 0 */ W16((u32)(r_eax+0x4u), 0x0u);
    /* 00484b90: mov esp, ebp */ r_esp = r_ebp;
    /* 00484b92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484b93: ret  */ FN_RET(0x00484b80); r_esp += 4; return;
}

void f_00484ba0(void) /* sub_484BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484ba0);
    /* 00484ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00484ba3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484ba6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00484ba9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00484bb0: jmp 0x484bbb */ goto L_00484bbb;
L_00484bb2:; BB(0x00484bb2);
    /* 00484bb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00484bb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00484bb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00484bbb:; BB(0x00484bbb);
    /* 00484bbb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00484bbe: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 00484bc2: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484bc5: jge 0x484be5 */ if ((fS==fO)) goto L_00484be5;
L_00484bc7:; BB(0x00484bc7);
    /* 00484bc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00484bca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484bcb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00484bce: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00484bd0: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484bd3: call 0x464500 */ r_esp -= 4; W32(r_esp, 0x484bd8u); f_00464500();
    /* 00484bd8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00484bdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484bdd: je 0x484be3 */ if (fZ) goto L_00484be3;
L_00484bdf:; BB(0x00484bdf);
    /* 00484bdf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00484be1: jmp 0x484be7 */ goto L_00484be7;
L_00484be3:; BB(0x00484be3);
    /* 00484be3: jmp 0x484bb2 */ goto L_00484bb2;
L_00484be5:; BB(0x00484be5);
    /* 00484be5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00484be7:; BB(0x00484be7);
    /* 00484be7: mov esp, ebp */ r_esp = r_ebp;
    /* 00484be9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484bea: ret 4 */ FN_RET(0x00484ba0); r_esp += 8; return;
}

void f_00484db0(void) /* sub_484DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484db0);
    /* 00484db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00484db3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484db6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00484db9: mov eax, dword ptr [0x7913c8] */ r_eax = R32((u32)(0x7913c8u));
    /* 00484dbe: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00484dc1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00484dc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00484dc6: mov edx, 2 */ r_edx = 0x2u;
    /* 00484dcb: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00484dcd: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00484dd0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00484dd2: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00484dd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484dd5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x484ddau); f_00686d82();
    /* 00484dda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484ddd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00484de0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484de3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00484de6: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00484dea: jmp 0x484df5 */ goto L_00484df5;
L_00484dec:; BB(0x00484dec);
    /* 00484dec: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00484def: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00484df2: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
L_00484df5:; BB(0x00484df5);
    /* 00484df5: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484df9: mov eax, dword ptr [0x7913c8] */ r_eax = R32((u32)(0x7913c8u));
    /* 00484dfe: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00484e01: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484e03: jg 0x484e14 */ if ((!fZ&&fS==fO)) goto L_00484e14;
L_00484e05:; BB(0x00484e05);
    /* 00484e05: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484e09: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484e0c: mov word ptr [eax + edx*2], 0 */ W16((u32)(r_eax+r_edx*2), 0x0u);
    /* 00484e12: jmp 0x484dec */ goto L_00484dec;
L_00484e14:; BB(0x00484e14);
    /* 00484e14: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00484e1a: jmp 0x484e28 */ goto L_00484e28;
L_00484e1c:; BB(0x00484e1c);
    /* 00484e1c: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00484e20: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00484e24: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_00484e28:; BB(0x00484e28);
    /* 00484e28: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00484e2c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00484e2f: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00484e33: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484e35: jge 0x484ed8 */ if ((fS==fO)) goto L_00484ed8;
L_00484e3b:; BB(0x00484e3b);
    /* 00484e3b: lea edx, [ebp - 0x22] */ r_edx = (u32)(r_ebp+0xffffffdeu);
    /* 00484e3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484e3f: lea eax, [ebp - 0x21] */ r_eax = (u32)(r_ebp+0xffffffdfu);
    /* 00484e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484e43: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00484e47: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00484e4a: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484e4c: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x484e51u); f_00464480();
    /* 00484e51: mov ecx, eax */ r_ecx = r_eax;
    /* 00484e53: call 0x463f80 */ r_esp -= 4; W32(r_esp, 0x484e58u); f_00463f80();
    /* 00484e58: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00484e5b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484e5e: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 00484e61: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00484e64: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00484e67: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00484e6a: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00484e6e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00484e71: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00484e74: mov eax, dword ptr [0x7907a4] */ r_eax = R32((u32)(0x7907a4u));
    /* 00484e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484e7a: lea ecx, [ebp - 0x23] */ r_ecx = (u32)(r_ebp+0xffffffddu);
    /* 00484e7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484e7e: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00484e82: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00484e85: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484e87: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x484e8cu); f_00464480();
    /* 00484e8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00484e8e: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x484e93u); f_00464050();
    /* 00484e93: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00484e96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484e98: je 0x484ed3 */ if (fZ) goto L_00484ed3;
L_00484e9a:; BB(0x00484e9a);
    /* 00484e9a: lea ecx, [ebp - 0x25] */ r_ecx = (u32)(r_ebp+0xffffffdbu);
    /* 00484e9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484e9e: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00484ea1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484ea2: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00484ea6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00484ea9: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484eab: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x484eb0u); f_00464480();
    /* 00484eb0: mov ecx, eax */ r_ecx = r_eax;
    /* 00484eb2: call 0x463fd0 */ r_esp -= 4; W32(r_esp, 0x484eb7u); f_00463fd0();
    /* 00484eb7: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00484eba: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484ebd: lea eax, [edx + ecx*2] */ r_eax = (u32)(r_edx+r_ecx*2);
    /* 00484ec0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00484ec3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484ec6: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00484ec9: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00484ecd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00484ed0: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
L_00484ed3:; BB(0x00484ed3);
    /* 00484ed3: jmp 0x484e1c */ goto L_00484e1c;
L_00484ed8:; BB(0x00484ed8);
    /* 00484ed8: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00484ede: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00484ee2: mov ecx, dword ptr [0x7913f0] */ r_ecx = R32((u32)(0x7913f0u));
    /* 00484ee8: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00484eea: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00484eed: jmp 0x484ef7 */ goto L_00484ef7;
L_00484eef:; BB(0x00484eef);
    /* 00484eef: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00484ef2: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00484ef4: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
L_00484ef7:; BB(0x00484ef7);
    /* 00484ef7: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484efb: mov edx, dword ptr [0x7913c8] */ r_edx = R32((u32)(0x7913c8u));
    /* 00484f01: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00484f04: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484f06: jg 0x484f3e */ if ((!fZ&&fS==fO)) goto L_00484f3e;
L_00484f08:; BB(0x00484f08);
    /* 00484f08: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484f0c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484f0f: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 00484f13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00484f15: jle 0x484f3c */ if ((fZ||fS!=fO)) goto L_00484f3c;
L_00484f17:; BB(0x00484f17);
    /* 00484f17: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00484f1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00484f1d: jle 0x484f36 */ if ((fZ||fS!=fO)) goto L_00484f36;
L_00484f1f:; BB(0x00484f1f);
    /* 00484f1f: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484f23: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00484f26: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00484f2a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00484f2c: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00484f30: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484f32: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_00484f36:; BB(0x00484f36);
    /* 00484f36: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00484f39: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
L_00484f3c:; BB(0x00484f3c);
    /* 00484f3c: jmp 0x484eef */ goto L_00484eef;
L_00484f3e:; BB(0x00484f3e);
    /* 00484f3e: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00484f44: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00484f48: mov eax, dword ptr [0x7913b4] */ r_eax = R32((u32)(0x7913b4u));
    /* 00484f4d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00484f4f: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00484f52: jmp 0x484f5d */ goto L_00484f5d;
L_00484f54:; BB(0x00484f54);
    /* 00484f54: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00484f57: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00484f5a: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
L_00484f5d:; BB(0x00484f5d);
    /* 00484f5d: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484f61: mov ecx, dword ptr [0x7913e0] */ r_ecx = R32((u32)(0x7913e0u));
    /* 00484f67: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00484f6a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484f6c: jg 0x484fa4 */ if ((!fZ&&fS==fO)) goto L_00484fa4;
L_00484f6e:; BB(0x00484f6e);
    /* 00484f6e: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484f72: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484f75: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00484f79: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00484f7b: jle 0x484fa2 */ if ((fZ||fS!=fO)) goto L_00484fa2;
L_00484f7d:; BB(0x00484f7d);
    /* 00484f7d: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00484f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00484f83: jle 0x484f9c */ if ((fZ||fS!=fO)) goto L_00484f9c;
L_00484f85:; BB(0x00484f85);
    /* 00484f85: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00484f89: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00484f8c: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00484f90: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00484f92: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00484f96: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00484f98: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00484f9c:; BB(0x00484f9c);
    /* 00484f9c: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00484f9f: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
L_00484fa2:; BB(0x00484fa2);
    /* 00484fa2: jmp 0x484f54 */ goto L_00484f54;
L_00484fa4:; BB(0x00484fa4);
    /* 00484fa4: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00484fa8: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00484fac: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484fae: jge 0x484fba */ if ((fS==fO)) goto L_00484fba;
L_00484fb0:; BB(0x00484fb0);
    /* 00484fb0: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00484fb4: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
    /* 00484fb8: jmp 0x484fc2 */ goto L_00484fc2;
L_00484fba:; BB(0x00484fba);
    /* 00484fba: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00484fbe: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_00484fc2:; BB(0x00484fc2);
    /* 00484fc2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00484fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484fc8: jne 0x484fe4 */ if (!fZ) goto L_00484fe4;
L_00484fca:; BB(0x00484fca);
    /* 00484fca: mov ecx, dword ptr [0x7913b4] */ r_ecx = R32((u32)(0x7913b4u));
    /* 00484fd0: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00484fd3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484fd6: movsx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 00484fda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00484fdc: jle 0x484fe4 */ if ((fZ||fS!=fO)) goto L_00484fe4;
L_00484fde:; BB(0x00484fde);
    /* 00484fde: mov word ptr [ebp - 0x10], 1 */ W16((u32)(r_ebp+0xfffffff0u), 0x1u);
L_00484fe4:; BB(0x00484fe4);
    /* 00484fe4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484fe7: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00484fea: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00484fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484fee: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x484ff3u); f_00686cae();
    /* 00484ff3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484ff6: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00484ffa: mov esp, ebp */ r_esp = r_ebp;
    /* 00484ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484ffd: ret  */ FN_RET(0x00484db0); r_esp += 4; return;
}

