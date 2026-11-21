#include "protos.h"

void f_004360c0(void) /* sub_4360C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004360c0);
    /* 004360c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004360c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004360c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004360c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004360c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004360cc: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 004360d2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004360d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004360d7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004360db: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004360de: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004360e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004360e3: jne 0x43611b */ if (!fZ) goto L_0043611b;
L_004360e5:; BB(0x004360e5);
    /* 004360e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004360e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004360ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004360eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004360ee: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4360f3u); f_004369a0();
    /* 004360f3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004360f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004360f8: jne 0x436116 */ if (!fZ) goto L_00436116;
L_004360fa:; BB(0x004360fa);
    /* 004360fa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004360fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004360ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436100: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436103: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x436108u); f_004369a0();
    /* 00436108: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043610b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043610d: jne 0x436116 */ if (!fZ) goto L_00436116;
L_0043610f:; BB(0x0043610f);
    /* 0043610f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00436111: jmp 0x4361d1 */ goto L_004361d1;
L_00436116:; BB(0x00436116);
    /* 00436116: jmp 0x4361cf */ goto L_004361cf;
L_0043611b:; BB(0x0043611b);
    /* 0043611b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043611d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00436120: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436121: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436124: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x436129u); f_004369a0();
    /* 00436129: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043612c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043612e: jne 0x43616f */ if (!fZ) goto L_0043616f;
L_00436130:; BB(0x00436130);
    /* 00436130: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00436133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436134: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436137: call 0x435d40 */ r_esp -= 4; W32(r_esp, 0x43613cu); f_00435d40();
    /* 0043613c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043613f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436141: jne 0x43616f */ if (!fZ) goto L_0043616f;
L_00436143:; BB(0x00436143);
    /* 00436143: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00436145: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00436148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436149: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043614c: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x436151u); f_004369a0();
    /* 00436151: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436154: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436156: jne 0x43616f */ if (!fZ) goto L_0043616f;
L_00436158:; BB(0x00436158);
    /* 00436158: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043615b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043615c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043615f: call 0x435de0 */ r_esp -= 4; W32(r_esp, 0x436164u); f_00435de0();
    /* 00436164: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00436167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436169: jne 0x43616f */ if (!fZ) goto L_0043616f;
L_0043616b:; BB(0x0043616b);
    /* 0043616b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043616d: jmp 0x4361d1 */ goto L_004361d1;
L_0043616f:; BB(0x0043616f);
    /* 0043616f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436171: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00436174: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436175: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436178: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43617du); f_004369a0();
    /* 0043617d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00436180: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436182: jne 0x43619d */ if (!fZ) goto L_0043619d;
L_00436184:; BB(0x00436184);
    /* 00436184: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00436186: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00436189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043618a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043618d: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x436192u); f_004369a0();
    /* 00436192: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436195: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436197: jne 0x43619d */ if (!fZ) goto L_0043619d;
L_00436199:; BB(0x00436199);
    /* 00436199: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043619b: jmp 0x4361d1 */ goto L_004361d1;
L_0043619d:; BB(0x0043619d);
    /* 0043619d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043619f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004361a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004361a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004361a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004361a8: call 0x435ee0 */ r_esp -= 4; W32(r_esp, 0x4361adu); f_00435ee0();
    /* 004361ad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004361b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004361b2: jne 0x4361cb */ if (!fZ) goto L_004361cb;
L_004361b4:; BB(0x004361b4);
    /* 004361b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004361b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004361b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004361bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004361bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004361bf: call 0x435fd0 */ r_esp -= 4; W32(r_esp, 0x4361c4u); f_00435fd0();
    /* 004361c4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004361c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004361c9: je 0x4361cf */ if (fZ) goto L_004361cf;
L_004361cb:; BB(0x004361cb);
    /* 004361cb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004361cd: jmp 0x4361d1 */ goto L_004361d1;
L_004361cf:; BB(0x004361cf);
    /* 004361cf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004361d1:; BB(0x004361d1);
    /* 004361d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004361d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004361d4: ret 4 */ FN_RET(0x004360c0); r_esp += 8; return;
}

void f_004361e0(void) /* sub_4361E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004361e0);
    /* 004361e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004361e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004361e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004361e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004361e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004361f0: jmp 0x4361fb */ goto L_004361fb;
L_004361f2:; BB(0x004361f2);
    /* 004361f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004361f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004361f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004361fb:; BB(0x004361fb);
    /* 004361fb: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004361ff: jge 0x436229 */ if ((fS==fO)) goto L_00436229;
L_00436201:; BB(0x00436201);
    /* 00436201: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436203: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00436206: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436207: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043620a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043620d: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00436211: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436214: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436217: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0043621b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043621d: mov ecx, edx */ r_ecx = r_edx;
    /* 0043621f: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00436225: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x436227u); call_ind(t); }
    /* 00436227: jmp 0x4361f2 */ goto L_004361f2;
L_00436229:; BB(0x00436229);
    /* 00436229: mov esp, ebp */ r_esp = r_ebp;
    /* 0043622b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043622c: ret 4 */ FN_RET(0x004361e0); r_esp += 8; return;
}

void f_00436230(void) /* sub_436230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436230);
    /* 00436230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436231: mov ebp, esp */ r_ebp = r_esp;
    /* 00436233: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436236: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00436239: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043623c: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00436242: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00436245: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436247: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043624b: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043624e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00436251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436253: je 0x436259 */ if (fZ) goto L_00436259;
L_00436255:; BB(0x00436255);
    /* 00436255: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00436257: jmp 0x436295 */ goto L_00436295;
L_00436259:; BB(0x00436259);
    /* 00436259: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436260: jmp 0x43626b */ goto L_0043626b;
L_00436262:; BB(0x00436262);
    /* 00436262: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436265: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00436268: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043626b:; BB(0x0043626b);
    /* 0043626b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043626f: jge 0x436293 */ if ((fS==fO)) goto L_00436293;
