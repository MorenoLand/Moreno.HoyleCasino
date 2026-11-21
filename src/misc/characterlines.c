#include "protos.h"

void f_006667c0(void) /* characterlines::func_006667c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006667c0);
    /* 006667c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006667c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006667c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006667c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006667c7: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006667ce: jl 0x6667e7 */ if ((fS!=fO)) goto L_006667e7;
L_006667d0:; BB(0x006667d0);
    /* 006667d0: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 006667d5: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006667da: push 0x6dfb18 */ { u32 v = 0x6dfb18u; r_esp -= 4; W32(r_esp, v); }
    /* 006667df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6667e4u); f_005e9f20();
    /* 006667e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006667e7:; BB(0x006667e7);
    /* 006667e7: cmp dword ptr [ebp + 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006667ee: jl 0x666807 */ if ((fS!=fO)) goto L_00666807;
L_006667f0:; BB(0x006667f0);
    /* 006667f0: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 006667f5: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006667fa: push 0x6dfb04 */ { u32 v = 0x6dfb04u; r_esp -= 4; W32(r_esp, v); }
    /* 006667ff: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666804u); f_005e9f20();
    /* 00666804: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666807:; BB(0x00666807);
    /* 00666807: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066680a: imul eax, eax, 0xf4240 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf4240u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666810: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00666813: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666816: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666818: mov esp, ebp */ r_esp = r_ebp;
    /* 0066681a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066681b: ret 8 */ FN_RET(0x006667c0); r_esp += 12; return;
}

void f_006668a0(void) /* characterlines::func_006668a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006668a0);
    /* 006668a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006668a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006668a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006668a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006668a9: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006668b0: jl 0x6668c9 */ if ((fS!=fO)) goto L_006668c9;
L_006668b2:; BB(0x006668b2);
    /* 006668b2: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 006668b7: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006668bc: push 0x6dfb18 */ { u32 v = 0x6dfb18u; r_esp -= 4; W32(r_esp, v); }
    /* 006668c1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6668c6u); f_005e9f20();
    /* 006668c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006668c9:; BB(0x006668c9);
    /* 006668c9: cmp dword ptr [ebp + 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006668d0: jl 0x6668e9 */ if ((fS!=fO)) goto L_006668e9;
L_006668d2:; BB(0x006668d2);
    /* 006668d2: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 006668d7: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006668dc: push 0x6dfb04 */ { u32 v = 0x6dfb04u; r_esp -= 4; W32(r_esp, v); }
    /* 006668e1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6668e6u); f_005e9f20();
    /* 006668e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006668e9:; BB(0x006668e9);
    /* 006668e9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006668ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006668ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006668f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006668f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006668f4: call 0x666c70 */ r_esp -= 4; W32(r_esp, 0x6668f9u); f_00666c70();
    /* 006668f9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006668fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666903: jmp 0x66690e */ goto L_0066690e;
L_00666905:; BB(0x00666905);
    /* 00666905: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666908: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066690b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0066690e:; BB(0x0066690e);
    /* 0066690e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666911: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666914: jge 0x66695b */ if ((fS==fO)) goto L_0066695b;
L_00666916:; BB(0x00666916);
    /* 00666916: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666919: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066691a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0066691d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066691e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00666921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666922: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666925: call 0x666a80 */ r_esp -= 4; W32(r_esp, 0x66692au); f_00666a80();
    /* 0066692a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066692d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066692f: jne 0x666959 */ if (!fZ) goto L_00666959;
L_00666931:; BB(0x00666931);
    /* 00666931: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666934: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666935: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00666938: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666939: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066693c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066693d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666940: call 0x666740 */ r_esp -= 4; W32(r_esp, 0x666945u); f_00666740();
    /* 00666945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666946: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666949: call 0x666840 */ r_esp -= 4; W32(r_esp, 0x66694eu); f_00666840();
    /* 0066694e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00666951: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666953: je 0x666959 */ if (fZ) goto L_00666959;
L_00666955:; BB(0x00666955);
    /* 00666955: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00666957: jmp 0x66695d */ goto L_0066695d;
L_00666959:; BB(0x00666959);
    /* 00666959: jmp 0x666905 */ goto L_00666905;
L_0066695b:; BB(0x0066695b);
    /* 0066695b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0066695d:; BB(0x0066695d);
    /* 0066695d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066695f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666960: ret 8 */ FN_RET(0x006668a0); r_esp += 12; return;
}

