#include "protos.h"

void f_005ef050(void) /* sub_5EF050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef050);
    /* 005ef050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef051: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef053: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef056: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ef059: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ef060: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ef067: jmp 0x5ef072 */ goto L_005ef072;
L_005ef069:; BB(0x005ef069);
    /* 005ef069: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef06c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef06f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ef072:; BB(0x005ef072);
    /* 005ef072: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef075: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005ef078: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef07b: movzx ecx, byte ptr [edx + eax] */ r_ecx = (u32)R8((u32)(r_edx+r_eax));
    /* 005ef07f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef081: je 0x5ef120 */ if (fZ) goto L_005ef120;
L_005ef087:; BB(0x005ef087);
    /* 005ef087: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef08a: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005ef08d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef090: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005ef094: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef097: jne 0x5ef0a2 */ if (!fZ) goto L_005ef0a2;
L_005ef099:; BB(0x005ef099);
    /* 005ef099: mov dword ptr [ebp - 0x14], 0x20 */ W32((u32)(r_ebp+0xffffffecu), 0x20u);
    /* 005ef0a0: jmp 0x5ef0b2 */ goto L_005ef0b2;
L_005ef0a2:; BB(0x005ef0a2);
    /* 005ef0a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef0a5: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005ef0a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef0ab: movzx eax, byte ptr [ecx + edx] */ r_eax = (u32)R8((u32)(r_ecx+r_edx));
    /* 005ef0af: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005ef0b2:; BB(0x005ef0b2);
    /* 005ef0b2: mov cl, byte ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 005ef0b5: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 005ef0b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef0bb: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005ef0be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef0c1: movzx edx, byte ptr [eax + ecx + 1] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0x1u));
    /* 005ef0c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef0c8: je 0x5ef0dd */ if (fZ) goto L_005ef0dd;
L_005ef0ca:; BB(0x005ef0ca);
    /* 005ef0ca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef0cd: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005ef0d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef0d3: movzx eax, byte ptr [ecx + edx + 1] */ r_eax = (u32)R8((u32)(r_ecx+r_edx+0x1u));
    /* 005ef0d8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ef0db: jmp 0x5ef0e4 */ goto L_005ef0e4;
L_005ef0dd:; BB(0x005ef0dd);
    /* 005ef0dd: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
L_005ef0e4:; BB(0x005ef0e4);
    /* 005ef0e4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ef0e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0e8: mov dl, byte ptr [ebp - 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 005ef0eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef0ec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef0ef: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5ef0f4u); f_005ee950();
    /* 005ef0f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef0f7: movzx edx, word ptr [ecx + 0x90] */ r_edx = (u32)R16((u32)(r_ecx+0x90u));
    /* 005ef0fe: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef100: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef103: movsx edx, word ptr [ecx + 0x94] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x94u));
    /* 005ef10a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef10c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef10f: add eax, dword ptr [ecx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef115: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef118: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ef11b: jmp 0x5ef069 */ goto L_005ef069;
L_005ef120:; BB(0x005ef120);
    /* 005ef120: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ef123: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef125: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef126: ret  */ FN_RET(0x005ef050); r_esp += 4; return;
}

void f_005ef130(void) /* sub_5EF130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef130);
    /* 005ef130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef131: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ef137: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef13a: movsx eax, word ptr [eax + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x96u));
    /* 005ef141: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef144: ret  */ FN_RET(0x005ef130); r_esp += 4; return;
}

void f_005ef180(void) /* sub_5EF180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef180);
    /* 005ef180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef181: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef183: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef186: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ef189: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef18c: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef190: je 0x5ef308 */ if (fZ) goto L_005ef308;
L_005ef196:; BB(0x005ef196);
    /* 005ef196: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef199: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005ef19c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ef19f: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef1a3: je 0x5ef1be */ if (fZ) goto L_005ef1be;
L_005ef1a5:; BB(0x005ef1a5);
    /* 005ef1a5: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ef1a9: jle 0x5ef308 */ if ((fZ||fS!=fO)) goto L_005ef308;
