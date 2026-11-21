#include "protos.h"

void f_004020a0(void) /* sub_4020A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004020a0);
    /* 004020a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004020a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004020a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004020a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004020a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004020ab: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004020af: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004020b2: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
    /* 004020b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004020b7: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004020bb: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004020be: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004020c1: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004020c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004020c7: je 0x4020e1 */ if (fZ) goto L_004020e1;
L_004020c9:; BB(0x004020c9);
    /* 004020c9: movzx eax, byte ptr [ebp - 2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 004020cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004020cf: je 0x4020da */ if (fZ) goto L_004020da;
L_004020d1:; BB(0x004020d1);
    /* 004020d1: mov eax, 0x31128a */ r_eax = 0x31128au;
    /* 004020d6: jmp 0x4020f5 */ goto L_004020f5;
L_004020da:; BB(0x004020da);
    /* 004020da: mov eax, 0x31128c */ r_eax = 0x31128cu;
    /* 004020df: jmp 0x4020f5 */ goto L_004020f5;
L_004020e1:; BB(0x004020e1);
    /* 004020e1: movzx ecx, byte ptr [ebp - 2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 004020e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004020e7: je 0x4020f0 */ if (fZ) goto L_004020f0;
L_004020e9:; BB(0x004020e9);
    /* 004020e9: mov eax, 0x31128b */ r_eax = 0x31128bu;
    /* 004020ee: jmp 0x4020f5 */ goto L_004020f5;
L_004020f0:; BB(0x004020f0);
    /* 004020f0: mov eax, 0x31128d */ r_eax = 0x31128du;
L_004020f5:; BB(0x004020f5);
    /* 004020f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004020f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004020f8: ret 8 */ FN_RET(0x004020a0); r_esp += 12; return;
}

void f_00402100(void) /* sub_402100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402100);
    /* 00402100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402101: mov ebp, esp */ r_ebp = r_esp;
    /* 00402103: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402106: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00402107: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040210a: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00402111: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00402118: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0040211f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00402126: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040212d: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00402132: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402135: mov cl, byte ptr [eax + 0xb3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xb3u))) & 0xffu);
    /* 0040213b: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 0040213e: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00402142: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402144: jne 0x402159 */ if (!fZ) goto L_00402159;
L_00402146:; BB(0x00402146);
    /* 00402146: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040214a: jne 0x402152 */ if (!fZ) goto L_00402152;
L_0040214c:; BB(0x0040214c);
    /* 0040214c: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402150: je 0x402159 */ if (fZ) goto L_00402159;
L_00402152:; BB(0x00402152);
    /* 00402152: mov eax, 0x35 */ r_eax = 0x35u;
    /* 00402157: jmp 0x4021a6 */ goto L_004021a6;
L_00402159:; BB(0x00402159);
    /* 00402159: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0040215d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040215e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x402163u); f_00641280();
    /* 00402163: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402166: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402169: jne 0x402181 */ if (!fZ) goto L_00402181;
L_0040216b:; BB(0x0040216b);
    /* 0040216b: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0040216f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402170: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x402175u); f_00641290();
    /* 00402175: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402178: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0040217c: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040217f: jmp 0x4021a6 */ goto L_004021a6;
L_00402181:; BB(0x00402181);
    /* 00402181: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00402185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402186: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x40218bu); f_00641290();
    /* 0040218b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040218e: mov esi, dword ptr [ebp + eax*4 - 0x14] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00402192: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00402195: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00402199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040219a: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x40219fu); f_00641280();
    /* 0040219f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004021a2: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
L_004021a6:; BB(0x004021a6);
    /* 004021a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004021a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004021a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004021aa: ret 0xc */ FN_RET(0x00402100); r_esp += 16; return;
}

void f_004021b0(void) /* sub_4021B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004021b0);
    /* 004021b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004021b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004021b3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004021b6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004021b9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004021bd: jne 0x4021df */ if (!fZ) goto L_004021df;
L_004021bf:; BB(0x004021bf);
    /* 004021bf: mov dword ptr [ebp - 0xc], 0xdc */ W32((u32)(r_ebp+0xfffffff4u), 0xdcu);
    /* 004021c6: mov dword ptr [ebp - 8], 0xf0 */ W32((u32)(r_ebp+0xfffffff8u), 0xf0u);
    /* 004021cd: mov dword ptr [ebp - 4], 0xf2 */ W32((u32)(r_ebp+0xfffffffcu), 0xf2u);
    /* 004021d4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004021d7: mov eax, dword ptr [ebp + eax*4 - 0xc] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 004021db: jmp 0x402205 */ goto L_00402205;
