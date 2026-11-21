#include "protos.h"

void f_0067d090(void) /* sub_67D090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067d090);
    /* 0067d090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067d091: mov ebp, esp */ r_ebp = r_esp;
    /* 0067d093: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d095: push 0x6adb22 */ { u32 v = 0x6adb22u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d09a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067d0a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0a1: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067d0a7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067d0ac: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067d0ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0af: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067d0b2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067d0b8: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0067d0bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0bd: push 0x1f5d */ { u32 v = 0x1f5du; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0c2: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0c7: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067d0cc: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067d0cf: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67d0d4u); f_006044b0();
    /* 0067d0d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0d6: push 0x1f5e */ { u32 v = 0x1f5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0db: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0e0: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067d0e6: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067d0e9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67d0eeu); f_006044b0();
    /* 0067d0ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0f0: push 0x1f5f */ { u32 v = 0x1f5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0f5: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d0fa: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067d100: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067d103: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67d108u); f_006044b0();
    /* 0067d108: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d10a: push 0x1f60 */ { u32 v = 0x1f60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d10f: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d114: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067d119: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067d11c: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67d121u); f_006044b0();
    /* 0067d121: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d123: push 0x1f61 */ { u32 v = 0x1f61u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d128: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d12d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067d133: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067d136: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67d13bu); f_006044b0();
    /* 0067d13b: mov dword ptr [0x16306fc], 0 */ W32((u32)(0x16306fcu), 0x0u);
    /* 0067d145: jmp 0x67d156 */ goto L_0067d156;
L_0067d147:; BB(0x0067d147);
    /* 0067d147: mov edx, dword ptr [0x16306fc] */ r_edx = R32((u32)(0x16306fcu));
    /* 0067d14d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067d150: mov dword ptr [0x16306fc], edx */ W32((u32)(0x16306fcu), r_edx);
L_0067d156:; BB(0x0067d156);
    /* 0067d156: cmp dword ptr [0x16306fc], 4 */ {  u32 a = R32((u32)(0x16306fcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067d15d: jge 0x67d181 */ if ((fS==fO)) goto L_0067d181;
L_0067d15f:; BB(0x0067d15f);
    /* 0067d15f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d161: mov eax, dword ptr [0x16306fc] */ r_eax = R32((u32)(0x16306fcu));
    /* 0067d166: add eax, 0x249f36 */ {  u32 a = r_eax; u32 b = 0x249f36u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067d16b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067d16c: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d171: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067d177: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067d17a: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67d17fu); f_006044b0();
    /* 0067d17f: jmp 0x67d147 */ goto L_0067d147;
L_0067d181:; BB(0x0067d181);
    /* 0067d181: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0067d184: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0067d187: cmp dword ptr [ebp - 0x6c], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067d18b: ja 0x67dedc */ if ((!fC&&!fZ)) goto L_0067dedc;
L_0067d191:; BB(0x0067d191);
    /* 0067d191: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0067d194: jmp dword ptr [eax*4 + 0x67def0] */ { u32 t = R32((u32)(r_eax*4+0x67def0u)); switch (t) { case 0x67d19bu: goto L_0067d19b; case 0x67d3e2u: goto L_0067d3e2; case 0x67d472u: goto L_0067d472; case 0x67d4edu: goto L_0067d4ed; case 0x67d591u: goto L_0067d591; case 0x67d60cu: goto L_0067d60c; case 0x67d62eu: goto L_0067d62e; case 0x67d66eu: goto L_0067d66e; case 0x67d6aeu: goto L_0067d6ae; case 0x67d758u: goto L_0067d758; case 0x67d7dcu: goto L_0067d7dc; case 0x67d7feu: goto L_0067d7fe; case 0x67d85cu: goto L_0067d85c; case 0x67d913u: goto L_0067d913; case 0x67d935u: goto L_0067d935; case 0x67d9aau: goto L_0067d9aa; case 0x67d9eau: goto L_0067d9ea; case 0x67da5fu: goto L_0067da5f; case 0x67da9fu: goto L_0067da9f; case 0x67db14u: goto L_0067db14; case 0x67db54u: goto L_0067db54; case 0x67dbfau: goto L_0067dbfa; case 0x67dc1cu: goto L_0067dc1c; case 0x67dcc9u: goto L_0067dcc9; case 0x67dd09u: goto L_0067dd09; case 0x67dd93u: goto L_0067dd93; case 0x67de17u: goto L_0067de17; case 0x67deb0u: goto L_0067deb0; case 0x67decfu: goto L_0067decf; default: UNSUP(0x0067d194, "jump table entry is not a known target"); } }
L_0067d19b:; BB(0x0067d19b);
    /* 0067d19b: mov dword ptr [0x16306fc], 0 */ W32((u32)(0x16306fcu), 0x0u);
    /* 0067d1a5: jmp 0x67d1b6 */ goto L_0067d1b6;
L_0067d1a7:; BB(0x0067d1a7);
    /* 0067d1a7: mov ecx, dword ptr [0x16306fc] */ r_ecx = R32((u32)(0x16306fcu));
    /* 0067d1ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067d1b0: mov dword ptr [0x16306fc], ecx */ W32((u32)(0x16306fcu), r_ecx);
L_0067d1b6:; BB(0x0067d1b6);
    /* 0067d1b6: cmp dword ptr [0x16306fc], 4 */ {  u32 a = R32((u32)(0x16306fcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067d1bd: jge 0x67d27a */ if ((fS==fO)) goto L_0067d27a;
L_0067d1c3:; BB(0x0067d1c3);
    /* 0067d1c3: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d1c8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67d1cdu); f_00686d82();
    /* 0067d1cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067d1d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067d1d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067d1da: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067d1de: je 0x67d1ed */ if (fZ) goto L_0067d1ed;
L_0067d1e0:; BB(0x0067d1e0);
    /* 0067d1e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067d1e3: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67d1e8u); f_005f5f50();
    /* 0067d1e8: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0067d1eb: jmp 0x67d1f4 */ goto L_0067d1f4;
L_0067d1ed:; BB(0x0067d1ed);
    /* 0067d1ed: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0067d1f4:; BB(0x0067d1f4);
    /* 0067d1f4: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0067d1f7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0067d1fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067d201: mov eax, dword ptr [0x16306fc] */ r_eax = R32((u32)(0x16306fcu));
    /* 0067d206: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d209: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067d20c: mov dword ptr [ecx + eax*4 + 0x25c], edx */ W32((u32)(r_ecx+r_eax*4+0x25cu), r_edx);
    /* 0067d213: mov eax, dword ptr [0x16306fc] */ r_eax = R32((u32)(0x16306fcu));
    /* 0067d218: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d21b: mov edx, dword ptr [ecx + eax*4 + 0x25c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x25cu));
    /* 0067d222: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d225: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067d228: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067d22b: mov edx, dword ptr [0x16306fc] */ r_edx = R32((u32)(0x16306fcu));
    /* 0067d231: add edx, 0x249f36 */ {  u32 a = r_edx; u32 b = 0x249f36u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067d237: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d238: mov eax, dword ptr [0x16306fc] */ r_eax = R32((u32)(0x16306fcu));
    /* 0067d23d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d240: mov ecx, dword ptr [ecx + eax*4 + 0x25c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x25cu));
    /* 0067d247: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67d24cu); f_005eaf00();
    /* 0067d24c: mov edx, dword ptr [0x16306fc] */ r_edx = R32((u32)(0x16306fcu));
    /* 0067d252: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d255: mov ecx, dword ptr [eax + edx*4 + 0x25c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x25cu));
    /* 0067d25c: mov edx, dword ptr [0x16306fc] */ r_edx = R32((u32)(0x16306fcu));
    /* 0067d262: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d265: mov edx, dword ptr [eax + edx*4 + 0x25c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x25cu));
    /* 0067d26c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0067d26e: mov ecx, edx */ r_ecx = r_edx;
    /* 0067d270: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0067d273: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67d275u); call_ind(t); }
    /* 0067d275: jmp 0x67d1a7 */ goto L_0067d1a7;
L_0067d27a:; BB(0x0067d27a);
    /* 0067d27a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d27c: push 0xc350 */ { u32 v = 0xc350u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d281: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d283: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d285: push 0x249f36 */ { u32 v = 0x249f36u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d28a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d28d: mov ecx, dword ptr [eax + 0x25c] */ r_ecx = R32((u32)(r_eax+0x25cu));
    /* 0067d293: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67d298u); f_005eae80();
    /* 0067d298: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d29a: push 0xd6d8 */ { u32 v = 0xd6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d29f: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2a1: push -0x1e */ { u32 v = 0xffffffe2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2a3: push 0x249f37 */ { u32 v = 0x249f37u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2a8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d2ab: mov ecx, dword ptr [ecx + 0x260] */ r_ecx = R32((u32)(r_ecx+0x260u));
    /* 0067d2b1: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67d2b6u); f_005eae80();
    /* 0067d2b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2b8: push 0xe678 */ { u32 v = 0xe678u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2bf: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2c4: push 0x249f38 */ { u32 v = 0x249f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2c9: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d2cc: mov ecx, dword ptr [edx + 0x264] */ r_ecx = R32((u32)(r_edx+0x264u));
    /* 0067d2d2: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67d2d7u); f_005eae80();
    /* 0067d2d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2d9: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2e0: push -0x28 */ { u32 v = 0xffffffd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2e2: push 0x249f39 */ { u32 v = 0x249f39u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d2e7: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d2ea: mov ecx, dword ptr [eax + 0x268] */ r_ecx = R32((u32)(r_eax+0x268u));
    /* 0067d2f0: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67d2f5u); f_005eae80();
    /* 0067d2f5: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d2f8: mov edx, dword ptr [ecx + 0x25c] */ r_edx = R32((u32)(r_ecx+0x25cu));
    /* 0067d2fe: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d301: mov ecx, dword ptr [eax + 0x25c] */ r_ecx = R32((u32)(r_eax+0x25cu));
    /* 0067d307: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d309: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067d30c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d30eu); call_ind(t); }
    /* 0067d30e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d311: mov edx, dword ptr [ecx + 0x260] */ r_edx = R32((u32)(r_ecx+0x260u));
    /* 0067d317: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d31a: mov ecx, dword ptr [eax + 0x260] */ r_ecx = R32((u32)(r_eax+0x260u));
    /* 0067d320: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d322: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067d325: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d327u); call_ind(t); }
    /* 0067d327: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d32a: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d330: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d333: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d339: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d33b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067d33e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d340u); call_ind(t); }
    /* 0067d340: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d343: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d349: mov dword ptr [edx + 0x184], 6 */ W32((u32)(r_edx+0x184u), 0x6u);
    /* 0067d353: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d356: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d35c: mov dword ptr [ecx + 0x188], 0xa */ W32((u32)(r_ecx+0x188u), 0xau);
    /* 0067d366: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d369: mov eax, dword ptr [edx + 0x268] */ r_eax = R32((u32)(r_edx+0x268u));
    /* 0067d36f: mov dword ptr [eax + 0x184], 6 */ W32((u32)(r_eax+0x184u), 0x6u);
    /* 0067d379: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d37c: mov edx, dword ptr [ecx + 0x268] */ r_edx = R32((u32)(r_ecx+0x268u));
    /* 0067d382: mov dword ptr [edx + 0x188], 8 */ W32((u32)(r_edx+0x188u), 0x8u);
    /* 0067d38c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d38e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d38f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067d395: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067d398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d399: fld1  */ FPUSH(1.0);
    /* 0067d39b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067d39e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d3a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d3a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d3a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d3a6: push 0x1f5d */ { u32 v = 0x1f5du; r_esp -= 4; W32(r_esp, v); }
    /* 0067d3ab: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067d3b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067d3b2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067d3b8: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067d3be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d3c0u); call_ind(t); }
    /* 0067d3c0: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d3c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d3c4: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d3c7: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d3cd: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d3d0: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d3d6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d3d8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d3db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d3ddu); call_ind(t); }
    /* 0067d3dd: jmp 0x67dedc */ goto L_0067dedc;
L_0067d3e2:; BB(0x0067d3e2);
    /* 0067d3e2: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d3e5: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d3eb: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d3ee: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d3f4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d3f6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0067d3f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d3fbu); call_ind(t); }
    /* 0067d3fb: mov dword ptr [0x16306f8], eax */ W32((u32)(0x16306f8u), r_eax);
    /* 0067d400: mov ecx, dword ptr [0x16306f8] */ r_ecx = R32((u32)(0x16306f8u));
    /* 0067d406: sub ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067d409: mov dword ptr [0x16306f4], ecx */ W32((u32)(0x16306f4u), r_ecx);
    /* 0067d40f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d411: push 0xe678 */ { u32 v = 0xe678u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d416: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d418: mov edx, dword ptr [0x16306f4] */ r_edx = R32((u32)(0x16306f4u));
    /* 0067d41e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d41f: push 0x249f38 */ { u32 v = 0x249f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d424: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d427: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d42d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67d432u); f_005eae80();
    /* 0067d432: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d434: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d437: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d43d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d440: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d446: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d448: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d44e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d450u); call_ind(t); }
    /* 0067d450: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d452: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d454: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d457: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d45d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d460: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d466: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d468: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d46b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d46du); call_ind(t); }
    /* 0067d46d: jmp 0x67dedc */ goto L_0067dedc;
L_0067d472:; BB(0x0067d472);
    /* 0067d472: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d474: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67d479u); f_00686d82();
    /* 0067d479: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067d47c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067d47f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067d486: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067d48a: je 0x67d4a5 */ if (fZ) goto L_0067d4a5;
L_0067d48c:; BB(0x0067d48c);
    /* 0067d48c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d48f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d495: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d496: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d498: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067d49b: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67d4a0u); f_00600f30();
    /* 0067d4a0: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0067d4a3: jmp 0x67d4ac */ goto L_0067d4ac;
L_0067d4a5:; BB(0x0067d4a5);
    /* 0067d4a5: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0067d4ac:; BB(0x0067d4ac);
    /* 0067d4ac: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067d4af: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067d4b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067d4b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067d4bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d4bd: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d4c0: mov ecx, dword ptr [edx + 0x264] */ r_ecx = R32((u32)(r_edx+0x264u));
    /* 0067d4c6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67d4cbu); f_005f5d50();
    /* 0067d4cb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d4cd: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d4d0: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d4d6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d4d9: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067d4df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067d4e1: mov ecx, eax */ r_ecx = r_eax;
    /* 0067d4e3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067d4e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d4e8u); call_ind(t); }
    /* 0067d4e8: jmp 0x67dedc */ goto L_0067dedc;
L_0067d4ed:; BB(0x0067d4ed);
    /* 0067d4ed: cmp dword ptr [0x16306f4], -0x18 */ {  u32 a = R32((u32)(0x16306f4u)); u32 b = 0xffffffe8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067d4f4: jge 0x67d515 */ if ((fS==fO)) goto L_0067d515;
L_0067d4f6:; BB(0x0067d4f6);
    /* 0067d4f6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d4f8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d4fa: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d4fd: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d503: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d506: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d50c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d50e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d511: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d513u); call_ind(t); }
    /* 0067d513: jmp 0x67d58c */ goto L_0067d58c;
L_0067d515:; BB(0x0067d515);
    /* 0067d515: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d517: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67d51cu); f_00686d82();
    /* 0067d51c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067d51f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067d522: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067d529: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067d52d: je 0x67d549 */ if (fZ) goto L_0067d549;
L_0067d52f:; BB(0x0067d52f);
    /* 0067d52f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d531: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d533: mov ecx, dword ptr [0x16306f4] */ r_ecx = R32((u32)(0x16306f4u));
    /* 0067d539: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d53a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d53c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067d53f: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67d544u); f_00606e60();
    /* 0067d544: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0067d547: jmp 0x67d550 */ goto L_0067d550;
L_0067d549:; BB(0x0067d549);
    /* 0067d549: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0067d550:; BB(0x0067d550);
    /* 0067d550: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0067d553: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0067d556: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067d55d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067d560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067d561: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d564: mov ecx, dword ptr [ecx + 0x264] */ r_ecx = R32((u32)(r_ecx+0x264u));
    /* 0067d56a: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67d56fu); f_005f6050();
    /* 0067d56f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d571: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d573: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d576: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067d57c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d57f: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067d585: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067d587: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d58a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d58cu); call_ind(t); }
L_0067d58c:; BB(0x0067d58c);
    /* 0067d58c: jmp 0x67dedc */ goto L_0067dedc;
L_0067d591:; BB(0x0067d591);
    /* 0067d591: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d593: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67d598u); f_00686d82();
    /* 0067d598: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067d59b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067d59e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067d5a5: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067d5a9: je 0x67d5c4 */ if (fZ) goto L_0067d5c4;
L_0067d5ab:; BB(0x0067d5ab);
    /* 0067d5ab: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d5ae: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d5b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d5b5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d5b7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067d5ba: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67d5bfu); f_00600f30();
    /* 0067d5bf: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0067d5c2: jmp 0x67d5cb */ goto L_0067d5cb;
L_0067d5c4:; BB(0x0067d5c4);
    /* 0067d5c4: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0067d5cb:; BB(0x0067d5cb);
    /* 0067d5cb: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067d5ce: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067d5d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067d5d8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067d5db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d5dc: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d5df: mov ecx, dword ptr [edx + 0x264] */ r_ecx = R32((u32)(r_edx+0x264u));
    /* 0067d5e5: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67d5eau); f_005f5d50();
    /* 0067d5ea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d5ec: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d5ef: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d5f5: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d5f8: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067d5fe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067d600: mov ecx, eax */ r_ecx = r_eax;
    /* 0067d602: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067d605: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d607u); call_ind(t); }
    /* 0067d607: jmp 0x67dedc */ goto L_0067dedc;
L_0067d60c:; BB(0x0067d60c);
    /* 0067d60c: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d60e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d610: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d613: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d619: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d61c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d622: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d624: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d627: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d629u); call_ind(t); }
    /* 0067d629: jmp 0x67dedc */ goto L_0067dedc;
L_0067d62e:; BB(0x0067d62e);
    /* 0067d62e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d630: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d633: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d639: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d63c: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d642: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d644: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d64a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d64cu); call_ind(t); }
    /* 0067d64c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d64e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d650: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d653: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d659: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d65c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d662: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d664: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d667: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d669u); call_ind(t); }
    /* 0067d669: jmp 0x67dedc */ goto L_0067dedc;
L_0067d66e:; BB(0x0067d66e);
    /* 0067d66e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d670: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d673: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d679: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d67c: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d682: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d684: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d68a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d68cu); call_ind(t); }
    /* 0067d68c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d68e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d690: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d693: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d699: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d69c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d6a2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d6a4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d6a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d6a9u); call_ind(t); }
    /* 0067d6a9: jmp 0x67dedc */ goto L_0067dedc;
L_0067d6ae:; BB(0x0067d6ae);
    /* 0067d6ae: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d6b0: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d6b3: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d6b9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d6bc: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d6c2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d6c4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d6ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d6ccu); call_ind(t); }
    /* 0067d6cc: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d6cf: mov edx, dword ptr [ecx + 0x268] */ r_edx = R32((u32)(r_ecx+0x268u));
    /* 0067d6d5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d6d8: mov ecx, dword ptr [eax + 0x268] */ r_ecx = R32((u32)(r_eax+0x268u));
    /* 0067d6de: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d6e0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067d6e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d6e5u); call_ind(t); }
    /* 0067d6e5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d6e7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67d6ecu); f_00686d82();
    /* 0067d6ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067d6ef: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067d6f2: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067d6f9: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067d6fd: je 0x67d710 */ if (fZ) goto L_0067d710;
L_0067d6ff:; BB(0x0067d6ff);
    /* 0067d6ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d701: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d703: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067d706: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67d70bu); f_00600f30();
    /* 0067d70b: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0067d70e: jmp 0x67d717 */ goto L_0067d717;
L_0067d710:; BB(0x0067d710);
    /* 0067d710: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0067d717:; BB(0x0067d717);
    /* 0067d717: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0067d71a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0067d71d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067d724: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067d727: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d728: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d72b: mov ecx, dword ptr [eax + 0x268] */ r_ecx = R32((u32)(r_eax+0x268u));
    /* 0067d731: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67d736u); f_005f5d50();
    /* 0067d736: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d738: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d73a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d73d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d743: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d746: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d74c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d74e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d751: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d753u); call_ind(t); }
    /* 0067d753: jmp 0x67dedc */ goto L_0067dedc;
L_0067d758:; BB(0x0067d758);
    /* 0067d758: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d75a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67d75fu); f_00686d82();
    /* 0067d75f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067d762: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067d765: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067d76c: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067d770: je 0x67d78e */ if (fZ) goto L_0067d78e;
L_0067d772:; BB(0x0067d772);
    /* 0067d772: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d775: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d77b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d77c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d77e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067d781: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67d786u); f_00600f30();
    /* 0067d786: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0067d78c: jmp 0x67d798 */ goto L_0067d798;
L_0067d78e:; BB(0x0067d78e);
    /* 0067d78e: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0067d798:; BB(0x0067d798);
    /* 0067d798: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0067d79e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067d7a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067d7a8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067d7ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d7ac: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d7af: mov ecx, dword ptr [edx + 0x264] */ r_ecx = R32((u32)(r_edx+0x264u));
    /* 0067d7b5: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67d7bau); f_005f5d50();
    /* 0067d7ba: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d7bc: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d7bf: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d7c5: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d7c8: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067d7ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067d7d0: mov ecx, eax */ r_ecx = r_eax;
    /* 0067d7d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067d7d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d7d7u); call_ind(t); }
    /* 0067d7d7: jmp 0x67dedc */ goto L_0067dedc;
L_0067d7dc:; BB(0x0067d7dc);
    /* 0067d7dc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d7de: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d7e0: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d7e3: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d7e9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d7ec: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d7f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d7f4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d7f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d7f9u); call_ind(t); }
    /* 0067d7f9: jmp 0x67dedc */ goto L_0067dedc;
L_0067d7fe:; BB(0x0067d7fe);
    /* 0067d7fe: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d800: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d803: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d809: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d80c: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d812: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d814: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d81a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d81cu); call_ind(t); }
    /* 0067d81c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d81e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d821: mov edx, dword ptr [ecx + 0x268] */ r_edx = R32((u32)(r_ecx+0x268u));
    /* 0067d827: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d82a: mov ecx, dword ptr [eax + 0x268] */ r_ecx = R32((u32)(r_eax+0x268u));
    /* 0067d830: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d832: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d838: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d83au); call_ind(t); }
    /* 0067d83a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d83c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d83e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d841: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d847: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d84a: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d850: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d852: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d855: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d857u); call_ind(t); }
    /* 0067d857: jmp 0x67dedc */ goto L_0067dedc;
L_0067d85c:; BB(0x0067d85c);
    /* 0067d85c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d85f: mov edx, dword ptr [ecx + 0x268] */ r_edx = R32((u32)(r_ecx+0x268u));
    /* 0067d865: mov dword ptr [edx + 0x184], 2 */ W32((u32)(r_edx+0x184u), 0x2u);
    /* 0067d86f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d871: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67d876u); f_00686d82();
    /* 0067d876: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067d879: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067d87c: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0067d883: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067d887: je 0x67d8a9 */ if (fZ) goto L_0067d8a9;
L_0067d889:; BB(0x0067d889);
    /* 0067d889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d88b: push -9 */ { u32 v = 0xfffffff7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d88d: push -0x19 */ { u32 v = 0xffffffe7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d88f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d892: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d898: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d899: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067d89c: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67d8a1u); f_00606e60();
    /* 0067d8a1: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0067d8a7: jmp 0x67d8b3 */ goto L_0067d8b3;
L_0067d8a9:; BB(0x0067d8a9);
    /* 0067d8a9: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0067d8b3:; BB(0x0067d8b3);
    /* 0067d8b3: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0067d8b9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0067d8bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067d8c3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067d8c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067d8c7: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d8ca: mov ecx, dword ptr [ecx + 0x268] */ r_ecx = R32((u32)(r_ecx+0x268u));
    /* 0067d8d0: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67d8d5u); f_005f6050();
    /* 0067d8d5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d8d7: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d8da: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 0067d8e0: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d8e3: mov ecx, dword ptr [ecx + 0x264] */ r_ecx = R32((u32)(r_ecx+0x264u));
    /* 0067d8e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067d8eb: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d8f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d8f3u); call_ind(t); }
    /* 0067d8f3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d8f5: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d8f8: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d8fe: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d901: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d907: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d909: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067d90c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d90eu); call_ind(t); }
    /* 0067d90e: jmp 0x67dedc */ goto L_0067dedc;
L_0067d913:; BB(0x0067d913);
    /* 0067d913: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d915: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d917: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d91a: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d920: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d923: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d929: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d92b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d92e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d930u); call_ind(t); }
    /* 0067d930: jmp 0x67dedc */ goto L_0067dedc;
L_0067d935:; BB(0x0067d935);
    /* 0067d935: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d937: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d938: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067d93e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067d941: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d942: fld1  */ FPUSH(1.0);
    /* 0067d944: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067d947: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d949: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d94b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d94d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d94f: push 0x1f5e */ { u32 v = 0x1f5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d954: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067d95a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067d95c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067d962: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067d968: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d96au); call_ind(t); }
    /* 0067d96a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d96c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d96f: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d975: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d978: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d97e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d980: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d986: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d988u); call_ind(t); }
    /* 0067d988: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d98a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d98c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d98f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d995: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d998: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d99e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d9a0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d9a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d9a5u); call_ind(t); }
    /* 0067d9a5: jmp 0x67dedc */ goto L_0067dedc;
L_0067d9aa:; BB(0x0067d9aa);
    /* 0067d9aa: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067d9ac: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d9af: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067d9b5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d9b8: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067d9be: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d9c0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067d9c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d9c8u); call_ind(t); }
    /* 0067d9c8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067d9ca: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d9cc: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d9cf: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067d9d5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067d9d8: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067d9de: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067d9e0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067d9e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67d9e5u); call_ind(t); }
    /* 0067d9e5: jmp 0x67dedc */ goto L_0067dedc;
L_0067d9ea:; BB(0x0067d9ea);
    /* 0067d9ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d9ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d9ed: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067d9f3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067d9f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067d9f7: fld1  */ FPUSH(1.0);
    /* 0067d9f9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067d9fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067d9fe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067da00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067da02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067da04: push 0x1f5f */ { u32 v = 0x1f5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067da09: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067da0f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067da11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067da17: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067da1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67da1fu); call_ind(t); }
    /* 0067da1f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067da21: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da24: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067da2a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da2d: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067da33: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067da35: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067da3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67da3du); call_ind(t); }
    /* 0067da3d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067da3f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0067da41: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da44: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067da4a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da4d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067da53: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067da55: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067da58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67da5au); call_ind(t); }
    /* 0067da5a: jmp 0x67dedc */ goto L_0067dedc;
L_0067da5f:; BB(0x0067da5f);
    /* 0067da5f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067da61: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da64: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067da6a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da6d: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067da73: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067da75: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067da7b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67da7du); call_ind(t); }
    /* 0067da7d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067da7f: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0067da81: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da84: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067da8a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067da8d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067da93: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067da95: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067da98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67da9au); call_ind(t); }
    /* 0067da9a: jmp 0x67dedc */ goto L_0067dedc;
L_0067da9f:; BB(0x0067da9f);
    /* 0067da9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067daa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067daa2: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067daa8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067daab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067daac: fld1  */ FPUSH(1.0);
    /* 0067daae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067dab1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dab3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dab5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dab7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dab9: push 0x1f60 */ { u32 v = 0x1f60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dabe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067dac4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067dac6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067dacc: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067dad2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dad4u); call_ind(t); }
    /* 0067dad4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dad6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dad9: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067dadf: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dae2: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067dae8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067daea: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067daf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67daf2u); call_ind(t); }
    /* 0067daf2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067daf4: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0067daf6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067daf9: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067daff: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067db02: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067db08: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067db0a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067db0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67db0fu); call_ind(t); }
    /* 0067db0f: jmp 0x67dedc */ goto L_0067dedc;
L_0067db14:; BB(0x0067db14);
    /* 0067db14: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067db16: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067db19: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067db1f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067db22: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067db28: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067db2a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067db30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67db32u); call_ind(t); }
    /* 0067db32: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067db34: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0067db36: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067db39: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067db3f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067db42: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067db48: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067db4a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067db4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67db4fu); call_ind(t); }
    /* 0067db4f: jmp 0x67dedc */ goto L_0067dedc;
L_0067db54:; BB(0x0067db54);
    /* 0067db54: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067db56: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67db5bu); f_00686d82();
    /* 0067db5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067db5e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067db61: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0067db68: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067db6c: je 0x67db8e */ if (fZ) goto L_0067db8e;
L_0067db6e:; BB(0x0067db6e);
    /* 0067db6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067db70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067db72: push -0x28 */ { u32 v = 0xffffffd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067db74: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067db77: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067db7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067db7e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067db81: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67db86u); f_00606e60();
    /* 0067db86: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0067db8c: jmp 0x67db98 */ goto L_0067db98;
L_0067db8e:; BB(0x0067db8e);
    /* 0067db8e: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0067db98:; BB(0x0067db98);
    /* 0067db98: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0067db9e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067dba1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067dba8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067dbab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067dbac: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dbaf: mov ecx, dword ptr [edx + 0x268] */ r_ecx = R32((u32)(r_edx+0x268u));
    /* 0067dbb5: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67dbbau); f_005f6050();
    /* 0067dbba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067dbbc: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dbbf: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067dbc5: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dbc8: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 0067dbce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067dbd0: mov ecx, eax */ r_ecx = r_eax;
    /* 0067dbd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067dbd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dbdau); call_ind(t); }
    /* 0067dbda: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dbdc: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dbdf: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067dbe5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dbe8: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067dbee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067dbf0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067dbf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dbf5u); call_ind(t); }
    /* 0067dbf5: jmp 0x67dedc */ goto L_0067dedc;
L_0067dbfa:; BB(0x0067dbfa);
    /* 0067dbfa: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067dbfc: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dbfe: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dc01: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067dc07: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dc0a: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067dc10: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067dc12: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067dc15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dc17u); call_ind(t); }
    /* 0067dc17: jmp 0x67dedc */ goto L_0067dedc;
L_0067dc1c:; BB(0x0067dc1c);
    /* 0067dc1c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dc1e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67dc23u); f_00686d82();
    /* 0067dc23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067dc26: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067dc29: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0067dc30: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067dc34: je 0x67dc48 */ if (fZ) goto L_0067dc48;
L_0067dc36:; BB(0x0067dc36);
    /* 0067dc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dc38: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0067dc3b: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67dc40u); f_006010a0();
    /* 0067dc40: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0067dc46: jmp 0x67dc52 */ goto L_0067dc52;
L_0067dc48:; BB(0x0067dc48);
    /* 0067dc48: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0067dc52:; BB(0x0067dc52);
    /* 0067dc52: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0067dc58: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0067dc5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067dc62: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067dc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067dc66: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dc69: mov ecx, dword ptr [eax + 0x268] */ r_ecx = R32((u32)(r_eax+0x268u));
    /* 0067dc6f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67dc74u); f_005f5d50();
    /* 0067dc74: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dc77: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067dc7d: mov dword ptr [edx + 0x188], 4 */ W32((u32)(r_edx+0x188u), 0x4u);
    /* 0067dc87: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067dc89: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dc8c: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067dc92: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dc95: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 0067dc9b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067dc9d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067dc9f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067dca5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dca7u); call_ind(t); }
    /* 0067dca7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dca9: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dcab: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dcae: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067dcb4: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dcb7: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067dcbd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067dcbf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067dcc2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dcc4u); call_ind(t); }
    /* 0067dcc4: jmp 0x67dedc */ goto L_0067dedc;
L_0067dcc9:; BB(0x0067dcc9);
    /* 0067dcc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dccb: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dcd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dcd2: push -0x28 */ { u32 v = 0xffffffd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dcd4: push 0x249f39 */ { u32 v = 0x249f39u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dcd9: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dcdc: mov ecx, dword ptr [ecx + 0x268] */ r_ecx = R32((u32)(r_ecx+0x268u));
    /* 0067dce2: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67dce7u); f_005eae80();
    /* 0067dce7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dce9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dceb: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dcee: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067dcf4: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dcf7: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067dcfd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067dcff: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067dd02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dd04u); call_ind(t); }
    /* 0067dd04: jmp 0x67dedc */ goto L_0067dedc;
L_0067dd09:; BB(0x0067dd09);
    /* 0067dd09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd0c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067dd12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067dd15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd16: fld1  */ FPUSH(1.0);
    /* 0067dd18: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067dd1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd1d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd23: push 0x1f61 */ { u32 v = 0x1f61u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd28: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067dd2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067dd30: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067dd36: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067dd3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dd3eu); call_ind(t); }
    /* 0067dd3e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd40: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dd43: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067dd49: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dd4c: mov ecx, dword ptr [eax + 0x264] */ r_ecx = R32((u32)(r_eax+0x264u));
    /* 0067dd52: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067dd54: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067dd5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dd5cu); call_ind(t); }
    /* 0067dd5c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dd5f: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067dd65: mov dword ptr [edx + 0x188], 0xa */ W32((u32)(r_edx+0x188u), 0xau);
    /* 0067dd6f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd71: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd73: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dd76: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067dd7c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dd7f: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067dd85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067dd87: mov ecx, eax */ r_ecx = r_eax;
    /* 0067dd89: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067dd8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67dd8eu); call_ind(t); }
    /* 0067dd8e: jmp 0x67dedc */ goto L_0067dedc;
L_0067dd93:; BB(0x0067dd93);
    /* 0067dd93: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dd95: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67dd9au); f_00686d82();
    /* 0067dd9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067dd9d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0067dda0: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0067dda7: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ddab: je 0x67ddc7 */ if (fZ) goto L_0067ddc7;
L_0067ddad:; BB(0x0067ddad);
    /* 0067ddad: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067ddb0: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067ddb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ddb7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0067ddba: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67ddbfu); f_006010a0();
    /* 0067ddbf: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0067ddc5: jmp 0x67ddd1 */ goto L_0067ddd1;
L_0067ddc7:; BB(0x0067ddc7);
    /* 0067ddc7: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0067ddd1:; BB(0x0067ddd1);
    /* 0067ddd1: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0067ddd7: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0067ddda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067dde1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067dde4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067dde5: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dde8: mov ecx, dword ptr [edx + 0x264] */ r_ecx = R32((u32)(r_edx+0x264u));
    /* 0067ddee: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67ddf3u); f_005f5d50();
    /* 0067ddf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ddf5: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0067ddf7: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067ddfa: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067de00: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067de03: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067de09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067de0b: mov ecx, eax */ r_ecx = r_eax;
    /* 0067de0d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067de10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67de12u); call_ind(t); }
    /* 0067de12: jmp 0x67dedc */ goto L_0067dedc;
L_0067de17:; BB(0x0067de17);
    /* 0067de17: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067de1a: mov edx, dword ptr [ecx + 0x264] */ r_edx = R32((u32)(r_ecx+0x264u));
    /* 0067de20: mov dword ptr [edx + 0x184], 2 */ W32((u32)(r_edx+0x184u), 0x2u);
    /* 0067de2a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067de2c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67de31u); f_00686d82();
    /* 0067de31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067de34: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0067de37: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0067de3e: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067de42: je 0x67de67 */ if (fZ) goto L_0067de67;
L_0067de44:; BB(0x0067de44);
    /* 0067de44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067de46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067de48: push 0xfffffed4 */ { u32 v = 0xfffffed4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067de4d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067de50: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067de56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067de57: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067de5a: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67de5fu); f_00606e60();
    /* 0067de5f: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0067de65: jmp 0x67de71 */ goto L_0067de71;
L_0067de67:; BB(0x0067de67);
    /* 0067de67: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0067de71:; BB(0x0067de71);
    /* 0067de71: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0067de77: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0067de7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067de81: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067de84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067de85: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067de88: mov ecx, dword ptr [ecx + 0x264] */ r_ecx = R32((u32)(r_ecx+0x264u));
    /* 0067de8e: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67de93u); f_005f6050();
    /* 0067de93: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067de95: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067de98: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067de9e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dea1: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067dea7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067dea9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067deac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67deaeu); call_ind(t); }
    /* 0067deae: jmp 0x67dedc */ goto L_0067dedc;
L_0067deb0:; BB(0x0067deb0);
    /* 0067deb0: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0067deb2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067deb4: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067deb7: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067debd: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067dec0: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067dec6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067dec8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067decb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67decdu); call_ind(t); }
    /* 0067decd: jmp 0x67dedc */ goto L_0067dedc;
L_0067decf:; BB(0x0067decf);
    /* 0067decf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ded1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067ded7: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67dedcu); f_00650550();
L_0067dedc:; BB(0x0067dedc);
    /* 0067dedc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067dedf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067dee6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067dee7: mov esp, ebp */ r_esp = r_ebp;
    /* 0067dee9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067deea: ret 4 */ FN_RET(0x0067d090); r_esp += 8; return;
}

void f_0067df70(void) /* sub_67DF70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067df70);
    /* 0067df70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067df71: mov ebp, esp */ r_ebp = r_esp;
    /* 0067df73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067df75: push 0x6adb8d */ { u32 v = 0x6adb8du; r_esp -= 4; W32(r_esp, v); }
    /* 0067df7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067df80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067df81: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067df84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067df89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067df8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067df8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067df8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067df95: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0067df98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067df9a: push 0x1f65 */ { u32 v = 0x1f65u; r_esp -= 4; W32(r_esp, v); }
    /* 0067df9f: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfa4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067dfa9: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067dfac: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67dfb1u); f_006044b0();
    /* 0067dfb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfb3: push 0x1f66 */ { u32 v = 0x1f66u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfb8: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfbd: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067dfc3: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067dfc6: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67dfcbu); f_006044b0();
    /* 0067dfcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfcd: push 0x1f67 */ { u32 v = 0x1f67u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfd2: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfd7: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067dfdd: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067dfe0: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67dfe5u); f_006044b0();
    /* 0067dfe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfe7: push 0x1f68 */ { u32 v = 0x1f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dfec: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067dff1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067dff6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067dff9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67dffeu); f_006044b0();
    /* 0067dffe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e000: push 0x249f3a */ { u32 v = 0x249f3au; r_esp -= 4; W32(r_esp, v); }
    /* 0067e005: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e00a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067e010: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067e013: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e018u); f_006044b0();
    /* 0067e018: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e01a: push 0x249f3b */ { u32 v = 0x249f3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e01f: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e024: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067e02a: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067e02d: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67e032u); f_006044b0();
    /* 0067e032: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067e035: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067e038: cmp dword ptr [ebp - 0x50], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067e03c: ja 0x67e83d */ if ((!fC&&!fZ)) goto L_0067e83d;
L_0067e042:; BB(0x0067e042);
    /* 0067e042: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067e045: movzx edx, byte ptr [ecx + 0x67e88c] */ r_edx = (u32)R8((u32)(r_ecx+0x67e88cu));
    /* 0067e04c: jmp dword ptr [edx*4 + 0x67e850] */ { u32 t = R32((u32)(r_edx*4+0x67e850u)); switch (t) { case 0x67e053u: goto L_0067e053; case 0x67e249u: goto L_0067e249; case 0x67e3bbu: goto L_0067e3bb; case 0x67e3ddu: goto L_0067e3dd; case 0x67e4a4u: goto L_0067e4a4; case 0x67e4e4u: goto L_0067e4e4; case 0x67e57bu: goto L_0067e57b; case 0x67e60du: goto L_0067e60d; case 0x67e64du: goto L_0067e64d; case 0x67e6e4u: goto L_0067e6e4; case 0x67e754u: goto L_0067e754; case 0x67e811u: goto L_0067e811; case 0x67e830u: goto L_0067e830; case 0x67e2fcu: goto L_0067e2fc; case 0x67e83du: goto L_0067e83d; default: UNSUP(0x0067e04c, "jump table entry is not a known target"); } }
L_0067e053:; BB(0x0067e053);
    /* 0067e053: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e058: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67e05du); f_00686d82();
    /* 0067e05d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e060: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067e063: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067e06a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e06e: je 0x67e07d */ if (fZ) goto L_0067e07d;
L_0067e070:; BB(0x0067e070);
    /* 0067e070: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e073: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67e078u); f_005f5f50();
    /* 0067e078: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067e07b: jmp 0x67e084 */ goto L_0067e084;
L_0067e07d:; BB(0x0067e07d);
    /* 0067e07d: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0067e084:; BB(0x0067e084);
    /* 0067e084: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0067e087: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067e08a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e091: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e094: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e097: mov dword ptr [ecx + 0x26c], edx */ W32((u32)(r_ecx+0x26cu), r_edx);
    /* 0067e09d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e0a0: mov ecx, dword ptr [eax + 0x26c] */ r_ecx = R32((u32)(r_eax+0x26cu));
    /* 0067e0a6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e0a9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e0ac: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067e0af: push 0x249f3a */ { u32 v = 0x249f3au; r_esp -= 4; W32(r_esp, v); }
    /* 0067e0b4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e0b7: mov ecx, dword ptr [ecx + 0x26c] */ r_ecx = R32((u32)(r_ecx+0x26cu));
    /* 0067e0bd: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67e0c2u); f_005eaf00();
    /* 0067e0c2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e0c5: mov eax, dword ptr [edx + 0x26c] */ r_eax = R32((u32)(r_edx+0x26cu));
    /* 0067e0cb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e0ce: mov ecx, dword ptr [ecx + 0x26c] */ r_ecx = R32((u32)(r_ecx+0x26cu));
    /* 0067e0d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067e0d6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067e0d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e0dbu); call_ind(t); }
    /* 0067e0db: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e0e0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67e0e5u); f_00686d82();
    /* 0067e0e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e0e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067e0eb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067e0f2: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e0f6: je 0x67e105 */ if (fZ) goto L_0067e105;
L_0067e0f8:; BB(0x0067e0f8);
    /* 0067e0f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067e0fb: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67e100u); f_005f5f50();
    /* 0067e100: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0067e103: jmp 0x67e10c */ goto L_0067e10c;
L_0067e105:; BB(0x0067e105);
    /* 0067e105: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0067e10c:; BB(0x0067e10c);
    /* 0067e10c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067e10f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0067e112: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e119: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e11c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067e11f: mov dword ptr [edx + 0x270], eax */ W32((u32)(r_edx+0x270u), r_eax);
    /* 0067e125: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e128: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e12e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e131: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067e134: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067e137: push 0x249f3b */ { u32 v = 0x249f3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e13c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e13f: mov ecx, dword ptr [edx + 0x270] */ r_ecx = R32((u32)(r_edx+0x270u));
    /* 0067e145: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67e14au); f_005eaf00();
    /* 0067e14a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e14d: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e153: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e156: mov eax, dword ptr [edx + 0x270] */ r_eax = R32((u32)(r_edx+0x270u));
    /* 0067e15c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e15e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e160: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067e163: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e165u); call_ind(t); }
    /* 0067e165: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e167: push 0xd6d8 */ { u32 v = 0xd6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e16c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e16e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e170: push 0x249f3a */ { u32 v = 0x249f3au; r_esp -= 4; W32(r_esp, v); }
    /* 0067e175: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e178: mov ecx, dword ptr [ecx + 0x26c] */ r_ecx = R32((u32)(r_ecx+0x26cu));
    /* 0067e17e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67e183u); f_005eae80();
    /* 0067e183: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e185: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e18a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e18c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e18e: push 0x249f3b */ { u32 v = 0x249f3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e193: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e196: mov ecx, dword ptr [edx + 0x270] */ r_ecx = R32((u32)(r_edx+0x270u));
    /* 0067e19c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67e1a1u); f_005eae80();
    /* 0067e1a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e1a3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e1a6: mov ecx, dword ptr [eax + 0x26c] */ r_ecx = R32((u32)(r_eax+0x26cu));
    /* 0067e1ac: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67e1b1u); f_005eb5d0();
    /* 0067e1b1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e1b4: mov edx, dword ptr [ecx + 0x26c] */ r_edx = R32((u32)(r_ecx+0x26cu));
    /* 0067e1ba: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e1bd: mov ecx, dword ptr [eax + 0x26c] */ r_ecx = R32((u32)(r_eax+0x26cu));
    /* 0067e1c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e1c5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067e1c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e1cau); call_ind(t); }
    /* 0067e1ca: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e1cd: mov edx, dword ptr [ecx + 0x26c] */ r_edx = R32((u32)(r_ecx+0x26cu));
    /* 0067e1d3: mov dword ptr [edx + 0x178], 6 */ W32((u32)(r_edx+0x178u), 0x6u);
    /* 0067e1dd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e1e0: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e1e6: mov dword ptr [ecx + 0x178], 8 */ W32((u32)(r_ecx+0x178u), 0x8u);
    /* 0067e1f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e1f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e1f3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067e1f9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e1fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e1fd: fld1  */ FPUSH(1.0);
    /* 0067e1ff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e202: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e204: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e206: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e208: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e20a: push 0x1f65 */ { u32 v = 0x1f65u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e20f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0067e215: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067e217: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067e21d: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0067e223: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67e225u); call_ind(t); }
    /* 0067e225: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e227: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e229: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e22c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e232: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e235: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e23b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e23d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e23f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067e242: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e244u); call_ind(t); }
    /* 0067e244: jmp 0x67e83d */ goto L_0067e83d;
L_0067e249:; BB(0x0067e249);
    /* 0067e249: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e24c: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67e251u); f_005eb610();
    /* 0067e251: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0067e254: cmp ecx, 0xf9 */ {  u32 a = r_ecx; u32 b = 0xf9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e25a: je 0x67e2c1 */ if (fZ) goto L_0067e2c1;
L_0067e25c:; BB(0x0067e25c);
    /* 0067e25c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e25f: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67e264u); f_005eb610();
    /* 0067e264: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0067e267: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067e26a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e26b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e26e: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67e273u); f_005eb5d0();
    /* 0067e273: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067e27a: jmp 0x67e285 */ goto L_0067e285;
L_0067e27c:; BB(0x0067e27c);
    /* 0067e27c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067e27f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e282: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0067e285:; BB(0x0067e285);
    /* 0067e285: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e289: jge 0x67e2a4 */ if ((fS==fO)) goto L_0067e2a4;
L_0067e28b:; BB(0x0067e28b);
    /* 0067e28b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e28e: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67e293u); f_005eb610();
    /* 0067e293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e294: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e297: mov ecx, dword ptr [ecx + 0x26c] */ r_ecx = R32((u32)(r_ecx+0x26cu));
    /* 0067e29d: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67e2a2u); f_005eb5d0();
    /* 0067e2a2: jmp 0x67e27c */ goto L_0067e27c;
L_0067e2a4:; BB(0x0067e2a4);
    /* 0067e2a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2a6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e2a9: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e2af: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e2b2: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067e2b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067e2ba: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e2bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e2bfu); call_ind(t); }
    /* 0067e2bf: jmp 0x67e2dc */ goto L_0067e2dc;
L_0067e2c1:; BB(0x0067e2c1);
    /* 0067e2c1: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2c3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e2c6: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e2cc: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e2cf: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e2d5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e2d7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e2da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e2dcu); call_ind(t); }
L_0067e2dc:; BB(0x0067e2dc);
    /* 0067e2dc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2de: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e2e1: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e2e7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e2ea: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e2f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e2f2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0067e2f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e2f7u); call_ind(t); }
    /* 0067e2f7: jmp 0x67e83d */ goto L_0067e83d;
L_0067e2fc:; BB(0x0067e2fc);
    /* 0067e2fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2ff: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067e305: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e309: fld1  */ FPUSH(1.0);
    /* 0067e30b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e30e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e310: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e312: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e314: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e316: push 0x1f66 */ { u32 v = 0x1f66u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e31b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067e321: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e323: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067e329: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067e32f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e331u); call_ind(t); }
    /* 0067e331: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e336: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e339: mov ecx, dword ptr [ecx + 0x26c] */ r_ecx = R32((u32)(r_ecx+0x26cu));
    /* 0067e33f: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67e344u); f_005eb5d0();
    /* 0067e344: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e346: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67e34bu); f_00686d82();
    /* 0067e34b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e34e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067e351: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067e358: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e35c: je 0x67e375 */ if (fZ) goto L_0067e375;
L_0067e35e:; BB(0x0067e35e);
    /* 0067e35e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e361: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e368: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067e36b: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67e370u); f_006010a0();
    /* 0067e370: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0067e373: jmp 0x67e37c */ goto L_0067e37c;
L_0067e375:; BB(0x0067e375);
    /* 0067e375: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0067e37c:; BB(0x0067e37c);
    /* 0067e37c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0067e37f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067e382: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e389: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067e38c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e38d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e390: mov ecx, dword ptr [eax + 0x26c] */ r_ecx = R32((u32)(r_eax+0x26cu));
    /* 0067e396: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67e39bu); f_005f5d50();
    /* 0067e39b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e39d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e3a0: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e3a6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e3a9: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e3af: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e3b1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e3b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e3b6u); call_ind(t); }
    /* 0067e3b6: jmp 0x67e83d */ goto L_0067e83d;
L_0067e3bb:; BB(0x0067e3bb);
    /* 0067e3bb: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3bd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3bf: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e3c2: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e3c8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e3cb: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e3d1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e3d3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067e3d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e3d8u); call_ind(t); }
    /* 0067e3d8: jmp 0x67e83d */ goto L_0067e83d;
L_0067e3dd:; BB(0x0067e3dd);
    /* 0067e3dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3e0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067e3e6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e3e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3ea: fld1  */ FPUSH(1.0);
    /* 0067e3ec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e3ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3f1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3f7: push 0x1f67 */ { u32 v = 0x1f67u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e3fc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067e402: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e404: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067e40a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067e410: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e412u); call_ind(t); }
    /* 0067e412: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e415: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e41b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e41e: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e424: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e426: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067e429: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e42bu); call_ind(t); }
    /* 0067e42b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e42d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67e432u); f_00686d82();
    /* 0067e432: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e435: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067e438: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067e43f: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e443: je 0x67e45c */ if (fZ) goto L_0067e45c;
L_0067e445:; BB(0x0067e445);
    /* 0067e445: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e448: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e44e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e44f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067e452: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67e457u); f_006010a0();
    /* 0067e457: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0067e45a: jmp 0x67e463 */ goto L_0067e463;
L_0067e45c:; BB(0x0067e45c);
    /* 0067e45c: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0067e463:; BB(0x0067e463);
    /* 0067e463: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067e466: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067e469: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e470: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067e473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e474: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e477: mov ecx, dword ptr [edx + 0x270] */ r_ecx = R32((u32)(r_edx+0x270u));
    /* 0067e47d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67e482u); f_005f5d50();
    /* 0067e482: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e484: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e487: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e48d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e490: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e496: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e498: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e49a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e49d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e49fu); call_ind(t); }
    /* 0067e49f: jmp 0x67e83d */ goto L_0067e83d;
L_0067e4a4:; BB(0x0067e4a4);
    /* 0067e4a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4a6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e4a9: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e4af: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e4b2: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e4b8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e4ba: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067e4c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e4c2u); call_ind(t); }
    /* 0067e4c2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4c4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4c6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e4c9: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e4cf: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e4d2: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e4d8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e4da: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067e4dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e4dfu); call_ind(t); }
    /* 0067e4df: jmp 0x67e83d */ goto L_0067e83d;
L_0067e4e4:; BB(0x0067e4e4);
    /* 0067e4e4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4e6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e4e9: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e4ef: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e4f2: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e4f8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e4fa: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067e500: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e502u); call_ind(t); }
    /* 0067e502: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e504: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67e509u); f_00686d82();
    /* 0067e509: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e50c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067e50f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067e516: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e51a: je 0x67e533 */ if (fZ) goto L_0067e533;
L_0067e51c:; BB(0x0067e51c);
    /* 0067e51c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e51f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e526: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067e529: call 0x601030 */ r_esp -= 4; W32(r_esp, 0x67e52eu); f_00601030();
    /* 0067e52e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0067e531: jmp 0x67e53a */ goto L_0067e53a;
L_0067e533:; BB(0x0067e533);
    /* 0067e533: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0067e53a:; BB(0x0067e53a);
    /* 0067e53a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067e53d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067e540: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e547: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067e54a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e54b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e54e: mov ecx, dword ptr [edx + 0x270] */ r_ecx = R32((u32)(r_edx+0x270u));
    /* 0067e554: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67e559u); f_005f5d50();
    /* 0067e559: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e55b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e55e: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e564: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e567: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e56d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e56f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e571: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e574: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e576u); call_ind(t); }
    /* 0067e576: jmp 0x67e83d */ goto L_0067e83d;
L_0067e57b:; BB(0x0067e57b);
    /* 0067e57b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e57e: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e584: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e587: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e58d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e58f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067e592: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e594u); call_ind(t); }
    /* 0067e594: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e596: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67e59bu); f_00686d82();
    /* 0067e59b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e59e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067e5a1: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067e5a8: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e5ac: je 0x67e5c5 */ if (fZ) goto L_0067e5c5;
L_0067e5ae:; BB(0x0067e5ae);
    /* 0067e5ae: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e5b1: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e5b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e5b8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067e5bb: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x67e5c0u); f_006010a0();
    /* 0067e5c0: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0067e5c3: jmp 0x67e5cc */ goto L_0067e5cc;
L_0067e5c5:; BB(0x0067e5c5);
    /* 0067e5c5: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0067e5cc:; BB(0x0067e5cc);
    /* 0067e5cc: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067e5cf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067e5d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e5d9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067e5dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e5dd: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e5e0: mov ecx, dword ptr [edx + 0x270] */ r_ecx = R32((u32)(r_edx+0x270u));
    /* 0067e5e6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67e5ebu); f_005f5d50();
    /* 0067e5eb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e5ed: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e5f0: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e5f6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e5f9: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e5ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e601: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e603: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e606: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e608u); call_ind(t); }
    /* 0067e608: jmp 0x67e83d */ goto L_0067e83d;
L_0067e60d:; BB(0x0067e60d);
    /* 0067e60d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e60f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e612: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e618: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e61b: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e621: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e623: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067e629: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e62bu); call_ind(t); }
    /* 0067e62b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e62d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e62f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e632: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e638: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e63b: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e641: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e643: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067e646: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e648u); call_ind(t); }
    /* 0067e648: jmp 0x67e83d */ goto L_0067e83d;
L_0067e64d:; BB(0x0067e64d);
    /* 0067e64d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e64f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e652: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e658: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e65b: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e661: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e663: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067e669: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e66bu); call_ind(t); }
    /* 0067e66b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e66d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67e672u); f_00686d82();
    /* 0067e672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e675: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067e678: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0067e67f: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e683: je 0x67e69c */ if (fZ) goto L_0067e69c;
L_0067e685:; BB(0x0067e685);
    /* 0067e685: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e688: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e68e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e68f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067e692: call 0x601030 */ r_esp -= 4; W32(r_esp, 0x67e697u); f_00601030();
    /* 0067e697: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0067e69a: jmp 0x67e6a3 */ goto L_0067e6a3;
L_0067e69c:; BB(0x0067e69c);
    /* 0067e69c: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0067e6a3:; BB(0x0067e6a3);
    /* 0067e6a3: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0067e6a6: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067e6a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e6b0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067e6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6b4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e6b7: mov ecx, dword ptr [edx + 0x270] */ r_ecx = R32((u32)(r_edx+0x270u));
    /* 0067e6bd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67e6c2u); f_005f5d50();
    /* 0067e6c2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6c4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e6c7: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e6cd: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e6d0: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e6d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e6d8: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e6da: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e6dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e6dfu); call_ind(t); }
    /* 0067e6df: jmp 0x67e83d */ goto L_0067e83d;
L_0067e6e4:; BB(0x0067e6e4);
    /* 0067e6e4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e6e7: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067e6ed: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e6f0: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 0067e6f6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e6f8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067e6fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e6fdu); call_ind(t); }
    /* 0067e6fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e700: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067e706: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e70a: fld1  */ FPUSH(1.0);
    /* 0067e70c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067e70f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e711: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e713: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e715: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e717: push 0x1f68 */ { u32 v = 0x1f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e71c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067e722: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067e724: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067e72a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067e730: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e732u); call_ind(t); }
    /* 0067e732: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e734: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067e736: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e739: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e73f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e742: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e748: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e74a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067e74d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e74fu); call_ind(t); }
    /* 0067e74f: jmp 0x67e83d */ goto L_0067e83d;
L_0067e754:; BB(0x0067e754);
    /* 0067e754: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e757: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67e75cu); f_005eb610();
    /* 0067e75c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0067e75f: cmp ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e762: je 0x67e7c9 */ if (fZ) goto L_0067e7c9;
L_0067e764:; BB(0x0067e764);
    /* 0067e764: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e767: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67e76cu); f_005eb610();
    /* 0067e76c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0067e76f: sub edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067e772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e773: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e776: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67e77bu); f_005eb5d0();
    /* 0067e77b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067e782: jmp 0x67e78d */ goto L_0067e78d;
L_0067e784:; BB(0x0067e784);
    /* 0067e784: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067e787: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e78a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0067e78d:; BB(0x0067e78d);
    /* 0067e78d: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e791: jge 0x67e7ac */ if ((fS==fO)) goto L_0067e7ac;
L_0067e793:; BB(0x0067e793);
    /* 0067e793: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e796: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x67e79bu); f_005eb610();
    /* 0067e79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e79c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e79f: mov ecx, dword ptr [ecx + 0x26c] */ r_ecx = R32((u32)(r_ecx+0x26cu));
    /* 0067e7a5: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67e7aau); f_005eb5d0();
    /* 0067e7aa: jmp 0x67e784 */ goto L_0067e784;
L_0067e7ac:; BB(0x0067e7ac);
    /* 0067e7ac: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7ae: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e7b1: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e7b7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e7ba: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067e7c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067e7c2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e7c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e7c7u); call_ind(t); }
    /* 0067e7c7: jmp 0x67e7f4 */ goto L_0067e7f4;
L_0067e7c9:; BB(0x0067e7c9);
    /* 0067e7c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7cb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e7ce: mov ecx, dword ptr [ecx + 0x26c] */ r_ecx = R32((u32)(r_ecx+0x26cu));
    /* 0067e7d4: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x67e7d9u); f_005eb5d0();
    /* 0067e7d9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7db: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e7de: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067e7e4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e7e7: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067e7ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067e7ef: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067e7f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e7f4u); call_ind(t); }
L_0067e7f4:; BB(0x0067e7f4);
    /* 0067e7f4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7f6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e7f9: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e7ff: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e802: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e808: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e80a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0067e80d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e80fu); call_ind(t); }
    /* 0067e80f: jmp 0x67e83d */ goto L_0067e83d;
L_0067e811:; BB(0x0067e811);
    /* 0067e811: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e813: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e815: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e818: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067e81e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067e821: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067e827: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067e829: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067e82c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67e82eu); call_ind(t); }
    /* 0067e82e: jmp 0x67e83d */ goto L_0067e83d;
L_0067e830:; BB(0x0067e830);
    /* 0067e830: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e832: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067e838: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67e83du); f_00650550();
L_0067e83d:; BB(0x0067e83d);
    /* 0067e83d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067e840: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067e847: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e848: mov esp, ebp */ r_esp = r_ebp;
    /* 0067e84a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067e84b: ret 4 */ FN_RET(0x0067df70); r_esp += 8; return;
}

