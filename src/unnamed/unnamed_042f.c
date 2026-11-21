#include "protos.h"

void f_0042f040(void) /* sub_42F040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042f040);
    /* 0042f040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f041: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042f047: push 0x6b7328 */ { u32 v = 0x6b7328u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f04c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42f051u); f_0062fde0();
    /* 0042f051: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f054: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f058: je 0x42f071 */ if (fZ) goto L_0042f071;
L_0042f05a:; BB(0x0042f05a);
    /* 0042f05a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f05e: je 0x42f071 */ if (fZ) goto L_0042f071;
L_0042f060:; BB(0x0042f060);
    /* 0042f060: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042f063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f064: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042f067: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042f069: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042f06c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f06f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f071u); call_ind(t); }
L_0042f071:; BB(0x0042f071);
    /* 0042f071: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f073: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042f076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f077: push 0xd0ca */ { u32 v = 0xd0cau; r_esp -= 4; W32(r_esp, v); }
    /* 0042f07c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f07f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42f084u); f_005cd800();
    /* 0042f084: mov esp, ebp */ r_esp = r_ebp;
    /* 0042f086: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f087: ret 8 */ FN_RET(0x0042f040); r_esp += 12; return;
}

void f_0042f120(void) /* sub_42F120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042f120);
    /* 0042f120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f121: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042f127: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f12a: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0042f12e: mov esp, ebp */ r_esp = r_ebp;
    /* 0042f130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f131: ret  */ FN_RET(0x0042f120); r_esp += 4; return;
}

void f_0042f140(void) /* sub_42F140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042f140);
    /* 0042f140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f141: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042f147: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f14a: mov byte ptr [eax + 5], 0 */ W8((u32)(r_eax+0x5u), 0x0u);
    /* 0042f14e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f151: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 0042f155: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f158: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 0042f15c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f15f: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0042f163: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f166: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0042f16a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f16d: mov byte ptr [edx + 0xa], 0 */ W8((u32)(r_edx+0xau), 0x0u);
    /* 0042f171: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f174: mov byte ptr [eax + 0xb], 0 */ W8((u32)(r_eax+0xbu), 0x0u);
    /* 0042f178: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f17b: mov byte ptr [ecx + 0xc], 0 */ W8((u32)(r_ecx+0xcu), 0x0u);
    /* 0042f17f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f182: mov byte ptr [edx + 0xd], 0 */ W8((u32)(r_edx+0xdu), 0x0u);
    /* 0042f186: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f189: mov byte ptr [eax + 0xe], 0 */ W8((u32)(r_eax+0xeu), 0x0u);
    /* 0042f18d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f190: mov byte ptr [ecx + 0xf], 0 */ W8((u32)(r_ecx+0xfu), 0x0u);
    /* 0042f194: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f197: mov byte ptr [edx + 0x10], 0 */ W8((u32)(r_edx+0x10u), 0x0u);
    /* 0042f19b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f19e: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 0042f1a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f1a5: mov byte ptr [ecx + 0x12], 0 */ W8((u32)(r_ecx+0x12u), 0x0u);
    /* 0042f1a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f1ac: mov byte ptr [edx + 0x13], 0 */ W8((u32)(r_edx+0x13u), 0x0u);
    /* 0042f1b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f1b3: mov byte ptr [eax + 0x14], 0 */ W8((u32)(r_eax+0x14u), 0x0u);
    /* 0042f1b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f1ba: mov byte ptr [ecx + 0x15], 0 */ W8((u32)(r_ecx+0x15u), 0x0u);
    /* 0042f1be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f1c1: mov byte ptr [edx + 0x16], 0 */ W8((u32)(r_edx+0x16u), 0x0u);
    /* 0042f1c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f1c8: mov byte ptr [eax + 0x17], 0 */ W8((u32)(r_eax+0x17u), 0x0u);
    /* 0042f1cc: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f1d0: jne 0x42f1fe */ if (!fZ) goto L_0042f1fe;
L_0042f1d2:; BB(0x0042f1d2);
    /* 0042f1d2: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f1d8: call 0x434620 */ r_esp -= 4; W32(r_esp, 0x42f1ddu); f_00434620();
    /* 0042f1dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042f1e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f1e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f1e3: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 0042f1e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f1ec: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042f1f2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042f1f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042f1f7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f1fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f1fcu); call_ind(t); }
    /* 0042f1fc: jmp 0x42f220 */ goto L_0042f220;
L_0042f1fe:; BB(0x0042f1fe);
    /* 0042f1fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042f201: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f202: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f207: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 0042f20d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f210: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042f216: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042f219: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042f21b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f21e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f220u); call_ind(t); }
L_0042f220:; BB(0x0042f220);
    /* 0042f220: mov esp, ebp */ r_esp = r_ebp;
    /* 0042f222: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f223: ret 4 */ FN_RET(0x0042f140); r_esp += 8; return;
}

void f_0042f230(void) /* sub_42F230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042f230);
    /* 0042f230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f231: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f233: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042f239: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0042f23c: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f242: call 0x4299b0 */ r_esp -= 4; W32(r_esp, 0x42f247u); f_004299b0();
    /* 0042f247: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f249: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f24e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f251: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042f257: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f25a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042f25c: mov ecx, eax */ r_ecx = r_eax;
    /* 0042f25e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f261: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f263u); call_ind(t); }
    /* 0042f263: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f269: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 0042f26f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0042f272: cmp dword ptr [ebp - 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f276: je 0x42f285 */ if (fZ) goto L_0042f285;
L_0042f278:; BB(0x0042f278);
    /* 0042f278: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f27b: call 0x430220 */ r_esp -= 4; W32(r_esp, 0x42f280u); f_00430220();
    /* 0042f280: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f285:; BB(0x0042f285);
    /* 0042f285: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f288: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0042f28c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f28e: jne 0x42f2dc */ if (!fZ) goto L_0042f2dc;
