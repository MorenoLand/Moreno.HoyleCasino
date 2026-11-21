#include "protos.h"

void f_004c6150(void) /* sub_4C6150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6150);
    /* 004c6150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6151: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6153: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6156: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004c6159: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c615c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c615f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6160: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6165u); f_005dcb00();
    /* 004c6165: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6168: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c616b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c616e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c6173u); f_0063aac0();
    /* 004c6173: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c6176: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6179: ret  */ FN_RET(0x004c6150); r_esp += 4; return;
}

void f_004c6180(void) /* sub_4C6180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6180);
    /* 004c6180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6181: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6183: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6186: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c6189: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c618c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c618f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6190: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6195u); f_005dcb00();
    /* 004c6195: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6198: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c619b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c619e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004c61a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c61a4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c61a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004c61a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c61aa: ret  */ FN_RET(0x004c6180); r_esp += 4; return;
}

void f_004c61b0(void) /* sub_4C61B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c61b0);
    /* 004c61b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c61b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c61b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c61b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004c61b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c61bc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c61bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c61c0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c61c5u); f_005dcb00();
    /* 004c61c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c61c8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c61cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c61ce: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c61d3u); f_0063aac0();
    /* 004c61d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c61d5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004c61d8: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c61dc: je 0x4c61fa */ if (fZ) goto L_004c61fa;
L_004c61de:; BB(0x004c61de);
    /* 004c61de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c61e1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c61e6u); f_0063aac0();
    /* 004c61e6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004c61e8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c61eb: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c61ef: je 0x4c61fa */ if (fZ) goto L_004c61fa;
L_004c61f1:; BB(0x004c61f1);
    /* 004c61f1: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004c61f8: jmp 0x4c6201 */ goto L_004c6201;
L_004c61fa:; BB(0x004c61fa);
    /* 004c61fa: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_004c6201:; BB(0x004c6201);
    /* 004c6201: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 004c6204: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6206: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6207: ret  */ FN_RET(0x004c61b0); r_esp += 4; return;
}

void f_004c6210(void) /* sub_4C6210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6210);
    /* 004c6210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6211: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6213: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6216: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c6219: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c621c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c621f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6220: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6225u); f_005dcb00();
    /* 004c6225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6228: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c622b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c622e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c6233u); f_0063aac0();
    /* 004c6233: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c6235: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004c6238: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c623a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c623e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004c6241: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c6244: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004c6246: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004c6248: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c624b: mov esp, ebp */ r_esp = r_ebp;
    /* 004c624d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c624e: ret  */ FN_RET(0x004c6210); r_esp += 4; return;
}

void f_004c6250(void) /* sub_4C6250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6250);
    /* 004c6250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6251: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6253: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6256: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004c6259: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c625c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c625f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c6262: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004c6265: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004c6268: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004c626b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004c626e: fld qword ptr [ebp + 0x10] */ FPUSH(R_F64((u32)(r_ebp+0x10u)));
    /* 004c6271: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004c6274: fld qword ptr [ebp + 0x18] */ FPUSH(R_F64((u32)(r_ebp+0x18u)));
    /* 004c6277: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004c627a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c627c: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004c627f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6280: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004c6283: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6284: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 004c6287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6288: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004c628e: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x4c6293u); f_00639390();
    /* 004c6293: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6295: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6296: ret 0x20 */ FN_RET(0x004c6250); r_esp += 36; return;
}

void f_004c62d0(void) /* sub_4C62D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c62d0);
    /* 004c62d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c62d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c62d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c62d5: push 0x6a2203 */ { u32 v = 0x6a2203u; r_esp -= 4; W32(r_esp, v); }
    /* 004c62da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c62e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c62e1: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c62e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004c62e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c62eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c62ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004c62ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004c62f5: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004c62f8: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c62fb: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c62ff: je 0x4c6530 */ if (fZ) goto L_004c6530;
L_004c6305:; BB(0x004c6305);
    /* 004c6305: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c6309: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c630b: je 0x4c640e */ if (fZ) goto L_004c640e;