L_00436271:; BB(0x00436271);
    /* 00436271: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00436274: imul edx, edx, 0x260 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x260u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043627a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043627d: lea ecx, [eax + edx + 0x134] */ r_ecx = (u32)(r_eax+r_edx+0x134u);
    /* 00436284: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436287: cmp dword ptr [ecx + edx*8], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*8)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043628b: jle 0x436291 */ if ((fZ||fS!=fO)) goto L_00436291;
L_0043628d:; BB(0x0043628d);
    /* 0043628d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043628f: jmp 0x436295 */ goto L_00436295;
L_00436291:; BB(0x00436291);
    /* 00436291: jmp 0x436262 */ goto L_00436262;
L_00436293:; BB(0x00436293);
    /* 00436293: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00436295:; BB(0x00436295);
    /* 00436295: mov esp, ebp */ r_esp = r_ebp;
    /* 00436297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436298: ret 4 */ FN_RET(0x00436230); r_esp += 8; return;
}

void f_004362a0(void) /* sub_4362A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004362a0);
    /* 004362a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004362a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004362a3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004362a6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004362a9: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004362ad: jne 0x4362b4 */ if (!fZ) goto L_004362b4;
L_004362af:; BB(0x004362af);
    /* 004362af: jmp 0x43644c */ goto L_0043644c;
L_004362b4:; BB(0x004362b4);
    /* 004362b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004362b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004362b8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004362bb: call 0x436230 */ r_esp -= 4; W32(r_esp, 0x4362c0u); f_00436230();
    /* 004362c0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004362c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004362c5: jne 0x4362cc */ if (!fZ) goto L_004362cc;
L_004362c7:; BB(0x004362c7);
    /* 004362c7: jmp 0x43644c */ goto L_0043644c;
L_004362cc:; BB(0x004362cc);
    /* 004362cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004362cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004362d0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4362d5u); f_005dcb00();
    /* 004362d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004362d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004362da: jne 0x4362e1 */ if (!fZ) goto L_004362e1;
L_004362dc:; BB(0x004362dc);
    /* 004362dc: jmp 0x43644c */ goto L_0043644c;
L_004362e1:; BB(0x004362e1);
    /* 004362e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004362e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004362e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4362eau); f_005dcb00();
    /* 004362ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004362ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004362f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004362f3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4362f8u); f_0063aac0();
    /* 004362f8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004362fa: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004362fd: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436301: je 0x43631f */ if (fZ) goto L_0043631f;
L_00436303:; BB(0x00436303);
    /* 00436303: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436306: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43630bu); f_0063aac0();
    /* 0043630b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043630d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00436310: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436314: je 0x43631f */ if (fZ) goto L_0043631f;
L_00436316:; BB(0x00436316);
    /* 00436316: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0043631d: jmp 0x436326 */ goto L_00436326;
L_0043631f:; BB(0x0043631f);
    /* 0043631f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00436326:; BB(0x00436326);
    /* 00436326: movzx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0043632a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043632c: je 0x43635a */ if (fZ) goto L_0043635a;
L_0043632e:; BB(0x0043632e);
    /* 0043632e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00436331: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436332: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x436337u); f_005dcb00();
    /* 00436337: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043633a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043633d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00436340: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00436346: mov byte ptr [ebp - 0x19], al */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_eax);
    /* 00436349: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0043634d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043634f: jne 0x43635a */ if (!fZ) goto L_0043635a;
L_00436351:; BB(0x00436351);
    /* 00436351: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00436358: jmp 0x436361 */ goto L_00436361;
L_0043635a:; BB(0x0043635a);
    /* 0043635a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00436361:; BB(0x00436361);
    /* 00436361: mov dl, byte ptr [ebp - 0x2c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd4u))) & 0xffu);
    /* 00436364: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 00436367: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0043636b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043636d: jne 0x436374 */ if (!fZ) goto L_00436374;
L_0043636f:; BB(0x0043636f);
    /* 0043636f: jmp 0x43644c */ goto L_0043644c;
L_00436374:; BB(0x00436374);
    /* 00436374: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00436377: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436378: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 0043637e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00436380: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00436386: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 0043638c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43638eu); call_ind(t); }
    /* 0043638e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436395: jmp 0x4363a0 */ goto L_004363a0;
L_00436397:; BB(0x00436397);
    /* 00436397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043639a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043639d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004363a0:; BB(0x004363a0);
    /* 004363a0: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004363a4: jge 0x436400 */ if ((fS==fO)) goto L_00436400;
L_004363a6:; BB(0x004363a6);
    /* 004363a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004363a9: imul ecx, ecx, 0x260 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x260u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004363af: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004363b2: lea eax, [edx + ecx + 0x134] */ r_eax = (u32)(r_edx+r_ecx+0x134u);
    /* 004363b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004363bc: cmp dword ptr [eax + ecx*8], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*8)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004363c0: jle 0x4363fe */ if ((fZ||fS!=fO)) goto L_004363fe;
L_004363c2:; BB(0x004363c2);
    /* 004363c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004363c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004363c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004363c9: imul edx, edx, 0x260 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x260u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004363cf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004363d2: lea ecx, [eax + edx + 0x134] */ r_ecx = (u32)(r_eax+r_edx+0x134u);
    /* 004363d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004363dc: lea eax, [ecx + edx*8] */ r_eax = (u32)(r_ecx+r_edx*8);
    /* 004363df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004363e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004363e3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004363e6: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004363ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004363ed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004363f0: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004363f4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004363f6: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 004363fc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4363feu); call_ind(t); }
L_004363fe:; BB(0x004363fe);
    /* 004363fe: jmp 0x436397 */ goto L_00436397;
L_00436400:; BB(0x00436400);
    /* 00436400: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00436403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436404: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x436409u); f_005dcb00();
    /* 00436409: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043640c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043640f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00436412: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00436419: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0043641f: call 0x4299b0 */ r_esp -= 4; W32(r_esp, 0x436424u); f_004299b0();
    /* 00436424: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043642a: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x43642fu); f_005db890();
    /* 0043642f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436431: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436433: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 00436439: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043643c: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00436442: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00436445: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00436447: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043644a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43644cu); call_ind(t); }
L_0043644c:; BB(0x0043644c);
    /* 0043644c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043644e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043644f: ret 4 */ FN_RET(0x004362a0); r_esp += 8; return;
}

