#include "protos.h"

void f_00671120(void) /* sub_671120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671120);
    /* 00671120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671121: mov ebp, esp */ r_ebp = r_esp;
    /* 00671123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671129: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067112a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00671130: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00671133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671134: fld1  */ FPUSH(1.0);
    /* 00671136: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00671139: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067113b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067113d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067113f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671141: push 0x27ac40 */ { u32 v = 0x27ac40u; r_esp -= 4; W32(r_esp, v); }
    /* 00671146: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067114b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067114d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671153: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00671159: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67115bu); call_ind(t); }
    /* 0067115b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067115d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067115e: ret 4 */ FN_RET(0x00671120); r_esp += 8; return;
}

void f_00671170(void) /* sub_671170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671170);
    /* 00671170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671171: mov ebp, esp */ r_ebp = r_esp;
    /* 00671173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671177: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067117a: cmp dword ptr [eax + 0x194], 0 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671181: je 0x671195 */ if (fZ) goto L_00671195;
L_00671183:; BB(0x00671183);
    /* 00671183: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00671186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671187: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067118a: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 00671190: call 0x6715f0 */ r_esp -= 4; W32(r_esp, 0x671195u); f_006715f0();
L_00671195:; BB(0x00671195);
    /* 00671195: mov esp, ebp */ r_esp = r_ebp;
    /* 00671197: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671198: ret 4 */ FN_RET(0x00671170); r_esp += 8; return;
}

void f_006712d0(void) /* sub_6712D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006712d0);
    /* 006712d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006712d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006712d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006712d5: push 0x6ad149 */ { u32 v = 0x6ad149u; r_esp -= 4; W32(r_esp, v); }
    /* 006712da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006712e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006712e1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006712e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006712e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006712eb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006712ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006712ef: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006712f2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006712f8: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006712fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006712fd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006712ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671303: push 0x27ac46 */ { u32 v = 0x27ac46u; r_esp -= 4; W32(r_esp, v); }
    /* 00671308: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067130b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x671310u); f_005eae80();
    /* 00671310: push 0x6e10d4 */ { u32 v = 0x6e10d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00671315: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67131au); f_00630f40();
    /* 0067131a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067131d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067131e: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00671321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671322: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x671327u); f_00686d8e();
    /* 00671327: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067132a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00671331: jmp 0x67133c */ goto L_0067133c;
L_00671333:; BB(0x00671333);
    /* 00671333: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671336: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00671339: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0067133c:; BB(0x0067133c);
    /* 0067133c: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671340: jge 0x671407 */ if ((fS==fO)) goto L_00671407;
L_00671346:; BB(0x00671346);
    /* 00671346: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067134b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x671350u); f_00686d82();
    /* 00671350: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671353: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00671356: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067135d: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671361: je 0x671370 */ if (fZ) goto L_00671370;
L_00671363:; BB(0x00671363);
    /* 00671363: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00671366: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x67136bu); f_005ec5a0();
    /* 0067136b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067136e: jmp 0x671377 */ goto L_00671377;
L_00671370:; BB(0x00671370);
    /* 00671370: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00671377:; BB(0x00671377);
    /* 00671377: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067137a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0067137d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671384: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671387: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067138a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067138d: mov dword ptr [ecx + eax*4 + 0x178], edx */ W32((u32)(r_ecx+r_eax*4+0x178u), r_edx);
    /* 00671394: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671398: jne 0x6713a2 */ if (!fZ) goto L_006713a2;
L_0067139a:; BB(0x0067139a);
    /* 0067139a: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0067139d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006713a0: jmp 0x6713a9 */ goto L_006713a9;
L_006713a2:; BB(0x006713a2);
    /* 006713a2: mov dword ptr [ebp - 0x44], 0x6b27f8 */ W32((u32)(r_ebp+0xffffffbcu), 0x6b27f8u);
L_006713a9:; BB(0x006713a9);
    /* 006713a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006713ab: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006713ad: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006713af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006713b2: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006713b5: mov edx, 0x245 */ r_edx = 0x245u;
    /* 006713ba: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006713bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006713bd: push 0x251 */ { u32 v = 0x251u; r_esp -= 4; W32(r_esp, v); }
    /* 006713c2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006713c4: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006713c9: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 006713cb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 006713ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006713cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006713d2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006713d5: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 006713dc: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x6713e1u); f_005ec8f0();
    /* 006713e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006713e4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006713e7: mov edx, dword ptr [ecx + eax*4 + 0x178] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 006713ee: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006713f1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006713f4: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 006713fb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006713fd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00671400: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671402u); call_ind(t); }
    /* 00671402: jmp 0x671333 */ goto L_00671333;
