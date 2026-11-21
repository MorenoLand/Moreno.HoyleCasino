#include "protos.h"

void f_0058a380(void) /* sub_58A380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a380);
    /* 0058a380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a381: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a387: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a38a: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058a390: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x58a395u); f_00585eb0();
    /* 0058a395: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058a398: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a39a: je 0x58a3d6 */ if (fZ) goto L_0058a3d6;
L_0058a39c:; BB(0x0058a39c);
    /* 0058a39c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a39f: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a3a4u); f_0058a470();
    /* 0058a3a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a3a6: jne 0x58a3bc */ if (!fZ) goto L_0058a3bc;
L_0058a3a8:; BB(0x0058a3a8);
    /* 0058a3a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a3ab: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 0058a3b1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058a3b4: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0058a3b7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a3ba: jl 0x58a3d6 */ if ((fS!=fO)) goto L_0058a3d6;
L_0058a3bc:; BB(0x0058a3bc);
    /* 0058a3bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a3bf: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a3c4u); f_0058a470();
    /* 0058a3c4: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a3c7: jle 0x58a3f6 */ if ((fZ||fS!=fO)) goto L_0058a3f6;
L_0058a3c9:; BB(0x0058a3c9);
    /* 0058a3c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a3cc: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a3d1u); f_0058a470();
    /* 0058a3d1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a3d4: jge 0x58a3f6 */ if ((fS==fO)) goto L_0058a3f6;
L_0058a3d6:; BB(0x0058a3d6);
    /* 0058a3d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a3d9: mov ecx, dword ptr [eax + 0x30c] */ r_ecx = R32((u32)(r_eax+0x30cu));
    /* 0058a3df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a3e2: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 0058a3e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058a3ea: mov ecx, eax */ r_ecx = r_eax;
    /* 0058a3ec: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058a3f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a3f4u); call_ind(t); }
    /* 0058a3f4: jmp 0x58a412 */ goto L_0058a412;
L_0058a3f6:; BB(0x0058a3f6);
    /* 0058a3f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a3f9: mov edx, dword ptr [ecx + 0x30c] */ r_edx = R32((u32)(r_ecx+0x30cu));
    /* 0058a3ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a402: mov ecx, dword ptr [eax + 0x30c] */ r_ecx = R32((u32)(r_eax+0x30cu));
    /* 0058a408: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058a40a: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058a410: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a412u); call_ind(t); }
L_0058a412:; BB(0x0058a412);
    /* 0058a412: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a415: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058a41b: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x58a420u); f_00585eb0();
    /* 0058a420: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058a423: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a425: je 0x58a447 */ if (fZ) goto L_0058a447;
L_0058a427:; BB(0x0058a427);
    /* 0058a427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a42a: mov ecx, dword ptr [eax + 0x300] */ r_ecx = R32((u32)(r_eax+0x300u));
    /* 0058a430: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a433: mov eax, dword ptr [edx + 0x300] */ r_eax = R32((u32)(r_edx+0x300u));
    /* 0058a439: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058a43b: mov ecx, eax */ r_ecx = r_eax;
    /* 0058a43d: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058a443: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a445u); call_ind(t); }
    /* 0058a445: jmp 0x58a463 */ goto L_0058a463;
L_0058a447:; BB(0x0058a447);
    /* 0058a447: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a44a: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 0058a450: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a453: mov ecx, dword ptr [eax + 0x300] */ r_ecx = R32((u32)(r_eax+0x300u));
    /* 0058a459: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058a45b: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058a461: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a463u); call_ind(t); }
L_0058a463:; BB(0x0058a463);
    /* 0058a463: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a465: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a466: ret  */ FN_RET(0x0058a380); r_esp += 4; return;
}

void f_0058a470(void) /* sub_58A470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a470);
    /* 0058a470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a471: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a473: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a476: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0058a479: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0058a480: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058a487: jmp 0x58a492 */ goto L_0058a492;
L_0058a489:; BB(0x0058a489);
    /* 0058a489: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a48c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058a48f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0058a492:; BB(0x0058a492);
    /* 0058a492: cmp dword ptr [ebp - 4], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a496: jge 0x58a4cc */ if ((fS==fO)) goto L_0058a4cc;
L_0058a498:; BB(0x0058a498);
    /* 0058a498: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a49b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a49e: cmp dword ptr [edx + ecx*4 + 0x1bc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a4a6: je 0x58a4ca */ if (fZ) goto L_0058a4ca;
