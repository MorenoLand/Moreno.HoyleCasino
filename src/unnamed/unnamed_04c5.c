#include "protos.h"

void f_004c5610(void) /* sub_4C5610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c5610);
    /* 004c5610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c5611: mov ebp, esp */ r_ebp = r_esp;
    /* 004c5613: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c5616: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5617: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c561d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c5622u); f_0047e3b0();
    /* 004c5622: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c5625: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c562c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c562f: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c5634u); f_004c6a70();
    /* 004c5634: mov esi, eax */ r_esi = r_eax;
    /* 004c5636: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c563c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c5641u); f_0047bc20();
    /* 004c5641: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5643: mov eax, esi */ r_eax = r_esi;
    /* 004c5645: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004c5646: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004c5646, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004c5646, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004c5648: mov dword ptr [0x791e80], eax */ W32((u32)(0x791e80u), r_eax);
    /* 004c564d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5653: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x4c5658u); f_0047bc60();
    /* 004c5658: cmp dword ptr [0x791e80], eax */ {  u32 a = R32((u32)(0x791e80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c565e: jg 0x4c56ca */ if ((!fZ&&fS==fO)) goto L_004c56ca;
L_004c5660:; BB(0x004c5660);
    /* 004c5660: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5666: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c566bu); f_0047bc20();
    /* 004c566b: imul eax, dword ptr [0x791e80] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x791e80u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c5672: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c5675: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c5678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5679: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c567c: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c5681u); f_004c6c10();
    /* 004c5681: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c5684: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c5689u); f_004da300();
    /* 004c5689: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c568b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c568d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c5690: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x4c5695u); f_004dc4d0();
    /* 004c5695: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5697: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c569a: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c569fu); f_004c7030();
    /* 004c569f: mov eax, dword ptr [0x791e80] */ r_eax = R32((u32)(0x791e80u));
    /* 004c56a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c56a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c56ab: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c56ae: call 0x4f53c0 */ r_esp -= 4; W32(r_esp, 0x4c56b3u); f_004f53c0();
    /* 004c56b3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c56b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c56b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c56bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c56bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c56c3: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c56c8u); f_0047ec90();
    /* 004c56c8: jmp 0x4c571f */ goto L_004c571f;
L_004c56ca:; BB(0x004c56ca);
    /* 004c56ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c56d0: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x4c56d5u); f_0047bc60();
    /* 004c56d5: mov esi, eax */ r_esi = r_eax;
    /* 004c56d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c56dd: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c56e2u); f_0047bc20();
    /* 004c56e2: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c56e5: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 004c56e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c56eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c56ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c56ef: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x4c56f4u); f_004c6c10();
    /* 004c56f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c56f7: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c56fcu); f_004da300();
    /* 004c56fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5702: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5705: call 0x4f52a0 */ r_esp -= 4; W32(r_esp, 0x4c570au); f_004f52a0();
    /* 004c570a: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c570d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c5710: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c5713: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5714: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c571a: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c571fu); f_0047ec90();
L_004c571f:; BB(0x004c571f);
    /* 004c571f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c5722: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5723: mov esp, ebp */ r_esp = r_ebp;
    /* 004c5725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5726: ret  */ FN_RET(0x004c5610); r_esp += 4; return;
}

