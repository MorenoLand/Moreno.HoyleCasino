#include "protos.h"

void f_00686200(void) /* sub_686200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686200);
    /* 00686200: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686202: ret  */ FN_RET(0x00686200); r_esp += 4; return;
}

void f_00686210(void) /* sub_686210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686210);
    /* 00686210: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686214: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00686216: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686218: mov al, byte ptr [ecx + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 0068621b: ret  */ FN_RET(0x00686210); r_esp += 4; return;
}

void f_00686220(void) /* sub_686220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686220);
    /* 00686220: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686224: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00686226: mov al, byte ptr [ecx + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x5u))) & 0xffu);
    /* 00686229: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068622c: ret  */ FN_RET(0x00686220); r_esp += 4; return;
}

void f_00686230(void) /* sub_686230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686230);
    /* 00686230: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686234: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00686236: mov al, byte ptr [ecx + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x5u))) & 0xffu);
    /* 00686239: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068623c: ret  */ FN_RET(0x00686230); r_esp += 4; return;
}

void f_00686240(void) /* sub_686240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686240);
    /* 00686240: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686244: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00686246: mov al, byte ptr [ecx + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x5u))) & 0xffu);
    /* 00686249: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068624c: ret  */ FN_RET(0x00686240); r_esp += 4; return;
}

void f_00686250(void) /* sub_686250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686250);
    /* 00686250: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686255: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686256: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00686258: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068625a: mov al, byte ptr [ecx + 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0xdu))) & 0xffu);
    /* 0068625d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0068625e: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00686262: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00686265: mov esi, eax */ r_esi = r_eax;
    /* 00686267: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686269: mov al, byte ptr [ecx + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 0068626c: mov edi, edx */ r_edi = r_edx;
    /* 0068626e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0068626f: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00686271: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00686273: shld edi, esi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 00686277: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686279: mov al, byte ptr [ecx + 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0xbu))) & 0xffu);
    /* 0068627c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0068627d: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00686280: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00686282: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00686284: shld edi, esi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 00686288: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068628a: mov al, byte ptr [ecx + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0xau))) & 0xffu);
    /* 0068628d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0068628e: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00686291: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00686293: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00686295: shld edi, esi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 00686299: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068629b: mov al, byte ptr [ecx + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x9u))) & 0xffu);
    /* 0068629e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0068629f: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006862a2: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006862a4: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006862a6: shld edi, esi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 006862aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006862ac: mov al, byte ptr [ecx + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x8u))) & 0xffu);
    /* 006862af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006862b0: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006862b3: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006862b5: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006862b7: shld edi, esi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 006862bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006862bd: mov al, byte ptr [ecx + 7] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x7u))) & 0xffu);
    /* 006862c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006862c1: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006862c4: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006862c6: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006862c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006862ca: mov al, byte ptr [ecx + 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x6u))) & 0xffu);
    /* 006862cd: shld edi, esi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 006862d1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006862d2: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006862d5: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006862d7: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006862d9: mov edx, edi */ r_edx = r_edi;
    /* 006862db: mov eax, esi */ r_eax = r_esi;
    /* 006862dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006862de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006862df: ret  */ FN_RET(0x00686250); r_esp += 4; return;
}

void f_006862e0(void) /* sub_6862E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006862e0);
    /* 006862e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006862e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006862e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006862e8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006862ea: mov ch, byte ptr [eax + 0x11] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_eax+0x11u))) & 0xffu) << 8);
    /* 006862ed: mov dl, byte ptr [eax + 0xf] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xfu))) & 0xffu);
    /* 006862f0: mov cl, byte ptr [eax + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x10u))) & 0xffu);
    /* 006862f3: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006862f6: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006862f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006862fa: mov dl, byte ptr [eax + 0xe] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xeu))) & 0xffu);
    /* 006862fd: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00686300: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00686302: mov eax, ecx */ r_eax = r_ecx;
    /* 00686304: ret  */ FN_RET(0x006862e0); r_esp += 4; return;
}

void f_00686310(void) /* sub_686310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686310);
    /* 00686310: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686314: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00686316: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00686318: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0068631a: mov ch, byte ptr [eax + 0x15] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_eax+0x15u))) & 0xffu) << 8);
    /* 0068631d: mov dl, byte ptr [eax + 0x13] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x13u))) & 0xffu);
    /* 00686320: mov cl, byte ptr [eax + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x14u))) & 0xffu);
    /* 00686323: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00686326: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00686328: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068632a: mov dl, byte ptr [eax + 0x12] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x12u))) & 0xffu);
    /* 0068632d: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00686330: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00686332: mov eax, ecx */ r_eax = r_ecx;
    /* 00686334: ret  */ FN_RET(0x00686310); r_esp += 4; return;
}

void f_00686340(void) /* sub_686340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686340);
    /* 00686340: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686341: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00686345: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686347: je 0x68639d */ if (fZ) goto L_0068639d;
L_00686349:; BB(0x00686349);
    /* 00686349: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068634a: mov ecx, 0x5a */ r_ecx = 0x5au;
    /* 0068634f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686351: mov edi, esi */ r_edi = r_esi;
    /* 00686353: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00686355: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0068635a: mov dword ptr [esi + 4], 0x4000 */ W32((u32)(r_esi+0x4u), 0x4000u);
    /* 00686361: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x686366u); f_006872fa();
    /* 00686366: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0068636b: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0068636d: mov dword ptr [esi + 0x18], 0x400 */ W32((u32)(r_esi+0x18u), 0x400u);
    /* 00686374: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x686379u); f_006872fa();
    /* 00686379: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0068637c: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0068637f: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00686382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686383: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x686388u); f_006872fa();
    /* 00686388: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0068638c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068638f: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00686392: mov dword ptr [esi + 0x150], ecx */ W32((u32)(r_esi+0x150u), r_ecx);
    /* 00686398: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686399: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068639b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068639c: ret  */ FN_RET(0x00686340); r_esp += 4; return;