L_0058a4a8:; BB(0x0058a4a8);
    /* 0058a4a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a4ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a4ae: mov ecx, dword ptr [ecx + eax*4 + 0x1bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 0058a4b5: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x58a4bau); f_00600230();
    /* 0058a4ba: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058a4bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a4bf: je 0x58a4ca */ if (fZ) goto L_0058a4ca;
L_0058a4c1:; BB(0x0058a4c1);
    /* 0058a4c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a4c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058a4c7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0058a4ca:; BB(0x0058a4ca);
    /* 0058a4ca: jmp 0x58a489 */ goto L_0058a489;
L_0058a4cc:; BB(0x0058a4cc);
    /* 0058a4cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a4cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a4d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a4d2: ret  */ FN_RET(0x0058a470); r_esp += 4; return;
}

void f_0058a4e0(void) /* sub_58A4E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a4e0);
    /* 0058a4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a4e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a4e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a4e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a4ea: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058a4f0: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a4f3: je 0x58a523 */ if (fZ) goto L_0058a523;
L_0058a4f5:; BB(0x0058a4f5);
    /* 0058a4f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a4f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058a4fb: mov dword ptr [edx + 0x3c08], eax */ W32((u32)(r_edx+0x3c08u), r_eax);
    /* 0058a501: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a504: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058a50a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a50d: mov ecx, dword ptr [eax + edx*4 + 0x3be4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3be4u));
    /* 0058a514: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a515: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a518: mov ecx, dword ptr [edx + 0x314] */ r_ecx = R32((u32)(r_edx+0x314u));
    /* 0058a51e: call 0x58dfb0 */ r_esp -= 4; W32(r_esp, 0x58a523u); f_0058dfb0();
L_0058a523:; BB(0x0058a523);
    /* 0058a523: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a526: ret 4 */ FN_RET(0x0058a4e0); r_esp += 8; return;
}

void f_0058a530(void) /* sub_58A530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a530);
    /* 0058a530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a531: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a537: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a53a: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058a540: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a543: mov eax, dword ptr [edx + ecx*4 + 0x3bf4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3bf4u));
    /* 0058a54a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a54c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a54d: ret  */ FN_RET(0x0058a530); r_esp += 4; return;
}

void f_0058a550(void) /* sub_58A550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a550);
    /* 0058a550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a551: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a55a: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058a560: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a563: mov eax, dword ptr [edx + ecx*4 + 0x3be4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3be4u));
    /* 0058a56a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a56c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a56d: ret  */ FN_RET(0x0058a550); r_esp += 4; return;
}

void f_0058a570(void) /* sub_58A570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a570);
    /* 0058a570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a571: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a577: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058a57c: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058a582: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058a585: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0058a588: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a58b: jge 0x58a5b5 */ if ((fS==fO)) goto L_0058a5b5;
L_0058a58d:; BB(0x0058a58d);
    /* 0058a58d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a590: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a595u); f_0058a470();
    /* 0058a595: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a597: je 0x58a5b3 */ if (fZ) goto L_0058a5b3;
L_0058a599:; BB(0x0058a599);
    /* 0058a599: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a59c: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a5a1u); f_0058a470();
    /* 0058a5a1: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a5a4: jle 0x58a5b5 */ if ((fZ||fS!=fO)) goto L_0058a5b5;
L_0058a5a6:; BB(0x0058a5a6);
    /* 0058a5a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a5a9: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a5aeu); f_0058a470();
    /* 0058a5ae: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a5b1: jge 0x58a5b5 */ if ((fS==fO)) goto L_0058a5b5;
L_0058a5b3:; BB(0x0058a5b3);
    /* 0058a5b3: jmp 0x58a5f1 */ goto L_0058a5f1;
L_0058a5b5:; BB(0x0058a5b5);
    /* 0058a5b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a5b8: mov edx, dword ptr [ecx + 0x3b68] */ r_edx = R32((u32)(r_ecx+0x3b68u));
    /* 0058a5be: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0058a5c1: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0058a5c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a5c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a5c9: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 0058a5cf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058a5d2: cmp byte ptr [ecx + 3], 0 */ {  u32 a = R8((u32)(r_ecx+0x3u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0058a5d6: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0058a5d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a5da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a5dd: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a5e2u); f_0058a470();
    /* 0058a5e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a5e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a5e6: mov ecx, dword ptr [eax + 0x3b70] */ r_ecx = R32((u32)(r_eax+0x3b70u));
    /* 0058a5ec: call 0x58b380 */ r_esp -= 4; W32(r_esp, 0x58a5f1u); f_0058b380();
L_0058a5f1:; BB(0x0058a5f1);
    /* 0058a5f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a5f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a5f4: ret  */ FN_RET(0x0058a570); r_esp += 4; return;
}

void f_0058a600(void) /* sub_58A600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a600);
    /* 0058a600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a601: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a607: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a60a: mov ecx, dword ptr [eax + 0x3b70] */ r_ecx = R32((u32)(r_eax+0x3b70u));
    /* 0058a610: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a613: mov eax, dword ptr [edx + 0x3b70] */ r_eax = R32((u32)(r_edx+0x3b70u));
    /* 0058a619: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058a61b: mov ecx, eax */ r_ecx = r_eax;
    /* 0058a61d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058a620: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a622u); call_ind(t); }
    /* 0058a622: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a625: ret  */ FN_RET(0x0058a600); r_esp += 4; return;
}

