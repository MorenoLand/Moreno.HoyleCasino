#include "protos.h"

void f_006161a0(void) /* sub_6161A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006161a0);
    /* 006161a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006161a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006161a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006161a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006161a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006161ac: mov dword ptr [eax + 0x164], 0 */ W32((u32)(r_eax+0x164u), 0x0u);
    /* 006161b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006161b9: mov word ptr [ecx + 0x160], 0 */ W16((u32)(r_ecx+0x160u), 0x0u);
    /* 006161c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006161c5: cmp dword ptr [edx + 0x158], 0 */ {  u32 a = R32((u32)(r_edx+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006161cc: je 0x6161f6 */ if (fZ) goto L_006161f6;
L_006161ce:; BB(0x006161ce);
    /* 006161ce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006161d0: push 0x6d8948 */ { u32 v = 0x6d8948u; r_esp -= 4; W32(r_esp, v); }
    /* 006161d5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006161d8: mov ecx, dword ptr [eax + 0x158] */ r_ecx = R32((u32)(r_eax+0x158u));
    /* 006161de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006161df: call dword ptr [0x6b22f4] */ { u32 t = R32((u32)(0x6b22f4u)); r_esp -= 4; W32(r_esp, 0x6161e5u); call_ind(t); }
    /* 006161e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006161e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006161ea: je 0x6161f6 */ if (fZ) goto L_006161f6;
L_006161ec:; BB(0x006161ec);
    /* 006161ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006161ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006161f1: call 0x6171a0 */ r_esp -= 4; W32(r_esp, 0x6161f6u); f_006171a0();
L_006161f6:; BB(0x006161f6);
    /* 006161f6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006161f9: cmp dword ptr [edx + 0x158], 0 */ {  u32 a = R32((u32)(r_edx+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616200: je 0x6162db */ if (fZ) goto L_006162db;
L_00616206:; BB(0x00616206);
    /* 00616206: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616209: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061620c: mov edx, dword ptr [ecx + 0x158] */ r_edx = R32((u32)(r_ecx+0x158u));
    /* 00616212: mov dword ptr [eax + 0x168], edx */ W32((u32)(r_eax+0x168u), r_edx);
    /* 00616218: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0061621b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061621c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061621f: add ecx, 0x164 */ {  u32 a = r_ecx; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616226: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616229: add edx, 0x160 */ {  u32 a = r_edx; u32 b = 0x160u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061622f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616230: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616233: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 00616239: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061623a: call 0x61c810 */ r_esp -= 4; W32(r_esp, 0x61623fu); f_0061c810();
    /* 0061623f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616242: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00616249: jmp 0x616254 */ goto L_00616254;
L_0061624b:; BB(0x0061624b);
    /* 0061624b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061624e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616251: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00616254:; BB(0x00616254);
    /* 00616254: cmp dword ptr [ebp - 8], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061625b: jge 0x6162db */ if ((fS==fO)) goto L_006162db;
L_0061625d:; BB(0x0061625d);
    /* 0061625d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616260: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616263: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616266: mov dl, byte ptr [ecx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 00616269: mov byte ptr [ebp - 0xc], dl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_edx);
    /* 0061626c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061626f: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616272: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616275: mov dl, byte ptr [ecx + eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x1u))) & 0xffu);
    /* 00616279: mov byte ptr [ebp - 0xb], dl */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_edx);
    /* 0061627c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061627f: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616282: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616285: mov dl, byte ptr [ecx + eax + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x2u))) & 0xffu);
    /* 00616289: mov byte ptr [ebp - 0xa], dl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_edx);
    /* 0061628c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061628d: mov eax, esp */ r_eax = r_esp;
    /* 0061628f: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00616293: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00616296: mov dl, byte ptr [ebp - 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 00616299: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0061629c: call 0x617af0 */ r_esp -= 4; W32(r_esp, 0x6162a1u); f_00617af0();
    /* 006162a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006162a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006162a7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006162aa: mov dword ptr [edx + ecx*4 + 0x56c], eax */ W32((u32)(r_edx+r_ecx*4+0x56cu), r_eax);
    /* 006162b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006162b2: mov eax, esp */ r_eax = r_esp;
    /* 006162b4: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 006162b8: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006162bb: mov dl, byte ptr [ebp - 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 006162be: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 006162c1: call 0x617af0 */ r_esp -= 4; W32(r_esp, 0x6162c6u); f_00617af0();
    /* 006162c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006162c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006162cc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006162cf: mov dword ptr [edx + ecx*4 + 0x16c], eax */ W32((u32)(r_edx+r_ecx*4+0x16cu), r_eax);
    /* 006162d6: jmp 0x61624b */ goto L_0061624b;
L_006162db:; BB(0x006162db);
    /* 006162db: mov esp, ebp */ r_esp = r_ebp;
    /* 006162dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006162de: ret  */ FN_RET(0x006161a0); r_esp += 4; return;
}

void f_006162e0(void) /* sub_6162E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006162e0);
    /* 006162e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006162e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006162e3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006162e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006162e9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006162ec: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006162f3: je 0x6163ae */ if (fZ) goto L_006163ae;
L_006162f9:; BB(0x006162f9);
    /* 006162f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616300: jmp 0x61630b */ goto L_0061630b;
L_00616302:; BB(0x00616302);
    /* 00616302: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616305: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616308: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0061630b:; BB(0x0061630b);
    /* 0061630b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061630e: movsx eax, word ptr [edx + 0x160] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x160u));
    /* 00616315: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616318: jge 0x616396 */ if ((fS==fO)) goto L_00616396;
L_0061631a:; BB(0x0061631a);
    /* 0061631a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061631d: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 00616323: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616326: movsx ecx, word ptr [edx + eax*8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*8));
    /* 0061632a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061632d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00616334: jmp 0x61633f */ goto L_0061633f;
L_00616336:; BB(0x00616336);
    /* 00616336: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616339: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061633c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0061633f:; BB(0x0061633f);
    /* 0061633f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616342: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616345: jge 0x616372 */ if ((fS==fO)) goto L_00616372;
L_00616347:; BB(0x00616347);
    /* 00616347: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061634a: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 00616350: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616353: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00616356: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616359: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0061635d: mov eax, dword ptr [edx + eax + 0xc] */ r_eax = R32((u32)(r_edx+r_eax+0xcu));
    /* 00616361: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00616364: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616368: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61636du); f_00686cae();
    /* 0061636d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616370: jmp 0x616336 */ goto L_00616336;
L_00616372:; BB(0x00616372);
    /* 00616372: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616375: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 0061637b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061637e: mov edx, dword ptr [eax + ecx*8 + 4] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 00616382: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00616385: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616389: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61638eu); f_00686cae();
    /* 0061638e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616391: jmp 0x616302 */ goto L_00616302;
L_00616396:; BB(0x00616396);
    /* 00616396: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616399: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 0061639f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006163a2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006163a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006163a6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6163abu); f_00686cae();
    /* 006163ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006163ae:; BB(0x006163ae);
    /* 006163ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006163b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006163b1: ret  */ FN_RET(0x006162e0); r_esp += 4; return;
}

void f_006163c0(void) /* sub_6163C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006163c0);
    /* 006163c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006163c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006163c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006163c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006163c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006163ca: movsx eax, word ptr [eax + 0x160] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x160u));
    /* 006163d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006163d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006163d4: ret  */ FN_RET(0x006163c0); r_esp += 4; return;
}

void f_006163e0(void) /* sub_6163E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006163e0);
    /* 006163e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006163e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006163e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006163e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006163e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006163ea: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006163f1: je 0x616407 */ if (fZ) goto L_00616407;
L_006163f3:; BB(0x006163f3);
    /* 006163f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006163f6: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 006163fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006163ff: movsx eax, word ptr [edx + eax*8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*8));
    /* 00616403: jmp 0x616409 */ goto L_00616409;
L_00616407:; BB(0x00616407);
    /* 00616407: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00616409:; BB(0x00616409);
    /* 00616409: mov esp, ebp */ r_esp = r_ebp;
    /* 0061640b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061640c: ret 4 */ FN_RET(0x006163e0); r_esp += 8; return;
}

void f_00616410(void) /* sub_616410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616410);
    /* 00616410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616411: mov ebp, esp */ r_ebp = r_esp;
    /* 00616413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00616417: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061641a: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616421: je 0x616441 */ if (fZ) goto L_00616441;
L_00616423:; BB(0x00616423);
    /* 00616423: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616426: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 0061642c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061642f: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00616432: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616435: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 00616439: movsx eax, word ptr [edx + eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax));
    /* 0061643d: jmp 0x616443 */ goto L_00616443;
L_00616441:; BB(0x00616441);
    /* 00616441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00616443:; BB(0x00616443);
    /* 00616443: mov esp, ebp */ r_esp = r_ebp;
    /* 00616445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616446: ret 8 */ FN_RET(0x00616410); r_esp += 12; return;
}

void f_00616450(void) /* sub_616450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616450);
    /* 00616450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616451: mov ebp, esp */ r_ebp = r_esp;
    /* 00616453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00616457: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061645a: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616461: je 0x616482 */ if (fZ) goto L_00616482;
L_00616463:; BB(0x00616463);
    /* 00616463: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616466: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 0061646c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061646f: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00616472: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616475: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 00616479: movsx eax, word ptr [edx + eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax+0x2u));
    /* 0061647e: jmp 0x616484 */ goto L_00616484;
L_00616482:; BB(0x00616482);
    /* 00616482: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00616484:; BB(0x00616484);
    /* 00616484: mov esp, ebp */ r_esp = r_ebp;
    /* 00616486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616487: ret 8 */ FN_RET(0x00616450); r_esp += 12; return;
}

void f_00616490(void) /* sub_616490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616490);
    /* 00616490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616491: mov ebp, esp */ r_ebp = r_esp;
    /* 00616493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00616497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061649a: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006164a1: je 0x6164c2 */ if (fZ) goto L_006164c2;
L_006164a3:; BB(0x006164a3);
    /* 006164a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006164a6: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 006164ac: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006164af: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006164b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006164b5: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 006164b9: movsx eax, word ptr [edx + eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax+0x8u));
    /* 006164be: jmp 0x6164c4 */ goto L_006164c4;
L_006164c2:; BB(0x006164c2);
    /* 006164c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006164c4:; BB(0x006164c4);
    /* 006164c4: mov esp, ebp */ r_esp = r_ebp;
    /* 006164c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006164c7: ret 8 */ FN_RET(0x00616490); r_esp += 12; return;
}

