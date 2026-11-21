#include "protos.h"

void f_005b2400(void) /* RoyalMatchRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2400);
    /* 005b2400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2401: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b240a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5b240fu); f_005e9e20();
    /* 005b240f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2412: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 005b2418: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b241b: mov dword ptr [ecx], 0x6d0944 */ W32((u32)(r_ecx), 0x6d0944u);
    /* 005b2421: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2424: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2426: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2427: ret  */ FN_RET(0x005b2400); r_esp += 4; return;
}

void f_005b2450(void) /* RoyalMatchRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2450);
    /* 005b2450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2451: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2455: push 0x6a7dde */ { u32 v = 0x6a7ddeu; r_esp -= 4; W32(r_esp, v); }
    /* 005b245a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b2460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2461: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2462: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b2467: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b2469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b246a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b246d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b2473: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b2476: mov eax, dword ptr [0x793608] */ r_eax = R32((u32)(0x793608u));
    /* 005b247b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b247e: jne 0x5b24e9 */ if (!fZ) goto L_005b24e9;
L_005b2480:; BB(0x005b2480);
    /* 005b2480: mov ecx, dword ptr [0x793608] */ r_ecx = R32((u32)(0x793608u));
    /* 005b2486: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2489: mov dword ptr [0x793608], ecx */ W32((u32)(0x793608u), r_ecx);
    /* 005b248f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b2496: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005b249c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b249e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b24a4: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 005b24aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b24acu); call_ind(t); }
    /* 005b24ac: mov dword ptr [0x7589b4], eax */ W32((u32)(0x7589b4u), r_eax);
    /* 005b24b1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005b24b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b24b8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b24be: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 005b24c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b24c6u); call_ind(t); }
    /* 005b24c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b24c7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b24cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b24cf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b24d5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005b24db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b24ddu); call_ind(t); }
    /* 005b24dd: mov dword ptr [0x7589b8], eax */ W32((u32)(0x7589b8u), r_eax);
    /* 005b24e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005b24e9:; BB(0x005b24e9);
    /* 005b24e9: cmp dword ptr [ebp + 8], 0x3154e9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3154e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b24f0: jne 0x5b24fb */ if (!fZ) goto L_005b24fb;
L_005b24f2:; BB(0x005b24f2);
    /* 005b24f2: mov eax, 0x7589b0 */ r_eax = 0x7589b0u;
    /* 005b24f7: jmp 0x5b24fd */ goto L_005b24fd;
L_005b24fb:; BB(0x005b24fb);
    /* 005b24fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b24fd:; BB(0x005b24fd);
    /* 005b24fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b2500: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b2507: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2508: mov esp, ebp */ r_esp = r_ebp;
    /* 005b250a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b250b: ret 4 */ FN_RET(0x005b2450); r_esp += 8; return;
}

void f_005b2510(void) /* RoyalMatchRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2510);
    /* 005b2510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2511: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2517: mov eax, 0x757af8 */ r_eax = 0x757af8u;
    /* 005b251c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b251e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b251f: ret  */ FN_RET(0x005b2510); r_esp += 4; return;
}

void f_005b2520(void) /* RoyalMatchRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2520);
    /* 005b2520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2521: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2527: mov eax, 0x757ce8 */ r_eax = 0x757ce8u;
    /* 005b252c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b252e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b252f: ret  */ FN_RET(0x005b2520); r_esp += 4; return;
}

void f_005b2550(void) /* RoyalMatchRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2550);
    /* 005b2550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2551: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2557: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b255b: jne 0x5b2561 */ if (!fZ) goto L_005b2561;
L_005b255d:; BB(0x005b255d);
    /* 005b255d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b255f: jmp 0x5b257d */ goto L_005b257d;