L_004c6311:; BB(0x004c6311);
    /* 004c6311: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6314: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6318: je 0x4c6349 */ if (fZ) goto L_004c6349;
L_004c631a:; BB(0x004c631a);
    /* 004c631a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c631d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c6320: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004c6323: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6326: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004c6329: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c632d: je 0x4c6342 */ if (fZ) goto L_004c6342;
L_004c632f:; BB(0x004c632f);
    /* 004c632f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6331: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c6334: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c6336: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c6339: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c633b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c633du); call_ind(t); }
    /* 004c633d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004c6340: jmp 0x4c6349 */ goto L_004c6349;
L_004c6342:; BB(0x004c6342);
    /* 004c6342: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004c6349:; BB(0x004c6349);
    /* 004c6349: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004c634b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4c6350u); f_00686d82();
    /* 004c6350: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6353: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004c6356: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c635d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6361: je 0x4c6370 */ if (fZ) goto L_004c6370;
L_004c6363:; BB(0x004c6363);
    /* 004c6363: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c6366: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x4c636bu); f_0060c5f0();
    /* 004c636b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004c636e: jmp 0x4c6377 */ goto L_004c6377;
L_004c6370:; BB(0x004c6370);
    /* 004c6370: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_004c6377:; BB(0x004c6377);
    /* 004c6377: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004c637a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004c637d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c6384: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6387: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c638a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004c638d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6390: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6394: je 0x4c63c5 */ if (fZ) goto L_004c63c5;
L_004c6396:; BB(0x004c6396);
    /* 004c6396: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6399: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004c639c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004c639f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c63a2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c63a5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c63a9: je 0x4c63be */ if (fZ) goto L_004c63be;
L_004c63ab:; BB(0x004c63ab);
    /* 004c63ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c63ad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c63b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c63b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c63b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c63b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c63b9u); call_ind(t); }
    /* 004c63b9: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004c63bc: jmp 0x4c63c5 */ goto L_004c63c5;
L_004c63be:; BB(0x004c63be);
    /* 004c63be: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004c63c5:; BB(0x004c63c5);
    /* 004c63c5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004c63c7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4c63ccu); f_00686d82();
    /* 004c63cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c63cf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004c63d2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c63d9: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c63dd: je 0x4c63ec */ if (fZ) goto L_004c63ec;
L_004c63df:; BB(0x004c63df);
    /* 004c63df: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c63e2: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x4c63e7u); f_0060c5f0();
    /* 004c63e7: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004c63ea: jmp 0x4c63f3 */ goto L_004c63f3;
L_004c63ec:; BB(0x004c63ec);
    /* 004c63ec: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004c63f3:; BB(0x004c63f3);
    /* 004c63f3: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004c63f6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c63f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c6400: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6403: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c6406: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 004c6409: jmp 0x4c6530 */ goto L_004c6530;
L_004c640e:; BB(0x004c640e);
    /* 004c640e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6411: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 004c6418: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c641b: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c641f: je 0x4c6450 */ if (fZ) goto L_004c6450;
L_004c6421:; BB(0x004c6421);
    /* 004c6421: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6424: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c6427: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004c642a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004c642d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004c6430: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6434: je 0x4c6449 */ if (fZ) goto L_004c6449;
L_004c6436:; BB(0x004c6436);
    /* 004c6436: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6438: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c643b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c643d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6440: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c6442: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c6444u); call_ind(t); }
    /* 004c6444: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004c6447: jmp 0x4c6450 */ goto L_004c6450;
L_004c6449:; BB(0x004c6449);
    /* 004c6449: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004c6450:; BB(0x004c6450);
    /* 004c6450: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6452: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4c6457u); f_00686d82();
    /* 004c6457: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c645a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004c645d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004c6464: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6468: je 0x4c6477 */ if (fZ) goto L_004c6477;
L_004c646a:; BB(0x004c646a);
    /* 004c646a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c646d: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x4c6472u); f_0060c5f0();
    /* 004c6472: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004c6475: jmp 0x4c647e */ goto L_004c647e;