L_0042f290:; BB(0x0042f290);
    /* 0042f290: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f293: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 0042f297: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042f29c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042f29f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042f2a2: mov dword ptr [ecx + 0xae4], 4 */ W32((u32)(r_ecx+0xae4u), 0x4u);
    /* 0042f2ac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042f2af: mov dword ptr [edx + 0xae8], 4 */ W32((u32)(r_edx+0xae8u), 0x4u);
    /* 0042f2b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f2bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f2bd: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f2c2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f2c5: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042f2cb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f2ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042f2d0: mov ecx, eax */ r_ecx = r_eax;
    /* 0042f2d2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f2d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f2d7u); call_ind(t); }
    /* 0042f2d7: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f2dc:; BB(0x0042f2dc);
    /* 0042f2dc: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f2e2: call 0x434c40 */ r_esp -= 4; W32(r_esp, 0x42f2e7u); f_00434c40();
    /* 0042f2e7: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f2ed: call 0x4351b0 */ r_esp -= 4; W32(r_esp, 0x42f2f2u); f_004351b0();
    /* 0042f2f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042f2f5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042f2fb: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0042f2fe: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 0042f301: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0042f305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f307: je 0x42f383 */ if (fZ) goto L_0042f383;
L_0042f309:; BB(0x0042f309);
    /* 0042f309: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f30d: je 0x42f383 */ if (fZ) goto L_0042f383;
L_0042f30f:; BB(0x0042f30f);
    /* 0042f30f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f312: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f313: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42f318u); f_005dcb00();
    /* 0042f318: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f31b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042f31e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042f321: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42f326u); f_0063aac0();
    /* 0042f326: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042f328: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0042f32b: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f32f: je 0x42f34d */ if (fZ) goto L_0042f34d;
L_0042f331:; BB(0x0042f331);
    /* 0042f331: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042f334: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42f339u); f_0063aac0();
    /* 0042f339: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042f33b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042f33e: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f342: je 0x42f34d */ if (fZ) goto L_0042f34d;
L_0042f344:; BB(0x0042f344);
    /* 0042f344: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0042f34b: jmp 0x42f354 */ goto L_0042f354;
L_0042f34d:; BB(0x0042f34d);
    /* 0042f34d: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
L_0042f354:; BB(0x0042f354);
    /* 0042f354: movzx ecx, byte ptr [ebp - 0x78] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff88u));
    /* 0042f358: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f35a: je 0x42f383 */ if (fZ) goto L_0042f383;
L_0042f35c:; BB(0x0042f35c);
    /* 0042f35c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f35f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f360: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42f365u); f_005dcb00();
    /* 0042f365: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f368: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042f36b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042f36e: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0042f375: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f37b: call 0x4351b0 */ r_esp -= 4; W32(r_esp, 0x42f380u); f_004351b0();
    /* 0042f380: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042f383:; BB(0x0042f383);
    /* 0042f383: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f387: je 0x42f3f2 */ if (fZ) goto L_0042f3f2;
L_0042f389:; BB(0x0042f389);
    /* 0042f389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f38c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f38d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42f392u); f_005dcb00();
    /* 0042f392: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f395: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0042f398: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042f39b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42f3a0u); f_0063aac0();
    /* 0042f3a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042f3a2: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0042f3a5: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f3a9: je 0x42f3c7 */ if (fZ) goto L_0042f3c7;
L_0042f3ab:; BB(0x0042f3ab);
    /* 0042f3ab: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042f3ae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42f3b3u); f_0063aac0();
    /* 0042f3b3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042f3b5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0042f3b8: cmp dword ptr [ebp - 0x34], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f3bc: je 0x42f3c7 */ if (fZ) goto L_0042f3c7;
L_0042f3be:; BB(0x0042f3be);
    /* 0042f3be: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0042f3c5: jmp 0x42f3ce */ goto L_0042f3ce;
L_0042f3c7:; BB(0x0042f3c7);
    /* 0042f3c7: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
L_0042f3ce:; BB(0x0042f3ce);
    /* 0042f3ce: mov cl, byte ptr [ebp - 0x7c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff84u))) & 0xffu);
    /* 0042f3d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f3d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f3d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f3d6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f3dc: call 0x434bd0 */ r_esp -= 4; W32(r_esp, 0x42f3e1u); f_00434bd0();
    /* 0042f3e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f3e5: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f3e8: call 0x42fa90 */ r_esp -= 4; W32(r_esp, 0x42f3edu); f_0042fa90();
    /* 0042f3ed: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f3f2:; BB(0x0042f3f2);
    /* 0042f3f2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f3f5: movzx edx, byte ptr [ecx + 0x17] */ r_edx = (u32)R8((u32)(r_ecx+0x17u));
    /* 0042f3f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f3fb: jne 0x42f40f */ if (!fZ) goto L_0042f40f;
L_0042f3fd:; BB(0x0042f3fd);
    /* 0042f3fd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f403: call 0x436460 */ r_esp -= 4; W32(r_esp, 0x42f408u); f_00436460();
    /* 0042f408: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f40b: mov byte ptr [eax + 0x17], 1 */ W8((u32)(r_eax+0x17u), 0x1u);
L_0042f40f:; BB(0x0042f40f);
    /* 0042f40f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f415: call 0x436a90 */ r_esp -= 4; W32(r_esp, 0x42f41au); f_00436a90();
    /* 0042f41a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042f41d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f41f: je 0x42f5b3 */ if (fZ) goto L_0042f5b3;
L_0042f425:; BB(0x0042f425);
    /* 0042f425: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f428: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 0042f42c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f42e: jne 0x42f47c */ if (!fZ) goto L_0042f47c;
L_0042f430:; BB(0x0042f430);
    /* 0042f430: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f433: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 0042f437: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042f43d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0042f440: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042f443: mov dword ptr [eax + 0xae4], 0 */ W32((u32)(r_eax+0xae4u), 0x0u);
    /* 0042f44d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042f450: mov dword ptr [ecx + 0xae8], 0xffffffff */ W32((u32)(r_ecx+0xae8u), 0xffffffffu);
    /* 0042f45a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f45c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f45e: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042f464: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f467: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042f46d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042f470: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042f472: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f475: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f477u); call_ind(t); }
    /* 0042f477: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f47c:; BB(0x0042f47c);
    /* 0042f47c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042f482: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x42f487u); f_005f2870();
    /* 0042f487: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f48a: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0042f48e: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0042f494: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x42f499u); f_0057ae30();
    /* 0042f499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f49b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042f49d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f4a3: call 0x434bd0 */ r_esp -= 4; W32(r_esp, 0x42f4a8u); f_00434bd0();
    /* 0042f4a8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f4ae: call 0x4343d0 */ r_esp -= 4; W32(r_esp, 0x42f4b3u); f_004343d0();
    /* 0042f4b3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042f4b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f4b8: jne 0x42f545 */ if (!fZ) goto L_0042f545;