void f_0058a630(void) /* sub_58A630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a630);
    /* 0058a630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a631: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a637: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a63a: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058a640: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a643: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058a646: mov dword ptr [edx + ecx*4 + 0x3be4], eax */ W32((u32)(r_edx+r_ecx*4+0x3be4u), r_eax);
    /* 0058a64d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a650: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058a656: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a65c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a65f: lea ecx, [eax + edx + 0x328] */ r_ecx = (u32)(r_eax+r_edx+0x328u);
    /* 0058a666: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058a669: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a66c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a66e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a66f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a672: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058a678: call 0x5856f0 */ r_esp -= 4; W32(r_esp, 0x58a67du); f_005856f0();
    /* 0058a67d: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a67f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a680: ret 4 */ FN_RET(0x0058a630); r_esp += 8; return;
}

void f_0058a690(void) /* sub_58A690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a690);
    /* 0058a690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a691: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a693: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a696: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058a699: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0058a6a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a6a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058a6a5: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58a6aau); f_005fb5e0();
    /* 0058a6aa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058a6ad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a6b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058a6b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a6b6: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0058a6bc: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0058a6bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a6c2: sub eax, 0x30dfbd */ {  u32 a = r_eax; u32 b = 0x30dfbdu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058a6c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058a6ca: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058a6ce: ja 0x58a6fc */ if ((!fC&&!fZ)) goto L_0058a6fc;
L_0058a6d0:; BB(0x0058a6d0);
    /* 0058a6d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a6d3: jmp dword ptr [ecx*4 + 0x58a738] */ { u32 t = R32((u32)(r_ecx*4+0x58a738u)); switch (t) { case 0x58a6dau: goto L_0058a6da; case 0x58a6e3u: goto L_0058a6e3; case 0x58a6ecu: goto L_0058a6ec; case 0x58a6f5u: goto L_0058a6f5; default: UNSUP(0x0058a6d3, "jump table entry is not a known target"); } }
L_0058a6da:; BB(0x0058a6da);
    /* 0058a6da: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0058a6e1: jmp 0x58a6fc */ goto L_0058a6fc;
L_0058a6e3:; BB(0x0058a6e3);
    /* 0058a6e3: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0058a6ea: jmp 0x58a6fc */ goto L_0058a6fc;
L_0058a6ec:; BB(0x0058a6ec);
    /* 0058a6ec: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0058a6f3: jmp 0x58a6fc */ goto L_0058a6fc;
L_0058a6f5:; BB(0x0058a6f5);
    /* 0058a6f5: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
L_0058a6fc:; BB(0x0058a6fc);
    /* 0058a6fc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058a702: call 0x5e2f60 */ r_esp -= 4; W32(r_esp, 0x58a707u); f_005e2f60();
    /* 0058a707: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0058a70a: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a70d: je 0x58a732 */ if (fZ) goto L_0058a732;
L_0058a70f:; BB(0x0058a70f);
    /* 0058a70f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058a715: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x58a71au); f_005de600();
    /* 0058a71a: mov ecx, eax */ r_ecx = r_eax;
    /* 0058a71c: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x58a721u); f_005d52e0();
    /* 0058a721: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0058a724: mov byte ptr [eax + 0x5e], cl */ W8((u32)(r_eax+0x5eu), (u8)r_ecx);
    /* 0058a727: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0058a72d: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x58a732u); f_00637610();
L_0058a732:; BB(0x0058a732);
    /* 0058a732: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a735: ret  */ FN_RET(0x0058a690); r_esp += 4; return;
}

void f_0058a750(void) /* sub_58A750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a750);
    /* 0058a750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a751: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a753: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a756: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0058a759: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058a75c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a75d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a760: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058a766: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0058a769: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a76c: lea ecx, [eax + edx + 0x3ba4] */ r_ecx = (u32)(r_eax+r_edx+0x3ba4u);
    /* 0058a773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a774: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058a77a: call 0x5de230 */ r_esp -= 4; W32(r_esp, 0x58a77fu); f_005de230();
    /* 0058a77f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a782: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0058a785: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a788: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058a78e: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x58a793u); f_00585eb0();
    /* 0058a793: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058a796: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a798: je 0x58a8b3 */ if (fZ) goto L_0058a8b3;
