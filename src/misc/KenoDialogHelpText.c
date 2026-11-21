#include "protos.h"

void f_0058e080(void) /* KenoDialogHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058e080);
    /* 0058e080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e081: mov ebp, esp */ r_ebp = r_esp;
    /* 0058e083: sub esp, 0x374 */ {  u32 a = r_esp; u32 b = 0x374u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058e089: mov dword ptr [ebp - 0x36c], ecx */ W32((u32)(r_ebp+0xfffffc94u), r_ecx);
    /* 0058e08f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058e096: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e09d: jne 0x58e0a4 */ if (!fZ) goto L_0058e0a4;
L_0058e09f:; BB(0x0058e09f);
    /* 0058e09f: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e0a4:; BB(0x0058e0a4);
    /* 0058e0a4: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058e0a9: mov ecx, dword ptr [eax + 0x2fc] */ r_ecx = R32((u32)(r_eax+0x2fcu));
    /* 0058e0af: mov dword ptr [ebp - 0x348], ecx */ W32((u32)(r_ebp+0xfffffcb8u), r_ecx);
    /* 0058e0b5: mov dword ptr [ebp - 0x344], 0 */ W32((u32)(r_ebp+0xfffffcbcu), 0x0u);
    /* 0058e0bf: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e0c5: mov eax, dword ptr [edx + 0x300] */ r_eax = R32((u32)(r_edx+0x300u));
    /* 0058e0cb: mov dword ptr [ebp - 0x340], eax */ W32((u32)(r_ebp+0xfffffcc0u), r_eax);
    /* 0058e0d1: mov dword ptr [ebp - 0x33c], 1 */ W32((u32)(r_ebp+0xfffffcc4u), 0x1u);
    /* 0058e0db: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e0e1: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 0058e0e7: mov dword ptr [ebp - 0x338], edx */ W32((u32)(r_ebp+0xfffffcc8u), r_edx);
    /* 0058e0ed: mov dword ptr [ebp - 0x334], 2 */ W32((u32)(r_ebp+0xfffffcccu), 0x2u);
    /* 0058e0f7: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058e0fc: mov ecx, dword ptr [eax + 0x308] */ r_ecx = R32((u32)(r_eax+0x308u));
    /* 0058e102: mov dword ptr [ebp - 0x330], ecx */ W32((u32)(r_ebp+0xfffffcd0u), r_ecx);
    /* 0058e108: mov dword ptr [ebp - 0x32c], 3 */ W32((u32)(r_ebp+0xfffffcd4u), 0x3u);
    /* 0058e112: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e118: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 0058e11e: mov dword ptr [ebp - 0x328], eax */ W32((u32)(r_ebp+0xfffffcd8u), r_eax);
    /* 0058e124: mov dword ptr [ebp - 0x324], 4 */ W32((u32)(r_ebp+0xfffffcdcu), 0x4u);
    /* 0058e12e: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e134: mov edx, dword ptr [ecx + 0x3b6c] */ r_edx = R32((u32)(r_ecx+0x3b6cu));
    /* 0058e13a: mov dword ptr [ebp - 0x320], edx */ W32((u32)(r_ebp+0xfffffce0u), r_edx);
    /* 0058e140: mov dword ptr [ebp - 0x31c], 5 */ W32((u32)(r_ebp+0xfffffce4u), 0x5u);
    /* 0058e14a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e14c: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e152: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58e157u); f_005fb5e0();
    /* 0058e157: mov dword ptr [ebp - 0x318], eax */ W32((u32)(r_ebp+0xfffffce8u), r_eax);
    /* 0058e15d: mov dword ptr [ebp - 0x314], 6 */ W32((u32)(r_ebp+0xfffffcecu), 0x6u);
    /* 0058e167: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e169: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e16f: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58e174u); f_005fb5e0();
    /* 0058e174: mov dword ptr [ebp - 0x310], eax */ W32((u32)(r_ebp+0xfffffcf0u), r_eax);
    /* 0058e17a: mov dword ptr [ebp - 0x30c], 7 */ W32((u32)(r_ebp+0xfffffcf4u), 0x7u);
    /* 0058e184: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058e189: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 0058e18f: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0058e195: mov dword ptr [ebp - 0x304], 8 */ W32((u32)(r_ebp+0xfffffcfcu), 0x8u);
    /* 0058e19f: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e1a5: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 0058e1ab: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0058e1b1: mov dword ptr [ebp - 0x300], ecx */ W32((u32)(r_ebp+0xfffffd00u), r_ecx);
    /* 0058e1b7: mov dword ptr [ebp - 0x2fc], 9 */ W32((u32)(r_ebp+0xfffffd04u), 0x9u);
    /* 0058e1c1: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e1c7: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 0058e1cd: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058e1d0: mov dword ptr [ebp - 0x2f8], ecx */ W32((u32)(r_ebp+0xfffffd08u), r_ecx);
    /* 0058e1d6: mov dword ptr [ebp - 0x2f4], 0xa */ W32((u32)(r_ebp+0xfffffd0cu), 0xau);
    /* 0058e1e0: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e1e6: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 0058e1ec: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058e1ef: mov dword ptr [ebp - 0x2f0], ecx */ W32((u32)(r_ebp+0xfffffd10u), r_ecx);
    /* 0058e1f5: mov dword ptr [ebp - 0x2ec], 0xb */ W32((u32)(r_ebp+0xfffffd14u), 0xbu);
    /* 0058e1ff: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e205: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0058e20b: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 0058e211: mov dword ptr [ebp - 0x2e8], ecx */ W32((u32)(r_ebp+0xfffffd18u), r_ecx);
    /* 0058e217: mov dword ptr [ebp - 0x2e4], 0xc */ W32((u32)(r_ebp+0xfffffd1cu), 0xcu);
    /* 0058e221: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e227: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0058e22d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058e230: mov dword ptr [ebp - 0x2e0], ecx */ W32((u32)(r_ebp+0xfffffd20u), r_ecx);
    /* 0058e236: mov dword ptr [ebp - 0x2dc], 0xd */ W32((u32)(r_ebp+0xfffffd24u), 0xdu);
    /* 0058e240: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e246: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0058e24c: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0058e24f: mov dword ptr [ebp - 0x2d8], ecx */ W32((u32)(r_ebp+0xfffffd28u), r_ecx);
    /* 0058e255: mov dword ptr [ebp - 0x2d4], 0xe */ W32((u32)(r_ebp+0xfffffd2cu), 0xeu);
    /* 0058e25f: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e265: mov eax, dword ptr [edx + 0x320] */ r_eax = R32((u32)(r_edx+0x320u));
    /* 0058e26b: mov dword ptr [ebp - 0x2d0], eax */ W32((u32)(r_ebp+0xfffffd30u), r_eax);
    /* 0058e271: mov dword ptr [ebp - 0x2cc], 0xf */ W32((u32)(r_ebp+0xfffffd34u), 0xfu);
    /* 0058e27b: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e281: mov edx, dword ptr [ecx + 0x3b94] */ r_edx = R32((u32)(r_ecx+0x3b94u));
    /* 0058e287: mov dword ptr [ebp - 0x2c8], edx */ W32((u32)(r_ebp+0xfffffd38u), r_edx);
    /* 0058e28d: mov dword ptr [ebp - 0x2c4], 0x10 */ W32((u32)(r_ebp+0xfffffd3cu), 0x10u);
    /* 0058e297: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058e29c: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 0058e2a2: mov dword ptr [ebp - 0x2c0], ecx */ W32((u32)(r_ebp+0xfffffd40u), r_ecx);
    /* 0058e2a8: mov dword ptr [ebp - 0x2bc], 0x11 */ W32((u32)(r_ebp+0xfffffd44u), 0x11u);
    /* 0058e2b2: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e2b8: mov eax, dword ptr [edx + 0x324] */ r_eax = R32((u32)(r_edx+0x324u));
    /* 0058e2be: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058e2c4: mov dword ptr [ebp - 0x2b8], ecx */ W32((u32)(r_ebp+0xfffffd48u), r_ecx);
    /* 0058e2ca: mov dword ptr [ebp - 0x2b4], 0x12 */ W32((u32)(r_ebp+0xfffffd4cu), 0x12u);
    /* 0058e2d4: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e2da: mov eax, dword ptr [edx + 0x324] */ r_eax = R32((u32)(r_edx+0x324u));
    /* 0058e2e0: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0058e2e6: mov dword ptr [ebp - 0x2b0], ecx */ W32((u32)(r_ebp+0xfffffd50u), r_ecx);
    /* 0058e2ec: mov dword ptr [ebp - 0x2ac], 0x13 */ W32((u32)(r_ebp+0xfffffd54u), 0x13u);
    /* 0058e2f6: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e2fc: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 0058e302: mov dword ptr [ebp - 0x2a8], eax */ W32((u32)(r_ebp+0xfffffd58u), r_eax);
    /* 0058e308: mov dword ptr [ebp - 0x2a4], 0x14 */ W32((u32)(r_ebp+0xfffffd5cu), 0x14u);
    /* 0058e312: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e318: mov edx, dword ptr [ecx + 0x3b84] */ r_edx = R32((u32)(r_ecx+0x3b84u));
    /* 0058e31e: mov dword ptr [ebp - 0x2a0], edx */ W32((u32)(r_ebp+0xfffffd60u), r_edx);
    /* 0058e324: mov dword ptr [ebp - 0x29c], 0x15 */ W32((u32)(r_ebp+0xfffffd64u), 0x15u);
    /* 0058e32e: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058e333: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 0058e339: mov dword ptr [ebp - 0x298], ecx */ W32((u32)(r_ebp+0xfffffd68u), r_ecx);
    /* 0058e33f: mov dword ptr [ebp - 0x294], 0x16 */ W32((u32)(r_ebp+0xfffffd6cu), 0x16u);
    /* 0058e349: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0058e350: jmp 0x58e35b */ goto L_0058e35b;
L_0058e352:; BB(0x0058e352);
    /* 0058e352: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e355: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058e358: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0058e35b:; BB(0x0058e35b);
    /* 0058e35b: cmp dword ptr [ebp - 0xc], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e35f: jge 0x58e38a */ if ((fS==fO)) goto L_0058e38a;
L_0058e361:; BB(0x0058e361);
    /* 0058e361: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e364: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e367: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e36d: mov ecx, dword ptr [edx + ecx*4 + 0x1bc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 0058e374: mov dword ptr [ebp + eax*8 - 0x290], ecx */ W32((u32)(r_ebp+r_eax*8+0xfffffd70u), r_ecx);
    /* 0058e37b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e37e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e381: mov dword ptr [ebp + edx*8 - 0x28c], eax */ W32((u32)(r_ebp+r_edx*8+0xfffffd74u), r_eax);
    /* 0058e388: jmp 0x58e352 */ goto L_0058e352;
L_0058e38a:; BB(0x0058e38a);
    /* 0058e38a: mov dword ptr [ebp - 8], 0x50 */ W32((u32)(r_ebp+0xfffffff8u), 0x50u);
    /* 0058e391: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0058e398: jmp 0x58e3a3 */ goto L_0058e3a3;
L_0058e39a:; BB(0x0058e39a);
    /* 0058e39a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e39d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058e3a0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0058e3a3:; BB(0x0058e3a3);
    /* 0058e3a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e3a6: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e3a9: jge 0x58e408 */ if ((fS==fO)) goto L_0058e408;
L_0058e3ab:; BB(0x0058e3ab);
    /* 0058e3ab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e3ae: cmp dword ptr [ebp + eax*8 - 0x290], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*8+0xfffffd70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e3b6: je 0x58e406 */ if (fZ) goto L_0058e406;
L_0058e3b8:; BB(0x0058e3b8);
    /* 0058e3b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058e3bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e3bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e3bf: mov eax, dword ptr [ebp + edx*8 - 0x290] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xfffffd70u));
    /* 0058e3c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e3c9: mov ecx, dword ptr [ebp + ecx*8 - 0x290] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xfffffd70u));
    /* 0058e3d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058e3d2: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0058e3d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e3dau); call_ind(t); }
    /* 0058e3da: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058e3dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e3df: je 0x58e406 */ if (fZ) goto L_0058e406;
L_0058e3e1:; BB(0x0058e3e1);
    /* 0058e3e1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e3e4: mov ecx, dword ptr [ebp + edx*8 - 0x290] */ r_ecx = R32((u32)(r_ebp+r_edx*8+0xfffffd70u));
    /* 0058e3eb: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x58e3f0u); f_005f54a0();
    /* 0058e3f0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0058e3f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e3f5: je 0x58e406 */ if (fZ) goto L_0058e406;
L_0058e3f7:; BB(0x0058e3f7);
    /* 0058e3f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e3fa: mov edx, dword ptr [ebp + ecx*8 - 0x28c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xfffffd74u));
    /* 0058e401: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0058e404: jmp 0x58e408 */ goto L_0058e408;
L_0058e406:; BB(0x0058e406);
    /* 0058e406: jmp 0x58e39a */ goto L_0058e39a;
L_0058e408:; BB(0x0058e408);
    /* 0058e408: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e40c: jl 0x58e5fc */ if ((fS!=fO)) goto L_0058e5fc;
L_0058e412:; BB(0x0058e412);
    /* 0058e412: cmp dword ptr [ebp - 4], 0x4f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e416: jg 0x58e5fc */ if ((!fZ&&fS==fO)) goto L_0058e5fc;
L_0058e41c:; BB(0x0058e41c);
    /* 0058e41c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058e41f: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e425: mov ecx, dword ptr [ecx + eax*4 + 0x1bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 0058e42c: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x58e431u); f_00600230();
    /* 0058e431: mov byte ptr [ebp - 0x34b], al */ W8((u32)(r_ebp+0xfffffcb5u), (u8)r_eax);
    /* 0058e437: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e43d: mov eax, dword ptr [edx + 0x324] */ r_eax = R32((u32)(r_edx+0x324u));
    /* 0058e443: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058e446: mov ecx, dword ptr [eax + ecx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x4u));
    /* 0058e44a: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x58e44fu); f_005f54a0();
    /* 0058e44f: mov byte ptr [ebp - 0x349], al */ W8((u32)(r_ebp+0xfffffcb7u), (u8)r_eax);
    /* 0058e455: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e457: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e45d: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58e462u); f_005fb5e0();
    /* 0058e462: mov dword ptr [ebp - 0x354], eax */ W32((u32)(r_ebp+0xfffffcacu), r_eax);
    /* 0058e468: mov edx, dword ptr [ebp - 0x354] */ r_edx = R32((u32)(r_ebp+0xfffffcacu));
    /* 0058e46e: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0058e474: mov dword ptr [ebp - 0x358], eax */ W32((u32)(r_ebp+0xfffffca8u), r_eax);
    /* 0058e47a: cmp dword ptr [ebp - 0x358], 0x30dfc5 */ {  u32 a = R32((u32)(r_ebp+0xfffffca8u)); u32 b = 0x30dfc5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e484: je 0x58e4f4 */ if (fZ) goto L_0058e4f4;
L_0058e486:; BB(0x0058e486);
    /* 0058e486: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e488: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e48e: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58e493u); f_005fb5e0();
    /* 0058e493: mov dword ptr [ebp - 0x35c], eax */ W32((u32)(r_ebp+0xfffffca4u), r_eax);
    /* 0058e499: mov ecx, dword ptr [ebp - 0x35c] */ r_ecx = R32((u32)(r_ebp+0xfffffca4u));
    /* 0058e49f: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0058e4a5: mov dword ptr [ebp - 0x360], edx */ W32((u32)(r_ebp+0xfffffca0u), r_edx);
    /* 0058e4ab: cmp dword ptr [ebp - 0x360], 0x30dfc6 */ {  u32 a = R32((u32)(r_ebp+0xfffffca0u)); u32 b = 0x30dfc6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e4b5: je 0x58e4f4 */ if (fZ) goto L_0058e4f4;
L_0058e4b7:; BB(0x0058e4b7);
    /* 0058e4b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e4b9: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e4bf: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58e4c4u); f_005fb5e0();
    /* 0058e4c4: mov dword ptr [ebp - 0x364], eax */ W32((u32)(r_ebp+0xfffffc9cu), r_eax);
    /* 0058e4ca: mov eax, dword ptr [ebp - 0x364] */ r_eax = R32((u32)(r_ebp+0xfffffc9cu));
    /* 0058e4d0: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0058e4d6: mov dword ptr [ebp - 0x368], ecx */ W32((u32)(r_ebp+0xfffffc98u), r_ecx);
    /* 0058e4dc: cmp dword ptr [ebp - 0x368], 0x30dfc7 */ {  u32 a = R32((u32)(r_ebp+0xfffffc98u)); u32 b = 0x30dfc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e4e6: je 0x58e4f4 */ if (fZ) goto L_0058e4f4;
L_0058e4e8:; BB(0x0058e4e8);
    /* 0058e4e8: mov dword ptr [ebp - 0x370], 0 */ W32((u32)(r_ebp+0xfffffc90u), 0x0u);
    /* 0058e4f2: jmp 0x58e4fe */ goto L_0058e4fe;
L_0058e4f4:; BB(0x0058e4f4);
    /* 0058e4f4: mov dword ptr [ebp - 0x370], 1 */ W32((u32)(r_ebp+0xfffffc90u), 0x1u);
L_0058e4fe:; BB(0x0058e4fe);
    /* 0058e4fe: mov dl, byte ptr [ebp - 0x370] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc90u))) & 0xffu);
    /* 0058e504: mov byte ptr [ebp - 0x34a], dl */ W8((u32)(r_ebp+0xfffffcb6u), (u8)r_edx);
    /* 0058e50a: movzx eax, byte ptr [ebp - 0x34a] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcb6u));
    /* 0058e511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e513: je 0x58e53e */ if (fZ) goto L_0058e53e;
L_0058e515:; BB(0x0058e515);
    /* 0058e515: push 0x6cdde8 */ { u32 v = 0x6cdde8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e51a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e51fu); f_00630f40();
    /* 0058e51f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e523: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e529: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e52b: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e531: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e537: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e539u); call_ind(t); }
    /* 0058e539: jmp 0x58e5f7 */ goto L_0058e5f7;
L_0058e53e:; BB(0x0058e53e);
    /* 0058e53e: movzx ecx, byte ptr [ebp - 0x34b] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffcb5u));
    /* 0058e545: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e547: je 0x58e57a */ if (fZ) goto L_0058e57a;
L_0058e549:; BB(0x0058e549);
    /* 0058e549: movzx edx, byte ptr [ebp - 0x349] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffcb7u));
    /* 0058e550: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e552: je 0x58e57a */ if (fZ) goto L_0058e57a;
L_0058e554:; BB(0x0058e554);
    /* 0058e554: push 0x6cddc8 */ { u32 v = 0x6cddc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e559: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e55eu); f_00630f40();
    /* 0058e55e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e562: mov eax, dword ptr [ebp - 0x36c] */ r_eax = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e568: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058e56a: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e570: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e576: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e578u); call_ind(t); }
    /* 0058e578: jmp 0x58e5f7 */ goto L_0058e5f7;
L_0058e57a:; BB(0x0058e57a);
    /* 0058e57a: movzx ecx, byte ptr [ebp - 0x34b] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffcb5u));
    /* 0058e581: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e583: je 0x58e5ab */ if (fZ) goto L_0058e5ab;
L_0058e585:; BB(0x0058e585);
    /* 0058e585: push 0x6cddb0 */ { u32 v = 0x6cddb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e58a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e58fu); f_00630f40();
    /* 0058e58f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e592: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e593: mov edx, dword ptr [ebp - 0x36c] */ r_edx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e599: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058e59b: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e5a1: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058e5a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58e5a9u); call_ind(t); }
    /* 0058e5a9: jmp 0x58e5f7 */ goto L_0058e5f7;
