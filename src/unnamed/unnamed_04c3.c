#include "protos.h"

void f_004c37f0(void) /* sub_4C37F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c37f0);
    /* 004c37f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c37f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c37f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c37f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c37f7: mov dword ptr [ebp - 0xc], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff4u), 0xffffff9du);
    /* 004c37fe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3804: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c3809u); f_0047e3b0();
    /* 004c3809: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c380c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c3813: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3816: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c381bu); f_004c6a70();
    /* 004c381b: mov esi, eax */ r_esi = r_eax;
    /* 004c381d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3823: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3828u); f_0047bc20();
    /* 004c3828: mov ecx, eax */ r_ecx = r_eax;
    /* 004c382a: mov eax, esi */ r_eax = r_esi;
    /* 004c382c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c382d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c382d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c382d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c382f: mov dword ptr [0x791e80], eax */ W32((u32)(0x791e80u), r_eax);
    /* 004c3834: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c383a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c383d: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c3842u); f_004f67d0();
    /* 004c3842: cmp dword ptr [0x791e80], eax */ {  u32 a = R32((u32)(0x791e80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3848: jg 0x4c38c7 */ if ((!fZ&&fS==fO)) goto L_004c38c7;
L_004c384a:; BB(0x004c384a);
    /* 004c384a: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c384e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3850: jne 0x4c38bb */ if (!fZ) goto L_004c38bb;
L_004c3852:; BB(0x004c3852);
    /* 004c3852: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3858: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c385du); f_0047bc20();
    /* 004c385d: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3864: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c3867: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c386a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c386b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c386e: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c3873u); f_004c6c10();
    /* 004c3873: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3876: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c387bu); f_004da300();
    /* 004c387b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c387d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c387f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3882: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3887u); f_004dc4d0();
    /* 004c3887: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3889: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c388c: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c3891u); f_004c7030();
    /* 004c3891: mov ecx, dword ptr [0x791e80] */ r_ecx = R32((u32)(0x791e80u));
    /* 004c3897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3898: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c389e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c38a1: call 0x4f5e80 */ r_esp -= 4; W32(r_esp, 0x4c38a6u); f_004f5e80();
    /* 004c38a6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c38a9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004c38ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c38af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c38b0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c38b6: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c38bbu); f_0047ec90();
L_004c38bb:; BB(0x004c38bb);
    /* 004c38bb: mov dword ptr [0x791e48], 6 */ W32((u32)(0x791e48u), 0x6u);
    /* 004c38c5: jmp 0x4c393d */ goto L_004c393d;
L_004c38c7:; BB(0x004c38c7);
    /* 004c38c7: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c38cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c38cd: jne 0x4c3933 */ if (!fZ) goto L_004c3933;
L_004c38cf:; BB(0x004c38cf);
    /* 004c38cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c38d5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c38d8: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c38ddu); f_004f67d0();
    /* 004c38dd: mov esi, eax */ r_esi = r_eax;
    /* 004c38df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c38e5: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c38eau); f_0047bc20();
    /* 004c38ea: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c38ed: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 004c38f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c38f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c38f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c38f7: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c38fcu); f_004c6c10();
    /* 004c38fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c38ff: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c3904u); f_004da300();
    /* 004c3904: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3906: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3908: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c390b: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3910u); f_004dc4d0();
    /* 004c3910: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3916: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3919: call 0x4f5cd0 */ r_esp -= 4; W32(r_esp, 0x4c391eu); f_004f5cd0();
    /* 004c391e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004c3921: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c3924: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3927: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3928: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c392e: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c3933u); f_0047ec90();
L_004c3933:; BB(0x004c3933);
    /* 004c3933: mov dword ptr [0x791e48], 3 */ W32((u32)(0x791e48u), 0x3u);
L_004c393d:; BB(0x004c393d);
    /* 004c393d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3940: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3941: mov esp, ebp */ r_esp = r_ebp;
    /* 004c3943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c3944: ret  */ FN_RET(0x004c37f0); r_esp += 4; return;
}

void f_004c3950(void) /* sub_4C3950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c3950);
    /* 004c3950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c3951: mov ebp, esp */ r_ebp = r_esp;
    /* 004c3953: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3956: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3957: mov dword ptr [ebp - 0x10], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff0u), 0xffffff9du);
    /* 004c395e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3964: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c3969u); f_0047e3b0();
    /* 004c3969: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c396c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004c3973: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004c3978: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 004c397f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3981: je 0x4c39da */ if (fZ) goto L_004c39da;
L_004c3983:; BB(0x004c3983);
    /* 004c3983: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3989: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x4c398eu); f_004798c0();
    /* 004c398e: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3991: jne 0x4c39da */ if (!fZ) goto L_004c39da;
L_004c3993:; BB(0x004c3993);
    /* 004c3993: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004c3999: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004c399f: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 004c39a5: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004c39ab: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004c39b1: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 004c39b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c39b9: mov ecx, edx */ r_ecx = r_edx;
    /* 004c39bb: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 004c39c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c39c3u); call_ind(t); }
    /* 004c39c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c39c4: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x4c39c9u); f_0064cab0();
    /* 004c39c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c39cc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004c39cf: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004c39d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c39d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c39d8: jmp 0x4c3a12 */ goto L_004c3a12;
L_004c39da:; BB(0x004c39da);
    /* 004c39da: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c39de: jle 0x4c39e8 */ if ((fZ||fS!=fO)) goto L_004c39e8;
L_004c39e0:; BB(0x004c39e0);
    /* 004c39e0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004c39e3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c39e6: jmp 0x4c3a12 */ goto L_004c3a12;
L_004c39e8:; BB(0x004c39e8);
    /* 004c39e8: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c39edu); f_004b7d90();
    /* 004c39ed: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c39f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c39f2: je 0x4c3a04 */ if (fZ) goto L_004c3a04;
L_004c39f4:; BB(0x004c39f4);
    /* 004c39f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c39fa: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x4c39ffu); f_0047bd20();
    /* 004c39ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c3a02: jmp 0x4c3a12 */ goto L_004c3a12;
L_004c3a04:; BB(0x004c3a04);
    /* 004c3a04: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3a0a: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c3a0fu); f_0047bce0();
    /* 004c3a0f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004c3a12:; BB(0x004c3a12);
    /* 004c3a12: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c3a17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3a1a: cmp ecx, dword ptr [eax + 0x410] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3a20: jge 0x4c3a33 */ if ((fS==fO)) goto L_004c3a33;
L_004c3a22:; BB(0x004c3a22);
    /* 004c3a22: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c3a28: mov eax, dword ptr [edx + 0x410] */ r_eax = R32((u32)(r_edx+0x410u));
    /* 004c3a2e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c3a31: jmp 0x4c3a52 */ goto L_004c3a52;
L_004c3a33:; BB(0x004c3a33);
    /* 004c3a33: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3a39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3a3c: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3a42: jle 0x4c3a52 */ if ((fZ||fS!=fO)) goto L_004c3a52;
L_004c3a44:; BB(0x004c3a44);
    /* 004c3a44: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c3a49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3a4c: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
L_004c3a52:; BB(0x004c3a52);
    /* 004c3a52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3a55: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c3a5au); f_004c6a70();
    /* 004c3a5a: mov esi, eax */ r_esi = r_eax;
    /* 004c3a5c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3a62: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3a67u); f_0047bc20();
    /* 004c3a67: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3a69: mov eax, esi */ r_eax = r_esi;
    /* 004c3a6b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c3a6c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c3a6c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c3a6c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c3a6e: mov dword ptr [0x791e80], eax */ W32((u32)(0x791e80u), r_eax);
    /* 004c3a73: mov edx, dword ptr [0x791e80] */ r_edx = R32((u32)(0x791e80u));
    /* 004c3a79: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3a7c: jg 0x4c3b02 */ if ((!fZ&&fS==fO)) goto L_004c3b02;
L_004c3a82:; BB(0x004c3a82);
    /* 004c3a82: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c3a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3a88: jne 0x4c3af3 */ if (!fZ) goto L_004c3af3;
L_004c3a8a:; BB(0x004c3a8a);
    /* 004c3a8a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3a90: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3a95u); f_0047bc20();
    /* 004c3a95: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3a9c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c3a9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3aa2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3aa3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3aa6: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c3aabu); f_004c6c10();
    /* 004c3aab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3aae: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c3ab3u); f_004da300();
    /* 004c3ab3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ab5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ab7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3aba: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3abfu); f_004dc4d0();
    /* 004c3abf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ac1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3ac4: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c3ac9u); f_004c7030();
    /* 004c3ac9: mov edx, dword ptr [0x791e80] */ r_edx = R32((u32)(0x791e80u));
    /* 004c3acf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ad0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3ad6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3ad9: call 0x4f5a80 */ r_esp -= 4; W32(r_esp, 0x4c3adeu); f_004f5a80();
    /* 004c3ade: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004c3ae1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c3ae4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3ae7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ae8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3aee: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c3af3u); f_0047ec90();
L_004c3af3:; BB(0x004c3af3);
    /* 004c3af3: mov dword ptr [0x791e48], 6 */ W32((u32)(0x791e48u), 0x6u);
    /* 004c3afd: jmp 0x4c3b9b */ goto L_004c3b9b;
L_004c3b02:; BB(0x004c3b02);
    /* 004c3b02: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c3b06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3b08: jne 0x4c3b91 */ if (!fZ) goto L_004c3b91;
L_004c3b0e:; BB(0x004c3b0e);
    /* 004c3b0e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3b14: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3b19u); f_0047bc20();
    /* 004c3b19: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3b1d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c3b20: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3b27: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c3b2cu); f_004c6c10();
    /* 004c3b2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3b2f: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c3b34u); f_004da300();
    /* 004c3b34: cmp dword ptr [0x791e74], 0 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3b3b: jne 0x4c3b5c */ if (!fZ) goto L_004c3b5c;
L_004c3b3d:; BB(0x004c3b3d);
    /* 004c3b3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3b43: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c3b48u); f_0047d6b0();
    /* 004c3b48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3b4a: jne 0x4c3b5c */ if (!fZ) goto L_004c3b5c;
L_004c3b4c:; BB(0x004c3b4c);
    /* 004c3b4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3b4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b50: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3b55: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3b5au); f_004dc4d0();
    /* 004c3b5a: jmp 0x4c3b6a */ goto L_004c3b6a;
L_004c3b5c:; BB(0x004c3b5c);
    /* 004c3b5c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3b5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c3b65: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3b6au); f_004dc4d0();
L_004c3b6a:; BB(0x004c3b6a);
    /* 004c3b6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b6e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3b74: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3b77: call 0x4f58c0 */ r_esp -= 4; W32(r_esp, 0x4c3b7cu); f_004f58c0();
    /* 004c3b7c: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c3b7f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004c3b82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3b85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b86: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3b8c: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c3b91u); f_0047ec90();
L_004c3b91:; BB(0x004c3b91);
    /* 004c3b91: mov dword ptr [0x791e48], 4 */ W32((u32)(0x791e48u), 0x4u);
L_004c3b9b:; BB(0x004c3b9b);
    /* 004c3b9b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c3b9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3b9f: mov esp, ebp */ r_esp = r_ebp;
    /* 004c3ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c3ba2: ret  */ FN_RET(0x004c3950); r_esp += 4; return;
}

void f_004c3bb0(void) /* sub_4C3BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c3bb0);
    /* 004c3bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c3bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c3bb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3bb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3bb7: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c3bbcu); f_004b7d90();
    /* 004c3bbc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c3bbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3bc1: je 0x4c3bd3 */ if (fZ) goto L_004c3bd3;
L_004c3bc3:; BB(0x004c3bc3);
    /* 004c3bc3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3bc9: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x4c3bceu); f_0047bd20();
    /* 004c3bce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c3bd1: jmp 0x4c3be1 */ goto L_004c3be1;
L_004c3bd3:; BB(0x004c3bd3);
    /* 004c3bd3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3bd9: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c3bdeu); f_0047bce0();
    /* 004c3bde: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004c3be1:; BB(0x004c3be1);
    /* 004c3be1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3be7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c3becu); f_0047e3b0();
    /* 004c3bec: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3bee: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c3bf3u); f_004c6a70();
    /* 004c3bf3: mov esi, eax */ r_esi = r_eax;
    /* 004c3bf5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3bfb: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3c00u); f_0047bc20();
    /* 004c3c00: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3c02: mov eax, esi */ r_eax = r_esi;
    /* 004c3c04: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c3c05: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c3c05, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c3c05, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c3c07: mov dword ptr [0x791e80], eax */ W32((u32)(0x791e80u), r_eax);
    /* 004c3c0c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3c12: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3c15: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c3c1au); f_004f67d0();
    /* 004c3c1a: mov edx, dword ptr [0x791e80] */ r_edx = R32((u32)(0x791e80u));
    /* 004c3c20: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004c3c22: mov dword ptr [0x791e80], edx */ W32((u32)(0x791e80u), r_edx);
    /* 004c3c28: mov eax, dword ptr [0x791e80] */ r_eax = R32((u32)(0x791e80u));
    /* 004c3c2d: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3c30: jg 0x4c3c56 */ if ((!fZ&&fS==fO)) goto L_004c3c56;
L_004c3c32:; BB(0x004c3c32);
    /* 004c3c32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3c38: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3c3du); f_0047bc20();
    /* 004c3c3d: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3c44: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c3c47: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3c4b: jge 0x4c3c54 */ if ((fS==fO)) goto L_004c3c54;
L_004c3c4d:; BB(0x004c3c4d);
    /* 004c3c4d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004c3c54:; BB(0x004c3c54);
    /* 004c3c54: jmp 0x4c3c68 */ goto L_004c3c68;
L_004c3c56:; BB(0x004c3c56);
    /* 004c3c56: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3c5c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3c61u); f_0047bc20();
    /* 004c3c61: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3c65: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004c3c68:; BB(0x004c3c68);
    /* 004c3c68: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3c6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3c6c: mov esp, ebp */ r_esp = r_ebp;
    /* 004c3c6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c3c6f: ret  */ FN_RET(0x004c3bb0); r_esp += 4; return;
}