L_0068639d:; BB(0x0068639d);
    /* 0068639d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006863a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006863a1: ret  */ FN_RET(0x00686340); r_esp += 4; return;
}

void f_006863b0(void) /* sub_6863B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006863b0);
    /* 006863b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006863b1: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 006863b5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006863b7: je 0x6863f1 */ if (fZ) goto L_006863f1;
L_006863b9:; BB(0x006863b9);
    /* 006863b9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006863bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006863bd: je 0x6863c8 */ if (fZ) goto L_006863c8;
L_006863bf:; BB(0x006863bf);
    /* 006863bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006863c0: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6863c5u); f_00687300();
    /* 006863c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006863c8:; BB(0x006863c8);
    /* 006863c8: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 006863cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006863cd: je 0x6863d8 */ if (fZ) goto L_006863d8;
L_006863cf:; BB(0x006863cf);
    /* 006863cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006863d0: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6863d5u); f_00687300();
    /* 006863d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006863d8:; BB(0x006863d8);
    /* 006863d8: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 006863db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006863dd: je 0x6863e8 */ if (fZ) goto L_006863e8;
L_006863df:; BB(0x006863df);
    /* 006863df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006863e0: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6863e5u); f_00687300();
    /* 006863e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006863e8:; BB(0x006863e8);
    /* 006863e8: mov ecx, 0x5a */ r_ecx = 0x5au;
    /* 006863ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006863ef: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_006863f1:; BB(0x006863f1);
    /* 006863f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006863f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006863f4: ret  */ FN_RET(0x006863b0); r_esp += 4; return;
}

void f_00686400(void) /* sub_686400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686400);
    /* 00686400: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00686404: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00686406: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686408: je 0x6864a0 */ if (fZ) goto L_006864a0;
L_0068640e:; BB(0x0068640e);
    /* 0068640e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068640f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686410: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686411: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00686413: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686414: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686416: mov byte ptr [esi + 0x16], dl */ W8((u32)(r_esi+0x16u), (u8)r_edx);
    /* 00686419: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0068641b: mov byte ptr [esi + 0x17], dl */ W8((u32)(r_esi+0x17u), (u8)r_edx);
    /* 0068641e: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00686420: mov byte ptr [esi + 0x18], dl */ W8((u32)(r_esi+0x18u), (u8)r_edx);
    /* 00686423: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00686425: mov byte ptr [esi + 0x19], dl */ W8((u32)(r_esi+0x19u), (u8)r_edx);
    /* 00686428: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0068642b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068642d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068642f: jle 0x686452 */ if ((fZ||fS!=fO)) goto L_00686452;
L_00686431:; BB(0x00686431);
    /* 00686431: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
L_00686433:; BB(0x00686433);
    /* 00686433: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00686435: mov ebx, eax */ r_ebx = r_eax;
    /* 00686437: mov dl, byte ptr [esi + ebp] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_ebp))) & 0xffu);
    /* 0068643a: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068643d: xor edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068643f: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00686442: mov edx, dword ptr [edx*4 + 0x781448] */ r_edx = R32((u32)(r_edx*4+0x781448u));
    /* 00686449: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068644b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068644c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068644e: jl 0x686433 */ if ((fS!=fO)) goto L_00686433;
L_00686450:; BB(0x00686450);
    /* 00686450: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00686452:; BB(0x00686452);
    /* 00686452: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 00686455: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00686457: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686459: jle 0x68647b */ if ((fZ||fS!=fO)) goto L_0068647b;
L_0068645b:; BB(0x0068645b);
    /* 0068645b: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
L_0068645e:; BB(0x0068645e);
    /* 0068645e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00686460: mov ebx, eax */ r_ebx = r_eax;
    /* 00686462: mov dl, byte ptr [esi + ebp] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_ebp))) & 0xffu);
    /* 00686465: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00686468: xor edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068646a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068646d: mov edx, dword ptr [edx*4 + 0x781448] */ r_edx = R32((u32)(r_edx*4+0x781448u));
    /* 00686474: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686476: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00686477: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686479: jl 0x68645e */ if ((fS!=fO)) goto L_0068645e;
L_0068647b:; BB(0x0068647b);
    /* 0068647b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068647d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068647e: mov byte ptr [edx + 0x16], al */ W8((u32)(r_edx+0x16u), (u8)r_eax);
    /* 00686481: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00686483: mov edx, eax */ r_edx = r_eax;
    /* 00686485: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00686488: mov byte ptr [esi + 0x17], dl */ W8((u32)(r_esi+0x17u), (u8)r_edx);
    /* 0068648b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0068648d: mov edx, eax */ r_edx = r_eax;
    /* 0068648f: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00686492: mov byte ptr [esi + 0x18], dl */ W8((u32)(r_esi+0x18u), (u8)r_edx);
    /* 00686495: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00686497: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0068649a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068649b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068649c: mov byte ptr [ecx + 0x19], al */ W8((u32)(r_ecx+0x19u), (u8)r_eax);
    /* 0068649f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_006864a0:; BB(0x006864a0);
    /* 006864a0: ret  */ FN_RET(0x00686400); r_esp += 4; return;
}

void f_006864b0(void) /* sub_6864B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006864b0);
    /* 006864b0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006864b5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006864b9: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006864bc: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006864bf: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006864c1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006864c3: jg 0x6864dd */ if ((!fZ&&fS==fO)) goto L_006864dd;
L_006864c5:; BB(0x006864c5);
    /* 006864c5: lea eax, [eax + ecx + 0x400] */ r_eax = (u32)(r_eax+r_ecx+0x400u);
    /* 006864cc: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006864cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006864d0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006864d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006864d3: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x6864d8u); f_0068744a();
    /* 006864d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006864db: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_006864dd:; BB(0x006864dd);
    /* 006864dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006864de: ret  */ FN_RET(0x006864b0); r_esp += 4; return;
}

