#include "protos.h"

void f_00577240(void) /* SultanCounter::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577240);
    /* 00577240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577241: mov ebp, esp */ r_ebp = r_esp;
    /* 00577243: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577245: push 0x6a6493 */ { u32 v = 0x6a6493u; r_esp -= 4; W32(r_esp, v); }
    /* 0057724a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577251: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577254: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00577259: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057725b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057725c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057725f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00577265: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00577268: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057726b: mov dword ptr [eax], 0x6cb04c */ W32((u32)(r_eax), 0x6cb04cu);
    /* 00577271: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00577278: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057727b: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577282: je 0x577335 */ if (fZ) goto L_00577335;
L_00577288:; BB(0x00577288);
    /* 00577288: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057728e: jmp 0x57729c */ goto L_0057729c;
L_00577290:; BB(0x00577290);
    /* 00577290: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00577294: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00577298: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0057729c:; BB(0x0057729c);
    /* 0057729c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005772a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005772a3: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 005772aa: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005772ac: jge 0x577310 */ if ((fS==fO)) goto L_00577310;
L_005772ae:; BB(0x005772ae);
    /* 005772ae: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005772b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005772b5: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005772bb: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005772bf: je 0x57730e */ if (fZ) goto L_0057730e;
L_005772c1:; BB(0x005772c1);
    /* 005772c1: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005772c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005772c8: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005772ce: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005772d1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005772d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005772d7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005772da: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005772de: je 0x5772f3 */ if (fZ) goto L_005772f3;
L_005772e0:; BB(0x005772e0);
    /* 005772e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005772e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005772e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005772e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005772ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005772ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5772eeu); call_ind(t); }
    /* 005772ee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005772f1: jmp 0x5772fa */ goto L_005772fa;
L_005772f3:; BB(0x005772f3);
    /* 005772f3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005772fa:; BB(0x005772fa);
    /* 005772fa: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005772fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577301: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00577307: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_0057730e:; BB(0x0057730e);
    /* 0057730e: jmp 0x577290 */ goto L_00577290;
L_00577310:; BB(0x00577310);
    /* 00577310: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577313: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00577319: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0057731c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057731f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00577320: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x577325u); f_00686cae();
    /* 00577325: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577328: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057732b: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
L_00577335:; BB(0x00577335);
    /* 00577335: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057733c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057733f: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x577344u); f_005f5c40();
    /* 00577344: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577347: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057734e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057734f: mov esp, ebp */ r_esp = r_ebp;
    /* 00577351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577352: ret  */ FN_RET(0x00577240); r_esp += 4; return;
}

void f_00577360(void) /* SultanCounter::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577360);
    /* 00577360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577361: mov ebp, esp */ r_ebp = r_esp;
    /* 00577363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577365: push 0x6a64b9 */ { u32 v = 0x6a64b9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057736a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577371: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00577379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057737b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057737c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057737f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00577385: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00577388: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057738b: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x577390u); f_005f5cc0();
    /* 00577390: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577393: mov dword ptr [eax + 0x188], 0 */ W32((u32)(r_eax+0x188u), 0x0u);
    /* 0057739d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0057739f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005773a2: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 005773a9: imul edx, edx, 0x11 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x11u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005773ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005773ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005773b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005773b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005773b5: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005773b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5773bau); call_ind(t); }
    /* 005773ba: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005773c0: jmp 0x5773ce */ goto L_005773ce;
L_005773c2:; BB(0x005773c2);
    /* 005773c2: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005773c6: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005773ca: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_005773ce:; BB(0x005773ce);
    /* 005773ce: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005773d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005773d5: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 005773dc: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005773de: jge 0x577584 */ if ((fS==fO)) goto L_00577584;
L_005773e4:; BB(0x005773e4);
    /* 005773e4: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005773e9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5773eeu); f_00686d82();
    /* 005773ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005773f1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005773f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005773fb: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005773ff: je 0x57740e */ if (fZ) goto L_0057740e;
L_00577401:; BB(0x00577401);
    /* 00577401: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577404: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x577409u); f_005eaaf0();
    /* 00577409: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057740c: jmp 0x577415 */ goto L_00577415;