L_005ef1af:; BB(0x005ef1af);
    /* 005ef1af: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ef1b3: jle 0x5ef2e6 */ if ((fZ||fS!=fO)) goto L_005ef2e6;
L_005ef1b9:; BB(0x005ef1b9);
    /* 005ef1b9: jmp 0x5ef308 */ goto L_005ef308;
L_005ef1be:; BB(0x005ef1be);
    /* 005ef1be: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005ef1c3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005ef1c6: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5ef1cbu); f_005f8550();
    /* 005ef1cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef1ce: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 005ef1d1: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005ef1d7: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005ef1da: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5ef1dfu); f_005f8570();
    /* 005ef1df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef1e2: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 005ef1e5: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005ef1e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1e9: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005ef1ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef1f0: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005ef1f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef1f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef1f7: call 0x5eedc0 */ r_esp -= 4; W32(r_esp, 0x5ef1fcu); f_005eedc0();
    /* 005ef1fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef1ff: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef202: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ef205: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef208: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef209: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef20c: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5ef211u); f_005ecc60();
    /* 005ef211: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef214: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef21a: movzx ecx, word ptr [eax + 0x3ca] */ r_ecx = (u32)R16((u32)(r_eax+0x3cau));
    /* 005ef221: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef224: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef22a: movzx edx, word ptr [eax + 0x2ca] */ r_edx = (u32)R16((u32)(r_eax+0x2cau));
    /* 005ef231: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ef233: jle 0x5ef24b */ if ((fZ||fS!=fO)) goto L_005ef24b;
L_005ef235:; BB(0x005ef235);
    /* 005ef235: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef238: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005ef23e: mov dx, word ptr [ecx + 0x3ca] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x3cau))) & 0xffffu);
    /* 005ef245: mov word ptr [ebp - 0x1a], dx */ W16((u32)(r_ebp+0xffffffe6u), (u16)r_edx);
    /* 005ef249: jmp 0x5ef25f */ goto L_005ef25f;
L_005ef24b:; BB(0x005ef24b);
    /* 005ef24b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef24e: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005ef254: mov dx, word ptr [ecx + 0x2ca] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2cau))) & 0xffffu);
    /* 005ef25b: mov word ptr [ebp - 0x1a], dx */ W16((u32)(r_ebp+0xffffffe6u), (u16)r_edx);
L_005ef25f:; BB(0x005ef25f);
    /* 005ef25f: movzx eax, word ptr [ebp - 0x1a] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe6u));
    /* 005ef263: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ef266: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef269: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005ef26f: movzx eax, word ptr [edx + 0x3ce] */ r_eax = (u32)R16((u32)(r_edx+0x3ceu));
    /* 005ef276: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef279: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005ef27f: movzx ecx, word ptr [edx + 0x2ce] */ r_ecx = (u32)R16((u32)(r_edx+0x2ceu));
    /* 005ef286: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ef288: jle 0x5ef2a0 */ if ((fZ||fS!=fO)) goto L_005ef2a0;
L_005ef28a:; BB(0x005ef28a);
    /* 005ef28a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef28d: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef293: mov cx, word ptr [eax + 0x3ce] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x3ceu))) & 0xffffu);
    /* 005ef29a: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 005ef29e: jmp 0x5ef2b4 */ goto L_005ef2b4;
L_005ef2a0:; BB(0x005ef2a0);
    /* 005ef2a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef2a3: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef2a9: mov cx, word ptr [eax + 0x2ce] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x2ceu))) & 0xffffu);
    /* 005ef2b0: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_005ef2b4:; BB(0x005ef2b4);
    /* 005ef2b4: movzx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe4u));
    /* 005ef2b8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ef2bb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef2be: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef2c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ef2c4: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 005ef2c7: fmul qword ptr [0x6be6f8] */ ST(0) = ST(0) * R_F64((u32)(0x6be6f8u));
    /* 005ef2cd: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5ef2d2u); f_00686cc0();
    /* 005ef2d2: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef2d5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ef2d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ef2db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef2dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef2df: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5ef2e4u); f_005eccb0();
    /* 005ef2e4: jmp 0x5ef308 */ goto L_005ef308;
