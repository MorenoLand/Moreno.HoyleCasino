#include "protos.h"

void f_005f6050(void) /* sub_5F6050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6050);
    /* 005f6050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6051: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6053: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6056: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f6059: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f605c: cmp dword ptr [eax + 0x18c], 0 */ {  u32 a = R32((u32)(r_eax+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6063: je 0x5f6097 */ if (fZ) goto L_005f6097;
L_005f6065:; BB(0x005f6065);
    /* 005f6065: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6068: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005f606e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f6071: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6074: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f6077: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f607b: je 0x5f6090 */ if (fZ) goto L_005f6090;
L_005f607d:; BB(0x005f607d);
    /* 005f607d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f607f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6082: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f6084: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6087: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f6089: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f608bu); call_ind(t); }
    /* 005f608b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f608e: jmp 0x5f6097 */ goto L_005f6097;
L_005f6090:; BB(0x005f6090);
    /* 005f6090: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005f6097:; BB(0x005f6097);
    /* 005f6097: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f609a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f609d: mov dword ptr [ecx + 0x18c], edx */ W32((u32)(r_ecx+0x18cu), r_edx);
    /* 005f60a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f60a6: cmp dword ptr [eax + 0x18c], 0 */ {  u32 a = R32((u32)(r_eax+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f60ad: je 0x5f60cc */ if (fZ) goto L_005f60cc;
L_005f60af:; BB(0x005f60af);
    /* 005f60af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f60b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f60b3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f60b6: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 005f60bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f60bf: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 005f60c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f60c7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f60ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f60ccu); call_ind(t); }
L_005f60cc:; BB(0x005f60cc);
    /* 005f60cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005f60ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f60cf: ret 4 */ FN_RET(0x005f6050); r_esp += 8; return;
}

void f_005f61d0(void) /* sub_5F61D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f61d0);
    /* 005f61d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f61d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f61d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f61d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f61d7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005f61da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f61db: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f61de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f61df: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f61e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f61e3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f61e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f61e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f61ea: call 0x5f50c0 */ r_esp -= 4; W32(r_esp, 0x5f61efu); f_005f50c0();
    /* 005f61ef: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f61f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f61f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f61f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f61f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f61fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f61fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f61ff: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005f6202: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6204u); call_ind(t); }
    /* 005f6204: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6206: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6207: ret 0x18 */ FN_RET(0x005f61d0); r_esp += 28; return;
}

void f_005f62f0(void) /* sub_5F62F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f62f0);
    /* 005f62f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f62f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f62f3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f62f6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005f62f9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f62fc: movzx ecx, byte ptr [eax + 0x50] */ r_ecx = (u32)R8((u32)(r_eax+0x50u));
    /* 005f6300: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f6304: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6306: jne 0x5f630d */ if (!fZ) goto L_005f630d;
L_005f6308:; BB(0x005f6308);
    /* 005f6308: jmp 0x5f63dc */ goto L_005f63dc;
L_005f630d:; BB(0x005f630d);
    /* 005f630d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f6310: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f6313: mov byte ptr [eax + 0x50], cl */ W8((u32)(r_eax+0x50u), (u8)r_ecx);
    /* 005f6316: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f6319: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f631d: je 0x5f63dc */ if (fZ) goto L_005f63dc;
L_005f6323:; BB(0x005f6323);
    /* 005f6323: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f6326: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f632bu); f_005f54a0();
    /* 005f632b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f632e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6330: je 0x5f63dc */ if (fZ) goto L_005f63dc;
L_005f6336:; BB(0x005f6336);
    /* 005f6336: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f6339: mov dl, byte ptr [ecx + 0x58] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x58u))) & 0xffu);
    /* 005f633c: mov byte ptr [ebp - 0x11], dl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_edx);
    /* 005f633f: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 005f6343: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6345: je 0x5f6391 */ if (fZ) goto L_005f6391;
L_005f6347:; BB(0x005f6347);
    /* 005f6347: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f634a: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f634d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f6350: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005f6353: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f6356: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f6359: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f635c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f635f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f6362: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f6365: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f6368: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f636b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f636e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f6371: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f6374: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f6377: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f637a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f637d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6380: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f6383: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6386: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f6389: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f638c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f638f: jmp 0x5f63cd */ goto L_005f63cd;
L_005f6391:; BB(0x005f6391);
    /* 005f6391: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f6394: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f6397: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005f639a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f639d: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f63a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005f63a3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f63a6: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f63a9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005f63ac: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f63af: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f63b2: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005f63b5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f63b8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f63bb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f63be: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f63c1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005f63c4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f63c7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f63ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f63cd:; BB(0x005f63cd);
    /* 005f63cd: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005f63d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f63d1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f63d4: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f63d7: call 0x5f9500 */ r_esp -= 4; W32(r_esp, 0x5f63dcu); f_005f9500();
L_005f63dc:; BB(0x005f63dc);
    /* 005f63dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005f63de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f63df: ret 4 */ FN_RET(0x005f62f0); r_esp += 8; return;
}

void f_005f63f0(void) /* sub_5F63F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f63f0);
    /* 005f63f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f63f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f63f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f63f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f63f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f63fa: mov al, byte ptr [eax + 0x50] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x50u))) & 0xffu);
    /* 005f63fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005f63ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6400: ret  */ FN_RET(0x005f63f0); r_esp += 4; return;
}

void f_005f6410(void) /* sub_5F6410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6410);
    /* 005f6410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6411: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6417: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f641a: mov byte ptr [eax + 0x49], 0 */ W8((u32)(r_eax+0x49u), 0x0u);
    /* 005f641e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6421: ret  */ FN_RET(0x005f6410); r_esp += 4; return;
}

void f_005f6430(void) /* sub_5F6430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6430);
    /* 005f6430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6431: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6437: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f643a: movzx ecx, byte ptr [eax + 0x49] */ r_ecx = (u32)R8((u32)(r_eax+0x49u));
    /* 005f643e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6440: je 0x5f645d */ if (fZ) goto L_005f645d;
L_005f6442:; BB(0x005f6442);
    /* 005f6442: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6444: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 005f6447: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6448: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f644b: add eax, 0x4d */ {  u32 a = r_eax; u32 b = 0x4du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f644e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f644f: call 0x687306 */ r_esp -= 4; W32(r_esp, 0x5f6454u); f_00687306();
    /* 005f6454: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f6457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6459: jne 0x5f645d */ if (!fZ) goto L_005f645d;
L_005f645b:; BB(0x005f645b);
    /* 005f645b: jmp 0x5f647f */ goto L_005f647f;
L_005f645d:; BB(0x005f645d);
    /* 005f645d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6460: mov byte ptr [ecx + 0x49], 1 */ W8((u32)(r_ecx+0x49u), 0x1u);
    /* 005f6464: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6467: add edx, 0x4d */ {  u32 a = r_edx; u32 b = 0x4du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f646a: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005f646e: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005f6471: mov cl, byte ptr [ebp + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005f6474: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005f6477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f647a: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f647fu); f_005f6b60();
L_005f647f:; BB(0x005f647f);
    /* 005f647f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6481: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6482: ret 4 */ FN_RET(0x005f6430); r_esp += 8; return;
}

void f_005f6490(void) /* sub_5F6490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6490);
    /* 005f6490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6491: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6493: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6496: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f6499: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f649c: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 005f649f: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005f64a2: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 005f64a5: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005f64a8: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 005f64ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f64ac: mov eax, esp */ r_eax = r_esp;
    /* 005f64ae: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005f64b2: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005f64b5: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005f64b8: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005f64bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f64be: call 0x5f6430 */ r_esp -= 4; W32(r_esp, 0x5f64c3u); f_005f6430();
    /* 005f64c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f64c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f64c6: ret 0xc */ FN_RET(0x005f6490); r_esp += 16; return;
}

void f_005f6510(void) /* sub_5F6510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6510);
    /* 005f6510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6511: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6517: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6519: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 005f651c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f651d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6520: add ecx, 0x4a */ {  u32 a = r_ecx; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6524: call 0x687306 */ r_esp -= 4; W32(r_esp, 0x5f6529u); f_00687306();
    /* 005f6529: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f652c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f652e: jne 0x5f6532 */ if (!fZ) goto L_005f6532;
L_005f6530:; BB(0x005f6530);
    /* 005f6530: jmp 0x5f6575 */ goto L_005f6575;
L_005f6532:; BB(0x005f6532);
    /* 005f6532: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f6536: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6538: jne 0x5f6553 */ if (!fZ) goto L_005f6553;
L_005f653a:; BB(0x005f653a);
    /* 005f653a: movzx eax, byte ptr [ebp + 9] */ r_eax = (u32)R8((u32)(r_ebp+0x9u));
    /* 005f653e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6540: jne 0x5f6553 */ if (!fZ) goto L_005f6553;
L_005f6542:; BB(0x005f6542);
    /* 005f6542: movzx ecx, byte ptr [ebp + 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xau));
    /* 005f6546: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6548: jne 0x5f6553 */ if (!fZ) goto L_005f6553;
L_005f654a:; BB(0x005f654a);
    /* 005f654a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f654d: mov byte ptr [edx + 0x48], 0 */ W8((u32)(r_edx+0x48u), 0x0u);
    /* 005f6551: jmp 0x5f655a */ goto L_005f655a;
L_005f6553:; BB(0x005f6553);
    /* 005f6553: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6556: mov byte ptr [eax + 0x48], 1 */ W8((u32)(r_eax+0x48u), 0x1u);
L_005f655a:; BB(0x005f655a);
    /* 005f655a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f655d: add ecx, 0x4a */ {  u32 a = r_ecx; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6560: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005f6564: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005f6567: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005f656a: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005f656d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6570: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f6575u); f_005f6b60();
L_005f6575:; BB(0x005f6575);
    /* 005f6575: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6577: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6578: ret 4 */ FN_RET(0x005f6510); r_esp += 8; return;
}

void f_005f6580(void) /* sub_5F6580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6580);
    /* 005f6580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6581: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6583: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6586: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f6589: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f658c: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 005f658f: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005f6592: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 005f6595: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005f6598: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 005f659b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f659c: mov eax, esp */ r_eax = r_esp;
    /* 005f659e: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005f65a2: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005f65a5: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005f65a8: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005f65ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f65ae: call 0x5f6510 */ r_esp -= 4; W32(r_esp, 0x5f65b3u); f_005f6510();
    /* 005f65b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f65b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f65b6: ret 0xc */ FN_RET(0x005f6580); r_esp += 16; return;
}