L_0057740e:; BB(0x0057740e);
    /* 0057740e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00577415:; BB(0x00577415);
    /* 00577415: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577418: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0057741b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00577422: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00577426: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577429: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057742f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00577432: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 00577435: push 0x16023 */ { u32 v = 0x16023u; r_esp -= 4; W32(r_esp, v); }
    /* 0057743a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057743e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577441: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00577447: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0057744a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57744fu); f_005eaf00();
    /* 0057744f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577451: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00577455: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577458: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0057745e: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 00577461: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00577465: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577468: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0057746e: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 00577471: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00577473: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00577479: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57747bu); call_ind(t); }
    /* 0057747b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057747f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577482: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00577488: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0057748b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057748f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577492: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00577498: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0057749b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057749d: mov ecx, edx */ r_ecx = r_edx;
    /* 0057749f: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005774a2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5774a4u); call_ind(t); }
    /* 005774a4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005774a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005774a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005774ac: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005774af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5774b1u); call_ind(t); }
    /* 005774b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005774b2: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005774b6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005774b9: imul ecx, ecx, 0x11 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x11u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005774bc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005774bf: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005774c2: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005774c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005774c5: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005774c9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005774cc: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 005774d2: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005774d5: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005774d9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005774dc: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 005774e2: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005774e5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005774e7: mov ecx, edx */ r_ecx = r_edx;
    /* 005774e9: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005774ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5774eeu); call_ind(t); }
    /* 005774ee: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005774f1: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5774f6u); f_005f53c0();
    /* 005774f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005774f7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005774fb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005774fe: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00577504: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00577507: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057750b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057750e: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 00577514: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00577517: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00577519: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0057751c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57751eu); call_ind(t); }
    /* 0057751e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577521: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x577526u); f_005f54c0();
    /* 00577526: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00577529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057752b: je 0x577558 */ if (fZ) goto L_00577558;
L_0057752d:; BB(0x0057752d);
    /* 0057752d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00577531: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577534: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0057753a: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0057753d: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00577541: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577544: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0057754a: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0057754d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057754f: mov ecx, edx */ r_ecx = r_edx;
    /* 00577551: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00577554: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x577556u); call_ind(t); }
    /* 00577556: jmp 0x57757f */ goto L_0057757f;
L_00577558:; BB(0x00577558);
    /* 00577558: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057755c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057755f: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00577565: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00577568: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057756c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057756f: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 00577575: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00577578: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057757a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057757d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57757fu); call_ind(t); }
L_0057757f:; BB(0x0057757f);
    /* 0057757f: jmp 0x5773c2 */ goto L_005773c2;
L_00577584:; BB(0x00577584);
    /* 00577584: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577587: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057758e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057758f: mov esp, ebp */ r_esp = r_ebp;
    /* 00577591: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577592: ret  */ FN_RET(0x00577360); r_esp += 4; return;
}

void f_005775a0(void) /* SultanCounter::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005775a0);
    /* 005775a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005775a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005775a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005775a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005775a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005775ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005775ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005775b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005775b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005775b4: call 0x5eb260 */ r_esp -= 4; W32(r_esp, 0x5775b9u); f_005eb260();
    /* 005775b9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005775bf: jmp 0x5775cd */ goto L_005775cd;
L_005775c1:; BB(0x005775c1);
    /* 005775c1: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005775c5: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005775c9: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005775cd:; BB(0x005775cd);
    /* 005775cd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005775d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005775d4: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 005775db: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005775dd: jge 0x577634 */ if ((fS==fO)) goto L_00577634;
L_005775df:; BB(0x005775df);
    /* 005775df: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005775e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005775e6: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005775ec: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005775f0: je 0x577632 */ if (fZ) goto L_00577632;
L_005775f2:; BB(0x005775f2);
    /* 005775f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005775f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005775f6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005775fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005775fd: imul ecx, ecx, 0x11 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x11u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00577600: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577603: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00577606: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00577608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577609: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057760d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577610: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00577616: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00577619: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057761d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577620: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00577626: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00577629: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057762b: mov ecx, edx */ r_ecx = r_edx;
    /* 0057762d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00577630: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x577632u); call_ind(t); }
L_00577632:; BB(0x00577632);
    /* 00577632: jmp 0x5775c1 */ goto L_005775c1;
L_00577634:; BB(0x00577634);
    /* 00577634: mov esp, ebp */ r_esp = r_ebp;
    /* 00577636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577637: ret 8 */ FN_RET(0x005775a0); r_esp += 12; return;
}