void f_00666970(void) /* characterlines::func_00666970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666970);
    /* 00666970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666971: mov ebp, esp */ r_ebp = r_esp;
    /* 00666973: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666976: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00666979: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666980: jl 0x666999 */ if ((fS!=fO)) goto L_00666999;
L_00666982:; BB(0x00666982);
    /* 00666982: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00666987: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 0066698c: push 0x6dfb18 */ { u32 v = 0x6dfb18u; r_esp -= 4; W32(r_esp, v); }
    /* 00666991: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666996u); f_005e9f20();
    /* 00666996: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666999:; BB(0x00666999);
    /* 00666999: cmp dword ptr [ebp + 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006669a0: jl 0x6669b9 */ if ((fS!=fO)) goto L_006669b9;
L_006669a2:; BB(0x006669a2);
    /* 006669a2: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 006669a7: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006669ac: push 0x6dfb04 */ { u32 v = 0x6dfb04u; r_esp -= 4; W32(r_esp, v); }
    /* 006669b1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6669b6u); f_005e9f20();
    /* 006669b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006669b9:; BB(0x006669b9);
    /* 006669b9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006669bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006669bd: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006669c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006669c4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006669ca: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 006669d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6669d2u); call_ind(t); }
    /* 006669d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006669d5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006669d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006669d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006669dc: call 0x666f50 */ r_esp -= 4; W32(r_esp, 0x6669e1u); f_00666f50();
    /* 006669e1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006669e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006669eb: jmp 0x6669f6 */ goto L_006669f6;
L_006669ed:; BB(0x006669ed);
    /* 006669ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006669f0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006669f3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006669f6:; BB(0x006669f6);
    /* 006669f6: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006669fa: jge 0x666a16 */ if ((fS==fO)) goto L_00666a16;
L_006669fc:; BB(0x006669fc);
    /* 006669fc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006669ff: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00666a01: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666a04: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00666a07: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666a0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666a0d: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 00666a10: mov byte ptr [edx + ecx], 0 */ W8((u32)(r_edx+r_ecx), 0x0u);
    /* 00666a14: jmp 0x6669ed */ goto L_006669ed;
L_00666a16:; BB(0x00666a16);
    /* 00666a16: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00666a18: mov esp, ebp */ r_esp = r_ebp;
    /* 00666a1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666a1b: ret 8 */ FN_RET(0x00666970); r_esp += 12; return;
}

void f_00666a80(void) /* characterlines::func_00666a80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666a80);
    /* 00666a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00666a83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666a86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666a87: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00666a8a: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666a91: jl 0x666aaa */ if ((fS!=fO)) goto L_00666aaa;
L_00666a93:; BB(0x00666a93);
    /* 00666a93: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00666a98: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666a9d: push 0x6dfb18 */ { u32 v = 0x6dfb18u; r_esp -= 4; W32(r_esp, v); }
    /* 00666aa2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666aa7u); f_005e9f20();
    /* 00666aa7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666aaa:; BB(0x00666aaa);
    /* 00666aaa: cmp dword ptr [ebp + 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666ab1: jl 0x666aca */ if ((fS!=fO)) goto L_00666aca;
L_00666ab3:; BB(0x00666ab3);
    /* 00666ab3: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ab8: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666abd: push 0x6dfb04 */ { u32 v = 0x6dfb04u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ac2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666ac7u); f_005e9f20();
    /* 00666ac7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666aca:; BB(0x00666aca);
    /* 00666aca: cmp dword ptr [ebp + 0x10], 0x63 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666ace: jl 0x666ae7 */ if ((fS!=fO)) goto L_00666ae7;