void f_005f6640(void) /* sub_5F6640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6640);
    /* 005f6640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6641: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6643: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6646: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f6649: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f664c: mov cl, byte ptr [eax + 0x4d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4du))) & 0xffu);
    /* 005f664f: mov byte ptr [ebp - 0x14], cl */ W8((u32)(r_ebp+0xffffffecu), (u8)r_ecx);
    /* 005f6652: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6655: mov al, byte ptr [edx + 0x4e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4eu))) & 0xffu);
    /* 005f6658: mov byte ptr [ebp - 0x13], al */ W8((u32)(r_ebp+0xffffffedu), (u8)r_eax);
    /* 005f665b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f665e: mov dl, byte ptr [ecx + 0x4f] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4fu))) & 0xffu);
    /* 005f6661: mov byte ptr [ebp - 0x12], dl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_edx);
    /* 005f6664: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6667: call 0x5f63f0 */ r_esp -= 4; W32(r_esp, 0x5f666cu); f_005f63f0();
    /* 005f666c: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 005f666f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6672: mov cl, byte ptr [eax + 0x59] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x59u))) & 0xffu);
    /* 005f6675: mov byte ptr [ebp - 0x2d], cl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_ecx);
    /* 005f6678: movzx edx, byte ptr [ebp - 0x2d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 005f667c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f667e: je 0x5f66a6 */ if (fZ) goto L_005f66a6;