void f_004c3c70(void) /* sub_4C3C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c3c70);
    /* 004c3c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c3c71: mov ebp, esp */ r_ebp = r_esp;
    /* 004c3c73: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3c76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3c77: mov dword ptr [ebp - 0xc], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff4u), 0xffffff9du);
    /* 004c3c7e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3c84: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c3c89u); f_0047e3b0();
    /* 004c3c89: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c3c8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c3c93: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004c3c98: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 004c3c9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3ca1: je 0x4c3cfa */ if (fZ) goto L_004c3cfa;
L_004c3ca3:; BB(0x004c3ca3);
    /* 004c3ca3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3ca9: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x4c3caeu); f_004798c0();
    /* 004c3cae: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3cb1: jne 0x4c3cfa */ if (!fZ) goto L_004c3cfa;
L_004c3cb3:; BB(0x004c3cb3);
    /* 004c3cb3: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004c3cb9: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004c3cbf: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 004c3cc5: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004c3ccb: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004c3cd1: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 004c3cd7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c3cd9: mov ecx, edx */ r_ecx = r_edx;
    /* 004c3cdb: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 004c3ce1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c3ce3u); call_ind(t); }
    /* 004c3ce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ce4: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x4c3ce9u); f_0064cab0();
    /* 004c3ce9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3cec: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004c3cef: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004c3cf2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c3cf5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c3cf8: jmp 0x4c3d32 */ goto L_004c3d32;
