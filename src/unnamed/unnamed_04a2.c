#include "protos.h"

void f_004a2010(void) /* sub_4A2010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2010);
    /* 004a2010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2011: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a2017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a201a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a201d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a2020: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2023: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a2025: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2027: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 004a202a: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 004a202c: mov esp, ebp */ r_esp = r_ebp;
    /* 004a202e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a202f: ret 4 */ FN_RET(0x004a2010); r_esp += 8; return;
}

void f_004a2040(void) /* sub_4A2040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2040);
    /* 004a2040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2041: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a2047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a204a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a204d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a2050: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2053: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a2055: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2057: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 004a205a: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 004a205c: mov esp, ebp */ r_esp = r_ebp;
    /* 004a205e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a205f: ret 4 */ FN_RET(0x004a2040); r_esp += 8; return;
}

void f_004a20a0(void) /* sub_4A20A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a20a0);
    /* 004a20a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a20a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a20a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a20a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a20a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a20aa: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a20ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a20b0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a20b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a20b5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a20b7: setle dl */ r_edx = (r_edx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 004a20ba: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 004a20bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004a20be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a20bf: ret 4 */ FN_RET(0x004a20a0); r_esp += 8; return;
}

void f_004a20d0(void) /* sub_4A20D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a20d0);
    /* 004a20d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a20d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a20d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a20d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a20d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a20da: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 004a20dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a20e0: mov word ptr [ecx + 2], 0 */ W16((u32)(r_ecx+0x2u), 0x0u);
    /* 004a20e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a20e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004a20eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a20ec: ret  */ FN_RET(0x004a20d0); r_esp += 4; return;
}

void f_004a2100(void) /* sub_4A2100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2100);
    /* 004a2100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2101: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a2107: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a210a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a210d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004a2110: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2113: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2115: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a2118: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 004a211a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004a211d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a2120: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004a2123: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004a2126: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2129: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004a212c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a212e: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004a2131: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2134: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004a2137: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2139: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004a213c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a213f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2141: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a2144: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 004a2148: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a214b: mov esp, ebp */ r_esp = r_ebp;
    /* 004a214d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a214e: ret 0x18 */ FN_RET(0x004a2100); r_esp += 28; return;
}

void f_004a2550(void) /* sub_4A2550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2550);
    /* 004a2550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2551: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a2557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a255a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a255b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a255e: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4a2563u); f_004a2440();
    /* 004a2563: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2566: ret 4 */ FN_RET(0x004a2550); r_esp += 8; return;
}

void f_004a2570(void) /* sub_4A2570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2570);
    /* 004a2570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2571: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a2577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a257a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a257b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a257e: call 0x4a24d0 */ r_esp -= 4; W32(r_esp, 0x4a2583u); f_004a24d0();
    /* 004a2583: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2585: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2586: ret 4 */ FN_RET(0x004a2570); r_esp += 8; return;
}

void f_004a2640(void) /* sub_4A2640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2640);
    /* 004a2640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2641: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2643: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2645: push 0x6a1138 */ { u32 v = 0x6a1138u; r_esp -= 4; W32(r_esp, v); }
    /* 004a264a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a2650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2651: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2654: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2655: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004a265a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a265c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a265d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004a2660: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004a2666: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a266c: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a2671u); f_0047e420();
    /* 004a2671: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004a2674: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2677: movsx ecx, word ptr [eax*2 + 0x791d80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791d80u));
    /* 004a267f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2681: je 0x4a2859 */ if (fZ) goto L_004a2859;
L_004a2687:; BB(0x004a2687);
    /* 004a2687: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a268d: call 0x4cc4f0 */ r_esp -= 4; W32(r_esp, 0x4a2692u); f_004cc4f0();
    /* 004a2692: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a2696: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a269a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a269b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a26a0u); f_0062fbf0();
    /* 004a26a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a26a3: mov esi, eax */ r_esi = r_eax;
    /* 004a26a5: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a26a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a26aa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a26afu); f_0062fbf0();
    /* 004a26af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a26b2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a26b4: mov eax, esi */ r_eax = r_esi;
    /* 004a26b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a26b7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a26b9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004a26bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a26be: mov word ptr [ecx*2 + 0x791798], ax */ W16((u32)(r_ecx*2+0x791798u), (u16)r_eax);
    /* 004a26c6: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 004a26c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a26ca: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a26d0: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a26d5u); f_004c7c40();
    /* 004a26d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a26dc: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a26df: call 0x48dc80 */ r_esp -= 4; W32(r_esp, 0x4a26e4u); f_0048dc80();
    /* 004a26e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a26e7: mov word ptr [ecx*2 + 0x7919c8], ax */ W16((u32)(r_ecx*2+0x7919c8u), (u16)r_eax);
    /* 004a26ef: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a26f2: mov word ptr [edx*2 + 0x791d80], 0 */ W16((u32)(r_edx*2+0x791d80u), 0x0u);
    /* 004a26fc: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004a2700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2701: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2704: mov dx, word ptr [ecx*2 + 0x7919c8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx*2+0x7919c8u))) & 0xffffu);
    /* 004a270c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a270d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2713: call 0x4cc570 */ r_esp -= 4; W32(r_esp, 0x4a2718u); f_004cc570();
    /* 004a2718: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 004a271e: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x4a2723u); f_00686cc0();
    /* 004a2723: mov esi, eax */ r_esi = r_eax;
    /* 004a2725: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a272b: call 0x4c6db0 */ r_esp -= 4; W32(r_esp, 0x4a2730u); f_004c6db0();
    /* 004a2730: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 004a2735: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2737: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2738: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a273du); f_0062fbf0();
    /* 004a273d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2740: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2742: jle 0x4a283d */ if ((fZ||fS!=fO)) goto L_004a283d;
L_004a2748:; BB(0x004a2748);
    /* 004a2748: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004a274e: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2754: call 0x4cbd10 */ r_esp -= 4; W32(r_esp, 0x4a2759u); f_004cbd10();
    /* 004a2759: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a275c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a275f: movsx ecx, word ptr [eax*2 + 0x7919c8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x7919c8u));
    /* 004a2767: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a2769: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a276c: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a276f: lea ecx, [edx + eax - 1] */ r_ecx = (u32)(r_edx+r_eax+0xffffffffu);
    /* 004a2773: mov edx, 0xa */ r_edx = 0xau;
    /* 004a2778: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a277b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a277d: mov word ptr [ebp - 0x20], cx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ecx);
    /* 004a2781: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a2787: jmp 0x4a2795 */ goto L_004a2795;
L_004a2789:; BB(0x004a2789);
    /* 004a2789: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004a278d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a2791: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
L_004a2795:; BB(0x004a2795);
    /* 004a2795: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a2799: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004a279d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a279f: jge 0x4a27e6 */ if ((fS==fO)) goto L_004a27e6;
L_004a27a1:; BB(0x004a27a1);
    /* 004a27a1: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004a27a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a27a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a27a9: mov dx, word ptr [ecx*2 + 0x7919c8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx*2+0x7919c8u))) & 0xffffu);
    /* 004a27b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a27b2: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a27b8: call 0x4cc570 */ r_esp -= 4; W32(r_esp, 0x4a27bdu); f_004cc570();
    /* 004a27bd: fmul qword ptr [0x6be518] */ ST(0) = ST(0) * R_F64((u32)(0x6be518u));
    /* 004a27c3: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x4a27c8u); f_00686cc0();
    /* 004a27c8: mov esi, eax */ r_esi = r_eax;
    /* 004a27ca: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a27cc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a27d1u); f_0062fbf0();
    /* 004a27d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a27d4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a27d6: jle 0x4a27e4 */ if ((fZ||fS!=fO)) goto L_004a27e4;
L_004a27d8:; BB(0x004a27d8);
    /* 004a27d8: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004a27dc: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a27e0: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_004a27e4:; BB(0x004a27e4);
    /* 004a27e4: jmp 0x4a2789 */ goto L_004a2789;
L_004a27e6:; BB(0x004a27e6);
    /* 004a27e6: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a27ea: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a27ed: jl 0x4a27fe */ if ((fS!=fO)) goto L_004a27fe;
L_004a27ef:; BB(0x004a27ef);
    /* 004a27ef: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a27f2: mov word ptr [edx*2 + 0x791768], 5 */ W16((u32)(r_edx*2+0x791768u), 0x5u);
    /* 004a27fc: jmp 0x4a283b */ goto L_004a283b;
L_004a27fe:; BB(0x004a27fe);
    /* 004a27fe: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a2802: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2805: jl 0x4a2816 */ if ((fS!=fO)) goto L_004a2816;