L_005f6680:; BB(0x005f6680);
    /* 005f6680: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6683: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f6686: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f6689: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f668c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f668f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f6692: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6695: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f6698: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005f669b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f669e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f66a1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f66a4: jmp 0x5f66ca */ goto L_005f66ca;
L_005f66a6:; BB(0x005f66a6);
    /* 005f66a6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f66a9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005f66ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f66af: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f66b2: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f66b5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f66b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f66bb: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f66be: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f66c1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f66c4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f66c7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005f66ca:; BB(0x005f66ca);
    /* 005f66ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f66cd: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f66d0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f66d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f66d6: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f66d9: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005f66dc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f66e0: jge 0x5f66f3 */ if ((fS==fO)) goto L_005f66f3;
L_005f66e2:; BB(0x005f66e2);
    /* 005f66e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f66e5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f66e7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f66ea: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 005f66f1: jmp 0x5f66fa */ goto L_005f66fa;
L_005f66f3:; BB(0x005f66f3);
    /* 005f66f3: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005f66fa:; BB(0x005f66fa);
    /* 005f66fa: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f66fe: jge 0x5f6711 */ if ((fS==fO)) goto L_005f6711;
L_005f6700:; BB(0x005f6700);
    /* 005f6700: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f6703: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6705: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f6708: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 005f670f: jmp 0x5f6718 */ goto L_005f6718;
L_005f6711:; BB(0x005f6711);
    /* 005f6711: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_005f6718:; BB(0x005f6718);
    /* 005f6718: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f671b: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005f671d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f6720: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f6723: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005f6725: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f6728: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f672b: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f6730u); f_005f6620();
    /* 005f6730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6731: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6734: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6735: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6738: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6739: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f673c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f673d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6740: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f6743: call 0x5f9330 */ r_esp -= 4; W32(r_esp, 0x5f6748u); f_005f9330();
    /* 005f6748: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f674b: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f674e: jle 0x5f67b3 */ if ((fZ||fS!=fO)) goto L_005f67b3;
