#include "protos.h"

void f_00615160(void) /* sub_615160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615160);
    /* 00615160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615161: mov ebp, esp */ r_ebp = r_esp;
    /* 00615163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061516a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061516c: cmp dword ptr [eax + 0x5c], 1 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615170: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00615173: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00615175: mov esp, ebp */ r_esp = r_ebp;
    /* 00615177: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615178: ret  */ FN_RET(0x00615160); r_esp += 4; return;
}

void f_006152a0(void) /* sub_6152A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006152a0);
    /* 006152a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006152a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006152a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006152a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006152a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006152ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006152af: cmp ecx, dword ptr [eax + 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006152b2: jl 0x6152d8 */ if ((fS!=fO)) goto L_006152d8;
L_006152b4:; BB(0x006152b4);
    /* 006152b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006152b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006152b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006152bc: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 006152c2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6152c4u); call_ind(t); }
    /* 006152c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006152c7: add eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006152ca: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006152cd: jge 0x6152d8 */ if ((fS==fO)) goto L_006152d8;
L_006152cf:; BB(0x006152cf);
    /* 006152cf: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 006152d6: jmp 0x6152df */ goto L_006152df;
L_006152d8:; BB(0x006152d8);
    /* 006152d8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_006152df:; BB(0x006152df);
    /* 006152df: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 006152e2: mov esp, ebp */ r_esp = r_ebp;
    /* 006152e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006152e5: ret 4 */ FN_RET(0x006152a0); r_esp += 8; return;
}

void f_006152f0(void) /* sub_6152F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006152f0);
    /* 006152f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006152f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006152f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006152f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006152f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006152f8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006152fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006152fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006152ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615302: call 0x6152a0 */ r_esp -= 4; W32(r_esp, 0x615307u); f_006152a0();
    /* 00615307: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0061530a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061530c: je 0x615313 */ if (fZ) goto L_00615313;
L_0061530e:; BB(0x0061530e);
    /* 0061530e: jmp 0x6153d0 */ goto L_006153d0;
L_00615313:; BB(0x00615313);
    /* 00615313: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615316: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00615319: cmp eax, dword ptr [edx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061531c: jle 0x6153b4 */ if ((fZ||fS!=fO)) goto L_006153b4;
L_00615322:; BB(0x00615322);
    /* 00615322: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615325: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00615328: sub esi, dword ptr [ecx + 0x6c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061532b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061532e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00615330: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615333: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00615339: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x61533bu); call_ind(t); }
    /* 0061533b: mov edi, eax */ r_edi = r_eax;
    /* 0061533d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615340: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00615342: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615345: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0061534b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61534du); call_ind(t); }
    /* 0061534d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615350: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00615353: lea eax, [edx + eax - 1] */ r_eax = (u32)(r_edx+r_eax+0xffffffffu);
    /* 00615357: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00615359: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061535b: jge 0x61536b */ if ((fS==fO)) goto L_0061536b;
L_0061535d:; BB(0x0061535d);
    /* 0061535d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615360: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00615363: sub edx, dword ptr [ecx + 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00615366: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00615369: jmp 0x61539c */ goto L_0061539c;
L_0061536b:; BB(0x0061536b);
    /* 0061536b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061536e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00615370: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615373: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00615379: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61537bu); call_ind(t); }
    /* 0061537b: mov esi, eax */ r_esi = r_eax;
    /* 0061537d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615380: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615382: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615385: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0061538b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61538du); call_ind(t); }
    /* 0061538d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615390: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00615393: lea eax, [edx + eax - 1] */ r_eax = (u32)(r_edx+r_eax+0xffffffffu);
    /* 00615397: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00615399: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
L_0061539c:; BB(0x0061539c);
    /* 0061539c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061539f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006153a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006153a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006153a5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006153a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006153aa: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 006153b0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6153b2u); call_ind(t); }
    /* 006153b2: jmp 0x6153d0 */ goto L_006153d0;
L_006153b4:; BB(0x006153b4);
    /* 006153b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006153b7: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006153ba: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006153bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006153be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006153c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006153c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006153c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006153c8: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 006153ce: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6153d0u); call_ind(t); }
L_006153d0:; BB(0x006153d0);
    /* 006153d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006153d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006153d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006153d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006153d5: ret 4 */ FN_RET(0x006152f0); r_esp += 8; return;
}