L_0042f4be:; BB(0x0042f4be);
    /* 0042f4be: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042f4c3: mov ecx, dword ptr [eax + 0xab4] */ r_ecx = R32((u32)(r_eax+0xab4u));
    /* 0042f4c9: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0042f4cc: cmp dword ptr [ebp - 0x40], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f4d0: je 0x42f545 */ if (fZ) goto L_0042f545;
L_0042f4d2:; BB(0x0042f4d2);
    /* 0042f4d2: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042f4d8: mov eax, dword ptr [edx + 0xab4] */ r_eax = R32((u32)(r_edx+0xab4u));
    /* 0042f4de: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0042f4e1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0042f4e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f4e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42f4eau); f_005dcb00();
    /* 0042f4ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f4ed: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0042f4f0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042f4f3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42f4f8u); f_0063aac0();
    /* 0042f4f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042f4fa: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0042f4fd: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f501: je 0x42f51f */ if (fZ) goto L_0042f51f;
L_0042f503:; BB(0x0042f503);
    /* 0042f503: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042f506: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42f50bu); f_0063aac0();
    /* 0042f50b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042f50d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042f510: cmp dword ptr [ebp - 0x4c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f514: je 0x42f51f */ if (fZ) goto L_0042f51f;
L_0042f516:; BB(0x0042f516);
    /* 0042f516: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 0042f51d: jmp 0x42f526 */ goto L_0042f526;
L_0042f51f:; BB(0x0042f51f);
    /* 0042f51f: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
L_0042f526:; BB(0x0042f526);
    /* 0042f526: movzx ecx, byte ptr [ebp - 0x80] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff80u));
    /* 0042f52a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f52c: je 0x42f545 */ if (fZ) goto L_0042f545;
L_0042f52e:; BB(0x0042f52e);
    /* 0042f52e: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f531: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 0042f535: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f53b: call 0x42a090 */ r_esp -= 4; W32(r_esp, 0x42f540u); f_0042a090();
    /* 0042f540: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f545:; BB(0x0042f545);
    /* 0042f545: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f548: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 0042f54c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f54e: jne 0x42f59c */ if (!fZ) goto L_0042f59c;
L_0042f550:; BB(0x0042f550);
    /* 0042f550: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f553: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 0042f557: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042f55c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0042f55f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0042f562: mov dword ptr [ecx + 0xae4], 6 */ W32((u32)(r_ecx+0xae4u), 0x6u);
    /* 0042f56c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0042f56f: mov dword ptr [edx + 0xae8], 4 */ W32((u32)(r_edx+0xae8u), 0x4u);
    /* 0042f579: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f57b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f57d: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f582: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f585: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042f58b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f58e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042f590: mov ecx, eax */ r_ecx = r_eax;
    /* 0042f592: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f595: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f597u); call_ind(t); }
    /* 0042f597: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f59c:; BB(0x0042f59c);
    /* 0042f59c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f59f: mov byte ptr [ecx + 7], 0 */ W8((u32)(r_ecx+0x7u), 0x0u);
    /* 0042f5a3: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f5a9: call 0x436b80 */ r_esp -= 4; W32(r_esp, 0x42f5aeu); f_00436b80();
    /* 0042f5ae: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f5b3:; BB(0x0042f5b3);
    /* 0042f5b3: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f5b6: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 0042f5ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f5bc: jne 0x42f60a */ if (!fZ) goto L_0042f60a;
L_0042f5be:; BB(0x0042f5be);
    /* 0042f5be: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f5c1: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 0042f5c5: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042f5cb: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0042f5ce: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0042f5d1: mov dword ptr [eax + 0xae4], 7 */ W32((u32)(r_eax+0xae4u), 0x7u);
    /* 0042f5db: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0042f5de: mov dword ptr [ecx + 0xae8], 4 */ W32((u32)(r_ecx+0xae8u), 0x4u);
    /* 0042f5e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f5ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f5ec: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042f5f2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f5f5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042f5fb: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042f5fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042f600: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f603: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f605u); call_ind(t); }
    /* 0042f605: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f60a:; BB(0x0042f60a);
    /* 0042f60a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f60d: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0042f611: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f613: jne 0x42f6e1 */ if (!fZ) goto L_0042f6e1;
L_0042f619:; BB(0x0042f619);
    /* 0042f619: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f61c: mov byte ptr [eax + 0xa], 1 */ W8((u32)(r_eax+0xau), 0x1u);
    /* 0042f620: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f626: call 0x434af0 */ r_esp -= 4; W32(r_esp, 0x42f62bu); f_00434af0();
    /* 0042f62b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042f62e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f630: je 0x42f66f */ if (fZ) goto L_0042f66f;
L_0042f632:; BB(0x0042f632);
    /* 0042f632: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042f634: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042f637: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042f63c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042f643: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0042f646: mov edx, 1 */ r_edx = 0x1u;
    /* 0042f64b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042f64e: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042f653: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042f65a: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0042f65d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042f660: add edx, dword ptr [ebp - 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042f663: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f664: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f66a: call 0x42a4a0 */ r_esp -= 4; W32(r_esp, 0x42f66fu); f_0042a4a0();
L_0042f66f:; BB(0x0042f66f);
    /* 0042f66f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f675: call 0x436d40 */ r_esp -= 4; W32(r_esp, 0x42f67au); f_00436d40();
    /* 0042f67a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042f67d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f67f: je 0x42f6c2 */ if (fZ) goto L_0042f6c2;
L_0042f681:; BB(0x0042f681);
    /* 0042f681: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f687: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0042f68a: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0042f68d: mov dword ptr [edx + 0xae4], 8 */ W32((u32)(r_edx+0xae4u), 0x8u);
    /* 0042f697: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0042f69a: mov dword ptr [eax + 0xae8], 4 */ W32((u32)(r_eax+0xae8u), 0x4u);
    /* 0042f6a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6a8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042f6ae: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042f6b1: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f6b6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f6b9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042f6bb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f6be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f6c0u); call_ind(t); }
    /* 0042f6c0: jmp 0x42f6dc */ goto L_0042f6dc;
L_0042f6c2:; BB(0x0042f6c2);
    /* 0042f6c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6c4: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042f6ca: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042f6cd: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 0042f6d2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f6d5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042f6d7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042f6da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f6dcu); call_ind(t); }
L_0042f6dc:; BB(0x0042f6dc);
    /* 0042f6dc: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f6e1:; BB(0x0042f6e1);
    /* 0042f6e1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f6e4: movzx edx, byte ptr [ecx + 0xb] */ r_edx = (u32)R8((u32)(r_ecx+0xbu));
    /* 0042f6e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f6ea: jne 0x42f799 */ if (!fZ) goto L_0042f799;