void f_00436460(void) /* sub_436460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436460);
    /* 00436460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436461: mov ebp, esp */ r_ebp = r_esp;
    /* 00436463: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00436467: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043646a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043646d: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00436473: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00436476: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436478: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043647c: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043647f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00436482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436484: je 0x43648b */ if (fZ) goto L_0043648b;
L_00436486:; BB(0x00436486);
    /* 00436486: jmp 0x43656a */ goto L_0043656a;
L_0043648b:; BB(0x0043648b);
    /* 0043648b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436492: jmp 0x43649d */ goto L_0043649d;
L_00436494:; BB(0x00436494);
    /* 00436494: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436497: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043649a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043649d:; BB(0x0043649d);
    /* 0043649d: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004364a1: jge 0x43656a */ if ((fS==fO)) goto L_0043656a;
L_004364a7:; BB(0x004364a7);
    /* 004364a7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004364ae: jmp 0x4364b9 */ goto L_004364b9;
L_004364b0:; BB(0x004364b0);
    /* 004364b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004364b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004364b6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004364b9:; BB(0x004364b9);
    /* 004364b9: cmp dword ptr [ebp - 8], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004364bd: jge 0x436565 */ if ((fS==fO)) goto L_00436565;
L_004364c3:; BB(0x004364c3);
    /* 004364c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004364c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004364c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004364ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004364cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004364ce: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4364d3u); f_004369a0();
    /* 004364d3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004364d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004364d8: je 0x43652b */ if (fZ) goto L_0043652b;
L_004364da:; BB(0x004364da);
    /* 004364da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004364dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004364e0: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004364e4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004364e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004364ea: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004364ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004364f0: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 004364f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004364f6: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004364f9: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 004364fc: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00436500: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00436503: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00436506: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436509: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043650c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043650f: imul edx, edx, 0x260 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x260u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00436515: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00436518: lea edx, [esi + edx + 0x134] */ r_edx = (u32)(r_esi+r_edx+0x134u);
    /* 0043651f: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436522: mov dword ptr [edx + esi*8], eax */ W32((u32)(r_edx+r_esi*8), r_eax);
    /* 00436525: mov dword ptr [edx + esi*8 + 4], ecx */ W32((u32)(r_edx+r_esi*8+0x4u), r_ecx);
    /* 00436529: jmp 0x436560 */ goto L_00436560;
L_0043652b:; BB(0x0043652b);
    /* 0043652b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043652d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043652f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x436534u); f_0064c8a0();
    /* 00436534: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436537: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043653a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0043653d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436540: imul eax, eax, 0x260 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x260u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00436546: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00436549: lea edx, [ecx + eax + 0x134] */ r_edx = (u32)(r_ecx+r_eax+0x134u);
    /* 00436550: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436553: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00436556: mov dword ptr [edx + eax*8], ecx */ W32((u32)(r_edx+r_eax*8), r_ecx);
    /* 00436559: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043655c: mov dword ptr [edx + eax*8 + 4], ecx */ W32((u32)(r_edx+r_eax*8+0x4u), r_ecx);
L_00436560:; BB(0x00436560);
    /* 00436560: jmp 0x4364b0 */ goto L_004364b0;
L_00436565:; BB(0x00436565);
    /* 00436565: jmp 0x436494 */ goto L_00436494;
L_0043656a:; BB(0x0043656a);
    /* 0043656a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043656b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043656d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043656e: ret  */ FN_RET(0x00436460); r_esp += 4; return;
}

void f_00436570(void) /* sub_436570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436570);
    /* 00436570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436571: mov ebp, esp */ r_ebp = r_esp;
    /* 00436573: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436576: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00436579: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043657c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043657d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00436580: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436581: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00436584: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436587: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0043658b: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x436590u); f_0043bd30();
    /* 00436590: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00436592: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00436595: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436598: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x43659du); f_00434310();
    /* 0043659d: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004365a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004365a4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004365a7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004365aa: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004365ae: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x4365b3u); f_005f5400();
    /* 004365b3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004365b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004365b9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004365bc: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004365bf: cmp dword ptr [ebp - 0x20], 0x29 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004365c3: ja 0x436910 */ if ((!fC&&!fZ)) goto L_00436910;
L_004365c9:; BB(0x004365c9);
    /* 004365c9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004365cc: movzx eax, byte ptr [edx + 0x43693c] */ r_eax = (u32)R8((u32)(r_edx+0x43693cu));
    /* 004365d3: jmp dword ptr [eax*4 + 0x43691c] */ { u32 t = R32((u32)(r_eax*4+0x43691cu)); switch (t) { case 0x4365dau: goto L_004365da; case 0x4367ccu: goto L_004367cc; case 0x4366f6u: goto L_004366f6; case 0x436731u: goto L_00436731; case 0x436888u: goto L_00436888; case 0x436892u: goto L_00436892; case 0x4368cbu: goto L_004368cb; case 0x436910u: goto L_00436910; default: UNSUP(0x004365d3, "jump table entry is not a known target"); } }
L_004365da:; BB(0x004365da);
    /* 004365da: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004365dd: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x4365e2u); f_00434310();
    /* 004365e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004365e5: jle 0x4365ec */ if ((fZ||fS!=fO)) goto L_004365ec;
L_004365e7:; BB(0x004365e7);
    /* 004365e7: jmp 0x436910 */ goto L_00436910;
L_004365ec:; BB(0x004365ec);
    /* 004365ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004365ef: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004365f2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004365f5: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 004365fb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004365fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00436601: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00436604: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00436607: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043660b: ja 0x4366f1 */ if ((!fC&&!fZ)) goto L_004366f1;