void f_00615540(void) /* sub_615540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615540);
    /* 00615540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615541: mov ebp, esp */ r_ebp = r_esp;
    /* 00615543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615546: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00615547: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061554a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061554d: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00615550: call 0x615eb0 */ r_esp -= 4; W32(r_esp, 0x615555u); f_00615eb0();
    /* 00615555: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00615558: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061555c: je 0x615597 */ if (fZ) goto L_00615597;
L_0061555e:; BB(0x0061555e);
    /* 0061555e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615561: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615563: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615566: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0061556c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61556eu); call_ind(t); }
    /* 0061556e: mov esi, eax */ r_esi = r_eax;
    /* 00615570: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615573: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615575: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615578: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0061557e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615580u); call_ind(t); }
    /* 00615580: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00615582: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615585: jl 0x615597 */ if ((fS!=fO)) goto L_00615597;
L_00615587:; BB(0x00615587);
    /* 00615587: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061558a: call 0x615610 */ r_esp -= 4; W32(r_esp, 0x61558fu); f_00615610();
    /* 0061558f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00615592: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00615595: jmp 0x6155c6 */ goto L_006155c6;
L_00615597:; BB(0x00615597);
    /* 00615597: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061559a: call 0x615880 */ r_esp -= 4; W32(r_esp, 0x61559fu); f_00615880();
    /* 0061559f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006155a1: je 0x6155c6 */ if (fZ) goto L_006155c6;
L_006155a3:; BB(0x006155a3);
    /* 006155a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006155a6: call 0x615610 */ r_esp -= 4; W32(r_esp, 0x6155abu); f_00615610();
    /* 006155ab: mov esi, eax */ r_esi = r_eax;
    /* 006155ad: imul esi, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006155b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006155b4: call 0x615880 */ r_esp -= 4; W32(r_esp, 0x6155b9u); f_00615880();
    /* 006155b9: mov ecx, eax */ r_ecx = r_eax;
    /* 006155bb: mov eax, esi */ r_eax = r_esi;
    /* 006155bd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006155be: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006155be, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006155be, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006155c0: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006155c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006155c6:; BB(0x006155c6);
    /* 006155c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006155c9: call 0x615160 */ r_esp -= 4; W32(r_esp, 0x6155ceu); f_00615160();
    /* 006155ce: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006155d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006155d3: je 0x6155ee */ if (fZ) goto L_006155ee;
L_006155d5:; BB(0x006155d5);
    /* 006155d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006155d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006155d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006155dc: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006155df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006155e2: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006155e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006155e7: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006155ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6155ecu); call_ind(t); }
    /* 006155ec: jmp 0x615605 */ goto L_00615605;
L_006155ee:; BB(0x006155ee);
    /* 006155ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006155f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006155f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006155f5: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006155f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006155fb: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 006155fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00615600: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00615603: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615605u); call_ind(t); }
L_00615605:; BB(0x00615605);
    /* 00615605: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00615606: mov esp, ebp */ r_esp = r_ebp;
    /* 00615608: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615609: ret 4 */ FN_RET(0x00615540); r_esp += 8; return;
}

void f_00615610(void) /* sub_615610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615610);
    /* 00615610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615611: mov ebp, esp */ r_ebp = r_esp;
    /* 00615613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615614: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00615615: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615618: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061561b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0061561e: call 0x615ed0 */ r_esp -= 4; W32(r_esp, 0x615623u); f_00615ed0();
    /* 00615623: mov esi, eax */ r_esi = r_eax;
    /* 00615625: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615628: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 0061562b: call 0x615eb0 */ r_esp -= 4; W32(r_esp, 0x615630u); f_00615eb0();
    /* 00615630: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00615632: mov eax, esi */ r_eax = r_esi;
    /* 00615634: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00615635: mov esp, ebp */ r_esp = r_ebp;
    /* 00615637: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615638: ret  */ FN_RET(0x00615610); r_esp += 4; return;
}