L_004a2807:; BB(0x004a2807);
    /* 004a2807: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a280a: mov word ptr [ecx*2 + 0x791768], 4 */ W16((u32)(r_ecx*2+0x791768u), 0x4u);
    /* 004a2814: jmp 0x4a283b */ goto L_004a283b;
L_004a2816:; BB(0x004a2816);
    /* 004a2816: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a281a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a281d: jl 0x4a282e */ if ((fS!=fO)) goto L_004a282e;
L_004a281f:; BB(0x004a281f);
    /* 004a281f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2822: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004a282c: jmp 0x4a283b */ goto L_004a283b;
L_004a282e:; BB(0x004a282e);
    /* 004a282e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2831: mov word ptr [ecx*2 + 0x791768], 2 */ W16((u32)(r_ecx*2+0x791768u), 0x2u);
L_004a283b:; BB(0x004a283b);
    /* 004a283b: jmp 0x4a284a */ goto L_004a284a;
L_004a283d:; BB(0x004a283d);
    /* 004a283d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2840: mov word ptr [edx*2 + 0x791768], 0 */ W16((u32)(r_edx*2+0x791768u), 0x0u);
L_004a284a:; BB(0x004a284a);
    /* 004a284a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a2851: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a2854: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4a2859u); f_00484470();
L_004a2859:; BB(0x004a2859);
    /* 004a2859: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a285c: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a2864: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2866: jne 0x4a28a7 */ if (!fZ) goto L_004a28a7;
L_004a2868:; BB(0x004a2868);
    /* 004a2868: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a286e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2871: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a2876u); f_004f6640();
    /* 004a2876: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a2879: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a287b: je 0x4a289b */ if (fZ) goto L_004a289b;
L_004a287d:; BB(0x004a287d);
    /* 004a287d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2883: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4a2888u); f_0047d6b0();
    /* 004a2888: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a288b: jne 0x4a288f */ if (!fZ) goto L_004a288f;
L_004a288d:; BB(0x004a288d);
    /* 004a288d: jmp 0x4a2899 */ goto L_004a2899;
L_004a288f:; BB(0x004a288f);
    /* 004a288f: mov eax, 1 */ r_eax = 0x1u;
    /* 004a2894: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2899:; BB(0x004a2899);
    /* 004a2899: jmp 0x4a28a2 */ goto L_004a28a2;
L_004a289b:; BB(0x004a289b);
    /* 004a289b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a289d: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a28a2:; BB(0x004a28a2);
    /* 004a28a2: jmp 0x4a2ae8 */ goto L_004a2ae8;
L_004a28a7:; BB(0x004a28a7);
    /* 004a28a7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a28aa: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a28b2: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a28b5: jne 0x4a2969 */ if (!fZ) goto L_004a2969;
L_004a28bb:; BB(0x004a28bb);
    /* 004a28bb: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a28bd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a28c2u); f_0062fbf0();
    /* 004a28c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a28c5: mov esi, eax */ r_esi = r_eax;
    /* 004a28c7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a28c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a28cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a28cd: call 0x4a2c60 */ r_esp -= 4; W32(r_esp, 0x4a28d2u); f_004a2c60();
    /* 004a28d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a28d5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a28d8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a28da: jge 0x4a2964 */ if ((fS==fO)) goto L_004a2964;
L_004a28e0:; BB(0x004a28e0);
    /* 004a28e0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a28e2: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a28e8: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a28edu); f_004c79d0();
    /* 004a28ed: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a28ef: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a28f4u); f_0062fbf0();
    /* 004a28f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a28f7: mov esi, eax */ r_esi = r_eax;
    /* 004a28f9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a28ff: call 0x4cc3b0 */ r_esp -= 4; W32(r_esp, 0x4a2904u); f_004cc3b0();
    /* 004a2904: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2907: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2909: jge 0x4a2918 */ if ((fS==fO)) goto L_004a2918;
L_004a290b:; BB(0x004a290b);
    /* 004a290b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a290e: mov word ptr [edx*2 + 0x791768], 4 */ W16((u32)(r_edx*2+0x791768u), 0x4u);
L_004a2918:; BB(0x004a2918);
    /* 004a2918: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a291e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2921: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a2926u); f_004f6640();
    /* 004a2926: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a2929: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a292b: je 0x4a2939 */ if (fZ) goto L_004a2939;
L_004a292d:; BB(0x004a292d);
    /* 004a292d: mov eax, 2 */ r_eax = 0x2u;
    /* 004a2932: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2939:; BB(0x004a2939);
    /* 004a2939: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a293f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2942: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a2947u); f_004f66e0();
    /* 004a2947: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a294a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a294c: je 0x4a295a */ if (fZ) goto L_004a295a;
L_004a294e:; BB(0x004a294e);
    /* 004a294e: mov eax, 4 */ r_eax = 0x4u;
    /* 004a2953: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a295a:; BB(0x004a295a);
    /* 004a295a: mov eax, 3 */ r_eax = 0x3u;
    /* 004a295f: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2964:; BB(0x004a2964);
    /* 004a2964: jmp 0x4a2ae8 */ goto L_004a2ae8;
L_004a2969:; BB(0x004a2969);
    /* 004a2969: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a296c: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a2974: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2977: jne 0x4a2a2b */ if (!fZ) goto L_004a2a2b;
L_004a297d:; BB(0x004a297d);
    /* 004a297d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a297f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2984u); f_0062fbf0();
    /* 004a2984: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2987: mov esi, eax */ r_esi = r_eax;
    /* 004a2989: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a298b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a298e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a298f: call 0x4a2c60 */ r_esp -= 4; W32(r_esp, 0x4a2994u); f_004a2c60();
    /* 004a2994: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2997: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a299a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a299c: jge 0x4a2a26 */ if ((fS==fO)) goto L_004a2a26;
L_004a29a2:; BB(0x004a29a2);
    /* 004a29a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a29a4: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a29aa: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a29afu); f_004c79d0();
    /* 004a29af: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a29b1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a29b6u); f_0062fbf0();
    /* 004a29b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a29b9: mov esi, eax */ r_esi = r_eax;
    /* 004a29bb: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a29c1: call 0x4cc3b0 */ r_esp -= 4; W32(r_esp, 0x4a29c6u); f_004cc3b0();
    /* 004a29c6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a29c9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a29cb: jge 0x4a29da */ if ((fS==fO)) goto L_004a29da;
L_004a29cd:; BB(0x004a29cd);
    /* 004a29cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a29d0: mov word ptr [ecx*2 + 0x791768], 3 */ W16((u32)(r_ecx*2+0x791768u), 0x3u);
L_004a29da:; BB(0x004a29da);
    /* 004a29da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a29e0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a29e3: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a29e8u); f_004f6640();
    /* 004a29e8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a29eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a29ed: je 0x4a29fb */ if (fZ) goto L_004a29fb;
L_004a29ef:; BB(0x004a29ef);
    /* 004a29ef: mov eax, 2 */ r_eax = 0x2u;
    /* 004a29f4: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a29fb:; BB(0x004a29fb);
    /* 004a29fb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2a01: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2a04: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a2a09u); f_004f66e0();
    /* 004a2a09: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a2a0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2a0e: je 0x4a2a1c */ if (fZ) goto L_004a2a1c;
L_004a2a10:; BB(0x004a2a10);
    /* 004a2a10: mov eax, 4 */ r_eax = 0x4u;
    /* 004a2a15: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2a1c:; BB(0x004a2a1c);
    /* 004a2a1c: mov eax, 3 */ r_eax = 0x3u;
    /* 004a2a21: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2a26:; BB(0x004a2a26);
    /* 004a2a26: jmp 0x4a2ae8 */ goto L_004a2ae8;
L_004a2a2b:; BB(0x004a2a2b);
    /* 004a2a2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2a2e: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a2a36: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2a39: jne 0x4a2ae8 */ if (!fZ) goto L_004a2ae8;
L_004a2a3f:; BB(0x004a2a3f);
    /* 004a2a3f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2a41: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2a46u); f_0062fbf0();
    /* 004a2a46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2a49: mov esi, eax */ r_esi = r_eax;
    /* 004a2a4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2a4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a2a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2a51: call 0x4a2c60 */ r_esp -= 4; W32(r_esp, 0x4a2a56u); f_004a2c60();
    /* 004a2a56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2a59: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2a5c: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2a5e: jge 0x4a2ae8 */ if ((fS==fO)) goto L_004a2ae8;