void f_006864e0(void) /* sub_6864E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006864e0);
    /* 006864e0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006864e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006864e5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006864e9: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 006864ec: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006864ef: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006864f1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006864f3: jg 0x686522 */ if ((!fZ&&fS==fO)) goto L_00686522;
L_006864f5:; BB(0x006864f5);
    /* 006864f5: lea eax, [eax + ecx + 0x20] */ r_eax = (u32)(r_eax+r_ecx+0x20u);
    /* 006864f9: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 006864fc: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 006864ff: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00686502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00686504: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x686509u); f_0068744a();
    /* 00686509: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0068650c: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0068650f: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00686512: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00686515: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686517: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x68651cu); f_0068744a();
    /* 0068651c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068651f: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
L_00686522:; BB(0x00686522);
    /* 00686522: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686523: ret  */ FN_RET(0x006864e0); r_esp += 4; return;
}

void f_00686530(void) /* sub_686530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686530);
    /* 00686530: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686531: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00686535: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686537: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686539: je 0x686542 */ if (fZ) goto L_00686542;
L_0068653b:; BB(0x0068653b);
    /* 0068653b: mov ecx, 7 */ r_ecx = 0x7u;
    /* 00686540: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_00686542:; BB(0x00686542);
    /* 00686542: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686543: ret  */ FN_RET(0x00686530); r_esp += 4; return;
}

void f_00686550(void) /* sub_686550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686550);
    /* 00686550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686551: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00686555: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686557: je 0x686571 */ if (fZ) goto L_00686571;
L_00686559:; BB(0x00686559);
    /* 00686559: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068655b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068655d: je 0x686568 */ if (fZ) goto L_00686568;
L_0068655f:; BB(0x0068655f);
    /* 0068655f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686560: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x686565u); f_00687300();
    /* 00686565: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00686568:; BB(0x00686568);
    /* 00686568: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686569: call 0x686530 */ r_esp -= 4; W32(r_esp, 0x68656eu); f_00686530();
    /* 0068656e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00686571:; BB(0x00686571);
    /* 00686571: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686573: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686574: ret  */ FN_RET(0x00686550); r_esp += 4; return;
}

void f_00686580(void) /* sub_686580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686580);
    /* 00686580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686581: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00686585: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00686588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068658a: je 0x6865ae */ if (fZ) goto L_006865ae;
L_0068658c:; BB(0x0068658c);
    /* 0068658c: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0068658f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00686591: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00686593: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00686596: jle 0x6865a7 */ if ((fZ||fS!=fO)) goto L_006865a7;
L_00686598:; BB(0x00686598);
    /* 00686598: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0068659a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068659b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068659d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068659e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068659f: call 0x687318 */ r_esp -= 4; W32(r_esp, 0x6865a4u); f_00687318();
    /* 006865a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006865a7:; BB(0x006865a7);
    /* 006865a7: mov dword ptr [esi + 0xc], 0 */ W32((u32)(r_esi+0xcu), 0x0u);
L_006865ae:; BB(0x006865ae);
    /* 006865ae: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006865b1: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006865b4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006865b8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006865ba: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006865bc: jle 0x6865f1 */ if ((fZ||fS!=fO)) goto L_006865f1;
L_006865be:; BB(0x006865be);
    /* 006865be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006865bf: lea edi, [eax + ecx + 0x1000] */ r_edi = (u32)(r_eax+r_ecx+0x1000u);
    /* 006865c6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006865c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006865c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006865cb: je 0x6865e3 */ if (fZ) goto L_006865e3;
L_006865cd:; BB(0x006865cd);
    /* 006865cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006865ce: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x6865d3u); f_0068744a();
    /* 006865d3: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006865d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006865d9: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 006865dc: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006865de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006865df: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006865e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006865e2: ret  */ FN_RET(0x00686580); r_esp += 4; return;
L_006865e3:; BB(0x006865e3);
    /* 006865e3: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x6865e8u); f_006872fa();
    /* 006865e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006865eb: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 006865ee: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006865f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_006865f1:; BB(0x006865f1);
    /* 006865f1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006865f3: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006865f6: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006865f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006865f9: ret  */ FN_RET(0x00686580); r_esp += 4; return;
}

void f_00686600(void) /* sub_686600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686600);
    /* 00686600: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686604: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00686608: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068660b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068660d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00686610: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686612: jle 0x686618 */ if ((fZ||fS!=fO)) goto L_00686618;
L_00686614:; BB(0x00686614);
    /* 00686614: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00686617: ret  */ FN_RET(0x00686600); r_esp += 4; return;
L_00686618:; BB(0x00686618);
    /* 00686618: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0068661b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068661d: ret  */ FN_RET(0x00686600); r_esp += 4; return;
}

void f_00686620(void) /* sub_686620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686620);
    /* 00686620: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686623: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00686625: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00686626: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686627: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686628: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0068662c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068662d: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00686630: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00686632: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00686635: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00686637: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00686639: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0068663c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068663e: jne 0x68668a */ if (!fZ) goto L_0068668a;
