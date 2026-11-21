#include "protos.h"

void f_00661170(void) /* sub_661170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661170);
    /* 00661170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661171: mov ebp, esp */ r_ebp = r_esp;
    /* 00661173: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661176: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00661179: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066117c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066117d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00661180: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00661182: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00661185: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0066118b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66118du); call_ind(t); }
    /* 0066118d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661190: je 0x6611bd */ if (fZ) goto L_006611bd;
L_00661192:; BB(0x00661192);
    /* 00661192: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00661195: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661196: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00661199: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066119b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066119e: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 006611a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6611a6u); call_ind(t); }
    /* 006611a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006611a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006611ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006611ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006611b0: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006611b3: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6611b8u); f_0060ca40();
    /* 006611b8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006611bb: jmp 0x6611c4 */ goto L_006611c4;
L_006611bd:; BB(0x006611bd);
    /* 006611bd: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_006611c4:; BB(0x006611c4);
    /* 006611c4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006611c7: mov esp, ebp */ r_esp = r_ebp;
    /* 006611c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006611ca: ret 4 */ FN_RET(0x00661170); r_esp += 8; return;
}

void f_00661300(void) /* sub_661300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661300);
    /* 00661300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661301: mov ebp, esp */ r_ebp = r_esp;
    /* 00661303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066130a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066130d: mov dword ptr [eax + 0x1fc], ecx */ W32((u32)(r_eax+0x1fcu), r_ecx);
    /* 00661313: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661316: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00661319: mov dword ptr [edx + 0x200], eax */ W32((u32)(r_edx+0x200u), r_eax);
    /* 0066131f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661322: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00661325: mov dword ptr [ecx + 0x204], edx */ W32((u32)(r_ecx+0x204u), r_edx);
    /* 0066132b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066132d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066132e: ret 0xc */ FN_RET(0x00661300); r_esp += 16; return;
}

void f_00661500(void) /* sub_661500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661500);
    /* 00661500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661501: mov ebp, esp */ r_ebp = r_esp;
    /* 00661503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661507: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066150b: jge 0x661511 */ if ((fS==fO)) goto L_00661511;
L_0066150d:; BB(0x0066150d);
    /* 0066150d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066150f: jmp 0x66151a */ goto L_0066151a;
L_00661511:; BB(0x00661511);
    /* 00661511: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661514: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00661517: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
L_0066151a:; BB(0x0066151a);
    /* 0066151a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066151c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066151d: ret 4 */ FN_RET(0x00661500); r_esp += 8; return;
}