L_00666ad0:; BB(0x00666ad0);
    /* 00666ad0: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ad5: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ada: push 0x6dfb48 */ { u32 v = 0x6dfb48u; r_esp -= 4; W32(r_esp, v); }
    /* 00666adf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666ae4u); f_005e9f20();
    /* 00666ae4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666ae7:; BB(0x00666ae7);
    /* 00666ae7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666aea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666aeb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666af1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00666af3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666af9: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 00666aff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x666b01u); call_ind(t); }
    /* 00666b01: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666b04: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00666b07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666b08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666b0b: call 0x666f50 */ r_esp -= 4; W32(r_esp, 0x666b10u); f_00666f50();
    /* 00666b10: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00666b13: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666b16: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00666b18: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666b1b: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00666b1e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00666b21: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00666b22: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00666b25: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666b27: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00666b2a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666b2c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666b2f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00666b32: movzx edx, byte ptr [eax + esi] */ r_edx = (u32)R8((u32)(r_eax+r_esi));
    /* 00666b36: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00666b39: and ecx, 0x80000007 */ {  u32 a = r_ecx; u32 b = 0x80000007u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00666b3f: jns 0x666b46 */ if (!fS) goto L_00666b46;
L_00666b41:; BB(0x00666b41);
    /* 00666b41: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00666b42: or ecx, 0xfffffff8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 00666b45: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_00666b46:; BB(0x00666b46);
    /* 00666b46: mov eax, 1 */ r_eax = 0x1u;
    /* 00666b4b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00666b4d: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00666b4f: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00666b52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00666b53: mov esp, ebp */ r_esp = r_ebp;
    /* 00666b55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666b56: ret 0xc */ FN_RET(0x00666a80); r_esp += 16; return;
}

void f_00666b60(void) /* characterlines::func_00666b60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666b60);
    /* 00666b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00666b63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666b66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666b67: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00666b6a: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666b71: jl 0x666b8a */ if ((fS!=fO)) goto L_00666b8a;
L_00666b73:; BB(0x00666b73);
    /* 00666b73: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00666b78: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666b7d: push 0x6dfb18 */ { u32 v = 0x6dfb18u; r_esp -= 4; W32(r_esp, v); }
    /* 00666b82: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666b87u); f_005e9f20();
    /* 00666b87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666b8a:; BB(0x00666b8a);
    /* 00666b8a: cmp dword ptr [ebp + 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666b91: jl 0x666baa */ if ((fS!=fO)) goto L_00666baa;
L_00666b93:; BB(0x00666b93);
    /* 00666b93: push 0x111 */ { u32 v = 0x111u; r_esp -= 4; W32(r_esp, v); }
    /* 00666b98: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666b9d: push 0x6dfb04 */ { u32 v = 0x6dfb04u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ba2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666ba7u); f_005e9f20();
    /* 00666ba7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666baa:; BB(0x00666baa);
    /* 00666baa: cmp dword ptr [ebp + 0x10], 0x63 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666bae: jl 0x666bc7 */ if ((fS!=fO)) goto L_00666bc7;
L_00666bb0:; BB(0x00666bb0);
    /* 00666bb0: push 0x112 */ { u32 v = 0x112u; r_esp -= 4; W32(r_esp, v); }
    /* 00666bb5: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666bba: push 0x6dfb48 */ { u32 v = 0x6dfb48u; r_esp -= 4; W32(r_esp, v); }
    /* 00666bbf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666bc4u); f_005e9f20();
    /* 00666bc4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666bc7:; BB(0x00666bc7);
    /* 00666bc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666bca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666bcb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666bd1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00666bd3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00666bd9: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 00666bdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x666be1u); call_ind(t); }
    /* 00666be1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666be4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00666be7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666be8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666beb: call 0x666f50 */ r_esp -= 4; W32(r_esp, 0x666bf0u); f_00666f50();
    /* 00666bf0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00666bf3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666bf6: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00666bf8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666bfb: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00666bfe: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00666c01: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00666c02: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00666c05: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666c07: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00666c0a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666c0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666c0f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00666c12: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00666c15: and ecx, 0x80000007 */ {  u32 a = r_ecx; u32 b = 0x80000007u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00666c1b: jns 0x666c22 */ if (!fS) goto L_00666c22;
L_00666c1d:; BB(0x00666c1d);
    /* 00666c1d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00666c1e: or ecx, 0xfffffff8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 00666c21: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_00666c22:; BB(0x00666c22);
    /* 00666c22: mov edx, 1 */ r_edx = 0x1u;
    /* 00666c27: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00666c29: movzx ecx, byte ptr [eax + esi] */ r_ecx = (u32)R8((u32)(r_eax+r_esi));
    /* 00666c2d: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00666c2f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666c32: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00666c34: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00666c37: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00666c38: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00666c3b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666c3d: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00666c40: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666c43: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00666c46: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666c48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666c4b: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 00666c4e: mov byte ptr [edx + eax], cl */ W8((u32)(r_edx+r_eax), (u8)r_ecx);
    /* 00666c51: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00666c53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00666c54: mov esp, ebp */ r_esp = r_ebp;
    /* 00666c56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666c57: ret 0xc */ FN_RET(0x00666b60); r_esp += 16; return;
}

