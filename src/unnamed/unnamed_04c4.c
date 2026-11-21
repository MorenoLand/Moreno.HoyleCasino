#include "protos.h"

void f_004c4070(void) /* sub_4C4070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c4070);
    /* 004c4070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4071: mov ebp, esp */ r_ebp = r_esp;
    /* 004c4073: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c4076: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4077: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c407d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4082u); f_0047e3b0();
    /* 004c4082: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c4085: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c408b: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4c4090u); f_0047bce0();
    /* 004c4090: mov esi, eax */ r_esi = r_eax;
    /* 004c4092: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4098: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c409b: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c40a0u); f_004f67d0();
    /* 004c40a0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004c40a2: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 004c40a5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004c40ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c40af: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c40b4u); f_004c6a70();
    /* 004c40b4: mov esi, eax */ r_esi = r_eax;
    /* 004c40b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c40bc: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c40c1u); f_0047bc20();
    /* 004c40c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004c40c3: mov eax, esi */ r_eax = r_esi;
    /* 004c40c5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c40c6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c40c6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c40c6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c40c8: mov dword ptr [0x791e80], eax */ W32((u32)(0x791e80u), r_eax);
    /* 004c40cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c40d3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c40d6: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c40dbu); f_004f67d0();
    /* 004c40db: cmp dword ptr [0x791e80], eax */ {  u32 a = R32((u32)(0x791e80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c40e1: jg 0x4c415a */ if ((!fZ&&fS==fO)) goto L_004c415a;
L_004c40e3:; BB(0x004c40e3);
    /* 004c40e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c40e9: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c40eeu); f_0047bc20();
    /* 004c40ee: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c40f5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c40f8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c40fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c40fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c40ff: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c4104u); f_004c6c10();
    /* 004c4104: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c4107: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c410cu); f_004da300();
    /* 004c410c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c410e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4110: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c4113: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c4118u); f_004dc4d0();
    /* 004c4118: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c411a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c411d: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c4122u); f_004c7030();
    /* 004c4122: mov eax, dword ptr [0x791e80] */ r_eax = R32((u32)(0x791e80u));
    /* 004c4127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4128: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c412e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4131: call 0x4f5e80 */ r_esp -= 4; W32(r_esp, 0x4c4136u); f_004f5e80();
    /* 004c4136: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c4139: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004c413c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c413f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4140: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4146: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c414bu); f_0047ec90();
    /* 004c414b: mov dword ptr [0x791e48], 6 */ W32((u32)(0x791e48u), 0x6u);
    /* 004c4155: jmp 0x4c4284 */ goto L_004c4284;
L_004c415a:; BB(0x004c415a);
    /* 004c415a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4160: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4163: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c4168u); f_004f67d0();
    /* 004c4168: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c416b: cmp dword ptr [0x791e80], eax */ {  u32 a = R32((u32)(0x791e80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4171: jg 0x4c41ff */ if ((!fZ&&fS==fO)) goto L_004c41ff;
L_004c4177:; BB(0x004c4177);
    /* 004c4177: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c417d: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c4182u); f_0047bc20();
    /* 004c4182: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c4189: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c418c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c418f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4190: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c4193: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c4198u); f_004c6c10();
    /* 004c4198: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c419b: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c41a0u); f_004da300();
    /* 004c41a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c41a2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c41a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c41a7: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c41acu); f_004dc4d0();
    /* 004c41ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c41ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c41b1: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c41b6u); f_004c7030();
    /* 004c41b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c41bc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c41bf: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c41c4u); f_004f67d0();
    /* 004c41c4: mov ecx, dword ptr [0x791e80] */ r_ecx = R32((u32)(0x791e80u));
    /* 004c41ca: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c41cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c41cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c41d3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c41d6: call 0x4f6210 */ r_esp -= 4; W32(r_esp, 0x4c41dbu); f_004f6210();
    /* 004c41db: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c41de: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004c41e1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c41e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c41e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c41eb: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c41f0u); f_0047ec90();
    /* 004c41f0: mov dword ptr [0x791e48], 6 */ W32((u32)(0x791e48u), 0x6u);
    /* 004c41fa: jmp 0x4c4284 */ goto L_004c4284;
L_004c41ff:; BB(0x004c41ff);
    /* 004c41ff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4205: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4208: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4c420du); f_004f67d0();
    /* 004c420d: mov esi, eax */ r_esi = r_eax;
    /* 004c420f: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c4212: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4218: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c421du); f_0047bc20();
    /* 004c421d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c4220: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 004c4223: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c4226: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4227: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c422a: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c422fu); f_004c6c10();
    /* 004c422f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c4232: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c4237u); f_004da300();
    /* 004c4237: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c423d: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c4242u); f_0047bc20();
    /* 004c4242: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c4246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4247: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4249: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c424c: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c4251u); f_004dc4d0();
    /* 004c4251: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4253: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c4256: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4257: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c425d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4260: call 0x4f6250 */ r_esp -= 4; W32(r_esp, 0x4c4265u); f_004f6250();
    /* 004c4265: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004c4268: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c426b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c426e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c426f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4275: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c427au); f_0047ec90();
    /* 004c427a: mov dword ptr [0x791e48], 0 */ W32((u32)(0x791e48u), 0x0u);
L_004c4284:; BB(0x004c4284);
    /* 004c4284: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c4287: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4288: mov esp, ebp */ r_esp = r_ebp;
    /* 004c428a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c428b: ret  */ FN_RET(0x004c4070); r_esp += 4; return;
}