L_004c6477:; BB(0x004c6477);
    /* 004c6477: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_004c647e:; BB(0x004c647e);
    /* 004c647e: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004c6481: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004c6484: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c648b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c648e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c6491: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004c6494: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6497: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c649b: je 0x4c64cc */ if (fZ) goto L_004c64cc;
L_004c649d:; BB(0x004c649d);
    /* 004c649d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c64a0: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004c64a3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004c64a6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004c64a9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004c64ac: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c64b0: je 0x4c64c5 */ if (fZ) goto L_004c64c5;
L_004c64b2:; BB(0x004c64b2);
    /* 004c64b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c64b4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004c64b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c64b9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004c64bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c64be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c64c0u); call_ind(t); }
    /* 004c64c0: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004c64c3: jmp 0x4c64cc */ goto L_004c64cc;
L_004c64c5:; BB(0x004c64c5);
    /* 004c64c5: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_004c64cc:; BB(0x004c64cc);
    /* 004c64cc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004c64ce: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4c64d3u); f_00686d82();
    /* 004c64d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c64d6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004c64d9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004c64e0: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c64e4: je 0x4c64f3 */ if (fZ) goto L_004c64f3;
L_004c64e6:; BB(0x004c64e6);
    /* 004c64e6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004c64e9: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x4c64eeu); f_0060c5f0();
    /* 004c64ee: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004c64f1: jmp 0x4c64fa */ goto L_004c64fa;
L_004c64f3:; BB(0x004c64f3);
    /* 004c64f3: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_004c64fa:; BB(0x004c64fa);
    /* 004c64fa: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004c64fd: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004c6500: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c6507: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c650a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004c650d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 004c6510: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6513: call 0x4da2f0 */ r_esp -= 4; W32(r_esp, 0x4c6518u); f_004da2f0();
    /* 004c6518: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c651b: call 0x4db630 */ r_esp -= 4; W32(r_esp, 0x4c6520u); f_004db630();
    /* 004c6520: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c6523: call 0x4dbdd0 */ r_esp -= 4; W32(r_esp, 0x4c6528u); f_004dbdd0();
    /* 004c6528: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c652b: call 0x4c6550 */ r_esp -= 4; W32(r_esp, 0x4c6530u); f_004c6550();
L_004c6530:; BB(0x004c6530);
    /* 004c6530: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6533: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c653a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c653b: mov esp, ebp */ r_esp = r_ebp;
    /* 004c653d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c653e: ret 4 */ FN_RET(0x004c62d0); r_esp += 8; return;
}

void f_004c6550(void) /* sub_4C6550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6550);
    /* 004c6550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6551: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6553: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6556: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004c6559: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c655c: call 0x4c65d0 */ r_esp -= 4; W32(r_esp, 0x4c6561u); f_004c65d0();
    /* 004c6561: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c6564: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c6568: jge 0x4c6577 */ if ((fS==fO)) goto L_004c6577;
L_004c656a:; BB(0x004c656a);
    /* 004c656a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c656e: jle 0x4c6577 */ if ((fZ||fS!=fO)) goto L_004c6577;
L_004c6570:; BB(0x004c6570);
    /* 004c6570: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004c6577:; BB(0x004c6577);
    /* 004c6577: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c657b: jne 0x4c6596 */ if (!fZ) goto L_004c6596;
L_004c657d:; BB(0x004c657d);
    /* 004c657d: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6582: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c6587u); f_0062fbf0();
    /* 004c6587: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c658a: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c658d: jge 0x4c6596 */ if ((fS==fO)) goto L_004c6596;
L_004c658f:; BB(0x004c658f);
    /* 004c658f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004c6596:; BB(0x004c6596);
    /* 004c6596: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c659a: jne 0x4c65b5 */ if (!fZ) goto L_004c65b5;
L_004c659c:; BB(0x004c659c);
    /* 004c659c: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c65a1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c65a6u); f_0062fbf0();
    /* 004c65a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c65a9: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c65ac: jge 0x4c65b5 */ if ((fS==fO)) goto L_004c65b5;