L_00686640:; BB(0x00686640);
    /* 00686640: cmp ebx, 0x1b */ {  u32 a = r_ebx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686643: jge 0x68664f */ if ((fS==fO)) goto L_0068664f;
L_00686645:; BB(0x00686645);
    /* 00686645: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686646: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686647: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686648: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068664a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068664b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068664e: ret  */ FN_RET(0x00686620); r_esp += 4; return;
L_0068664f:; BB(0x0068664f);
    /* 0068664f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00686651: mov eax, 0x781848 */ r_eax = 0x781848u;
    /* 00686656: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686658: jne 0x6866e1 */ if (!fZ) goto L_006866e1;
L_0068665e:; BB(0x0068665e);
    /* 0068665e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00686660: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686662: mov cl, byte ptr [edi + 0x1a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x1au))) & 0xffu);
    /* 00686665: lea ebp, [ecx + 0x1b] */ r_ebp = (u32)(r_ecx+0x1bu);
    /* 00686668: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068666a: jl 0x686757 */ if ((fS!=fO)) goto L_00686757;
L_00686670:; BB(0x00686670);
    /* 00686670: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686672: jle 0x686687 */ if ((fZ||fS!=fO)) goto L_00686687;
L_00686674:; BB(0x00686674);
    /* 00686674: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00686676: mov cl, byte ptr [edi + eax + 0x1b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+r_eax+0x1bu))) & 0xffu);
    /* 0068667a: add dword ptr [esi + 0x18], ecx */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0068667d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068667f: mov cl, byte ptr [edi + 0x1a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x1au))) & 0xffu);
    /* 00686682: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686683: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686685: jl 0x686674 */ if ((fS!=fO)) goto L_00686674;
L_00686687:; BB(0x00686687);
    /* 00686687: mov dword ptr [esi + 0x14], ebp */ W32((u32)(r_esi+0x14u), r_ebp);
L_0068668a:; BB(0x0068668a);
    /* 0068668a: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0068668d: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 00686690: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686692: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686694: jle 0x6866a0 */ if ((fZ||fS!=fO)) goto L_006866a0;
L_00686696:; BB(0x00686696);
    /* 00686696: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686697: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686698: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686699: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068669b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068669c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068669f: ret  */ FN_RET(0x00686620); r_esp += 4; return;
L_006866a0:; BB(0x006866a0);
    /* 006866a0: mov ebp, dword ptr [edi + 0x16] */ r_ebp = R32((u32)(r_edi+0x16u));
    /* 006866a3: mov dword ptr [edi + 0x16], edx */ W32((u32)(r_edi+0x16u), r_edx);
    /* 006866a6: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006866a9: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006866ac: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006866b0: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 006866b4: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006866b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006866b7: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 006866bb: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006866bf: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006866c3: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006866c7: call 0x686400 */ r_esp -= 4; W32(r_esp, 0x6866ccu); f_00686400();
    /* 006866cc: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 006866d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006866d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006866d5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006866d7: mov eax, dword ptr [edi + 0x16] */ r_eax = R32((u32)(r_edi+0x16u));
    /* 006866da: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006866dc: je 0x686719 */ if (fZ) goto L_00686719;
L_006866de:; BB(0x006866de);
    /* 006866de: mov dword ptr [edi + 0x16], ebp */ W32((u32)(r_edi+0x16u), r_ebp);
L_006866e1:; BB(0x006866e1);
    /* 006866e1: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006866e2: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 006866e5: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 006866e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006866e9: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006866ec: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 006866ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006866ef: call 0x6874c2 */ r_esp -= 4; W32(r_esp, 0x6866f4u); f_006874c2();
    /* 006866f4: mov ecx, eax */ r_ecx = r_eax;
    /* 006866f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006866f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006866fb: jne 0x686704 */ if (!fZ) goto L_00686704;
L_006866fd:; BB(0x006866fd);
    /* 006866fd: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00686700: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00686702: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00686704:; BB(0x00686704);
    /* 00686704: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00686706: mov eax, ecx */ r_eax = r_ecx;
    /* 00686708: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068670a: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0068670d: mov eax, edi */ r_eax = r_edi;
    /* 0068670f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686710: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686711: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686712: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00686714: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686715: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686718: ret  */ FN_RET(0x00686620); r_esp += 4; return;
L_00686719:; BB(0x00686719);
    /* 00686719: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068671b: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0068671e: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00686722: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686724: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686726: je 0x68673e */ if (fZ) goto L_0068673e;
L_00686728:; BB(0x00686728);
    /* 00686728: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0068672a: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0068672d: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 00686730: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00686733: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00686735: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 00686738: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0068673b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
L_0068673e:; BB(0x0068673e);
    /* 0068673e: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00686741: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00686744: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00686747: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686749: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068674b: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0068674e: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 00686751: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 00686754: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
L_00686757:; BB(0x00686757);
    /* 00686757: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686758: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686759: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068675a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068675b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068675e: ret  */ FN_RET(0x00686620); r_esp += 4; return;
}

void f_00686760(void) /* sub_686760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686760);
    /* 00686760: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686763: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00686764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686765: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686766: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686767: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0068676b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0068676d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068676e: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00686770: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00686773: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 00686776: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0068677a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0068677e: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00686782: call 0x686210 */ r_esp -= 4; W32(r_esp, 0x686787u); f_00686210();
    /* 00686787: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686788: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0068678c: call 0x686220 */ r_esp -= 4; W32(r_esp, 0x686791u); f_00686220();
    /* 00686791: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686792: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00686796: call 0x686230 */ r_esp -= 4; W32(r_esp, 0x68679bu); f_00686230();
    /* 0068679b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068679c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006867a0: call 0x686240 */ r_esp -= 4; W32(r_esp, 0x6867a5u); f_00686240();
    /* 006867a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006867a6: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006867aa: call 0x686250 */ r_esp -= 4; W32(r_esp, 0x6867afu); f_00686250();
    /* 006867af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006867b0: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006867b4: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006867b8: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x6867bdu); f_006862e0();
    /* 006867bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006867be: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006867c2: call 0x686310 */ r_esp -= 4; W32(r_esp, 0x6867c7u); f_00686310();
    /* 006867c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006867c9: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006867cd: mov cl, byte ptr [ebx + 0x1a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+0x1au))) & 0xffu);
    /* 006867d0: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 006867d4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006867d7: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 006867db: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 006867de: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 006867e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006867e3: je 0x686808 */ if (fZ) goto L_00686808;