void f_00615640(void) /* sub_615640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615640);
    /* 00615640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615641: mov ebp, esp */ r_ebp = r_esp;
    /* 00615643: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615646: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00615649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061564c: call 0x615160 */ r_esp -= 4; W32(r_esp, 0x615651u); f_00615160();
    /* 00615651: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615656: je 0x61567b */ if (fZ) goto L_0061567b;
L_00615658:; BB(0x00615658);
    /* 00615658: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061565b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061565e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00615661: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615664: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00615667: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061566a: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0061566d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061566f: mov ecx, eax */ r_ecx = r_eax;
    /* 00615671: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00615674: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615676u); call_ind(t); }
    /* 00615676: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00615679: jmp 0x61569c */ goto L_0061569c;
L_0061567b:; BB(0x0061567b);
    /* 0061567b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061567e: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00615681: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00615684: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615687: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0061568a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061568d: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00615690: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615692: mov ecx, eax */ r_ecx = r_eax;
    /* 00615694: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00615697: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615699u); call_ind(t); }
    /* 00615699: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061569c:; BB(0x0061569c);
    /* 0061569c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061569f: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006156a2: jge 0x6156f0 */ if ((fS==fO)) goto L_006156f0;
L_006156a4:; BB(0x006156a4);
    /* 006156a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006156a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156ac: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 006156b2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6156b4u); call_ind(t); }
    /* 006156b4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006156b7: jg 0x6156c2 */ if ((!fZ&&fS==fO)) goto L_006156c2;
L_006156b9:; BB(0x006156b9);
    /* 006156b9: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 006156c0: jmp 0x6156d8 */ goto L_006156d8;
L_006156c2:; BB(0x006156c2);
    /* 006156c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006156c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156ca: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006156d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6156d2u); call_ind(t); }
    /* 006156d2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006156d5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006156d8:; BB(0x006156d8);
    /* 006156d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006156db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006156dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006156de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006156e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156e6: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 006156ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6156eeu); call_ind(t); }
    /* 006156ee: jmp 0x61573a */ goto L_0061573a;
L_006156f0:; BB(0x006156f0);
    /* 006156f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006156f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006156f8: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006156fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615700u); call_ind(t); }
    /* 00615700: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615703: jg 0x61570e */ if ((!fZ&&fS==fO)) goto L_0061570e;
L_00615705:; BB(0x00615705);
    /* 00615705: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0061570c: jmp 0x615724 */ goto L_00615724;
L_0061570e:; BB(0x0061570e);
    /* 0061570e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615711: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615713: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615716: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0061571c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61571eu); call_ind(t); }
    /* 0061571e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00615721: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00615724:; BB(0x00615724);
    /* 00615724: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00615727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615728: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061572a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061572d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061572f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615732: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00615738: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x61573au); call_ind(t); }
L_0061573a:; BB(0x0061573a);
    /* 0061573a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061573c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061573d: ret 4 */ FN_RET(0x00615640); r_esp += 8; return;
}

void f_00615740(void) /* sub_615740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615740);
    /* 00615740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615741: mov ebp, esp */ r_ebp = r_esp;
    /* 00615743: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615746: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00615749: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061574c: call 0x615160 */ r_esp -= 4; W32(r_esp, 0x615751u); f_00615160();
    /* 00615751: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615756: je 0x615770 */ if (fZ) goto L_00615770;
L_00615758:; BB(0x00615758);
    /* 00615758: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061575b: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0061575e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615761: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00615764: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615766: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00615769: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61576bu); call_ind(t); }
    /* 0061576b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061576e: jmp 0x615786 */ goto L_00615786;
L_00615770:; BB(0x00615770);
    /* 00615770: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615773: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00615776: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615779: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0061577c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0061577e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00615781: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615783u); call_ind(t); }
    /* 00615783: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00615786:; BB(0x00615786);
    /* 00615786: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615789: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 0061578c: call 0x615eb0 */ r_esp -= 4; W32(r_esp, 0x615791u); f_00615eb0();
    /* 00615791: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615794: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00615796: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00615799: fldz  */ FPUSH(0.0);
    /* 0061579b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0061579e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006157a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006157a3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006157a6: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006157ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6157aeu); call_ind(t); }
    /* 006157ae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006157b1: cmp dword ptr [ecx + 0x6c], eax */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006157b4: jl 0x6157c0 */ if ((fS!=fO)) goto L_006157c0;