L_004c65ae:; BB(0x004c65ae);
    /* 004c65ae: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
L_004c65b5:; BB(0x004c65b5);
    /* 004c65b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c65b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c65b9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c65bb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c65c0u); f_0062fbf0();
    /* 004c65c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c65c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c65c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c65c7: call 0x4c66b0 */ r_esp -= 4; W32(r_esp, 0x4c65ccu); f_004c66b0();
    /* 004c65cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004c65ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c65cf: ret  */ FN_RET(0x004c6550); r_esp += 4; return;
}

void f_004c6670(void) /* sub_4C6670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6670);
    /* 004c6670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6671: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6677: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c667b: jl 0x4c6683 */ if ((fS!=fO)) goto L_004c6683;
L_004c667d:; BB(0x004c667d);
    /* 004c667d: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c6681: jle 0x4c6687 */ if ((fZ||fS!=fO)) goto L_004c6687;
L_004c6683:; BB(0x004c6683);
    /* 004c6683: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c6685: jmp 0x4c669d */ goto L_004c669d;
L_004c6687:; BB(0x004c6687);
    /* 004c6687: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c668b: jne 0x4c6691 */ if (!fZ) goto L_004c6691;
L_004c668d:; BB(0x004c668d);
    /* 004c668d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c668f: jmp 0x4c669d */ goto L_004c669d;
L_004c6691:; BB(0x004c6691);
    /* 004c6691: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6695: jne 0x4c669b */ if (!fZ) goto L_004c669b;
L_004c6697:; BB(0x004c6697);
    /* 004c6697: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c6699: jmp 0x4c669d */ goto L_004c669d;
L_004c669b:; BB(0x004c669b);
    /* 004c669b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004c669d:; BB(0x004c669d);
    /* 004c669d: mov esp, ebp */ r_esp = r_ebp;
    /* 004c669f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c66a0: ret 4 */ FN_RET(0x004c6670); r_esp += 8; return;
}

void f_004c68c0(void) /* sub_4C68C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c68c0);
    /* 004c68c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c68c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c68c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c68c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c68c7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c68cb: je 0x4c68db */ if (fZ) goto L_004c68db;
L_004c68cd:; BB(0x004c68cd);
    /* 004c68cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c68d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c68d3: mov dword ptr [eax + 0x400], ecx */ W32((u32)(r_eax+0x400u), r_ecx);
    /* 004c68d9: jmp 0x4c68e8 */ goto L_004c68e8;
L_004c68db:; BB(0x004c68db);
    /* 004c68db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c68de: mov dword ptr [edx + 0x400], 0 */ W32((u32)(r_edx+0x400u), 0x0u);
L_004c68e8:; BB(0x004c68e8);
    /* 004c68e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c68eb: call 0x4c6900 */ r_esp -= 4; W32(r_esp, 0x4c68f0u); f_004c6900();
    /* 004c68f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004c68f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c68f3: ret 4 */ FN_RET(0x004c68c0); r_esp += 8; return;
}

void f_004c6900(void) /* sub_4C6900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6900);
    /* 004c6900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6901: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6903: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6906: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004c6909: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c6910: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6913: mov ecx, dword ptr [eax + 0x400] */ r_ecx = R32((u32)(r_eax+0x400u));
    /* 004c6919: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c691c: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6920: je 0x4c6932 */ if (fZ) goto L_004c6932;
L_004c6922:; BB(0x004c6922);
    /* 004c6922: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6926: je 0x4c6932 */ if (fZ) goto L_004c6932;
L_004c6928:; BB(0x004c6928);
    /* 004c6928: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c692c: jne 0x4c69f4 */ if (!fZ) goto L_004c69f4;
L_004c6932:; BB(0x004c6932);
    /* 004c6932: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004c6938: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4c693du); f_005da7b0();
    /* 004c693d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c6940: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6942: je 0x4c6954 */ if (fZ) goto L_004c6954;
L_004c6944:; BB(0x004c6944);
    /* 004c6944: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004c6949: mov ecx, dword ptr [eax + 0x4efc] */ r_ecx = R32((u32)(r_eax+0x4efcu));
    /* 004c694f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004c6952: jmp 0x4c6962 */ goto L_004c6962;