L_004c3cfa:; BB(0x004c3cfa);
    /* 004c3cfa: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3cfe: jle 0x4c3d08 */ if ((fZ||fS!=fO)) goto L_004c3d08;
L_004c3d00:; BB(0x004c3d00);
    /* 004c3d00: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004c3d03: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004c3d06: jmp 0x4c3d32 */ goto L_004c3d32;
L_004c3d08:; BB(0x004c3d08);
    /* 004c3d08: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c3d0du); f_004b7d90();
    /* 004c3d0d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c3d10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3d12: je 0x4c3d24 */ if (fZ) goto L_004c3d24;
L_004c3d14:; BB(0x004c3d14);
    /* 004c3d14: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3d1a: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x4c3d1fu); f_0047bd20();
    /* 004c3d1f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c3d22: jmp 0x4c3d32 */ goto L_004c3d32;
L_004c3d24:; BB(0x004c3d24);
    /* 004c3d24: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3d2a: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c3d2fu); f_0047bce0();
    /* 004c3d2f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004c3d32:; BB(0x004c3d32);
    /* 004c3d32: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c3d37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c3d3a: cmp ecx, dword ptr [eax + 0x410] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3d40: jge 0x4c3d53 */ if ((fS==fO)) goto L_004c3d53;
L_004c3d42:; BB(0x004c3d42);
    /* 004c3d42: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c3d48: mov eax, dword ptr [edx + 0x410] */ r_eax = R32((u32)(r_edx+0x410u));
    /* 004c3d4e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c3d51: jmp 0x4c3d72 */ goto L_004c3d72;
