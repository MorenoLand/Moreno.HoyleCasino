#include "protos.h"

void f_0060b0b0(void) /* sub_60B0B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b0b0);
    /* 0060b0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b0b3: sub esp, 0x238 */ {  u32 a = r_esp; u32 b = 0x238u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b0b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060b0be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b0c0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060b0c3: mov dword ptr [ebp - 0x234], ecx */ W32((u32)(r_ebp+0xfffffdccu), r_ecx);
    /* 0060b0c9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060b0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b0d2: jne 0x60b38c */ if (!fZ) goto L_0060b38c;
L_0060b0d8:; BB(0x0060b0d8);
    /* 0060b0d8: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 0060b0de: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060b0e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b0e4: je 0x60b0ed */ if (fZ) goto L_0060b0ed;
L_0060b0e6:; BB(0x0060b0e6);
    /* 0060b0e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b0e8: jmp 0x60b38e */ goto L_0060b38e;
L_0060b0ed:; BB(0x0060b0ed);
    /* 0060b0ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b0f0: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b0f3: movzx ecx, byte ptr [eax + 0x796d3c] */ r_ecx = (u32)R8((u32)(r_eax+0x796d3cu));
    /* 0060b0fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b0fc: je 0x60b11c */ if (fZ) goto L_0060b11c;
L_0060b0fe:; BB(0x0060b0fe);
    /* 0060b0fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060b101: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b104: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b107: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b10a: mov ecx, dword ptr [eax + 0x796d40] */ r_ecx = R32((u32)(r_eax+0x796d40u));
    /* 0060b110: mov edx, dword ptr [edx + ecx*4 + 0x796d44] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x796d44u));
    /* 0060b117: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0060b11a: jmp 0x60b12b */ goto L_0060b12b;
L_0060b11c:; BB(0x0060b11c);
    /* 0060b11c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b11f: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b122: mov ecx, dword ptr [eax + 0x796d38] */ r_ecx = R32((u32)(r_eax+0x796d38u));
    /* 0060b128: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0060b12b:; BB(0x0060b12b);
    /* 0060b12b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b12e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b12f: push 0x6d816c */ { u32 v = 0x6d816cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b134: lea eax, [ebp - 0x218] */ r_eax = (u32)(r_ebp+0xfffffde8u);
    /* 0060b13a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b13b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x60b141u); call_ind(t); }
    /* 0060b141: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b144: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0060b14a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b14b: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 0060b151: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b152: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 0060b158: call 0x60af50 */ r_esp -= 4; W32(r_esp, 0x60b15du); f_0060af50();
    /* 0060b15d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060b160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b162: jne 0x60b18d */ if (!fZ) goto L_0060b18d;
L_0060b164:; BB(0x0060b164);
    /* 0060b164: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 0060b16a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b16b: push 0x6d8144 */ { u32 v = 0x6d8144u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b170: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60b175u); f_0062fde0();
    /* 0060b175: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b178: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060b17b: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b17e: mov byte ptr [edx + 0x796d3c], 0 */ W8((u32)(r_edx+0x796d3cu), 0x0u);
    /* 0060b185: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060b188: jmp 0x60b38e */ goto L_0060b38e;
L_0060b18d:; BB(0x0060b18d);
    /* 0060b18d: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0060b193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b194: push 0x6d8124 */ { u32 v = 0x6d8124u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b199: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60b19eu); f_0062fde0();
    /* 0060b19e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b1a1: push 0x2f8 */ { u32 v = 0x2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b1a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60b1abu); f_00686d82();
    /* 0060b1ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b1ae: mov dword ptr [ebp - 0x224], eax */ W32((u32)(r_ebp+0xfffffddcu), r_eax);
    /* 0060b1b4: cmp dword ptr [ebp - 0x224], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffddcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b1bb: je 0x60b272 */ if (fZ) goto L_0060b272;
L_0060b1c1:; BB(0x0060b1c1);
    /* 0060b1c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b1c4: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0060b1c6: mov edx, dword ptr [ecx*4 + 0x796ebc] */ r_edx = R32((u32)(r_ecx*4+0x796ebcu));
    /* 0060b1cd: mov dword ptr [ebp - 0x230], edx */ W32((u32)(r_ebp+0xfffffdd0u), r_edx);
    /* 0060b1d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b1d6: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060b1d8: mov ecx, dword ptr [eax*4 + 0x796eb8] */ r_ecx = R32((u32)(r_eax*4+0x796eb8u));
    /* 0060b1df: mov dword ptr [ebp - 0x22c], ecx */ W32((u32)(r_ebp+0xfffffdd4u), r_ecx);
    /* 0060b1e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060b1e8: mov eax, dword ptr [edx*4 + 0x796d18] */ r_eax = R32((u32)(r_edx*4+0x796d18u));
    /* 0060b1ef: mov dword ptr [ebp - 0x228], eax */ W32((u32)(r_ebp+0xfffffdd8u), r_eax);
    /* 0060b1f5: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b1fb: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0060b201: mov edx, dword ptr [ebp - 0x224] */ r_edx = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b207: mov dword ptr [edx + 0x2d8], 0 */ W32((u32)(r_edx+0x2d8u), 0x0u);
    /* 0060b211: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b217: mov dword ptr [eax + 0x2dc], 0 */ W32((u32)(r_eax+0x2dcu), 0x0u);
    /* 0060b221: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b227: mov edx, dword ptr [ebp - 0x228] */ r_edx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 0060b22d: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 0060b233: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b239: mov ecx, dword ptr [ebp - 0x22c] */ r_ecx = R32((u32)(r_ebp+0xfffffdd4u));
    /* 0060b23f: mov dword ptr [eax + 0x2e0], ecx */ W32((u32)(r_eax+0x2e0u), r_ecx);
    /* 0060b245: mov edx, dword ptr [ebp - 0x224] */ r_edx = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b24b: mov eax, dword ptr [ebp - 0x230] */ r_eax = R32((u32)(r_ebp+0xfffffdd0u));
    /* 0060b251: mov dword ptr [edx + 0x2e4], eax */ W32((u32)(r_edx+0x2e4u), r_eax);
    /* 0060b257: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b25d: mov byte ptr [ecx + 0x2f0], 0 */ W8((u32)(r_ecx+0x2f0u), 0x0u);
    /* 0060b264: mov edx, dword ptr [ebp - 0x224] */ r_edx = R32((u32)(r_ebp+0xfffffddcu));
    /* 0060b26a: mov dword ptr [ebp - 0x238], edx */ W32((u32)(r_ebp+0xfffffdc8u), r_edx);
    /* 0060b270: jmp 0x60b27c */ goto L_0060b27c;
L_0060b272:; BB(0x0060b272);
    /* 0060b272: mov dword ptr [ebp - 0x238], 0 */ W32((u32)(r_ebp+0xfffffdc8u), 0x0u);
L_0060b27c:; BB(0x0060b27c);
    /* 0060b27c: mov eax, dword ptr [ebp - 0x238] */ r_eax = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0060b282: mov dword ptr [ebp - 0x220], eax */ W32((u32)(r_ebp+0xfffffde0u), r_eax);
    /* 0060b288: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b28b: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b28e: mov edx, dword ptr [ebp - 0x220] */ r_edx = R32((u32)(r_ebp+0xfffffde0u));
    /* 0060b294: mov dword ptr [ecx + 0x796d28], edx */ W32((u32)(r_ecx+0x796d28u), r_edx);
    /* 0060b29a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b29d: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b2a0: cmp dword ptr [eax + 0x796d28], 0 */ {  u32 a = R32((u32)(r_eax+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b2a7: jne 0x60b2be */ if (!fZ) goto L_0060b2be;
L_0060b2a9:; BB(0x0060b2a9);
    /* 0060b2a9: push 0x6d8104 */ { u32 v = 0x6d8104u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b2ae: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60b2b3u); f_0062fde0();
    /* 0060b2b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b2b6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060b2b9: jmp 0x60b38e */ goto L_0060b38e;
L_0060b2be:; BB(0x0060b2be);
    /* 0060b2be: push 0x15e5090 */ { u32 v = 0x15e5090u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b2c3: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0060b2c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b2ca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060b2cd: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b2d0: mov ecx, dword ptr [edx + 0x796d28] */ r_ecx = R32((u32)(r_edx+0x796d28u));
    /* 0060b2d6: call 0x62ce60 */ r_esp -= 4; W32(r_esp, 0x60b2dbu); f_0062ce60();
    /* 0060b2db: mov dword ptr [ebp - 0x21c], eax */ W32((u32)(r_ebp+0xfffffde4u), r_eax);
    /* 0060b2e1: cmp dword ptr [ebp - 0x21c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffde4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b2e8: je 0x60b304 */ if (fZ) goto L_0060b304;
L_0060b2ea:; BB(0x0060b2ea);
    /* 0060b2ea: push 0x15e5090 */ { u32 v = 0x15e5090u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b2ef: push 0x6d80e4 */ { u32 v = 0x6d80e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b2f4: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60b2f9u); f_0062fde0();
    /* 0060b2f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b2fc: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060b2ff: jmp 0x60b38e */ goto L_0060b38e;
L_0060b304:; BB(0x0060b304);
    /* 0060b304: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b305: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0060b308: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0060b30b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b30e: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b311: mov ecx, dword ptr [eax + 0x796d28] */ r_ecx = R32((u32)(r_eax+0x796d28u));
    /* 0060b317: call 0x62d7e0 */ r_esp -= 4; W32(r_esp, 0x60b31cu); f_0062d7e0();
    /* 0060b31c: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b320: jne 0x60b337 */ if (!fZ) goto L_0060b337;
L_0060b322:; BB(0x0060b322);
    /* 0060b322: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b324: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b327: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b32a: mov ecx, dword ptr [ecx + 0x796d28] */ r_ecx = R32((u32)(r_ecx+0x796d28u));
    /* 0060b330: call 0x62d870 */ r_esp -= 4; W32(r_esp, 0x60b335u); f_0062d870();
    /* 0060b335: jmp 0x60b357 */ goto L_0060b357;
L_0060b337:; BB(0x0060b337);
    /* 0060b337: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060b33b: jle 0x60b344 */ if ((fZ||fS!=fO)) goto L_0060b344;
L_0060b33d:; BB(0x0060b33d);
    /* 0060b33d: mov dword ptr [ebp + 0xc], 1 */ W32((u32)(r_ebp+0xcu), 0x1u);
L_0060b344:; BB(0x0060b344);
    /* 0060b344: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b346: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060b349: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b34c: mov ecx, dword ptr [edx + 0x796d28] */ r_ecx = R32((u32)(r_edx+0x796d28u));
    /* 0060b352: call 0x62d870 */ r_esp -= 4; W32(r_esp, 0x60b357u); f_0062d870();
L_0060b357:; BB(0x0060b357);
    /* 0060b357: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b35a: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b35d: mov byte ptr [eax + 0x796d30], 0 */ W8((u32)(r_eax+0x796d30u), 0x0u);
    /* 0060b364: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b367: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b36a: mov dword ptr [ecx + 0x796d34], 0 */ W32((u32)(r_ecx+0x796d34u), 0x0u);
    /* 0060b374: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060b377: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060b37a: mov ecx, dword ptr [edx + 0x796d28] */ r_ecx = R32((u32)(r_edx+0x796d28u));
    /* 0060b380: call 0x62d310 */ r_esp -= 4; W32(r_esp, 0x60b385u); f_0062d310();
    /* 0060b385: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b388: jmp 0x60b38e */ goto L_0060b38e;
L_0060b38c:; BB(0x0060b38c);
    /* 0060b38c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0060b38e:; BB(0x0060b38e);
    /* 0060b38e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060b391: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060b393: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x60b398u); f_00686d72();
    /* 0060b398: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b39a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b39b: ret 0x10 */ FN_RET(0x0060b0b0); r_esp += 20; return;
}

void f_0060be20(void) /* sub_60BE20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060be20);
    /* 0060be20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060be21: mov ebp, esp */ r_ebp = r_esp;
    /* 0060be23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060be25: push 0x6aad0c */ { u32 v = 0x6aad0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060be2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060be30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060be31: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060be34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060be39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060be3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060be3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060be3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060be45: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060be48: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0060be4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060be4c: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0060be4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060be50: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0060be53: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060be56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060be57: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0060be5a: add eax, dword ptr [ebp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060be5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060be5e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060be61: add ecx, dword ptr [ebp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060be64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060be65: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0060be68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060be69: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0060be6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060be6d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060be70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060be71: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0060be74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060be75: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060be78: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x60be7du); f_005ec8f0();
    /* 0060be7d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060be80: cmp dword ptr [eax + 0x1dc], 0 */ {  u32 a = R32((u32)(r_eax+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060be87: jne 0x60bed9 */ if (!fZ) goto L_0060bed9;
L_0060be89:; BB(0x0060be89);
    /* 0060be89: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060be8d: je 0x60bed9 */ if (fZ) goto L_0060bed9;
L_0060be8f:; BB(0x0060be8f);
    /* 0060be8f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0060be94: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60be99u); f_00686d82();
    /* 0060be99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060be9c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060be9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060bea6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060beaa: je 0x60beb9 */ if (fZ) goto L_0060beb9;
L_0060beac:; BB(0x0060beac);
    /* 0060beac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060beaf: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x60beb4u); f_005eaaf0();
    /* 0060beb4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060beb7: jmp 0x60bec0 */ goto L_0060bec0;
L_0060beb9:; BB(0x0060beb9);
    /* 0060beb9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060bec0:; BB(0x0060bec0);
    /* 0060bec0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bec3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060bec6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060becd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bed0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060bed3: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
L_0060bed9:; BB(0x0060bed9);
    /* 0060bed9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bedc: cmp dword ptr [ecx + 0x1dc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bee3: je 0x60bf17 */ if (fZ) goto L_0060bf17;
L_0060bee5:; BB(0x0060bee5);
    /* 0060bee5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bee8: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0060beee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bef1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060bef4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0060bef7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bef9: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0060befc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060befd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060bf00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf01: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060bf04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060bf08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bf0c: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 0060bf12: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x60bf17u); f_005eae80();
L_0060bf17:; BB(0x0060bf17);
    /* 0060bf17: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bf1a: cmp dword ptr [edx + 0x1e0], 0 */ {  u32 a = R32((u32)(r_edx+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bf21: jne 0x60bf70 */ if (!fZ) goto L_0060bf70;
L_0060bf23:; BB(0x0060bf23);
    /* 0060bf23: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bf27: jne 0x60bf70 */ if (!fZ) goto L_0060bf70;
L_0060bf29:; BB(0x0060bf29);
    /* 0060bf29: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf2b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60bf30u); f_00686d82();
    /* 0060bf30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060bf33: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060bf36: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060bf3d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bf41: je 0x60bf50 */ if (fZ) goto L_0060bf50;
L_0060bf43:; BB(0x0060bf43);
    /* 0060bf43: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060bf46: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x60bf4bu); f_005f6130();
    /* 0060bf4b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0060bf4e: jmp 0x60bf57 */ goto L_0060bf57;
L_0060bf50:; BB(0x0060bf50);
    /* 0060bf50: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060bf57:; BB(0x0060bf57);
    /* 0060bf57: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060bf5a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060bf5d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060bf64: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bf67: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060bf6a: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
L_0060bf70:; BB(0x0060bf70);
    /* 0060bf70: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bf73: cmp dword ptr [eax + 0x1e0], 0 */ {  u32 a = R32((u32)(r_eax+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bf7a: je 0x60bfd2 */ if (fZ) goto L_0060bfd2;
L_0060bf7c:; BB(0x0060bf7c);
    /* 0060bf7c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bf7f: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0060bf85: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bf88: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060bf8b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0060bf8e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf90: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0060bf93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf94: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0060bf97: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060bf9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf9b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0060bf9e: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060bfa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bfa2: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0060bfa5: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060bfa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bfa9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0060bfac: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060bfaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bfb0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bfb3: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 0060bfb9: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x60bfbeu); f_005f61d0();
    /* 0060bfbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bfc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bfc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bfc4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bfc7: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 0060bfcd: call 0x5f6490 */ r_esp -= 4; W32(r_esp, 0x60bfd2u); f_005f6490();
L_0060bfd2:; BB(0x0060bfd2);
    /* 0060bfd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060bfd5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060bfdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060bfdd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bfdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bfe0: ret 0x30 */ FN_RET(0x0060be20); r_esp += 52; return;
}