L_004021df:; BB(0x004021df);
    /* 004021df: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004021e3: jne 0x402203 */ if (!fZ) goto L_00402203;
L_004021e5:; BB(0x004021e5);
    /* 004021e5: mov dword ptr [ebp - 0x18], 0x147 */ W32((u32)(r_ebp+0xffffffe8u), 0x147u);
    /* 004021ec: mov dword ptr [ebp - 0x14], 0x15b */ W32((u32)(r_ebp+0xffffffecu), 0x15bu);
    /* 004021f3: mov dword ptr [ebp - 0x10], 0x15d */ W32((u32)(r_ebp+0xfffffff0u), 0x15du);
    /* 004021fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004021fd: mov eax, dword ptr [ebp + ecx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00402201: jmp 0x402205 */ goto L_00402205;
L_00402203:; BB(0x00402203);
    /* 00402203: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00402205:; BB(0x00402205);
    /* 00402205: mov esp, ebp */ r_esp = r_ebp;
    /* 00402207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402208: ret 8 */ FN_RET(0x004021b0); r_esp += 12; return;
}

void f_00402210(void) /* sub_402210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402210);
    /* 00402210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402211: mov ebp, esp */ r_ebp = r_esp;
    /* 00402213: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402216: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00402219: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040221d: jne 0x40223f */ if (!fZ) goto L_0040223f;
L_0040221f:; BB(0x0040221f);
    /* 0040221f: mov dword ptr [ebp - 0xc], 0x65 */ W32((u32)(r_ebp+0xfffffff4u), 0x65u);
    /* 00402226: mov dword ptr [ebp - 8], 0x61 */ W32((u32)(r_ebp+0xfffffff8u), 0x61u);
    /* 0040222d: mov dword ptr [ebp - 4], 0x68 */ W32((u32)(r_ebp+0xfffffffcu), 0x68u);
    /* 00402234: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402237: mov eax, dword ptr [ebp + eax*4 - 0xc] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 0040223b: jmp 0x402265 */ goto L_00402265;
L_0040223f:; BB(0x0040223f);
    /* 0040223f: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402243: jne 0x402263 */ if (!fZ) goto L_00402263;
L_00402245:; BB(0x00402245);
    /* 00402245: mov dword ptr [ebp - 0x18], 0x65 */ W32((u32)(r_ebp+0xffffffe8u), 0x65u);
    /* 0040224c: mov dword ptr [ebp - 0x14], 0x61 */ W32((u32)(r_ebp+0xffffffecu), 0x61u);
    /* 00402253: mov dword ptr [ebp - 0x10], 0x68 */ W32((u32)(r_ebp+0xfffffff0u), 0x68u);
    /* 0040225a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040225d: mov eax, dword ptr [ebp + ecx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00402261: jmp 0x402265 */ goto L_00402265;
L_00402263:; BB(0x00402263);
    /* 00402263: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00402265:; BB(0x00402265);
    /* 00402265: mov esp, ebp */ r_esp = r_ebp;
    /* 00402267: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402268: ret 8 */ FN_RET(0x00402210); r_esp += 12; return;
}

void f_00402270(void) /* sub_402270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402270);
    /* 00402270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402271: mov ebp, esp */ r_ebp = r_esp;
    /* 00402273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402277: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040227b: jne 0x40227f */ if (!fZ) goto L_0040227f;
L_0040227d:; BB(0x0040227d);
    /* 0040227d: jmp 0x4022b0 */ goto L_004022b0;
L_0040227f:; BB(0x0040227f);
    /* 0040227f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402282: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402285: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040228a: je 0x4022b0 */ if (fZ) goto L_004022b0;
L_0040228c:; BB(0x0040228c);
    /* 0040228c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040228e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00402291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402292: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402295: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402298: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040229c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040229f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004022a2: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004022a6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004022a8: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004022ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4022b0u); call_ind(t); }
L_004022b0:; BB(0x004022b0);
    /* 004022b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004022b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004022b3: ret 8 */ FN_RET(0x00402270); r_esp += 12; return;
}