L_005ef2e6:; BB(0x005ef2e6);
    /* 005ef2e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef2e9: call 0x5eef60 */ r_esp -= 4; W32(r_esp, 0x5ef2eeu); f_005eef60();
    /* 005ef2ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef2ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef2f2: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5ef2f7u); f_005ecc60();
    /* 005ef2f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef2fa: call 0x5eeef0 */ r_esp -= 4; W32(r_esp, 0x5ef2ffu); f_005eeef0();
    /* 005ef2ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef300: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef303: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5ef308u); f_005eccb0();
L_005ef308:; BB(0x005ef308);
    /* 005ef308: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef30a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef30b: ret  */ FN_RET(0x005ef180); r_esp += 4; return;
}

void f_005ef310(void) /* sub_5EF310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef310);
    /* 005ef310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef311: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ef317: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef31a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ef31d: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 005ef320: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef323: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ef325: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef328: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005ef32e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ef330u); call_ind(t); }
    /* 005ef330: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef332: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef333: ret 4 */ FN_RET(0x005ef310); r_esp += 8; return;
}

void f_005ef340(void) /* sub_5EF340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef340);
    /* 005ef340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef341: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ef347: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef34a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ef34d: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 005ef350: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef353: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ef356: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 005ef359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef35c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ef35e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef361: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ef367: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ef369u); call_ind(t); }
    /* 005ef369: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef36b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef36c: ret 8 */ FN_RET(0x005ef340); r_esp += 12; return;
}

void f_005ef3b0(void) /* sub_5EF3B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef3b0);
    /* 005ef3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ef3b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef3ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ef3bd: mov dword ptr [eax + 0x84], ecx */ W32((u32)(r_eax+0x84u), r_ecx);
    /* 005ef3c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef3c6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ef3c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef3cb: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005ef3d1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ef3d3u); call_ind(t); }
    /* 005ef3d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef3d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef3d6: ret 4 */ FN_RET(0x005ef3b0); r_esp += 8; return;
}

void f_005ef440(void) /* sub_5EF440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef440);
    /* 005ef440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef441: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef443: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef446: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ef449: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005ef44c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef44d: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005ef450: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef451: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef454: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005ef457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef458: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef45b: call 0x5eedc0 */ r_esp -= 4; W32(r_esp, 0x5ef460u); f_005eedc0();
    /* 005ef460: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ef463: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef465: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef466: ret  */ FN_RET(0x005ef440); r_esp += 4; return;
}

void f_005ef470(void) /* sub_5EF470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef470);
    /* 005ef470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef471: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef473: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef479: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005ef47f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005ef486: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef48c: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef493: jne 0x5ef4fc */ if (!fZ) goto L_005ef4fc;
L_005ef495:; BB(0x005ef495);
    /* 005ef495: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef49b: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005ef49e: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ef4a1: je 0x5ef4aa */ if (fZ) goto L_005ef4aa;
L_005ef4a3:; BB(0x005ef4a3);
    /* 005ef4a3: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005ef4aa:; BB(0x005ef4aa);
    /* 005ef4aa: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef4b0: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005ef4b3: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005ef4b6: je 0x5ef4c7 */ if (fZ) goto L_005ef4c7;
L_005ef4b8:; BB(0x005ef4b8);
    /* 005ef4b8: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef4be: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005ef4c1: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef4c4: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005ef4c7:; BB(0x005ef4c7);
    /* 005ef4c7: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef4cd: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005ef4d0: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ef4d3: je 0x5ef4e9 */ if (fZ) goto L_005ef4e9;
L_005ef4d5:; BB(0x005ef4d5);
    /* 005ef4d5: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef4db: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 005ef4de: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef4e1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ef4e2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef4e4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ef4e6: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005ef4e9:; BB(0x005ef4e9);
    /* 005ef4e9: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef4ef: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 005ef4f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef4f5: lea ecx, [eax + edx - 1] */ r_ecx = (u32)(r_eax+r_edx+0xffffffffu);
    /* 005ef4f9: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005ef4fc:; BB(0x005ef4fc);
    /* 005ef4fc: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef502: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef509: je 0x5ef514 */ if (fZ) goto L_005ef514;