L_005b2561:; BB(0x005b2561);
    /* 005b2561: push 0x6cf8e8 */ { u32 v = 0x6cf8e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2566: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b256bu); f_00630f40();
    /* 005b256b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b256e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b256f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b2572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2573: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b2578u); f_00686d8e();
    /* 005b2578: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b257b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b257d:; BB(0x005b257d);
    /* 005b257d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b257f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2580: ret 4 */ FN_RET(0x005b2550); r_esp += 8; return;
}

void f_005b2590(void) /* RoyalMatchRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2590);
    /* 005b2590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2591: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2597: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b259b: jne 0x5b25a1 */ if (!fZ) goto L_005b25a1;
L_005b259d:; BB(0x005b259d);
    /* 005b259d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b259f: jmp 0x5b25ff */ goto L_005b25ff;
L_005b25a1:; BB(0x005b25a1);
    /* 005b25a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b25a4: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 005b25aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b25ad: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 005b25b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b25b7: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 005b25be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b25c1: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 005b25c8: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 005b25cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b25d1: je 0x5b25df */ if (fZ) goto L_005b25df;
L_005b25d3:; BB(0x005b25d3);
    /* 005b25d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b25d6: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
    /* 005b25dd: jmp 0x5b25e9 */ goto L_005b25e9;
L_005b25df:; BB(0x005b25df);
    /* 005b25df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b25e2: mov dword ptr [eax + 0x10], 4 */ W32((u32)(r_eax+0x10u), 0x4u);
L_005b25e9:; BB(0x005b25e9);
    /* 005b25e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b25ec: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 005b25f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b25f6: mov dword ptr [edx + 0x18], 3 */ W32((u32)(r_edx+0x18u), 0x3u);
    /* 005b25fd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b25ff:; BB(0x005b25ff);
    /* 005b25ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2602: ret 8 */ FN_RET(0x005b2590); r_esp += 12; return;
}

void f_005b2610(void) /* RoyalMatchRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2610);
    /* 005b2610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2611: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2617: mov eax, 0x3154e8 */ r_eax = 0x3154e8u;
    /* 005b261c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b261e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b261f: ret  */ FN_RET(0x005b2610); r_esp += 4; return;
}

void f_005b2620(void) /* RoyalMatchRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2620);
    /* 005b2620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2621: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2627: mov eax, 0x7589bc */ r_eax = 0x7589bcu;
    /* 005b262c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b262e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b262f: ret  */ FN_RET(0x005b2620); r_esp += 4; return;
}

void f_005b2660(void) /* RoyalMatchRoomInterface::vfunc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2660);
    /* 005b2660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2661: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2667: mov eax, 0xb */ r_eax = 0xbu;
    /* 005b266c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b266e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b266f: ret  */ FN_RET(0x005b2660); r_esp += 4; return;
}

void f_005b2670(void) /* RoyalMatchRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2670);
    /* 005b2670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2671: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2677: mov eax, 0x6d0a9c */ r_eax = 0x6d0a9cu;
    /* 005b267c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b267e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b267f: ret  */ FN_RET(0x005b2670); r_esp += 4; return;
}

void f_005b2680(void) /* RoyalMatchRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2680);
    /* 005b2680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2681: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2687: mov eax, 0x38 */ r_eax = 0x38u;
    /* 005b268c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b268e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b268f: ret  */ FN_RET(0x005b2680); r_esp += 4; return;
}

void f_005b2690(void) /* RoyalMatchRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2690);
    /* 005b2690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2691: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2697: mov eax, 0xc */ r_eax = 0xcu;
    /* 005b269c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b269e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b269f: ret  */ FN_RET(0x005b2690); r_esp += 4; return;
}