L_0058a79e:; BB(0x0058a79e);
    /* 0058a79e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a7a1: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 0058a7a7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058a7aa: movsx edx, byte ptr [ecx + 2] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x2u));
    /* 0058a7ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a7b0: jne 0x58a7c2 */ if (!fZ) goto L_0058a7c2;
L_0058a7b2:; BB(0x0058a7b2);
    /* 0058a7b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a7b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a7b7: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058a7bd: call 0x585aa0 */ r_esp -= 4; W32(r_esp, 0x58a7c2u); f_00585aa0();
L_0058a7c2:; BB(0x0058a7c2);
    /* 0058a7c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a7c5: mov edx, dword ptr [ecx + 0x3b68] */ r_edx = R32((u32)(r_ecx+0x3b68u));
    /* 0058a7cb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0058a7ce: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0058a7d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a7d5: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 0058a7db: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0058a7de: movsx eax, byte ptr [edx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 0058a7e2: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a7e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058a7e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058a7eb: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a7ee: jl 0x58a88d */ if ((fS!=fO)) goto L_0058a88d;
L_0058a7f4:; BB(0x0058a7f4);
    /* 0058a7f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058a7f7: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0058a7fa: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0058a7fd: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058a800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a801: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a804: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058a80a: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0058a80d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a810: lea ecx, [eax + edx + 0x3ba4] */ r_ecx = (u32)(r_eax+r_edx+0x3ba4u);
    /* 0058a817: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a818: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058a81e: call 0x5de620 */ r_esp -= 4; W32(r_esp, 0x58a823u); f_005de620();
    /* 0058a823: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a826: mov ecx, dword ptr [edx + 0x3b68] */ r_ecx = R32((u32)(r_edx+0x3b68u));
    /* 0058a82c: call 0x585e00 */ r_esp -= 4; W32(r_esp, 0x58a831u); f_00585e00();
    /* 0058a831: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a834: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a838: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a83b: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058a841: call 0x585e30 */ r_esp -= 4; W32(r_esp, 0x58a846u); f_00585e30();
    /* 0058a846: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a848: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a84b: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058a851: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a854: mov edx, dword ptr [ecx + eax*4 + 0x3be4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3be4u));
    /* 0058a85b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a85c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a85f: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058a865: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058a868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a869: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a86c: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058a872: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0058a875: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058a878: lea eax, [edx + ecx + 0x3ba4] */ r_eax = (u32)(r_edx+r_ecx+0x3ba4u);
    /* 0058a87f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a880: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058a886: call 0x5e2c40 */ r_esp -= 4; W32(r_esp, 0x58a88bu); f_005e2c40();
    /* 0058a88b: jmp 0x58a8b3 */ goto L_0058a8b3;
L_0058a88d:; BB(0x0058a88d);
    /* 0058a88d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a88f: push 0x6cd008 */ { u32 v = 0x6cd008u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a894: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58a899u); f_00630f40();
    /* 0058a899: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a89c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a89d: push 0x6ccff0 */ { u32 v = 0x6ccff0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a8a2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58a8a7u); f_00630f40();
    /* 0058a8a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a8aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a8ab: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x58a8b0u); f_0062ff10();
    /* 0058a8b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058a8b3:; BB(0x0058a8b3);
    /* 0058a8b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a8b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a8b6: ret  */ FN_RET(0x0058a750); r_esp += 4; return;
}