L_0042f6f0:; BB(0x0042f6f0);
    /* 0042f6f0: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f6f3: mov byte ptr [eax + 0xb], 1 */ W8((u32)(r_eax+0xbu), 0x1u);
    /* 0042f6f7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042f6fe: jmp 0x42f709 */ goto L_0042f709;
L_0042f700:; BB(0x0042f700);
    /* 0042f700: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042f703: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042f706: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0042f709:; BB(0x0042f709);
    /* 0042f709: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042f70d: jge 0x42f73e */ if ((fS==fO)) goto L_0042f73e;
L_0042f70f:; BB(0x0042f70f);
    /* 0042f70f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f711: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f713: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x42f718u); f_0064c8a0();
    /* 0042f718: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f71b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042f71e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0042f721: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042f724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f725: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042f728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f729: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042f72c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f72d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42f732u); f_005dcb00();
    /* 0042f732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f735: mov ecx, eax */ r_ecx = r_eax;
    /* 0042f737: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x42f73cu); f_005d6050();
    /* 0042f73c: jmp 0x42f700 */ goto L_0042f700;
L_0042f73e:; BB(0x0042f73e);
    /* 0042f73e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f740: push 0x790370 */ { u32 v = 0x790370u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f745: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f74b: call 0x4373c0 */ r_esp -= 4; W32(r_esp, 0x42f750u); f_004373c0();
    /* 0042f750: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042f753: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f755: je 0x42f75c */ if (fZ) goto L_0042f75c;
L_0042f757:; BB(0x0042f757);
    /* 0042f757: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f75c:; BB(0x0042f75c);
    /* 0042f75c: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f75e: push 0x790470 */ { u32 v = 0x790470u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f763: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f769: call 0x4373c0 */ r_esp -= 4; W32(r_esp, 0x42f76eu); f_004373c0();
    /* 0042f76e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042f771: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f773: je 0x42f77a */ if (fZ) goto L_0042f77a;
L_0042f775:; BB(0x0042f775);
    /* 0042f775: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f77a:; BB(0x0042f77a);
    /* 0042f77a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f77c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042f782: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042f785: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f78a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f78d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042f78f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042f792: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f794u); call_ind(t); }
    /* 0042f794: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f799:; BB(0x0042f799);
    /* 0042f799: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f79f: call 0x436c80 */ r_esp -= 4; W32(r_esp, 0x42f7a4u); f_00436c80();
    /* 0042f7a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042f7a7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f7ab: je 0x42f7cf */ if (fZ) goto L_0042f7cf;
L_0042f7ad:; BB(0x0042f7ad);
    /* 0042f7ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f7af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f7b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f7b3: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f7b9: call 0x434bd0 */ r_esp -= 4; W32(r_esp, 0x42f7beu); f_00434bd0();
    /* 0042f7be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f7c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f7c2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f7c5: call 0x42fd50 */ r_esp -= 4; W32(r_esp, 0x42f7cau); f_0042fd50();
    /* 0042f7ca: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f7cf:; BB(0x0042f7cf);
    /* 0042f7cf: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f7d2: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 0042f7d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f7d8: jne 0x42f835 */ if (!fZ) goto L_0042f835;
L_0042f7da:; BB(0x0042f7da);
    /* 0042f7da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f7dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042f7de: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f7e4: call 0x434bd0 */ r_esp -= 4; W32(r_esp, 0x42f7e9u); f_00434bd0();
    /* 0042f7e9: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f7ec: mov byte ptr [edx + 0xc], 1 */ W8((u32)(r_edx+0xcu), 0x1u);
    /* 0042f7f0: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042f7f5: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0042f7f8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0042f7fb: mov dword ptr [ecx + 0xae4], 1 */ W32((u32)(r_ecx+0xae4u), 0x1u);
    /* 0042f805: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0042f808: mov dword ptr [edx + 0xae8], 0xffffffff */ W32((u32)(r_edx+0xae8u), 0xffffffffu);
    /* 0042f812: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f814: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f816: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f81b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f81e: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042f824: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f827: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042f829: mov ecx, eax */ r_ecx = r_eax;
    /* 0042f82b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042f82e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f830u); call_ind(t); }
    /* 0042f830: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f835:; BB(0x0042f835);
    /* 0042f835: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f838: movzx edx, byte ptr [ecx + 0xd] */ r_edx = (u32)R8((u32)(r_ecx+0xdu));
    /* 0042f83c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f83e: jne 0x42f887 */ if (!fZ) goto L_0042f887;
L_0042f840:; BB(0x0042f840);
    /* 0042f840: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f843: mov byte ptr [eax + 0xd], 1 */ W8((u32)(r_eax+0xdu), 0x1u);
    /* 0042f847: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042f84d: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0042f850: mov byte ptr [ebp - 0x69], dl */ W8((u32)(r_ebp+0xffffff97u), (u8)r_edx);
    /* 0042f853: movzx eax, byte ptr [ebp - 0x69] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff97u));
    /* 0042f857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f859: je 0x42f877 */ if (fZ) goto L_0042f877;
L_0042f85b:; BB(0x0042f85b);
    /* 0042f85b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f85d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042f863: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042f866: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f86b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f86e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042f870: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042f873: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f875u); call_ind(t); }
    /* 0042f875: jmp 0x42f882 */ goto L_0042f882;
L_0042f877:; BB(0x0042f877);
    /* 0042f877: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f87d: call 0x42bde0 */ r_esp -= 4; W32(r_esp, 0x42f882u); f_0042bde0();
L_0042f882:; BB(0x0042f882);
    /* 0042f882: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f887:; BB(0x0042f887);
    /* 0042f887: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f88a: movzx edx, byte ptr [ecx + 0xe] */ r_edx = (u32)R8((u32)(r_ecx+0xeu));
    /* 0042f88e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f890: jne 0x42f8a9 */ if (!fZ) goto L_0042f8a9;
L_0042f892:; BB(0x0042f892);
    /* 0042f892: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f895: mov byte ptr [eax + 0xe], 1 */ W8((u32)(r_eax+0xeu), 0x1u);
    /* 0042f899: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f89f: call 0x42a990 */ r_esp -= 4; W32(r_esp, 0x42f8a4u); f_0042a990();
    /* 0042f8a4: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f8a9:; BB(0x0042f8a9);
    /* 0042f8a9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f8ac: movzx edx, byte ptr [ecx + 0xf] */ r_edx = (u32)R8((u32)(r_ecx+0xfu));
    /* 0042f8b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f8b2: jne 0x42f8dd */ if (!fZ) goto L_0042f8dd;
L_0042f8b4:; BB(0x0042f8b4);
    /* 0042f8b4: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f8ba: call 0x42acd0 */ r_esp -= 4; W32(r_esp, 0x42f8bfu); f_0042acd0();
    /* 0042f8bf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042f8c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f8c4: jne 0x42f8d8 */ if (!fZ) goto L_0042f8d8;
L_0042f8c6:; BB(0x0042f8c6);
    /* 0042f8c6: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f8c9: mov byte ptr [ecx + 0xf], 1 */ W8((u32)(r_ecx+0xfu), 0x1u);
    /* 0042f8cd: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f8d3: call 0x42ac20 */ r_esp -= 4; W32(r_esp, 0x42f8d8u); f_0042ac20();
L_0042f8d8:; BB(0x0042f8d8);
    /* 0042f8d8: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f8dd:; BB(0x0042f8dd);
    /* 0042f8dd: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f8e0: movzx eax, byte ptr [edx + 0x10] */ r_eax = (u32)R8((u32)(r_edx+0x10u));
    /* 0042f8e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f8e6: jne 0x42f8ff */ if (!fZ) goto L_0042f8ff;
L_0042f8e8:; BB(0x0042f8e8);
    /* 0042f8e8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f8eb: mov byte ptr [ecx + 0x10], 1 */ W8((u32)(r_ecx+0x10u), 0x1u);
    /* 0042f8ef: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f8f5: call 0x42ad90 */ r_esp -= 4; W32(r_esp, 0x42f8fau); f_0042ad90();
    /* 0042f8fa: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f8ff:; BB(0x0042f8ff);
    /* 0042f8ff: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f902: movzx eax, byte ptr [edx + 0x11] */ r_eax = (u32)R8((u32)(r_edx+0x11u));
    /* 0042f906: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f908: jne 0x42f954 */ if (!fZ) goto L_0042f954;
L_0042f90a:; BB(0x0042f90a);
    /* 0042f90a: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f910: call 0x42acd0 */ r_esp -= 4; W32(r_esp, 0x42f915u); f_0042acd0();
    /* 0042f915: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042f918: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f91a: jne 0x42f94f */ if (!fZ) goto L_0042f94f;
L_0042f91c:; BB(0x0042f91c);
    /* 0042f91c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f91f: mov byte ptr [edx + 0x11], 1 */ W8((u32)(r_edx+0x11u), 0x1u);
    /* 0042f923: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042f929: call 0x43b290 */ r_esp -= 4; W32(r_esp, 0x42f92eu); f_0043b290();
    /* 0042f92e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f930: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042f935: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042f938: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042f93e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042f941: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042f943: mov ecx, eax */ r_ecx = r_eax;
    /* 0042f945: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042f948: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42f94au); call_ind(t); }
    /* 0042f94a: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f94f:; BB(0x0042f94f);
    /* 0042f94f: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f954:; BB(0x0042f954);
    /* 0042f954: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f957: movzx edx, byte ptr [ecx + 0x12] */ r_edx = (u32)R8((u32)(r_ecx+0x12u));
    /* 0042f95b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f95d: jne 0x42f988 */ if (!fZ) goto L_0042f988;
L_0042f95f:; BB(0x0042f95f);
    /* 0042f95f: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f965: call 0x42acd0 */ r_esp -= 4; W32(r_esp, 0x42f96au); f_0042acd0();
    /* 0042f96a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042f96d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f96f: jne 0x42f983 */ if (!fZ) goto L_0042f983;
L_0042f971:; BB(0x0042f971);
    /* 0042f971: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f974: mov byte ptr [ecx + 0x12], 1 */ W8((u32)(r_ecx+0x12u), 0x1u);
    /* 0042f978: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f97e: call 0x42b030 */ r_esp -= 4; W32(r_esp, 0x42f983u); f_0042b030();
L_0042f983:; BB(0x0042f983);
    /* 0042f983: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f988:; BB(0x0042f988);
    /* 0042f988: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f98b: movzx eax, byte ptr [edx + 0x13] */ r_eax = (u32)R8((u32)(r_edx+0x13u));
    /* 0042f98f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f991: jne 0x42f9bc */ if (!fZ) goto L_0042f9bc;
L_0042f993:; BB(0x0042f993);
    /* 0042f993: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f999: call 0x42acd0 */ r_esp -= 4; W32(r_esp, 0x42f99eu); f_0042acd0();
    /* 0042f99e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042f9a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9a3: jne 0x42f9b7 */ if (!fZ) goto L_0042f9b7;
L_0042f9a5:; BB(0x0042f9a5);
    /* 0042f9a5: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f9a8: mov byte ptr [edx + 0x13], 1 */ W8((u32)(r_edx+0x13u), 0x1u);
    /* 0042f9ac: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f9b2: call 0x42ba50 */ r_esp -= 4; W32(r_esp, 0x42f9b7u); f_0042ba50();
L_0042f9b7:; BB(0x0042f9b7);
    /* 0042f9b7: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f9bc:; BB(0x0042f9bc);
    /* 0042f9bc: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f9bf: movzx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)R8((u32)(r_eax+0x14u));
    /* 0042f9c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9c5: jne 0x42f9de */ if (!fZ) goto L_0042f9de;
L_0042f9c7:; BB(0x0042f9c7);
    /* 0042f9c7: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f9ca: mov byte ptr [edx + 0x14], 1 */ W8((u32)(r_edx+0x14u), 0x1u);
    /* 0042f9ce: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042f9d4: call 0x42bcc0 */ r_esp -= 4; W32(r_esp, 0x42f9d9u); f_0042bcc0();
    /* 0042f9d9: jmp 0x42fa85 */ goto L_0042fa85;
L_0042f9de:; BB(0x0042f9de);
    /* 0042f9de: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042f9e4: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x42f9e9u); f_005da7b0();
    /* 0042f9e9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042f9ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9ee: je 0x42fa43 */ if (fZ) goto L_0042fa43;
L_0042f9f0:; BB(0x0042f9f0);
    /* 0042f9f0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f9f3: movzx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)R8((u32)(r_ecx+0x15u));
    /* 0042f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9f9: jne 0x42fa43 */ if (!fZ) goto L_0042fa43;
L_0042f9fb:; BB(0x0042f9fb);
    /* 0042f9fb: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042f9fe: mov byte ptr [eax + 0x15], 1 */ W8((u32)(r_eax+0x15u), 0x1u);
    /* 0042fa02: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fa08: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0042fa0b: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0042fa0e: mov dword ptr [edx + 0xae4], 3 */ W32((u32)(r_edx+0xae4u), 0x3u);
    /* 0042fa18: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0042fa1b: mov dword ptr [eax + 0xae8], 0xffffffff */ W32((u32)(r_eax+0xae8u), 0xffffffffu);
    /* 0042fa25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fa27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fa29: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042fa2f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042fa32: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042fa37: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042fa3a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042fa3c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042fa3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42fa41u); call_ind(t); }
    /* 0042fa41: jmp 0x42fa85 */ goto L_0042fa85;
L_0042fa43:; BB(0x0042fa43);
    /* 0042fa43: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042fa46: movzx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)R8((u32)(r_ecx+0x16u));
    /* 0042fa4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fa4c: jne 0x42fa7b */ if (!fZ) goto L_0042fa7b;
L_0042fa4e:; BB(0x0042fa4e);
    /* 0042fa4e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042fa51: mov byte ptr [eax + 0x16], 1 */ W8((u32)(r_eax+0x16u), 0x1u);
    /* 0042fa55: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042fa58: call 0x430000 */ r_esp -= 4; W32(r_esp, 0x42fa5du); f_00430000();
    /* 0042fa5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fa5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fa61: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042fa67: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042fa6a: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042fa6f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042fa72: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042fa74: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042fa77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42fa79u); call_ind(t); }
    /* 0042fa79: jmp 0x42fa85 */ goto L_0042fa85;
L_0042fa7b:; BB(0x0042fa7b);
    /* 0042fa7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fa7d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0042fa80: call 0x42f140 */ r_esp -= 4; W32(r_esp, 0x42fa85u); f_0042f140();
L_0042fa85:; BB(0x0042fa85);
    /* 0042fa85: mov esp, ebp */ r_esp = r_ebp;
    /* 0042fa87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042fa88: ret  */ FN_RET(0x0042f230); r_esp += 4; return;
}

void f_0042fa90(void) /* sub_42FA90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042fa90);
    /* 0042fa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042fa91: mov ebp, esp */ r_ebp = r_esp;
    /* 0042fa93: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042fa96: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042fa99: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fa9f: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x42faa4u); f_004347f0();
    /* 0042faa4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042faa7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042faaa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42faafu); f_0063aac0();
    /* 0042faaf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042fab1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042fab4: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fab8: je 0x42fad6 */ if (fZ) goto L_0042fad6;
L_0042faba:; BB(0x0042faba);
    /* 0042faba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042fabd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42fac2u); f_0063aac0();
    /* 0042fac2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0042fac4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042fac7: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042facb: je 0x42fad6 */ if (fZ) goto L_0042fad6;
L_0042facd:; BB(0x0042facd);
    /* 0042facd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0042fad4: jmp 0x42fadd */ goto L_0042fadd;
L_0042fad6:; BB(0x0042fad6);
    /* 0042fad6: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0042fadd:; BB(0x0042fadd);
    /* 0042fadd: movzx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 0042fae1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fae3: je 0x42fc0d */ if (fZ) goto L_0042fc0d;
L_0042fae9:; BB(0x0042fae9);
    /* 0042fae9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042faeb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0042faf1: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x42faf6u); f_005df700();
    /* 0042faf6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042faf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fafb: je 0x42fb2b */ if (fZ) goto L_0042fb2b;
L_0042fafd:; BB(0x0042fafd);
    /* 0042fafd: push 0x711228 */ { u32 v = 0x711228u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb02: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb04: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0042fb0a: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x42fb0fu); f_0057ab80();
    /* 0042fb0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb11: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fb17: call 0x43b830 */ r_esp -= 4; W32(r_esp, 0x42fb1cu); f_0043b830();
    /* 0042fb1c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fb22: mov byte ptr [ecx + 0xad5], 0 */ W8((u32)(r_ecx+0xad5u), 0x0u);
    /* 0042fb29: jmp 0x42fb36 */ goto L_0042fb36;
L_0042fb2b:; BB(0x0042fb2b);
    /* 0042fb2b: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0042fb31: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x42fb36u); f_0057ae30();
L_0042fb36:; BB(0x0042fb36);
    /* 0042fb36: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042fb39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb3a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fb3fu); f_005dcb00();
    /* 0042fb3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fb42: mov ecx, eax */ r_ecx = r_eax;
    /* 0042fb44: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x42fb49u); f_005d5840();
    /* 0042fb49: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042fb4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fb4e: jne 0x42fbd7 */ if (!fZ) goto L_0042fbd7;
L_0042fb54:; BB(0x0042fb54);
    /* 0042fb54: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042fb5a: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x42fb5fu); f_005da7b0();
    /* 0042fb5f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042fb62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fb64: je 0x42fba2 */ if (fZ) goto L_0042fba2;
L_0042fb66:; BB(0x0042fb66);
    /* 0042fb66: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042fb69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb6a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fb6fu); f_005dcb00();
    /* 0042fb6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fb72: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042fb75: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042fb78: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0042fb7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb83: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042fb89: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042fb8c: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042fb91: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042fb94: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042fb96: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042fb99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42fb9bu); call_ind(t); }
    /* 0042fb9b: jmp 0x42fd40 */ goto L_0042fd40;
L_0042fba2:; BB(0x0042fba2);
    /* 0042fba2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042fba5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fba6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fbac: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x42fbb1u); f_004349b0();
    /* 0042fbb1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042fbb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fbb6: je 0x42fbba */ if (fZ) goto L_0042fbba;
L_0042fbb8:; BB(0x0042fbb8);
    /* 0042fbb8: jmp 0x42fbd7 */ goto L_0042fbd7;
L_0042fbba:; BB(0x0042fbba);
    /* 0042fbba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042fbbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fbbe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fbc3u); f_005dcb00();
    /* 0042fbc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fbc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fbc7: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042fbcd: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x42fbd2u); f_005dbb70();
    /* 0042fbd2: jmp 0x42fd40 */ goto L_0042fd40;
L_0042fbd7:; BB(0x0042fbd7);
    /* 0042fbd7: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0042fbdc: push 0xffffff4c */ { u32 v = 0xffffff4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042fbe1: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042fbe7: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x42fbecu); f_005db7d0();
    /* 0042fbec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fbee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fbf0: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042fbf6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042fbf9: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 0042fbfe: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042fc01: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042fc03: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042fc06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42fc08u); call_ind(t); }
    /* 0042fc08: jmp 0x42fd40 */ goto L_0042fd40;
L_0042fc0d:; BB(0x0042fc0d);
    /* 0042fc0d: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0042fc13: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x42fc18u); f_0057ae30();
    /* 0042fc18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042fc1b: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 0042fc1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fc21: jne 0x42fc48 */ if (!fZ) goto L_0042fc48;
L_0042fc23:; BB(0x0042fc23);
    /* 0042fc23: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042fc26: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 0042fc2a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fc2c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042fc32: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x42fc37u); f_00637810();
    /* 0042fc37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fc38: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042fc3e: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x42fc43u); f_005da360();
    /* 0042fc43: jmp 0x42fd40 */ goto L_0042fd40;
L_0042fc48:; BB(0x0042fc48);
    /* 0042fc48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042fc4b: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 0042fc4f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042fc52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fc53: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fc58u); f_005dcb00();
    /* 0042fc58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fc5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0042fc5d: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x42fc62u); f_005d5840();
    /* 0042fc62: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042fc65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fc67: je 0x42fcd2 */ if (fZ) goto L_0042fcd2;
L_0042fc69:; BB(0x0042fc69);
    /* 0042fc69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042fc6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fc6d: mov ecx, dword ptr [0x7906e0] */ r_ecx = R32((u32)(0x7906e0u));
    /* 0042fc73: call 0x428000 */ r_esp -= 4; W32(r_esp, 0x42fc78u); f_00428000();
    /* 0042fc78: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042fc7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fc7c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fc81u); f_005dcb00();
    /* 0042fc81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fc84: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042fc87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fc8a: mov byte ptr [eax + 0x4a0], 1 */ W8((u32)(r_eax+0x4a0u), 0x1u);
    /* 0042fc91: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fc97: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042fc9a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042fc9d: mov dword ptr [edx + 0xae4], 2 */ W32((u32)(r_edx+0xae4u), 0x2u);
    /* 0042fca7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042fcaa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042fcad: mov dword ptr [eax + 0xae8], ecx */ W32((u32)(r_eax+0xae8u), r_ecx);
    /* 0042fcb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fcb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fcb7: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042fcbd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042fcc0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042fcc6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042fcc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042fccb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042fcce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42fcd0u); call_ind(t); }
    /* 0042fcd0: jmp 0x42fd40 */ goto L_0042fd40;
L_0042fcd2:; BB(0x0042fcd2);
    /* 0042fcd2: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042fcd8: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x42fcddu); f_005da7b0();
    /* 0042fcdd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042fce0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fce2: jne 0x42fcfa */ if (!fZ) goto L_0042fcfa;
L_0042fce4:; BB(0x0042fce4);
    /* 0042fce4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042fce7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fce8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fcee: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x42fcf3u); f_004349b0();
    /* 0042fcf3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042fcf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fcf8: je 0x42fd15 */ if (fZ) goto L_0042fd15;
L_0042fcfa:; BB(0x0042fcfa);
    /* 0042fcfa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042fcfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fcfe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fd03u); f_005dcb00();
    /* 0042fd03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fd06: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042fd09: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042fd0c: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 0042fd13: jmp 0x42fd24 */ goto L_0042fd24;
L_0042fd15:; BB(0x0042fd15);
    /* 0042fd15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042fd18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd19: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042fd1f: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x42fd24u); f_005d9570();
L_0042fd24:; BB(0x0042fd24);
    /* 0042fd24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd28: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042fd2e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042fd31: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042fd36: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042fd39: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042fd3b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042fd3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42fd40u); call_ind(t); }
L_0042fd40:; BB(0x0042fd40);
    /* 0042fd40: mov esp, ebp */ r_esp = r_ebp;
    /* 0042fd42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042fd43: ret 4 */ FN_RET(0x0042fa90); r_esp += 8; return;
}