L_00671407:; BB(0x00671407);
    /* 00671407: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671409: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067140c: call 0x671430 */ r_esp -= 4; W32(r_esp, 0x671411u); f_00671430();
    /* 00671411: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671414: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067141b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067141c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067141f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671421: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x671426u); f_00686d72();
    /* 00671426: mov esp, ebp */ r_esp = r_ebp;
    /* 00671428: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671429: ret  */ FN_RET(0x006712d0); r_esp += 4; return;
}

void f_00671430(void) /* sub_671430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671430);
    /* 00671430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671431: mov ebp, esp */ r_ebp = r_esp;
    /* 00671433: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671436: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00671439: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 0067143d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671443: call 0x6378e0 */ r_esp -= 4; W32(r_esp, 0x671448u); f_006378e0();
    /* 00671448: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0067144b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067144d: jne 0x671461 */ if (!fZ) goto L_00671461;
L_0067144f:; BB(0x0067144f);
    /* 0067144f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671452: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00671454: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671457: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067145a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67145cu); call_ind(t); }
    /* 0067145c: jmp 0x67158f */ goto L_0067158f;
L_00671461:; BB(0x00671461);
    /* 00671461: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671464: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067146a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067146d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00671473: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00671475: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0067147b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67147du); call_ind(t); }
    /* 0067147d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00671480: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00671484: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671486: je 0x6714ca */ if (fZ) goto L_006714ca;
L_00671488:; BB(0x00671488);
    /* 00671488: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067148c: je 0x6714ca */ if (fZ) goto L_006714ca;
L_0067148e:; BB(0x0067148e);
    /* 0067148e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00671491: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671492: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x671497u); f_00686ecc();
    /* 00671497: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067149a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0067149c: jbe 0x6714ca */ if ((fC||fZ)) goto L_006714ca;
L_0067149e:; BB(0x0067149e);
    /* 0067149e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006714a1: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 006714a7: movzx edx, byte ptr [ecx + 0x184] */ r_edx = (u32)R8((u32)(r_ecx+0x184u));
    /* 006714ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006714b0: jne 0x6714ca */ if (!fZ) goto L_006714ca;
L_006714b2:; BB(0x006714b2);
    /* 006714b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006714b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006714b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006714b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006714bc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006714c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6714c4u); call_ind(t); }
    /* 006714c4: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 006714c8: jmp 0x6714e0 */ goto L_006714e0;
L_006714ca:; BB(0x006714ca);
    /* 006714ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006714cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006714cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006714d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006714d4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006714da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6714dcu); call_ind(t); }
    /* 006714dc: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
L_006714e0:; BB(0x006714e0);
    /* 006714e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006714e7: jmp 0x6714f2 */ goto L_006714f2;
L_006714e9:; BB(0x006714e9);
    /* 006714e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006714ec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006714ef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006714f2:; BB(0x006714f2);
    /* 006714f2: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006714f6: jge 0x671587 */ if ((fS==fO)) goto L_00671587;
L_006714fc:; BB(0x006714fc);
    /* 006714fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006714ff: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00671502: mov eax, 0x245 */ r_eax = 0x245u;
    /* 00671507: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00671509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067150a: push 0x251 */ { u32 v = 0x251u; r_esp -= 4; W32(r_esp, v); }
    /* 0067150f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671512: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671515: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0067151c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067151f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671522: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 00671529: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067152b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0067152e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x671530u); call_ind(t); }
    /* 00671530: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00671534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671536: jne 0x67153e */ if (!fZ) goto L_0067153e;
L_00671538:; BB(0x00671538);
    /* 00671538: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067153c: jne 0x671561 */ if (!fZ) goto L_00671561;
L_0067153e:; BB(0x0067153e);
    /* 0067153e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671541: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671544: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0067154b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067154e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671551: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 00671558: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067155a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0067155d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67155fu); call_ind(t); }
    /* 0067155f: jmp 0x671582 */ goto L_00671582;
L_00671561:; BB(0x00671561);
    /* 00671561: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671564: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671567: mov edx, dword ptr [ecx + eax*4 + 0x178] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0067156e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671571: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671574: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0067157b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067157d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00671580: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671582u); call_ind(t); }
L_00671582:; BB(0x00671582);
    /* 00671582: jmp 0x6714e9 */ goto L_006714e9;
L_00671587:; BB(0x00671587);
    /* 00671587: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067158a: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x67158fu); f_005eb570();
L_0067158f:; BB(0x0067158f);
    /* 0067158f: mov esp, ebp */ r_esp = r_ebp;
    /* 00671591: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671592: ret 4 */ FN_RET(0x00671430); r_esp += 8; return;
}