L_004c6954:; BB(0x004c6954);
    /* 004c6954: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c695a: call 0x47e2c0 */ r_esp -= 4; W32(r_esp, 0x4c695fu); f_0047e2c0();
    /* 004c695f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_004c6962:; BB(0x004c6962);
    /* 004c6962: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004c6965: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004c6968: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c696b: mov ecx, dword ptr [eax + 0x400] */ r_ecx = R32((u32)(r_eax+0x400u));
    /* 004c6971: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004c6974: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 004c6977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6978: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c697b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c697c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c697f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6980: call 0x519c80 */ r_esp -= 4; W32(r_esp, 0x4c6985u); f_00519c80();
    /* 004c6985: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6988: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c698b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c698e: mov dword ptr [edx + 0x404], eax */ W32((u32)(r_edx+0x404u), r_eax);
    /* 004c6994: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6997: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c699a: mov dword ptr [ecx + 0x408], edx */ W32((u32)(r_ecx+0x408u), r_edx);
    /* 004c69a0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69a3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c69a6: mov dword ptr [eax + 0x40c], ecx */ W32((u32)(r_eax+0x40cu), r_ecx);
    /* 004c69ac: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c69b2: mov dword ptr [edx + 0x410], eax */ W32((u32)(r_edx+0x410u), r_eax);
    /* 004c69b8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c69be: mov dword ptr [ecx + 0x414], edx */ W32((u32)(r_ecx+0x414u), r_edx);
    /* 004c69c4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c69ca: mov dword ptr [eax + 0x41c], ecx */ W32((u32)(r_eax+0x41cu), r_ecx);
    /* 004c69d0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c69d6: mov dword ptr [edx + 0x418], eax */ W32((u32)(r_edx+0x418u), r_eax);
    /* 004c69dc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c69e2: mov dword ptr [ecx + 0x420], edx */ W32((u32)(r_ecx+0x420u), r_edx);
    /* 004c69e8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69eb: mov byte ptr [eax + 0x424], 0 */ W8((u32)(r_eax+0x424u), 0x0u);
    /* 004c69f2: jmp 0x4c6a66 */ goto L_004c6a66;
L_004c69f4:; BB(0x004c69f4);
    /* 004c69f4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c69f7: mov dword ptr [ecx + 0x404], 0 */ W32((u32)(r_ecx+0x404u), 0x0u);
    /* 004c6a01: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a04: mov dword ptr [edx + 0x408], 0 */ W32((u32)(r_edx+0x408u), 0x0u);
    /* 004c6a0e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a11: mov dword ptr [eax + 0x40c], 0 */ W32((u32)(r_eax+0x40cu), 0x0u);
    /* 004c6a1b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a1e: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 004c6a28: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a2b: mov dword ptr [edx + 0x414], 0 */ W32((u32)(r_edx+0x414u), 0x0u);
    /* 004c6a35: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a38: mov dword ptr [eax + 0x418], 0 */ W32((u32)(r_eax+0x418u), 0x0u);
    /* 004c6a42: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a45: mov dword ptr [ecx + 0x41c], 0 */ W32((u32)(r_ecx+0x41cu), 0x0u);
    /* 004c6a4f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a52: mov dword ptr [edx + 0x420], 0 */ W32((u32)(r_edx+0x420u), 0x0u);
    /* 004c6a5c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c6a5f: mov byte ptr [eax + 0x424], 0 */ W8((u32)(r_eax+0x424u), 0x0u);
L_004c6a66:; BB(0x004c6a66);
    /* 004c6a66: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6a68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6a69: ret  */ FN_RET(0x004c6900); r_esp += 4; return;
}

void f_004c6a70(void) /* sub_4C6A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6a70);
    /* 004c6a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6a71: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6a77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6a7a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c6a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6a7e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6a83u); f_005dcb00();
    /* 004c6a83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6a86: mov ecx, eax */ r_ecx = r_eax;
    /* 004c6a88: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4c6a8du); f_005d5a50();
    /* 004c6a8d: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6a90: ret  */ FN_RET(0x004c6a70); r_esp += 4; return;
}