L_005ef50b:; BB(0x005ef50b);
    /* 005ef50b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef50e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef511: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005ef514:; BB(0x005ef514);
    /* 005ef514: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef51a: movzx edx, byte ptr [ecx + 0x9e] */ r_edx = (u32)R8((u32)(r_ecx+0x9eu));
    /* 005ef521: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef523: je 0x5ef8d9 */ if (fZ) goto L_005ef8d9;
L_005ef529:; BB(0x005ef529);
    /* 005ef529: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef52f: movzx ecx, byte ptr [eax + 0x9f] */ r_ecx = (u32)R8((u32)(r_eax+0x9fu));
    /* 005ef536: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef538: je 0x5ef8d9 */ if (fZ) goto L_005ef8d9;
L_005ef53e:; BB(0x005ef53e);
    /* 005ef53e: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef544: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ef546: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef54c: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 005ef552: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ef554u); call_ind(t); }
    /* 005ef554: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ef557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef559: je 0x5ef8d9 */ if (fZ) goto L_005ef8d9;
L_005ef55f:; BB(0x005ef55f);
    /* 005ef55f: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef561: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef567: call 0x5f0a30 */ r_esp -= 4; W32(r_esp, 0x5ef56cu); f_005f0a30();
    /* 005ef56c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ef56f: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005ef572: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef574: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef576: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 005ef579: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef57a: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ef57fu); f_00686fa2();
    /* 005ef57f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ef582: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef588: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005ef58b: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005ef591: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef598: je 0x5ef5b9 */ if (fZ) goto L_005ef5b9;
L_005ef59a:; BB(0x005ef59a);
    /* 005ef59a: cmp dword ptr [ebp - 0x90], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef5a1: je 0x5ef635 */ if (fZ) goto L_005ef635;
L_005ef5a7:; BB(0x005ef5a7);
    /* 005ef5a7: cmp dword ptr [ebp - 0x90], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef5ae: je 0x5ef679 */ if (fZ) goto L_005ef679;
L_005ef5b4:; BB(0x005ef5b4);
    /* 005ef5b4: jmp 0x5ef6b0 */ goto L_005ef6b0;
L_005ef5b9:; BB(0x005ef5b9);
    /* 005ef5b9: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef5bf: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef5c5: movzx ecx, word ptr [eax + 0x3e2] */ r_ecx = (u32)R16((u32)(r_eax+0x3e2u));
    /* 005ef5cc: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ef5cf: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef5d5: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef5db: movzx ecx, word ptr [eax + 0x3e4] */ r_ecx = (u32)R16((u32)(r_eax+0x3e4u));
    /* 005ef5e2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005ef5e5: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef5eb: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef5f1: movzx ecx, word ptr [eax + 0x3e6] */ r_ecx = (u32)R16((u32)(r_eax+0x3e6u));
    /* 005ef5f8: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef5fe: movzx eax, word ptr [edx + 0x92] */ r_eax = (u32)R16((u32)(r_edx+0x92u));
    /* 005ef605: lea ecx, [ecx + eax + 1] */ r_ecx = (u32)(r_ecx+r_eax+0x1u);
    /* 005ef609: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ef60c: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef612: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ef618: movzx ecx, word ptr [eax + 0x3e8] */ r_ecx = (u32)R16((u32)(r_eax+0x3e8u));
    /* 005ef61f: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef625: movzx eax, word ptr [edx + 0x90] */ r_eax = (u32)R16((u32)(r_edx+0x90u));
    /* 005ef62c: lea ecx, [ecx + eax + 1] */ r_ecx = (u32)(r_ecx+r_eax+0x1u);
    /* 005ef630: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ef633: jmp 0x5ef6b0 */ goto L_005ef6b0;