void f_0058a8c0(void) /* sub_58A8C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058a8c0);
    /* 0058a8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058a8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058a8c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058a8c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058a8c7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0058a8ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a8cd: call 0x58a550 */ r_esp -= 4; W32(r_esp, 0x58a8d2u); f_0058a550();
    /* 0058a8d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058a8d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a8d8: call 0x58acf0 */ r_esp -= 4; W32(r_esp, 0x58a8ddu); f_0058acf0();
    /* 0058a8dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a8e0: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058a8e6: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a8ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a8ef: lea eax, [edx + ecx + 0x328] */ r_eax = (u32)(r_edx+r_ecx+0x328u);
    /* 0058a8f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a8f9: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a8fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a8ff: mov edx, dword ptr [edx + 0x3b68] */ r_edx = R32((u32)(r_edx+0x3b68u));
    /* 0058a905: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0058a908: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 0058a90b: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0058a90d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a910: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058a916: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a91c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a91f: lea ecx, [eax + edx + 0x328] */ r_ecx = (u32)(r_eax+r_edx+0x328u);
    /* 0058a926: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a929: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a92c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a92f: mov eax, dword ptr [eax + 0x3b68] */ r_eax = R32((u32)(r_eax+0x3b68u));
    /* 0058a935: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0058a938: mov cl, byte ptr [ecx + edx + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0x1u))) & 0xffu);
    /* 0058a93c: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 0058a93f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a942: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058a948: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a94e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a951: lea edx, [ecx + eax + 0x328] */ r_edx = (u32)(r_ecx+r_eax+0x328u);
    /* 0058a958: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a95b: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a95e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a961: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058a967: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0058a96a: mov dl, byte ptr [edx + eax + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x2u))) & 0xffu);
    /* 0058a96e: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 0058a971: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a974: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058a97a: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a980: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a983: lea eax, [edx + ecx + 0x328] */ r_eax = (u32)(r_edx+r_ecx+0x328u);
    /* 0058a98a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a98d: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a990: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a993: mov edx, dword ptr [edx + 0x3b68] */ r_edx = R32((u32)(r_edx+0x3b68u));
    /* 0058a999: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0058a99c: mov al, byte ptr [eax + ecx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x3u))) & 0xffu);
    /* 0058a9a0: mov byte ptr [edx + 3], al */ W8((u32)(r_edx+0x3u), (u8)r_eax);
    /* 0058a9a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058a9aa: jmp 0x58a9b5 */ goto L_0058a9b5;
L_0058a9ac:; BB(0x0058a9ac);
    /* 0058a9ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a9af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a9b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0058a9b5:; BB(0x0058a9b5);
    /* 0058a9b5: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a9b9: jge 0x58a9f8 */ if ((fS==fO)) goto L_0058a9f8;
L_0058a9bb:; BB(0x0058a9bb);
    /* 0058a9bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a9be: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058a9c4: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a9ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a9cd: lea edx, [ecx + eax + 0x328] */ r_edx = (u32)(r_ecx+r_eax+0x328u);
    /* 0058a9d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058a9d7: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058a9da: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058a9dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a9df: mov eax, dword ptr [ecx + 0x3b68] */ r_eax = R32((u32)(r_ecx+0x3b68u));
    /* 0058a9e5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058a9e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a9eb: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a9ee: mov dl, byte ptr [edx + esi + 5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi+0x5u))) & 0xffu);
    /* 0058a9f2: mov byte ptr [ecx + eax + 5], dl */ W8((u32)(r_ecx+r_eax+0x5u), (u8)r_edx);
    /* 0058a9f6: jmp 0x58a9ac */ goto L_0058a9ac;
L_0058a9f8:; BB(0x0058a9f8);
    /* 0058a9f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058a9fb: call 0x589290 */ r_esp -= 4; W32(r_esp, 0x58aa00u); f_00589290();
    /* 0058aa00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058aa01: mov esp, ebp */ r_esp = r_ebp;
    /* 0058aa03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058aa04: ret  */ FN_RET(0x0058a8c0); r_esp += 4; return;
}

void f_0058aa10(void) /* sub_58AA10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058aa10);
    /* 0058aa10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa11: mov ebp, esp */ r_ebp = r_esp;
    /* 0058aa13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058aa16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa18: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058aa1b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aa1e: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058aa24: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x58aa29u); f_00585eb0();
    /* 0058aa29: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058aa2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058aa2e: je 0x58aa43 */ if (fZ) goto L_0058aa43;
L_0058aa30:; BB(0x0058aa30);
    /* 0058aa30: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aa33: mov ecx, dword ptr [edx + 0x3b68] */ r_ecx = R32((u32)(r_edx+0x3b68u));
    /* 0058aa39: call 0x5857a0 */ r_esp -= 4; W32(r_esp, 0x58aa3eu); f_005857a0();
    /* 0058aa3e: jmp 0x58acdf */ goto L_0058acdf;
L_0058aa43:; BB(0x0058aa43);
    /* 0058aa43: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa45: push 0x6cd044 */ { u32 v = 0x6cd044u; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58aa4fu); f_00630f40();
    /* 0058aa4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058aa52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa53: push 0x6cd024 */ { u32 v = 0x6cd024u; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa58: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58aa5du); f_00630f40();
    /* 0058aa5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058aa60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aa61: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x58aa66u); f_0062ff10();
    /* 0058aa66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058aa69: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058aa6c: jne 0x58aa73 */ if (!fZ) goto L_0058aa73;