void f_00402300(void) /* sub_402300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402300);
    /* 00402300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402301: mov ebp, esp */ r_ebp = r_esp;
    /* 00402303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402307: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040230a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040230d: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402312: je 0x402329 */ if (fZ) goto L_00402329;
L_00402314:; BB(0x00402314);
    /* 00402314: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402316: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00402319: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040231a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040231d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402320: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00402324: call 0x5cc440 */ r_esp -= 4; W32(r_esp, 0x402329u); f_005cc440();
L_00402329:; BB(0x00402329);
    /* 00402329: mov esp, ebp */ r_esp = r_ebp;
    /* 0040232b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040232c: ret 8 */ FN_RET(0x00402300); r_esp += 12; return;
}

void f_00402370(void) /* sub_402370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402370);
    /* 00402370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402371: mov ebp, esp */ r_ebp = r_esp;
    /* 00402373: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402376: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00402379: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00402380: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00402387: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040238d: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x402392u); f_004091b0();
    /* 00402392: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00402395: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040239b: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x4023a0u); f_004091d0();
    /* 004023a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004023a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004023aa: jmp 0x4023b5 */ goto L_004023b5;
L_004023ac:; BB(0x004023ac);
    /* 004023ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004023af: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004023b2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004023b5:; BB(0x004023b5);
    /* 004023b5: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004023b9: jge 0x4023d8 */ if ((fS==fO)) goto L_004023d8;
L_004023bb:; BB(0x004023bb);
    /* 004023bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004023be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004023c1: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 004023c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004023c8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004023cb: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 004023cf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004023d1: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004023d4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4023d6u); call_ind(t); }
    /* 004023d6: jmp 0x4023ac */ goto L_004023ac;
L_004023d8:; BB(0x004023d8);
    /* 004023d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004023db: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004023de: jne 0x402410 */ if (!fZ) goto L_00402410;
L_004023e0:; BB(0x004023e0);
    /* 004023e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004023e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004023e5: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 004023e8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004023eb: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004023ee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004023f0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004023f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4023f8u); call_ind(t); }
    /* 004023f8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004023fb: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 004023fe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402401: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00402404: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00402406: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00402409: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40240bu); call_ind(t); }
    /* 0040240b: jmp 0x4024ae */ goto L_004024ae;
L_00402410:; BB(0x00402410);
    /* 00402410: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402413: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402416: jle 0x402428 */ if ((fZ||fS!=fO)) goto L_00402428;
L_00402418:; BB(0x00402418);
    /* 00402418: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040241f: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00402426: jmp 0x402436 */ goto L_00402436;
L_00402428:; BB(0x00402428);
    /* 00402428: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0040242f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00402436:; BB(0x00402436);
    /* 00402436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402438: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040243b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040243e: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00402442: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402445: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402448: mov edx, dword ptr [eax + edx*4 + 0x5c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 0040244c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0040244e: mov ecx, edx */ r_ecx = r_edx;
    /* 00402450: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00402456: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x402458u); call_ind(t); }
    /* 00402458: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040245a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040245d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402460: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00402464: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402467: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040246a: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0040246e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00402470: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00402476: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402478u); call_ind(t); }
    /* 00402478: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040247b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040247e: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00402482: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402485: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402488: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0040248c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040248e: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00402491: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x402493u); call_ind(t); }
    /* 00402493: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402496: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402499: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0040249d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004024a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004024a3: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 004024a7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004024a9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004024ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4024aeu); call_ind(t); }
L_004024ae:; BB(0x004024ae);
    /* 004024ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004024b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004024b1: ret  */ FN_RET(0x00402370); r_esp += 4; return;
}

void f_004024c0(void) /* sub_4024C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004024c0);
    /* 004024c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004024c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004024c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004024c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004024c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004024d0: jmp 0x4024db */ goto L_004024db;
L_004024d2:; BB(0x004024d2);
    /* 004024d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004024d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004024d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004024db:; BB(0x004024db);
    /* 004024db: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004024df: jge 0x4024fe */ if ((fS==fO)) goto L_004024fe;
L_004024e1:; BB(0x004024e1);
    /* 004024e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004024e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004024e7: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 004024eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004024ee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004024f1: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 004024f5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004024f7: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004024fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4024fcu); call_ind(t); }
    /* 004024fc: jmp 0x4024d2 */ goto L_004024d2;