void f_005b26a0(void) /* RoyalMatchRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b26a0);
    /* 005b26a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b26a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b26a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b26a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b26a9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b26ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b26ae: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5b26b3u); f_0063aae0();
    /* 005b26b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b26b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b26b9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005b26bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b26bf: add ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b26c2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b26c5: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b26c7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b26ca: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005b26cc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b26cf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b26d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b26d5: add ecx, dword ptr [edx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b26d8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b26db: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005b26de: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b26e1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b26e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b26e6: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b26e9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b26ec: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005b26ee: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b26f1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b26f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b26f7: add eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b26fa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b26fd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005b2700: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b2703: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b2705: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2708: add ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b270b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b270e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005b2710: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b2713: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b2716: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2719: add edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b271c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b271f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005b2722: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2724: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005b272a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b272c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b2732: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005b2738: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b273au); call_ind(t); }
    /* 005b273a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b273d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b273f: je 0x5b27bf */ if (fZ) goto L_005b27bf;
L_005b2741:; BB(0x005b2741);
    /* 005b2741: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b2747: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5b274cu); f_005f3bf0();
    /* 005b274c: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b274f: jne 0x5b27bf */ if (!fZ) goto L_005b27bf;
L_005b2751:; BB(0x005b2751);
    /* 005b2751: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005b2754: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2755: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b275c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b275d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b2763: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x5b2768u); f_005e0c40();
    /* 005b2768: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b276b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b276e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b2771: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2773: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b2776: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005b2778: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b277b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b277e: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b2781: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b2784: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005b2787: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b278a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b278c: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b278f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b2792: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005b2794: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b2797: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b279a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b279d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b27a0: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005b27a3: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b27a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b27a8: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b27ab: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b27ae: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005b27b0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b27b3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b27b6: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b27b9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005b27bc: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005b27bf:; BB(0x005b27bf);
    /* 005b27bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005b27c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b27c2: ret 0x10 */ FN_RET(0x005b26a0); r_esp += 20; return;
}

void f_005b27d0(void) /* RoyalMatchRoomInterface::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b27d0);
    /* 005b27d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b27d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b27d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b27d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b27d7: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005b27dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005b27de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b27df: ret  */ FN_RET(0x005b27d0); r_esp += 4; return;
}

void f_005b27e0(void) /* RoyalMatchRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b27e0);
    /* 005b27e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b27e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b27e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b27e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b27e9: cmp dword ptr [ebp + 0xc], 0x3154e8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3154e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b27f0: jne 0x5b28d2 */ if (!fZ) goto L_005b28d2;
L_005b27f6:; BB(0x005b27f6);
    /* 005b27f6: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b27fd: jne 0x5b2815 */ if (!fZ) goto L_005b2815;
L_005b27ff:; BB(0x005b27ff);
    /* 005b27ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2801: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2803: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005b2809: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x5b280eu); f_005dbd00();
    /* 005b280e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b2810: jmp 0x5b28fb */ goto L_005b28fb;
L_005b2815:; BB(0x005b2815);
    /* 005b2815: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b281b: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5b2820u); f_005e2f90();
    /* 005b2820: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b2823: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b2826: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2829: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b282f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b2832: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b2836: ja 0x5b2888 */ if ((!fC&&!fZ)) goto L_005b2888;
L_005b2838:; BB(0x005b2838);
    /* 005b2838: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b283b: jmp dword ptr [edx*4 + 0x5b2904] */ { u32 t = R32((u32)(r_edx*4+0x5b2904u)); switch (t) { case 0x5b2842u: goto L_005b2842; case 0x5b2853u: goto L_005b2853; case 0x5b2865u: goto L_005b2865; case 0x5b2877u: goto L_005b2877; default: UNSUP(0x005b283b, "jump table entry is not a known target"); } }
L_005b2842:; BB(0x005b2842);
    /* 005b2842: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005b2847: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 005b2851: jmp 0x5b28a3 */ goto L_005b28a3;
L_005b2853:; BB(0x005b2853);
    /* 005b2853: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b2859: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 005b2863: jmp 0x5b28a3 */ goto L_005b28a3;
L_005b2865:; BB(0x005b2865);
    /* 005b2865: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005b286b: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 005b2875: jmp 0x5b28a3 */ goto L_005b28a3;