L_004a2a64:; BB(0x004a2a64);
    /* 004a2a64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2a66: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2a6c: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a2a71u); f_004c79d0();
    /* 004a2a71: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2a73: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2a78u); f_0062fbf0();
    /* 004a2a78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2a7b: mov esi, eax */ r_esi = r_eax;
    /* 004a2a7d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2a83: call 0x4cc3b0 */ r_esp -= 4; W32(r_esp, 0x4a2a88u); f_004cc3b0();
    /* 004a2a88: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2a8b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2a8d: jge 0x4a2a9c */ if ((fS==fO)) goto L_004a2a9c;
L_004a2a8f:; BB(0x004a2a8f);
    /* 004a2a8f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2a92: mov word ptr [eax*2 + 0x791768], 2 */ W16((u32)(r_eax*2+0x791768u), 0x2u);
L_004a2a9c:; BB(0x004a2a9c);
    /* 004a2a9c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2aa2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2aa5: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a2aaau); f_004f6640();
    /* 004a2aaa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a2aad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2aaf: je 0x4a2abd */ if (fZ) goto L_004a2abd;
L_004a2ab1:; BB(0x004a2ab1);
    /* 004a2ab1: mov eax, 2 */ r_eax = 0x2u;
    /* 004a2ab6: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2abd:; BB(0x004a2abd);
    /* 004a2abd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2ac3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2ac6: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a2acbu); f_004f66e0();
    /* 004a2acb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a2ace: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2ad0: je 0x4a2ade */ if (fZ) goto L_004a2ade;
L_004a2ad2:; BB(0x004a2ad2);
    /* 004a2ad2: mov eax, 4 */ r_eax = 0x4u;
    /* 004a2ad7: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2ade:; BB(0x004a2ade);
    /* 004a2ade: mov eax, 3 */ r_eax = 0x3u;
    /* 004a2ae3: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2ae8:; BB(0x004a2ae8);
    /* 004a2ae8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2aee: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2af1: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a2af6u); f_004f6640();
    /* 004a2af6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a2af9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2afb: je 0x4a2c49 */ if (fZ) goto L_004a2c49;
L_004a2b01:; BB(0x004a2b01);
    /* 004a2b01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2b07: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4a2b0cu); f_0047d6b0();
    /* 004a2b0c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2b0f: jne 0x4a2c40 */ if (!fZ) goto L_004a2c40;
L_004a2b15:; BB(0x004a2b15);
    /* 004a2b15: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004a2b1b: mov word ptr [ebp - 0x34], 0 */ W16((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004a2b21: jmp 0x4a2b2f */ goto L_004a2b2f;
L_004a2b23:; BB(0x004a2b23);
    /* 004a2b23: mov cx, word ptr [ebp - 0x34] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffccu))) & 0xffffu);
    /* 004a2b27: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a2b2b: mov word ptr [ebp - 0x34], cx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_ecx);
L_004a2b2f:; BB(0x004a2b2f);
    /* 004a2b2f: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a2b33: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2b39: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a2b3eu); f_0047f950();
    /* 004a2b3e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2b40: jge 0x4a2bda */ if ((fS==fO)) goto L_004a2bda;
L_004a2b46:; BB(0x004a2b46);
    /* 004a2b46: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a2b4a: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2b4d: jne 0x4a2b51 */ if (!fZ) goto L_004a2b51;
L_004a2b4f:; BB(0x004a2b4f);
    /* 004a2b4f: jmp 0x4a2b23 */ goto L_004a2b23;
L_004a2b51:; BB(0x004a2b51);
    /* 004a2b51: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a2b55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b56: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2b5c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a2b61u); f_0047e390();
    /* 004a2b61: mov ecx, eax */ r_ecx = r_eax;
    /* 004a2b63: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a2b68u); f_004c7010();
    /* 004a2b68: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2b6b: jne 0x4a2bd5 */ if (!fZ) goto L_004a2bd5;
L_004a2b6d:; BB(0x004a2b6d);
    /* 004a2b6d: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a2b71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b72: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2b78: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a2b7du); f_0047e390();
    /* 004a2b7d: mov ecx, eax */ r_ecx = r_eax;
    /* 004a2b7f: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a2b84u); f_004c7050();
    /* 004a2b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2b8b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2b8e: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4a2b93u); f_004f69e0();
    /* 004a2b93: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2b96: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a2b9a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a2b9c: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 004a2ba0: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a2ba4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2ba5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2bab: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a2bb0u); f_0047e390();
    /* 004a2bb0: mov ecx, eax */ r_ecx = r_eax;
    /* 004a2bb2: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a2bb7u); f_004c7050();
    /* 004a2bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2bb8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2bbe: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2bc1: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x4a2bc6u); f_004f6880();
    /* 004a2bc6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2bc9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a2bcb: jle 0x4a2bd5 */ if ((fZ||fS!=fO)) goto L_004a2bd5;
L_004a2bcd:; BB(0x004a2bcd);
    /* 004a2bcd: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004a2bd3: jmp 0x4a2bda */ goto L_004a2bda;
L_004a2bd5:; BB(0x004a2bd5);
    /* 004a2bd5: jmp 0x4a2b23 */ goto L_004a2b23;
L_004a2bda:; BB(0x004a2bda);
    /* 004a2bda: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2be0: call 0x4cc3f0 */ r_esp -= 4; W32(r_esp, 0x4a2be5u); f_004cc3f0();
    /* 004a2be5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2be8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a2beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2bec: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2bf1u); f_0062fbf0();
    /* 004a2bf1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2bf4: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 004a2bf8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2bfb: movsx edx, word ptr [ecx*2 + 0x791798] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791798u));
    /* 004a2c03: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a2c07: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a2c0b: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a2c0e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a2c10: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2c13: jle 0x4a2c37 */ if ((fZ||fS!=fO)) goto L_004a2c37;
L_004a2c15:; BB(0x004a2c15);
    /* 004a2c15: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2c17: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2c1cu); f_0062fbf0();
    /* 004a2c1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2c1f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a2c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2c23: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2c29: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a2c2eu); f_004c79d0();
    /* 004a2c2e: mov eax, 2 */ r_eax = 0x2u;
    /* 004a2c33: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2c37:; BB(0x004a2c37);
    /* 004a2c37: mov eax, 1 */ r_eax = 0x1u;
    /* 004a2c3c: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2c40:; BB(0x004a2c40);
    /* 004a2c40: mov eax, 1 */ r_eax = 0x1u;
    /* 004a2c45: jmp 0x4a2c4e */ goto L_004a2c4e;
L_004a2c49:; BB(0x004a2c49);
    /* 004a2c49: mov eax, 3 */ r_eax = 0x3u;
L_004a2c4e:; BB(0x004a2c4e);
    /* 004a2c4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a2c51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a2c58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a2c59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a2c5a: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2c5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2c5d: ret  */ FN_RET(0x004a2640); r_esp += 4; return;
}

void f_004a2c60(void) /* sub_4A2C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2c60);
    /* 004a2c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2c61: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2c64: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004a2c68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2c69: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2c6f: call 0x4cc1a0 */ r_esp -= 4; W32(r_esp, 0x4a2c74u); f_004cc1a0();
    /* 004a2c74: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004a2c78: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2c7c: jne 0x4a2cad */ if (!fZ) goto L_004a2cad;
L_004a2c7e:; BB(0x004a2c7e);
    /* 004a2c7e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2c84: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2c87: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a2c8cu); f_004f6640();
    /* 004a2c8c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a2c8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2c91: je 0x4a2cad */ if (fZ) goto L_004a2cad;
L_004a2c93:; BB(0x004a2c93);
    /* 004a2c93: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a2c97: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a2c9b: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004a2ca0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a2ca2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a2ca3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a2ca5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004a2ca7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2ca9: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004a2cad:; BB(0x004a2cad);
    /* 004a2cad: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004a2cb1: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2cb4: ret  */ FN_RET(0x004a2c60); r_esp += 4; return;
}

void f_004a2cc0(void) /* sub_4A2CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2cc0);
    /* 004a2cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2cc5: push 0x6a115b */ { u32 v = 0x6a115bu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a2cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2cd1: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2cd7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2cd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2cd9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004a2cde: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2ce1: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004a2ce4: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004a2cea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2cf0: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a2cf5u); f_0047e420();
    /* 004a2cf5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a2cf8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004a2cff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2d02: movsx ecx, word ptr [eax*2 + 0x791d80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791d80u));
    /* 004a2d0a: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2d0d: je 0x4a312c */ if (fZ) goto L_004a312c;
L_004a2d13:; BB(0x004a2d13);
    /* 004a2d13: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004a2d16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2d17: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2d1d: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a2d22u); f_004c7c40();
    /* 004a2d22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a2d29: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2d2d: jge 0x4a2e5b */ if ((fS==fO)) goto L_004a2e5b;