L_0058aa6e:; BB(0x0058aa6e);
    /* 0058aa6e: jmp 0x58acdf */ goto L_0058acdf;
L_0058aa73:; BB(0x0058aa73);
    /* 0058aa73: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aa76: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058aa7c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aa7f: mov eax, dword ptr [edx + ecx*4 + 0x3be4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3be4u));
    /* 0058aa86: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058aa89: jmp 0x58aa94 */ goto L_0058aa94;
L_0058aa8b:; BB(0x0058aa8b);
    /* 0058aa8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058aa8e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058aa91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0058aa94:; BB(0x0058aa94);
    /* 0058aa94: cmp dword ptr [ebp - 4], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058aa98: jge 0x58aae8 */ if ((fS==fO)) goto L_0058aae8;
L_0058aa9a:; BB(0x0058aa9a);
    /* 0058aa9a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aa9d: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058aaa3: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058aaa9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aaac: lea esi, [ecx + eax + 0x328] */ r_esi = (u32)(r_ecx+r_eax+0x328u);
    /* 0058aab3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058aab6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058aab9: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058aabc: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058aabe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aac1: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058aac7: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058aacd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aad0: lea edi, [edx + ecx + 0x328] */ r_edi = (u32)(r_edx+r_ecx+0x328u);
    /* 0058aad7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058aada: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058aadd: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0058aadf: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0058aae4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0058aae6: jmp 0x58aa8b */ goto L_0058aa8b;
L_0058aae8:; BB(0x0058aae8);
    /* 0058aae8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aaeb: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058aaf1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aaf4: mov ecx, dword ptr [eax + edx*4 + 0x3be4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3be4u));
    /* 0058aafb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058aafc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aaff: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058ab05: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0058ab08: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab0b: lea edx, [ecx + eax + 0x3ba4] */ r_edx = (u32)(r_ecx+r_eax+0x3ba4u);
    /* 0058ab12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ab13: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058ab19: call 0x5e2e40 */ r_esp -= 4; W32(r_esp, 0x58ab1eu); f_005e2e40();
    /* 0058ab1e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab21: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ab27: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ab2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab30: mov byte ptr [edx + ecx + 0x1114], 0 */ W8((u32)(r_edx+r_ecx+0x1114u), 0x0u);
    /* 0058ab38: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab3b: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ab41: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ab47: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab4a: mov byte ptr [edx + ecx + 0x1115], 1 */ W8((u32)(r_edx+r_ecx+0x1115u), 0x1u);
    /* 0058ab52: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab55: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ab5b: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ab61: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab64: mov byte ptr [edx + ecx + 0x1116], 1 */ W8((u32)(r_edx+r_ecx+0x1116u), 0x1u);
    /* 0058ab6c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab6f: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ab75: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ab7b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab7e: mov byte ptr [edx + ecx + 0x1117], 0 */ W8((u32)(r_edx+r_ecx+0x1117u), 0x0u);
    /* 0058ab86: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab89: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ab8f: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ab95: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ab98: mov byte ptr [edx + ecx + 0x1118], 0 */ W8((u32)(r_edx+r_ecx+0x1118u), 0x0u);
    /* 0058aba0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aba3: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058aba9: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058abaf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058abb2: mov dword ptr [edx + ecx + 0x1130], 0 */ W32((u32)(r_edx+r_ecx+0x1130u), 0x0u);
    /* 0058abbd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058abc0: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058abc6: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058abcc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058abcf: mov dword ptr [edx + ecx + 0x1134], 0 */ W32((u32)(r_edx+r_ecx+0x1134u), 0x0u);
    /* 0058abda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058abe1: jmp 0x58abec */ goto L_0058abec;
L_0058abe3:; BB(0x0058abe3);
    /* 0058abe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058abe6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058abe9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0058abec:; BB(0x0058abec);
    /* 0058abec: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058abf0: jge 0x58ac11 */ if ((fS==fO)) goto L_0058ac11;
L_0058abf2:; BB(0x0058abf2);
    /* 0058abf2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058abf5: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058abfb: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ac01: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058ac04: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac07: mov byte ptr [eax + edx + 0x1119], 0 */ W8((u32)(r_eax+r_edx+0x1119u), 0x0u);
    /* 0058ac0f: jmp 0x58abe3 */ goto L_0058abe3;