L_0058e5ab:; BB(0x0058e5ab);
    /* 0058e5ab: movzx eax, byte ptr [ebp - 0x349] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcb7u));
    /* 0058e5b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e5b4: je 0x58e5dc */ if (fZ) goto L_0058e5dc;
L_0058e5b6:; BB(0x0058e5b6);
    /* 0058e5b6: push 0x6cdd9c */ { u32 v = 0x6cdd9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e5bb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e5c0u); f_00630f40();
    /* 0058e5c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e5c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e5c4: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e5ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e5cc: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e5d2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e5d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e5dau); call_ind(t); }
    /* 0058e5da: jmp 0x58e5f7 */ goto L_0058e5f7;
L_0058e5dc:; BB(0x0058e5dc);
    /* 0058e5dc: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e5e1: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e5e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e5e9: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e5ef: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e5f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e5f7u); call_ind(t); }
L_0058e5f7:; BB(0x0058e5f7);
    /* 0058e5f7: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e5fc:; BB(0x0058e5fc);
    /* 0058e5fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058e603: mov dword ptr [ebp - 8], 0x17 */ W32((u32)(r_ebp+0xfffffff8u), 0x17u);
    /* 0058e60a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0058e611: jmp 0x58e61c */ goto L_0058e61c;
L_0058e613:; BB(0x0058e613);
    /* 0058e613: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e616: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058e619: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0058e61c:; BB(0x0058e61c);
    /* 0058e61c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e61f: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e622: jge 0x58e681 */ if ((fS==fO)) goto L_0058e681;