L_00436611:; BB(0x00436611);
    /* 00436611: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00436614: jmp dword ptr [edx*4 + 0x436968] */ { u32 t = R32((u32)(r_edx*4+0x436968u)); switch (t) { case 0x436620u: goto L_00436620; case 0x43665bu: goto L_0043665b; case 0x4366f1u: goto L_004366f1; case 0x4367fbu: goto L_004367fb; case 0x436805u: goto L_00436805; case 0x43683eu: goto L_0043683e; case 0x436883u: goto L_00436883; default: UNSUP(0x00436614, "jump table entry is not a known target"); } }
L_00436620:; BB(0x00436620);
    /* 00436620: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436623: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x436628u); f_00434310();
    /* 00436628: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043662b: jne 0x436656 */ if (!fZ) goto L_00436656;
L_0043662d:; BB(0x0043662d);
    /* 0043662d: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436631: jne 0x43663c */ if (!fZ) goto L_0043663c;
L_00436633:; BB(0x00436633);
    /* 00436633: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 0043663a: jmp 0x436656 */ goto L_00436656;
L_0043663c:; BB(0x0043663c);
    /* 0043663c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043663f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436640: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00436645: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436645, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436645, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436647: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436649: je 0x436656 */ if (fZ) goto L_00436656;
L_0043664b:; BB(0x0043664b);
    /* 0043664b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043664e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436651: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00436654: jmp 0x43663c */ goto L_0043663c;
L_00436656:; BB(0x00436656);
    /* 00436656: jmp 0x4366f1 */ goto L_004366f1;
L_0043665b:; BB(0x0043665b);
    /* 0043665b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043665e: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x436663u); f_00434310();
    /* 00436663: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436666: jne 0x4366a4 */ if (!fZ) goto L_004366a4;
L_00436668:; BB(0x00436668);
    /* 00436668: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043666b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043666c: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00436671: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436671, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436671, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436673: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436675: jne 0x43668a */ if (!fZ) goto L_0043668a;
L_00436677:; BB(0x00436677);
    /* 00436677: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043667a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043667b: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00436680: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436680, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436680, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436682: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00436685: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00436688: jmp 0x4366a4 */ goto L_004366a4;
L_0043668a:; BB(0x0043668a);
    /* 0043668a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043668d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043668e: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00436693: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436693, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436693, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436695: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436697: je 0x4366a4 */ if (fZ) goto L_004366a4;
L_00436699:; BB(0x00436699);
    /* 00436699: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043669c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043669f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004366a2: jmp 0x43668a */ goto L_0043668a;
L_004366a4:; BB(0x004366a4);
    /* 004366a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004366a7: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x4366acu); f_00434310();
    /* 004366ac: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004366af: jne 0x4366f1 */ if (!fZ) goto L_004366f1;
L_004366b1:; BB(0x004366b1);
    /* 004366b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004366b4: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 004366b9: jns 0x4366c0 */ if (!fS) goto L_004366c0;
L_004366bb:; BB(0x004366bb);
    /* 004366bb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004366bc: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004366bf: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004366c0:; BB(0x004366c0);
    /* 004366c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004366c2: jne 0x4366d7 */ if (!fZ) goto L_004366d7;
L_004366c4:; BB(0x004366c4);
    /* 004366c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004366c7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004366c8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004366ca: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004366cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004366cf: lea edx, [eax + ecx*2] */ r_edx = (u32)(r_eax+r_ecx*2);
    /* 004366d2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004366d5: jmp 0x4366f1 */ goto L_004366f1;
L_004366d7:; BB(0x004366d7);
    /* 004366d7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004366da: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004366db: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004366e0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004366e0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004366e0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004366e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004366e4: je 0x4366f1 */ if (fZ) goto L_004366f1;
L_004366e6:; BB(0x004366e6);
    /* 004366e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004366e9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004366ec: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004366ef: jmp 0x4366d7 */ goto L_004366d7;
L_004366f1:; BB(0x004366f1);
    /* 004366f1: jmp 0x436910 */ goto L_00436910;
L_004366f6:; BB(0x004366f6);
    /* 004366f6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004366f9: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x4366feu); f_00434310();
    /* 004366fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436701: jne 0x43672c */ if (!fZ) goto L_0043672c;
L_00436703:; BB(0x00436703);
    /* 00436703: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436707: jne 0x436712 */ if (!fZ) goto L_00436712;
L_00436709:; BB(0x00436709);
    /* 00436709: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 00436710: jmp 0x43672c */ goto L_0043672c;
L_00436712:; BB(0x00436712);
    /* 00436712: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436715: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436716: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0043671b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043671b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043671b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043671d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043671f: je 0x43672c */ if (fZ) goto L_0043672c;
L_00436721:; BB(0x00436721);
    /* 00436721: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436724: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436727: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043672a: jmp 0x436712 */ goto L_00436712;
L_0043672c:; BB(0x0043672c);
    /* 0043672c: jmp 0x436910 */ goto L_00436910;
L_00436731:; BB(0x00436731);
    /* 00436731: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436734: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x436739u); f_00434310();
    /* 00436739: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043673c: jne 0x43677a */ if (!fZ) goto L_0043677a;
L_0043673e:; BB(0x0043673e);
    /* 0043673e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436741: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436742: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00436747: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436747, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436747, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436749: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043674b: jne 0x436760 */ if (!fZ) goto L_00436760;
L_0043674d:; BB(0x0043674d);
    /* 0043674d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436750: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436751: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00436756: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436756, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436756, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436758: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043675b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043675e: jmp 0x43677a */ goto L_0043677a;
L_00436760:; BB(0x00436760);
    /* 00436760: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436763: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436764: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00436769: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436769, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436769, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043676b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043676d: je 0x43677a */ if (fZ) goto L_0043677a;
L_0043676f:; BB(0x0043676f);
    /* 0043676f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436772: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436775: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00436778: jmp 0x436760 */ goto L_00436760;
L_0043677a:; BB(0x0043677a);
    /* 0043677a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043677d: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x436782u); f_00434310();
    /* 00436782: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436785: jne 0x4367c7 */ if (!fZ) goto L_004367c7;
L_00436787:; BB(0x00436787);
    /* 00436787: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043678a: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0043678f: jns 0x436796 */ if (!fS) goto L_00436796;