void f_00666c70(void) /* characterlines::func_00666c70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666c70);
    /* 00666c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00666c73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666c76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00666c79: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666c80: jl 0x666c99 */ if ((fS!=fO)) goto L_00666c99;
L_00666c82:; BB(0x00666c82);
    /* 00666c82: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 00666c87: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666c8c: push 0x6dfb18 */ { u32 v = 0x6dfb18u; r_esp -= 4; W32(r_esp, v); }
    /* 00666c91: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666c96u); f_005e9f20();
    /* 00666c96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666c99:; BB(0x00666c99);
    /* 00666c99: cmp dword ptr [ebp + 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666ca0: jl 0x666cb9 */ if ((fS!=fO)) goto L_00666cb9;
L_00666ca2:; BB(0x00666ca2);
    /* 00666ca2: push 0x123 */ { u32 v = 0x123u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ca7: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666cac: push 0x6dfb04 */ { u32 v = 0x6dfb04u; r_esp -= 4; W32(r_esp, v); }
    /* 00666cb1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666cb6u); f_005e9f20();
    /* 00666cb6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666cb9:; BB(0x00666cb9);
    /* 00666cb9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00666cc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666cc2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00666cc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666cc6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666cc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666cca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666ccd: call 0x6667c0 */ r_esp -= 4; W32(r_esp, 0x666cd2u); f_006667c0();
    /* 00666cd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666cd3: push 0x20434c43 */ { u32 v = 0x20434c43u; r_esp -= 4; W32(r_esp, v); }
    /* 00666cd8: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00666cde: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00666ce1: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x666ce6u); f_00603c50();
    /* 00666ce6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00666ce9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666cec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00666cee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666cf1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00666cf4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x666cf6u); call_ind(t); }
    /* 00666cf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666cf8: je 0x666d0c */ if (fZ) goto L_00666d0c;
L_00666cfa:; BB(0x00666cfa);
    /* 00666cfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666cfd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00666cff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666d02: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00666d05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x666d07u); call_ind(t); }
    /* 00666d07: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00666d09: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00666d0c:; BB(0x00666d0c);
    /* 00666d0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666d0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666d10: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00666d15: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00666d18: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x666d1du); f_006041d0();
    /* 00666d1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00666d20: mov esp, ebp */ r_esp = r_ebp;
    /* 00666d22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666d23: ret 8 */ FN_RET(0x00666c70); r_esp += 12; return;
}

void f_00666eb0(void) /* characterlines::func_00666eb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666eb0);
    /* 00666eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00666eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00666eb7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666ebb: jl 0x666eca */ if ((fS!=fO)) goto L_00666eca;
L_00666ebd:; BB(0x00666ebd);
    /* 00666ebd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666ec0: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x666ec5u); f_00666c60();
    /* 00666ec5: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666ec8: jle 0x666eef */ if ((fZ||fS!=fO)) goto L_00666eef;
L_00666eca:; BB(0x00666eca);
    /* 00666eca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00666ecc: jne 0x666ee5 */ if (!fZ) goto L_00666ee5;
L_00666ece:; BB(0x00666ece);
    /* 00666ece: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ed3: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ed8: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00666edd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x666ee2u); f_005e9f20();
    /* 00666ee2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00666ee5:; BB(0x00666ee5);
    /* 00666ee5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00666ee8: call 0x666f00 */ r_esp -= 4; W32(r_esp, 0x666eedu); f_00666f00();
    /* 00666eed: jmp 0x666efa */ goto L_00666efa;
L_00666eef:; BB(0x00666eef);
    /* 00666eef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00666ef2: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666ef5: add eax, 0x7712e0 */ {  u32 a = r_eax; u32 b = 0x7712e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00666efa:; BB(0x00666efa);
    /* 00666efa: mov esp, ebp */ r_esp = r_ebp;
    /* 00666efc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666efd: ret 4 */ FN_RET(0x00666eb0); r_esp += 8; return;
}