L_005ef635:; BB(0x005ef635);
    /* 005ef635: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ef638: sub edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 005ef63b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005ef63e: jns 0x5ef647 */ if (!fS) goto L_005ef647;
L_005ef640:; BB(0x005ef640);
    /* 005ef640: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005ef647:; BB(0x005ef647);
    /* 005ef647: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ef64e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005ef655: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef657: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef659: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef65f: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5ef664u); f_005ee950();
    /* 005ef664: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ef667: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef669: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef66f: call 0x5eeaf0 */ r_esp -= 4; W32(r_esp, 0x5ef674u); f_005eeaf0();
    /* 005ef674: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ef677: jmp 0x5ef6b0 */ goto L_005ef6b0;
L_005ef679:; BB(0x005ef679);
    /* 005ef679: mov dword ptr [ebp - 0x54], 0x7c */ W32((u32)(r_ebp+0xffffffacu), 0x7cu);
    /* 005ef680: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ef687: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005ef68e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef690: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef692: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef698: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5ef69du); f_005ee950();
    /* 005ef69d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ef6a0: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ef6a2: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef6a8: call 0x5eeaf0 */ r_esp -= 4; W32(r_esp, 0x5ef6adu); f_005eeaf0();
    /* 005ef6ad: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005ef6b0:; BB(0x005ef6b0);
    /* 005ef6b0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ef6b3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ef6b6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ef6b9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ef6bc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ef6bf: sub edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ef6c2: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef6c5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ef6c8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ef6cb: sub eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef6ce: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef6d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ef6d4: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef6da: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005ef6dd: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 005ef6e0: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef6e6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ef6e9: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005ef6ec: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef6ef: add edx, dword ptr [ebp - 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef6f2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ef6f5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef6f8: add eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef6fb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ef6fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ef701: add ecx, dword ptr [ebp - 0x70] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef704: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ef707: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef70a: add edx, dword ptr [ebp - 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef70d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ef710: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef713: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ef716: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef719: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005ef71c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ef71f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ef722: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef725: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ef728: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ef72b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ef72d: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005ef730: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ef733: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ef736: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ef739: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005ef73c: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005ef73f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ef742: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ef745: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005ef748: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ef74b: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005ef74e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ef751: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005ef754: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ef757: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005ef75a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ef75d: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005ef760: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ef763: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ef766: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ef769: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005ef76c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ef76f: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005ef772: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ef775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef776: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 005ef779: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef77a: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 005ef77d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef77e: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005ef781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef782: call 0x624a70 */ r_esp -= 4; W32(r_esp, 0x5ef787u); f_00624a70();
    /* 005ef787: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ef78a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ef78d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef78f: je 0x5ef8d9 */ if (fZ) goto L_005ef8d9;
L_005ef795:; BB(0x005ef795);
    /* 005ef795: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef79b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005ef79e: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5ef7a3u); f_005f84f0();
    /* 005ef7a3: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005ef7a6: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef7ac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ef7af: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5ef7b4u); f_005f84d0();
    /* 005ef7b4: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005ef7b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef7ba: add ecx, dword ptr [ebp - 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef7bd: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ef7c0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ef7c3: add edx, dword ptr [ebp - 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ef7c6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005ef7c9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ef7cc: add eax, dword ptr [ebp - 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef7cf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ef7d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef7d5: add ecx, dword ptr [ebp - 0x7c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef7d8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ef7db: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef7e1: mov al, byte ptr [edx + 0x9d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x9du))) & 0xffu);
    /* 005ef7e7: mov byte ptr [ebp - 0x7d], al */ W8((u32)(r_ebp+0xffffff83u), (u8)r_eax);
    /* 005ef7ea: movzx ecx, byte ptr [ebp - 0x7d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff83u));
    /* 005ef7ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef7f0: je 0x5ef894 */ if (fZ) goto L_005ef894;