L_005b2877:; BB(0x005b2877);
    /* 005b2877: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005b287c: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
    /* 005b2886: jmp 0x5b28a3 */ goto L_005b28a3;
L_005b2888:; BB(0x005b2888);
    /* 005b2888: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b288a: jne 0x5b28a3 */ if (!fZ) goto L_005b28a3;
L_005b288c:; BB(0x005b288c);
    /* 005b288c: push 0x139 */ { u32 v = 0x139u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2891: push 0x6d0aa8 */ { u32 v = 0x6d0aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2896: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b289b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b28a0u); f_005e9f20();
    /* 005b28a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b28a3:; BB(0x005b28a3);
    /* 005b28a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b28a5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b28a7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005b28ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b28ae: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b28b4: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005b28ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b28bcu); call_ind(t); }
    /* 005b28bc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b28bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b28c1: jne 0x5b28ce */ if (!fZ) goto L_005b28ce;
L_005b28c3:; BB(0x005b28c3);
    /* 005b28c3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b28c9: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x5b28ceu); f_005e3130();
L_005b28ce:; BB(0x005b28ce);
    /* 005b28ce: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b28d0: jmp 0x5b28fb */ goto L_005b28fb;
L_005b28d2:; BB(0x005b28d2);
    /* 005b28d2: cmp dword ptr [ebp + 8], 0x3154e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3154e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b28d9: jne 0x5b28f9 */ if (!fZ) goto L_005b28f9;
L_005b28db:; BB(0x005b28db);
    /* 005b28db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b28dd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b28df: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005b28e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b28e7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b28ed: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 005b28f3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b28f5u); call_ind(t); }
    /* 005b28f5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b28f7: jmp 0x5b28fb */ goto L_005b28fb;
L_005b28f9:; BB(0x005b28f9);
    /* 005b28f9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005b28fb:; BB(0x005b28fb);
    /* 005b28fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005b28fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b28fe: ret 8 */ FN_RET(0x005b27e0); r_esp += 12; return;
}

void f_005b2920(void) /* RoyalMatchRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2920);
    /* 005b2920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2921: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2927: cmp dword ptr [ebp + 8], 0x3154e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3154e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b292e: jne 0x5b2941 */ if (!fZ) goto L_005b2941;
L_005b2930:; BB(0x005b2930);
    /* 005b2930: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2932: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 005b2938: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x5b293du); f_00653bd0();
    /* 005b293d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b293f: jmp 0x5b2943 */ goto L_005b2943;
L_005b2941:; BB(0x005b2941);
    /* 005b2941: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005b2943:; BB(0x005b2943);
    /* 005b2943: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2945: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2946: ret 4 */ FN_RET(0x005b2920); r_esp += 8; return;
}

void f_005b2950(void) /* RoyalMatchRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2950);
    /* 005b2950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2951: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2957: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b2959: mov esp, ebp */ r_esp = r_ebp;
    /* 005b295b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b295c: ret 4 */ FN_RET(0x005b2950); r_esp += 8; return;
}

void f_005b2960(void) /* RoyalMatchRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2960);
    /* 005b2960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2961: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2967: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b2969: mov esp, ebp */ r_esp = r_ebp;
    /* 005b296b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b296c: ret 4 */ FN_RET(0x005b2960); r_esp += 8; return;
}

void f_005b2970(void) /* RoyalMatchRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2970);
    /* 005b2970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2971: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2977: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b297c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b297e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2981: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5b2986u); f_005fb5a0();
    /* 005b2986: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b298b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b298d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2990: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5b2995u); f_005fb5a0();
    /* 005b2995: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b299a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b299c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b299f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5b29a4u); f_005fb5a0();
    /* 005b29a4: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b29a9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b29ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b29ae: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5b29b3u); f_005fb5a0();
    /* 005b29b3: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b29b8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b29ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b29bd: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5b29c2u); f_005fb5a0();
    /* 005b29c2: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b29c7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b29c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b29cc: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5b29d1u); f_005fb5a0();
    /* 005b29d1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b29d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005b29d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b29d6: ret 4 */ FN_RET(0x005b2970); r_esp += 8; return;
}