void f_006164d0(void) /* sub_6164D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006164d0);
    /* 006164d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006164d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006164d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006164d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006164d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006164da: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006164e1: je 0x616502 */ if (fZ) goto L_00616502;
L_006164e3:; BB(0x006164e3);
    /* 006164e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006164e6: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 006164ec: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006164ef: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006164f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006164f5: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 006164f9: movsx eax, word ptr [edx + eax + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax+0xau));
    /* 006164fe: jmp 0x616504 */ goto L_00616504;
L_00616502:; BB(0x00616502);
    /* 00616502: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00616504:; BB(0x00616504);
    /* 00616504: mov esp, ebp */ r_esp = r_ebp;
    /* 00616506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616507: ret 8 */ FN_RET(0x006164d0); r_esp += 12; return;
}

void f_00616ac0(void) /* sub_616AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616ac0);
    /* 00616ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00616ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00616ac7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616aca: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ad1: je 0x616afd */ if (fZ) goto L_00616afd;
L_00616ad3:; BB(0x00616ad3);
    /* 00616ad3: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 00616ad6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ad7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00616ada: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616adb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00616ade: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616adf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616ae2: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 00616ae8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ae9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00616aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616aed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616af0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616af1: call 0x61d0d0 */ r_esp -= 4; W32(r_esp, 0x616af6u); f_0061d0d0();
    /* 00616af6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616af9: jmp 0x616aff */ goto L_00616aff;