L_00436791:; BB(0x00436791);
    /* 00436791: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00436792: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00436795: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00436796:; BB(0x00436796);
    /* 00436796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436798: jne 0x4367ad */ if (!fZ) goto L_004367ad;
L_0043679a:; BB(0x0043679a);
    /* 0043679a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043679d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043679e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004367a0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004367a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004367a5: lea edx, [eax + ecx*2] */ r_edx = (u32)(r_eax+r_ecx*2);
    /* 004367a8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004367ab: jmp 0x4367c7 */ goto L_004367c7;
L_004367ad:; BB(0x004367ad);
    /* 004367ad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004367b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004367b1: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004367b6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004367b6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004367b6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004367b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004367ba: je 0x4367c7 */ if (fZ) goto L_004367c7;
L_004367bc:; BB(0x004367bc);
    /* 004367bc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004367bf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004367c2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004367c5: jmp 0x4367ad */ goto L_004367ad;
L_004367c7:; BB(0x004367c7);
    /* 004367c7: jmp 0x436910 */ goto L_00436910;
L_004367cc:; BB(0x004367cc);
    /* 004367cc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004367cf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004367d2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004367d5: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 004367db: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004367de: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004367e1: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004367e4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004367e7: cmp dword ptr [ebp - 0x28], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004367eb: ja 0x436883 */ if ((!fC&&!fZ)) goto L_00436883;
L_004367f1:; BB(0x004367f1);
    /* 004367f1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004367f4: jmp dword ptr [ecx*4 + 0x43697c] */ { u32 t = R32((u32)(r_ecx*4+0x43697cu)); switch (t) { case 0x436620u: goto L_00436620; case 0x43665bu: goto L_0043665b; case 0x4366f1u: goto L_004366f1; case 0x4367fbu: goto L_004367fb; case 0x436805u: goto L_00436805; case 0x43683eu: goto L_0043683e; case 0x436883u: goto L_00436883; default: UNSUP(0x004367f4, "jump table entry is not a known target"); } }
L_004367fb:; BB(0x004367fb);
    /* 004367fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004367fe: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00436800: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00436803: jmp 0x436883 */ goto L_00436883;
L_00436805:; BB(0x00436805);
    /* 00436805: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436808: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0043680d: jns 0x436814 */ if (!fS) goto L_00436814;
L_0043680f:; BB(0x0043680f);
    /* 0043680f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00436810: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00436813: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00436814:; BB(0x00436814);
    /* 00436814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436816: je 0x43682e */ if (fZ) goto L_0043682e;
L_00436818:; BB(0x00436818);
    /* 00436818: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043681b: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x436820u); f_00434310();
    /* 00436820: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436823: jg 0x43682e */ if ((!fZ&&fS==fO)) goto L_0043682e;
L_00436825:; BB(0x00436825);
    /* 00436825: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436828: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043682b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0043682e:; BB(0x0043682e);
    /* 0043682e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436831: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00436834: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436835: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00436837: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00436839: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043683c: jmp 0x436883 */ goto L_00436883;
L_0043683e:; BB(0x0043683e);
    /* 0043683e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436841: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436842: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00436847: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436847, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436847, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436849: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043684b: je 0x436872 */ if (fZ) goto L_00436872;
L_0043684d:; BB(0x0043684d);
    /* 0043684d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436850: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x436855u); f_00434310();
    /* 00436855: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436858: jg 0x436872 */ if ((!fZ&&fS==fO)) goto L_00436872;
L_0043685a:; BB(0x0043685a);
    /* 0043685a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043685d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043685e: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00436863: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00436863, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00436863, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436865: mov eax, 5 */ r_eax = 0x5u;
    /* 0043686a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043686c: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043686f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00436872:; BB(0x00436872);
    /* 00436872: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436875: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00436878: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436879: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0043687e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043687e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043687e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00436880: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00436883:; BB(0x00436883);
    /* 00436883: jmp 0x436910 */ goto L_00436910;
L_00436888:; BB(0x00436888);
    /* 00436888: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043688b: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043688d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00436890: jmp 0x436910 */ goto L_00436910;
L_00436892:; BB(0x00436892);
    /* 00436892: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436895: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0043689a: jns 0x4368a1 */ if (!fS) goto L_004368a1;
L_0043689c:; BB(0x0043689c);
    /* 0043689c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043689d: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004368a0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004368a1:; BB(0x004368a1);
    /* 004368a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004368a3: je 0x4368bb */ if (fZ) goto L_004368bb;
L_004368a5:; BB(0x004368a5);
    /* 004368a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004368a8: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x4368adu); f_00434310();
    /* 004368ad: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004368b0: jg 0x4368bb */ if ((!fZ&&fS==fO)) goto L_004368bb;
L_004368b2:; BB(0x004368b2);
    /* 004368b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004368b5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004368b8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004368bb:; BB(0x004368bb);
    /* 004368bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004368be: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004368c1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004368c2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004368c4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004368c6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004368c9: jmp 0x436910 */ goto L_00436910;
L_004368cb:; BB(0x004368cb);
    /* 004368cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004368ce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004368cf: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004368d4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004368d4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004368d4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004368d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004368d8: je 0x4368ff */ if (fZ) goto L_004368ff;
L_004368da:; BB(0x004368da);
    /* 004368da: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004368dd: call 0x434310 */ r_esp -= 4; W32(r_esp, 0x4368e2u); f_00434310();
    /* 004368e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004368e5: jg 0x4368ff */ if ((!fZ&&fS==fO)) goto L_004368ff;
L_004368e7:; BB(0x004368e7);
    /* 004368e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004368ea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004368eb: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004368f0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004368f0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004368f0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004368f2: mov eax, 5 */ r_eax = 0x5u;
    /* 004368f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004368f9: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004368fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004368ff:; BB(0x004368ff);
    /* 004368ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436902: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00436905: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00436906: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0043690b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043690b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043690b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043690d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00436910:; BB(0x00436910);
    /* 00436910: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436913: mov esp, ebp */ r_esp = r_ebp;
    /* 00436915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436916: ret 8 */ FN_RET(0x00436570); r_esp += 12; return;
}