L_0058e624:; BB(0x0058e624);
    /* 0058e624: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e627: cmp dword ptr [ebp + eax*8 - 0x348], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*8+0xfffffcb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e62f: je 0x58e67f */ if (fZ) goto L_0058e67f;
L_0058e631:; BB(0x0058e631);
    /* 0058e631: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058e634: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e635: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e638: mov eax, dword ptr [ebp + edx*8 - 0x348] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xfffffcb8u));
    /* 0058e63f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e642: mov ecx, dword ptr [ebp + ecx*8 - 0x348] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xfffffcb8u));
    /* 0058e649: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058e64b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0058e651: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e653u); call_ind(t); }
    /* 0058e653: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058e656: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e658: je 0x58e67f */ if (fZ) goto L_0058e67f;
L_0058e65a:; BB(0x0058e65a);
    /* 0058e65a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e65d: mov ecx, dword ptr [ebp + edx*8 - 0x348] */ r_ecx = R32((u32)(r_ebp+r_edx*8+0xfffffcb8u));
    /* 0058e664: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x58e669u); f_005f54a0();
    /* 0058e669: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0058e66c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e66e: je 0x58e67f */ if (fZ) goto L_0058e67f;
L_0058e670:; BB(0x0058e670);
    /* 0058e670: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058e673: mov edx, dword ptr [ebp + ecx*8 - 0x344] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xfffffcbcu));
    /* 0058e67a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0058e67d: jmp 0x58e681 */ goto L_0058e681;