L_005f6750:; BB(0x005f6750);
    /* 005f6750: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f6753: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f6755: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6758: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f675a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_005f675d:; BB(0x005f675d);
    /* 005f675d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6760: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6763: je 0x5f67b1 */ if (fZ) goto L_005f67b1;
L_005f6765:; BB(0x005f6765);
    /* 005f6765: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f6769: jl 0x5f677d */ if ((fS!=fO)) goto L_005f677d;
L_005f676b:; BB(0x005f676b);
    /* 005f676b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f676e: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f6771: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f6774: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f6777: sub ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f677a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_005f677d:; BB(0x005f677d);
    /* 005f677d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6780: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f6783: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f6786: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f6789: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f678c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f678f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6792: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f6797u); f_005f6620();
    /* 005f6797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6798: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f679b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f679c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f679f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f67a0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f67a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f67a4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f67a7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f67aa: call 0x5f9330 */ r_esp -= 4; W32(r_esp, 0x5f67afu); f_005f9330();
    /* 005f67af: jmp 0x5f675d */ goto L_005f675d;
L_005f67b1:; BB(0x005f67b1);
    /* 005f67b1: jmp 0x5f6814 */ goto L_005f6814;
L_005f67b3:; BB(0x005f67b3);
    /* 005f67b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f67b6: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005f67b8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f67bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f67bd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005f67c0:; BB(0x005f67c0);
    /* 005f67c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f67c3: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f67c6: je 0x5f6814 */ if (fZ) goto L_005f6814;
L_005f67c8:; BB(0x005f67c8);
    /* 005f67c8: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f67cc: jl 0x5f67e0 */ if ((fS!=fO)) goto L_005f67e0;
L_005f67ce:; BB(0x005f67ce);
    /* 005f67ce: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f67d1: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f67d4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f67d7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f67da: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f67dd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005f67e0:; BB(0x005f67e0);
    /* 005f67e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f67e3: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f67e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f67e9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f67ec: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f67ef: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f67f2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f67f5: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f67fau); f_005f6620();
    /* 005f67fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f67fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f67fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f67ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6802: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6803: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6806: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6807: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f680a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f680d: call 0x5f9330 */ r_esp -= 4; W32(r_esp, 0x5f6812u); f_005f9330();
    /* 005f6812: jmp 0x5f67c0 */ goto L_005f67c0;
L_005f6814:; BB(0x005f6814);
    /* 005f6814: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6816: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6817: ret  */ FN_RET(0x005f6640); r_esp += 4; return;
}

void f_005f6b60(void) /* sub_5F6B60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6b60);
    /* 005f6b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6b63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6b66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f6b69: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6b6c: mov cl, byte ptr [eax + 0x58] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x58u))) & 0xffu);
    /* 005f6b6f: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005f6b72: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005f6b76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6b78: je 0x5f6bb6 */ if (fZ) goto L_005f6bb6;
L_005f6b7a:; BB(0x005f6b7a);
    /* 005f6b7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6b7d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f6b80: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6b83: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6b86: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 005f6b89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6b8c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f6b8f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6b92: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6b95: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005f6b98: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6b9b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f6b9e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6ba1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6ba4: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 005f6ba7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6baa: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f6bad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6bb0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6bb3: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
L_005f6bb6:; BB(0x005f6bb6);
    /* 005f6bb6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6bb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f6bbb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6bbe: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005f6bc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6bc6u); call_ind(t); }
    /* 005f6bc6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6bc9: mov dl, byte ptr [ecx + 0x58] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x58u))) & 0xffu);
    /* 005f6bcc: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 005f6bcf: movzx eax, byte ptr [ebp - 2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 005f6bd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6bd5: je 0x5f6c13 */ if (fZ) goto L_005f6c13;
L_005f6bd7:; BB(0x005f6bd7);
    /* 005f6bd7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6bda: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f6bdd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f6be0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6be3: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005f6be6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6be9: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005f6bec: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f6bef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6bf2: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005f6bf5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6bf8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f6bfb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f6bfe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6c01: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005f6c04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6c07: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f6c0a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f6c0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6c10: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
L_005f6c13:; BB(0x005f6c13);
    /* 005f6c13: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6c15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6c16: ret  */ FN_RET(0x005f6b60); r_esp += 4; return;
}