void f_004369a0(void) /* sub_4369A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004369a0);
    /* 004369a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004369a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004369a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004369a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004369a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004369b0: jmp 0x4369bb */ goto L_004369bb;
L_004369b2:; BB(0x004369b2);
    /* 004369b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004369b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004369b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004369bb:; BB(0x004369bb);
    /* 004369bb: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004369bf: jge 0x4369ee */ if ((fS==fO)) goto L_004369ee;
L_004369c1:; BB(0x004369c1);
    /* 004369c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004369c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004369c7: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004369cb: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x4369d0u); f_005f5400();
    /* 004369d0: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004369d3: jne 0x4369ec */ if (!fZ) goto L_004369ec;
L_004369d5:; BB(0x004369d5);
    /* 004369d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004369d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004369da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004369db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004369de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004369e1: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004369e5: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x4369eau); f_005cb7d0();
    /* 004369ea: jmp 0x4369f0 */ goto L_004369f0;
L_004369ec:; BB(0x004369ec);
    /* 004369ec: jmp 0x4369b2 */ goto L_004369b2;
L_004369ee:; BB(0x004369ee);
    /* 004369ee: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004369f0:; BB(0x004369f0);
    /* 004369f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004369f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004369f3: ret 8 */ FN_RET(0x004369a0); r_esp += 12; return;
}

void f_00436a00(void) /* sub_436A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436a00);
    /* 00436a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00436a03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436a06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00436a09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436a10: jmp 0x436a1b */ goto L_00436a1b;
L_00436a12:; BB(0x00436a12);
    /* 00436a12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436a15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436a18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00436a1b:; BB(0x00436a1b);
    /* 00436a1b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436a1f: jge 0x436a3e */ if ((fS==fO)) goto L_00436a3e;
L_00436a21:; BB(0x00436a21);
    /* 00436a21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00436a24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436a25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436a28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436a29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436a2c: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x436a31u); f_004369a0();
    /* 00436a31: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00436a34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436a36: je 0x436a3c */ if (fZ) goto L_00436a3c;
L_00436a38:; BB(0x00436a38);
    /* 00436a38: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00436a3a: jmp 0x436a40 */ goto L_00436a40;
L_00436a3c:; BB(0x00436a3c);
    /* 00436a3c: jmp 0x436a12 */ goto L_00436a12;
L_00436a3e:; BB(0x00436a3e);
    /* 00436a3e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00436a40:; BB(0x00436a40);
    /* 00436a40: mov esp, ebp */ r_esp = r_ebp;
    /* 00436a42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436a43: ret 4 */ FN_RET(0x00436a00); r_esp += 8; return;
}

void f_00436a50(void) /* sub_436A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436a50);
    /* 00436a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00436a53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436a56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00436a59: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00436a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436a5d: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00436a60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436a61: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 00436a67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00436a69: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00436a6f: mov edx, dword ptr [eax + 0x26c] */ r_edx = R32((u32)(r_eax+0x26cu));
    /* 00436a75: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x436a77u); call_ind(t); }
    /* 00436a77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436a79: cmp dword ptr [ebp - 8], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436a80: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436a83: mov esp, ebp */ r_esp = r_ebp;
    /* 00436a85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436a86: ret  */ FN_RET(0x00436a50); r_esp += 4; return;
}

void f_00436a90(void) /* sub_436A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436a90);
    /* 00436a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00436a93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436a96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00436a99: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436a9c: mov cl, byte ptr [eax + 0xad4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xad4u))) & 0xffu);
    /* 00436aa2: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00436aa5: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00436aa9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00436aab: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00436aad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436ab0: mov esp, ebp */ r_esp = r_ebp;
    /* 00436ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436ab3: ret  */ FN_RET(0x00436a90); r_esp += 4; return;
}

void f_00436ac0(void) /* sub_436AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436ac0);
    /* 00436ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00436ac3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436ac6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00436ac9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00436acb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x436ad0u); f_0062fbf0();
    /* 00436ad0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436ad3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436ad6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00436ad9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436adb: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00436ade: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436ae1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436ae4: mov dword ptr [ecx + eax + 0xacc], edx */ W32((u32)(r_ecx+r_eax+0xaccu), r_edx);
    /* 00436aeb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00436aed: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x436af2u); f_0062fbf0();
    /* 00436af2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436af5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436af8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00436afb: mov eax, 1 */ r_eax = 0x1u;
    /* 00436b00: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00436b03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436b06: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00436b09: mov dword ptr [ecx + eax + 0xacc], edx */ W32((u32)(r_ecx+r_eax+0xaccu), r_edx);
    /* 00436b10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436b17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436b19: push 0x6b7f80 */ { u32 v = 0x6b7f80u; r_esp -= 4; W32(r_esp, v); }
    /* 00436b1e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00436b23: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00436b26: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x436b2bu); f_00607960();
    /* 00436b2b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00436b2e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b32: je 0x436b46 */ if (fZ) goto L_00436b46;
L_00436b34:; BB(0x00436b34);
    /* 00436b34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436b36: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436b39: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436b3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436b3f: mov dword ptr [edx + ecx + 0xacc], eax */ W32((u32)(r_edx+r_ecx+0xaccu), r_eax);
L_00436b46:; BB(0x00436b46);
    /* 00436b46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436b48: push 0x6b7f74 */ { u32 v = 0x6b7f74u; r_esp -= 4; W32(r_esp, v); }
    /* 00436b4d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00436b53: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00436b56: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x436b5bu); f_00607960();
    /* 00436b5b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00436b5e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b62: je 0x436b79 */ if (fZ) goto L_00436b79;
L_00436b64:; BB(0x00436b64);
    /* 00436b64: mov edx, 1 */ r_edx = 0x1u;
    /* 00436b69: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00436b6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436b6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436b72: mov dword ptr [eax + edx + 0xacc], ecx */ W32((u32)(r_eax+r_edx+0xaccu), r_ecx);
