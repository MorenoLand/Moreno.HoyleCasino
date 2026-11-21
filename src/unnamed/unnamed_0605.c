#include "protos.h"

void f_006050d0(void) /* sub_6050D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006050d0);
    /* 006050d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006050d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006050d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006050d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006050d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006050da: mov al, byte ptr [eax + 0x6c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x6cu))) & 0xffu);
    /* 006050dd: mov esp, ebp */ r_esp = r_ebp;
    /* 006050df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006050e0: ret  */ FN_RET(0x006050d0); r_esp += 4; return;
}

void f_006050f0(void) /* sub_6050F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006050f0);
    /* 006050f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006050f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006050f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006050f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006050f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006050fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006050fc: cmp dword ptr [eax + 0x80], 1 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605103: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00605106: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00605108: mov esp, ebp */ r_esp = r_ebp;
    /* 0060510a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060510b: ret  */ FN_RET(0x006050f0); r_esp += 4; return;
}

void f_00605110(void) /* sub_605110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605110);
    /* 00605110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605111: mov ebp, esp */ r_ebp = r_esp;
    /* 00605113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060511a: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x60511fu); f_006051d0();
    /* 0060511f: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605122: jne 0x605139 */ if (!fZ) goto L_00605139;
L_00605124:; BB(0x00605124);
    /* 00605124: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 00605128: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060512a: je 0x605134 */ if (fZ) goto L_00605134;
L_0060512c:; BB(0x0060512c);
    /* 0060512c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060512f: call 0x605400 */ r_esp -= 4; W32(r_esp, 0x605134u); f_00605400();
L_00605134:; BB(0x00605134);
    /* 00605134: jmp 0x6051bb */ goto L_006051bb;
L_00605139:; BB(0x00605139);
    /* 00605139: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060513c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060513f: cmp edx, dword ptr [ecx + 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x50u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00605142: jge 0x605152 */ if ((fS==fO)) goto L_00605152;
L_00605144:; BB(0x00605144);
    /* 00605144: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605147: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060514a: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0060514d: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 00605150: jmp 0x605174 */ goto L_00605174;
L_00605152:; BB(0x00605152);
    /* 00605152: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605155: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605158: cmp ecx, dword ptr [eax + 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060515b: jle 0x60516b */ if ((fZ||fS!=fO)) goto L_0060516b;
L_0060515d:; BB(0x0060515d);
    /* 0060515d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605160: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605163: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00605166: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 00605169: jmp 0x605174 */ goto L_00605174;
L_0060516b:; BB(0x0060516b);
    /* 0060516b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060516e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00605171: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
L_00605174:; BB(0x00605174);
    /* 00605174: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00605178: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060517a: je 0x605184 */ if (fZ) goto L_00605184;
L_0060517c:; BB(0x0060517c);
    /* 0060517c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060517f: call 0x605400 */ r_esp -= 4; W32(r_esp, 0x605184u); f_00605400();
L_00605184:; BB(0x00605184);
    /* 00605184: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605187: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060518b: je 0x6051ab */ if (fZ) goto L_006051ab;
L_0060518d:; BB(0x0060518d);
    /* 0060518d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605190: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x605195u); f_005f5400();
    /* 00605195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605196: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605199: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060519c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060519f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006051a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006051a4: mov ecx, eax */ r_ecx = r_eax;
    /* 006051a6: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 006051a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6051abu); call_ind(t); }
L_006051ab:; BB(0x006051ab);
    /* 006051ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006051ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006051b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006051b3: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006051b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6051bbu); call_ind(t); }
L_006051bb:; BB(0x006051bb);
    /* 006051bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006051bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006051be: ret 8 */ FN_RET(0x00605110); r_esp += 12; return;
}

void f_00605400(void) /* sub_605400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605400);
    /* 00605400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605401: mov ebp, esp */ r_ebp = r_esp;
    /* 00605403: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605406: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00605409: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060540c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060540f: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00605412: sub edx, dword ptr [ecx + 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x50u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00605415: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605416: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x60541bu); f_00686eba();
    /* 0060541b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060541e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00605421: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605424: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x605429u); f_006050f0();
    /* 00605429: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060542c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060542e: je 0x605444 */ if (fZ) goto L_00605444;
L_00605430:; BB(0x00605430);
    /* 00605430: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605433: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605436: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00605439: sub eax, dword ptr [edx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060543c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060543f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00605442: jmp 0x605456 */ goto L_00605456;
L_00605444:; BB(0x00605444);
    /* 00605444: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605447: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060544a: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0060544d: sub eax, dword ptr [edx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00605450: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00605453: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00605456:; BB(0x00605456);
    /* 00605456: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00605459: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060545c: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 0060545f: fidiv dword ptr [ebp - 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffff4u));
    /* 00605462: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00605465: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605468: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x60546du); f_006051d0();
    /* 0060546d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605470: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00605473: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00605475: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605476: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x60547bu); f_00686eba();
    /* 0060547b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060547e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00605481: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605484: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605487: add eax, dword ptr [edx + 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x50u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060548a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060548d: cmp eax, dword ptr [ecx + 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605490: jne 0x6054db */ if (!fZ) goto L_006054db;