L_005ef7f6:; BB(0x005ef7f6);
    /* 005ef7f6: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef7fc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ef7ff: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005ef805: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005ef80b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef80d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef80f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef811: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef817: movzx eax, byte ptr [edx + 0x9c] */ r_eax = (u32)R8((u32)(r_edx+0x9cu));
    /* 005ef81e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef81f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef822: mov ecx, esp */ r_ecx = r_esp;
    /* 005ef824: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005ef827: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ef829: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ef82c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ef82f: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ef832: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ef835: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ef838: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005ef83b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef83e: mov ecx, esp */ r_ecx = r_esp;
    /* 005ef840: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef843: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ef845: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ef848: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ef84b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ef84e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ef851: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef854: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005ef857: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ef85d: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005ef860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef861: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef863: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef869: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005ef86f: call 0x6163e0 */ r_esp -= 4; W32(r_esp, 0x5ef874u); f_006163e0();
    /* 005ef874: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef877: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005ef879: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005ef87b: and eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ef87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef87f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef881: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef887: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 005ef88d: call 0x616510 */ r_esp -= 4; W32(r_esp, 0x5ef892u); f_00616510();
    /* 005ef892: jmp 0x5ef8d9 */ goto L_005ef8d9;