L_00616afd:; BB(0x00616afd);
    /* 00616afd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00616aff:; BB(0x00616aff);
    /* 00616aff: mov esp, ebp */ r_esp = r_ebp;
    /* 00616b01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616b02: ret 0x14 */ FN_RET(0x00616ac0); r_esp += 24; return;
}

void f_00616b10(void) /* sub_616B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616b10);
    /* 00616b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00616b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00616b17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00616b1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616b1d: mov eax, dword ptr [ecx + eax*4 + 0x16c] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x16cu));
    /* 00616b24: mov esp, ebp */ r_esp = r_ebp;
    /* 00616b26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616b27: ret 4 */ FN_RET(0x00616b10); r_esp += 8; return;
}

void f_00616b30(void) /* sub_616B30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616b30);
    /* 00616b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00616b33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00616b36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00616b39: lea eax, [ebp - 2] */ r_eax = (u32)(r_ebp+0xfffffffeu);
    /* 00616b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616b3d: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 00616b40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616b41: lea edx, [ebp - 3] */ r_edx = (u32)(r_ebp+0xfffffffdu);
    /* 00616b44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616b45: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00616b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616b49: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00616b4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616b4d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616b50: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 00616b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616b57: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00616b5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616b5b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616b5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616b5f: call 0x61d290 */ r_esp -= 4; W32(r_esp, 0x616b64u); f_0061d290();
    /* 00616b64: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616b67: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 00616b6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616b6e: mov edx, dword ptr [ecx + eax*4 + 0x16c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x16cu));
    /* 00616b75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616b76: call 0x617a70 */ r_esp -= 4; W32(r_esp, 0x616b7bu); f_00617a70();
    /* 00616b7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616b7e: mov dword ptr [ebp - 7], eax */ W32((u32)(r_ebp+0xfffffff9u), r_eax);
    /* 00616b81: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00616b84: mov ecx, dword ptr [ebp - 7] */ r_ecx = R32((u32)(r_ebp+0xfffffff9u));
    /* 00616b87: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00616b89: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00616b8c: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00616b8f: mov byte ptr [edx + 3], al */ W8((u32)(r_edx+0x3u), (u8)r_eax);
    /* 00616b92: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00616b95: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 00616b98: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00616b9a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00616b9d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00616ba0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00616ba3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616ba6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616ba9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00616bac: cmp dword ptr [ebp - 0x10], 0x1f */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00616bb0: ja 0x616bde */ if ((!fC&&!fZ)) goto L_00616bde;