L_006867e5:; BB(0x006867e5);
    /* 006867e5: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 006867e8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006867ea: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 006867ed: mov edx, ecx */ r_edx = r_ecx;
    /* 006867ef: je 0x686801 */ if (fZ) goto L_00686801;
L_006867f1:; BB(0x006867f1);
    /* 006867f1: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006867f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006867f4: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 006867f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006867f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006867f9: call 0x687318 */ r_esp -= 4; W32(r_esp, 0x6867feu); f_00687318();
    /* 006867fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00686801:; BB(0x00686801);
    /* 00686801: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
L_00686808:; BB(0x00686808);
    /* 00686808: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068680a: je 0x686854 */ if (fZ) goto L_00686854;
L_0068680c:; BB(0x0068680c);
    /* 0068680c: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0068680f: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00686811: je 0x68683d */ if (fZ) goto L_0068683d;
L_00686813:; BB(0x00686813);
    /* 00686813: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00686816: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00686819: lea edx, [eax + edi*4] */ r_edx = (u32)(r_eax+r_edi*4);
    /* 0068681c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068681d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068681e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068681f: call 0x687318 */ r_esp -= 4; W32(r_esp, 0x686824u); f_00687318();
    /* 00686824: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00686827: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0068682a: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068682c: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0068682f: lea edx, [eax + edi*8] */ r_edx = (u32)(r_eax+r_edi*8);
    /* 00686832: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00686833: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686835: call 0x687318 */ r_esp -= 4; W32(r_esp, 0x68683au); f_00687318();
    /* 0068683a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068683d:; BB(0x0068683d);
    /* 0068683d: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00686840: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00686843: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00686845: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00686847: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 0068684a: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0068684d: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
L_00686854:; BB(0x00686854);
    /* 00686854: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00686858: mov ecx, dword ptr [ebx + 0x150] */ r_ecx = R32((u32)(r_ebx+0x150u));
    /* 0068685e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686860: je 0x68686d */ if (fZ) goto L_0068686d;
L_00686862:; BB(0x00686862);
    /* 00686862: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686863: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686864: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686865: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00686868: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686869: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068686c: ret  */ FN_RET(0x00686760); r_esp += 4; return;
L_0068686d:; BB(0x0068686d);
    /* 0068686d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00686871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00686873: jle 0x686880 */ if ((fZ||fS!=fO)) goto L_00686880;
L_00686875:; BB(0x00686875);
    /* 00686875: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686876: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686878: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068687b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068687c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068687f: ret  */ FN_RET(0x00686760); r_esp += 4; return;
L_00686880:; BB(0x00686880);
    /* 00686880: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00686884: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686885: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00686886: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00686887: call 0x6864e0 */ r_esp -= 4; W32(r_esp, 0x68688cu); f_006864e0();
    /* 0068688c: mov eax, dword ptr [ebx + 0x154] */ r_eax = R32((u32)(r_ebx+0x154u));
    /* 00686892: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00686896: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686899: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068689b: je 0x68692a */ if (fZ) goto L_0068692a;
L_006868a1:; BB(0x006868a1);
    /* 006868a1: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 006868a4: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006868a7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006868a9: jge 0x6868c4 */ if ((fS==fO)) goto L_006868c4;
L_006868ab:; BB(0x006868ab);
    /* 006868ab: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 006868ae: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006868b0: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
L_006868b3:; BB(0x006868b3);
    /* 006868b3: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 006868b5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006868b8: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006868be: sub dword ptr [ebx + 8], edi */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 006868c1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006868c2: jne 0x6868b3 */ if (!fZ) goto L_006868b3;
L_006868c4:; BB(0x006868c4);
    /* 006868c4: mov eax, dword ptr [ebx + 0x154] */ r_eax = R32((u32)(r_ebx+0x154u));
    /* 006868ca: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 006868cd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006868d0: je 0x6868ea */ if (fZ) goto L_006868ea;
L_006868d2:; BB(0x006868d2);
    /* 006868d2: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 006868d5: mov dword ptr [ecx + edx*4], 0x400 */ W32((u32)(r_ecx+r_edx*4), 0x400u);
    /* 006868dc: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006868df: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006868e2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006868e3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006868e4: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 006868e7: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
L_006868ea:; BB(0x006868ea);
    /* 006868ea: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006868ee: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 006868f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006868f4: je 0x68692e */ if (fZ) goto L_0068692e;
L_006868f6:; BB(0x006868f6);
    /* 006868f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006868f8: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00686900: jle 0x68692e */ if ((fZ||fS!=fO)) goto L_0068692e;
L_00686902:; BB(0x00686902);
    /* 00686902: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00686906: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068690a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068690c: mov al, byte ptr [edx + ebp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ebp+0x1bu))) & 0xffu);
    /* 00686910: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686912: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00686914: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00686915: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068691a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0068691e: jl 0x686924 */ if ((fS!=fO)) goto L_00686924;
L_00686920:; BB(0x00686920);
    /* 00686920: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686922: jl 0x686902 */ if ((fS!=fO)) goto L_00686902;
L_00686924:; BB(0x00686924);
    /* 00686924: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00686928: jmp 0x68692e */ goto L_0068692e;
L_0068692a:; BB(0x0068692a);
    /* 0068692a: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_0068692e:; BB(0x0068692e);
    /* 0068692e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686930: je 0x686967 */ if (fZ) goto L_00686967;
L_00686932:; BB(0x00686932);
    /* 00686932: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686933: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00686934: call 0x6864b0 */ r_esp -= 4; W32(r_esp, 0x686939u); f_006864b0();
    /* 00686939: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0068693c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0068693e: mov ecx, esi */ r_ecx = r_esi;
    /* 00686940: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00686944: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00686946: mov eax, ecx */ r_eax = r_ecx;
    /* 00686948: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0068694b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0068694d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068694f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686952: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00686955: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00686957: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0068695b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0068695e: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00686962: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686964: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
L_00686967:; BB(0x00686967);
    /* 00686967: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068696a: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068696c: jge 0x6869ec */ if ((fS==fO)) goto L_006869ec;