L_0058e67f:; BB(0x0058e67f);
    /* 0058e67f: jmp 0x58e613 */ goto L_0058e613;
L_0058e681:; BB(0x0058e681);
    /* 0058e681: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e685: jne 0x58e6b0 */ if (!fZ) goto L_0058e6b0;
L_0058e687:; BB(0x0058e687);
    /* 0058e687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058e68a: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e68e: jne 0x58e6ab */ if (!fZ) goto L_0058e6ab;
L_0058e690:; BB(0x0058e690);
    /* 0058e690: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e695: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e69b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e69d: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e6a3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e6a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e6abu); call_ind(t); }
L_0058e6ab:; BB(0x0058e6ab);
    /* 0058e6ab: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e6b0:; BB(0x0058e6b0);
    /* 0058e6b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058e6b3: mov dword ptr [ebp - 0x374], ecx */ W32((u32)(r_ebp+0xfffffc8cu), r_ecx);
    /* 0058e6b9: cmp dword ptr [ebp - 0x374], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffc8cu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058e6c0: ja 0x58ebd6 */ if ((!fC&&!fZ)) goto L_0058ebd6;
L_0058e6c6:; BB(0x0058e6c6);
    /* 0058e6c6: mov edx, dword ptr [ebp - 0x374] */ r_edx = R32((u32)(r_ebp+0xfffffc8cu));
    /* 0058e6cc: jmp dword ptr [edx*4 + 0x58ebf8] */ { u32 t = R32((u32)(r_edx*4+0x58ebf8u)); switch (t) { case 0x58e6d3u: goto L_0058e6d3; case 0x58e6fcu: goto L_0058e6fc; case 0x58e725u: goto L_0058e725; case 0x58e74eu: goto L_0058e74e; case 0x58e777u: goto L_0058e777; case 0x58e8adu: goto L_0058e8ad; case 0x58e90bu: goto L_0058e90b; case 0x58e934u: goto L_0058e934; case 0x58e99eu: goto L_0058e99e; case 0x58ea1cu: goto L_0058ea1c; case 0x58ea45u: goto L_0058ea45; case 0x58ea6eu: goto L_0058ea6e; case 0x58ea97u: goto L_0058ea97; case 0x58eac0u: goto L_0058eac0; case 0x58eae9u: goto L_0058eae9; case 0x58eb12u: goto L_0058eb12; case 0x58eb3bu: goto L_0058eb3b; case 0x58eb64u: goto L_0058eb64; case 0x58eb8au: goto L_0058eb8a; case 0x58ebb0u: goto L_0058ebb0; default: UNSUP(0x0058e6cc, "jump table entry is not a known target"); } }