L_00616bb2:; BB(0x00616bb2);
    /* 00616bb2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616bb5: movzx ecx, byte ptr [eax + 0x616bf4] */ r_ecx = (u32)R8((u32)(r_eax+0x616bf4u));
    /* 00616bbc: jmp dword ptr [ecx*4 + 0x616be4] */ { u32 t = R32((u32)(r_ecx*4+0x616be4u)); switch (t) { case 0x616bc3u: goto L_00616bc3; case 0x616bccu: goto L_00616bcc; case 0x616bd7u: goto L_00616bd7; case 0x616bdeu: goto L_00616bde; default: UNSUP(0x00616bbc, "jump table entry is not a known target"); } }
L_00616bc3:; BB(0x00616bc3);
    /* 00616bc3: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00616bc6: mov byte ptr [edx + 3], 0 */ W8((u32)(r_edx+0x3u), 0x0u);
    /* 00616bca: jmp 0x616bde */ goto L_00616bde;
L_00616bcc:; BB(0x00616bcc);
    /* 00616bcc: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00616bcf: mov byte ptr [eax + 3], 0xff */ W8((u32)(r_eax+0x3u), 0xffu);
    /* 00616bd3: jmp 0x616bde */ goto L_00616bde;
L_00616bd7:; BB(0x00616bd7);
    /* 00616bd7: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00616bda: mov byte ptr [ecx + 3], 0xff */ W8((u32)(r_ecx+0x3u), 0xffu);
L_00616bde:; BB(0x00616bde);
    /* 00616bde: mov esp, ebp */ r_esp = r_ebp;
    /* 00616be0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616be1: ret 0x18 */ FN_RET(0x00616b30); r_esp += 28; return;
}

void f_00616c20(void) /* sub_616C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616c20);
    /* 00616c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00616c23: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00616c26: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00616c29: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616c2c: movsx ecx, byte ptr [eax + 0x38] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x38u));
    /* 00616c30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c32: je 0x616e19 */ if (fZ) goto L_00616e19;
L_00616c38:; BB(0x00616c38);
    /* 00616c38: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616c3b: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616c3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616c3f: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x616c44u); f_005ea5b0();
    /* 00616c44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616c47: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00616c49: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616c4c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616c50: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x616c56u); call_ind(t); }
    /* 00616c56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616c59: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00616c5c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616c5f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616c62: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00616c65:; BB(0x00616c65);
    /* 00616c65: mov edx, 1 */ r_edx = 0x1u;
    /* 00616c6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c6c: je 0x616cde */ if (fZ) goto L_00616cde;
L_00616c6e:; BB(0x00616c6e);
    /* 00616c6e: push 0x6d8af0 */ { u32 v = 0x6d8af0u; r_esp -= 4; W32(r_esp, v); }
    /* 00616c73: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616c77: call dword ptr [0x6b22fc] */ { u32 t = R32((u32)(0x6b22fcu)); r_esp -= 4; W32(r_esp, 0x616c7du); call_ind(t); }
    /* 00616c7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616c80: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00616c83: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c87: jne 0x616c8b */ if (!fZ) goto L_00616c8b;