L_0068696e:; BB(0x0068696e);
    /* 0068696e: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00686972: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 00686975: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686977: mov al, byte ptr [ecx + ebp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebp+0x1bu))) & 0xffu);
    /* 0068697b: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0068697e: mov dword ptr [esi + ecx*4], eax */ W32((u32)(r_esi+r_ecx*4), r_eax);
    /* 00686981: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00686984: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 00686987: mov dword ptr [esi + ecx*8], 0xffffffff */ W32((u32)(r_esi+r_ecx*8), 0xffffffffu);
    /* 0068698e: mov dword ptr [esi + ecx*8 + 4], 0xffffffff */ W32((u32)(r_esi+r_ecx*8+0x4u), 0xffffffffu);
    /* 00686996: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0068699a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068699c: je 0x6869b5 */ if (fZ) goto L_006869b5;
L_0068699e:; BB(0x0068699e);
    /* 0068699e: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006869a1: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 006869a4: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 006869ac: lea ecx, [esi + ecx*4] */ r_ecx = (u32)(r_esi+r_ecx*4);
    /* 006869af: or dword ptr [ecx], 0x100 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006869b5:; BB(0x006869b5);
    /* 006869b5: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006869ba: jge 0x6869bf */ if ((fS==fO)) goto L_006869bf;
L_006869bc:; BB(0x006869bc);
    /* 006869bc: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006869bf:; BB(0x006869bf);
    /* 006869bf: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006869c2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006869c3: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006869c4: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006869c9: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 006869cc: jge 0x6869d1 */ if ((fS==fO)) goto L_006869d1;
L_006869ce:; BB(0x006869ce);
    /* 006869ce: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
L_006869d1:; BB(0x006869d1);
    /* 006869d1: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006869d3: jl 0x68696e */ if ((fS!=fO)) goto L_0068696e;
L_006869d5:; BB(0x006869d5);
    /* 006869d5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006869d8: je 0x6869ec */ if (fZ) goto L_006869ec;
L_006869da:; BB(0x006869da);
    /* 006869da: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 006869dd: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 006869e1: mov dword ptr [eax + edx*8], ecx */ W32((u32)(r_eax+r_edx*8), r_ecx);
    /* 006869e4: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 006869e8: mov dword ptr [eax + edx*8 + 4], ecx */ W32((u32)(r_eax+r_edx*8+0x4u), r_ecx);
L_006869ec:; BB(0x006869ec);
    /* 006869ec: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 006869f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006869f2: je 0x686a15 */ if (fZ) goto L_00686a15;
L_006869f4:; BB(0x006869f4);
    /* 006869f4: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006869f7: mov dword ptr [ebx + 0x148], 1 */ W32((u32)(r_ebx+0x148u), 0x1u);
    /* 00686a01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00686a03: jle 0x686a15 */ if ((fZ||fS!=fO)) goto L_00686a15;
L_00686a05:; BB(0x00686a05);
    /* 00686a05: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00686a08: mov ecx, dword ptr [edx + eax*4 - 4] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xfffffffcu));
    /* 00686a0c: lea eax, [edx + eax*4 - 4] */ r_eax = (u32)(r_edx+r_eax*4+0xfffffffcu);
    /* 00686a10: or ch, 2 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00686a13: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00686a15:; BB(0x00686a15);
    /* 00686a15: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00686a19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686a1a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686a1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686a1c: mov dword ptr [ebx + 0x154], eax */ W32((u32)(r_ebx+0x154u), r_eax);
    /* 00686a22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686a23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686a25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686a26: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686a29: ret  */ FN_RET(0x00686760); r_esp += 4; return;
}

void f_00686a30(void) /* sub_686A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686a30);
    /* 00686a30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686a34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00686a36: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00686a39: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00686a3c: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00686a3f: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00686a42: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00686a45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686a47: ret  */ FN_RET(0x00686a30); r_esp += 4; return;
}

void f_00686a50(void) /* sub_686A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686a50);
    /* 00686a50: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686a54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00686a56: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00686a59: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00686a5c: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00686a5f: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00686a62: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00686a65: mov dword ptr [eax + 0x144], ecx */ W32((u32)(r_eax+0x144u), r_ecx);
    /* 00686a6b: mov dword ptr [eax + 0x148], ecx */ W32((u32)(r_eax+0x148u), r_ecx);
    /* 00686a71: mov dword ptr [eax + 0x14c], ecx */ W32((u32)(r_eax+0x14cu), r_ecx);
    /* 00686a77: mov dword ptr [eax + 0x154], 0xffffffff */ W32((u32)(r_eax+0x154u), 0xffffffffu);
    /* 00686a81: mov dword ptr [eax + 0x158], ecx */ W32((u32)(r_eax+0x158u), r_ecx);
    /* 00686a87: mov dword ptr [eax + 0x15c], ecx */ W32((u32)(r_eax+0x15cu), r_ecx);
    /* 00686a8d: mov dword ptr [eax + 0x160], ecx */ W32((u32)(r_eax+0x160u), r_ecx);
    /* 00686a93: mov dword ptr [eax + 0x164], ecx */ W32((u32)(r_eax+0x164u), r_ecx);
    /* 00686a99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686a9b: ret  */ FN_RET(0x00686a50); r_esp += 4; return;
}

void f_00686aa0(void) /* sub_686AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686aa0);
    /* 00686aa0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00686aa4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686aa5: call 0x686a50 */ r_esp -= 4; W32(r_esp, 0x686aaau); f_00686a50();
    /* 00686aaa: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00686aae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686ab1: mov dword ptr [edx + 0x150], eax */ W32((u32)(r_edx+0x150u), r_eax);
    /* 00686ab7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686ab9: ret  */ FN_RET(0x00686aa0); r_esp += 4; return;
}

