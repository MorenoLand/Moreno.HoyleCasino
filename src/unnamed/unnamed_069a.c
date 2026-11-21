#include "protos.h"

void f_0069a050(void) /* sub_69A050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a050);
    /* 0069a050: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a053: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069a057: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a058: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a059: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a05a: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0069a05d: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0069a061: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069a062: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069a064: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a065: mov edi, eax */ r_edi = r_eax;
    /* 0069a067: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069a06f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0069a071: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a073: jle 0x69a156 */ if ((fZ||fS!=fO)) goto L_0069a156;
L_0069a079:; BB(0x0069a079);
    /* 0069a079: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0069a07d: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069a081: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0069a085: mov eax, ebp */ r_eax = r_ebp;
    /* 0069a087: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a089: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069a08b: mov edx, ebx */ r_edx = r_ebx;
    /* 0069a08d: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0069a091: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069a095: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_0069a099:; BB(0x0069a099);
    /* 0069a099: lea esi, [eax + edx] */ r_esi = (u32)(r_eax+r_edx);
    /* 0069a09c: cmp dword ptr [esi + ecx], 0 */ {  u32 a = R32((u32)(r_esi+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0a0: je 0x69a0db */ if (fZ) goto L_0069a0db;
L_0069a0a2:; BB(0x0069a0a2);
    /* 0069a0a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0a4: je 0x69a0c9 */ if (fZ) goto L_0069a0c9;
L_0069a0a6:; BB(0x0069a0a6);
    /* 0069a0a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a0a8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a0aa: jle 0x69a0c9 */ if ((fZ||fS!=fO)) goto L_0069a0c9;
L_0069a0ac:; BB(0x0069a0ac);
    /* 0069a0ac: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069a0ae: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0069a0b0: fld dword ptr [ebp + eax*4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*4)));
    /* 0069a0b4: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0069a0b7: lea ecx, [ecx + eax*4] */ r_ecx = (u32)(r_ecx+r_eax*4);
    /* 0069a0ba: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a0bb: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a0bd: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0069a0bf: jl 0x69a0ac */ if ((fS!=fO)) goto L_0069a0ac;
L_0069a0c1:; BB(0x0069a0c1);
    /* 0069a0c1: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0069a0c5: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
L_0069a0c9:; BB(0x0069a0c9);
    /* 0069a0c9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a0cd: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0069a0cf: mov dword ptr [ebx + eax*4], esi */ W32((u32)(r_ebx+r_eax*4), r_esi);
    /* 0069a0d2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a0d3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069a0d7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_0069a0db:; BB(0x0069a0db);
    /* 0069a0db: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0069a0df: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a0e2: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0069a0e3: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0069a0e7: jne 0x69a099 */ if (!fZ) goto L_0069a099;
L_0069a0e9:; BB(0x0069a0e9);
    /* 0069a0e9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a0ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a0ef: je 0x69a156 */ if (fZ) goto L_0069a156;
L_0069a0f1:; BB(0x0069a0f1);
    /* 0069a0f1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0069a0f5: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069a0f9: push 0x69a160 */ { u32 v = 0x69a160u; r_esp -= 4; W32(r_esp, v); }
    /* 0069a0fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a0ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a100: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069a104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a106: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a107: call 0x69a380 */ r_esp -= 4; W32(r_esp, 0x69a10cu); f_0069a380();
    /* 0069a10c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a10f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069a113: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a115: je 0x69a14a */ if (fZ) goto L_0069a14a;
L_0069a117:; BB(0x0069a117);
    /* 0069a117: mov esi, ebp */ r_esi = r_ebp;
    /* 0069a119: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_0069a11d:; BB(0x0069a11d);
    /* 0069a11d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0069a121: cmp dword ptr [esi + edx], 0 */ {  u32 a = R32((u32)(r_esi+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a125: je 0x69a144 */ if (fZ) goto L_0069a144;
L_0069a127:; BB(0x0069a127);
    /* 0069a127: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a129: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a12b: jle 0x69a141 */ if ((fZ||fS!=fO)) goto L_0069a141;
L_0069a12d:; BB(0x0069a12d);
    /* 0069a12d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069a12f: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 0069a132: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0069a135: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069a137: fsub dword ptr [eax + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_ecx*4));
    /* 0069a13a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a13b: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a13d: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0069a13f: jl 0x69a12d */ if ((fS!=fO)) goto L_0069a12d;
L_0069a141:; BB(0x0069a141);
    /* 0069a141: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0069a144:; BB(0x0069a144);
    /* 0069a144: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a147: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0069a148: jne 0x69a11d */ if (!fZ) goto L_0069a11d;
L_0069a14a:; BB(0x0069a14a);
    /* 0069a14a: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069a14e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a14f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a150: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a151: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a152: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a155: ret  */ FN_RET(0x0069a050); r_esp += 4; return;
L_0069a156:; BB(0x0069a156);
    /* 0069a156: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a157: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a158: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a159: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a15b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a15c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a15f: ret  */ FN_RET(0x0069a050); r_esp += 4; return;
}

void f_0069a160(void) /* sub_69A160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a160);
    /* 0069a160: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a161: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a166: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a167: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0069a16b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069a16c: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069a16e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069a170: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0069a170, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069a170, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069a172: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0069a176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a178: jle 0x69a1b6 */ if ((fZ||fS!=fO)) goto L_0069a1b6;
L_0069a17a:; BB(0x0069a17a);
    /* 0069a17a: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0069a17e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a17f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a180: lea ebp, [ecx*4] */ r_ebp = (u32)(r_ecx*4);
    /* 0069a187: mov ebx, eax */ r_ebx = r_eax;
L_0069a189:; BB(0x0069a189);
    /* 0069a189: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a18a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a18b: call 0x69a1c0 */ r_esp -= 4; W32(r_esp, 0x69a190u); f_0069a1c0();
    /* 0069a190: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069a194: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a196: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a197: call 0x6951e0 */ r_esp -= 4; W32(r_esp, 0x69a19cu); f_006951e0();
    /* 0069a19c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0069a1a0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a1a3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a1a5: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a1a7: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0069a1a8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069a1ac: jne 0x69a189 */ if (!fZ) goto L_0069a189;
L_0069a1ae:; BB(0x0069a1ae);
    /* 0069a1ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a1af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a1b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a1b1: mov eax, edx */ r_eax = r_edx;
    /* 0069a1b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a1b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069a1b5: ret  */ FN_RET(0x0069a160); r_esp += 4; return;
L_0069a1b6:; BB(0x0069a1b6);
    /* 0069a1b6: mov eax, esi */ r_eax = r_esi;
    /* 0069a1b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a1b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a1ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069a1bb: ret  */ FN_RET(0x0069a160); r_esp += 4; return;
}

void f_0069a1c0(void) /* sub_69A1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a1c0);
    /* 0069a1c0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a1c3: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069a1c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a1c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a1c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a1ca: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0069a1cc: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0069a1cf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a1d1: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0069a1d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a1d5: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0069a1d9: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069a1e1: jle 0x69a2ab */ if ((fZ||fS!=fO)) goto L_0069a2ab;
L_0069a1e7:; BB(0x0069a1e7);
    /* 0069a1e7: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0069a1ea: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0069a1ed: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0069a1ef: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0069a1f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a1f4: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0069a1f8: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0069a1fc: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0069a200: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069a202: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069a206: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069a20a: lea ebx, [edx + ebp*4] */ r_ebx = (u32)(r_edx+r_ebp*4);
    /* 0069a20d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0069a211: jmp 0x69a21b */ goto L_0069a21b;
L_0069a213:; BB(0x0069a213);
    /* 0069a213: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0069a217: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
L_0069a21b:; BB(0x0069a21b);
    /* 0069a21b: mov eax, dword ptr [ebx - 4] */ r_eax = R32((u32)(r_ebx+0xfffffffcu));
    /* 0069a21e: sub ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a221: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069a225: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069a229: fcomp dword ptr [edi + ecx*4] */ fx_compare(ST(0), R_F32((u32)(r_edi+r_ecx*4))); FPOP();
    /* 0069a22c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a22e: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a231: jp 0x69a264 */ if (fP) goto L_0069a264;
L_0069a233:; BB(0x0069a233);
    /* 0069a233: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069a237: fcomp dword ptr [edi + ecx*4 - 4] */ fx_compare(ST(0), R_F32((u32)(r_edi+r_ecx*4+0xfffffffcu))); FPOP();
    /* 0069a23b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a23d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a240: jp 0x69a282 */ if (fP) goto L_0069a282;
L_0069a242:; BB(0x0069a242);
    /* 0069a242: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a243: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a245: jle 0x69a282 */ if ((fZ||fS!=fO)) goto L_0069a282;
L_0069a247:; BB(0x0069a247);
    /* 0069a247: lea edx, [edi + ecx*4 - 4] */ r_edx = (u32)(r_edi+r_ecx*4+0xfffffffcu);
L_0069a24b:; BB(0x0069a24b);
    /* 0069a24b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069a24f: fcomp dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); FPOP();
    /* 0069a251: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a253: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069a258: je 0x69a282 */ if (fZ) goto L_0069a282;
L_0069a25a:; BB(0x0069a25a);
    /* 0069a25a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a25b: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069a25e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a260: jg 0x69a24b */ if ((!fZ&&fS==fO)) goto L_0069a24b;
L_0069a262:; BB(0x0069a262);
    /* 0069a262: jmp 0x69a282 */ goto L_0069a282;
L_0069a264:; BB(0x0069a264);
    /* 0069a264: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a265: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069a266: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a268: jge 0x69a282 */ if ((fS==fO)) goto L_0069a282;
L_0069a26a:; BB(0x0069a26a);
    /* 0069a26a: lea edx, [edi + ecx*4] */ r_edx = (u32)(r_edi+r_ecx*4);
L_0069a26d:; BB(0x0069a26d);
    /* 0069a26d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069a271: fcomp dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); FPOP();
    /* 0069a273: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a275: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a278: jnp 0x69a282 */ if (!fP) goto L_0069a282;
L_0069a27a:; BB(0x0069a27a);
    /* 0069a27a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a27b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a27e: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a280: jl 0x69a26d */ if ((fS!=fO)) goto L_0069a26d;
L_0069a282:; BB(0x0069a282);
    /* 0069a282: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0069a286: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069a28a: imul edx, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069a28f: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 0069a292: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069a296: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a298: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069a299: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069a29d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069a2a1: jne 0x69a213 */ if (!fZ) goto L_0069a213;
L_0069a2a7:; BB(0x0069a2a7);
    /* 0069a2a7: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
L_0069a2ab:; BB(0x0069a2ab);
    /* 0069a2ab: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0069a2ae: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0069a2b1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a2b5: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a2b9: jg 0x69a346 */ if ((!fZ&&fS==fO)) goto L_0069a346;
L_0069a2bf:; BB(0x0069a2bf);
    /* 0069a2bf: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0069a2c2: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0069a2c5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069a2c7: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0069a2cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a2d1: mov dword ptr [esp + 0x10], 0xffffffff */ W32((u32)(r_esp+0x10u), 0xffffffffu);
    /* 0069a2d9: jle 0x69a346 */ if ((fZ||fS!=fO)) goto L_0069a346;
L_0069a2db:; BB(0x0069a2db);
    /* 0069a2db: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0069a2df: shl ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0069a2e2: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069a2e4: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0069a2e8: mov edx, eax */ r_edx = r_eax;
    /* 0069a2ea: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0069a2ed: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
L_0069a2f0:; BB(0x0069a2f0);
    /* 0069a2f0: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a2f3: jle 0x69a338 */ if ((fZ||fS!=fO)) goto L_0069a338;
L_0069a2f5:; BB(0x0069a2f5);
    /* 0069a2f5: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069a2f9: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 0069a2ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a301: jle 0x69a31a */ if ((fZ||fS!=fO)) goto L_0069a31a;
L_0069a303:; BB(0x0069a303);
    /* 0069a303: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
L_0069a307:; BB(0x0069a307);
    /* 0069a307: fld dword ptr [edx + eax] */ FPUSH(R_F32((u32)(r_edx+r_eax)));
    /* 0069a30a: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0069a30c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a30f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0069a310: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069a312: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069a314: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0069a316: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069a318: jne 0x69a307 */ if (!fZ) goto L_0069a307;
L_0069a31a:; BB(0x0069a31a);
    /* 0069a31a: cmp dword ptr [esp + 0x10], -1 */ {  u32 a = R32((u32)(r_esp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a31f: je 0x69a32c */ if (fZ) goto L_0069a32c;
L_0069a321:; BB(0x0069a321);
    /* 0069a321: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 0069a325: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a327: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a32a: jp 0x69a336 */ if (fP) goto L_0069a336;
L_0069a32c:; BB(0x0069a32c);
    /* 0069a32c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0069a330: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0069a334: jmp 0x69a338 */ goto L_0069a338;
L_0069a336:; BB(0x0069a336);
    /* 0069a336: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0069a338:; BB(0x0069a338);
    /* 0069a338: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a33a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a33b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069a33e: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a340: jl 0x69a2f0 */ if ((fS!=fO)) goto L_0069a2f0;
L_0069a342:; BB(0x0069a342);
    /* 0069a342: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_0069a346:; BB(0x0069a346);
    /* 0069a346: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0069a34a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0069a34e: mov edx, esi */ r_edx = r_esi;
    /* 0069a350: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069a353: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0069a356: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a358: lea eax, [ecx + edx*4] */ r_eax = (u32)(r_ecx+r_edx*4);
    /* 0069a35b: jle 0x69a373 */ if ((fZ||fS!=fO)) goto L_0069a373;
L_0069a35d:; BB(0x0069a35d);
    /* 0069a35d: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0069a361: mov ecx, ebp */ r_ecx = r_ebp;
L_0069a363:; BB(0x0069a363);
    /* 0069a363: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0069a365: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0069a367: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a36a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a36d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0069a36e: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0069a371: jne 0x69a363 */ if (!fZ) goto L_0069a363;
L_0069a373:; BB(0x0069a373);
    /* 0069a373: mov eax, esi */ r_eax = r_esi;
    /* 0069a375: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a376: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a377: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a378: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a379: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a37c: ret  */ FN_RET(0x0069a1c0); r_esp += 4; return;
}

void f_0069a380(void) /* sub_69A380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a380);
    /* 0069a380: sub esp, 0x42c */ {  u32 a = r_esp; u32 b = 0x42cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a386: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a387: mov ebx, dword ptr [esp + 0x438] */ r_ebx = R32((u32)(r_esp+0x438u));
    /* 0069a38e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a38f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a390: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069a392: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0069a395: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069a399: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0069a39c: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0069a39e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069a3a0: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 0069a3a3: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069a3a7: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069a3aa: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069a3ac: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0069a3b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069a3b1: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0069a3b1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069a3b1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069a3b3: mov ecx, 0x80 */ r_ecx = 0x80u;
    /* 0069a3b8: lea edi, [esp + 0x238] */ r_edi = (u32)(r_esp+0x238u);
    /* 0069a3bf: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0069a3c3: mov edx, eax */ r_edx = r_eax;
    /* 0069a3c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a3c7: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069a3c9: mov ecx, 0x80 */ r_ecx = 0x80u;
    /* 0069a3ce: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 0069a3d2: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069a3d4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069a3d8: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0069a3db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a3dd: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0069a3e1: jle 0x69a5c1 */ if ((fZ||fS!=fO)) goto L_0069a5c1;
L_0069a3e7:; BB(0x0069a3e7);
    /* 0069a3e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
L_0069a3e8:; BB(0x0069a3e8);
    /* 0069a3e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069a3ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a3ec: jle 0x69a5ac */ if ((fZ||fS!=fO)) goto L_0069a5ac;
L_0069a3f2:; BB(0x0069a3f2);
    /* 0069a3f2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a3f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a3f8: jne 0x69a47e */ if (!fZ) goto L_0069a47e;
L_0069a3fe:; BB(0x0069a3fe);
    /* 0069a3fe: mov eax, dword ptr [esp + 0x44c] */ r_eax = R32((u32)(r_esp+0x44cu));
    /* 0069a405: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a407: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a409: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0069a40d: jle 0x69a47e */ if ((fZ||fS!=fO)) goto L_0069a47e;
L_0069a40f:; BB(0x0069a40f);
    /* 0069a40f: mov eax, dword ptr [esp + 0x450] */ r_eax = R32((u32)(r_esp+0x450u));
    /* 0069a416: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0069a41b: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a41d: mov edx, dword ptr [eax + ebp*4] */ r_edx = R32((u32)(r_eax+r_ebp*4));
    /* 0069a420: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0069a423: jle 0x69a445 */ if ((fZ||fS!=fO)) goto L_0069a445;
L_0069a425:; BB(0x0069a425);
    /* 0069a425: lea edx, [edx + edi*4 + 4] */ r_edx = (u32)(r_edx+r_edi*4+0x4u);
L_0069a429:; BB(0x0069a429);
    /* 0069a429: imul eax, dword ptr [esp + 0x34] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x34u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069a42e: lea ebp, [ecx + edi] */ r_ebp = (u32)(r_ecx+r_edi);
    /* 0069a431: cmp ebp, dword ptr [esp + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a435: jge 0x69a439 */ if ((fS==fO)) goto L_0069a439;
L_0069a437:; BB(0x0069a437);
    /* 0069a437: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0069a439:; BB(0x0069a439);
    /* 0069a439: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a43a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a43d: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a43f: jl 0x69a429 */ if ((fS!=fO)) goto L_0069a429;
L_0069a441:; BB(0x0069a441);
    /* 0069a441: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_0069a445:; BB(0x0069a445);
    /* 0069a445: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0069a448: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a44b: jge 0x69a46a */ if ((fS==fO)) goto L_0069a46a;
L_0069a44d:; BB(0x0069a44d);
    /* 0069a44d: mov edx, dword ptr [esp + 0x440] */ r_edx = R32((u32)(r_esp+0x440u));
    /* 0069a454: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a457: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a459: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a45a: call 0x6951e0 */ r_esp -= 4; W32(r_esp, 0x69a45fu); f_006951e0();
    /* 0069a45f: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0069a462: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a465: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a467: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
L_0069a46a:; BB(0x0069a46a);
    /* 0069a46a: mov eax, dword ptr [esp + 0x44c] */ r_eax = R32((u32)(r_esp+0x44cu));
    /* 0069a471: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a472: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a474: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0069a478: jl 0x69a40f */ if ((fS!=fO)) goto L_0069a40f;
L_0069a47a:; BB(0x0069a47a);
    /* 0069a47a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
L_0069a47e:; BB(0x0069a47e);
    /* 0069a47e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a480: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0069a488: jle 0x69a5a4 */ if ((fZ||fS!=fO)) goto L_0069a5a4;
L_0069a48e:; BB(0x0069a48e);
    /* 0069a48e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069a490: imul ecx, dword ptr [esp + 0x18] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x18u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069a495: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
L_0069a499:; BB(0x0069a499);
    /* 0069a499: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a49b: jge 0x69a5ac */ if ((fS==fO)) goto L_0069a5ac;
L_0069a4a1:; BB(0x0069a4a1);
    /* 0069a4a1: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069a4a5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069a4a7: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a4a9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0069a4ad: mov eax, dword ptr [esp + 0x44c] */ r_eax = R32((u32)(r_esp+0x44cu));
    /* 0069a4b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069a4b6: jle 0x69a588 */ if ((fZ||fS!=fO)) goto L_0069a588;
L_0069a4bc:; BB(0x0069a4bc);
    /* 0069a4bc: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069a4c0: mov esi, dword ptr [esp + 0x450] */ r_esi = R32((u32)(r_esp+0x450u));
    /* 0069a4c7: mov ebp, dword ptr [esp + 0x448] */ r_ebp = R32((u32)(r_esp+0x448u));
    /* 0069a4ce: mov edx, 1 */ r_edx = 0x1u;
    /* 0069a4d3: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069a4d5: mov ecx, dword ptr [esp + 0x44c] */ r_ecx = R32((u32)(r_esp+0x44cu));
    /* 0069a4dc: mov eax, esi */ r_eax = r_esi;
    /* 0069a4de: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a4e0: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0069a4e4: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_0069a4e8:; BB(0x0069a4e8);
    /* 0069a4e8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a4ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a4ee: jne 0x69a4ff */ if (!fZ) goto L_0069a4ff;
L_0069a4f0:; BB(0x0069a4f0);
    /* 0069a4f0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069a4f2: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 0069a4f5: lea eax, [esp + ecx*4 + 0x3c] */ r_eax = (u32)(r_esp+r_ecx*4+0x3cu);
    /* 0069a4f9: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069a4fd: add dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0069a4ff:; BB(0x0069a4ff);
    /* 0069a4ff: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069a501: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069a505: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 0069a508: test dword ptr [ecx + eax*4 + 0x14], edx */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x14u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a50c: je 0x69a56a */ if (fZ) goto L_0069a56a;
L_0069a50e:; BB(0x0069a50e);
    /* 0069a50e: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0069a511: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0069a514: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069a518: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0069a51b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a51d: je 0x69a56a */ if (fZ) goto L_0069a56a;
L_0069a51f:; BB(0x0069a51f);
    /* 0069a51f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069a523: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069a527: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069a529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a52a: mov eax, dword ptr [esi + ebp] */ r_eax = R32((u32)(r_esi+r_ebp));
    /* 0069a52d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a52e: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0069a531: mov eax, dword ptr [esp + 0x44c] */ r_eax = R32((u32)(r_esp+0x44cu));
    /* 0069a538: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a53b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a53c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a53d: call dword ptr [esp + 0x468] */ { u32 t = R32((u32)(r_esp+0x468u)); r_esp -= 4; W32(r_esp, 0x69a544u); call_ind(t); }
    /* 0069a544: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 0069a547: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a54a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a54c: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 0069a54f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069a551: mov edx, dword ptr [ecx + edi*4] */ r_edx = R32((u32)(r_ecx+r_edi*4));
    /* 0069a554: lea ecx, [esp + edx*4 + 0x23c] */ r_ecx = (u32)(r_esp+r_edx*4+0x23cu);
    /* 0069a55b: mov edx, dword ptr [esp + edx*4 + 0x23c] */ r_edx = R32((u32)(r_esp+r_edx*4+0x23cu));
    /* 0069a562: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a564: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0069a566: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_0069a56a:; BB(0x0069a56a);
    /* 0069a56a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069a56e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a571: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069a572: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069a576: jne 0x69a4e8 */ if (!fZ) goto L_0069a4e8;
L_0069a57c:; BB(0x0069a57c);
    /* 0069a57c: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0069a580: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069a584: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
L_0069a588:; BB(0x0069a588);
    /* 0069a588: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069a58c: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0069a590: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a591: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069a592: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a594: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a596: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069a59a: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0069a59e: jl 0x69a499 */ if ((fS!=fO)) goto L_0069a499;
L_0069a5a4:; BB(0x0069a5a4);
    /* 0069a5a4: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a5a6: jl 0x69a3f2 */ if ((fS!=fO)) goto L_0069a3f2;
L_0069a5ac:; BB(0x0069a5ac);
    /* 0069a5ac: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a5b0: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0069a5b3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a5b4: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a5b6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069a5ba: jl 0x69a3e8 */ if ((fS!=fO)) goto L_0069a3e8;
L_0069a5c0:; BB(0x0069a5c0);
    /* 0069a5c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_0069a5c1:; BB(0x0069a5c1);
    /* 0069a5c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a5c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a5c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a5c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a5c6: add esp, 0x42c */ {  u32 a = r_esp; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a5cc: ret  */ FN_RET(0x0069a380); r_esp += 4; return;
}

void f_0069a5d0(void) /* sub_69A5D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a5d0);
    /* 0069a5d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a5d1: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0069a5d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a5d7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a5d9: jle 0x69a617 */ if ((fZ||fS!=fO)) goto L_0069a617;
L_0069a5db:; BB(0x0069a5db);
    /* 0069a5db: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069a5df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a5e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a5e1: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0069a5e5: mov eax, ecx */ r_eax = r_ecx;
    /* 0069a5e7: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0069a5e9:; BB(0x0069a5e9);
    /* 0069a5e9: cmp dword ptr [esi + eax], 0 */ {  u32 a = R32((u32)(r_esi+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a5ed: je 0x69a5f5 */ if (fZ) goto L_0069a5f5;
L_0069a5ef:; BB(0x0069a5ef);
    /* 0069a5ef: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0069a5f1: mov dword ptr [ecx + edx*4], ebx */ W32((u32)(r_ecx+r_edx*4), r_ebx);
    /* 0069a5f4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0069a5f5:; BB(0x0069a5f5);
    /* 0069a5f5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a5f8: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0069a5f9: jne 0x69a5e9 */ if (!fZ) goto L_0069a5e9;
L_0069a5fb:; BB(0x0069a5fb);
    /* 0069a5fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a5fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a5fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a5ff: je 0x69a617 */ if (fZ) goto L_0069a617;
L_0069a601:; BB(0x0069a601);
    /* 0069a601: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069a605: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a606: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a607: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069a60b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a60c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a60d: call 0x69a620 */ r_esp -= 4; W32(r_esp, 0x69a612u); f_0069a620();
    /* 0069a612: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a615: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a616: ret  */ FN_RET(0x0069a5d0); r_esp += 4; return;
L_0069a617:; BB(0x0069a617);
    /* 0069a617: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a619: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a61a: ret  */ FN_RET(0x0069a5d0); r_esp += 4; return;
}

void f_0069a620(void) /* sub_69A620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a620);
    /* 0069a620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a621: mov ebp, esp */ r_ebp = r_esp;
    /* 0069a623: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0069a626: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a629: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0069a62c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a62d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a62e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a62f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069a631: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0069a635: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069a638: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0069a63a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0069a63d: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0069a640: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069a642: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0069a646: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069a647: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0069a647, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069a647, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069a649: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0069a64c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0069a64f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0069a653: mov ebx, eax */ r_ebx = r_eax;
    /* 0069a655: lea eax, [edi*4] */ r_eax = (u32)(r_edi*4);
    /* 0069a65c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a65d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a65e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 0069a662: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69a667u); f_00690e40();
    /* 0069a667: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0069a66b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a66e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069a670: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a672: fdivr qword ptr [0x6b4b00] */ ST(0) = R_F64((u32)(0x6b4b00u)) / ST(0);
    /* 0069a678: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069a67c: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0069a680: jle 0x69a6b3 */ if ((fZ||fS!=fO)) goto L_0069a6b3;
L_0069a682:; BB(0x0069a682);
    /* 0069a682: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
L_0069a685:; BB(0x0069a685);
    /* 0069a685: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0069a688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a689: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a68a: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69a68fu); f_00690e40();
    /* 0069a68f: mov edi, eax */ r_edi = r_eax;
    /* 0069a691: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069a695: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069a697: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a69a: mov edx, ecx */ r_edx = r_ecx;
    /* 0069a69c: mov dword ptr [eax + esi*4], edi */ W32((u32)(r_eax+r_esi*4), r_edi);
    /* 0069a69f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a6a1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0069a6a4: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069a6a6: mov ecx, edx */ r_ecx = r_edx;
    /* 0069a6a8: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a6ab: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a6ac: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0069a6ae: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a6b1: jl 0x69a685 */ if ((fS!=fO)) goto L_0069a685;
L_0069a6b3:; BB(0x0069a6b3);
    /* 0069a6b3: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069a6b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a6b9: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a6bb: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0069a6bf: jle 0x69a814 */ if ((fZ||fS!=fO)) goto L_0069a814;
L_0069a6c5:; BB(0x0069a6c5);
    /* 0069a6c5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0069a6c8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0069a6cc: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_0069a6d0:; BB(0x0069a6d0);
    /* 0069a6d0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069a6d4: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0069a6d8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069a6da: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a6dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a6de: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0069a6e2: jle 0x69a7f9 */ if ((fZ||fS!=fO)) goto L_0069a7f9;
L_0069a6e8:; BB(0x0069a6e8);
    /* 0069a6e8: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0069a6ec: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0069a6f0: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a6f1: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0069a6f5: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069a6f9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0069a6fc: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a6fe: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 0069a702: jmp 0x69a708 */ goto L_0069a708;
L_0069a704:; BB(0x0069a704);
    /* 0069a704: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
L_0069a708:; BB(0x0069a708);
    /* 0069a708: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a70a: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0069a712: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0069a71a: jle 0x69a771 */ if ((fZ||fS!=fO)) goto L_0069a771;
L_0069a71c:; BB(0x0069a71c);
    /* 0069a71c: lea esi, [eax*4] */ r_esi = (u32)(r_eax*4);
L_0069a723:; BB(0x0069a723);
    /* 0069a723: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0069a727: mov eax, dword ptr [edx + ebx] */ r_eax = R32((u32)(r_edx+r_ebx));
    /* 0069a72a: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 0069a72d: lea ecx, [esi + eax] */ r_ecx = (u32)(r_esi+r_eax);
    /* 0069a730: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069a732: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069a736: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069a738: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069a73a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a73c: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069a741: jne 0x69a749 */ if (!fZ) goto L_0069a749;
L_0069a743:; BB(0x0069a743);
    /* 0069a743: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0069a747: jmp 0x69a74b */ goto L_0069a74b;
L_0069a749:; BB(0x0069a749);
    /* 0069a749: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0069a74b:; BB(0x0069a74b);
    /* 0069a74b: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069a74d: fadd dword ptr [0x6b3654] */ ST(0) = ST(0) + R_F32((u32)(0x6b3654u));
    /* 0069a753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a756: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069a759: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x69a75eu); f_00686fb4();
    /* 0069a75e: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069a760: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0069a764: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a767: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a76a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0069a76b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0069a76f: jne 0x69a723 */ if (!fZ) goto L_0069a723;
L_0069a771:; BB(0x0069a771);
    /* 0069a771: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0069a775: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0069a779: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069a77d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069a77f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a781: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0069a785: jle 0x69a7d7 */ if ((fZ||fS!=fO)) goto L_0069a7d7;
L_0069a787:; BB(0x0069a787);
    /* 0069a787: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069a78b: lea edi, [ecx + 0x614] */ r_edi = (u32)(r_ecx+0x614u);
L_0069a791:; BB(0x0069a791);
    /* 0069a791: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069a795: fcomp dword ptr [edi - 0x100] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xffffff00u))); FPOP();
    /* 0069a79b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a79d: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a7a0: jp 0x69a7cb */ if (fP) goto L_0069a7cb;
L_0069a7a2:; BB(0x0069a7a2);
    /* 0069a7a2: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0069a7a4: fcomp dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); FPOP();
    /* 0069a7aa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a7ac: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a7af: jnp 0x69a7d7 */ if (!fP) goto L_0069a7d7;
L_0069a7b1:; BB(0x0069a7b1);
    /* 0069a7b1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0069a7b5: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69a7bau); f_00687450();
    /* 0069a7ba: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0069a7be: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0069a7c2: fcomp dword ptr [edi] */ fx_compare(ST(0), R_F32((u32)(r_edi))); FPOP();
    /* 0069a7c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a7c6: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a7c9: jnp 0x69a7d7 */ if (!fP) goto L_0069a7d7;
L_0069a7cb:; BB(0x0069a7cb);
    /* 0069a7cb: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069a7cf: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a7d0: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069a7d3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a7d5: jl 0x69a791 */ if ((fS!=fO)) goto L_0069a791;
L_0069a7d7:; BB(0x0069a7d7);
    /* 0069a7d7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0069a7d9: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069a7dd: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069a7e1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0069a7e5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069a7e8: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069a7e9: mov dword ptr [edx + ecx*4], esi */ W32((u32)(r_edx+r_ecx*4), r_esi);
    /* 0069a7ec: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069a7f0: jne 0x69a704 */ if (!fZ) goto L_0069a704;
L_0069a7f6:; BB(0x0069a7f6);
    /* 0069a7f6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
L_0069a7f9:; BB(0x0069a7f9);
    /* 0069a7f9: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069a7fd: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069a801: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a802: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a804: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a806: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0069a80a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0069a80e: jl 0x69a6d0 */ if ((fS!=fO)) goto L_0069a6d0;
L_0069a814:; BB(0x0069a814);
    /* 0069a814: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0069a817: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a818: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a81a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0069a81d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a81e: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0069a821: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a825: mov esp, ebp */ r_esp = r_ebp;
    /* 0069a827: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a828: ret  */ FN_RET(0x0069a620); r_esp += 4; return;
}

void f_0069a830(void) /* sub_69A830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a830);
    /* 0069a830: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a831: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0069a835: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a837: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a839: jle 0x69a877 */ if ((fZ||fS!=fO)) goto L_0069a877;
L_0069a83b:; BB(0x0069a83b);
    /* 0069a83b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069a83f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a840: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a841: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0069a845: mov eax, ecx */ r_eax = r_ecx;
    /* 0069a847: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0069a849:; BB(0x0069a849);
    /* 0069a849: cmp dword ptr [esi + eax], 0 */ {  u32 a = R32((u32)(r_esi+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a84d: je 0x69a855 */ if (fZ) goto L_0069a855;
L_0069a84f:; BB(0x0069a84f);
    /* 0069a84f: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0069a851: mov dword ptr [ecx + edx*4], ebx */ W32((u32)(r_ecx+r_edx*4), r_ebx);
    /* 0069a854: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0069a855:; BB(0x0069a855);
    /* 0069a855: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a858: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0069a859: jne 0x69a849 */ if (!fZ) goto L_0069a849;
L_0069a85b:; BB(0x0069a85b);
    /* 0069a85b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a85c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a85d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a85f: je 0x69a877 */ if (fZ) goto L_0069a877;
L_0069a861:; BB(0x0069a861);
    /* 0069a861: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a862: mov dword ptr [esp + 0x14], 0x695540 */ W32((u32)(r_esp+0x14u), 0x695540u);
    /* 0069a86a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069a86e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0069a872: jmp 0x699e40 */ f_00699e40(); return;
L_0069a877:; BB(0x0069a877);
    /* 0069a877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a879: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a87a: ret  */ FN_RET(0x0069a830); r_esp += 4; return;
}

void f_0069a880(void) /* sub_69A880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a880);
    /* 0069a880: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069a884: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a885: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069a887: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a889: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a88b: jle 0x69a8bb */ if ((fZ||fS!=fO)) goto L_0069a8bb;
L_0069a88d:; BB(0x0069a88d);
    /* 0069a88d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_0069a891:; BB(0x0069a891);
    /* 0069a891: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a895: je 0x69a898 */ if (fZ) goto L_0069a898;
L_0069a897:; BB(0x0069a897);
    /* 0069a897: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0069a898:; BB(0x0069a898);
    /* 0069a898: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a899: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a89b: jl 0x69a891 */ if ((fS!=fO)) goto L_0069a891;
L_0069a89d:; BB(0x0069a89d);
    /* 0069a89d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069a89f: je 0x69a8bb */ if (fZ) goto L_0069a8bb;
L_0069a8a1:; BB(0x0069a8a1);
    /* 0069a8a1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069a8a5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069a8a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8aa: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069a8ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8b1: call 0x69a8c0 */ r_esp -= 4; W32(r_esp, 0x69a8b6u); f_0069a8c0();
    /* 0069a8b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a8b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a8ba: ret  */ FN_RET(0x0069a880); r_esp += 4; return;
L_0069a8bb:; BB(0x0069a8bb);
    /* 0069a8bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a8bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a8be: ret  */ FN_RET(0x0069a880); r_esp += 4; return;
}

void f_0069a8c0(void) /* sub_69A8C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069a8c0);
    /* 0069a8c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069a8c3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069a8c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8ca: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0069a8cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8cd: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0069a8d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8d3: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0069a8d6: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0069a8d9: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0069a8dc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069a8e0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0069a8e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a8e3: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069a8e5: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0069a8e9: mov eax, esi */ r_eax = r_esi;
    /* 0069a8eb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069a8ec: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0069a8ec, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069a8ec, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069a8ee: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069a8f2: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69a8f7u); f_00690e40();
    /* 0069a8f7: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0069a8fb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069a8ff: mov eax, esi */ r_eax = r_esi;
    /* 0069a901: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069a904: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069a905: idiv dword ptr [esp + 0x1c] */ { i32 d = (i32)R32((u32)(r_esp+0x1cu)); if (!d) UNSUP(0x0069a905, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069a905, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069a909: mov esi, eax */ r_esi = r_eax;
    /* 0069a90b: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0069a90e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a90f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a910: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69a915u); f_00690e40();
    /* 0069a915: mov edi, eax */ r_edi = r_eax;
    /* 0069a917: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069a91b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069a91d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069a920: mov edx, ecx */ r_edx = r_ecx;
    /* 0069a922: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0069a924: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a926: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0069a92e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0069a931: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069a933: mov ecx, edx */ r_ecx = r_edx;
    /* 0069a935: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a938: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0069a93a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069a93c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069a93d: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0069a93d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069a93d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069a93f: mov esi, eax */ r_esi = r_eax;
    /* 0069a941: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069a945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a947: jle 0x69aa2f */ if ((fZ||fS!=fO)) goto L_0069aa2f;
L_0069a94d:; BB(0x0069a94d);
    /* 0069a94d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069a951: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069a952: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_0069a956:; BB(0x0069a956);
    /* 0069a956: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0069a95a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069a95c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a95e: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0069a966: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0069a96e: jle 0x69a9d6 */ if ((fZ||fS!=fO)) goto L_0069a9d6;
L_0069a970:; BB(0x0069a970);
    /* 0069a970: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0069a974: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069a976: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_0069a97a:; BB(0x0069a97a);
    /* 0069a97a: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069a97e: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 0069a981: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069a983: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0069a987: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069a989: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069a98b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a98d: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069a992: jne 0x69a99a */ if (!fZ) goto L_0069a99a;
L_0069a994:; BB(0x0069a994);
    /* 0069a994: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0069a998: jmp 0x69a99c */ goto L_0069a99c;
L_0069a99a:; BB(0x0069a99a);
    /* 0069a99a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0069a99c:; BB(0x0069a99c);
    /* 0069a99c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0069a9a1: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a9a3: jle 0x69a9cf */ if ((fZ||fS!=fO)) goto L_0069a9cf;
L_0069a9a5:; BB(0x0069a9a5);
    /* 0069a9a5: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0069a9a9: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0069a9ac: fld dword ptr [eax + esi*4] */ FPUSH(R_F32((u32)(r_eax+r_esi*4)));
    /* 0069a9af: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069a9b1: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0069a9b5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069a9b7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069a9b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a9bb: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069a9c0: jne 0x69a9c8 */ if (!fZ) goto L_0069a9c8;
L_0069a9c2:; BB(0x0069a9c2);
    /* 0069a9c2: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0069a9c6: jmp 0x69a9ca */ goto L_0069a9ca;
L_0069a9c8:; BB(0x0069a9c8);
    /* 0069a9c8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0069a9ca:; BB(0x0069a9ca);
    /* 0069a9ca: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a9cb: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a9cd: jl 0x69a9a5 */ if ((fS!=fO)) goto L_0069a9a5;
L_0069a9cf:; BB(0x0069a9cf);
    /* 0069a9cf: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069a9d1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a9d2: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a9d4: jl 0x69a97a */ if ((fS!=fO)) goto L_0069a97a;
L_0069a9d6:; BB(0x0069a9d6);
    /* 0069a9d6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069a9da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a9dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069a9de: jle 0x69aa10 */ if ((fZ||fS!=fO)) goto L_0069aa10;
L_0069a9e0:; BB(0x0069a9e0);
    /* 0069a9e0: lea edx, [ebx + 0x614] */ r_edx = (u32)(r_ebx+0x614u);
L_0069a9e6:; BB(0x0069a9e6);
    /* 0069a9e6: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0069a9ea: fcomp dword ptr [edx - 0x100] */ fx_compare(ST(0), R_F32((u32)(r_edx+0xffffff00u))); FPOP();
    /* 0069a9f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a9f2: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069a9f5: jp 0x69aa04 */ if (fP) goto L_0069aa04;
L_0069a9f7:; BB(0x0069a9f7);
    /* 0069a9f7: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0069a9fb: fcomp dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); FPOP();
    /* 0069a9fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069a9ff: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069aa02: jnp 0x69aa10 */ if (!fP) goto L_0069aa10;
L_0069aa04:; BB(0x0069aa04);
    /* 0069aa04: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069aa08: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069aa09: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069aa0c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069aa0e: jl 0x69a9e6 */ if ((fS!=fO)) goto L_0069a9e6;
L_0069aa10:; BB(0x0069aa10);
    /* 0069aa10: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069aa14: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0069aa18: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069aa19: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0069aa1b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069aa1f: mov dword ptr [edx + eax*4 - 4], ecx */ W32((u32)(r_edx+r_eax*4+0xfffffffcu), r_ecx);
    /* 0069aa23: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069aa27: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069aa29: jl 0x69a956 */ if ((fS!=fO)) goto L_0069a956;
L_0069aa2f:; BB(0x0069aa2f);
    /* 0069aa2f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069aa33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069aa34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069aa35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069aa36: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0069aa39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069aa3a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069aa3b: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0069aa3e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0069aa42: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aa45: ret  */ FN_RET(0x0069a8c0); r_esp += 4; return;
}

void f_0069aa50(void) /* sub_69AA50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069aa50);
    /* 0069aa50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069aa53: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069aa57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa58: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0069aa5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa5d: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0069aa60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa61: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069aa62: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069aa64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa65: mov ebp, eax */ r_ebp = r_eax;
    /* 0069aa67: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069aa6f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0069aa71: mov eax, ebp */ r_eax = r_ebp;
    /* 0069aa73: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069aa76: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069aa79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069aa7b: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69aa80u); f_00690e40();
    /* 0069aa80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aa83: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069aa87: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069aa89: jle 0x69ab92 */ if ((fZ||fS!=fO)) goto L_0069ab92;
L_0069aa8f:; BB(0x0069aa8f);
    /* 0069aa8f: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0069aa93: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0069aa97: mov ecx, eax */ r_ecx = r_eax;
    /* 0069aa99: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069aa9b: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069aa9d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069aaa1: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0069aaa5: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_0069aaa9:; BB(0x0069aaa9);
    /* 0069aaa9: mov eax, dword ptr [edx + edi] */ r_eax = R32((u32)(r_edx+r_edi));
    /* 0069aaac: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069aab0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069aab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aab4: je 0x69aaba */ if (fZ) goto L_0069aaba;
L_0069aab6:; BB(0x0069aab6);
    /* 0069aab6: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0069aaba:; BB(0x0069aaba);
    /* 0069aaba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069aabc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069aabe: jle 0x69aae2 */ if ((fZ||fS!=fO)) goto L_0069aae2;
L_0069aac0:; BB(0x0069aac0);
    /* 0069aac0: lea edx, [ebx*4] */ r_edx = (u32)(r_ebx*4);
    /* 0069aac7: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0069aac9:; BB(0x0069aac9);
    /* 0069aac9: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069aacd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069aace: mov esi, dword ptr [esi + eax*4 - 4] */ r_esi = R32((u32)(r_esi+r_eax*4+0xfffffffcu));
    /* 0069aad2: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0069aad4: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069aad6: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069aad8: jl 0x69aac9 */ if ((fS!=fO)) goto L_0069aac9;
L_0069aada:; BB(0x0069aada);
    /* 0069aada: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069aade: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
L_0069aae2:; BB(0x0069aae2);
    /* 0069aae2: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069aae6: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069aae9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069aaea: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0069aaee: jne 0x69aaa9 */ if (!fZ) goto L_0069aaa9;
L_0069aaf0:; BB(0x0069aaf0);
    /* 0069aaf0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069aaf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aaf6: je 0x69ab92 */ if (fZ) goto L_0069ab92;
L_0069aafc:; BB(0x0069aafc);
    /* 0069aafc: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0069ab00: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069ab04: push 0x69a160 */ { u32 v = 0x69a160u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab0a: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0069ab0e: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0069ab12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ab17: call 0x69a380 */ r_esp -= 4; W32(r_esp, 0x69ab1cu); f_0069a380();
    /* 0069ab1c: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 0069ab20: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ab23: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ab25: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0069ab29: je 0x69ab86 */ if (fZ) goto L_0069ab86;
L_0069ab2b:; BB(0x0069ab2b);
    /* 0069ab2b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069ab2f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069ab33: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069ab35: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069ab37: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069ab3b: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0069ab3f: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
L_0069ab43:; BB(0x0069ab43);
    /* 0069ab43: mov esi, dword ptr [eax + edi] */ r_esi = R32((u32)(r_eax+r_edi));
    /* 0069ab46: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069ab48: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ab4a: jle 0x69ab78 */ if ((fZ||fS!=fO)) goto L_0069ab78;
L_0069ab4c:; BB(0x0069ab4c);
    /* 0069ab4c: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 0069ab53: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ab55: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069ab57: mov ebx, ebp */ r_ebx = r_ebp;
L_0069ab59:; BB(0x0069ab59);
    /* 0069ab59: fld dword ptr [esi + ecx] */ FPUSH(R_F32((u32)(r_esi+r_ecx)));
    /* 0069ab5c: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 0069ab5e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ab61: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ab63: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0069ab64: fadd dword ptr [ecx - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffffcu));
    /* 0069ab67: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 0069ab6a: jne 0x69ab59 */ if (!fZ) goto L_0069ab59;
L_0069ab6c:; BB(0x0069ab6c);
    /* 0069ab6c: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0069ab70: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069ab74: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_0069ab78:; BB(0x0069ab78);
    /* 0069ab78: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069ab7c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069ab7f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0069ab80: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0069ab84: jne 0x69ab43 */ if (!fZ) goto L_0069ab43;
L_0069ab86:; BB(0x0069ab86);
    /* 0069ab86: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0069ab8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ab8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ab8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ab8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ab8e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ab91: ret  */ FN_RET(0x0069aa50); r_esp += 4; return;
L_0069ab92:; BB(0x0069ab92);
    /* 0069ab92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ab93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ab94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ab95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ab97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ab98: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ab9b: ret  */ FN_RET(0x0069aa50); r_esp += 4; return;
}

void f_0069aba0(void) /* sub_69ABA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069aba0);
    /* 0069aba0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069aba3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069aba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069aba5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aba6: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0069abaa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069abab: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0069abae: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 0069abb0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069abb2: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0069abb5: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0069abb7: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0069abba: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069abbc: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0069abc0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069abc1: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0069abc1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069abc1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069abc3: mov edi, eax */ r_edi = r_eax;
    /* 0069abc5: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069abc9: lea eax, [edi + ecx - 1] */ r_eax = (u32)(r_edi+r_ecx+0xffffffffu);
    /* 0069abcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069abce: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0069abce, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069abce, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069abd0: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069abd4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069abd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069abd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069abd9: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69abdeu); f_00690e40();
    /* 0069abde: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0069abe2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069abe6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069abe9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069abeb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069abed: jle 0x69abfe */ if ((fZ||fS!=fO)) goto L_0069abfe;
L_0069abef:; BB(0x0069abef);
    /* 0069abef: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
L_0069abf3:; BB(0x0069abf3);
    /* 0069abf3: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069abf7: jne 0x69abfe */ if (!fZ) goto L_0069abfe;
L_0069abf9:; BB(0x0069abf9);
    /* 0069abf9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069abfa: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069abfc: jl 0x69abf3 */ if ((fS!=fO)) goto L_0069abf3;
L_0069abfe:; BB(0x0069abfe);
    /* 0069abfe: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ac00: je 0x69ad29 */ if (fZ) goto L_0069ad29;
L_0069ac06:; BB(0x0069ac06);
    /* 0069ac06: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069ac09: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069ac11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ac13: jle 0x69ad29 */ if ((fZ||fS!=fO)) goto L_0069ad29;
L_0069ac19:; BB(0x0069ac19);
    /* 0069ac19: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ac1b: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0069ac23: jle 0x69ad15 */ if ((fZ||fS!=fO)) goto L_0069ad15;
L_0069ac29:; BB(0x0069ac29);
    /* 0069ac29: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069ac2d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_0069ac31:; BB(0x0069ac31);
    /* 0069ac31: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069ac35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ac37: jne 0x69ac6a */ if (!fZ) goto L_0069ac6a;
L_0069ac39:; BB(0x0069ac39);
    /* 0069ac39: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069ac3d: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 0069ac40: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069ac43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ac44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ac45: call 0x695220 */ r_esp -= 4; W32(r_esp, 0x69ac4au); f_00695220();
    /* 0069ac4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ac4d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ac50: je 0x69ad29 */ if (fZ) goto L_0069ad29;
L_0069ac56:; BB(0x0069ac56);
    /* 0069ac56: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0069ac59: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069ac5d: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0069ac60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ac62: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0069ac64: je 0x69ad29 */ if (fZ) goto L_0069ad29;
L_0069ac6a:; BB(0x0069ac6a);
    /* 0069ac6a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0069ac6e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069ac70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ac72: jle 0x69acf8 */ if ((fZ||fS!=fO)) goto L_0069acf8;
L_0069ac78:; BB(0x0069ac78);
    /* 0069ac78: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0069ac7c: imul esi, ebp */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ebp; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
L_0069ac7f:; BB(0x0069ac7f);
    /* 0069ac7f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069ac83: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0069ac87: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069ac89: jge 0x69acf4 */ if ((fS==fO)) goto L_0069acf4;
L_0069ac8b:; BB(0x0069ac8b);
    /* 0069ac8b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069ac8f: mov edx, 1 */ r_edx = 0x1u;
    /* 0069ac94: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069ac96: mov eax, dword ptr [ecx + edi*4] */ r_eax = R32((u32)(r_ecx+r_edi*4));
    /* 0069ac99: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069ac9d: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069ac9f: test dword ptr [ebx + eax*4 + 0x14], edx */ {  u32 a = R32((u32)(r_ebx+r_eax*4+0x14u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069aca3: je 0x69ace0 */ if (fZ) goto L_0069ace0;
L_0069aca5:; BB(0x0069aca5);
    /* 0069aca5: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069aca9: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0069acac: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069acb0: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0069acb3: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0069acb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069acb8: je 0x69ace0 */ if (fZ) goto L_0069ace0;
L_0069acba:; BB(0x0069acba);
    /* 0069acba: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0069acbe: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0069acc2: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069acc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069acc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069acc7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0069acc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069acca: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0069acce: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069acd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069acd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069acd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069acd3: call 0x695b70 */ r_esp -= 4; W32(r_esp, 0x69acd8u); f_00695b70();
    /* 0069acd8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069acdb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069acde: je 0x69ad29 */ if (fZ) goto L_0069ad29;
L_0069ace0:; BB(0x0069ace0);
    /* 0069ace0: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0069ace4: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0069ace8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069ace9: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069acea: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069acec: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069acee: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0069acf2: jl 0x69ac7f */ if ((fS!=fO)) goto L_0069ac7f;
L_0069acf4:; BB(0x0069acf4);
    /* 0069acf4: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
L_0069acf8:; BB(0x0069acf8);
    /* 0069acf8: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069acfc: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069ad00: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0069ad04: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ad07: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ad09: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0069ad0d: jl 0x69ac31 */ if ((fS!=fO)) goto L_0069ac31;
L_0069ad13:; BB(0x0069ad13);
    /* 0069ad13: mov edi, edx */ r_edi = r_edx;
L_0069ad15:; BB(0x0069ad15);
    /* 0069ad15: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069ad19: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0069ad1c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069ad1d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ad1f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069ad23: jl 0x69ac19 */ if ((fS!=fO)) goto L_0069ac19;
L_0069ad29:; BB(0x0069ad29);
    /* 0069ad29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ad2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ad2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ad2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ad2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ad2f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ad32: ret  */ FN_RET(0x0069aba0); r_esp += 4; return;
}

void f_0069ad40(void) /* sub_69AD40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069ad40);
    /* 0069ad40: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069ad44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ad46: je 0x69ad5e */ if (fZ) goto L_0069ad5e;
L_0069ad48:; BB(0x0069ad48);
    /* 0069ad48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad49: mov ecx, 0x118 */ r_ecx = 0x118u;
    /* 0069ad4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ad50: mov edi, edx */ r_edi = r_edx;
    /* 0069ad52: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069ad54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ad55: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069ad59: jmp 0x687300 */ f_00687300(); return;
L_0069ad5e:; BB(0x0069ad5e);
    /* 0069ad5e: ret  */ FN_RET(0x0069ad40); r_esp += 4; return;
}

void f_0069ad60(void) /* sub_69AD60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069ad60);
    /* 0069ad60: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069ad64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ad66: je 0x69ad7e */ if (fZ) goto L_0069ad7e;
L_0069ad68:; BB(0x0069ad68);
    /* 0069ad68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad69: mov ecx, 0x148 */ r_ecx = 0x148u;
    /* 0069ad6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ad70: mov edi, edx */ r_edi = r_edx;
    /* 0069ad72: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069ad74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ad75: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069ad79: jmp 0x687300 */ f_00687300(); return;
L_0069ad7e:; BB(0x0069ad7e);
    /* 0069ad7e: ret  */ FN_RET(0x0069ad60); r_esp += 4; return;
}

void f_0069ad80(void) /* sub_69AD80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069ad80);
    /* 0069ad80: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ad83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad85: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0069ad89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad8b: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0069ad8f: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0069ad92: mov eax, dword ptr [ebp + 0x348] */ r_eax = R32((u32)(r_ebp+0x348u));
    /* 0069ad98: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad9a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ad9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad9d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ad9e: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0069ada2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069ada6: or esi, 0xffffffff */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0069ada9: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69adaeu); f_0069d210();
    /* 0069adae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0069adb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069adb4: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069adb6: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0069adba: jle 0x69ade8 */ if ((fZ||fS!=fO)) goto L_0069ade8;
L_0069adbc:; BB(0x0069adbc);
    /* 0069adbc: lea ebx, [ebp + 4] */ r_ebx = (u32)(r_ebp+0x4u);
L_0069adbf:; BB(0x0069adbf);
    /* 0069adbf: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0069adc1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069adc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069adc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069adc5: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69adcau); f_0069d210();
    /* 0069adca: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069adcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069adcf: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069add1: jge 0x69add5 */ if ((fS==fO)) goto L_0069add5;
L_0069add3:; BB(0x0069add3);
    /* 0069add3: mov esi, eax */ r_esi = r_eax;
L_0069add5:; BB(0x0069add5);
    /* 0069add5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069add9: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0069addc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069addd: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ade0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ade2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069ade6: jl 0x69adbf */ if ((fS!=fO)) goto L_0069adbf;
L_0069ade8:; BB(0x0069ade8);
    /* 0069ade8: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0069adeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069aded: jle 0x69ae8c */ if ((fZ||fS!=fO)) goto L_0069ae8c;
L_0069adf3:; BB(0x0069adf3);
    /* 0069adf3: lea ecx, [ebp + 0x140] */ r_ecx = (u32)(r_ebp+0x140u);
    /* 0069adf9: lea esi, [ebp + 0xc0] */ r_esi = (u32)(r_ebp+0xc0u);
    /* 0069adff: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069ae03: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0069ae07:; BB(0x0069ae07);
    /* 0069ae07: mov edx, dword ptr [esi - 0x40] */ r_edx = R32((u32)(r_esi+0xffffffc0u));
    /* 0069ae0a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae0c: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069ae0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae0f: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69ae14u); f_0069d210();
    /* 0069ae14: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069ae16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae19: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae1a: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69ae1fu); f_0069d210();
    /* 0069ae1f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069ae21: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ae24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069ae26: je 0x69ae37 */ if (fZ) goto L_0069ae37;
L_0069ae28:; BB(0x0069ae28);
    /* 0069ae28: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0069ae2b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae2e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae2f: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69ae34u); f_0069d210();
    /* 0069ae34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069ae37:; BB(0x0069ae37);
    /* 0069ae37: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069ae39: mov edx, 1 */ r_edx = 0x1u;
    /* 0069ae3e: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069ae40: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ae42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ae44: jle 0x69ae6f */ if ((fZ||fS!=fO)) goto L_0069ae6f;
L_0069ae46:; BB(0x0069ae46);
    /* 0069ae46: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_0069ae4a:; BB(0x0069ae4a);
    /* 0069ae4a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0069ae4d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae4f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069ae50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae51: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae52: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69ae57u); f_0069d210();
    /* 0069ae57: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069ae59: mov edx, 1 */ r_edx = 0x1u;
    /* 0069ae5e: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069ae60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ae63: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ae64: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069ae67: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ae69: jl 0x69ae4a */ if ((fS!=fO)) goto L_0069ae4a;
L_0069ae6b:; BB(0x0069ae6b);
    /* 0069ae6b: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0069ae6f:; BB(0x0069ae6f);
    /* 0069ae6f: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069ae73: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069ae77: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069ae7a: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ae7d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069ae7e: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069ae82: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069ae86: jne 0x69ae07 */ if (!fZ) goto L_0069ae07;
L_0069ae8c:; BB(0x0069ae8c);
    /* 0069ae8c: mov eax, dword ptr [ebp + 0x340] */ r_eax = R32((u32)(r_ebp+0x340u));
    /* 0069ae92: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae94: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069ae95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ae97: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69ae9cu); f_0069d210();
    /* 0069ae9c: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0069aea0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aea3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069aea5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aea6: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x69aeabu); f_00698a00();
    /* 0069aeab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aeae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069aeaf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aeb0: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69aeb5u); f_0069d210();
    /* 0069aeb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069aeb6: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x69aebbu); f_00698a00();
    /* 0069aebb: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0069aebe: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069aec2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069aec4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aec7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069aec9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069aecd: jle 0x69af36 */ if ((fZ||fS!=fO)) goto L_0069af36;
L_0069aecf:; BB(0x0069aecf);
    /* 0069aecf: lea ecx, [ebp + 4] */ r_ecx = (u32)(r_ebp+0x4u);
    /* 0069aed2: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
L_0069aed6:; BB(0x0069aed6);
    /* 0069aed6: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069aeda: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069aede: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0069aee0: add ecx, dword ptr [ebp + edx*4 + 0x80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_edx*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069aee7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069aee9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0069aeed: jge 0x69af1b */ if ((fS==fO)) goto L_0069af1b;
L_0069aeef:; BB(0x0069aeef);
    /* 0069aeef: mov esi, ecx */ r_esi = r_ecx;
    /* 0069aef1: lea ebx, [ebp + eax*4 + 0x34c] */ r_ebx = (u32)(r_ebp+r_eax*4+0x34cu);
    /* 0069aef8: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069aefa: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069aefc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0069af00:; BB(0x0069af00);
    /* 0069af00: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069af04: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069af06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069af07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069af08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069af09: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69af0eu); f_0069d210();
    /* 0069af0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069af11: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069af14: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0069af15: jne 0x69af00 */ if (!fZ) goto L_0069af00;
L_0069af17:; BB(0x0069af17);
    /* 0069af17: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_0069af1b:; BB(0x0069af1b);
    /* 0069af1b: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069af1f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0069af23: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0069af26: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069af27: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069af2a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069af2c: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069af30: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0069af34: jl 0x69aed6 */ if ((fS!=fO)) goto L_0069aed6;
L_0069af36:; BB(0x0069af36);
    /* 0069af36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069af37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069af38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069af39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069af3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069af3d: ret  */ FN_RET(0x0069ad80); r_esp += 4; return;
}

void f_0069af40(void) /* sub_69AF40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069af40);
    /* 0069af40: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069af43: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069af47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069af48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069af49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069af4a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0069af4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069af4e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069af50: push 0x460 */ { u32 v = 0x460u; r_esp -= 4; W32(r_esp, v); }
    /* 0069af55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069af57: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0069af5b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0069af5f: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0069af62: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69af67u); f_0068738e();
    /* 0069af67: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0069af6b: mov ebp, eax */ r_ebp = r_eax;
    /* 0069af6d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069af6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069af70: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0069af74: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69af79u); f_0069d470();
    /* 0069af79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069af7c: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0069af7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069af81: jle 0x69afb4 */ if ((fZ||fS!=fO)) goto L_0069afb4;
L_0069af83:; BB(0x0069af83);
    /* 0069af83: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 0069af86: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
L_0069af8a:; BB(0x0069af8a);
    /* 0069af8a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069af8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069af8d: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69af92u); f_0069d470();
    /* 0069af92: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069af96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069af99: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069af9b: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0069af9d: jge 0x69afa1 */ if ((fS==fO)) goto L_0069afa1;
L_0069af9f:; BB(0x0069af9f);
    /* 0069af9f: mov edi, eax */ r_edi = r_eax;
L_0069afa1:; BB(0x0069afa1);
    /* 0069afa1: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069afa5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0069afa8: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069afa9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069afac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069afae: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069afb2: jl 0x69af8a */ if ((fS!=fO)) goto L_0069af8a;
L_0069afb4:; BB(0x0069afb4);
    /* 0069afb4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069afb5: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0069afbd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069afbf: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0069afc3: jle 0x69b092 */ if ((fZ||fS!=fO)) goto L_0069b092;
L_0069afc9:; BB(0x0069afc9);
    /* 0069afc9: lea edx, [ebp + 0x140] */ r_edx = (u32)(r_ebp+0x140u);
    /* 0069afcf: lea esi, [ebp + 0x100] */ r_esi = (u32)(r_ebp+0x100u);
    /* 0069afd5: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_0069afd9:; BB(0x0069afd9);
    /* 0069afd9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0069afdb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069afdc: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69afe1u); f_0069d470();
    /* 0069afe1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069afe2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0069afe4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069afe5: mov dword ptr [esi - 0x80], eax */ W32((u32)(r_esi+0xffffff80u), r_eax);
    /* 0069afe8: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69afedu); f_0069d470();
    /* 0069afed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069aff0: mov dword ptr [esi - 0x40], eax */ W32((u32)(r_esi+0xffffffc0u), r_eax);
    /* 0069aff3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069aff5: jl 0x69b157 */ if ((fS!=fO)) goto L_0069b157;
L_0069affb:; BB(0x0069affb);
    /* 0069affb: je 0x69b00a */ if (fZ) goto L_0069b00a;
L_0069affd:; BB(0x0069affd);
    /* 0069affd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069afff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b000: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69b005u); f_0069d470();
    /* 0069b005: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b008: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_0069b00a:; BB(0x0069b00a);
    /* 0069b00a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069b00c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b00e: jl 0x69b157 */ if ((fS!=fO)) goto L_0069b157;
L_0069b014:; BB(0x0069b014);
    /* 0069b014: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069b018: cmp eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b01b: jge 0x69b157 */ if ((fS==fO)) goto L_0069b157;
L_0069b021:; BB(0x0069b021);
    /* 0069b021: mov ecx, dword ptr [esi - 0x40] */ r_ecx = R32((u32)(r_esi+0xffffffc0u));
    /* 0069b024: mov edx, 1 */ r_edx = 0x1u;
    /* 0069b029: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069b02b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069b02d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b02f: jle 0x69b06f */ if ((fZ||fS!=fO)) goto L_0069b06f;
L_0069b031:; BB(0x0069b031);
    /* 0069b031: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
L_0069b035:; BB(0x0069b035);
    /* 0069b035: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b037: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b038: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69b03du); f_0069d470();
    /* 0069b03d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b040: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b041: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b044: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0069b046: jl 0x69b153 */ if ((fS!=fO)) goto L_0069b153;
L_0069b04c:; BB(0x0069b04c);
    /* 0069b04c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069b050: cmp eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b053: jge 0x69b153 */ if ((fS==fO)) goto L_0069b153;
L_0069b059:; BB(0x0069b059);
    /* 0069b059: mov ecx, dword ptr [esi - 0x40] */ r_ecx = R32((u32)(r_esi+0xffffffc0u));
    /* 0069b05c: mov edx, 1 */ r_edx = 0x1u;
    /* 0069b061: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069b063: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069b064: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069b067: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b069: jl 0x69b035 */ if ((fS!=fO)) goto L_0069b035;
L_0069b06b:; BB(0x0069b06b);
    /* 0069b06b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_0069b06f:; BB(0x0069b06f);
    /* 0069b06f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069b073: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0069b077: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0069b07b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b07c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b07f: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b082: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b084: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069b088: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0069b08c: jl 0x69afd9 */ if ((fS!=fO)) goto L_0069afd9;
L_0069b092:; BB(0x0069b092);
    /* 0069b092: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b094: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b095: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69b09au); f_0069d470();
    /* 0069b09a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b09b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b09d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b09e: mov dword ptr [ebp + 0x340], eax */ W32((u32)(r_ebp+0x340u), r_eax);
    /* 0069b0a4: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69b0a9u); f_0069d470();
    /* 0069b0a9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069b0ad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0069b0b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b0b3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069b0b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069b0b7: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0069b0bb: jle 0x69b12e */ if ((fZ||fS!=fO)) goto L_0069b12e;
L_0069b0bd:; BB(0x0069b0bd);
    /* 0069b0bd: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 0069b0c0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_0069b0c4:; BB(0x0069b0c4);
    /* 0069b0c4: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069b0c8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069b0cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069b0ce: add eax, dword ptr [ebp + edx*4 + 0x80] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b0d5: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b0d7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069b0db: jge 0x69b113 */ if ((fS==fO)) goto L_0069b113;
L_0069b0dd:; BB(0x0069b0dd);
    /* 0069b0dd: lea esi, [ebp + edi*4 + 0x34c] */ r_esi = (u32)(r_ebp+r_edi*4+0x34cu);
L_0069b0e4:; BB(0x0069b0e4);
    /* 0069b0e4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069b0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b0e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b0ea: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69b0efu); f_0069d470();
    /* 0069b0ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b0f2: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0069b0f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069b0f6: jl 0x69b157 */ if ((fS!=fO)) goto L_0069b157;
L_0069b0f8:; BB(0x0069b0f8);
    /* 0069b0f8: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069b0fc: mov edx, 1 */ r_edx = 0x1u;
    /* 0069b101: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069b103: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b105: jge 0x69b157 */ if ((fS==fO)) goto L_0069b157;
L_0069b107:; BB(0x0069b107);
    /* 0069b107: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069b10b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069b10c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b10f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b111: jl 0x69b0e4 */ if ((fS!=fO)) goto L_0069b0e4;
L_0069b113:; BB(0x0069b113);
    /* 0069b113: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069b117: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0069b11b: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0069b11e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b11f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b122: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069b124: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069b128: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0069b12c: jl 0x69b0c4 */ if ((fS!=fO)) goto L_0069b0c4;
L_0069b12e:; BB(0x0069b12e);
    /* 0069b12e: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069b132: mov eax, 1 */ r_eax = 0x1u;
    /* 0069b137: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069b139: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b13a: mov dword ptr [ebp + 0x344], 0 */ W32((u32)(r_ebp+0x344u), 0x0u);
    /* 0069b144: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b145: mov dword ptr [ebp + 0x348], eax */ W32((u32)(r_ebp+0x348u), r_eax);
    /* 0069b14b: mov eax, ebp */ r_eax = r_ebp;
    /* 0069b14d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b14e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b14f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b152: ret  */ FN_RET(0x0069af40); r_esp += 4; return;
L_0069b153:; BB(0x0069b153);
    /* 0069b153: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_0069b157:; BB(0x0069b157);
    /* 0069b157: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b158: call 0x69ad40 */ r_esp -= 4; W32(r_esp, 0x69b15du); f_0069ad40();
    /* 0069b15d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b160: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b162: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b163: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b164: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b165: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b166: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b169: ret  */ FN_RET(0x0069af40); r_esp += 4; return;
}