L_004a2d33:; BB(0x004a2d33);
    /* 004a2d33: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2d36: lea ecx, [eax*4 + 0x791828] */ r_ecx = (u32)(r_eax*4+0x791828u);
    /* 004a2d3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2d3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2d41: lea eax, [edx*4 + 0x791440] */ r_eax = (u32)(r_edx*4+0x791440u);
    /* 004a2d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2d49: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2d4c: lea edx, [ecx*4 + 0x791d00] */ r_edx = (u32)(r_ecx*4+0x791d00u);
    /* 004a2d53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2d54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2d57: lea ecx, [eax*4 + 0x791a98] */ r_ecx = (u32)(r_eax*4+0x791a98u);
    /* 004a2d5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2d5f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2d62: mov edx, esp */ r_edx = r_esp;
    /* 004a2d64: mov dword ptr [ebp - 0x58], esp */ W32((u32)(r_ebp+0xffffffa8u), r_esp);
    /* 004a2d67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2d68: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004a2d6d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004a2d70: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a2d75u); f_004c7c40();
    /* 004a2d75: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004a2d78: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004a2d7b: call 0x48ea10 */ r_esp -= 4; W32(r_esp, 0x4a2d80u); f_0048ea10();
    /* 004a2d80: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004a2d86: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004a2d8c: jmp 0x4a2d9a */ goto L_004a2d9a;
L_004a2d8e:; BB(0x004a2d8e);
    /* 004a2d8e: mov cx, word ptr [ebp - 0x2c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 004a2d92: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a2d96: mov word ptr [ebp - 0x2c], cx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_ecx);
L_004a2d9a:; BB(0x004a2d9a);
    /* 004a2d9a: movsx esi, word ptr [ebp - 0x2c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a2d9e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2da4: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a2da9u); f_0047f950();
    /* 004a2da9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2dab: jge 0x4a2dfe */ if ((fS==fO)) goto L_004a2dfe;
L_004a2dad:; BB(0x004a2dad);
    /* 004a2dad: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a2db1: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2db4: jne 0x4a2db8 */ if (!fZ) goto L_004a2db8;
L_004a2db6:; BB(0x004a2db6);
    /* 004a2db6: jmp 0x4a2d8e */ goto L_004a2d8e;
L_004a2db8:; BB(0x004a2db8);
    /* 004a2db8: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a2dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2dbd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2dc3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a2dc8u); f_0047e390();
    /* 004a2dc8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004a2dcb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2dce: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a2dd3u); f_004c7010();
    /* 004a2dd3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2dd6: jne 0x4a2dfc */ if (!fZ) goto L_004a2dfc;
L_004a2dd8:; BB(0x004a2dd8);
    /* 004a2dd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a2ddb: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a2de0u); f_004c7050();
    /* 004a2de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2de1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2de7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2dea: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x4a2defu); f_004f6a90();
    /* 004a2def: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2df2: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a2df6: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a2df8: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
L_004a2dfc:; BB(0x004a2dfc);
    /* 004a2dfc: jmp 0x4a2d8e */ goto L_004a2d8e;
L_004a2dfe:; BB(0x004a2dfe);
    /* 004a2dfe: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2e04: call 0x4cc4f0 */ r_esp -= 4; W32(r_esp, 0x4a2e09u); f_004cc4f0();
    /* 004a2e09: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004a2e0d: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a2e11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e12: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2e17u); f_0062fbf0();
    /* 004a2e17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2e1a: mov esi, eax */ r_esi = r_eax;
    /* 004a2e1c: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a2e20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e21: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2e26u); f_0062fbf0();
    /* 004a2e26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2e29: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a2e2b: movsx edi, word ptr [ebp - 0x24] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a2e2f: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a2e35: call 0x4cc4b0 */ r_esp -= 4; W32(r_esp, 0x4a2e3au); f_004cc4b0();
    /* 004a2e3a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a2e3d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a2e40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e41: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2e46u); f_0062fbf0();
    /* 004a2e46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2e49: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a2e4c: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a2e4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2e51: mov word ptr [eax*2 + 0x791798], si */ W16((u32)(r_eax*2+0x791798u), (u16)r_esi);
    /* 004a2e59: jmp 0x4a2e68 */ goto L_004a2e68;
L_004a2e5b:; BB(0x004a2e5b);
    /* 004a2e5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2e5e: mov word ptr [ecx*2 + 0x791798], 0xa */ W16((u32)(r_ecx*2+0x791798u), 0xau);