void f_00686ac0(void) /* sub_686AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ac0);
    /* 00686ac0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00686ac4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00686ac8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00686aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686acb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00686acc: call 0x686ae0 */ r_esp -= 4; W32(r_esp, 0x686ad1u); f_00686ae0();
    /* 00686ad1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686ad4: ret  */ FN_RET(0x00686ac0); r_esp += 4; return;
}

void f_00686ae0(void) /* sub_686AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ae0);
    /* 00686ae0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00686ae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00686ae5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686ae6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686ae7: mov ebx, dword ptr [eax + 0x24] */ r_ebx = R32((u32)(r_eax+0x24u));
    /* 00686aea: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00686aed: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686aef: jg 0x686af7 */ if ((!fZ&&fS==fO)) goto L_00686af7;
L_00686af1:; BB(0x00686af1);
    /* 00686af1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686af3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686af5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686af6: ret  */ FN_RET(0x00686ae0); r_esp += 4; return;
L_00686af7:; BB(0x00686af7);
    /* 00686af7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00686afa: lea ebp, [ecx + ebx*4] */ r_ebp = (u32)(r_ecx+r_ebx*4);
    /* 00686afd: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 00686b00: test ch, 4 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00686b03: je 0x686b2e */ if (fZ) goto L_00686b2e;
L_00686b05:; BB(0x00686b05);
    /* 00686b05: mov edx, dword ptr [eax + 0x158] */ r_edx = R32((u32)(r_eax+0x158u));
    /* 00686b0b: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 00686b11: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00686b12: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00686b15: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00686b18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686b19: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 00686b1c: mov dword ptr [eax + 0x158], edx */ W32((u32)(r_eax+0x158u), r_edx);
    /* 00686b22: mov dword ptr [eax + 0x15c], ecx */ W32((u32)(r_eax+0x15cu), r_ecx);
    /* 00686b28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686b29: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00686b2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686b2d: ret  */ FN_RET(0x00686ae0); r_esp += 4; return;
L_00686b2e:; BB(0x00686b2e);
    /* 00686b2e: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00686b32: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686b34: jne 0x686b42 */ if (!fZ) goto L_00686b42;
L_00686b36:; BB(0x00686b36);
    /* 00686b36: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00686b3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686b3c: je 0x686c00 */ if (fZ) goto L_00686c00;
L_00686b42:; BB(0x00686b42);
    /* 00686b42: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686b43: mov edi, ecx */ r_edi = r_ecx;
    /* 00686b45: mov edx, ecx */ r_edx = r_ecx;
    /* 00686b47: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00686b4d: and edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00686b53: and ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00686b59: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686b5f: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00686b63: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00686b67: jne 0x686b93 */ if (!fZ) goto L_00686b93;
L_00686b69:; BB(0x00686b69);
    /* 00686b69: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00686b6c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00686b6f: mov ecx, edx */ r_ecx = r_edx;
    /* 00686b71: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00686b72: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00686b78: test dh, 2 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00686b7b: je 0x686b85 */ if (fZ) goto L_00686b85;
L_00686b7d:; BB(0x00686b7d);
    /* 00686b7d: mov dword ptr [esp + 0x14], 0x200 */ W32((u32)(r_esp+0x14u), 0x200u);
L_00686b85:; BB(0x00686b85);
    /* 00686b85: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00686b87: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686b8d: je 0x686b69 */ if (fZ) goto L_00686b69;
L_00686b8f:; BB(0x00686b8f);
    /* 00686b8f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_00686b93:; BB(0x00686b93);
    /* 00686b93: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686b95: je 0x686bcd */ if (fZ) goto L_00686bcd;
L_00686b97:; BB(0x00686b97);
    /* 00686b97: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00686b9a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00686b9e: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00686ba1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00686ba4: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686ba6: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00686ba8: mov edx, dword ptr [eax + 0x158] */ r_edx = R32((u32)(r_eax+0x158u));
    /* 00686bae: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00686bb1: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 00686bb7: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 00686bba: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00686bbd: mov ecx, dword ptr [edx + ebx*8] */ r_ecx = R32((u32)(r_edx+r_ebx*8));
    /* 00686bc0: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 00686bc3: mov edx, dword ptr [edx + ebx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ebx*8+0x4u));
    /* 00686bc7: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 00686bca: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
L_00686bcd:; BB(0x00686bcd);
    /* 00686bcd: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00686bd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686bd3: je 0x686bff */ if (fZ) goto L_00686bff;
L_00686bd5:; BB(0x00686bd5);
    /* 00686bd5: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00686bd8: mov edx, dword ptr [eax + 0x158] */ r_edx = R32((u32)(r_eax+0x158u));
    /* 00686bde: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 00686be4: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00686be6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00686be7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00686bea: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00686bed: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00686bf0: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 00686bf3: mov dword ptr [eax + 0x158], edx */ W32((u32)(r_eax+0x158u), r_edx);
    /* 00686bf9: mov dword ptr [eax + 0x15c], ecx */ W32((u32)(r_eax+0x15cu), r_ecx);
L_00686bff:; BB(0x00686bff);
    /* 00686bff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00686c00:; BB(0x00686c00);
    /* 00686c00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686c01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686c02: mov eax, 1 */ r_eax = 0x1u;
    /* 00686c07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686c08: ret  */ FN_RET(0x00686ae0); r_esp += 4; return;
}

void f_00686c10(void) /* sub_686C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686c10);
    /* 00686c10: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00686c14: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00686c18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686c1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686c1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00686c1c: call 0x686ae0 */ r_esp -= 4; W32(r_esp, 0x686c21u); f_00686ae0();
    /* 00686c21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686c24: ret  */ FN_RET(0x00686c10); r_esp += 4; return;
}