void f_005b29e0(void) /* RoyalMatchRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b29e0);
    /* 005b29e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b29e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b29e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b29e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b29e9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b29ed: jne 0x5b29f3 */ if (!fZ) goto L_005b29f3;
L_005b29ef:; BB(0x005b29ef);
    /* 005b29ef: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b29f1: jmp 0x5b2a5c */ goto L_005b2a5c;
L_005b29f3:; BB(0x005b29f3);
    /* 005b29f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b29f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b29f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b29fc: mov byte ptr [ecx + 0xd], 0 */ W8((u32)(r_ecx+0xdu), 0x0u);
    /* 005b2a00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a03: mov byte ptr [edx + 9], 2 */ W8((u32)(r_edx+0x9u), 0x2u);
    /* 005b2a07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a0a: mov byte ptr [eax + 0xc], 0x50 */ W8((u32)(r_eax+0xcu), 0x50u);
    /* 005b2a0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a11: mov byte ptr [ecx + 2], 1 */ W8((u32)(r_ecx+0x2u), 0x1u);
    /* 005b2a15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a18: mov byte ptr [edx + 0xb], 0 */ W8((u32)(r_edx+0xbu), 0x0u);
    /* 005b2a1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a1f: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 005b2a23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a26: mov byte ptr [ecx + 0xa], 1 */ W8((u32)(r_ecx+0xau), 0x1u);
    /* 005b2a2a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a2d: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
    /* 005b2a30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a33: mov byte ptr [eax + 1], 0 */ W8((u32)(r_eax+0x1u), 0x0u);
    /* 005b2a37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a3a: mov byte ptr [ecx + 8], 4 */ W8((u32)(r_ecx+0x8u), 0x4u);
    /* 005b2a3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a41: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005b2a45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a48: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 005b2a4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a4f: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 005b2a53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a56: mov byte ptr [edx + 7], 1 */ W8((u32)(r_edx+0x7u), 0x1u);
    /* 005b2a5a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b2a5c:; BB(0x005b2a5c);
    /* 005b2a5c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2a5f: ret 4 */ FN_RET(0x005b29e0); r_esp += 8; return;
}

void f_005b2a70(void) /* RoyalMatchRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2a70);
    /* 005b2a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2a71: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2a73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2a76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b2a79: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2a7d: jne 0x5b2a83 */ if (!fZ) goto L_005b2a83;
L_005b2a7f:; BB(0x005b2a7f);
    /* 005b2a7f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b2a81: jmp 0x5b2aef */ goto L_005b2aef;
L_005b2a83:; BB(0x005b2a83);
    /* 005b2a83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b2a86: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b2a89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a8c: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 005b2a93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2a96: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005b2a9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2aa0: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005b2aa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2aaa: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005b2ab1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2ab4: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 005b2abb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2abe: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005b2ac5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2ac8: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005b2acf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2ad2: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 005b2ad9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2adc: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005b2ae3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2ae6: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 005b2aed: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b2aef:; BB(0x005b2aef);
    /* 005b2aef: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2af1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2af2: ret 4 */ FN_RET(0x005b2a70); r_esp += 8; return;
}

void f_005b2b10(void) /* RoyalMatchRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2b10);
    /* 005b2b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2b13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b15: push 0x6a7e04 */ { u32 v = 0x6a7e04u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b2b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2b24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b2b29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b2b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b2b2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b2b35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b2b38: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b2b42u); f_00686d82();
    /* 005b2b42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2b45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b2b48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b2b4f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2b53: je 0x5b2b62 */ if (fZ) goto L_005b2b62;
L_005b2b55:; BB(0x005b2b55);
    /* 005b2b55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b2b58: call 0x5af880 */ r_esp -= 4; W32(r_esp, 0x5b2b5du); f_005af880();
    /* 005b2b5d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b2b60: jmp 0x5b2b69 */ goto L_005b2b69;
