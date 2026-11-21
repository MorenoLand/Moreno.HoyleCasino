#include "protos.h"

void f_00614010(void) /* sub_614010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614010);
    /* 00614010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614011: mov ebp, esp */ r_ebp = r_esp;
    /* 00614013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061401a: mov al, byte ptr [eax + 0x80] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x80u))) & 0xffu);
    /* 00614020: mov esp, ebp */ r_esp = r_ebp;
    /* 00614022: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614023: ret  */ FN_RET(0x00614010); r_esp += 4; return;
}

void f_00614450(void) /* sub_614450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614450);
    /* 00614450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614451: mov ebp, esp */ r_ebp = r_esp;
    /* 00614453: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614456: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00614459: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061445c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061445e: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614461: jl 0x614469 */ if ((fS!=fO)) goto L_00614469;
L_00614463:; BB(0x00614463);
    /* 00614463: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 00614467: jmp 0x614481 */ goto L_00614481;
L_00614469:; BB(0x00614469);
    /* 00614469: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061446c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061446f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00614472: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614475: jl 0x61447d */ if ((fS!=fO)) goto L_0061447d;
L_00614477:; BB(0x00614477);
    /* 00614477: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0061447b: jmp 0x614481 */ goto L_00614481;
L_0061447d:; BB(0x0061447d);
    /* 0061447d: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
L_00614481:; BB(0x00614481);
    /* 00614481: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00614485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614487: je 0x6144aa */ if (fZ) goto L_006144aa;
L_00614489:; BB(0x00614489);
    /* 00614489: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061448c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061448f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00614491: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00614493: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00614496: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00614499: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0061449c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061449f: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 006144a2: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006144a5: jmp 0x6145a5 */ goto L_006145a5;
L_006144aa:; BB(0x006144aa);
    /* 006144aa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006144ad: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006144b0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006144b2: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006144b5: jl 0x6144bd */ if ((fS!=fO)) goto L_006144bd;
L_006144b7:; BB(0x006144b7);
    /* 006144b7: mov byte ptr [ebp - 2], 1 */ W8((u32)(r_ebp+0xfffffffeu), 0x1u);
    /* 006144bb: jmp 0x6144d5 */ goto L_006144d5;
L_006144bd:; BB(0x006144bd);
    /* 006144bd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006144c0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006144c3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006144c6: cmp ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006144c9: jl 0x6144d1 */ if ((fS!=fO)) goto L_006144d1;
L_006144cb:; BB(0x006144cb);
    /* 006144cb: mov byte ptr [ebp - 2], 1 */ W8((u32)(r_ebp+0xfffffffeu), 0x1u);
    /* 006144cf: jmp 0x6144d5 */ goto L_006144d5;
L_006144d1:; BB(0x006144d1);
    /* 006144d1: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
L_006144d5:; BB(0x006144d5);
    /* 006144d5: movzx edx, byte ptr [ebp - 2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 006144d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006144db: je 0x6144fe */ if (fZ) goto L_006144fe;
L_006144dd:; BB(0x006144dd);
    /* 006144dd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006144e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006144e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006144e5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006144e7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006144ea: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006144ed: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006144f0: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006144f3: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 006144f6: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006144f9: jmp 0x6145a5 */ goto L_006145a5;
L_006144fe:; BB(0x006144fe);
    /* 006144fe: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614501: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00614504: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00614506: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614508: jge 0x614514 */ if ((fS==fO)) goto L_00614514;
L_0061450a:; BB(0x0061450a);
    /* 0061450a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061450d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061450f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00614512: jmp 0x61451c */ goto L_0061451c;
L_00614514:; BB(0x00614514);
    /* 00614514: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00614517: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00614519: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0061451c:; BB(0x0061451c);
    /* 0061451c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061451f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00614522: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00614524: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614527: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061452a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0061452d: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614530: jge 0x61453d */ if ((fS==fO)) goto L_0061453d;
L_00614532:; BB(0x00614532);
    /* 00614532: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614535: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00614538: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061453b: jmp 0x614546 */ goto L_00614546;
L_0061453d:; BB(0x0061453d);
    /* 0061453d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00614540: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00614543: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00614546:; BB(0x00614546);
    /* 00614546: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00614549: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061454c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061454f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614552: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00614555: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00614558: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061455b: jle 0x614568 */ if ((fZ||fS!=fO)) goto L_00614568;
L_0061455d:; BB(0x0061455d);
    /* 0061455d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614560: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00614563: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00614566: jmp 0x614571 */ goto L_00614571;
L_00614568:; BB(0x00614568);
    /* 00614568: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061456b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061456e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00614571:; BB(0x00614571);
    /* 00614571: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00614574: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00614577: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061457a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061457d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00614580: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00614583: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614586: jle 0x614593 */ if ((fZ||fS!=fO)) goto L_00614593;
L_00614588:; BB(0x00614588);
    /* 00614588: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061458b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0061458e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00614591: jmp 0x61459c */ goto L_0061459c;