L_00616c89:; BB(0x00616c89);
    /* 00616c89: jmp 0x616cde */ goto L_00616cde;
L_00616c8b:; BB(0x00616c8b);
    /* 00616c8b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c8f: je 0x616c9b */ if (fZ) goto L_00616c9b;
L_00616c91:; BB(0x00616c91);
    /* 00616c91: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616c94: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00616c97: jae 0x616c9b */ if (!fC) goto L_00616c9b;
L_00616c99:; BB(0x00616c99);
    /* 00616c99: jmp 0x616cde */ goto L_00616cde;
L_00616c9b:; BB(0x00616c9b);
    /* 00616c9b: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00616c9d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616ca0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ca1: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x616ca7u); call_ind(t); }
    /* 00616ca7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616caa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00616cad: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cb1: je 0x616cd6 */ if (fZ) goto L_00616cd6;
L_00616cb3:; BB(0x00616cb3);
    /* 00616cb3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00616cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616cb7: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x616cbcu); f_00686ecc();
    /* 00616cbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616cbf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616cc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616cc3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00616cc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616cc7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616cca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ccb: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x616cd1u); call_ind(t); }
    /* 00616cd1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616cd4: jmp 0x616cdc */ goto L_00616cdc;
L_00616cd6:; BB(0x00616cd6);
    /* 00616cd6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616cd9: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
L_00616cdc:; BB(0x00616cdc);
    /* 00616cdc: jmp 0x616c65 */ goto L_00616c65;
L_00616cde:; BB(0x00616cde);
    /* 00616cde: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00616ce0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616ce3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616ce6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ce7: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x616cedu); call_ind(t); }
    /* 00616ced: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616cf0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00616cf3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cf7: je 0x616d0e */ if (fZ) goto L_00616d0e;
L_00616cf9:; BB(0x00616cf9);
    /* 00616cf9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cfd: je 0x616d0e */ if (fZ) goto L_00616d0e;
L_00616cff:; BB(0x00616cff);
    /* 00616cff: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616d02: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00616d05: jae 0x616d0e */ if (!fC) goto L_00616d0e;
L_00616d07:; BB(0x00616d07);
    /* 00616d07: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00616d0e:; BB(0x00616d0e);
    /* 00616d0e: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00616d12: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d16: je 0x616d31 */ if (fZ) goto L_00616d31;
L_00616d18:; BB(0x00616d18);
    /* 00616d18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616d1b: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00616d1d: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 00616d20: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616d23: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 00616d26: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616d29: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616d2c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00616d2f: jmp 0x616d38 */ goto L_00616d38;
L_00616d31:; BB(0x00616d31);
    /* 00616d31: mov dword ptr [ebp - 0x18], 0x6b27f8 */ W32((u32)(r_ebp+0xffffffe8u), 0x6b27f8u);
L_00616d38:; BB(0x00616d38);
    /* 00616d38: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616d3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616d3c: movsx edx, byte ptr [ebp - 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 00616d40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616d41: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00616d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616d45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00616d48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616d49: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616d4c: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616d4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616d50: push 0x6d8ae0 */ { u32 v = 0x6d8ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 00616d55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00616d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616d59: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x616d5fu); call_ind(t); }
    /* 00616d5f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616d62: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616d65: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00616d68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d6a: je 0x616d75 */ if (fZ) goto L_00616d75;
L_00616d6c:; BB(0x00616d6c);
    /* 00616d6c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616d6f: mov cl, byte ptr [ebp - 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 00616d72: mov byte ptr [eax - 1], cl */ W8((u32)(r_eax+0xffffffffu), (u8)r_ecx);
L_00616d75:; BB(0x00616d75);
    /* 00616d75: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00616d7c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d80: je 0x616d8d */ if (fZ) goto L_00616d8d;
L_00616d82:; BB(0x00616d82);
    /* 00616d82: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00616d85: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616d88: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00616d8b: jmp 0x616d96 */ goto L_00616d96;