void f_006715f0(void) /* sub_6715F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006715f0);
    /* 006715f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006715f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006715f3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006715f6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006715fb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006715fd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00671600: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00671603: push 0x6e10d4 */ { u32 v = 0x6e10d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00671608: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67160du); f_00630f40();
    /* 0067160d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671611: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00671614: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0067161a: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067161d: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00671623: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00671625: mov ecx, eax */ r_ecx = r_eax;
    /* 00671627: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0067162d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67162fu); call_ind(t); }
    /* 0067162f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671630: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x671635u); f_00686ec0();
    /* 00671635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067163a: jne 0x67165d */ if (!fZ) goto L_0067165d;
L_0067163c:; BB(0x0067163c);
    /* 0067163c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00671641: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00671644: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0067164a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067164d: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00671653: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00671655: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067165b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67165du); call_ind(t); }
L_0067165d:; BB(0x0067165d);
    /* 0067165d: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 00671664: jmp 0x67166f */ goto L_0067166f;
L_00671666:; BB(0x00671666);
    /* 00671666: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671669: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067166c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0067166f:; BB(0x0067166f);
    /* 0067166f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671673: jle 0x6716c2 */ if ((fZ||fS!=fO)) goto L_006716c2;
L_00671675:; BB(0x00671675);
    /* 00671675: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671678: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067167b: mov ecx, dword ptr [eax + edx*4 + 0x174] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x174u));
    /* 00671682: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671685: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00671688: mov edx, dword ptr [eax + edx*4 + 0x174] */ r_edx = R32((u32)(r_eax+r_edx*4+0x174u));
    /* 0067168f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00671691: mov ecx, edx */ r_ecx = r_edx;
    /* 00671693: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00671699: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67169bu); call_ind(t); }
    /* 0067169b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067169c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067169f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006716a2: mov edx, dword ptr [ecx + eax*4 + 0x178] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 006716a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006716ac: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006716af: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 006716b6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006716b8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006716be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6716c0u); call_ind(t); }
    /* 006716c0: jmp 0x671666 */ goto L_00671666;
L_006716c2:; BB(0x006716c2);
    /* 006716c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006716c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006716c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006716c8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006716ce: call 0x634310 */ r_esp -= 4; W32(r_esp, 0x6716d3u); f_00634310();
    /* 006716d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006716d6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006716dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006716de: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006716e4: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006716ea: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6716ecu); call_ind(t); }
    /* 006716ec: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006716ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006716f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006716f3: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006716f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006716f8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006716fb: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00671701: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671703u); call_ind(t); }
    /* 00671703: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00671706: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067170a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067170d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067170e: push 0x6e10f8 */ { u32 v = 0x6e10f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00671713: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00671716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671717: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x67171du); call_ind(t); }
    /* 0067171d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671720: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 00671723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671724: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00671727: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0067172d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00671730: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 00671736: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00671738: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067173e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671740u); call_ind(t); }
    /* 00671740: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671743: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671745: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x67174au); f_00686d72();
    /* 0067174a: mov esp, ebp */ r_esp = r_ebp;
    /* 0067174c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067174d: ret 4 */ FN_RET(0x006715f0); r_esp += 8; return;
}

void f_00671950(void) /* sub_671950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671950);
    /* 00671950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671951: mov ebp, esp */ r_ebp = r_esp;
    /* 00671953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671955: push 0x6ad1bf */ { u32 v = 0x6ad1bfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067195a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671961: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067196b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067196c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067196f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671975: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00671978: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067197a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067197c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067197e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671980: push 0x27ac41 */ { u32 v = 0x27ac41u; r_esp -= 4; W32(r_esp, v); }
    /* 00671985: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671988: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67198du); f_005eae80();
    /* 0067198d: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00671992: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x671997u); f_00686d82();
    /* 00671997: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067199a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067199d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006719a4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006719a8: je 0x6719b7 */ if (fZ) goto L_006719b7;
L_006719aa:; BB(0x006719aa);
    /* 006719aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006719ad: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x6719b2u); f_005f5bf0();
    /* 006719b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006719b5: jmp 0x6719be */ goto L_006719be;
L_006719b7:; BB(0x006719b7);
    /* 006719b7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006719be:; BB(0x006719be);
    /* 006719be: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006719c1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006719c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006719cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006719ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006719d1: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 006719d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006719d9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006719db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006719dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006719df: push 0x27ac43 */ { u32 v = 0x27ac43u; r_esp -= 4; W32(r_esp, v); }
    /* 006719e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006719e7: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 006719ed: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x6719f2u); f_005eae80();
    /* 006719f2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006719f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006719f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006719fa: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006719fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6719ffu); call_ind(t); }
    /* 006719ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671a02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00671a09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671a0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00671a0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671a0d: ret  */ FN_RET(0x00671950); r_esp += 4; return;
}