L_0058e6d3:; BB(0x0058e6d3);
    /* 0058e6d3: push 0x6cdd88 */ { u32 v = 0x6cdd88u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e6d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e6ddu); f_00630f40();
    /* 0058e6dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e6e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e6e1: mov eax, dword ptr [ebp - 0x36c] */ r_eax = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e6e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058e6e9: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e6ef: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e6f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e6f7u); call_ind(t); }
    /* 0058e6f7: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e6fc:; BB(0x0058e6fc);
    /* 0058e6fc: push 0x6cdd70 */ { u32 v = 0x6cdd70u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e701: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e706u); f_00630f40();
    /* 0058e706: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e70a: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e710: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e712: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e718: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e71e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e720u); call_ind(t); }
    /* 0058e720: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e725:; BB(0x0058e725);
    /* 0058e725: push 0x6cdd58 */ { u32 v = 0x6cdd58u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e72a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e72fu); f_00630f40();
    /* 0058e72f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e732: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e733: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e739: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e73b: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e741: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e747: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e749u); call_ind(t); }
    /* 0058e749: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e74e:; BB(0x0058e74e);
    /* 0058e74e: push 0x6cdd44 */ { u32 v = 0x6cdd44u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e753: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e758u); f_00630f40();
    /* 0058e758: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e75b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e75c: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e762: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e764: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e76a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e770: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e772u); call_ind(t); }
    /* 0058e772: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e777:; BB(0x0058e777);
    /* 0058e777: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e77d: mov ecx, dword ptr [ecx + 0x30c] */ r_ecx = R32((u32)(r_ecx+0x30cu));
    /* 0058e783: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x58e788u); f_006026d0();
    /* 0058e788: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058e78b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e78d: je 0x58e7b8 */ if (fZ) goto L_0058e7b8;