L_00605492:; BB(0x00605492);
    /* 00605492: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605495: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x60549au); f_006050f0();
    /* 0060549a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060549d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060549f: je 0x6054bd */ if (fZ) goto L_006054bd;
L_006054a1:; BB(0x006054a1);
    /* 006054a1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054a4: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006054a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006054a8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054ab: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006054ae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054b1: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 006054b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006054b6: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006054b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6054bbu); call_ind(t); }
    /* 006054bb: jmp 0x6054d9 */ goto L_006054d9;
L_006054bd:; BB(0x006054bd);
    /* 006054bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054c0: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 006054c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006054c4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054c7: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006054ca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054cd: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006054d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006054d2: mov ecx, eax */ r_ecx = r_eax;
    /* 006054d4: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 006054d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6054d9u); call_ind(t); }
L_006054d9:; BB(0x006054d9);
    /* 006054d9: jmp 0x605538 */ goto L_00605538;
L_006054db:; BB(0x006054db);
    /* 006054db: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054de: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x6054e3u); f_006050f0();
    /* 006054e3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006054e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006054e8: je 0x605513 */ if (fZ) goto L_00605513;
L_006054ea:; BB(0x006054ea);
    /* 006054ea: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 006054ed: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 006054f0: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6054f5u); f_00686cc0();
    /* 006054f5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054f8: add eax, dword ptr [edx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006054fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006054fc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006054ff: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00605502: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605505: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00605508: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060550a: mov ecx, eax */ r_ecx = r_eax;
    /* 0060550c: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0060550f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605511u); call_ind(t); }
    /* 00605511: jmp 0x605538 */ goto L_00605538;
L_00605513:; BB(0x00605513);
    /* 00605513: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00605516: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 00605519: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x60551eu); f_00686cc0();
    /* 0060551e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605521: add eax, dword ptr [ecx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00605524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605525: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605528: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0060552b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060552e: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00605531: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605533: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00605536: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605538u); call_ind(t); }
L_00605538:; BB(0x00605538);
    /* 00605538: mov esp, ebp */ r_esp = r_ebp;
    /* 0060553a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060553b: ret  */ FN_RET(0x00605400); r_esp += 4; return;
}

void f_00605ef0(void) /* sub_605EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605ef0);
    /* 00605ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00605ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605ef7: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00605efa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605efb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605efe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605eff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605f02: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 00605f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605f09: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605f0f: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x605f14u); f_005f2300();
    /* 00605f14: mov ecx, eax */ r_ecx = r_eax;
    /* 00605f16: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x605f1bu); f_005ff080();
    /* 00605f1b: mov ecx, eax */ r_ecx = r_eax;
    /* 00605f1d: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x605f22u); f_005f5400();
    /* 00605f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605f23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605f26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00605f28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605f2b: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00605f31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605f33u); call_ind(t); }
    /* 00605f33: mov esp, ebp */ r_esp = r_ebp;
    /* 00605f35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605f36: ret 8 */ FN_RET(0x00605ef0); r_esp += 12; return;
}

void f_00605f40(void) /* sub_605F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605f40);
    /* 00605f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00605f43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605f46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00605f47: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00605f4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00605f51: jmp 0x605f5c */ goto L_00605f5c;
L_00605f53:; BB(0x00605f53);
    /* 00605f53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605f56: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00605f59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00605f5c:; BB(0x00605f5c);
    /* 00605f5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605f5f: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 00605f65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605f66: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605f6c: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x605f71u); f_005f2300();
    /* 00605f71: mov ecx, eax */ r_ecx = r_eax;
    /* 00605f73: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x605f78u); f_005feda0();
    /* 00605f78: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00605f7b: jge 0x605fd9 */ if ((fS==fO)) goto L_00605fd9;
L_00605f7d:; BB(0x00605f7d);
    /* 00605f7d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605f80: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00605f86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00605f89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605f8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605f8d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605f90: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00605f96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605f97: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605f9d: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x605fa2u); f_005f2300();
    /* 00605fa2: mov ecx, eax */ r_ecx = r_eax;
    /* 00605fa4: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x605fa9u); f_005ff080();
    /* 00605fa9: mov esi, eax */ r_esi = r_eax;
    /* 00605fab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00605fae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605faf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605fb2: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00605fb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605fb9: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00605fbf: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x605fc4u); f_005f2300();
    /* 00605fc4: mov ecx, eax */ r_ecx = r_eax;
    /* 00605fc6: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x605fcbu); f_005ff060();
    /* 00605fcb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605fcd: jne 0x605fd4 */ if (!fZ) goto L_00605fd4;
L_00605fcf:; BB(0x00605fcf);
    /* 00605fcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605fd2: jmp 0x605fdc */ goto L_00605fdc;
L_00605fd4:; BB(0x00605fd4);
    /* 00605fd4: jmp 0x605f53 */ goto L_00605f53;
L_00605fd9:; BB(0x00605fd9);
    /* 00605fd9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00605fdc:; BB(0x00605fdc);
    /* 00605fdc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00605fdd: mov esp, ebp */ r_esp = r_ebp;
    /* 00605fdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605fe0: ret  */ FN_RET(0x00605f40); r_esp += 4; return;
}