L_004024fe:; BB(0x004024fe);
    /* 004024fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00402500: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402501: ret  */ FN_RET(0x004024c0); r_esp += 4; return;
}

void f_004027b0(void) /* sub_4027B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004027b0);
    /* 004027b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004027b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004027b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004027b5: push 0x69d657 */ { u32 v = 0x69d657u; r_esp -= 4; W32(r_esp, v); }
    /* 004027ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004027c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004027c1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004027c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004027c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004027cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004027cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004027cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004027d5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004027d8: mov dword ptr [ebp - 0x1c], 0x4e */ W32((u32)(r_ebp+0xffffffe4u), 0x4eu);
    /* 004027df: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004027e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004027e5: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004027e8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004027eb: cmp dword ptr [edx + 4], 4 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004027ef: je 0x4028b9 */ if (fZ) goto L_004028b9;
L_004027f5:; BB(0x004027f5);
    /* 004027f5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004027f8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004027fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004027fc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00402802: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x402807u); f_00639110();
    /* 00402807: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402809: je 0x4028b9 */ if (fZ) goto L_004028b9;
L_0040280f:; BB(0x0040280f);
    /* 0040280f: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00402814: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x402819u); f_00686d82();
    /* 00402819: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040281c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040281f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402826: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040282a: je 0x402839 */ if (fZ) goto L_00402839;
L_0040282c:; BB(0x0040282c);
    /* 0040282c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040282f: call 0x402510 */ r_esp -= 4; W32(r_esp, 0x402834u); f_00402510();
    /* 00402834: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00402837: jmp 0x402840 */ goto L_00402840;
L_00402839:; BB(0x00402839);
    /* 00402839: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00402840:; BB(0x00402840);
    /* 00402840: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00402843: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00402846: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040284d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00402850: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00402853: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00402856: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00402859: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040285c: mov ecx, dword ptr [eax*8 + 0x705158] */ r_ecx = R32((u32)(r_eax*8+0x705158u));
    /* 00402863: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00402866: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00402869: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040286c: mov ecx, dword ptr [eax*8 + 0x70515c] */ r_ecx = R32((u32)(r_eax*8+0x70515cu));
    /* 00402873: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00402876: mov dword ptr [ebp - 0x20], 0xc8 */ W32((u32)(r_ebp+0xffffffe0u), 0xc8u);
    /* 0040287d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040287f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00402882: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402883: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402887: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040288a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040288b: push 0x31128f */ { u32 v = 0x31128fu; r_esp -= 4; W32(r_esp, v); }
    /* 00402890: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00402893: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00402896: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40289bu); f_005eae80();
    /* 0040289b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040289e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004028a1: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004028a4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004028a7: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004028aa: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004028ad: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004028b0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004028b3: mov dword ptr [ecx + 0x178], edx */ W32((u32)(r_ecx+0x178u), r_edx);
L_004028b9:; BB(0x004028b9);
    /* 004028b9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004028bc: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004028c0: je 0x4028cf */ if (fZ) goto L_004028cf;
L_004028c2:; BB(0x004028c2);
    /* 004028c2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004028c5: cmp dword ptr [ecx + 4], 4 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004028c9: jne 0x40294f */ if (!fZ) goto L_0040294f;
L_004028cf:; BB(0x004028cf);
    /* 004028cf: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004028d6: jmp 0x4028e1 */ goto L_004028e1;
L_004028d8:; BB(0x004028d8);
    /* 004028d8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004028db: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004028de: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_004028e1:; BB(0x004028e1);
    /* 004028e1: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004028e5: jge 0x40294f */ if ((fS==fO)) goto L_0040294f;
L_004028e7:; BB(0x004028e7);
    /* 004028e7: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004028ec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4028f1u); f_00686d82();
    /* 004028f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004028f4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004028f7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004028fe: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402902: je 0x402911 */ if (fZ) goto L_00402911;
L_00402904:; BB(0x00402904);
    /* 00402904: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00402907: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x40290cu); f_005eaaf0();
    /* 0040290c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0040290f: jmp 0x402918 */ goto L_00402918;