L_0058e78f:; BB(0x0058e78f);
    /* 0058e78f: push 0x6cdd2c */ { u32 v = 0x6cdd2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e794: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e799u); f_00630f40();
    /* 0058e799: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e79c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e79d: mov eax, dword ptr [ebp - 0x36c] */ r_eax = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e7a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058e7a5: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e7ab: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e7b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e7b3u); call_ind(t); }
    /* 0058e7b3: jmp 0x58e8a8 */ goto L_0058e8a8;
L_0058e7b8:; BB(0x0058e7b8);
    /* 0058e7b8: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e7be: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58e7c3u); f_0058a470();
    /* 0058e7c3: mov dword ptr [ebp - 0x350], eax */ W32((u32)(r_ebp+0xfffffcb0u), r_eax);
    /* 0058e7c9: cmp dword ptr [ebp - 0x350], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e7d0: jne 0x58e84c */ if (!fZ) goto L_0058e84c;
L_0058e7d2:; BB(0x0058e7d2);
    /* 0058e7d2: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e7d8: mov edx, dword ptr [ecx + 0x3b68] */ r_edx = R32((u32)(r_ecx+0x3b68u));
    /* 0058e7de: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0058e7e1: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0058e7e4: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e7e7: je 0x58e800 */ if (fZ) goto L_0058e800;
L_0058e7e9:; BB(0x0058e7e9);
    /* 0058e7e9: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058e7ef: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 0058e7f5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0058e7f8: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0058e7fb: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e7fe: jne 0x58e826 */ if (!fZ) goto L_0058e826;
L_0058e800:; BB(0x0058e800);
    /* 0058e800: push 0x6cdd0c */ { u32 v = 0x6cdd0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e805: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e80au); f_00630f40();
    /* 0058e80a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e80d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e80e: mov eax, dword ptr [ebp - 0x36c] */ r_eax = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e814: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058e816: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e81c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e822: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e824u); call_ind(t); }
    /* 0058e824: jmp 0x58e84a */ goto L_0058e84a;
L_0058e826:; BB(0x0058e826);
    /* 0058e826: push 0x6cdcec */ { u32 v = 0x6cdcecu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e82b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e830u); f_00630f40();
    /* 0058e830: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e834: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e83a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e83c: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e842: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e848: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e84au); call_ind(t); }
L_0058e84a:; BB(0x0058e84a);
    /* 0058e84a: jmp 0x58e8a8 */ goto L_0058e8a8;
L_0058e84c:; BB(0x0058e84c);
    /* 0058e84c: cmp dword ptr [ebp - 0x350], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e853: jl 0x58e884 */ if ((fS!=fO)) goto L_0058e884;