void f_004c6aa0(void) /* sub_4C6AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6aa0);
    /* 004c6aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6aa3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6aa6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c6aa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c6aac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c6aaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6ab2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004c6ab5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ab6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6abbu); f_005dcb00();
    /* 004c6abb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6abe: mov ecx, eax */ r_ecx = r_eax;
    /* 004c6ac0: call 0x5d5a70 */ r_esp -= 4; W32(r_esp, 0x4c6ac5u); f_005d5a70();
    /* 004c6ac5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c6ac8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6acb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6acc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c6acf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ad0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6ad3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c6ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ad7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6adcu); f_005dcb00();
    /* 004c6adc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6adf: mov ecx, eax */ r_ecx = r_eax;
    /* 004c6ae1: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x4c6ae6u); f_005d5af0();
    /* 004c6ae6: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6ae8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6ae9: ret 4 */ FN_RET(0x004c6aa0); r_esp += 8; return;
}

void f_004c6b30(void) /* sub_4C6B30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6b30);
    /* 004c6b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b31: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6b33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6b36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6b39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6b3c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c6b3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b40: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6b45u); f_005dcb00();
    /* 004c6b45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6b48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6b4b: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 004c6b4e: mov dword ptr [eax + 0x4cc], ecx */ W32((u32)(r_eax+0x4ccu), r_ecx);
    /* 004c6b54: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6b57: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c6b5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b5b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6b60u); f_005dcb00();
    /* 004c6b60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6b63: add eax, 0x4c4 */ {  u32 a = r_eax; u32 b = 0x4c4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c6b68: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c6b6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c6b6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c6b70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6b73: add edx, dword ptr [eax + 0x68] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x68u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c6b76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c6b79: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004c6b7b: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6b7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6b7e: ret  */ FN_RET(0x004c6b30); r_esp += 4; return;
}

void f_004c6b80(void) /* sub_4C6B80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6b80);
    /* 004c6b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b81: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6b83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6b86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c6b89: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6b8c: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004c6b8f: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c6b92: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6b95: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 004c6b98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6b9b: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4c6ba0u); f_004c61b0();
    /* 004c6ba0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c6ba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6ba5: je 0x4c6bb6 */ if (fZ) goto L_004c6bb6;
L_004c6ba7:; BB(0x004c6ba7);
    /* 004c6ba7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c6bad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004c6bb0: mov dword ptr [ecx + 0x40c], edx */ W32((u32)(r_ecx+0x40cu), r_edx);
L_004c6bb6:; BB(0x004c6bb6);
    /* 004c6bb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c6bb9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c6bbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c6bc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6bc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6bc7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c6bca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6bcb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6bce: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c6bd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6bd2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6bd7u); f_005dcb00();
    /* 004c6bd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6bda: mov ecx, eax */ r_ecx = r_eax;
    /* 004c6bdc: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x4c6be1u); f_005d5cf0();
    /* 004c6be1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6be3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6be6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c6be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6bea: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004c6bf0: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x4c6bf5u); f_005d9180();
    /* 004c6bf5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6bf8: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c6bfdu); f_004c6a70();
    /* 004c6bfd: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6bff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c00: ret 4 */ FN_RET(0x004c6b80); r_esp += 8; return;
}

void f_004c6c10(void) /* sub_4C6C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6c10);
    /* 004c6c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6c11: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6c13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6c16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c6c19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c1c: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004c6c1f: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c6c22: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c25: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 004c6c28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c2b: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4c6c30u); f_004c61b0();
    /* 004c6c30: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c6c33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6c35: je 0x4c6c5a */ if (fZ) goto L_004c6c5a;
L_004c6c37:; BB(0x004c6c37);
    /* 004c6c37: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c6c3d: movzx edx, byte ptr [ecx + 0x38] */ r_edx = (u32)R8((u32)(r_ecx+0x38u));
    /* 004c6c41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6c43: je 0x4c6c5a */ if (fZ) goto L_004c6c5a;