L_00614593:; BB(0x00614593);
    /* 00614593: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00614596: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00614599: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0061459c:; BB(0x0061459c);
    /* 0061459c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061459f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006145a2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_006145a5:; BB(0x006145a5);
    /* 006145a5: mov esp, ebp */ r_esp = r_ebp;
    /* 006145a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006145a8: ret  */ FN_RET(0x00614450); r_esp += 4; return;
}

void f_00614670(void) /* sub_614670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614670);
    /* 00614670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614671: mov ebp, esp */ r_ebp = r_esp;
    /* 00614673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614677: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061467a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061467d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00614680: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00614683: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614684: call 0x62dd10 */ r_esp -= 4; W32(r_esp, 0x614689u); f_0062dd10();
    /* 00614689: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061468c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061468e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061468f: ret 4 */ FN_RET(0x00614670); r_esp += 8; return;
}

void f_00614b60(void) /* sub_614B60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614b60);
    /* 00614b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00614b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614b67: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 00614b6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614b6b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00614b6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614b6f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00614b72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614b73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00614b76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614b77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614b7a: call 0x5f50c0 */ r_esp -= 4; W32(r_esp, 0x614b7fu); f_005f50c0();
    /* 00614b7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614b82: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00614b85: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00614b88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614b8b: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00614b8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614b91: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00614b94: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00614b97: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614b9b: je 0x614bbc */ if (fZ) goto L_00614bbc;
L_00614b9d:; BB(0x00614b9d);
    /* 00614b9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614b9f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00614ba2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614ba3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00614ba6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614ba7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00614baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614bab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614bae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614baf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614bb2: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00614bb5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x614bbau); f_005eae80();
    /* 00614bba: jmp 0x614bd1 */ goto L_00614bd1;
L_00614bbc:; BB(0x00614bbc);
    /* 00614bbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614bbf: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00614bc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614bc5: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00614bc8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614bca: mov ecx, eax */ r_ecx = r_eax;
    /* 00614bcc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00614bcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614bd1u); call_ind(t); }
L_00614bd1:; BB(0x00614bd1);
    /* 00614bd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614bd4: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00614bd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614bda: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00614bdd: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00614be0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614be2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00614be5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00614be8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614be9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00614bec: add eax, dword ptr [ebp + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614bef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614bf0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614bf3: add ecx, dword ptr [ebp + 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614bf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614bf7: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 00614bfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614bfb: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 00614bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614bff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c02: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00614c05: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x614c0au); f_005f61d0();
    /* 00614c0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c0d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00614c10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c13: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00614c16: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00614c19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614c1b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00614c1e: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614c21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614c22: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00614c25: add ecx, dword ptr [ebp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614c28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614c29: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00614c2c: add edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00614c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614c30: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00614c33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614c34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c37: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00614c3a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x614c3fu); f_005eae80();
    /* 00614c3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c42: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00614c45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c48: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00614c4b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00614c4e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614c50: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00614c53: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614c56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614c57: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00614c5a: add ecx, dword ptr [ebp + 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x30u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614c5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614c5e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00614c61: add edx, dword ptr [ebp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00614c64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614c65: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00614c68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614c69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c6c: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00614c6f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x614c74u); f_005eae80();
    /* 00614c74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c77: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00614c7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c7d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00614c80: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00614c83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614c86: call 0x615160 */ r_esp -= 4; W32(r_esp, 0x614c8bu); f_00615160();
    /* 00614c8b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00614c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614c90: je 0x614cd8 */ if (fZ) goto L_00614cd8;
L_00614c92:; BB(0x00614c92);
    /* 00614c92: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614c95: add ecx, dword ptr [ebp + 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614c98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614c99: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00614c9c: add edx, dword ptr [ebp + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00614c9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614ca0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614ca3: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00614ca6: call 0x615e80 */ r_esp -= 4; W32(r_esp, 0x614cabu); f_00615e80();
    /* 00614cab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614cad: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00614cb0: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614cb4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00614cb7: add edx, dword ptr [ebp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00614cba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614cbb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614cbe: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00614cc1: call 0x615eb0 */ r_esp -= 4; W32(r_esp, 0x614cc6u); f_00615eb0();
    /* 00614cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614cc7: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00614cca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614ccb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614cce: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 00614cd1: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x614cd6u); f_005eae80();
    /* 00614cd6: jmp 0x614d1c */ goto L_00614d1c;
L_00614cd8:; BB(0x00614cd8);
    /* 00614cd8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00614cdb: add eax, dword ptr [ebp + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614cde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614cdf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00614ce2: add ecx, dword ptr [ebp + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614ce5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614ce6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614ce9: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 00614cec: call 0x615e80 */ r_esp -= 4; W32(r_esp, 0x614cf1u); f_00615e80();
    /* 00614cf1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614cf3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00614cf6: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614cf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614cfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614cfd: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00614d00: call 0x615eb0 */ r_esp -= 4; W32(r_esp, 0x614d05u); f_00615eb0();
    /* 00614d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614d06: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00614d09: add edx, dword ptr [ebp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00614d0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614d0d: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00614d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614d11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614d14: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00614d17: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x614d1cu); f_005eae80();
L_00614d1c:; BB(0x00614d1c);
    /* 00614d1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00614d1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614d1f: ret 0x50 */ FN_RET(0x00614b60); r_esp += 84; return;
}