void f_00667860(void) /* characterlines::func_00667860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667860);
    /* 00667860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667861: mov ebp, esp */ r_ebp = r_esp;
    /* 00667863: sub esp, 0x218 */ {  u32 a = r_esp; u32 b = 0x218u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667869: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066786e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667870: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00667873: mov dword ptr [ebp - 0x218], ecx */ W32((u32)(r_ebp+0xfffffde8u), r_ecx);
    /* 00667879: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0066787c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066787d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00667880: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667881: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00667884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667885: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667889: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 0066788f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667890: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00667893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667894: mov ecx, dword ptr [ebp - 0x218] */ r_ecx = R32((u32)(r_ebp+0xfffffde8u));
    /* 0066789a: call 0x6679a0 */ r_esp -= 4; W32(r_esp, 0x66789fu); f_006679a0();
    /* 0066789f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006678a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006678a4: jne 0x6678c8 */ if (!fZ) goto L_006678c8;
L_006678a6:; BB(0x006678a6);
    /* 006678a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006678a8: jne 0x6678c1 */ if (!fZ) goto L_006678c1;
L_006678aa:; BB(0x006678aa);
    /* 006678aa: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 006678af: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006678b4: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006678b9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6678beu); f_005e9f20();
    /* 006678be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006678c1:; BB(0x006678c1);
    /* 006678c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006678c3: jmp 0x667981 */ goto L_00667981;
L_006678c8:; BB(0x006678c8);
    /* 006678c8: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 006678ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006678cf: mov ecx, dword ptr [ebp - 0x218] */ r_ecx = R32((u32)(r_ebp+0xfffffde8u));
    /* 006678d5: call 0x666fb0 */ r_esp -= 4; W32(r_esp, 0x6678dau); f_00666fb0();
    /* 006678da: mov dword ptr [ebp - 0x214], eax */ W32((u32)(r_ebp+0xfffffdecu), r_eax);
    /* 006678e0: cmp dword ptr [ebp - 0x214], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006678e7: jne 0x667908 */ if (!fZ) goto L_00667908;
L_006678e9:; BB(0x006678e9);
    /* 006678e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006678eb: jne 0x667904 */ if (!fZ) goto L_00667904;
L_006678ed:; BB(0x006678ed);
    /* 006678ed: push 0x231 */ { u32 v = 0x231u; r_esp -= 4; W32(r_esp, v); }
    /* 006678f2: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006678f7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006678fc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x667901u); f_005e9f20();
    /* 00667901: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00667904:; BB(0x00667904);
    /* 00667904: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667906: jmp 0x667981 */ goto L_00667981;
L_00667908:; BB(0x00667908);
    /* 00667908: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0066790b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066790c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0066790f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667910: push 0x6d9d9c */ { u32 v = 0x6d9d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00667915: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0066791b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066791c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667922u); call_ind(t); }
    /* 00667922: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667925: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0066792b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066792c: mov ecx, dword ptr [ebp - 0x218] */ r_ecx = R32((u32)(r_ebp+0xfffffde8u));
    /* 00667932: call 0x666e40 */ r_esp -= 4; W32(r_esp, 0x667937u); f_00666e40();
    /* 00667937: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066793a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066793d: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667940: jne 0x667961 */ if (!fZ) goto L_00667961;
L_00667942:; BB(0x00667942);
    /* 00667942: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00667944: jne 0x66795d */ if (!fZ) goto L_0066795d;
L_00667946:; BB(0x00667946);
    /* 00667946: push 0x236 */ { u32 v = 0x236u; r_esp -= 4; W32(r_esp, v); }
    /* 0066794b: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00667950: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00667955: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66795au); f_005e9f20();
    /* 0066795a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066795d:; BB(0x0066795d);
    /* 0066795d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066795f: jmp 0x667981 */ goto L_00667981;
L_00667961:; BB(0x00667961);
    /* 00667961: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667963: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667966: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00667968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667969: mov eax, dword ptr [ebp - 0x214] */ r_eax = R32((u32)(r_ebp+0xfffffdecu));
    /* 0066796f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667970: mov ecx, dword ptr [ebp - 0x218] */ r_ecx = R32((u32)(r_ebp+0xfffffde8u));
    /* 00667976: call 0x666740 */ r_esp -= 4; W32(r_esp, 0x66797bu); f_00666740();
    /* 0066797b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0066797e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_00667981:; BB(0x00667981);
    /* 00667981: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00667984: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667986: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66798bu); f_00686d72();
    /* 0066798b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066798d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066798e: ret 0x10 */ FN_RET(0x00667860); r_esp += 20; return;
}