L_004c6c45:; BB(0x004c6c45);
    /* 004c6c45: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c48: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004c6c4e: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c6c51: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c54: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
L_004c6c5a:; BB(0x004c6c5a);
    /* 004c6c5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c6c5d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c6c5f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c6c62: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c6c69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6c6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6c6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c6c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6c71: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c74: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c6c77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6c78: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6c7du); f_005dcb00();
    /* 004c6c7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6c80: mov ecx, eax */ r_ecx = r_eax;
    /* 004c6c82: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x4c6c87u); f_005d5cf0();
    /* 004c6c87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6c89: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c8c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c6c8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6c90: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004c6c96: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x4c6c9bu); f_005d9180();
    /* 004c6c9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6c9e: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c6ca3u); f_004c6a70();
    /* 004c6ca3: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6ca5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6ca6: ret 4 */ FN_RET(0x004c6c10); r_esp += 8; return;
}

void f_004c6cb0(void) /* sub_4C6CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6cb0);
    /* 004c6cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6cb3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6cb6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c6cb9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c6cbc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c6cbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6cc0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6cc5u); f_005dcb00();
    /* 004c6cc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6cc8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c6ccb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6cce: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c6cd3u); f_0063aac0();
    /* 004c6cd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c6cd5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004c6cd8: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6cdc: je 0x4c6cfa */ if (fZ) goto L_004c6cfa;
L_004c6cde:; BB(0x004c6cde);
    /* 004c6cde: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6ce1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c6ce6u); f_0063aac0();
    /* 004c6ce6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004c6ce8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c6ceb: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6cef: je 0x4c6cfa */ if (fZ) goto L_004c6cfa;
L_004c6cf1:; BB(0x004c6cf1);
    /* 004c6cf1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004c6cf8: jmp 0x4c6d01 */ goto L_004c6d01;
L_004c6cfa:; BB(0x004c6cfa);
    /* 004c6cfa: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_004c6d01:; BB(0x004c6d01);
    /* 004c6d01: movzx ecx, byte ptr [ebp - 0x24] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 004c6d05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6d07: je 0x4c6d10 */ if (fZ) goto L_004c6d10;
L_004c6d09:; BB(0x004c6d09);
    /* 004c6d09: mov eax, 2 */ r_eax = 0x2u;
    /* 004c6d0e: jmp 0x4c6d7f */ goto L_004c6d7f;
L_004c6d10:; BB(0x004c6d10);
    /* 004c6d10: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c6d13: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c6d16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6d17: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6d1cu); f_005dcb00();
    /* 004c6d1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6d1f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004c6d22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6d25: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c6d2au); f_0063aac0();
    /* 004c6d2a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004c6d2c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004c6d2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c6d31: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6d35: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004c6d38: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004c6d3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6d3d: je 0x4c6d46 */ if (fZ) goto L_004c6d46;
L_004c6d3f:; BB(0x004c6d3f);
    /* 004c6d3f: mov eax, 1 */ r_eax = 0x1u;
    /* 004c6d44: jmp 0x4c6d7f */ goto L_004c6d7f;
L_004c6d46:; BB(0x004c6d46);
    /* 004c6d46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c6d49: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004c6d4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6d4d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c6d52u); f_005dcb00();
    /* 004c6d52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6d55: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004c6d58: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c6d5b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4c6d60u); f_0063aac0();
    /* 004c6d60: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004c6d62: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004c6d65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c6d67: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6d6b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004c6d6e: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 004c6d71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6d73: je 0x4c6d79 */ if (fZ) goto L_004c6d79;
L_004c6d75:; BB(0x004c6d75);
    /* 004c6d75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c6d77: jmp 0x4c6d7f */ goto L_004c6d7f;
L_004c6d79:; BB(0x004c6d79);
    /* 004c6d79: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c6d7c: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
L_004c6d7f:; BB(0x004c6d7f);
    /* 004c6d7f: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6d81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6d82: ret  */ FN_RET(0x004c6cb0); r_esp += 4; return;
}