L_005b2b62:; BB(0x005b2b62);
    /* 005b2b62: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005b2b69:; BB(0x005b2b69);
    /* 005b2b69: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b2b6c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b2b6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b2b76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b2b79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b2b7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b2b83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2b84: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2b86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2b87: ret  */ FN_RET(0x005b2b10); r_esp += 4; return;
}

void f_005b2b90(void) /* RoyalMatchRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2b90);
    /* 005b2b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b91: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2b93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2b96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b2b99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b2b9c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b2b9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ba1: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b2ba7: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5b2bacu); f_005de600();
    /* 005b2bac: mov ecx, eax */ r_ecx = r_eax;
    /* 005b2bae: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5b2bb3u); f_0063aae0();
    /* 005b2bb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b2bb6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2bba: je 0x5b2bc2 */ if (fZ) goto L_005b2bc2;
L_005b2bbc:; BB(0x005b2bbc);
    /* 005b2bbc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2bc0: jne 0x5b2bc9 */ if (!fZ) goto L_005b2bc9;
L_005b2bc2:; BB(0x005b2bc2);
    /* 005b2bc2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b2bc4: jmp 0x5b2c71 */ goto L_005b2c71;
L_005b2bc9:; BB(0x005b2bc9);
    /* 005b2bc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2bcc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2bcf: mov al, byte ptr [edx + 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xdu))) & 0xffu);
    /* 005b2bd2: mov byte ptr [ecx + 0xd], al */ W8((u32)(r_ecx+0xdu), (u8)r_eax);
    /* 005b2bd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2bd8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2bdb: mov al, byte ptr [edx + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x9u))) & 0xffu);
    /* 005b2bde: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 005b2be1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2be4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2be7: mov al, byte ptr [edx + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xcu))) & 0xffu);
    /* 005b2bea: mov byte ptr [ecx + 0xc], al */ W8((u32)(r_ecx+0xcu), (u8)r_eax);
    /* 005b2bed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2bf0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2bf3: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 005b2bf6: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005b2bf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2bfc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2bff: mov al, byte ptr [edx + 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xbu))) & 0xffu);
    /* 005b2c02: mov byte ptr [ecx + 0xb], al */ W8((u32)(r_ecx+0xbu), (u8)r_eax);
    /* 005b2c05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c0b: mov al, byte ptr [edx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3u))) & 0xffu);
    /* 005b2c0e: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 005b2c11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c14: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c17: mov al, byte ptr [edx + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xau))) & 0xffu);
    /* 005b2c1a: mov byte ptr [ecx + 0xa], al */ W8((u32)(r_ecx+0xau), (u8)r_eax);
    /* 005b2c1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c20: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c23: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005b2c25: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 005b2c27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c2a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c2d: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 005b2c30: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 005b2c33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c36: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c39: mov al, byte ptr [edx + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x8u))) & 0xffu);
    /* 005b2c3c: mov byte ptr [ecx + 8], al */ W8((u32)(r_ecx+0x8u), (u8)r_eax);
    /* 005b2c3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c45: mov al, byte ptr [edx + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4u))) & 0xffu);
    /* 005b2c48: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 005b2c4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c4e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c51: mov al, byte ptr [edx + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x5u))) & 0xffu);
    /* 005b2c54: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 005b2c57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c5a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c5d: mov al, byte ptr [edx + 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x6u))) & 0xffu);
    /* 005b2c60: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 005b2c63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2c66: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b2c69: mov al, byte ptr [edx + 7] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x7u))) & 0xffu);
    /* 005b2c6c: mov byte ptr [ecx + 7], al */ W8((u32)(r_ecx+0x7u), (u8)r_eax);
    /* 005b2c6f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b2c71:; BB(0x005b2c71);
    /* 005b2c71: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2c73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2c74: ret 4 */ FN_RET(0x005b2b90); r_esp += 8; return;
}