L_00436b79:; BB(0x00436b79);
    /* 00436b79: mov esp, ebp */ r_esp = r_ebp;
    /* 00436b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436b7c: ret  */ FN_RET(0x00436ac0); r_esp += 4; return;
}

void f_00436c80(void) /* sub_436C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436c80);
    /* 00436c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00436c83: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436c86: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00436c89: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00436c90: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 00436c97: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00436c9e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00436ca5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436cac: jmp 0x436cb7 */ goto L_00436cb7;
L_00436cae:; BB(0x00436cae);
    /* 00436cae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436cb1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436cb4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00436cb7:; BB(0x00436cb7);
    /* 00436cb7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436cbb: jge 0x436d39 */ if ((fS==fO)) goto L_00436d39;
L_00436cbd:; BB(0x00436cbd);
    /* 00436cbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436cc0: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00436cc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436cc5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x436ccau); f_005dcb00();
    /* 00436cca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436ccd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00436cd0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436cd3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x436cd8u); f_0063aac0();
    /* 00436cd8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00436cda: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00436cdd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436cdf: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436ce3: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436ce6: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00436ce9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436ceb: jne 0x436d34 */ if (!fZ) goto L_00436d34;
L_00436ced:; BB(0x00436ced);
    /* 00436ced: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436cf0: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00436cf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436cf5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00436cf8: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x436cfdu); f_004349b0();
    /* 00436cfd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00436d00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d02: je 0x436d34 */ if (fZ) goto L_00436d34;
L_00436d04:; BB(0x00436d04);
    /* 00436d04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436d07: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00436d0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436d0c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x436d11u); f_005dcb00();
    /* 00436d11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436d14: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00436d17: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00436d1a: mov al, byte ptr [edx + 0x4a2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a2u))) & 0xffu);
    /* 00436d20: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00436d23: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00436d27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d29: jne 0x436d34 */ if (!fZ) goto L_00436d34;
L_00436d2b:; BB(0x00436d2b);
    /* 00436d2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436d2e: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00436d32: jmp 0x436d3c */ goto L_00436d3c;
L_00436d34:; BB(0x00436d34);
    /* 00436d34: jmp 0x436cae */ goto L_00436cae;
L_00436d39:; BB(0x00436d39);
    /* 00436d39: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00436d3c:; BB(0x00436d3c);
    /* 00436d3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00436d3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436d3f: ret  */ FN_RET(0x00436c80); r_esp += 4; return;
}

void f_00436d40(void) /* sub_436D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436d40);
    /* 00436d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00436d43: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436d46: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00436d49: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00436d4c: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00436d52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00436d55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436d57: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d5b: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00436d5e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00436d61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d63: jne 0x436d74 */ if (!fZ) goto L_00436d74;
L_00436d65:; BB(0x00436d65);
    /* 00436d65: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436d68: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x436d6du); f_00434410();
    /* 00436d6d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436d70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d72: je 0x436d7b */ if (fZ) goto L_00436d7b;
L_00436d74:; BB(0x00436d74);
    /* 00436d74: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00436d76: jmp 0x437140 */ goto L_00437140;
L_00436d7b:; BB(0x00436d7b);
    /* 00436d7b: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00436d7d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436d80: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436d85u); f_00436a00();
    /* 00436d85: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00436d88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d8a: jne 0x436d9d */ if (!fZ) goto L_00436d9d;
L_00436d8c:; BB(0x00436d8c);
    /* 00436d8c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00436d8e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436d91: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436d96u); f_00436a00();
    /* 00436d96: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00436d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d9b: je 0x436e1c */ if (fZ) goto L_00436e1c;
L_00436d9d:; BB(0x00436d9d);
    /* 00436d9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436d9f: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436da2: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436da5: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436dac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00436daf: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00436db4: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436db7: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436dba: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436dc1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00436dc4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00436dc7: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00436dca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436dcc: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436dcf: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436dd2: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00436dd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436dd7: jne 0x436e15 */ if (!fZ) goto L_00436e15;
L_00436dd9:; BB(0x00436dd9);
    /* 00436dd9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436ddb: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436dde: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436de1: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436de8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00436deb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00436df0: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436df3: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436df6: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436dfd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00436e00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436e03: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00436e06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436e08: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e0b: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436e0e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00436e11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e13: je 0x436e1c */ if (fZ) goto L_00436e1c;
L_00436e15:; BB(0x00436e15);
    /* 00436e15: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00436e17: jmp 0x437140 */ goto L_00437140;
L_00436e1c:; BB(0x00436e1c);
    /* 00436e1c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00436e1e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436e21: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436e26u); f_00436a00();
    /* 00436e26: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436e29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e2b: jne 0x436e3e */ if (!fZ) goto L_00436e3e;
L_00436e2d:; BB(0x00436e2d);
    /* 00436e2d: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00436e2f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436e32: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436e37u); f_00436a00();
    /* 00436e37: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00436e3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e3c: je 0x436ebd */ if (fZ) goto L_00436ebd;
L_00436e3e:; BB(0x00436e3e);
    /* 00436e3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436e40: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00436e43: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436e46: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00436e4d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00436e50: mov eax, 1 */ r_eax = 0x1u;
    /* 00436e55: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00436e58: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436e5b: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00436e62: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00436e65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00436e68: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436e6b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436e6d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e70: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436e73: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00436e76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e78: jne 0x436eb6 */ if (!fZ) goto L_00436eb6;
L_00436e7a:; BB(0x00436e7a);
    /* 00436e7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436e7c: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00436e7f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436e82: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00436e89: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00436e8c: mov eax, 1 */ r_eax = 0x1u;
    /* 00436e91: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00436e94: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436e97: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00436e9e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00436ea1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00436ea4: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436ea7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436ea9: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436eac: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436eaf: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00436eb2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436eb4: je 0x436ebd */ if (fZ) goto L_00436ebd;
L_00436eb6:; BB(0x00436eb6);
    /* 00436eb6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00436eb8: jmp 0x437140 */ goto L_00437140;
L_00436ebd:; BB(0x00436ebd);
    /* 00436ebd: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00436ebf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436ec2: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436ec7u); f_00436a00();
    /* 00436ec7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00436eca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436ecc: jne 0x436edf */ if (!fZ) goto L_00436edf;