void f_0042fd50(void) /* sub_42FD50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042fd50);
    /* 0042fd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd51: mov ebp, esp */ r_ebp = r_esp;
    /* 0042fd53: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042fd56: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0042fd59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042fd60: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0042fd67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd6b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x42fd70u); f_0064c8a0();
    /* 0042fd70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fd73: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042fd76: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0042fd79: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042fd7c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042fd7f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042fd82: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042fd85: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042fd88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd89: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fd8eu); f_005dcb00();
    /* 0042fd8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fd91: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0042fd94: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042fd97: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x42fd9cu); f_005d52e0();
    /* 0042fd9c: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0042fd9f: mov byte ptr [ebp - 0x39], al */ W8((u32)(r_ebp+0xffffffc7u), (u8)r_eax);
    /* 0042fda2: movsx ecx, byte ptr [ebp - 0x39] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffc7u));
    /* 0042fda6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042fda9: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 0042fdb0: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 0042fdb4: mov dword ptr [ebp - 8], 0x4b */ W32((u32)(r_ebp+0xfffffff8u), 0x4bu);
    /* 0042fdbb: jmp 0x42fdc6 */ goto L_0042fdc6;
L_0042fdbd:; BB(0x0042fdbd);
    /* 0042fdbd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042fdc0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0042fdc3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0042fdc6:; BB(0x0042fdc6);
    /* 0042fdc6: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042fdca: jle 0x42fe02 */ if ((fZ||fS!=fO)) goto L_0042fe02;