L_00616d8d:; BB(0x00616d8d);
    /* 00616d8d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616d90: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616d93: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00616d96:; BB(0x00616d96);
    /* 00616d96: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00616d99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616d9a: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00616d9f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00616da2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616da3: call dword ptr [0x6b22f8] */ { u32 t = R32((u32)(0x6b22f8u)); r_esp -= 4; W32(r_esp, 0x616da9u); call_ind(t); }
    /* 00616da9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616dac: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00616db1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00616db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616db5: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x616dbau); f_005ea9c0();
    /* 00616dba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616dbd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00616dc0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dc4: jne 0x616df9 */ if (!fZ) goto L_00616df9;
L_00616dc6:; BB(0x00616dc6);
    /* 00616dc6: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dca: jne 0x616df9 */ if (!fZ) goto L_00616df9;
L_00616dcc:; BB(0x00616dcc);
    /* 00616dcc: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dd0: jne 0x616df9 */ if (!fZ) goto L_00616df9;
L_00616dd2:; BB(0x00616dd2);
    /* 00616dd2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616dd5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616dd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616dd9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616ddc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ddd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x616de2u); f_00686d8e();
    /* 00616de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616de5: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00616dea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00616ded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616dee: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x616df3u); f_005ea9c0();
    /* 00616df3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616df6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00616df9:; BB(0x00616df9);
    /* 00616df9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dfd: je 0x616e19 */ if (fZ) goto L_00616e19;
L_00616dff:; BB(0x00616dff);
    /* 00616dff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616e02: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e06: jne 0x616e11 */ if (!fZ) goto L_00616e11;
L_00616e08:; BB(0x00616e08);
    /* 00616e08: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616e0b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616e0e: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
L_00616e11:; BB(0x00616e11);
    /* 00616e11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616e14: jmp 0x616ebf */ goto L_00616ebf;
L_00616e19:; BB(0x00616e19);
    /* 00616e19: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616e1c: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e20: je 0x616ebd */ if (fZ) goto L_00616ebd;
L_00616e26:; BB(0x00616e26);
    /* 00616e26: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00616e29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616e2a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00616e2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616e2e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616e31: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00616e34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616e35: push 0x6d8acc */ { u32 v = 0x6d8accu; r_esp -= 4; W32(r_esp, v); }
    /* 00616e3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00616e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616e3e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x616e44u); call_ind(t); }
    /* 00616e44: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616e47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616e4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616e4b: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x616e50u); f_005ea5b0();
    /* 00616e50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616e53: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00616e58: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616e5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616e5c: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x616e61u); f_005ea9c0();
    /* 00616e61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616e64: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00616e67: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e6b: jne 0x616eb2 */ if (!fZ) goto L_00616eb2;
L_00616e6d:; BB(0x00616e6d);
    /* 00616e6d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e71: jne 0x616eb2 */ if (!fZ) goto L_00616eb2;
L_00616e73:; BB(0x00616e73);
    /* 00616e73: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e77: jne 0x616eb2 */ if (!fZ) goto L_00616eb2;
L_00616e79:; BB(0x00616e79);
    /* 00616e79: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616e7c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00616e7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616e80: push 0x6d8abc */ { u32 v = 0x6d8abcu; r_esp -= 4; W32(r_esp, v); }
    /* 00616e85: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616e88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616e89: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x616e8fu); call_ind(t); }
    /* 00616e8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616e92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00616e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616e96: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x616e9bu); f_005ea5b0();
    /* 00616e9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616e9e: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00616ea3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616ea6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ea7: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x616eacu); f_005ea9c0();
    /* 00616eac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616eaf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00616eb2:; BB(0x00616eb2);
    /* 00616eb2: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eb6: je 0x616ebd */ if (fZ) goto L_00616ebd;
L_00616eb8:; BB(0x00616eb8);
    /* 00616eb8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00616ebb: jmp 0x616ebf */ goto L_00616ebf;
L_00616ebd:; BB(0x00616ebd);
    /* 00616ebd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00616ebf:; BB(0x00616ebf);
    /* 00616ebf: mov esp, ebp */ r_esp = r_ebp;
    /* 00616ec1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616ec2: ret 0xc */ FN_RET(0x00616c20); r_esp += 16; return;
}