void f_00686d6c(void) /* __CxxFrameHandler3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686d6c);
    /* 00686d6c: jmp dword ptr [0x6b2218] */ { u32 t = R32((u32)(0x6b2218u)); call_ind(t); return; }
}

void f_00686d72(void) /* sub_686D72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686d72);
    /* 00686d72: cmp ecx, dword ptr [0x781870] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x781870u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686d78: jne 0x686d7c */ if (!fZ) goto L_00686d7c;
L_00686d7a:; BB(0x00686d7a);
    /* 00686d7a: repz ret  */ FN_RET(0x00686d72); r_esp += 4; return;
L_00686d7c:; BB(0x00686d7c);
    /* 00686d7c: jmp 0x687585 */ f_00687585(); return;
}

void f_00686d88(void) /* _purecall */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686d88);
    /* 00686d88: jmp dword ptr [0x6b2228] */ { u32 t = R32((u32)(0x6b2228u)); call_ind(t); return; }
}

void f_00686d8e(void) /* strcpy */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686d8e);
    /* 00686d8e: jmp dword ptr [0x6b222c] */ { u32 t = R32((u32)(0x6b222cu)); call_ind(t); return; }
}

void f_00686de1(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686de1);
    /* 00686de1: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686de5: jne 0x686df8 */ if (!fZ) goto L_00686df8;
L_00686de7:; BB(0x00686de7);
    /* 00686de7: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686dea: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686ded: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00686df0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686df3: call 0x686df9 */ r_esp -= 4; W32(r_esp, 0x686df8u); f_00686df9();
L_00686df8:; BB(0x00686df8);
    /* 00686df8: ret  */ FN_RET(0x00686de1); r_esp += 4; return;
}

void f_00686ea2(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ea2);
    /* 00686ea2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686ea6: jne 0x686eb9 */ if (!fZ) goto L_00686eb9;
L_00686ea8:; BB(0x00686ea8);
    /* 00686ea8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686eab: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686eae: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00686eb1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686eb4: call 0x686df9 */ r_esp -= 4; W32(r_esp, 0x686eb9u); f_00686df9();
L_00686eb9:; BB(0x00686eb9);
    /* 00686eb9: ret  */ FN_RET(0x00686ea2); r_esp += 4; return;
}

void f_00686eba(void) /* abs */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686eba);
    /* 00686eba: jmp dword ptr [0x6b2230] */ { u32 t = R32((u32)(0x6b2230u)); call_ind(t); return; }
}

void f_00686ec0(void) /* strcmp */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ec0);
    /* 00686ec0: jmp dword ptr [0x6b2234] */ { u32 t = R32((u32)(0x6b2234u)); call_ind(t); return; }
}

void f_00686ec6(void) /* strcat */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ec6);
    /* 00686ec6: jmp dword ptr [0x6b2238] */ { u32 t = R32((u32)(0x6b2238u)); call_ind(t); return; }
}

void f_00686ecc(void) /* strlen */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ecc);
    /* 00686ecc: jmp dword ptr [0x6b2240] */ { u32 t = R32((u32)(0x6b2240u)); call_ind(t); return; }
}

void f_00686ed2(void) /* ceil */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ed2);
    /* 00686ed2: jmp dword ptr [0x6b2244] */ { u32 t = R32((u32)(0x6b2244u)); call_ind(t); return; }
}

void f_00686ed8(void) /* qsort */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ed8);
    /* 00686ed8: jmp dword ptr [0x6b2248] */ { u32 t = R32((u32)(0x6b2248u)); call_ind(t); return; }
}

void f_00686ede(void) /* __RTDynamicCast */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ede);
    /* 00686ede: jmp dword ptr [0x6b224c] */ { u32 t = R32((u32)(0x6b224cu)); call_ind(t); return; }
}

void f_00686ee4(void) /* sqrt */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686ee4);
    /* 00686ee4: jmp dword ptr [0x6b2250] */ { u32 t = R32((u32)(0x6b2250u)); call_ind(t); return; }
}

void f_00686f86(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686f86);
    /* 00686f86: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00686f88: call 0x6876ec */ r_esp -= 4; W32(r_esp, 0x686f8du); f_006876ec();
    /* 00686f8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f8e: ret  */ FN_RET(0x00686f86); r_esp += 4; return;
}

void f_00686fa2(void) /* memset */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fa2);
    /* 00686fa2: jmp dword ptr [0x6b2254] */ { u32 t = R32((u32)(0x6b2254u)); call_ind(t); return; }
}

void f_00686fa8(void) /* fclose */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fa8);
    /* 00686fa8: jmp dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); call_ind(t); return; }
}

void f_00686fae(void) /* fread */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fae);
    /* 00686fae: jmp dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); call_ind(t); return; }
}

void f_00686fb4(void) /* floor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fb4);
    /* 00686fb4: jmp dword ptr [0x6b2268] */ { u32 t = R32((u32)(0x6b2268u)); call_ind(t); return; }
}

void f_00686fba(void) /* fmod */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fba);
    /* 00686fba: jmp dword ptr [0x6b226c] */ { u32 t = R32((u32)(0x6b226cu)); call_ind(t); return; }
}

void f_00686fc0(void) /* _CxxThrowException */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fc0);
    /* 00686fc0: jmp dword ptr [0x6b2270] */ { u32 t = R32((u32)(0x6b2270u)); call_ind(t); return; }
}

void f_00686fd8(void) /* log10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fd8);
    /* 00686fd8: jmp dword ptr [0x6b228c] */ { u32 t = R32((u32)(0x6b228cu)); call_ind(t); return; }
}

void f_00686fde(void) /* memcpy */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fde);
    /* 00686fde: jmp dword ptr [0x6b2294] */ { u32 t = R32((u32)(0x6b2294u)); call_ind(t); return; }
}