L_0042fdcc:; BB(0x0042fdcc);
    /* 0042fdcc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042fdcf: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fdd5: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042fdd9: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42fddeu); f_005f5400();
    /* 0042fdde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fddf: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fde5: call 0x438a10 */ r_esp -= 4; W32(r_esp, 0x42fdeau); f_00438a10();
    /* 0042fdea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fded: jne 0x42fe00 */ if (!fZ) goto L_0042fe00;
L_0042fdef:; BB(0x0042fdef);
    /* 0042fdef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042fdf2: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042fdf7: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 0042fdfb: call 0x42c340 */ r_esp -= 4; W32(r_esp, 0x42fe00u); f_0042c340();
L_0042fe00:; BB(0x0042fe00);
    /* 0042fe00: jmp 0x42fdbd */ goto L_0042fdbd;
L_0042fe02:; BB(0x0042fe02);
    /* 0042fe02: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042fe05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fe06: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fe0c: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x42fe11u); f_004349b0();
    /* 0042fe11: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042fe14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fe16: jne 0x42fe51 */ if (!fZ) goto L_0042fe51;
L_0042fe18:; BB(0x0042fe18);
    /* 0042fe18: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042fe1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fe1c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fe21u); f_005dcb00();
    /* 0042fe21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fe24: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0042fe27: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042fe2a: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
    /* 0042fe31: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0042fe33: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042fe39: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042fe3c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042fe42: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042fe45: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042fe47: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042fe4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42fe4cu); call_ind(t); }
    /* 0042fe4c: jmp 0x42ffed */ goto L_0042ffed;