L_006157b6:; BB(0x006157b6);
    /* 006157b6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006157b9: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
L_006157c0:; BB(0x006157c0);
    /* 006157c0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006157c3: call 0x615880 */ r_esp -= 4; W32(r_esp, 0x6157c8u); f_00615880();
    /* 006157c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006157ca: je 0x61585e */ if (fZ) goto L_0061585e;
L_006157d0:; BB(0x006157d0);
    /* 006157d0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006157d3: call 0x615610 */ r_esp -= 4; W32(r_esp, 0x6157d8u); f_00615610();
    /* 006157d8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006157db: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006157de: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006157e1: fstp qword ptr [ebp - 0x2c] */ W_F64((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 006157e4: call 0x615880 */ r_esp -= 4; W32(r_esp, 0x6157e9u); f_00615880();
    /* 006157e9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006157ec: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 006157ef: fdivr qword ptr [ebp - 0x2c] */ ST(0) = R_F64((u32)(r_ebp+0xffffffd4u)) / ST(0);
    /* 006157f2: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006157f5: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 006157f8: fdiv qword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xffffffe8u));
    /* 006157fb: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 006157fe: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615801: fld1  */ FPUSH(1.0);
    /* 00615803: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00615806: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615809: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0061580c: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061580f: call 0x686fba */ r_esp -= 4; W32(r_esp, 0x615814u); f_00686fba();
    /* 00615814: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00615817: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 0061581d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061581f: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00615822: jp 0x61583b */ if (fP) goto L_0061583b;
L_00615824:; BB(0x00615824);
    /* 00615824: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615827: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0061582a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061582d: call dword ptr [0x6b2268] */ { u32 t = R32((u32)(0x6b2268u)); r_esp -= 4; W32(r_esp, 0x615833u); call_ind(t); }
    /* 00615833: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00615836: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00615839: jmp 0x615850 */ goto L_00615850;
L_0061583b:; BB(0x0061583b);
    /* 0061583b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061583e: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00615841: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00615844: call dword ptr [0x6b2244] */ { u32 t = R32((u32)(0x6b2244u)); r_esp -= 4; W32(r_esp, 0x61584au); call_ind(t); }
    /* 0061584a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061584d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00615850:; BB(0x00615850);
    /* 00615850: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00615853: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x615858u); f_00686cc0();
    /* 00615858: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061585b: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
L_0061585e:; BB(0x0061585e);
    /* 0061585e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615861: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00615863: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615866: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0061586c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x61586eu); call_ind(t); }
    /* 0061586e: mov esp, ebp */ r_esp = r_ebp;
    /* 00615870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615871: ret  */ FN_RET(0x00615740); r_esp += 4; return;
}

void f_00615880(void) /* sub_615880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615880);
    /* 00615880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615881: mov ebp, esp */ r_ebp = r_esp;
    /* 00615883: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615886: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00615887: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061588a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061588d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061588f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615892: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00615898: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61589au); call_ind(t); }
    /* 0061589a: mov esi, eax */ r_esi = r_eax;
    /* 0061589c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061589f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006158a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006158a4: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006158aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6158acu); call_ind(t); }
    /* 006158ac: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); }
    /* 006158ae: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 006158b1: jns 0x6158ba */ if (!fS) goto L_006158ba;
L_006158b3:; BB(0x006158b3);
    /* 006158b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_006158ba:; BB(0x006158ba);
    /* 006158ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006158bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006158be: mov esp, ebp */ r_esp = r_ebp;
    /* 006158c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006158c1: ret  */ FN_RET(0x00615880); r_esp += 4; return;
}

void f_00615e80(void) /* sub_615E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615e80);
    /* 00615e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00615e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615e87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615e8d: mov dword ptr [eax + 0x188], ecx */ W32((u32)(r_eax+0x188u), r_ecx);
    /* 00615e93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e96: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00615e99: mov dword ptr [edx + 0x18c], eax */ W32((u32)(r_edx+0x18cu), r_eax);
    /* 00615e9f: mov esp, ebp */ r_esp = r_ebp;
    /* 00615ea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615ea2: ret 8 */ FN_RET(0x00615e80); r_esp += 12; return;
}