void f_00577640(void) /* SultanCounter::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577640);
    /* 00577640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577641: mov ebp, esp */ r_ebp = r_esp;
    /* 00577643: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577646: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00577649: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057764c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057764d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577650: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x577655u); f_005f5300();
    /* 00577655: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057765b: jmp 0x577669 */ goto L_00577669;
L_0057765d:; BB(0x0057765d);
    /* 0057765d: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00577661: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00577665: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00577669:; BB(0x00577669);
    /* 00577669: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057766d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577670: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 00577677: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577679: jge 0x5776bb */ if ((fS==fO)) goto L_005776bb;
L_0057767b:; BB(0x0057767b);
    /* 0057767b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057767f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577682: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00577688: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057768c: je 0x5776b9 */ if (fZ) goto L_005776b9;
L_0057768e:; BB(0x0057768e);
    /* 0057768e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00577691: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00577692: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00577696: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577699: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057769f: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005776a2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005776a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005776a9: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 005776af: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005776b2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005776b4: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005776b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5776b9u); call_ind(t); }
L_005776b9:; BB(0x005776b9);
    /* 005776b9: jmp 0x57765d */ goto L_0057765d;
L_005776bb:; BB(0x005776bb);
    /* 005776bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005776bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005776be: ret 4 */ FN_RET(0x00577640); r_esp += 8; return;
}

void f_005776d0(void) /* SultanCounter::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005776d0);
    /* 005776d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005776d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005776d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005776d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005776d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005776dc: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5776e1u); f_005eb5a0();
    /* 005776e1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005776e7: jmp 0x5776f5 */ goto L_005776f5;
L_005776e9:; BB(0x005776e9);
    /* 005776e9: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005776ed: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005776f1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005776f5:; BB(0x005776f5);
    /* 005776f5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005776f9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005776fc: movsx eax, word ptr [edx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x184u));
    /* 00577703: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577705: jge 0x577745 */ if ((fS==fO)) goto L_00577745;
L_00577707:; BB(0x00577707);
    /* 00577707: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057770b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057770e: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00577714: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577718: je 0x577743 */ if (fZ) goto L_00577743;
L_0057771a:; BB(0x0057771a);
    /* 0057771a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057771e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577721: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00577727: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0057772a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057772e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577731: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00577737: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0057773a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057773c: mov ecx, edx */ r_ecx = r_edx;
    /* 0057773e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00577741: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x577743u); call_ind(t); }
L_00577743:; BB(0x00577743);
    /* 00577743: jmp 0x5776e9 */ goto L_005776e9;
L_00577745:; BB(0x00577745);
    /* 00577745: mov esp, ebp */ r_esp = r_ebp;
    /* 00577747: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577748: ret  */ FN_RET(0x005776d0); r_esp += 4; return;
}

void f_00577750(void) /* SultanCounter::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577750);
    /* 00577750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577751: mov ebp, esp */ r_ebp = r_esp;
    /* 00577753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577756: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00577759: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057775c: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x577761u); f_005eb570();
    /* 00577761: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00577767: jmp 0x577775 */ goto L_00577775;
L_00577769:; BB(0x00577769);
    /* 00577769: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0057776d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00577771: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00577775:; BB(0x00577775);
    /* 00577775: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00577779: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057777c: movsx eax, word ptr [edx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x184u));
    /* 00577783: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577785: jge 0x5777c5 */ if ((fS==fO)) goto L_005777c5;
L_00577787:; BB(0x00577787);
    /* 00577787: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057778b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057778e: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00577794: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577798: je 0x5777c3 */ if (fZ) goto L_005777c3;
L_0057779a:; BB(0x0057779a);
    /* 0057779a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057779e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005777a1: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 005777a7: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005777aa: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005777ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005777b1: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 005777b7: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005777ba: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005777bc: mov ecx, edx */ r_ecx = r_edx;
    /* 005777be: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005777c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5777c3u); call_ind(t); }
L_005777c3:; BB(0x005777c3);
    /* 005777c3: jmp 0x577769 */ goto L_00577769;
L_005777c5:; BB(0x005777c5);
    /* 005777c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005777c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005777c8: ret  */ FN_RET(0x00577750); r_esp += 4; return;
}