L_0042fe51:; BB(0x0042fe51);
    /* 0042fe51: mov dword ptr [ebp - 8], 0x4b */ W32((u32)(r_ebp+0xfffffff8u), 0x4bu);
    /* 0042fe58: jmp 0x42fe63 */ goto L_0042fe63;
L_0042fe5a:; BB(0x0042fe5a);
    /* 0042fe5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042fe5d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042fe60: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0042fe63:; BB(0x0042fe63);
    /* 0042fe63: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042fe67: jle 0x42ff2c */ if ((fZ||fS!=fO)) goto L_0042ff2c;
L_0042fe6d:; BB(0x0042fe6d);
    /* 0042fe6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fe6f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042fe72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fe73: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042fe76: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fe7c: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042fe80: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x42fe85u); f_005cb7d0();
    /* 0042fe85: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042fe88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fe8a: je 0x42ff27 */ if (fZ) goto L_0042ff27;
L_0042fe90:; BB(0x0042fe90);
    /* 0042fe90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042fe93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fe94: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42fe99u); f_005dcb00();
    /* 0042fe99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fe9c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0042fe9f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0042fea2: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x42fea7u); f_005d52e0();
    /* 0042fea7: mov cl, byte ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0042feaa: mov byte ptr [ebp - 0x45], cl */ W8((u32)(r_ebp+0xffffffbbu), (u8)r_ecx);
    /* 0042fead: movsx edx, byte ptr [ebp - 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffbbu));
    /* 0042feb1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0042feb4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042feb7: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042feba: je 0x42fec6 */ if (fZ) goto L_0042fec6;