L_004c3d53:; BB(0x004c3d53);
    /* 004c3d53: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3d59: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c3d5c: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3d62: jle 0x4c3d72 */ if ((fZ||fS!=fO)) goto L_004c3d72;
L_004c3d64:; BB(0x004c3d64);
    /* 004c3d64: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c3d69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c3d6c: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
L_004c3d72:; BB(0x004c3d72);
    /* 004c3d72: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3d75: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c3d7au); f_004c6a70();
    /* 004c3d7a: mov esi, eax */ r_esi = r_eax;
    /* 004c3d7c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3d82: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3d87u); f_0047bc20();
    /* 004c3d87: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3d89: mov eax, esi */ r_eax = r_esi;
    /* 004c3d8b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c3d8c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c3d8c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c3d8c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c3d8e: mov dword ptr [0x791e80], eax */ W32((u32)(0x791e80u), r_eax);
    /* 004c3d93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3d99: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3d9c: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c3da1u); f_004f67d0();
    /* 004c3da1: cmp dword ptr [0x791e80], eax */ {  u32 a = R32((u32)(0x791e80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3da7: jg 0x4c3dbf */ if ((!fZ&&fS==fO)) goto L_004c3dbf;
L_004c3da9:; BB(0x004c3da9);
    /* 004c3da9: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004c3dac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3dad: call 0x4c37f0 */ r_esp -= 4; W32(r_esp, 0x4c3db2u); f_004c37f0();
    /* 004c3db2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3db5: jmp 0x4c3f36 */ goto L_004c3f36;
L_004c3dbf:; BB(0x004c3dbf);
    /* 004c3dbf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3dc5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3dc8: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c3dcdu); f_004f67d0();
    /* 004c3dcd: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3dd0: cmp dword ptr [0x791e80], eax */ {  u32 a = R32((u32)(0x791e80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3dd6: jg 0x4c3ea8 */ if ((!fZ&&fS==fO)) goto L_004c3ea8;
L_004c3ddc:; BB(0x004c3ddc);
    /* 004c3ddc: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3de0: jle 0x4c3e18 */ if ((fZ||fS!=fO)) goto L_004c3e18;
L_004c3de2:; BB(0x004c3de2);
    /* 004c3de2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3de8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3deb: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c3df0u); f_004f67d0();
    /* 004c3df0: mov esi, dword ptr [0x791e80] */ r_esi = R32((u32)(0x791e80u));
    /* 004c3df6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004c3df8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3dfe: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c3e03u); f_0047bd60();
    /* 004c3e03: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e05: jge 0x4c3e18 */ if ((fS==fO)) goto L_004c3e18;
L_004c3e07:; BB(0x004c3e07);
    /* 004c3e07: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004c3e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e0b: call 0x4c37f0 */ r_esp -= 4; W32(r_esp, 0x4c3e10u); f_004c37f0();
    /* 004c3e10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3e13: jmp 0x4c3f36 */ goto L_004c3f36;
L_004c3e18:; BB(0x004c3e18);
    /* 004c3e18: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c3e1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3e1e: jne 0x4c3e99 */ if (!fZ) goto L_004c3e99;
L_004c3e20:; BB(0x004c3e20);
    /* 004c3e20: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3e26: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3e2bu); f_0047bc20();
    /* 004c3e2b: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3e32: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c3e35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3e38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3e3c: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c3e41u); f_004c6c10();
    /* 004c3e41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3e44: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c3e49u); f_004da300();
    /* 004c3e49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e4b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3e50: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3e55u); f_004dc4d0();
    /* 004c3e55: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e57: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3e5a: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c3e5fu); f_004c7030();
    /* 004c3e5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3e65: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3e68: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c3e6du); f_004f67d0();
    /* 004c3e6d: mov ecx, dword ptr [0x791e80] */ r_ecx = R32((u32)(0x791e80u));
    /* 004c3e73: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3e75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3e7c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3e7f: call 0x4f6210 */ r_esp -= 4; W32(r_esp, 0x4c3e84u); f_004f6210();
    /* 004c3e84: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c3e87: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004c3e8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e8e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3e94: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c3e99u); f_0047ec90();
L_004c3e99:; BB(0x004c3e99);
    /* 004c3e99: mov dword ptr [0x791e48], 6 */ W32((u32)(0x791e48u), 0x6u);
    /* 004c3ea3: jmp 0x4c3f33 */ goto L_004c3f33;
L_004c3ea8:; BB(0x004c3ea8);
    /* 004c3ea8: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c3eac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3eae: jne 0x4c3f29 */ if (!fZ) goto L_004c3f29;
L_004c3eb0:; BB(0x004c3eb0);
    /* 004c3eb0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3eb6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3eb9: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c3ebeu); f_004f67d0();
    /* 004c3ebe: mov esi, eax */ r_esi = r_eax;
    /* 004c3ec0: add esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c3ec3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3ec9: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3eceu); f_0047bc20();
    /* 004c3ece: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3ed1: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 004c3ed4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3ed7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ed8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3edb: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c3ee0u); f_004c6c10();
    /* 004c3ee0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3ee3: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c3ee8u); f_004da300();
    /* 004c3ee8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3eee: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3ef3u); f_0047bc20();
    /* 004c3ef3: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3ef8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3efa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3efd: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3f02u); f_004dc4d0();
    /* 004c3f02: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c3f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3f0c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3f0f: call 0x4f6020 */ r_esp -= 4; W32(r_esp, 0x4c3f14u); f_004f6020();
    /* 004c3f14: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c3f17: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c3f1a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3f1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f1e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3f24: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c3f29u); f_0047ec90();
L_004c3f29:; BB(0x004c3f29);
    /* 004c3f29: mov dword ptr [0x791e48], 5 */ W32((u32)(0x791e48u), 0x5u);
L_004c3f33:; BB(0x004c3f33);
    /* 004c3f33: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_004c3f36:; BB(0x004c3f36);
    /* 004c3f36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f37: mov esp, ebp */ r_esp = r_ebp;
    /* 004c3f39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c3f3a: ret  */ FN_RET(0x004c3c70); r_esp += 4; return;
}

void f_004c3f40(void) /* sub_4C3F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c3f40);
    /* 004c3f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f41: mov ebp, esp */ r_ebp = r_esp;
    /* 004c3f43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3f46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f47: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3f4d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c3f52u); f_0047e3b0();
    /* 004c3f52: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c3f55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c3f5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3f5f: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c3f64u); f_004c6a70();
    /* 004c3f64: mov esi, eax */ r_esi = r_eax;
    /* 004c3f66: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3f6c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3f71u); f_0047bc20();
    /* 004c3f71: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3f73: mov eax, esi */ r_eax = r_esi;
    /* 004c3f75: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c3f76: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c3f76, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c3f76, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c3f78: mov dword ptr [0x791e80], eax */ W32((u32)(0x791e80u), r_eax);
    /* 004c3f7d: mov edx, dword ptr [0x791e80] */ r_edx = R32((u32)(0x791e80u));
    /* 004c3f83: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3f86: jg 0x4c3ffd */ if ((!fZ&&fS==fO)) goto L_004c3ffd;
L_004c3f88:; BB(0x004c3f88);
    /* 004c3f88: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3f8e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c3f93u); f_0047bc20();
    /* 004c3f93: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3f9a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c3f9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3fa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3fa4: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c3fa9u); f_004c6c10();
    /* 004c3fa9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3fac: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c3fb1u); f_004da300();
    /* 004c3fb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3fb3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3fb5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3fb8: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c3fbdu); f_004dc4d0();
    /* 004c3fbd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3fbf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c3fc2: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c3fc7u); f_004c7030();
    /* 004c3fc7: mov ecx, dword ptr [0x791e80] */ r_ecx = R32((u32)(0x791e80u));
    /* 004c3fcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3fce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3fd4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3fd7: call 0x4f5a80 */ r_esp -= 4; W32(r_esp, 0x4c3fdcu); f_004f5a80();
    /* 004c3fdc: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c3fdf: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004c3fe2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c3fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3fe6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c3fec: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c3ff1u); f_0047ec90();
    /* 004c3ff1: mov dword ptr [0x791e48], 6 */ W32((u32)(0x791e48u), 0x6u);
    /* 004c3ffb: jmp 0x4c4064 */ goto L_004c4064;
L_004c3ffd:; BB(0x004c3ffd);
    /* 004c3ffd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4003: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c4008u); f_0047bc20();
    /* 004c4008: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c400c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c400f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c4012: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4013: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c4016: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c401bu); f_004c6c10();
    /* 004c401b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c401e: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c4023u); f_004da300();
    /* 004c4023: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c4026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4027: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4029: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c402c: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c4031u); f_004dc4d0();
    /* 004c4031: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4033: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c4036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4037: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c403d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4040: call 0x4f5c40 */ r_esp -= 4; W32(r_esp, 0x4c4045u); f_004f5c40();
    /* 004c4045: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c4048: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c404b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c404e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c404f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4055: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c405au); f_0047ec90();
    /* 004c405a: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c4064:; BB(0x004c4064);
    /* 004c4064: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c4067: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4068: mov esp, ebp */ r_esp = r_ebp;
    /* 004c406a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c406b: ret  */ FN_RET(0x004c3f40); r_esp += 4; return;
}