L_0058ac11:; BB(0x0058ac11);
    /* 0058ac11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac14: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058ac1a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac1d: mov ecx, dword ptr [eax + edx*4 + 0x3be4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3be4u));
    /* 0058ac24: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0058ac27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac2a: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058ac30: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac33: mov dword ptr [edx + eax*4 + 0x3be4], ecx */ W32((u32)(r_edx+r_eax*4+0x3be4u), r_ecx);
    /* 0058ac3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac3d: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ac43: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac46: cmp dword ptr [edx + ecx*4 + 0x3be4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3be4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058ac4e: jge 0x58ac67 */ if ((fS==fO)) goto L_0058ac67;
L_0058ac50:; BB(0x0058ac50);
    /* 0058ac50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac53: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ac59: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac5c: mov dword ptr [edx + ecx*4 + 0x3be4], 0 */ W32((u32)(r_edx+r_ecx*4+0x3be4u), 0x0u);
L_0058ac67:; BB(0x0058ac67);
    /* 0058ac67: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac6a: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ac70: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac73: mov eax, dword ptr [edx + ecx*4 + 0x3bf4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3bf4u));
    /* 0058ac7a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058ac7d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac80: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058ac86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac89: mov dword ptr [ecx + edx*4 + 0x3bf4], eax */ W32((u32)(r_ecx+r_edx*4+0x3bf4u), r_eax);
    /* 0058ac90: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac93: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058ac99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ac9c: cmp dword ptr [ecx + eax*4 + 0x3bf4], 1 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x3bf4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058aca4: jge 0x58acbd */ if ((fS==fO)) goto L_0058acbd;
L_0058aca6:; BB(0x0058aca6);
    /* 0058aca6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058aca9: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058acaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058acb2: mov dword ptr [ecx + eax*4 + 0x3bf4], 1 */ W32((u32)(r_ecx+r_eax*4+0x3bf4u), 0x1u);
L_0058acbd:; BB(0x0058acbd);
    /* 0058acbd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058acc0: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058acc6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058acc9: mov edx, dword ptr [ecx + eax*4 + 0x3be4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3be4u));
    /* 0058acd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058acd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058acd4: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 0058acda: call 0x58dfb0 */ r_esp -= 4; W32(r_esp, 0x58acdfu); f_0058dfb0();
L_0058acdf:; BB(0x0058acdf);
    /* 0058acdf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058ace0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058ace1: mov esp, ebp */ r_esp = r_ebp;
    /* 0058ace3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058ace4: ret  */ FN_RET(0x0058aa10); r_esp += 4; return;
}

void f_0058acf0(void) /* sub_58ACF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058acf0);
    /* 0058acf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058acf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058acf3: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058acf9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058acfe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058ad00: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058ad03: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0058ad09: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ad0f: call 0x58a530 */ r_esp -= 4; W32(r_esp, 0x58ad14u); f_0058a530();
    /* 0058ad14: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058ad17: jl 0x58ad5d */ if ((fS!=fO)) goto L_0058ad5d;
L_0058ad19:; BB(0x0058ad19);
    /* 0058ad19: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad1b: push 0x6cd07c */ { u32 v = 0x6cd07cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad20: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58ad25u); f_00630f40();
    /* 0058ad25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ad28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad29: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0058ad2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad30: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58ad36u); call_ind(t); }
    /* 0058ad36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ad39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad3b: push 0x6cd060 */ { u32 v = 0x6cd060u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad40: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58ad45u); f_00630f40();
    /* 0058ad45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ad48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad49: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0058ad4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ad50: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x58ad55u); f_0062ff10();
    /* 0058ad55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ad58: jmp 0x58aee8 */ goto L_0058aee8;
L_0058ad5d:; BB(0x0058ad5d);
    /* 0058ad5d: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ad63: mov ecx, dword ptr [edx + 0x3b68] */ r_ecx = R32((u32)(r_edx+0x3b68u));
    /* 0058ad69: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x58ad6eu); f_00585eb0();
    /* 0058ad6e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0058ad71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ad73: je 0x58ad8b */ if (fZ) goto L_0058ad8b;
L_0058ad75:; BB(0x0058ad75);
    /* 0058ad75: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ad7b: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058ad81: call 0x5857a0 */ r_esp -= 4; W32(r_esp, 0x58ad86u); f_005857a0();
    /* 0058ad86: jmp 0x58aee8 */ goto L_0058aee8;
L_0058ad8b:; BB(0x0058ad8b);
    /* 0058ad8b: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ad91: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058ad97: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ad9d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ada3: lea edx, [ecx + eax + 0x328] */ r_edx = (u32)(r_ecx+r_eax+0x328u);
    /* 0058adaa: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058adb0: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058adb6: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058adbc: mov ecx, dword ptr [eax + ecx*4 + 0x3bf4] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x3bf4u));
    /* 0058adc3: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0058adc6: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058adc9: cmp dword ptr [edx + ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058adce: jne 0x58ae14 */ if (!fZ) goto L_0058ae14;