L_005ef894:; BB(0x005ef894);
    /* 005ef894: mov byte ptr [ebp - 0x6c], 0 */ W8((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005ef898: mov byte ptr [ebp - 0x6b], 0 */ W8((u32)(r_ebp+0xffffff95u), 0x0u);
    /* 005ef89c: mov byte ptr [ebp - 0x6a], 0 */ W8((u32)(r_ebp+0xffffff96u), 0x0u);
    /* 005ef8a0: mov byte ptr [ebp - 0x69], 0xff */ W8((u32)(r_ebp+0xffffff97u), 0xffu);
    /* 005ef8a4: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ef8aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ef8ad: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005ef8b3: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005ef8b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8bb: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005ef8be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ef8c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8c3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ef8c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8c7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef8ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8cb: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005ef8d1: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005ef8d4: call 0x623f00 */ r_esp -= 4; W32(r_esp, 0x5ef8d9u); f_00623f00();
L_005ef8d9:; BB(0x005ef8d9);
    /* 005ef8d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef8db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef8dc: ret 0x10 */ FN_RET(0x005ef470); r_esp += 20; return;
}

void f_005efa20(void) /* sub_5EFA20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005efa20);
    /* 005efa20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efa21: mov ebp, esp */ r_ebp = r_esp;
    /* 005efa23: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efa26: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005efa29: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005efa30: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005efa37: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005efa3e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005efa45: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005efa4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005efa53: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efa56: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efa5a: je 0x5efa69 */ if (fZ) goto L_005efa69;
L_005efa5c:; BB(0x005efa5c);
    /* 005efa5c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efa5f: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005efa62: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 005efa65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efa67: jne 0x5efa6e */ if (!fZ) goto L_005efa6e;
L_005efa69:; BB(0x005efa69);
    /* 005efa69: jmp 0x5efd19 */ goto L_005efd19;
L_005efa6e:; BB(0x005efa6e);
    /* 005efa6e: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005efa71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efa72: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005efa75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005efa76: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efa79: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005efa7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efa7d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efa80: call 0x5eedc0 */ r_esp -= 4; W32(r_esp, 0x5efa85u); f_005eedc0();
    /* 005efa85: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efa88: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005efa8b: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005efa8e: je 0x5efa97 */ if (fZ) goto L_005efa97;
L_005efa90:; BB(0x005efa90);
    /* 005efa90: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005efa97:; BB(0x005efa97);
    /* 005efa97: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efa9a: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005efa9d: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005efaa0: je 0x5efaae */ if (fZ) goto L_005efaae;
L_005efaa2:; BB(0x005efaa2);
    /* 005efaa2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efaa5: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005efaa8: sub ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005efaab: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005efaae:; BB(0x005efaae);
    /* 005efaae: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efab1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005efab4: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005efab7: je 0x5efaca */ if (fZ) goto L_005efaca;
L_005efab9:; BB(0x005efab9);
    /* 005efab9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efabc: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 005efabf: sub eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005efac2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005efac3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005efac5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005efac7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005efaca:; BB(0x005efaca);
    /* 005efaca: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efacd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005efad0: add eax, dword ptr [edx + 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x78u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efad3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005efad6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005efadd: jmp 0x5efae5 */ goto L_005efae5;
L_005efadf:; BB(0x005efadf);
    /* 005efadf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005efae2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005efae5:; BB(0x005efae5);
    /* 005efae5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efae8: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005efaeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efaee: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005efaf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efaf4: je 0x5efd19 */ if (fZ) goto L_005efd19;
L_005efafa:; BB(0x005efafa);
    /* 005efafa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005efafc: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005efaff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efb00: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005efb03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb04: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005efb07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb08: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005efb0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efb0c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efb0f: call 0x5eebf0 */ r_esp -= 4; W32(r_esp, 0x5efb14u); f_005eebf0();
    /* 005efb14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005efb16: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005efb19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb1a: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005efb1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb1e: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005efb21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efb22: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005efb25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efb26: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efb29: call 0x5eebf0 */ r_esp -= 4; W32(r_esp, 0x5efb2eu); f_005eebf0();
    /* 005efb2e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efb31: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005efb34: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005efb37: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005efb3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efb3d: jne 0x5efb44 */ if (!fZ) goto L_005efb44;
L_005efb3f:; BB(0x005efb3f);
    /* 005efb3f: jmp 0x5efd19 */ goto L_005efd19;
L_005efb44:; BB(0x005efb44);
    /* 005efb44: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efb47: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005efb4a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005efb4d: movzx eax, byte ptr [ecx + edx] */ r_eax = (u32)R8((u32)(r_ecx+r_edx));
    /* 005efb51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efb53: je 0x5efb8d */ if (fZ) goto L_005efb8d;
L_005efb55:; BB(0x005efb55);
    /* 005efb55: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005efb58: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efb5b: jl 0x5efb6f */ if ((fS!=fO)) goto L_005efb6f;
L_005efb5d:; BB(0x005efb5d);
    /* 005efb5d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efb60: movsx eax, word ptr [edx + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x96u));
    /* 005efb67: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efb6a: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efb6d: jl 0x5efb8d */ if ((fS!=fO)) goto L_005efb8d;
L_005efb6f:; BB(0x005efb6f);
    /* 005efb6f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005efb72: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005efb75: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005efb78: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efb7b: movsx eax, word ptr [edx + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x96u));
    /* 005efb82: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efb85: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005efb88: jmp 0x5efadf */ goto L_005efadf;
L_005efb8d:; BB(0x005efb8d);
    /* 005efb8d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efb90: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005efb93: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005efb96: je 0x5efb9f */ if (fZ) goto L_005efb9f;
L_005efb98:; BB(0x005efb98);
    /* 005efb98: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005efb9f:; BB(0x005efb9f);
    /* 005efb9f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efba2: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005efba5: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005efba8: je 0x5efbb6 */ if (fZ) goto L_005efbb6;
L_005efbaa:; BB(0x005efbaa);
    /* 005efbaa: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efbad: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005efbb0: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005efbb3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005efbb6:; BB(0x005efbb6);
    /* 005efbb6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efbb9: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005efbbc: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005efbbf: je 0x5efbd2 */ if (fZ) goto L_005efbd2;
L_005efbc1:; BB(0x005efbc1);
    /* 005efbc1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efbc4: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 005efbc7: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005efbca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005efbcb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005efbcd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005efbcf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005efbd2:; BB(0x005efbd2);
    /* 005efbd2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efbd5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005efbd8: add edx, dword ptr [ecx + 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x74u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005efbdb: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005efbde: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005efbe1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005efbe4: jmp 0x5efbef */ goto L_005efbef;
L_005efbe6:; BB(0x005efbe6);
    /* 005efbe6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efbe9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005efbec: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_005efbef:; BB(0x005efbef);
    /* 005efbef: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efbf2: cmp edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efbf5: jge 0x5efd04 */ if ((fS==fO)) goto L_005efd04;
L_005efbfb:; BB(0x005efbfb);
    /* 005efbfb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005efbfe: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005efc01: cmp dword ptr [ebp - 0x38], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efc04: jge 0x5efc19 */ if ((fS==fO)) goto L_005efc19;
L_005efc06:; BB(0x005efc06);
    /* 005efc06: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efc09: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005efc0c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efc0f: movzx ecx, byte ptr [edx + eax + 1] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0x1u));
    /* 005efc14: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005efc17: jmp 0x5efc20 */ goto L_005efc20;
L_005efc19:; BB(0x005efc19);
    /* 005efc19: mov dword ptr [ebp - 0x40], 0xffffffff */ W32((u32)(r_ebp+0xffffffc0u), 0xffffffffu);
L_005efc20:; BB(0x005efc20);
    /* 005efc20: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005efc23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005efc24: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efc27: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005efc2a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efc2d: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005efc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efc31: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efc34: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5efc39u); f_005ee950();
    /* 005efc39: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efc3c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005efc3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005efc42: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efc45: jg 0x5efc7b */ if ((!fZ&&fS==fO)) goto L_005efc7b;
L_005efc47:; BB(0x005efc47);
    /* 005efc47: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005efc4a: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efc4d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005efc4e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005efc50: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005efc52: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efc55: jge 0x5efc65 */ if ((fS==fO)) goto L_005efc65;
L_005efc57:; BB(0x005efc57);
    /* 005efc57: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efc5a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efc5d: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 005efc63: jmp 0x5efc74 */ goto L_005efc74;
L_005efc65:; BB(0x005efc65);
    /* 005efc65: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efc68: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005efc6b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efc6e: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
L_005efc74:; BB(0x005efc74);
    /* 005efc74: jmp 0x5efd19 */ goto L_005efd19;
L_005efc7b:; BB(0x005efc7b);
    /* 005efc7b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efc7e: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005efc81: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efc84: movzx eax, byte ptr [ecx + edx + 1] */ r_eax = (u32)R8((u32)(r_ecx+r_edx+0x1u));
    /* 005efc89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efc8b: jne 0x5efca6 */ if (!fZ) goto L_005efca6;
L_005efc8d:; BB(0x005efc8d);
    /* 005efc8d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005efc90: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efc93: jle 0x5efca6 */ if ((fZ||fS!=fO)) goto L_005efca6;
L_005efc95:; BB(0x005efc95);
    /* 005efc95: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efc98: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005efc9b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efc9e: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 005efca4: jmp 0x5efd19 */ goto L_005efd19;
L_005efca6:; BB(0x005efca6);
    /* 005efca6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005efca9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005efcac: cmp dword ptr [ebp - 0x38], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efcaf: jge 0x5efcc4 */ if ((fS==fO)) goto L_005efcc4;
L_005efcb1:; BB(0x005efcb1);
    /* 005efcb1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efcb4: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005efcb7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efcba: movzx edx, byte ptr [eax + ecx + 1] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0x1u));
    /* 005efcbf: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005efcc2: jmp 0x5efccb */ goto L_005efccb;
L_005efcc4:; BB(0x005efcc4);
    /* 005efcc4: mov dword ptr [ebp - 0x44], 0xffffffff */ W32((u32)(r_ebp+0xffffffbcu), 0xffffffffu);
L_005efccb:; BB(0x005efccb);
    /* 005efccb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005efcce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efccf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efcd2: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005efcd5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005efcd8: mov cl, byte ptr [edx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 005efcdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efcdc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efcdf: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5efce4u); f_005ee950();
    /* 005efce4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efce7: movsx ecx, word ptr [edx + 0x94] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x94u));
    /* 005efcee: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efcf0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efcf3: add eax, dword ptr [edx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efcf9: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005efcfc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005efcff: jmp 0x5efbe6 */ goto L_005efbe6;
L_005efd04:; BB(0x005efd04);
    /* 005efd04: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005efd07: movsx ecx, word ptr [eax + 0x96] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x96u));
    /* 005efd0e: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005efd11: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005efd14: jmp 0x5efadf */ goto L_005efadf;
L_005efd19:; BB(0x005efd19);
    /* 005efd19: mov esp, ebp */ r_esp = r_ebp;
    /* 005efd1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efd1c: ret 8 */ FN_RET(0x005efa20); r_esp += 12; return;
}