void f_004c6d90(void) /* sub_4C6D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6d90);
    /* 004c6d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6d91: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6d97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6d9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c6d9d: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 004c6da0: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6da2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6da3: ret 4 */ FN_RET(0x004c6d90); r_esp += 8; return;
}

void f_004c6db0(void) /* sub_4C6DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6db0);
    /* 004c6db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6db1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6db7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6dba: mov eax, dword ptr [eax + 0x404] */ r_eax = R32((u32)(r_eax+0x404u));
    /* 004c6dc0: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6dc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6dc3: ret  */ FN_RET(0x004c6db0); r_esp += 4; return;
}

void f_004c6e30(void) /* sub_4C6E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6e30);
    /* 004c6e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6e31: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6e37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6e3a: mov eax, dword ptr [eax + 0x40c] */ r_eax = R32((u32)(r_eax+0x40cu));
    /* 004c6e40: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6e42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6e43: ret  */ FN_RET(0x004c6e30); r_esp += 4; return;
}

void f_004c6e70(void) /* sub_4C6E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6e70);
    /* 004c6e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6e71: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6e77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6e7a: mov eax, dword ptr [eax + 0x420] */ r_eax = R32((u32)(r_eax+0x420u));
    /* 004c6e80: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6e82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6e83: ret  */ FN_RET(0x004c6e70); r_esp += 4; return;
}

void f_004c6eb0(void) /* sub_4C6EB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6eb0);
    /* 004c6eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6eb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6eba: mov al, byte ptr [eax + 0x424] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x424u))) & 0xffu);
    /* 004c6ec0: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6ec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6ec3: ret  */ FN_RET(0x004c6eb0); r_esp += 4; return;
}

void f_004c6ed0(void) /* sub_4C6ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6ed0);
    /* 004c6ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6eda: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004c6edd: mov byte ptr [eax + 0x424], cl */ W8((u32)(r_eax+0x424u), (u8)r_ecx);
    /* 004c6ee3: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6ee5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6ee6: ret 4 */ FN_RET(0x004c6ed0); r_esp += 8; return;
}

void f_004c6ef0(void) /* sub_4C6EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6ef0);
    /* 004c6ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6ef7: cmp dword ptr [ebp + 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6efb: jne 0x4c6f16 */ if (!fZ) goto L_004c6f16;
L_004c6efd:; BB(0x004c6efd);
    /* 004c6efd: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c6f01: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004c6f03: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004c6f05: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c6f08: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c6f0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6f0e: add eax, dword ptr [ecx + 0x410] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c6f14: jmp 0x4c6f2a */ goto L_004c6f2a;
L_004c6f16:; BB(0x004c6f16);
    /* 004c6f16: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c6f1a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004c6f1c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004c6f1e: and eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c6f21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6f24: add eax, dword ptr [edx + 0x410] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x410u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004c6f2a:; BB(0x004c6f2a);
    /* 004c6f2a: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6f2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6f2d: ret 8 */ FN_RET(0x004c6ef0); r_esp += 12; return;
}

void f_004c6f50(void) /* sub_4C6F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6f50);
    /* 004c6f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f51: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6f57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6f5a: mov eax, dword ptr [eax + 0x414] */ r_eax = R32((u32)(r_eax+0x414u));
    /* 004c6f60: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6f62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6f63: ret  */ FN_RET(0x004c6f50); r_esp += 4; return;
}

void f_004c6f90(void) /* sub_4C6F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6f90);
    /* 004c6f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f91: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6f97: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c6f9b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004c6f9d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004c6f9f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c6fa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6fa4: add eax, dword ptr [ecx + 0x418] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x418u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c6faa: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6fac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6fad: ret 8 */ FN_RET(0x004c6f90); r_esp += 12; return;
}

void f_004c6fd0(void) /* sub_4C6FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6fd0);
    /* 004c6fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6fd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6fda: mov eax, dword ptr [eax + 0x41c] */ r_eax = R32((u32)(r_eax+0x41cu));
    /* 004c6fe0: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6fe2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6fe3: ret  */ FN_RET(0x004c6fd0); r_esp += 4; return;
}