L_0058e855:; BB(0x0058e855);
    /* 0058e855: cmp dword ptr [ebp - 0x350], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffcb0u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e85c: jg 0x58e884 */ if ((!fZ&&fS==fO)) goto L_0058e884;
L_0058e85e:; BB(0x0058e85e);
    /* 0058e85e: push 0x6cdcd4 */ { u32 v = 0x6cdcd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e863: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e868u); f_00630f40();
    /* 0058e868: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e86b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e86c: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e872: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e874: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e87a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e880: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e882u); call_ind(t); }
    /* 0058e882: jmp 0x58e8a8 */ goto L_0058e8a8;
L_0058e884:; BB(0x0058e884);
    /* 0058e884: push 0x6cdd0c */ { u32 v = 0x6cdd0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e889: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e88eu); f_00630f40();
    /* 0058e88e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e891: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e892: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e898: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e89a: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e8a0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e8a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e8a8u); call_ind(t); }
L_0058e8a8:; BB(0x0058e8a8);
    /* 0058e8a8: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e8ad:; BB(0x0058e8ad);
    /* 0058e8ad: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e8b3: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58e8b8u); f_0058a470();
    /* 0058e8b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e8ba: je 0x58e8e2 */ if (fZ) goto L_0058e8e2;
L_0058e8bc:; BB(0x0058e8bc);
    /* 0058e8bc: push 0x6cdcb0 */ { u32 v = 0x6cdcb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e8c1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e8c6u); f_00630f40();
    /* 0058e8c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e8c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e8ca: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e8d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e8d2: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e8d8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e8de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e8e0u); call_ind(t); }
    /* 0058e8e0: jmp 0x58e906 */ goto L_0058e906;
L_0058e8e2:; BB(0x0058e8e2);
    /* 0058e8e2: push 0x6cdc8c */ { u32 v = 0x6cdc8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e8e7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e8ecu); f_00630f40();
    /* 0058e8ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e8ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e8f0: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e8f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e8f8: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e8fe: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e904: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e906u); call_ind(t); }
L_0058e906:; BB(0x0058e906);
    /* 0058e906: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e90b:; BB(0x0058e90b);
    /* 0058e90b: push 0x6cdc74 */ { u32 v = 0x6cdc74u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e910: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e915u); f_00630f40();
    /* 0058e915: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e919: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e91f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058e921: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e927: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e92d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e92fu); call_ind(t); }
    /* 0058e92f: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e934:; BB(0x0058e934);
    /* 0058e934: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e936: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e93c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58e941u); f_005fb5e0();
    /* 0058e941: mov ecx, eax */ r_ecx = r_eax;
    /* 0058e943: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x58e948u); f_006026d0();
    /* 0058e948: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058e94b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e94d: je 0x58e975 */ if (fZ) goto L_0058e975;
L_0058e94f:; BB(0x0058e94f);
    /* 0058e94f: push 0x6cdc5c */ { u32 v = 0x6cdc5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e954: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e959u); f_00630f40();
    /* 0058e959: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e95c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e95d: mov edx, dword ptr [ebp - 0x36c] */ r_edx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e963: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058e965: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e96b: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058e971: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58e973u); call_ind(t); }
    /* 0058e973: jmp 0x58e999 */ goto L_0058e999;
L_0058e975:; BB(0x0058e975);
    /* 0058e975: push 0x6cdc34 */ { u32 v = 0x6cdc34u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e97a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e97fu); f_00630f40();
    /* 0058e97f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e983: mov eax, dword ptr [ebp - 0x36c] */ r_eax = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e989: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058e98b: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e991: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058e997: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58e999u); call_ind(t); }
L_0058e999:; BB(0x0058e999);
    /* 0058e999: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058e99e:; BB(0x0058e99e);
    /* 0058e99e: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058e9a4: mov ecx, dword ptr [ecx + 0x310] */ r_ecx = R32((u32)(r_ecx+0x310u));
    /* 0058e9aa: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x58e9afu); f_006026d0();
    /* 0058e9af: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058e9b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e9b4: jne 0x58e9cd */ if (!fZ) goto L_0058e9cd;
L_0058e9b6:; BB(0x0058e9b6);
    /* 0058e9b6: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058e9bb: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 0058e9c1: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x58e9c6u); f_00600230();
    /* 0058e9c6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058e9c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e9cb: je 0x58e9f3 */ if (fZ) goto L_0058e9f3;
L_0058e9cd:; BB(0x0058e9cd);
    /* 0058e9cd: push 0x6cdc18 */ { u32 v = 0x6cdc18u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e9d2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e9d7u); f_00630f40();
    /* 0058e9d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e9da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e9db: mov edx, dword ptr [ebp - 0x36c] */ r_edx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e9e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058e9e3: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058e9e9: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0058e9ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58e9f1u); call_ind(t); }
    /* 0058e9f1: jmp 0x58ea17 */ goto L_0058ea17;
