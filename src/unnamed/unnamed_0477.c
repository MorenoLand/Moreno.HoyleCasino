#include "protos.h"

void f_00477320(void) /* sub_477320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00477320);
    /* 00477320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00477321: mov ebp, esp */ r_ebp = r_esp;
    /* 00477323: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00477326: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00477327: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047732d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x477332u); f_0047e3b0();
    /* 00477332: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00477335: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047733c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047733f: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x477344u); f_004c6a70();
    /* 00477344: mov esi, eax */ r_esi = r_eax;
    /* 00477346: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047734c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477351u); f_0047bc20();
    /* 00477351: mov ecx, eax */ r_ecx = r_eax;
    /* 00477353: mov eax, esi */ r_eax = r_esi;
    /* 00477355: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00477356: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00477356, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00477356, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00477358: mov dword ptr [0x79131c], eax */ W32((u32)(0x79131cu), r_eax);
    /* 0047735d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477363: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x477368u); f_0047bc60();
    /* 00477368: imul eax, dword ptr [0x7912f0] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x7912f0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047736f: cmp dword ptr [0x79131c], eax */ {  u32 a = R32((u32)(0x79131cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477375: jg 0x4773e1 */ if ((!fZ&&fS==fO)) goto L_004773e1;
L_00477377:; BB(0x00477377);
    /* 00477377: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047737d: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477382u); f_0047bc20();
    /* 00477382: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477389: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047738c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047738f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477390: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477393: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477398u); f_004c6c10();
    /* 00477398: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047739b: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4773a0u); f_004da300();
    /* 004773a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004773a2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004773a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004773a7: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4773acu); f_004dc4d0();
    /* 004773ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004773ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004773b1: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4773b6u); f_004c7030();
    /* 004773b6: mov eax, dword ptr [0x79131c] */ r_eax = R32((u32)(0x79131cu));
    /* 004773bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004773bc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004773c2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004773c5: call 0x4f53c0 */ r_esp -= 4; W32(r_esp, 0x4773cau); f_004f53c0();
    /* 004773ca: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004773cd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004773d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004773d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004773d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004773da: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4773dfu); f_0047ec90();
    /* 004773df: jmp 0x47743d */ goto L_0047743d;
L_004773e1:; BB(0x004773e1);
    /* 004773e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004773e7: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x4773ecu); f_0047bc60();
    /* 004773ec: mov esi, eax */ r_esi = r_eax;
    /* 004773ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004773f4: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4773f9u); f_0047bc20();
    /* 004773f9: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004773fc: imul esi, dword ptr [0x7912f0] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(0x7912f0u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477403: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00477406: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047740a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047740d: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477412u); f_004c6c10();
    /* 00477412: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477415: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x47741au); f_004da300();
    /* 0047741a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477420: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477423: call 0x4f52a0 */ r_esp -= 4; W32(r_esp, 0x477428u); f_004f52a0();
    /* 00477428: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0047742b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0047742e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477431: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477432: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477438: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x47743du); f_0047ec90();
L_0047743d:; BB(0x0047743d);
    /* 0047743d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477440: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00477441: mov esp, ebp */ r_esp = r_ebp;
    /* 00477443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00477444: ret  */ FN_RET(0x00477320); r_esp += 4; return;
}

void f_00477450(void) /* sub_477450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00477450);
    /* 00477450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00477451: mov ebp, esp */ r_ebp = r_esp;
    /* 00477453: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00477456: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00477457: mov dword ptr [ebp - 0xc], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff4u), 0xffffff9du);
    /* 0047745e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477464: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x477469u); f_0047e3b0();
    /* 00477469: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047746c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00477473: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477476: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x47747bu); f_004c6a70();
    /* 0047747b: mov esi, eax */ r_esi = r_eax;
    /* 0047747d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477483: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477488u); f_0047bc20();
    /* 00477488: mov ecx, eax */ r_ecx = r_eax;
    /* 0047748a: mov eax, esi */ r_eax = r_esi;
    /* 0047748c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047748d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047748d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047748d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047748f: mov dword ptr [0x79131c], eax */ W32((u32)(0x79131cu), r_eax);
    /* 00477494: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047749a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047749d: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4774a2u); f_004f67d0();
    /* 004774a2: cmp dword ptr [0x79131c], eax */ {  u32 a = R32((u32)(0x79131cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004774a8: jg 0x477527 */ if ((!fZ&&fS==fO)) goto L_00477527;
L_004774aa:; BB(0x004774aa);
    /* 004774aa: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004774ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004774b0: jne 0x47751b */ if (!fZ) goto L_0047751b;
L_004774b2:; BB(0x004774b2);
    /* 004774b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004774b8: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4774bdu); f_0047bc20();
    /* 004774bd: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004774c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004774c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004774ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004774cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004774ce: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4774d3u); f_004c6c10();
    /* 004774d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004774d6: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4774dbu); f_004da300();
    /* 004774db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004774dd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004774df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004774e2: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4774e7u); f_004dc4d0();
    /* 004774e7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004774e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004774ec: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4774f1u); f_004c7030();
    /* 004774f1: mov ecx, dword ptr [0x79131c] */ r_ecx = R32((u32)(0x79131cu));
    /* 004774f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004774f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004774fe: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477501: call 0x4f5e80 */ r_esp -= 4; W32(r_esp, 0x477506u); f_004f5e80();
    /* 00477506: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00477509: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0047750c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047750f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477510: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477516: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x47751bu); f_0047ec90();
L_0047751b:; BB(0x0047751b);
    /* 0047751b: mov dword ptr [0x791300], 7 */ W32((u32)(0x791300u), 0x7u);
    /* 00477525: jmp 0x47759d */ goto L_0047759d;
L_00477527:; BB(0x00477527);
    /* 00477527: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0047752b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047752d: jne 0x477593 */ if (!fZ) goto L_00477593;
L_0047752f:; BB(0x0047752f);
    /* 0047752f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477535: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477538: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x47753du); f_004f67d0();
    /* 0047753d: mov esi, eax */ r_esi = r_eax;
    /* 0047753f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477545: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x47754au); f_0047bc20();
    /* 0047754a: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047754d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00477550: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477554: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477557: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x47755cu); f_004c6c10();
    /* 0047755c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047755f: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477564u); f_004da300();
    /* 00477564: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00477566: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00477568: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047756b: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477570u); f_004dc4d0();
    /* 00477570: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477576: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477579: call 0x4f5cd0 */ r_esp -= 4; W32(r_esp, 0x47757eu); f_004f5cd0();
    /* 0047757e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00477581: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00477584: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477587: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477588: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047758e: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477593u); f_0047ec90();
L_00477593:; BB(0x00477593);
    /* 00477593: mov dword ptr [0x791300], 3 */ W32((u32)(0x791300u), 0x3u);
L_0047759d:; BB(0x0047759d);
    /* 0047759d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004775a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004775a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004775a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004775a4: ret  */ FN_RET(0x00477450); r_esp += 4; return;
}

void f_004775b0(void) /* sub_4775B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004775b0);
    /* 004775b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004775b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004775b3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004775b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004775b7: mov dword ptr [ebp - 0x10], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff0u), 0xffffff9du);
    /* 004775be: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004775c4: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4775c9u); f_0047e3b0();
    /* 004775c9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004775cc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004775d3: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004775d8: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 004775df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004775e1: je 0x47763a */ if (fZ) goto L_0047763a;
L_004775e3:; BB(0x004775e3);
    /* 004775e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004775e9: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x4775eeu); f_004798c0();
    /* 004775ee: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004775f1: jne 0x47763a */ if (!fZ) goto L_0047763a;
L_004775f3:; BB(0x004775f3);
    /* 004775f3: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004775f9: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004775ff: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00477605: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0047760b: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00477611: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 00477617: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00477619: mov ecx, edx */ r_ecx = r_edx;
    /* 0047761b: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00477621: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x477623u); call_ind(t); }
    /* 00477623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477624: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x477629u); f_0064cab0();
    /* 00477629: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047762c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047762f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00477632: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00477635: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00477638: jmp 0x477671 */ goto L_00477671;
L_0047763a:; BB(0x0047763a);
    /* 0047763a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047763e: jle 0x477648 */ if ((fZ||fS!=fO)) goto L_00477648;
L_00477640:; BB(0x00477640);
    /* 00477640: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00477643: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00477646: jmp 0x477671 */ goto L_00477671;
L_00477648:; BB(0x00477648);
    /* 00477648: movzx edx, byte ptr [0x7912e9] */ r_edx = (u32)R8((u32)(0x7912e9u));
    /* 0047764f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477651: je 0x477663 */ if (fZ) goto L_00477663;
L_00477653:; BB(0x00477653);
    /* 00477653: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477659: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x47765eu); f_0047bd20();
    /* 0047765e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00477661: jmp 0x477671 */ goto L_00477671;
L_00477663:; BB(0x00477663);
    /* 00477663: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477669: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x47766eu); f_0047bce0();
    /* 0047766e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00477671:; BB(0x00477671);
    /* 00477671: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00477676: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477679: cmp ecx, dword ptr [eax + 0x410] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047767f: jge 0x477692 */ if ((fS==fO)) goto L_00477692;
L_00477681:; BB(0x00477681);
    /* 00477681: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00477687: mov eax, dword ptr [edx + 0x410] */ r_eax = R32((u32)(r_edx+0x410u));
    /* 0047768d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00477690: jmp 0x4776b1 */ goto L_004776b1;
L_00477692:; BB(0x00477692);
    /* 00477692: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477698: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047769b: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004776a1: jle 0x4776b1 */ if ((fZ||fS!=fO)) goto L_004776b1;
L_004776a3:; BB(0x004776a3);
    /* 004776a3: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004776a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004776ab: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
L_004776b1:; BB(0x004776b1);
    /* 004776b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004776b4: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4776b9u); f_004c6a70();
    /* 004776b9: mov esi, eax */ r_esi = r_eax;
    /* 004776bb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004776c1: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4776c6u); f_0047bc20();
    /* 004776c6: mov ecx, eax */ r_ecx = r_eax;
    /* 004776c8: mov eax, esi */ r_eax = r_esi;
    /* 004776ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004776cb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004776cb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004776cb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004776cd: mov dword ptr [0x79131c], eax */ W32((u32)(0x79131cu), r_eax);
    /* 004776d2: mov edx, dword ptr [0x79131c] */ r_edx = R32((u32)(0x79131cu));
    /* 004776d8: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004776db: jg 0x477761 */ if ((!fZ&&fS==fO)) goto L_00477761;
L_004776e1:; BB(0x004776e1);
    /* 004776e1: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004776e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004776e7: jne 0x477752 */ if (!fZ) goto L_00477752;
L_004776e9:; BB(0x004776e9);
    /* 004776e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004776ef: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4776f4u); f_0047bc20();
    /* 004776f4: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004776fb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004776fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477701: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477702: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477705: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x47770au); f_004c6c10();
    /* 0047770a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047770d: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477712u); f_004da300();
    /* 00477712: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00477714: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00477716: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477719: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x47771eu); f_004dc4d0();
    /* 0047771e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00477720: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477723: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x477728u); f_004c7030();
    /* 00477728: mov edx, dword ptr [0x79131c] */ r_edx = R32((u32)(0x79131cu));
    /* 0047772e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047772f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477735: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477738: call 0x4f5a80 */ r_esp -= 4; W32(r_esp, 0x47773du); f_004f5a80();
    /* 0047773d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00477740: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00477743: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477746: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477747: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047774d: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477752u); f_0047ec90();
L_00477752:; BB(0x00477752);
    /* 00477752: mov dword ptr [0x791300], 7 */ W32((u32)(0x791300u), 0x7u);
    /* 0047775c: jmp 0x47782a */ goto L_0047782a;
L_00477761:; BB(0x00477761);
    /* 00477761: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00477765: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477767: jne 0x4777f2 */ if (!fZ) goto L_004777f2;
L_0047776d:; BB(0x0047776d);
    /* 0047776d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477773: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477778u); f_0047bc20();
    /* 00477778: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047777c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047777f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477783: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477786: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x47778bu); f_004c6c10();
    /* 0047778b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047778e: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477793u); f_004da300();
    /* 00477793: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 0047779a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047779c: jne 0x4777bd */ if (!fZ) goto L_004777bd;
L_0047779e:; BB(0x0047779e);
    /* 0047779e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004777a4: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4777a9u); f_0047d6b0();
    /* 004777a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004777ab: jne 0x4777bd */ if (!fZ) goto L_004777bd;
L_004777ad:; BB(0x004777ad);
    /* 004777ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004777b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004777b1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004777b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004777b6: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4777bbu); f_004dc4d0();
    /* 004777bb: jmp 0x4777cb */ goto L_004777cb;
L_004777bd:; BB(0x004777bd);
    /* 004777bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004777c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004777c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004777c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004777c6: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4777cbu); f_004dc4d0();
L_004777cb:; BB(0x004777cb);
    /* 004777cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004777ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004777cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004777d5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004777d8: call 0x4f58c0 */ r_esp -= 4; W32(r_esp, 0x4777ddu); f_004f58c0();
    /* 004777dd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004777e0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004777e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004777e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004777e7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004777ed: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4777f2u); f_0047ec90();
L_004777f2:; BB(0x004777f2);
    /* 004777f2: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 004777f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004777fb: jne 0x477820 */ if (!fZ) goto L_00477820;
L_004777fd:; BB(0x004777fd);
    /* 004777fd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477803: call 0x47d7b0 */ r_esp -= 4; W32(r_esp, 0x477808u); f_0047d7b0();
    /* 00477808: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047780b: jne 0x477820 */ if (!fZ) goto L_00477820;
L_0047780d:; BB(0x0047780d);
    /* 0047780d: mov dword ptr [0x791300], 5 */ W32((u32)(0x791300u), 0x5u);
    /* 00477817: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047781a: mov byte ptr [edx + 0x1d], 1 */ W8((u32)(r_edx+0x1du), 0x1u);
    /* 0047781e: jmp 0x47782a */ goto L_0047782a;
L_00477820:; BB(0x00477820);
    /* 00477820: mov dword ptr [0x791300], 4 */ W32((u32)(0x791300u), 0x4u);
L_0047782a:; BB(0x0047782a);
    /* 0047782a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047782d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0047782e: mov esp, ebp */ r_esp = r_ebp;
    /* 00477830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00477831: ret  */ FN_RET(0x004775b0); r_esp += 4; return;
}

void f_00477840(void) /* sub_477840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00477840);
    /* 00477840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00477841: mov ebp, esp */ r_ebp = r_esp;
    /* 00477843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00477846: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00477847: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 0047784e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477850: je 0x477862 */ if (fZ) goto L_00477862;
L_00477852:; BB(0x00477852);
    /* 00477852: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477858: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x47785du); f_0047bd20();
    /* 0047785d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00477860: jmp 0x477870 */ goto L_00477870;
L_00477862:; BB(0x00477862);
    /* 00477862: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477868: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x47786du); f_0047bce0();
    /* 0047786d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00477870:; BB(0x00477870);
    /* 00477870: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477876: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47787bu); f_0047e3b0();
    /* 0047787b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047787d: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x477882u); f_004c6a70();
    /* 00477882: mov esi, eax */ r_esi = r_eax;
    /* 00477884: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047788a: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x47788fu); f_0047bc20();
    /* 0047788f: mov ecx, eax */ r_ecx = r_eax;
    /* 00477891: mov eax, esi */ r_eax = r_esi;
    /* 00477893: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00477894: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00477894, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00477894, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00477896: mov dword ptr [0x79131c], eax */ W32((u32)(0x79131cu), r_eax);
    /* 0047789b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004778a1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004778a4: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4778a9u); f_004f67d0();
    /* 004778a9: mov edx, dword ptr [0x79131c] */ r_edx = R32((u32)(0x79131cu));
    /* 004778af: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004778b1: mov dword ptr [0x79131c], edx */ W32((u32)(0x79131cu), r_edx);
    /* 004778b7: mov eax, dword ptr [0x79131c] */ r_eax = R32((u32)(0x79131cu));
    /* 004778bc: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004778bf: jg 0x4778e5 */ if ((!fZ&&fS==fO)) goto L_004778e5;
L_004778c1:; BB(0x004778c1);
    /* 004778c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004778c7: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4778ccu); f_0047bc20();
    /* 004778cc: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004778d3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004778d6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004778da: jge 0x4778e3 */ if ((fS==fO)) goto L_004778e3;
L_004778dc:; BB(0x004778dc);
    /* 004778dc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004778e3:; BB(0x004778e3);
    /* 004778e3: jmp 0x4778f7 */ goto L_004778f7;
L_004778e5:; BB(0x004778e5);
    /* 004778e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004778eb: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4778f0u); f_0047bc20();
    /* 004778f0: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004778f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004778f7:; BB(0x004778f7);
    /* 004778f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004778fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004778fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004778fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004778fe: ret  */ FN_RET(0x00477840); r_esp += 4; return;
}

void f_00477900(void) /* sub_477900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00477900);
    /* 00477900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00477901: mov ebp, esp */ r_ebp = r_esp;
    /* 00477903: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00477906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00477907: mov dword ptr [ebp - 0xc], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff4u), 0xffffff9du);
    /* 0047790e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477914: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x477919u); f_0047e3b0();
    /* 00477919: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047791c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00477923: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00477928: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 0047792f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477931: je 0x47798a */ if (fZ) goto L_0047798a;
L_00477933:; BB(0x00477933);
    /* 00477933: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477939: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x47793eu); f_004798c0();
    /* 0047793e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477941: jne 0x47798a */ if (!fZ) goto L_0047798a;
L_00477943:; BB(0x00477943);
    /* 00477943: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00477949: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0047794f: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00477955: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0047795b: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00477961: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 00477967: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00477969: mov ecx, edx */ r_ecx = r_edx;
    /* 0047796b: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00477971: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x477973u); call_ind(t); }
    /* 00477973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477974: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x477979u); f_0064cab0();
    /* 00477979: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047797c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047797f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00477982: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00477985: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00477988: jmp 0x4779c1 */ goto L_004779c1;
L_0047798a:; BB(0x0047798a);
    /* 0047798a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047798e: jle 0x477998 */ if ((fZ||fS!=fO)) goto L_00477998;
L_00477990:; BB(0x00477990);
    /* 00477990: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00477993: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00477996: jmp 0x4779c1 */ goto L_004779c1;
L_00477998:; BB(0x00477998);
    /* 00477998: movzx edx, byte ptr [0x7912e9] */ r_edx = (u32)R8((u32)(0x7912e9u));
    /* 0047799f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004779a1: je 0x4779b3 */ if (fZ) goto L_004779b3;
L_004779a3:; BB(0x004779a3);
    /* 004779a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004779a9: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x4779aeu); f_0047bd20();
    /* 004779ae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004779b1: jmp 0x4779c1 */ goto L_004779c1;
L_004779b3:; BB(0x004779b3);
    /* 004779b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004779b9: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4779beu); f_0047bce0();
    /* 004779be: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004779c1:; BB(0x004779c1);
    /* 004779c1: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004779c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004779c9: cmp ecx, dword ptr [eax + 0x410] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004779cf: jge 0x4779e2 */ if ((fS==fO)) goto L_004779e2;
L_004779d1:; BB(0x004779d1);
    /* 004779d1: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004779d7: mov eax, dword ptr [edx + 0x410] */ r_eax = R32((u32)(r_edx+0x410u));
    /* 004779dd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004779e0: jmp 0x477a01 */ goto L_00477a01;
L_004779e2:; BB(0x004779e2);
    /* 004779e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004779e8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004779eb: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004779f1: jle 0x477a01 */ if ((fZ||fS!=fO)) goto L_00477a01;
L_004779f3:; BB(0x004779f3);
    /* 004779f3: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004779f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004779fb: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
L_00477a01:; BB(0x00477a01);
    /* 00477a01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477a04: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x477a09u); f_004c6a70();
    /* 00477a09: mov esi, eax */ r_esi = r_eax;
    /* 00477a0b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477a11: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477a16u); f_0047bc20();
    /* 00477a16: mov ecx, eax */ r_ecx = r_eax;
    /* 00477a18: mov eax, esi */ r_eax = r_esi;
    /* 00477a1a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00477a1b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00477a1b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00477a1b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00477a1d: mov dword ptr [0x79131c], eax */ W32((u32)(0x79131cu), r_eax);
    /* 00477a22: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477a28: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477a2b: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477a30u); f_004f67d0();
    /* 00477a30: cmp dword ptr [0x79131c], eax */ {  u32 a = R32((u32)(0x79131cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477a36: jg 0x477a4e */ if ((!fZ&&fS==fO)) goto L_00477a4e;
L_00477a38:; BB(0x00477a38);
    /* 00477a38: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00477a3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477a3c: call 0x477450 */ r_esp -= 4; W32(r_esp, 0x477a41u); f_00477450();
    /* 00477a41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00477a44: jmp 0x477bc5 */ goto L_00477bc5;
L_00477a4e:; BB(0x00477a4e);
    /* 00477a4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477a54: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477a57: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477a5cu); f_004f67d0();
    /* 00477a5c: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00477a5f: cmp dword ptr [0x79131c], eax */ {  u32 a = R32((u32)(0x79131cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477a65: jg 0x477b37 */ if ((!fZ&&fS==fO)) goto L_00477b37;
L_00477a6b:; BB(0x00477a6b);
    /* 00477a6b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477a6f: jle 0x477aa7 */ if ((fZ||fS!=fO)) goto L_00477aa7;
L_00477a71:; BB(0x00477a71);
    /* 00477a71: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477a77: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477a7a: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477a7fu); f_004f67d0();
    /* 00477a7f: mov esi, dword ptr [0x79131c] */ r_esi = R32((u32)(0x79131cu));
    /* 00477a85: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00477a87: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477a8d: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x477a92u); f_0047bd60();
    /* 00477a92: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477a94: jge 0x477aa7 */ if ((fS==fO)) goto L_00477aa7;
L_00477a96:; BB(0x00477a96);
    /* 00477a96: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00477a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477a9a: call 0x477450 */ r_esp -= 4; W32(r_esp, 0x477a9fu); f_00477450();
    /* 00477a9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00477aa2: jmp 0x477bc5 */ goto L_00477bc5;
L_00477aa7:; BB(0x00477aa7);
    /* 00477aa7: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00477aab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477aad: jne 0x477b28 */ if (!fZ) goto L_00477b28;
L_00477aaf:; BB(0x00477aaf);
    /* 00477aaf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477ab5: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477abau); f_0047bc20();
    /* 00477aba: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477ac1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00477ac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477ac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477ac8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477acb: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477ad0u); f_004c6c10();
    /* 00477ad0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477ad3: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477ad8u); f_004da300();
    /* 00477ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00477ada: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00477adc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477adf: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477ae4u); f_004dc4d0();
    /* 00477ae4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00477ae6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477ae9: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x477aeeu); f_004c7030();
    /* 00477aee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477af4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477af7: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477afcu); f_004f67d0();
    /* 00477afc: mov ecx, dword ptr [0x79131c] */ r_ecx = R32((u32)(0x79131cu));
    /* 00477b02: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00477b04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477b05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477b0b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477b0e: call 0x4f6210 */ r_esp -= 4; W32(r_esp, 0x477b13u); f_004f6210();
    /* 00477b13: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00477b16: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00477b19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477b1d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477b23: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477b28u); f_0047ec90();
L_00477b28:; BB(0x00477b28);
    /* 00477b28: mov dword ptr [0x791300], 7 */ W32((u32)(0x791300u), 0x7u);
    /* 00477b32: jmp 0x477bc2 */ goto L_00477bc2;
L_00477b37:; BB(0x00477b37);
    /* 00477b37: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00477b3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477b3d: jne 0x477bb8 */ if (!fZ) goto L_00477bb8;
L_00477b3f:; BB(0x00477b3f);
    /* 00477b3f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477b45: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477b48: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477b4du); f_004f67d0();
    /* 00477b4d: mov esi, eax */ r_esi = r_eax;
    /* 00477b4f: add esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00477b52: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477b58: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477b5du); f_0047bc20();
    /* 00477b5d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477b60: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00477b63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477b66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477b67: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477b6a: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477b6fu); f_004c6c10();
    /* 00477b6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477b72: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477b77u); f_004da300();
    /* 00477b77: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477b7d: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477b82u); f_0047bc20();
    /* 00477b82: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477b86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477b87: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00477b89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477b8c: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477b91u); f_004dc4d0();
    /* 00477b91: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00477b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477b95: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477b9b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477b9e: call 0x4f6020 */ r_esp -= 4; W32(r_esp, 0x477ba3u); f_004f6020();
    /* 00477ba3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00477ba6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00477ba9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477bac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477bad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477bb3: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477bb8u); f_0047ec90();
L_00477bb8:; BB(0x00477bb8);
    /* 00477bb8: mov dword ptr [0x791300], 6 */ W32((u32)(0x791300u), 0x6u);
L_00477bc2:; BB(0x00477bc2);
    /* 00477bc2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_00477bc5:; BB(0x00477bc5);
    /* 00477bc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00477bc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00477bc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00477bc9: ret  */ FN_RET(0x00477900); r_esp += 4; return;
}

void f_00477bd0(void) /* sub_477BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00477bd0);
    /* 00477bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00477bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00477bd3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00477bd6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00477bd7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477bdd: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x477be2u); f_0047e3b0();
    /* 00477be2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00477be5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00477bec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477bef: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x477bf4u); f_004c6a70();
    /* 00477bf4: mov esi, eax */ r_esi = r_eax;
    /* 00477bf6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477bfc: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477c01u); f_0047bc20();
    /* 00477c01: mov ecx, eax */ r_ecx = r_eax;
    /* 00477c03: mov eax, esi */ r_eax = r_esi;
    /* 00477c05: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00477c06: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00477c06, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00477c06, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00477c08: mov dword ptr [0x79131c], eax */ W32((u32)(0x79131cu), r_eax);
    /* 00477c0d: mov edx, dword ptr [0x79131c] */ r_edx = R32((u32)(0x79131cu));
    /* 00477c13: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477c16: jg 0x477c8d */ if ((!fZ&&fS==fO)) goto L_00477c8d;
L_00477c18:; BB(0x00477c18);
    /* 00477c18: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477c1e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477c23u); f_0047bc20();
    /* 00477c23: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477c2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00477c2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477c31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477c34: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477c39u); f_004c6c10();
    /* 00477c39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477c3c: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477c41u); f_004da300();
    /* 00477c41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00477c43: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00477c45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477c48: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477c4du); f_004dc4d0();
    /* 00477c4d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00477c4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477c52: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x477c57u); f_004c7030();
    /* 00477c57: mov ecx, dword ptr [0x79131c] */ r_ecx = R32((u32)(0x79131cu));
    /* 00477c5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477c5e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477c64: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477c67: call 0x4f5a80 */ r_esp -= 4; W32(r_esp, 0x477c6cu); f_004f5a80();
    /* 00477c6c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00477c6f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00477c72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477c75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477c76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477c7c: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477c81u); f_0047ec90();
    /* 00477c81: mov dword ptr [0x791300], 7 */ W32((u32)(0x791300u), 0x7u);
    /* 00477c8b: jmp 0x477cf4 */ goto L_00477cf4;
L_00477c8d:; BB(0x00477c8d);
    /* 00477c8d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477c93: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477c98u); f_0047bc20();
    /* 00477c98: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477c9c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00477c9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477ca2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477ca3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477ca6: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477cabu); f_004c6c10();
    /* 00477cab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477cae: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477cb3u); f_004da300();
    /* 00477cb3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477cb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477cb7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00477cb9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477cbc: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477cc1u); f_004dc4d0();
    /* 00477cc1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00477cc3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00477cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477cc7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477ccd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477cd0: call 0x4f5c40 */ r_esp -= 4; W32(r_esp, 0x477cd5u); f_004f5c40();
    /* 00477cd5: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00477cd8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00477cdb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477cde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477cdf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477ce5: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477ceau); f_0047ec90();
    /* 00477cea: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_00477cf4:; BB(0x00477cf4);
    /* 00477cf4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477cf7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00477cf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00477cfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00477cfb: ret  */ FN_RET(0x00477bd0); r_esp += 4; return;
}

void f_00477d00(void) /* sub_477D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00477d00);
    /* 00477d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00477d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00477d03: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00477d06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00477d07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477d0d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x477d12u); f_0047e3b0();
    /* 00477d12: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00477d15: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477d1b: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x477d20u); f_0047bce0();
    /* 00477d20: mov esi, eax */ r_esi = r_eax;
    /* 00477d22: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477d28: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477d2b: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477d30u); f_004f67d0();
    /* 00477d30: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00477d32: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00477d35: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00477d3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477d3f: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x477d44u); f_004c6a70();
    /* 00477d44: mov esi, eax */ r_esi = r_eax;
    /* 00477d46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477d4c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477d51u); f_0047bc20();
    /* 00477d51: mov ecx, eax */ r_ecx = r_eax;
    /* 00477d53: mov eax, esi */ r_eax = r_esi;
    /* 00477d55: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00477d56: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00477d56, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00477d56, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00477d58: mov dword ptr [0x79131c], eax */ W32((u32)(0x79131cu), r_eax);
    /* 00477d5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477d63: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477d66: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477d6bu); f_004f67d0();
    /* 00477d6b: cmp dword ptr [0x79131c], eax */ {  u32 a = R32((u32)(0x79131cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477d71: jg 0x477dea */ if ((!fZ&&fS==fO)) goto L_00477dea;
L_00477d73:; BB(0x00477d73);
    /* 00477d73: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477d79: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477d7eu); f_0047bc20();
    /* 00477d7e: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477d85: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00477d88: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477d8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477d8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477d8f: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477d94u); f_004c6c10();
    /* 00477d94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477d97: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477d9cu); f_004da300();
    /* 00477d9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00477d9e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00477da0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477da3: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477da8u); f_004dc4d0();
    /* 00477da8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00477daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477dad: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x477db2u); f_004c7030();
    /* 00477db2: mov eax, dword ptr [0x79131c] */ r_eax = R32((u32)(0x79131cu));
    /* 00477db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477db8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477dbe: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477dc1: call 0x4f5e80 */ r_esp -= 4; W32(r_esp, 0x477dc6u); f_004f5e80();
    /* 00477dc6: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00477dc9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00477dcc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477dcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477dd0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477dd6: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477ddbu); f_0047ec90();
    /* 00477ddb: mov dword ptr [0x791300], 7 */ W32((u32)(0x791300u), 0x7u);
    /* 00477de5: jmp 0x477f14 */ goto L_00477f14;
L_00477dea:; BB(0x00477dea);
    /* 00477dea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477df0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477df3: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477df8u); f_004f67d0();
    /* 00477df8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00477dfb: cmp dword ptr [0x79131c], eax */ {  u32 a = R32((u32)(0x79131cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477e01: jg 0x477e8f */ if ((!fZ&&fS==fO)) goto L_00477e8f;
L_00477e07:; BB(0x00477e07);
    /* 00477e07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477e0d: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477e12u); f_0047bc20();
    /* 00477e12: imul eax, dword ptr [0x79131c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x79131cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477e19: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00477e1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477e1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477e20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477e23: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477e28u); f_004c6c10();
    /* 00477e28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477e2b: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477e30u); f_004da300();
    /* 00477e30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00477e32: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00477e34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477e37: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477e3cu); f_004dc4d0();
    /* 00477e3c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00477e3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477e41: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x477e46u); f_004c7030();
    /* 00477e46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477e4c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477e4f: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477e54u); f_004f67d0();
    /* 00477e54: mov ecx, dword ptr [0x79131c] */ r_ecx = R32((u32)(0x79131cu));
    /* 00477e5a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00477e5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477e5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477e63: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477e66: call 0x4f6210 */ r_esp -= 4; W32(r_esp, 0x477e6bu); f_004f6210();
    /* 00477e6b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00477e6e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00477e71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477e75: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477e7b: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477e80u); f_0047ec90();
    /* 00477e80: mov dword ptr [0x791300], 7 */ W32((u32)(0x791300u), 0x7u);
    /* 00477e8a: jmp 0x477f14 */ goto L_00477f14;
L_00477e8f:; BB(0x00477e8f);
    /* 00477e8f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477e95: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477e98: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x477e9du); f_004f67d0();
    /* 00477e9d: mov esi, eax */ r_esi = r_eax;
    /* 00477e9f: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00477ea2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477ea8: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477eadu); f_0047bc20();
    /* 00477ead: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477eb0: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00477eb3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477eb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477eb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477eba: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x477ebfu); f_004c6c10();
    /* 00477ebf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477ec2: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x477ec7u); f_004da300();
    /* 00477ec7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477ecd: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x477ed2u); f_0047bc20();
    /* 00477ed2: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00477ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477ed7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00477ed9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477edc: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x477ee1u); f_004dc4d0();
    /* 00477ee1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00477ee3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00477ee6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477ee7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477eed: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00477ef0: call 0x4f6250 */ r_esp -= 4; W32(r_esp, 0x477ef5u); f_004f6250();
    /* 00477ef5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00477ef8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00477efb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00477efe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477eff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477f05: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x477f0au); f_0047ec90();
    /* 00477f0a: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_00477f14:; BB(0x00477f14);
    /* 00477f14: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00477f17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00477f18: mov esp, ebp */ r_esp = r_ebp;
    /* 00477f1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00477f1b: ret  */ FN_RET(0x00477d00); r_esp += 4; return;
}