L_00402911:; BB(0x00402911);
    /* 00402911: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00402918:; BB(0x00402918);
    /* 00402918: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040291b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040291e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00402925: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402928: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040292b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040292e: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 00402932: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402935: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00402938: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0040293c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040293f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00402942: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00402946: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00402948: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0040294b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40294du); call_ind(t); }
    /* 0040294d: jmp 0x4028d8 */ goto L_004028d8;
L_0040294f:; BB(0x0040294f);
    /* 0040294f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402952: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00402959: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040295a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040295c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040295d: ret 4 */ FN_RET(0x004027b0); r_esp += 8; return;
}

void f_00402960(void) /* sub_402960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402960);
    /* 00402960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402961: mov ebp, esp */ r_ebp = r_esp;
    /* 00402963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402966: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00402969: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040296c: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402970: je 0x4029d4 */ if (fZ) goto L_004029d4;
L_00402972:; BB(0x00402972);
    /* 00402972: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402975: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00402978: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402979: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040297f: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x402984u); f_00639110();
    /* 00402984: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402986: je 0x4029c0 */ if (fZ) goto L_004029c0;
L_00402988:; BB(0x00402988);
    /* 00402988: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0040298a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040298d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00402990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402991: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00402997: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x40299cu); f_00639110();
    /* 0040299c: mov ecx, eax */ r_ecx = r_eax;
    /* 0040299e: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x4029a3u); f_00646380();
    /* 004029a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004029a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004029a7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004029aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004029ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004029ae: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004029b4: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x4029b9u); f_00639110();
    /* 004029b9: mov ecx, eax */ r_ecx = r_eax;
    /* 004029bb: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x4029c0u); f_006464d0();
L_004029c0:; BB(0x004029c0);
    /* 004029c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004029c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004029c5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004029c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004029c9: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004029cf: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x4029d4u); f_005d9180();
L_004029d4:; BB(0x004029d4);
    /* 004029d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004029d7: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004029db: je 0x4029ea */ if (fZ) goto L_004029ea;
L_004029dd:; BB(0x004029dd);
    /* 004029dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004029e0: cmp dword ptr [ecx + 4], 4 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004029e4: jne 0x402a6e */ if (!fZ) goto L_00402a6e;
L_004029ea:; BB(0x004029ea);
    /* 004029ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004029f1: jmp 0x4029fc */ goto L_004029fc;
L_004029f3:; BB(0x004029f3);
    /* 004029f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004029f6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004029f9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004029fc:; BB(0x004029fc);
    /* 004029fc: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402a00: jge 0x402a1f */ if ((fS==fO)) goto L_00402a1f;
L_00402a02:; BB(0x00402a02);
    /* 00402a02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402a05: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a08: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00402a0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402a0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a12: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00402a16: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00402a18: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00402a1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402a1du); call_ind(t); }
    /* 00402a1d: jmp 0x4029f3 */ goto L_004029f3;
L_00402a1f:; BB(0x00402a1f);
    /* 00402a1f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402a26: jmp 0x402a31 */ goto L_00402a31;
L_00402a28:; BB(0x00402a28);
    /* 00402a28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402a2b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402a2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00402a31:; BB(0x00402a31);
    /* 00402a31: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402a35: jge 0x402a6e */ if ((fS==fO)) goto L_00402a6e;
L_00402a37:; BB(0x00402a37);
    /* 00402a37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402a3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a3b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a3e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00402a41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a42: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00402a48: call 0x4093d0 */ r_esp -= 4; W32(r_esp, 0x402a4du); f_004093d0();
    /* 00402a4d: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00402a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402a52: jne 0x402a56 */ if (!fZ) goto L_00402a56;
L_00402a54:; BB(0x00402a54);
    /* 00402a54: jmp 0x402a28 */ goto L_00402a28;
L_00402a56:; BB(0x00402a56);
    /* 00402a56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402a5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a5d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00402a60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402a61: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00402a67: call 0x401fd0 */ r_esp -= 4; W32(r_esp, 0x402a6cu); f_00401fd0();
    /* 00402a6c: jmp 0x402a28 */ goto L_00402a28;
L_00402a6e:; BB(0x00402a6e);
    /* 00402a6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a71: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402a75: je 0x402a8a */ if (fZ) goto L_00402a8a;