L_0042febc:; BB(0x0042febc);
    /* 0042febc: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fec0: jne 0x42fec6 */ if (!fZ) goto L_0042fec6;
L_0042fec2:; BB(0x0042fec2);
    /* 0042fec2: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
L_0042fec6:; BB(0x0042fec6);
    /* 0042fec6: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0042feca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fecc: je 0x42fed0 */ if (fZ) goto L_0042fed0;
L_0042fece:; BB(0x0042fece);
    /* 0042fece: jmp 0x42ff2c */ goto L_0042ff2c;
L_0042fed0:; BB(0x0042fed0);
    /* 0042fed0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042fed3: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042fed8: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042fedc: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42fee1u); f_005f5400();
    /* 0042fee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fee2: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042fee8: call 0x438a10 */ r_esp -= 4; W32(r_esp, 0x42feedu); f_00438a10();
    /* 0042feed: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042fef0: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fef4: jne 0x42feff */ if (!fZ) goto L_0042feff;
L_0042fef6:; BB(0x0042fef6);
    /* 0042fef6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042fef9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042fefc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042feff:; BB(0x0042feff);
    /* 0042feff: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ff03: jne 0x42ff0e */ if (!fZ) goto L_0042ff0e;
L_0042ff05:; BB(0x0042ff05);
    /* 0042ff05: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042ff08: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042ff0b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0042ff0e:; BB(0x0042ff0e);
    /* 0042ff0e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042ff11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ff15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ff19: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ff1e: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042ff22: call 0x43cd40 */ r_esp -= 4; W32(r_esp, 0x42ff27u); f_0043cd40();
L_0042ff27:; BB(0x0042ff27);
    /* 0042ff27: jmp 0x42fe5a */ goto L_0042fe5a;
L_0042ff2c:; BB(0x0042ff2c);
    /* 0042ff2c: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0042ff30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ff32: je 0x42ff7f */ if (fZ) goto L_0042ff7f;
L_0042ff34:; BB(0x0042ff34);
    /* 0042ff34: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ff37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff38: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42ff3du); f_005dcb00();
    /* 0042ff3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ff40: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0042ff43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff45: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0042ff48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ff4a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0042ff4d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ff50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ff52u); call_ind(t); }
    /* 0042ff52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff56: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x42ff5bu); f_0064c8a0();
    /* 0042ff5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ff5e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0042ff61: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0042ff64: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ff67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff68: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ff6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff6c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ff6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff70: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42ff75u); f_005dcb00();
    /* 0042ff75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ff78: mov ecx, eax */ r_ecx = r_eax;
    /* 0042ff7a: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x42ff7fu); f_005d6050();
L_0042ff7f:; BB(0x0042ff7f);
    /* 0042ff7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ff82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff83: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42ff88u); f_005dcb00();
    /* 0042ff88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ff8b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042ff8e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0042ff91: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
    /* 0042ff98: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0042ff9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ff9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ffa0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42ffa5u); f_005dcb00();
    /* 0042ffa5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ffa8: mov ecx, eax */ r_ecx = r_eax;
    /* 0042ffaa: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x42ffafu); f_005d6020();
    /* 0042ffaf: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ffb3: jne 0x42ffde */ if (!fZ) goto L_0042ffde;
L_0042ffb5:; BB(0x0042ffb5);
    /* 0042ffb5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ffb9: jne 0x42ffde */ if (!fZ) goto L_0042ffde;
L_0042ffbb:; BB(0x0042ffbb);
    /* 0042ffbb: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ffbf: jne 0x42ffde */ if (!fZ) goto L_0042ffde;
L_0042ffc1:; BB(0x0042ffc1);
    /* 0042ffc1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ffc3: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042ffc9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ffcc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042ffd2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042ffd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ffd7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042ffda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ffdcu); call_ind(t); }
    /* 0042ffdc: jmp 0x42ffed */ goto L_0042ffed;
L_0042ffde:; BB(0x0042ffde);
    /* 0042ffde: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ffe1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ffe2: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042ffe8: call 0x42a820 */ r_esp -= 4; W32(r_esp, 0x42ffedu); f_0042a820();
L_0042ffed:; BB(0x0042ffed);
    /* 0042ffed: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042fff0: ret 4 */ FN_RET(0x0042fd50); r_esp += 8; return;
}