void f_005b2c90(void) /* RoyalMatchRoomInterface::vfunc42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2c90);
    /* 005b2c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c91: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2c97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2c9c: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5b2ca1u); f_005fb3a0();
    /* 005b2ca1: mov ecx, eax */ r_ecx = r_eax;
    /* 005b2ca3: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x5b2ca8u); f_00606570();
    /* 005b2ca8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2caa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2cad: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005b2cb0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2cb3: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005b2cb9: mov dword ptr [edx + 0x4ef4], ecx */ W32((u32)(r_edx+0x4ef4u), r_ecx);
    /* 005b2cbf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b2cc1: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2cc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2cc4: ret 4 */ FN_RET(0x005b2c90); r_esp += 8; return;
}

void f_005b2cd0(void) /* RoyalMatchRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2cd0);
    /* 005b2cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2cd3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2cd9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b2cde: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b2ce0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b2ce3: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005b2ce9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ceb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b2cee: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5b2cf3u); f_0063aae0();
    /* 005b2cf3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005b2cf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2cf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2cfa: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b2cffu); f_0064c8a0();
    /* 005b2cff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2d02: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005b2d05: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005b2d08: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005b2d0b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005b2d0e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005b2d11: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005b2d14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d18: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b2d1du); f_0064c8a0();
    /* 005b2d1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2d20: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005b2d23: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005b2d26: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b2d29: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005b2d2c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b2d2f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005b2d32: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b2d35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d36: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b2d39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d3a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b2d40: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x5b2d45u); f_005e0690();
    /* 005b2d45: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b2d4b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5b2d50u); f_005f3bf0();
    /* 005b2d50: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2d53: jne 0x5b2d6c */ if (!fZ) goto L_005b2d6c;
L_005b2d55:; BB(0x005b2d55);
    /* 005b2d55: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005b2d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d59: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 005b2d5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d5d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b2d60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d61: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b2d67: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x5b2d6cu); f_005e0c40();
L_005b2d6c:; BB(0x005b2d6c);
    /* 005b2d6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d72: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005b2d75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d76: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b2d79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d7a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b2d7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d7e: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 005b2d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d82: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b2d85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d86: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b2d89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d8a: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 005b2d8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d8e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b2d91: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005b2d94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d95: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005b2d98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d99: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005b2d9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d9d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b2da0: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2da3: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b2da8u); f_0064c5c0();
    /* 005b2da8: mov ecx, eax */ r_ecx = r_eax;
    /* 005b2daa: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b2dafu); f_0064c5c0();
    /* 005b2daf: mov ecx, eax */ r_ecx = r_eax;
    /* 005b2db1: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b2db6u); f_0064c5c0();
    /* 005b2db6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b2db9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2dba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b2dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2dbd: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5b2dc2u); f_0064c8d0();
    /* 005b2dc2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2dc5: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2dc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2dc9: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2dce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2dd3u); f_00630f40();
    /* 005b2dd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2dd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2dd9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2ddc: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5b2de1u); f_00654390();
    /* 005b2de1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2de3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2de5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2de7: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2dea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2deb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b2dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2def: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b2df2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2df3: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 005b2df6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2df7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b2dfa: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2dfd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b2e02u); f_0064c5c0();
    /* 005b2e02: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b2e05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b2e08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e09: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5b2e0eu); f_0064c8d0();
    /* 005b2e0e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2e11: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005b2e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e15: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e1a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2e1fu); f_00630f40();
    /* 005b2e1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e25: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2e28: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5b2e2du); f_00654390();
    /* 005b2e2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e33: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2e36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e37: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b2e3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e3b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b2e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e3f: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 005b2e45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e46: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b2e49: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2e4c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b2e51u); f_0064c5c0();
    /* 005b2e51: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b2e54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e55: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b2e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e58: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5b2e5du); f_0064c8d0();
    /* 005b2e5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2e60: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e64: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2e6eu); f_00630f40();
    /* 005b2e6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e72: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2e77: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5b2e7cu); f_00654390();
    /* 005b2e7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e82: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2e85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e86: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b2e89: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005b2e8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e8d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005b2e90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e91: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5b2e96u); f_0064c8d0();
    /* 005b2e96: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2e99: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005b2e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e9d: push 0x6d0b28 */ { u32 v = 0x6d0b28u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ea2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2ea7u); f_00630f40();
    /* 005b2ea7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2eab: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ead: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2eb0: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5b2eb5u); f_00654390();
    /* 005b2eb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2eb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2eb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ebb: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2ebe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ebf: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b2ec2: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005b2ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ec6: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005b2ec9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2eca: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5b2ecfu); f_0064c8d0();
    /* 005b2ecf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2ed2: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2ed5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ed6: push 0x6d0afc */ { u32 v = 0x6d0afcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2edb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2ee0u); f_00630f40();
    /* 005b2ee0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2ee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ee4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ee6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2ee9: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5b2eeeu); f_00654390();
    /* 005b2eee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ef0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ef2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ef4: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005b2ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ef8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b2efb: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005b2efe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2eff: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 005b2f02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f03: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5b2f08u); f_0064c8d0();
    /* 005b2f08: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2f0b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005b2f0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f0f: push 0x6d0ad0 */ { u32 v = 0x6d0ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f14: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2f19u); f_00630f40();
    /* 005b2f19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f1d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2f22: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5b2f27u); f_00654390();
    /* 005b2f27: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b2f29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2f2c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2f2e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5b2f33u); f_00686d72();
    /* 005b2f33: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2f35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2f36: ret 8 */ FN_RET(0x005b2cd0); r_esp += 12; return;
}