L_00402a77:; BB(0x00402a77);
    /* 00402a77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a7a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00402a7d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402a80: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00402a83: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00402a85: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00402a88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402a8au); call_ind(t); }
L_00402a8a:; BB(0x00402a8a);
    /* 00402a8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00402a8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402a8d: ret  */ FN_RET(0x00402960); r_esp += 4; return;
}

void f_00402c60(void) /* sub_402C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402c60);
    /* 00402c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00402c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402c67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402c6a: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00402c70: mov eax, dword ptr [ecx*4 + 0x7051b8] */ r_eax = R32((u32)(r_ecx*4+0x7051b8u));
    /* 00402c77: mov esp, ebp */ r_esp = r_ebp;
    /* 00402c79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402c7a: ret 8 */ FN_RET(0x00402c60); r_esp += 12; return;
}

void f_00402c80(void) /* sub_402C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402c80);
    /* 00402c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00402c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402c87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402c8a: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00402c90: mov eax, dword ptr [ecx*4 + 0x7051e8] */ r_eax = R32((u32)(r_ecx*4+0x7051e8u));
    /* 00402c97: mov esp, ebp */ r_esp = r_ebp;
    /* 00402c99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402c9a: ret 8 */ FN_RET(0x00402c80); r_esp += 12; return;
}

void f_00402da0(void) /* sub_402DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402da0);
    /* 00402da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00402da3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402da6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00402da9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402db0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00402db3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00402db6: cmp dword ptr [ebp - 0xc], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00402dba: ja 0x402def */ if ((!fC&&!fZ)) goto L_00402def;
L_00402dbc:; BB(0x00402dbc);
    /* 00402dbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402dbf: movzx edx, byte ptr [ecx + 0x402e90] */ r_edx = (u32)R8((u32)(r_ecx+0x402e90u));
    /* 00402dc6: jmp dword ptr [edx*4 + 0x402e7c] */ { u32 t = R32((u32)(r_edx*4+0x402e7cu)); switch (t) { case 0x402dd6u: goto L_00402dd6; case 0x402dcdu: goto L_00402dcd; case 0x402de8u: goto L_00402de8; case 0x402ddfu: goto L_00402ddf; case 0x402defu: goto L_00402def; default: UNSUP(0x00402dc6, "jump table entry is not a known target"); } }
L_00402dcd:; BB(0x00402dcd);
    /* 00402dcd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402dd4: jmp 0x402def */ goto L_00402def;
L_00402dd6:; BB(0x00402dd6);
    /* 00402dd6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00402ddd: jmp 0x402def */ goto L_00402def;
L_00402ddf:; BB(0x00402ddf);
    /* 00402ddf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402de6: jmp 0x402def */ goto L_00402def;
L_00402de8:; BB(0x00402de8);
    /* 00402de8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
L_00402def:; BB(0x00402def);
    /* 00402def: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402df2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402df3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402df6: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 00402dfc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402dff: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 00402e05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00402e07: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00402e0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402e0fu); call_ind(t); }
    /* 00402e0f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00402e12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e13: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00402e16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e17: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00402e1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e1f: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00402e25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402e27u); call_ind(t); }
    /* 00402e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402e28: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00402e2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e2c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00402e2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402e30: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00402e35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e38: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00402e3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402e40u); call_ind(t); }
    /* 00402e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402e41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e44: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 00402e4a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e4d: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 00402e53: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00402e55: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00402e58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402e5au); call_ind(t); }
    /* 00402e5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e5d: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 00402e63: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402e66: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 00402e6c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00402e6e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00402e71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402e73u); call_ind(t); }
    /* 00402e73: mov esp, ebp */ r_esp = r_ebp;
    /* 00402e75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402e76: ret 0xc */ FN_RET(0x00402da0); r_esp += 16; return;
}

void f_00402ea0(void) /* sub_402EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402ea0);
    /* 00402ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00402ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402eaa: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 00402eb0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402eb3: mov eax, dword ptr [edx + 0xae4] */ r_eax = R32((u32)(r_edx+0xae4u));
    /* 00402eb9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00402ebb: mov ecx, eax */ r_ecx = r_eax;
    /* 00402ebd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00402ec0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402ec2u); call_ind(t); }
    /* 00402ec2: mov esp, ebp */ r_esp = r_ebp;
    /* 00402ec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402ec5: ret  */ FN_RET(0x00402ea0); r_esp += 4; return;
}