void f_00616ed0(void) /* sub_616ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616ed0);
    /* 00616ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00616ed3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00616ed6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00616edd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00616ee0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00616ee3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616ee6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00616ee9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616eec: add edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616eef: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00616ef2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616ef5: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00616ef8: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616efb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00616efe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616f01: movzx eax, word ptr [edx + 0xc] */ r_eax = (u32)R16((u32)(r_edx+0xcu));
    /* 00616f05: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616f08: movzx edx, word ptr [ecx + 0xe] */ r_edx = (u32)R16((u32)(r_ecx+0xeu));
    /* 00616f0c: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616f0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00616f11: mov edx, 4 */ r_edx = 0x4u;
    /* 00616f16: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00616f18: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00616f1b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00616f1d: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00616f1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616f20: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x616f25u); f_00686d82();
    /* 00616f25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616f28: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00616f2b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00616f2e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00616f31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616f34: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 00616f38: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616f3b: je 0x616f54 */ if (fZ) goto L_00616f54;
L_00616f3d:; BB(0x00616f3d);
    /* 00616f3d: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00616f40: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x616f46u); call_ind(t); }
    /* 00616f46: push 0x6ffe04 */ { u32 v = 0x6ffe04u; r_esp -= 4; W32(r_esp, v); }
    /* 00616f4b: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00616f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616f4f: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x616f54u); f_00686fc0();
L_00616f54:; BB(0x00616f54);
    /* 00616f54: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00616f5b: jmp 0x616f66 */ goto L_00616f66;
L_00616f5d:; BB(0x00616f5d);
    /* 00616f5d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616f60: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616f63: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00616f66:; BB(0x00616f66);
    /* 00616f66: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616f69: movzx eax, word ptr [edx + 0xe] */ r_eax = (u32)R16((u32)(r_edx+0xeu));
    /* 00616f6d: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616f70: jge 0x6170db */ if ((fS==fO)) goto L_006170db;
L_00616f76:; BB(0x00616f76);
    /* 00616f76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616f79: movzx edx, byte ptr [ecx + 0x11] */ r_edx = (u32)R8((u32)(r_ecx+0x11u));
    /* 00616f7d: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00616f80: je 0x616f8a */ if (fZ) goto L_00616f8a;
L_00616f82:; BB(0x00616f82);
    /* 00616f82: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616f85: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00616f88: jmp 0x616f9a */ goto L_00616f9a;