L_004a2e68:; BB(0x004a2e68);
    /* 004a2e68: mov word ptr [ebp - 0x18], 5 */ W16((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 004a2e6e: jmp 0x4a2e7c */ goto L_004a2e7c;
L_004a2e70:; BB(0x004a2e70);
    /* 004a2e70: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004a2e74: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a2e78: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
L_004a2e7c:; BB(0x004a2e7c);
    /* 004a2e7c: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a2e80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a2e82: jl 0x4a2ee5 */ if ((fS!=fO)) goto L_004a2ee5;
L_004a2e84:; BB(0x004a2e84);
    /* 004a2e84: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a2e88: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2e8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2e8f: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a2e92: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a2e96: lea ecx, [edx + eax*4 + 0x791460] */ r_ecx = (u32)(r_edx+r_eax*4+0x791460u);
    /* 004a2e9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e9e: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a2ea2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2ea5: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a2ea8: lea ecx, [eax + edx*4 + 0x7919d8] */ r_ecx = (u32)(r_eax+r_edx*4+0x7919d8u);
    /* 004a2eaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2eb0: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a2eb4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2eb7: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a2eba: lea ecx, [eax + edx*4 + 0x7915c8] */ r_ecx = (u32)(r_eax+r_edx*4+0x7915c8u);
    /* 004a2ec1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2ec2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2ec5: mov edx, esp */ r_edx = r_esp;
    /* 004a2ec7: mov dword ptr [ebp - 0x5c], esp */ W32((u32)(r_ebp+0xffffffa4u), r_esp);
    /* 004a2eca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2ecb: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004a2ed0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004a2ed3: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a2ed8u); f_004c7c40();
    /* 004a2ed8: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004a2edb: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004a2ede: call 0x48e5e0 */ r_esp -= 4; W32(r_esp, 0x4a2ee3u); f_0048e5e0();
    /* 004a2ee3: jmp 0x4a2e70 */ goto L_004a2e70;
L_004a2ee5:; BB(0x004a2ee5);
    /* 004a2ee5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2ee8: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004a2eec: mov word ptr [ecx*2 + 0x791d80], dx */ W16((u32)(r_ecx*2+0x791d80u), (u16)r_edx);
    /* 004a2ef4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2ef7: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004a2efb: mov word ptr [eax*2 + 0x7919b8], cx */ W16((u32)(r_eax*2+0x7919b8u), (u16)r_ecx);
    /* 004a2f03: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2f07: jne 0x4a30a1 */ if (!fZ) goto L_004a30a1;
L_004a2f0d:; BB(0x004a2f0d);
    /* 004a2f0d: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f0f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f14u); f_0062fbf0();
    /* 004a2f14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f17: mov esi, eax */ r_esi = r_eax;
    /* 004a2f19: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f1b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f20u); f_0062fbf0();
    /* 004a2f20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f23: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004a2f27: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f29: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f2eu); f_0062fbf0();
    /* 004a2f2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f31: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a2f33: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f35: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f3au); f_0062fbf0();
    /* 004a2f3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f3d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a2f3f: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 004a2f42: fild dword ptr [ebp - 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff98u)));
    /* 004a2f45: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004a2f4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2f4e: fstp qword ptr [edx*8 + 0x791dd0] */ W_F64((u32)(r_edx*8+0x791dd0u), ST(0)); FPOP();
    /* 004a2f55: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f57: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f5cu); f_0062fbf0();
    /* 004a2f5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f5f: mov esi, eax */ r_esi = r_eax;
    /* 004a2f61: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f63: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f68u); f_0062fbf0();
    /* 004a2f68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f6b: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004a2f6f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f71: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f76u); f_0062fbf0();
    /* 004a2f76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f79: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a2f7b: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2f7d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2f82u); f_0062fbf0();
    /* 004a2f82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2f85: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a2f87: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 004a2f8a: fild dword ptr [ebp - 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff94u)));
    /* 004a2f8d: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004a2f93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2f96: fstp qword ptr [eax*8 + 0x791520] */ W_F64((u32)(r_eax*8+0x791520u), ST(0)); FPOP();
    /* 004a2f9d: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004a2fa3: jmp 0x4a2fb1 */ goto L_004a2fb1;
L_004a2fa5:; BB(0x004a2fa5);
    /* 004a2fa5: mov cx, word ptr [ebp - 0x30] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd0u))) & 0xffffu);
    /* 004a2fa9: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a2fad: mov word ptr [ebp - 0x30], cx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ecx);
L_004a2fb1:; BB(0x004a2fb1);
    /* 004a2fb1: movsx esi, word ptr [ebp - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a2fb5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a2fbb: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a2fc0u); f_0047f950();
    /* 004a2fc0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2fc2: jge 0x4a3009 */ if ((fS==fO)) goto L_004a3009;
L_004a2fc4:; BB(0x004a2fc4);
    /* 004a2fc4: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2fc6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2fcbu); f_0062fbf0();
    /* 004a2fcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2fce: mov esi, eax */ r_esi = r_eax;
    /* 004a2fd0: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2fd2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2fd7u); f_0062fbf0();
    /* 004a2fd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2fda: lea esi, [esi + eax + 0x19] */ r_esi = (u32)(r_esi+r_eax+0x19u);
    /* 004a2fde: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2fe0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a2fe5u); f_0062fbf0();
    /* 004a2fe5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2fe8: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a2fea: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 004a2fed: fild dword ptr [ebp - 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff90u)));
    /* 004a2ff0: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004a2ff6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2ff9: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004a2ffc: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a3000: fstp qword ptr [edx + eax*8 + 0x791ae0] */ W_F64((u32)(r_edx+r_eax*8+0x791ae0u), ST(0)); FPOP();
    /* 004a3007: jmp 0x4a2fa5 */ goto L_004a2fa5;
L_004a3009:; BB(0x004a3009);
    /* 004a3009: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a300f: call 0x4cc530 */ r_esp -= 4; W32(r_esp, 0x4a3014u); f_004cc530();
    /* 004a3014: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3017: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3018: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a301du); f_0062fbf0();
    /* 004a301d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3020: mov esi, eax */ r_esi = r_eax;
    /* 004a3022: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3028: call 0x4cc530 */ r_esp -= 4; W32(r_esp, 0x4a302du); f_004cc530();
    /* 004a302d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3030: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3031: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3036u); f_0062fbf0();
    /* 004a3036: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3039: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a303b: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 004a303e: fild dword ptr [ebp - 0x74] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff8cu)));
    /* 004a3041: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 004a3047: fld1  */ FPUSH(1.0);
    /* 004a3049: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a304b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a304e: fstp qword ptr [eax*8 + 0x791d40] */ W_F64((u32)(r_eax*8+0x791d40u), ST(0)); FPOP();
    /* 004a3055: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a305b: call 0x4cc550 */ r_esp -= 4; W32(r_esp, 0x4a3060u); f_004cc550();
    /* 004a3060: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3064: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3069u); f_0062fbf0();
    /* 004a3069: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a306c: mov esi, eax */ r_esi = r_eax;
    /* 004a306e: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3074: call 0x4cc550 */ r_esp -= 4; W32(r_esp, 0x4a3079u); f_004cc550();
    /* 004a3079: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a307c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a307d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3082u); f_0062fbf0();
    /* 004a3082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3085: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a3087: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 004a308a: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 004a308d: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 004a3093: fld1  */ FPUSH(1.0);
    /* 004a3095: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a3097: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a309a: fstp qword ptr [eax*8 + 0x7917e8] */ W_F64((u32)(r_eax*8+0x7917e8u), ST(0)); FPOP();
L_004a30a1:; BB(0x004a30a1);
    /* 004a30a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004a30a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a30a5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a30a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a30a9: call 0x4a3a60 */ r_esp -= 4; W32(r_esp, 0x4a30aeu); f_004a3a60();
    /* 004a30ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a30b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a30b4: fstp qword ptr [eax*8 + 0x791d90] */ W_F64((u32)(r_eax*8+0x791d90u), ST(0)); FPOP();
    /* 004a30bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a30be: mov word ptr [ecx*2 + 0x791768], 1 */ W16((u32)(r_ecx*2+0x791768u), 0x1u);
    /* 004a30c8: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a30cc: jne 0x4a3118 */ if (!fZ) goto L_004a3118;
L_004a30ce:; BB(0x004a30ce);
    /* 004a30ce: mov word ptr [ebp - 0x18], 5 */ W16((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 004a30d4: jmp 0x4a30e2 */ goto L_004a30e2;
L_004a30d6:; BB(0x004a30d6);
    /* 004a30d6: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004a30da: sub dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a30de: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
L_004a30e2:; BB(0x004a30e2);
    /* 004a30e2: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a30e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a30e8: jl 0x4a3102 */ if ((fS!=fO)) goto L_004a3102;
L_004a30ea:; BB(0x004a30ea);
    /* 004a30ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a30ed: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a30f0: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a30f4: cmp dword ptr [ecx + edx*4 + 0x7915c8], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x7915c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a30fc: jle 0x4a3100 */ if ((fZ||fS!=fO)) goto L_004a3100;
L_004a30fe:; BB(0x004a30fe);
    /* 004a30fe: jmp 0x4a3102 */ goto L_004a3102;
L_004a3100:; BB(0x004a3100);
    /* 004a3100: jmp 0x4a30d6 */ goto L_004a30d6;
L_004a3102:; BB(0x004a3102);
    /* 004a3102: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a3106: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3109: jne 0x4a3118 */ if (!fZ) goto L_004a3118;
L_004a310b:; BB(0x004a310b);
    /* 004a310b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a310e: mov word ptr [ecx*2 + 0x791768], 6 */ W16((u32)(r_ecx*2+0x791768u), 0x6u);
L_004a3118:; BB(0x004a3118);
    /* 004a3118: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a311f: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004a3122: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4a3127u); f_00484470();
    /* 004a3127: jmp 0x4a31ae */ goto L_004a31ae;
L_004a312c:; BB(0x004a312c);
    /* 004a312c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a312f: movsx eax, word ptr [edx*2 + 0x7919b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x7919b8u));
    /* 004a3137: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a313a: je 0x4a3194 */ if (fZ) goto L_004a3194;
L_004a313c:; BB(0x004a313c);
    /* 004a313c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a313f: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a3147: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a314a: je 0x4a3194 */ if (fZ) goto L_004a3194;
L_004a314c:; BB(0x004a314c);
    /* 004a314c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a314f: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a3157: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a315a: je 0x4a3194 */ if (fZ) goto L_004a3194;
L_004a315c:; BB(0x004a315c);
    /* 004a315c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a315f: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004a3163: mov word ptr [edx*2 + 0x7919b8], ax */ W16((u32)(r_edx*2+0x7919b8u), (u16)r_eax);
    /* 004a316b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004a316e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a316f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a3172: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3173: call 0x4a3a60 */ r_esp -= 4; W32(r_esp, 0x4a3178u); f_004a3a60();
    /* 004a3178: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a317b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a317e: fstp qword ptr [eax*8 + 0x791d90] */ W_F64((u32)(r_eax*8+0x791d90u), ST(0)); FPOP();
    /* 004a3185: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3188: mov word ptr [ecx*2 + 0x791768], 1 */ W16((u32)(r_ecx*2+0x791768u), 0x1u);
    /* 004a3192: jmp 0x4a31ae */ goto L_004a31ae;
L_004a3194:; BB(0x004a3194);
    /* 004a3194: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004a3197: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3198: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a319b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a319c: call 0x4a3a60 */ r_esp -= 4; W32(r_esp, 0x4a31a1u); f_004a3a60();
    /* 004a31a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a31a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a31a7: fstp qword ptr [ecx*8 + 0x791d90] */ W_F64((u32)(r_ecx*8+0x791d90u), ST(0)); FPOP();
L_004a31ae:; BB(0x004a31ae);
    /* 004a31ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a31b1: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a31b9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a31bc: jne 0x4a323d */ if (!fZ) goto L_004a323d;
L_004a31be:; BB(0x004a31be);
    /* 004a31be: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a31c0: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a31c6: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a31cbu); f_004c79d0();
    /* 004a31cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a31d1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a31d4: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a31d9u); f_004f6640();
    /* 004a31d9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a31dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a31de: je 0x4a3212 */ if (fZ) goto L_004a3212;
L_004a31e0:; BB(0x004a31e0);
    /* 004a31e0: call 0x4a39c0 */ r_esp -= 4; W32(r_esp, 0x4a31e5u); f_004a39c0();
    /* 004a31e5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a31e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a31ea: jne 0x4a3206 */ if (!fZ) goto L_004a3206;
L_004a31ec:; BB(0x004a31ec);
    /* 004a31ec: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004a31ee: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a31f3u); f_0062fbf0();
    /* 004a31f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a31f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a31f8: jne 0x4a3206 */ if (!fZ) goto L_004a3206;
L_004a31fa:; BB(0x004a31fa);
    /* 004a31fa: mov eax, 1 */ r_eax = 0x1u;
    /* 004a31ff: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3206:; BB(0x004a3206);
    /* 004a3206: mov eax, 2 */ r_eax = 0x2u;
    /* 004a320b: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3212:; BB(0x004a3212);
    /* 004a3212: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3218: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a321b: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a3220u); f_004f66e0();
    /* 004a3220: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a3223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3225: je 0x4a3233 */ if (fZ) goto L_004a3233;
L_004a3227:; BB(0x004a3227);
    /* 004a3227: mov eax, 4 */ r_eax = 0x4u;
    /* 004a322c: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3233:; BB(0x004a3233);
    /* 004a3233: mov eax, 3 */ r_eax = 0x3u;
    /* 004a3238: jmp 0x4a39ab */ goto L_004a39ab;
L_004a323d:; BB(0x004a323d);
    /* 004a323d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3240: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a3248: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a324b: jne 0x4a33c8 */ if (!fZ) goto L_004a33c8;
L_004a3251:; BB(0x004a3251);
    /* 004a3251: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3257: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a325a: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x4a325fu); f_004f6690();
    /* 004a325f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a3262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3264: je 0x4a33a5 */ if (fZ) goto L_004a33a5;
L_004a326a:; BB(0x004a326a);
    /* 004a326a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3270: call 0x4c6df0 */ r_esp -= 4; W32(r_esp, 0x4a3275u); f_004c6df0();
    /* 004a3275: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004a3278: fild dword ptr [ebp - 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff84u)));
    /* 004a327b: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a3281: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3284: fadd qword ptr [ecx*8 + 0x791d90] */ ST(0) = ST(0) + R_F64((u32)(r_ecx*8+0x791d90u));
    /* 004a328b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a328e: fmul qword ptr [edx*8 + 0x791d90] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x791d90u));
    /* 004a3295: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a329b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a329e: fstp qword ptr [ebp - 0x84] */ W_F64((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 004a32a4: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4a32a9u); f_004f67d0();
    /* 004a32a9: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004a32af: fild dword ptr [ebp - 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff78u)));
    /* 004a32b5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a32bb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a32be: fstp qword ptr [ebp - 0x90] */ W_F64((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 004a32c4: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4a32c9u); f_004f6840();
    /* 004a32c9: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004a32cf: fild dword ptr [ebp - 0x94] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff6cu)));
    /* 004a32d5: fdivr qword ptr [ebp - 0x90] */ ST(0) = R_F64((u32)(r_ebp+0xffffff70u)) / ST(0);
    /* 004a32db: fdivr qword ptr [ebp - 0x84] */ ST(0) = R_F64((u32)(r_ebp+0xffffff7cu)) / ST(0);
    /* 004a32e1: fstp qword ptr [ebp - 0x3c] */ W_F64((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 004a32e4: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a32ea: call 0x4d0310 */ r_esp -= 4; W32(r_esp, 0x4a32efu); f_004d0310();
    /* 004a32ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a32f2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004a32f5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a32f8: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a32fb: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 004a32ff: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a3303: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3304: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3309u); f_0062fbf0();
    /* 004a3309: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a330c: mov esi, eax */ r_esi = r_eax;
    /* 004a330e: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a3312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3313: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3318u); f_0062fbf0();
    /* 004a3318: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a331b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a331d: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a3321: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3322: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3327u); f_0062fbf0();
    /* 004a3327: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a332a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a332c: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 004a3332: fild dword ptr [ebp - 0x98] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff68u)));
    /* 004a3338: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 004a333e: fld1  */ FPUSH(1.0);
    /* 004a3340: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a3342: fcomp qword ptr [ebp - 0x3c] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffc4u))); FPOP();
    /* 004a3345: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a3347: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a334a: jp 0x4a339c */ if (fP) goto L_004a339c;
L_004a334c:; BB(0x004a334c);
    /* 004a334c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004a334f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3350: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a3353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3354: call 0x4a4090 */ r_esp -= 4; W32(r_esp, 0x4a3359u); f_004a4090();
    /* 004a3359: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a335c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a335f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3361: je 0x4a3365 */ if (fZ) goto L_004a3365;
L_004a3363:; BB(0x004a3363);
    /* 004a3363: jmp 0x4a339a */ goto L_004a339a;
L_004a3365:; BB(0x004a3365);
    /* 004a3365: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3367: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a336cu); f_0062fbf0();
    /* 004a336c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a336f: mov esi, eax */ r_esi = r_eax;
    /* 004a3371: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3377: call 0x4cffe0 */ r_esp -= 4; W32(r_esp, 0x4a337cu); f_004cffe0();
    /* 004a337c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a337f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3381: jge 0x4a3390 */ if ((fS==fO)) goto L_004a3390;
L_004a3383:; BB(0x004a3383);
    /* 004a3383: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3386: mov word ptr [eax*2 + 0x791768], 2 */ W16((u32)(r_eax*2+0x791768u), 0x2u);
L_004a3390:; BB(0x004a3390);
    /* 004a3390: mov eax, 3 */ r_eax = 0x3u;
    /* 004a3395: jmp 0x4a39ab */ goto L_004a39ab;
L_004a339a:; BB(0x004a339a);
    /* 004a339a: jmp 0x4a33a3 */ goto L_004a33a3;
L_004a339c:; BB(0x004a339c);
    /* 004a339c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a339e: jmp 0x4a39ab */ goto L_004a39ab;
L_004a33a3:; BB(0x004a33a3);
    /* 004a33a3: jmp 0x4a33c8 */ goto L_004a33c8;
L_004a33a5:; BB(0x004a33a5);
    /* 004a33a5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004a33a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a33a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a33ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a33ad: call 0x4a4090 */ r_esp -= 4; W32(r_esp, 0x4a33b2u); f_004a4090();
    /* 004a33b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a33b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a33b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a33ba: je 0x4a33be */ if (fZ) goto L_004a33be;
L_004a33bc:; BB(0x004a33bc);
    /* 004a33bc: jmp 0x4a33c8 */ goto L_004a33c8;
L_004a33be:; BB(0x004a33be);
    /* 004a33be: mov eax, 1 */ r_eax = 0x1u;
    /* 004a33c3: jmp 0x4a39ab */ goto L_004a39ab;
L_004a33c8:; BB(0x004a33c8);
    /* 004a33c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a33cb: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a33d3: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a33d6: je 0x4a33ec */ if (fZ) goto L_004a33ec;
L_004a33d8:; BB(0x004a33d8);
    /* 004a33d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a33db: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a33e3: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a33e6: jne 0x4a3579 */ if (!fZ) goto L_004a3579;
L_004a33ec:; BB(0x004a33ec);
    /* 004a33ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a33ef: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a33f7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a33fa: jne 0x4a3423 */ if (!fZ) goto L_004a3423;
L_004a33fc:; BB(0x004a33fc);
    /* 004a33fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3402: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a3407u); f_0047ce60();
    /* 004a3407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3408: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a340c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a340f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3410: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3416: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a341bu); f_004c6ef0();
    /* 004a341b: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 004a3421: jmp 0x4a3434 */ goto L_004a3434;
L_004a3423:; BB(0x004a3423);
    /* 004a3423: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3429: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a342eu); f_004c6f50();
    /* 004a342e: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
L_004a3434:; BB(0x004a3434);
    /* 004a3434: mov edx, 0x64 */ r_edx = 0x64u;
    /* 004a3439: sub edx, dword ptr [ebp - 0x9c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff64u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a343f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3440: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3445u); f_0062fbf0();
    /* 004a3445: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3448: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004a344e: fild dword ptr [ebp - 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff60u)));
    /* 004a3454: fstp qword ptr [ebp - 0x44] */ W_F64((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 004a3457: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3459: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a345c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a345d: call 0x4a2c60 */ r_esp -= 4; W32(r_esp, 0x4a3462u); f_004a2c60();
    /* 004a3462: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3465: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3468: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 004a346e: fild dword ptr [ebp - 0xa4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff5cu)));
    /* 004a3474: fcomp qword ptr [ebp - 0x44] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffbcu))); FPOP();
    /* 004a3477: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a3479: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a347c: jne 0x4a3574 */ if (!fZ) goto L_004a3574;
L_004a3482:; BB(0x004a3482);
    /* 004a3482: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3484: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a348a: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a348fu); f_004c79d0();
    /* 004a348f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3495: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3498: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a349du); f_004f6640();
    /* 004a349d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a34a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a34a2: jne 0x4a34d0 */ if (!fZ) goto L_004a34d0;
L_004a34a4:; BB(0x004a34a4);
    /* 004a34a4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a34aa: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a34ad: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a34b2u); f_004f66e0();
    /* 004a34b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a34b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a34b7: jne 0x4a34d0 */ if (!fZ) goto L_004a34d0;
L_004a34b9:; BB(0x004a34b9);
    /* 004a34b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a34bc: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a34c4: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a34c7: jne 0x4a34d0 */ if (!fZ) goto L_004a34d0;
L_004a34c9:; BB(0x004a34c9);
    /* 004a34c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a34cb: jmp 0x4a39ab */ goto L_004a39ab;
L_004a34d0:; BB(0x004a34d0);
    /* 004a34d0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a34d2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a34d7u); f_0062fbf0();
    /* 004a34d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a34da: mov esi, eax */ r_esi = r_eax;
    /* 004a34dc: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a34e2: call 0x4cc3b0 */ r_esp -= 4; W32(r_esp, 0x4a34e7u); f_004cc3b0();
    /* 004a34e7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a34ea: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a34ec: jge 0x4a34fd */ if ((fS==fO)) goto L_004a34fd;
L_004a34ee:; BB(0x004a34ee);
    /* 004a34ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a34f1: mov word ptr [ecx*2 + 0x791768], 4 */ W16((u32)(r_ecx*2+0x791768u), 0x4u);
    /* 004a34fb: jmp 0x4a3528 */ goto L_004a3528;
L_004a34fd:; BB(0x004a34fd);
    /* 004a34fd: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a34ff: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3504u); f_0062fbf0();
    /* 004a3504: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3507: mov esi, eax */ r_esi = r_eax;
    /* 004a3509: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a350f: call 0x4cc3d0 */ r_esp -= 4; W32(r_esp, 0x4a3514u); f_004cc3d0();
    /* 004a3514: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3517: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3519: jge 0x4a3528 */ if ((fS==fO)) goto L_004a3528;
L_004a351b:; BB(0x004a351b);
    /* 004a351b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a351e: mov word ptr [eax*2 + 0x791768], 1 */ W16((u32)(r_eax*2+0x791768u), 0x1u);
L_004a3528:; BB(0x004a3528);
    /* 004a3528: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a352e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3531: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a3536u); f_004f6640();
    /* 004a3536: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a3539: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a353b: je 0x4a3549 */ if (fZ) goto L_004a3549;
L_004a353d:; BB(0x004a353d);
    /* 004a353d: mov eax, 2 */ r_eax = 0x2u;
    /* 004a3542: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3549:; BB(0x004a3549);
    /* 004a3549: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a354f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3552: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a3557u); f_004f66e0();
    /* 004a3557: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a355a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a355c: je 0x4a356a */ if (fZ) goto L_004a356a;
L_004a355e:; BB(0x004a355e);
    /* 004a355e: mov eax, 4 */ r_eax = 0x4u;
    /* 004a3563: jmp 0x4a39ab */ goto L_004a39ab;
L_004a356a:; BB(0x004a356a);
    /* 004a356a: mov eax, 3 */ r_eax = 0x3u;
    /* 004a356f: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3574:; BB(0x004a3574);
    /* 004a3574: jmp 0x4a3908 */ goto L_004a3908;
L_004a3579:; BB(0x004a3579);
    /* 004a3579: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a357c: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a3584: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3587: je 0x4a359d */ if (fZ) goto L_004a359d;
L_004a3589:; BB(0x004a3589);
    /* 004a3589: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a358c: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a3594: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3597: jne 0x4a3743 */ if (!fZ) goto L_004a3743;
L_004a359d:; BB(0x004a359d);
    /* 004a359d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a35a0: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a35a8: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a35ab: jne 0x4a35d4 */ if (!fZ) goto L_004a35d4;
L_004a35ad:; BB(0x004a35ad);
    /* 004a35ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a35b3: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a35b8u); f_0047ce60();
    /* 004a35b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a35b9: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a35bd: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a35c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a35c1: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a35c7: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a35ccu); f_004c6ef0();
    /* 004a35cc: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004a35d2: jmp 0x4a35e5 */ goto L_004a35e5;
L_004a35d4:; BB(0x004a35d4);
    /* 004a35d4: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a35da: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a35dfu); f_004c6f50();
    /* 004a35df: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
L_004a35e5:; BB(0x004a35e5);
    /* 004a35e5: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 004a35ea: sub ecx, dword ptr [ebp - 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff58u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a35f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a35f1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a35f6u); f_0062fbf0();
    /* 004a35f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a35f9: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 004a35ff: fild dword ptr [ebp - 0xac] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff54u)));
    /* 004a3605: fstp qword ptr [ebp - 0x4c] */ W_F64((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 004a3608: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a360a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a360d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a360e: call 0x4a2c60 */ r_esp -= 4; W32(r_esp, 0x4a3613u); f_004a2c60();
    /* 004a3613: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3616: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3619: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004a361f: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 004a3625: fcomp qword ptr [ebp - 0x4c] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffb4u))); FPOP();
    /* 004a3628: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a362a: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a362d: jne 0x4a373e */ if (!fZ) goto L_004a373e;
L_004a3633:; BB(0x004a3633);
    /* 004a3633: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3635: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a363b: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a3640u); f_004c79d0();
    /* 004a3640: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3646: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3649: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a364eu); f_004f6640();
    /* 004a364e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a3651: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3653: jne 0x4a3681 */ if (!fZ) goto L_004a3681;
L_004a3655:; BB(0x004a3655);
    /* 004a3655: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a365b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a365e: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a3663u); f_004f66e0();
    /* 004a3663: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a3666: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3668: jne 0x4a3681 */ if (!fZ) goto L_004a3681;
L_004a366a:; BB(0x004a366a);
    /* 004a366a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a366d: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a3675: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3678: jne 0x4a3681 */ if (!fZ) goto L_004a3681;
L_004a367a:; BB(0x004a367a);
    /* 004a367a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a367c: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3681:; BB(0x004a3681);
    /* 004a3681: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3683: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3688u); f_0062fbf0();
    /* 004a3688: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a368b: mov esi, eax */ r_esi = r_eax;
    /* 004a368d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3693: call 0x4cc3b0 */ r_esp -= 4; W32(r_esp, 0x4a3698u); f_004cc3b0();
    /* 004a3698: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a369b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a369d: jge 0x4a36ae */ if ((fS==fO)) goto L_004a36ae;
L_004a369f:; BB(0x004a369f);
    /* 004a369f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a36a2: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004a36ac: jmp 0x4a36d9 */ goto L_004a36d9;
L_004a36ae:; BB(0x004a36ae);
    /* 004a36ae: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a36b0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a36b5u); f_0062fbf0();
    /* 004a36b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a36b8: mov esi, eax */ r_esi = r_eax;
    /* 004a36ba: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a36c0: call 0x4cc3d0 */ r_esp -= 4; W32(r_esp, 0x4a36c5u); f_004cc3d0();
    /* 004a36c5: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a36c8: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a36ca: jge 0x4a36d9 */ if ((fS==fO)) goto L_004a36d9;
L_004a36cc:; BB(0x004a36cc);
    /* 004a36cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a36cf: mov word ptr [edx*2 + 0x791768], 1 */ W16((u32)(r_edx*2+0x791768u), 0x1u);
L_004a36d9:; BB(0x004a36d9);
    /* 004a36d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a36df: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a36e2: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a36e7u); f_004f6640();
    /* 004a36e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a36ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a36ec: je 0x4a36fa */ if (fZ) goto L_004a36fa;
L_004a36ee:; BB(0x004a36ee);
    /* 004a36ee: mov eax, 2 */ r_eax = 0x2u;
    /* 004a36f3: jmp 0x4a39ab */ goto L_004a39ab;
L_004a36fa:; BB(0x004a36fa);
    /* 004a36fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3700: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3703: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a3708u); f_004f66e0();
    /* 004a3708: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a370b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a370d: je 0x4a371b */ if (fZ) goto L_004a371b;
L_004a370f:; BB(0x004a370f);
    /* 004a370f: mov eax, 4 */ r_eax = 0x4u;
    /* 004a3714: jmp 0x4a39ab */ goto L_004a39ab;
L_004a371b:; BB(0x004a371b);
    /* 004a371b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a371e: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a3726: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3729: jne 0x4a3734 */ if (!fZ) goto L_004a3734;
L_004a372b:; BB(0x004a372b);
    /* 004a372b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a372d: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3734:; BB(0x004a3734);
    /* 004a3734: mov eax, 3 */ r_eax = 0x3u;
    /* 004a3739: jmp 0x4a39ab */ goto L_004a39ab;
L_004a373e:; BB(0x004a373e);
    /* 004a373e: jmp 0x4a3908 */ goto L_004a3908;
L_004a3743:; BB(0x004a3743);
    /* 004a3743: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3746: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a374e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3751: je 0x4a3767 */ if (fZ) goto L_004a3767;
L_004a3753:; BB(0x004a3753);
    /* 004a3753: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3756: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a375e: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3761: jne 0x4a3908 */ if (!fZ) goto L_004a3908;
L_004a3767:; BB(0x004a3767);
    /* 004a3767: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a376a: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a3772: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3775: jne 0x4a379e */ if (!fZ) goto L_004a379e;
L_004a3777:; BB(0x004a3777);
    /* 004a3777: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a377d: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a3782u); f_0047ce60();
    /* 004a3782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3783: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3787: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a378a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a378b: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3791: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a3796u); f_004c6ef0();
    /* 004a3796: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 004a379c: jmp 0x4a37af */ goto L_004a37af;
L_004a379e:; BB(0x004a379e);
    /* 004a379e: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a37a4: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a37a9u); f_004c6f50();
    /* 004a37a9: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
L_004a37af:; BB(0x004a37af);
    /* 004a37af: mov edx, 0x64 */ r_edx = 0x64u;
    /* 004a37b4: sub edx, dword ptr [ebp - 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff4cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a37ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a37bb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a37c0u); f_0062fbf0();
    /* 004a37c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a37c3: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 004a37c9: fild dword ptr [ebp - 0xb8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff48u)));
    /* 004a37cf: fstp qword ptr [ebp - 0x54] */ W_F64((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 004a37d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a37d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a37d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a37d8: call 0x4a2c60 */ r_esp -= 4; W32(r_esp, 0x4a37ddu); f_004a2c60();
    /* 004a37dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a37e0: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a37e3: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 004a37e9: fild dword ptr [ebp - 0xbc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff44u)));
    /* 004a37ef: fcomp qword ptr [ebp - 0x54] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffacu))); FPOP();
    /* 004a37f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a37f4: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a37f7: jne 0x4a3908 */ if (!fZ) goto L_004a3908;
L_004a37fd:; BB(0x004a37fd);
    /* 004a37fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a37ff: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a3805: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a380au); f_004c79d0();
    /* 004a380a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3810: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3813: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a3818u); f_004f6640();
    /* 004a3818: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a381b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a381d: jne 0x4a384b */ if (!fZ) goto L_004a384b;
L_004a381f:; BB(0x004a381f);
    /* 004a381f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3825: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3828: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a382du); f_004f66e0();
    /* 004a382d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a3830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3832: jne 0x4a384b */ if (!fZ) goto L_004a384b;
L_004a3834:; BB(0x004a3834);
    /* 004a3834: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3837: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a383f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3842: jne 0x4a384b */ if (!fZ) goto L_004a384b;
L_004a3844:; BB(0x004a3844);
    /* 004a3844: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a3846: jmp 0x4a39ab */ goto L_004a39ab;
L_004a384b:; BB(0x004a384b);
    /* 004a384b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a384d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3852u); f_0062fbf0();
    /* 004a3852: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3855: mov esi, eax */ r_esi = r_eax;
    /* 004a3857: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a385d: call 0x4cc3b0 */ r_esp -= 4; W32(r_esp, 0x4a3862u); f_004cc3b0();
    /* 004a3862: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3865: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3867: jge 0x4a3878 */ if ((fS==fO)) goto L_004a3878;
L_004a3869:; BB(0x004a3869);
    /* 004a3869: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a386c: mov word ptr [ecx*2 + 0x791768], 2 */ W16((u32)(r_ecx*2+0x791768u), 0x2u);
    /* 004a3876: jmp 0x4a38a3 */ goto L_004a38a3;
L_004a3878:; BB(0x004a3878);
    /* 004a3878: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a387a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a387fu); f_0062fbf0();
    /* 004a387f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3882: mov esi, eax */ r_esi = r_eax;
    /* 004a3884: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a388a: call 0x4cc3d0 */ r_esp -= 4; W32(r_esp, 0x4a388fu); f_004cc3d0();
    /* 004a388f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3892: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3894: jge 0x4a38a3 */ if ((fS==fO)) goto L_004a38a3;
L_004a3896:; BB(0x004a3896);
    /* 004a3896: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3899: mov word ptr [eax*2 + 0x791768], 1 */ W16((u32)(r_eax*2+0x791768u), 0x1u);
L_004a38a3:; BB(0x004a38a3);
    /* 004a38a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a38a9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a38ac: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a38b1u); f_004f6640();
    /* 004a38b1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a38b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a38b6: je 0x4a38c4 */ if (fZ) goto L_004a38c4;
L_004a38b8:; BB(0x004a38b8);
    /* 004a38b8: mov eax, 2 */ r_eax = 0x2u;
    /* 004a38bd: jmp 0x4a39ab */ goto L_004a39ab;
L_004a38c4:; BB(0x004a38c4);
    /* 004a38c4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a38ca: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a38cd: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a38d2u); f_004f66e0();
    /* 004a38d2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a38d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a38d7: je 0x4a38e5 */ if (fZ) goto L_004a38e5;
L_004a38d9:; BB(0x004a38d9);
    /* 004a38d9: mov eax, 4 */ r_eax = 0x4u;
    /* 004a38de: jmp 0x4a39ab */ goto L_004a39ab;
L_004a38e5:; BB(0x004a38e5);
    /* 004a38e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a38e8: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a38f0: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a38f3: jne 0x4a38fe */ if (!fZ) goto L_004a38fe;
L_004a38f5:; BB(0x004a38f5);
    /* 004a38f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a38f7: jmp 0x4a39ab */ goto L_004a39ab;
L_004a38fe:; BB(0x004a38fe);
    /* 004a38fe: mov eax, 3 */ r_eax = 0x3u;
    /* 004a3903: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3908:; BB(0x004a3908);
    /* 004a3908: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a390e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3911: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a3916u); f_004f6640();
    /* 004a3916: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a3919: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a391b: jne 0x4a395d */ if (!fZ) goto L_004a395d;
L_004a391d:; BB(0x004a391d);
    /* 004a391d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3920: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a3928: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a392b: jne 0x4a3933 */ if (!fZ) goto L_004a3933;
L_004a392d:; BB(0x004a392d);
    /* 004a392d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a392f: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3933:; BB(0x004a3933);
    /* 004a3933: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a3936: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a393e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3941: jne 0x4a3949 */ if (!fZ) goto L_004a3949;
L_004a3943:; BB(0x004a3943);
    /* 004a3943: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a3945: jmp 0x4a39ab */ goto L_004a39ab;
L_004a3949:; BB(0x004a3949);
    /* 004a3949: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a394c: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a3954: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3957: jne 0x4a395d */ if (!fZ) goto L_004a395d;
L_004a3959:; BB(0x004a3959);
    /* 004a3959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a395b: jmp 0x4a39ab */ goto L_004a39ab;
L_004a395d:; BB(0x004a395d);
    /* 004a395d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a395f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a3964u); f_0062fbf0();
    /* 004a3964: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3967: mov esi, eax */ r_esi = r_eax;
    /* 004a3969: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a396f: call 0x4cc3d0 */ r_esp -= 4; W32(r_esp, 0x4a3974u); f_004cc3d0();
    /* 004a3974: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3977: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3979: jge 0x4a3988 */ if ((fS==fO)) goto L_004a3988;
L_004a397b:; BB(0x004a397b);
    /* 004a397b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a397e: mov word ptr [ecx*2 + 0x791768], 1 */ W16((u32)(r_ecx*2+0x791768u), 0x1u);
L_004a3988:; BB(0x004a3988);
    /* 004a3988: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a398e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3991: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a3996u); f_004f6640();
    /* 004a3996: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a3999: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a399b: je 0x4a39a6 */ if (fZ) goto L_004a39a6;
L_004a399d:; BB(0x004a399d);
    /* 004a399d: mov eax, 1 */ r_eax = 0x1u;
    /* 004a39a2: jmp 0x4a39ab */ goto L_004a39ab;
L_004a39a6:; BB(0x004a39a6);
    /* 004a39a6: mov eax, 3 */ r_eax = 0x3u;
L_004a39ab:; BB(0x004a39ab);
    /* 004a39ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a39ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a39b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a39b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a39b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a39b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004a39ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a39bb: ret  */ FN_RET(0x004a2cc0); r_esp += 4; return;
}