L_0058add0:; BB(0x0058add0);
    /* 0058add0: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058add6: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058addc: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ade2: mov edx, dword ptr [ecx + eax*4 + 0x3bf4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3bf4u));
    /* 0058ade9: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0058adec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058aded: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058adf3: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 0058adf9: call 0x58dfb0 */ r_esp -= 4; W32(r_esp, 0x58adfeu); f_0058dfb0();
    /* 0058adfe: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae04: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058ae0a: call 0x5857a0 */ r_esp -= 4; W32(r_esp, 0x58ae0fu); f_005857a0();
    /* 0058ae0f: jmp 0x58aee8 */ goto L_0058aee8;
L_0058ae14:; BB(0x0058ae14);
    /* 0058ae14: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae1a: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058ae20: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae26: mov edx, dword ptr [ecx + eax*4 + 0x3bf4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3bf4u));
    /* 0058ae2d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058ae30: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae36: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ae3c: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae42: mov dword ptr [eax + ecx*4 + 0x3bf4], edx */ W32((u32)(r_eax+r_ecx*4+0x3bf4u), r_edx);
    /* 0058ae49: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae4f: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058ae55: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae5b: mov ecx, dword ptr [eax + edx*4 + 0x3bf4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3bf4u));
    /* 0058ae62: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0058ae65: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae6b: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058ae71: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae77: mov dword ptr [edx + eax*4 + 0x3be4], ecx */ W32((u32)(r_edx+r_eax*4+0x3be4u), r_ecx);
    /* 0058ae7e: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae84: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058ae8a: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ae90: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058ae96: lea eax, [edx + ecx + 0x328] */ r_eax = (u32)(r_edx+r_ecx+0x328u);
    /* 0058ae9d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058aea3: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058aea9: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058aeaf: mov edx, dword ptr [ecx + edx*4 + 0x3be4] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x3be4u));
    /* 0058aeb6: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058aeb9: mov byte ptr [eax + edx], 0xff */ W8((u32)(r_eax+r_edx), 0xffu);
    /* 0058aebd: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058aec3: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058aec9: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058aecf: mov eax, dword ptr [edx + ecx*4 + 0x3be4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3be4u));
    /* 0058aed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058aed7: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058aedd: mov ecx, dword ptr [ecx + 0x314] */ r_ecx = R32((u32)(r_ecx+0x314u));
    /* 0058aee3: call 0x58dfb0 */ r_esp -= 4; W32(r_esp, 0x58aee8u); f_0058dfb0();
L_0058aee8:; BB(0x0058aee8);
    /* 0058aee8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058aeeb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058aeed: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x58aef2u); f_00686d72();
    /* 0058aef2: mov esp, ebp */ r_esp = r_ebp;
    /* 0058aef4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058aef5: ret  */ FN_RET(0x0058acf0); r_esp += 4; return;
}

void f_0058af00(void) /* sub_58AF00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058af00);
    /* 0058af00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058af01: mov ebp, esp */ r_ebp = r_esp;
    /* 0058af03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058af06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058af09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058af0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058af0e: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58af13u); f_005fb5e0();
    /* 0058af13: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058af16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058af18: push 0x30dfbd */ { u32 v = 0x30dfbdu; r_esp -= 4; W32(r_esp, v); }
    /* 0058af1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058af20: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058af22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058af25: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0058af2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58af2du); call_ind(t); }
    /* 0058af2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058af30: call 0x588a80 */ r_esp -= 4; W32(r_esp, 0x58af35u); f_00588a80();
    /* 0058af35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058af37: jne 0x58af4b */ if (!fZ) goto L_0058af4b;
L_0058af39:; BB(0x0058af39);
    /* 0058af39: push 0x30dfc0 */ { u32 v = 0x30dfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058af3e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0058af44: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x58af49u); f_005f2ba0();
    /* 0058af49: jmp 0x58af5d */ goto L_0058af5d;
L_0058af4b:; BB(0x0058af4b);
    /* 0058af4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058af4d: push 0x30dfc0 */ { u32 v = 0x30dfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058af52: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0058af58: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x58af5du); f_005f2b20();
L_0058af5d:; BB(0x0058af5d);
    /* 0058af5d: mov esp, ebp */ r_esp = r_ebp;
    /* 0058af5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058af60: ret  */ FN_RET(0x0058af00); r_esp += 4; return;
}