L_00436ece:; BB(0x00436ece);
    /* 00436ece: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00436ed0: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436ed3: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436ed8u); f_00436a00();
    /* 00436ed8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436edb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436edd: je 0x436f5e */ if (fZ) goto L_00436f5e;
L_00436edf:; BB(0x00436edf);
    /* 00436edf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436ee1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00436ee4: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00436ee7: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00436eee: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00436ef1: mov edx, 1 */ r_edx = 0x1u;
    /* 00436ef6: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00436ef9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00436efc: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00436f03: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00436f06: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00436f09: add edx, dword ptr [ebp - 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436f0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436f0e: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f11: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436f14: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436f17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f19: jne 0x436f57 */ if (!fZ) goto L_00436f57;
L_00436f1b:; BB(0x00436f1b);
    /* 00436f1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436f1d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00436f20: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00436f23: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00436f2a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00436f2d: mov edx, 1 */ r_edx = 0x1u;
    /* 00436f32: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00436f35: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00436f38: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00436f3f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00436f42: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00436f45: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436f48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436f4a: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f4d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436f50: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436f53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f55: je 0x436f5e */ if (fZ) goto L_00436f5e;
L_00436f57:; BB(0x00436f57);
    /* 00436f57: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00436f59: jmp 0x437140 */ goto L_00437140;
L_00436f5e:; BB(0x00436f5e);
    /* 00436f5e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00436f60: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436f63: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436f68u); f_00436a00();
    /* 00436f68: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00436f6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f6d: jne 0x436f80 */ if (!fZ) goto L_00436f80;
L_00436f6f:; BB(0x00436f6f);
    /* 00436f6f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00436f71: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436f74: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x436f79u); f_00436a00();
    /* 00436f79: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00436f7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436f7e: je 0x436fff */ if (fZ) goto L_00436fff;
L_00436f80:; BB(0x00436f80);
    /* 00436f80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436f82: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436f85: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436f88: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436f8f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00436f92: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00436f97: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436f9a: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436f9d: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436fa4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00436fa7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00436faa: add ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00436fad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436faf: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436fb2: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436fb5: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00436fb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436fba: jne 0x436ff8 */ if (!fZ) goto L_00436ff8;
L_00436fbc:; BB(0x00436fbc);
    /* 00436fbc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436fbe: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436fc1: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436fc4: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436fcb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00436fce: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00436fd3: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00436fd6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00436fd9: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00436fe0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00436fe3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00436fe6: add ecx, dword ptr [ebp - 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00436fe9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436feb: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436fee: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00436ff1: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00436ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436ff6: je 0x436fff */ if (fZ) goto L_00436fff;
L_00436ff8:; BB(0x00436ff8);
    /* 00436ff8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00436ffa: jmp 0x437140 */ goto L_00437140;
L_00436fff:; BB(0x00436fff);
    /* 00436fff: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00437001: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00437004: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x437009u); f_00436a00();
    /* 00437009: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043700c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043700e: jne 0x437021 */ if (!fZ) goto L_00437021;
L_00437010:; BB(0x00437010);
    /* 00437010: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00437012: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00437015: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x43701au); f_00436a00();
    /* 0043701a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043701d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043701f: je 0x4370a0 */ if (fZ) goto L_004370a0;
L_00437021:; BB(0x00437021);
    /* 00437021: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00437023: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00437026: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00437029: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00437030: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00437033: mov eax, 1 */ r_eax = 0x1u;
    /* 00437038: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043703b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0043703e: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00437045: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00437048: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043704b: add eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043704e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00437050: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437053: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00437056: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00437059: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043705b: jne 0x437099 */ if (!fZ) goto L_00437099;
L_0043705d:; BB(0x0043705d);
    /* 0043705d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043705f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00437062: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00437065: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043706c: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0043706f: mov eax, 1 */ r_eax = 0x1u;
    /* 00437074: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00437077: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0043707a: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00437081: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00437084: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00437087: add eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043708a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043708c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043708f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00437092: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00437095: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437097: je 0x4370a0 */ if (fZ) goto L_004370a0;
L_00437099:; BB(0x00437099);
    /* 00437099: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043709b: jmp 0x437140 */ goto L_00437140;
L_004370a0:; BB(0x004370a0);
    /* 004370a0: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004370a2: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004370a5: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4370aau); f_00436a00();
    /* 004370aa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004370ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004370af: jne 0x4370c2 */ if (!fZ) goto L_004370c2;
L_004370b1:; BB(0x004370b1);
    /* 004370b1: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 004370b3: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004370b6: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4370bbu); f_00436a00();
    /* 004370bb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004370be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004370c0: je 0x43713e */ if (fZ) goto L_0043713e;
L_004370c2:; BB(0x004370c2);
    /* 004370c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004370c4: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004370c7: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004370ca: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004370d1: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004370d4: mov edx, 1 */ r_edx = 0x1u;
    /* 004370d9: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004370dc: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004370df: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004370e6: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004370e9: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004370ec: add edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004370ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004370f1: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004370f4: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004370f7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004370fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004370fc: jne 0x43713a */ if (!fZ) goto L_0043713a;
L_004370fe:; BB(0x004370fe);
    /* 004370fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00437100: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00437103: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00437106: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043710d: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00437110: mov edx, 1 */ r_edx = 0x1u;
    /* 00437115: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00437118: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0043711b: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00437122: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00437125: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00437128: add edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043712b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043712d: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437130: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00437133: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00437136: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437138: je 0x43713e */ if (fZ) goto L_0043713e;
L_0043713a:; BB(0x0043713a);
    /* 0043713a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043713c: jmp 0x437140 */ goto L_00437140;
L_0043713e:; BB(0x0043713e);
    /* 0043713e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00437140:; BB(0x00437140);
    /* 00437140: mov esp, ebp */ r_esp = r_ebp;
    /* 00437142: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437143: ret  */ FN_RET(0x00436d40); r_esp += 4; return;
}