L_00616f8a:; BB(0x00616f8a);
    /* 00616f8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616f8d: movzx edx, word ptr [ecx + 0xe] */ r_edx = (u32)R16((u32)(r_ecx+0xeu));
    /* 00616f91: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616f94: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616f97: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_00616f9a:; BB(0x00616f9a);
    /* 00616f9a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00616f9d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00616fa0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616fa3: movzx edx, word ptr [ecx + 0xc] */ r_edx = (u32)R16((u32)(r_ecx+0xcu));
    /* 00616fa7: imul edx, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616fab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616fae: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 00616fb1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00616fb4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616fb7: movzx eax, word ptr [edx + 0xc] */ r_eax = (u32)R16((u32)(r_edx+0xcu));
    /* 00616fbb: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616fbf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616fc2: movzx edx, byte ptr [ecx + 0x10] */ r_edx = (u32)R8((u32)(r_ecx+0x10u));
    /* 00616fc6: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616fc9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00616fca: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00616fcd: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616fcf: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00616fd2: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616fd5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00616fd8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00616fdb: mov cl, byte ptr [eax + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x10u))) & 0xffu);
    /* 00616fde: mov byte ptr [ebp - 0x48], cl */ W8((u32)(r_ebp+0xffffffb8u), (u8)r_ecx);
    /* 00616fe1: cmp byte ptr [ebp - 0x48], 0x18 */ {  u32 a = R8((u32)(r_ebp+0xffffffb8u)); u32 b = 0x18u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00616fe5: je 0x61705b */ if (fZ) goto L_0061705b;
L_00616fe7:; BB(0x00616fe7);
    /* 00616fe7: cmp byte ptr [ebp - 0x48], 0x20 */ {  u32 a = R8((u32)(r_ebp+0xffffffb8u)); u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00616feb: je 0x616ff2 */ if (fZ) goto L_00616ff2;
L_00616fed:; BB(0x00616fed);
    /* 00616fed: jmp 0x6170bf */ goto L_006170bf;
L_00616ff2:; BB(0x00616ff2);
    /* 00616ff2: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00616ff9: jmp 0x617004 */ goto L_00617004;
L_00616ffb:; BB(0x00616ffb);
    /* 00616ffb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00616ffe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00617001: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00617004:; BB(0x00617004);
    /* 00617004: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617007: movzx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)R16((u32)(r_eax+0xcu));
    /* 0061700b: cmp dword ptr [ebp - 0x20], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061700e: jge 0x617059 */ if ((fS==fO)) goto L_00617059;
L_00617010:; BB(0x00617010);
    /* 00617010: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617013: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617016: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617019: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 0061701c: mov byte ptr [eax + edx*4], cl */ W8((u32)(r_eax+r_edx*4), (u8)r_ecx);
    /* 0061701f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617022: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617025: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617028: mov cl, byte ptr [ecx + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 0061702b: mov byte ptr [eax + edx*4 + 1], cl */ W8((u32)(r_eax+r_edx*4+0x1u), (u8)r_ecx);
    /* 0061702f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617032: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617035: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617038: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061703a: mov byte ptr [eax + edx*4 + 2], cl */ W8((u32)(r_eax+r_edx*4+0x2u), (u8)r_ecx);
    /* 0061703e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617041: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617044: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617047: mov cl, byte ptr [ecx + 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x3u))) & 0xffu);
    /* 0061704a: mov byte ptr [eax + edx*4 + 3], cl */ W8((u32)(r_eax+r_edx*4+0x3u), (u8)r_ecx);
    /* 0061704e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617051: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00617054: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00617057: jmp 0x616ffb */ goto L_00616ffb;
L_00617059:; BB(0x00617059);
    /* 00617059: jmp 0x6170d6 */ goto L_006170d6;
L_0061705b:; BB(0x0061705b);
    /* 0061705b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00617062: jmp 0x61706d */ goto L_0061706d;
L_00617064:; BB(0x00617064);
    /* 00617064: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00617067: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061706a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0061706d:; BB(0x0061706d);
    /* 0061706d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617070: movzx edx, word ptr [ecx + 0xc] */ r_edx = (u32)R16((u32)(r_ecx+0xcu));
    /* 00617074: cmp dword ptr [ebp - 0x24], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00617077: jge 0x6170bd */ if ((fS==fO)) goto L_006170bd;
L_00617079:; BB(0x00617079);
    /* 00617079: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061707c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061707f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617082: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 00617085: mov byte ptr [ecx + eax*4], dl */ W8((u32)(r_ecx+r_eax*4), (u8)r_edx);
    /* 00617088: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061708b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061708e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617091: mov dl, byte ptr [edx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 00617094: mov byte ptr [ecx + eax*4 + 1], dl */ W8((u32)(r_ecx+r_eax*4+0x1u), (u8)r_edx);
    /* 00617098: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061709b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061709e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006170a1: mov dl, byte ptr [edx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 006170a3: mov byte ptr [ecx + eax*4 + 2], dl */ W8((u32)(r_ecx+r_eax*4+0x2u), (u8)r_edx);
    /* 006170a7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006170aa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006170ad: mov byte ptr [ecx + eax*4 + 3], 0xff */ W8((u32)(r_ecx+r_eax*4+0x3u), 0xffu);
    /* 006170b2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006170b5: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006170b8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006170bb: jmp 0x617064 */ goto L_00617064;
L_006170bd:; BB(0x006170bd);
    /* 006170bd: jmp 0x6170d6 */ goto L_006170d6;
L_006170bf:; BB(0x006170bf);
    /* 006170bf: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 006170c2: call dword ptr [0x6b227c] */ { u32 t = R32((u32)(0x6b227cu)); r_esp -= 4; W32(r_esp, 0x6170c8u); call_ind(t); }
    /* 006170c8: push 0x6ffe04 */ { u32 v = 0x6ffe04u; r_esp -= 4; W32(r_esp, v); }
    /* 006170cd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 006170d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006170d1: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x6170d6u); f_00686fc0();
L_006170d6:; BB(0x006170d6);
    /* 006170d6: jmp 0x616f5d */ goto L_00616f5d;
L_006170db:; BB(0x006170db);
    /* 006170db: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006170de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006170e1: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006170e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006170e6: movzx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)R16((u32)(r_eax+0xcu));
    /* 006170ea: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006170ed: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006170ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006170f2: movzx ecx, word ptr [eax + 0xe] */ r_ecx = (u32)R16((u32)(r_eax+0xeu));
    /* 006170f6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006170f9: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006170fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006170fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006170fe: ret  */ FN_RET(0x00616ed0); r_esp += 4; return;
}