L_0058e9f3:; BB(0x0058e9f3);
    /* 0058e9f3: push 0x6cdbfc */ { u32 v = 0x6cdbfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e9f8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58e9fdu); f_00630f40();
    /* 0058e9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ea00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea01: mov eax, dword ptr [ebp - 0x36c] */ r_eax = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058ea09: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea0f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058ea15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ea17u); call_ind(t); }
L_0058ea17:; BB(0x0058ea17);
    /* 0058ea17: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058ea1c:; BB(0x0058ea1c);
    /* 0058ea1c: push 0x6cdbe0 */ { u32 v = 0x6cdbe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea21: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58ea26u); f_00630f40();
    /* 0058ea26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ea29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea2a: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea30: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ea32: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea38: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058ea3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ea40u); call_ind(t); }
    /* 0058ea40: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058ea45:; BB(0x0058ea45);
    /* 0058ea45: push 0x6cdbc0 */ { u32 v = 0x6cdbc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58ea4fu); f_00630f40();
    /* 0058ea4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ea52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea53: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ea5b: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea61: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058ea67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ea69u); call_ind(t); }
    /* 0058ea69: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058ea6e:; BB(0x0058ea6e);
    /* 0058ea6e: push 0x6cdba4 */ { u32 v = 0x6cdba4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea73: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58ea78u); f_00630f40();
    /* 0058ea78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ea7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea7c: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea82: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ea84: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ea8a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058ea90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ea92u); call_ind(t); }
    /* 0058ea92: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058ea97:; BB(0x0058ea97);
    /* 0058ea97: push 0x6cdb80 */ { u32 v = 0x6cdb80u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ea9c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58eaa1u); f_00630f40();
    /* 0058eaa1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eaa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eaa5: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eaab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058eaad: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eab3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058eab9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eabbu); call_ind(t); }
    /* 0058eabb: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058eac0:; BB(0x0058eac0);
    /* 0058eac0: push 0x6cdb64 */ { u32 v = 0x6cdb64u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eac5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58eacau); f_00630f40();
    /* 0058eaca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eacd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eace: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ead4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ead6: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eadc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058eae2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eae4u); call_ind(t); }
    /* 0058eae4: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058eae9:; BB(0x0058eae9);
    /* 0058eae9: push 0x6cdb48 */ { u32 v = 0x6cdb48u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eaee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58eaf3u); f_00630f40();
    /* 0058eaf3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eaf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eaf7: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eafd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058eaff: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb05: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058eb0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eb0du); call_ind(t); }
    /* 0058eb0d: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058eb12:; BB(0x0058eb12);
    /* 0058eb12: push 0x6cdb2c */ { u32 v = 0x6cdb2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb17: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58eb1cu); f_00630f40();
    /* 0058eb1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb20: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058eb28: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb2e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058eb34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eb36u); call_ind(t); }
    /* 0058eb36: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058eb3b:; BB(0x0058eb3b);
    /* 0058eb3b: push 0x6cdb10 */ { u32 v = 0x6cdb10u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb40: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58eb45u); f_00630f40();
    /* 0058eb45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eb48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb49: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb4f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058eb51: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb57: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058eb5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eb5fu); call_ind(t); }
    /* 0058eb5f: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058eb64:; BB(0x0058eb64);
    /* 0058eb64: push 0x6cdaf0 */ { u32 v = 0x6cdaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58eb6eu); f_00630f40();
    /* 0058eb6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eb71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb72: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb78: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058eb7a: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb80: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058eb86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eb88u); call_ind(t); }
    /* 0058eb88: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058eb8a:; BB(0x0058eb8a);
    /* 0058eb8a: push 0x6cdad4 */ { u32 v = 0x6cdad4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb8f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58eb94u); f_00630f40();
    /* 0058eb94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eb97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb98: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eb9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058eba0: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058eba6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058ebac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ebaeu); call_ind(t); }
    /* 0058ebae: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058ebb0:; BB(0x0058ebb0);
    /* 0058ebb0: push 0x6cdabc */ { u32 v = 0x6cdabcu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebb5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58ebbau); f_00630f40();
    /* 0058ebba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ebbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebbe: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ebc4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ebc6: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 0058ebcc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058ebd2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ebd4u); call_ind(t); }
    /* 0058ebd4: jmp 0x58ebf1 */ goto L_0058ebf1;
L_0058ebd6:; BB(0x0058ebd6);
    /* 0058ebd6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0058ebd8: jne 0x58ebf1 */ if (!fZ) goto L_0058ebf1;
L_0058ebda:; BB(0x0058ebda);
    /* 0058ebda: push 0x9a5 */ { u32 v = 0x9a5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebdf: push 0x6ccecc */ { u32 v = 0x6cceccu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebe4: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebe9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x58ebeeu); f_005e9f20();
    /* 0058ebee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058ebf1:; BB(0x0058ebf1);
    /* 0058ebf1: mov esp, ebp */ r_esp = r_ebp;
    /* 0058ebf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058ebf4: ret 4 */ FN_RET(0x0058e080); r_esp += 8; return;
}