void f_005b2f40(void) /* RoyalMatchRoomInterface::vfunc41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2f40);
    /* 005b2f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f41: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2f43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2f46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b2f49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b2f50: jmp 0x5b2f5b */ goto L_005b2f5b;
L_005b2f52:; BB(0x005b2f52);
    /* 005b2f52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2f55: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b2f58: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b2f5b:; BB(0x005b2f5b);
    /* 005b2f5b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b2f5f: jge 0x5b2fc6 */ if ((fS==fO)) goto L_005b2fc6;
L_005b2f61:; BB(0x005b2f61);
    /* 005b2f61: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2f65: je 0x5b2f79 */ if (fZ) goto L_005b2f79;
L_005b2f67:; BB(0x005b2f67);
    /* 005b2f67: push 0x6b4ae0 */ { u32 v = 0x6b4ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f6c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2f71u); f_00630f40();
    /* 005b2f71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2f74: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b2f77: jmp 0x5b2f89 */ goto L_005b2f89;
L_005b2f79:; BB(0x005b2f79);
    /* 005b2f79: push 0x6b4acc */ { u32 v = 0x6b4accu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f7e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2f83u); f_00630f40();
    /* 005b2f83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2f86: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b2f89:; BB(0x005b2f89);
    /* 005b2f89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f8b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f8d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f8f: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f91: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f93: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b2f98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2f9e: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b2fa1: add edx, 0xa7 */ {  u32 a = r_edx; u32 b = 0xa7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b2fa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fa8: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2faa: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005b2faf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fb1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b2fb4: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b2fb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fbc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2fbf: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5b2fc4u); f_005f9ff0();
    /* 005b2fc4: jmp 0x5b2f52 */ goto L_005b2f52;
L_005b2fc6:; BB(0x005b2fc6);
    /* 005b2fc6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2fcd: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5b2fd2u); f_005fb3a0();
    /* 005b2fd2: mov ecx, eax */ r_ecx = r_eax;
    /* 005b2fd4: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x5b2fd9u); f_006065d0();
    /* 005b2fd9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b2fdb: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2fdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2fde: ret 4 */ FN_RET(0x005b2f40); r_esp += 8; return;
}

