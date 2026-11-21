#include "protos.h"

void f_006591b0(void) /* sub_6591B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006591b0);
    /* 006591b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006591b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006591b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006591b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006591b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006591b8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006591bc: jne 0x659231 */ if (!fZ) goto L_00659231;
L_006591be:; BB(0x006591be);
    /* 006591be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006591c1: mov cl, byte ptr [eax + 0x280] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x280u))) & 0xffu);
    /* 006591c7: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006591ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006591cd: mov byte ptr [edx + 0x280], cl */ W8((u32)(r_edx+0x280u), (u8)r_ecx);
    /* 006591d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006591d6: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x6591dbu); f_00657bb0();
    /* 006591db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006591dd: jne 0x6591fd */ if (!fZ) goto L_006591fd;
L_006591df:; BB(0x006591df);
    /* 006591df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006591e2: mov ecx, dword ptr [eax + 0x284] */ r_ecx = R32((u32)(r_eax+0x284u));
    /* 006591e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006591eb: mov eax, dword ptr [edx + 0x284] */ r_eax = R32((u32)(r_edx+0x284u));
    /* 006591f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006591f3: mov ecx, eax */ r_ecx = r_eax;
    /* 006591f5: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006591fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6591fdu); call_ind(t); }
L_006591fd:; BB(0x006591fd);
    /* 006591fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659200: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 00659206: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659209: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 0065920f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00659211: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00659217: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x659219u); call_ind(t); }
    /* 00659219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065921b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065921e: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x659223u); f_00657bb0();
    /* 00659223: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00659226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065922a: call 0x657e60 */ r_esp -= 4; W32(r_esp, 0x65922fu); f_00657e60();
    /* 0065922f: jmp 0x6592ad */ goto L_006592ad;
L_00659231:; BB(0x00659231);
    /* 00659231: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659234: mov dl, byte ptr [ecx + 0x280] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x280u))) & 0xffu);
    /* 0065923a: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065923d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659240: mov byte ptr [eax + 0x280], dl */ W8((u32)(r_eax+0x280u), (u8)r_edx);
    /* 00659246: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659249: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x65924eu); f_00657bb0();
    /* 0065924e: mov esi, eax */ r_esi = r_eax;
    /* 00659250: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659253: call 0x657bd0 */ r_esp -= 4; W32(r_esp, 0x659258u); f_00657bd0();
    /* 00659258: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065925b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065925d: jne 0x65927b */ if (!fZ) goto L_0065927b;
L_0065925f:; BB(0x0065925f);
    /* 0065925f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659262: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 00659268: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065926b: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 00659271: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00659273: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00659279: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65927bu); call_ind(t); }
L_0065927b:; BB(0x0065927b);
    /* 0065927b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065927e: mov edx, dword ptr [ecx + 0x284] */ r_edx = R32((u32)(r_ecx+0x284u));
    /* 00659284: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659287: mov ecx, dword ptr [eax + 0x284] */ r_ecx = R32((u32)(r_eax+0x284u));
    /* 0065928d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065928f: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00659295: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x659297u); call_ind(t); }
    /* 00659297: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659299: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065929c: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x6592a1u); f_00657bb0();
    /* 006592a1: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006592a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006592a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006592a8: call 0x657e60 */ r_esp -= 4; W32(r_esp, 0x6592adu); f_00657e60();
L_006592ad:; BB(0x006592ad);
    /* 006592ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006592ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006592b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006592b1: ret 4 */ FN_RET(0x006591b0); r_esp += 8; return;
}

void f_006595e0(void) /* sub_6595E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006595e0);
    /* 006595e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006595e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006595e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006595e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006595e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006595ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006595ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006595f0: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 006595f6: call 0x664c90 */ r_esp -= 4; W32(r_esp, 0x6595fbu); f_00664c90();
    /* 006595fb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006595fd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006595ff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00659601: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00659603: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00659606: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659609: mov ecx, dword ptr [eax + edx*4 + 0x414] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x414u));
    /* 00659610: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x659615u); f_006023d0();
    /* 00659615: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065961c: jmp 0x659627 */ goto L_00659627;
L_0065961e:; BB(0x0065961e);
    /* 0065961e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659621: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00659627:; BB(0x00659627);
    /* 00659627: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065962b: jge 0x659651 */ if ((fS==fO)) goto L_00659651;
L_0065962d:; BB(0x0065962d);
    /* 0065962d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00659630: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659633: je 0x65964f */ if (fZ) goto L_0065964f;
L_00659635:; BB(0x00659635);
    /* 00659635: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00659637: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00659639: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065963b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065963d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659640: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659643: mov ecx, dword ptr [ecx + eax*4 + 0x414] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x414u));
    /* 0065964a: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x65964fu); f_006023d0();
L_0065964f:; BB(0x0065964f);
    /* 0065964f: jmp 0x65961e */ goto L_0065961e;
L_00659651:; BB(0x00659651);
    /* 00659651: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659658: jmp 0x659663 */ goto L_00659663;
L_0065965a:; BB(0x0065965a);
    /* 0065965a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065965d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00659660: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00659663:; BB(0x00659663);
    /* 00659663: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659667: jge 0x6596b3 */ if ((fS==fO)) goto L_006596b3;
L_00659669:; BB(0x00659669);
    /* 00659669: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065966c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065966f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659670: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00659673: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659676: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659677: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065967a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065967d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065967e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00659681: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659685: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00659688: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065968b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065968c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065968f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659690: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00659693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659694: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00659697: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659698: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065969b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065969c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065969f: mov ecx, dword ptr [eax + 0x5fc] */ r_ecx = R32((u32)(r_eax+0x5fcu));
    /* 006596a5: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6596aau); f_00606350();
    /* 006596aa: mov ecx, eax */ r_ecx = r_eax;
    /* 006596ac: call 0x5fff90 */ r_esp -= 4; W32(r_esp, 0x6596b1u); f_005fff90();
    /* 006596b1: jmp 0x65965a */ goto L_0065965a;
L_006596b3:; BB(0x006596b3);
    /* 006596b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006596b6: call 0x6587b0 */ r_esp -= 4; W32(r_esp, 0x6596bbu); f_006587b0();
    /* 006596bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006596bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006596be: ret 4 */ FN_RET(0x006595e0); r_esp += 8; return;
}

void f_006596d0(void) /* sub_6596D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006596d0);
    /* 006596d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006596d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006596d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006596d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006596d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006596e0: jmp 0x6596eb */ goto L_006596eb;
L_006596e2:; BB(0x006596e2);
    /* 006596e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006596e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006596e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006596eb:; BB(0x006596eb);
    /* 006596eb: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006596ef: jge 0x659723 */ if ((fS==fO)) goto L_00659723;
L_006596f1:; BB(0x006596f1);
    /* 006596f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006596f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006596f7: cmp dword ptr [edx + ecx*4 + 0x60c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x60cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006596ff: je 0x659721 */ if (fZ) goto L_00659721;
L_00659701:; BB(0x00659701);
    /* 00659701: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659704: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659707: mov ecx, dword ptr [ecx + eax*4 + 0x60c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 0065970e: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x659713u); f_00600230();
    /* 00659713: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00659716: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659718: je 0x659721 */ if (fZ) goto L_00659721;
L_0065971a:; BB(0x0065971a);
    /* 0065971a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065971c: jmp 0x6597bb */ goto L_006597bb;
L_00659721:; BB(0x00659721);
    /* 00659721: jmp 0x6596e2 */ goto L_006596e2;
L_00659723:; BB(0x00659723);
    /* 00659723: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065972a: jmp 0x659735 */ goto L_00659735;
L_0065972c:; BB(0x0065972c);
    /* 0065972c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065972f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659732: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00659735:; BB(0x00659735);
    /* 00659735: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659739: jge 0x6597b9 */ if ((fS==fO)) goto L_006597b9;
L_0065973b:; BB(0x0065973b);
    /* 0065973b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065973e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065973f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659742: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 00659748: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x65974du); f_00606350();
    /* 0065974d: mov ecx, eax */ r_ecx = r_eax;
    /* 0065974f: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x659754u); f_005f54a0();
    /* 00659754: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00659757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659759: je 0x6597b4 */ if (fZ) goto L_006597b4;
L_0065975b:; BB(0x0065975b);
    /* 0065975b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065975e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065975f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659762: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 00659768: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x65976du); f_00606350();
    /* 0065976d: mov ecx, eax */ r_ecx = r_eax;
    /* 0065976f: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x659774u); f_006026d0();
    /* 00659774: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00659777: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659779: je 0x6597b4 */ if (fZ) goto L_006597b4;
L_0065977b:; BB(0x0065977b);
    /* 0065977b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065977e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065977f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659782: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 00659788: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x65978du); f_00606350();
    /* 0065978d: mov ecx, eax */ r_ecx = r_eax;
    /* 0065978f: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x659794u); f_00600230();
    /* 00659794: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00659797: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659799: je 0x6597b4 */ if (fZ) goto L_006597b4;
L_0065979b:; BB(0x0065979b);
    /* 0065979b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065979e: mov ecx, dword ptr [ecx + 0x600] */ r_ecx = R32((u32)(r_ecx+0x600u));
    /* 006597a4: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x6597a9u); f_00606570();
    /* 006597a9: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006597ae: jne 0x6597b4 */ if (!fZ) goto L_006597b4;
L_006597b0:; BB(0x006597b0);
    /* 006597b0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006597b2: jmp 0x6597bb */ goto L_006597bb;
L_006597b4:; BB(0x006597b4);
    /* 006597b4: jmp 0x65972c */ goto L_0065972c;
L_006597b9:; BB(0x006597b9);
    /* 006597b9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_006597bb:; BB(0x006597bb);
    /* 006597bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006597bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006597be: ret  */ FN_RET(0x006596d0); r_esp += 4; return;
}

void f_00659ad0(void) /* sub_659AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00659ad0);
    /* 00659ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00659ad3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659ad6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00659adb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00659add: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00659ae0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00659ae3: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00659ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659ae9: je 0x659b27 */ if (fZ) goto L_00659b27;
L_00659aeb:; BB(0x00659aeb);
    /* 00659aeb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659aee: movsx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1bcu));
    /* 00659af5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659af7: jne 0x659b27 */ if (!fZ) goto L_00659b27;
L_00659af9:; BB(0x00659af9);
    /* 00659af9: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659afb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659afe: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00659b04: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659b07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659b08: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659b0b: add edx, 0x22c */ {  u32 a = r_edx; u32 b = 0x22cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00659b11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659b12: call 0x687306 */ r_esp -= 4; W32(r_esp, 0x659b17u); f_00687306();
    /* 00659b17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b1c: jne 0x659b27 */ if (!fZ) goto L_00659b27;
L_00659b1e:; BB(0x00659b1e);
    /* 00659b1e: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00659b25: jmp 0x659b2e */ goto L_00659b2e;
L_00659b27:; BB(0x00659b27);
    /* 00659b27: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00659b2e:; BB(0x00659b2e);
    /* 00659b2e: mov al, byte ptr [ebp - 0x34] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffccu))) & 0xffu);
    /* 00659b31: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00659b34: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00659b38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b3a: jne 0x659b4a */ if (!fZ) goto L_00659b4a;
L_00659b3c:; BB(0x00659b3c);
    /* 00659b3c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659b3f: movsx eax, byte ptr [edx + 0x1bc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1bcu));
    /* 00659b46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b48: je 0x659b86 */ if (fZ) goto L_00659b86;
L_00659b4a:; BB(0x00659b4a);
    /* 00659b4a: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659b4c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659b4f: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00659b55: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00659b58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659b59: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659b5c: add eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659b61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659b62: call 0x687306 */ r_esp -= 4; W32(r_esp, 0x659b67u); f_00687306();
    /* 00659b67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659b6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b6c: jne 0x659b86 */ if (!fZ) goto L_00659b86;
L_00659b6e:; BB(0x00659b6e);
    /* 00659b6e: cmp dword ptr [ebp + 0xc], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b75: je 0x659b7f */ if (fZ) goto L_00659b7f;
L_00659b77:; BB(0x00659b77);
    /* 00659b77: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00659b7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b7d: jne 0x659b86 */ if (!fZ) goto L_00659b86;
L_00659b7f:; BB(0x00659b7f);
    /* 00659b7f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00659b81: jmp 0x659ca1 */ goto L_00659ca1;
L_00659b86:; BB(0x00659b86);
    /* 00659b86: movzx edx, byte ptr [0x795f95] */ r_edx = (u32)R8((u32)(0x795f95u));
    /* 00659b8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b8f: je 0x659bc6 */ if (fZ) goto L_00659bc6;
L_00659b91:; BB(0x00659b91);
    /* 00659b91: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00659b95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b97: jne 0x659bbf */ if (!fZ) goto L_00659bbf;
L_00659b99:; BB(0x00659b99);
    /* 00659b99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659b9b: push 0x6de38c */ { u32 v = 0x6de38cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659ba0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x659ba5u); f_00630f40();
    /* 00659ba5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659ba9: push 0x6de36c */ { u32 v = 0x6de36cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659bae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x659bb3u); f_00630f40();
    /* 00659bb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659bb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659bb7: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x659bbcu); f_0062ff10();
    /* 00659bbc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00659bbf:; BB(0x00659bbf);
    /* 00659bbf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00659bc1: jmp 0x659ca1 */ goto L_00659ca1;
L_00659bc6:; BB(0x00659bc6);
    /* 00659bc6: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00659bca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659bcc: je 0x659c11 */ if (fZ) goto L_00659c11;
L_00659bce:; BB(0x00659bce);
    /* 00659bce: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00659bd0: push 0x6de510 */ { u32 v = 0x6de510u; r_esp -= 4; W32(r_esp, v); }
    /* 00659bd5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x659bdau); f_00630f40();
    /* 00659bda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659bdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659bde: push 0x6de4f4 */ { u32 v = 0x6de4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00659be3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x659be8u); f_00630f40();
    /* 00659be8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659bec: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x659bf1u); f_0062ff10();
    /* 00659bf1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659bf4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00659bf7: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659bfb: jne 0x659c04 */ if (!fZ) goto L_00659c04;
L_00659bfd:; BB(0x00659bfd);
    /* 00659bfd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00659bff: jmp 0x659ca1 */ goto L_00659ca1;
L_00659c04:; BB(0x00659c04);
    /* 00659c04: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659c08: jne 0x659c11 */ if (!fZ) goto L_00659c11;
L_00659c0a:; BB(0x00659c0a);
    /* 00659c0a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00659c0c: jmp 0x659ca1 */ goto L_00659ca1;
L_00659c11:; BB(0x00659c11);
    /* 00659c11: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659c14: movsx eax, byte ptr [edx + 0x1bc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1bcu));
    /* 00659c1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659c1d: je 0x659c2f */ if (fZ) goto L_00659c2f;
L_00659c1f:; BB(0x00659c1f);
    /* 00659c1f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00659c22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659c23: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659c26: call 0x65a630 */ r_esp -= 4; W32(r_esp, 0x659c2bu); f_0065a630();
    /* 00659c2b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00659c2d: jmp 0x659ca1 */ goto L_00659ca1;
L_00659c2f:; BB(0x00659c2f);
    /* 00659c2f: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 00659c32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659c33: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659c36: call 0x659fa0 */ r_esp -= 4; W32(r_esp, 0x659c3bu); f_00659fa0();
    /* 00659c3b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00659c3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659c40: jne 0x659c46 */ if (!fZ) goto L_00659c46;
L_00659c42:; BB(0x00659c42);
    /* 00659c42: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00659c44: jmp 0x659ca1 */ goto L_00659ca1;
L_00659c46:; BB(0x00659c46);
    /* 00659c46: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659c49: movsx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1bcu));
    /* 00659c50: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00659c52: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00659c54: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00659c56: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 00659c59: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00659c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659c5d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00659c60: call 0x659d30 */ r_esp -= 4; W32(r_esp, 0x659c65u); f_00659d30();
    /* 00659c65: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 00659c68: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00659c6c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659c6e: je 0x659c9e */ if (fZ) goto L_00659c9e;
L_00659c70:; BB(0x00659c70);
    /* 00659c70: movzx edx, byte ptr [ebp - 2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 00659c74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659c76: jne 0x659c9e */ if (!fZ) goto L_00659c9e;
L_00659c78:; BB(0x00659c78);
    /* 00659c78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659c7a: push 0x6dc8c0 */ { u32 v = 0x6dc8c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659c7f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x659c84u); f_00630f40();
    /* 00659c84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659c88: push 0x6de4e0 */ { u32 v = 0x6de4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659c8d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x659c92u); f_00630f40();
    /* 00659c92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659c96: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x659c9bu); f_0062ff10();
    /* 00659c9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00659c9e:; BB(0x00659c9e);
    /* 00659c9e: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
L_00659ca1:; BB(0x00659ca1);
    /* 00659ca1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00659ca4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00659ca6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x659cabu); f_00686d72();
    /* 00659cab: mov esp, ebp */ r_esp = r_ebp;
    /* 00659cad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659cae: ret 8 */ FN_RET(0x00659ad0); r_esp += 12; return;
}

void f_00659cc0(void) /* sub_659CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00659cc0);
    /* 00659cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00659cc3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659cc6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00659ccb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00659ccd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00659cd0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00659cd3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659cd6: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659cdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659cdc: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00659cdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659ce0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x659ce5u); f_00686d8e();
    /* 00659ce5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659ce8: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00659cec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659cee: je 0x659d07 */ if (fZ) goto L_00659d07;
L_00659cf0:; BB(0x00659cf0);
    /* 00659cf0: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00659cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659cf4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659cf7: call 0x659fa0 */ r_esp -= 4; W32(r_esp, 0x659cfcu); f_00659fa0();
    /* 00659cfc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00659cff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659d01: jne 0x659d07 */ if (!fZ) goto L_00659d07;
L_00659d03:; BB(0x00659d03);
    /* 00659d03: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00659d05: jmp 0x659d13 */ goto L_00659d13;
L_00659d07:; BB(0x00659d07);
    /* 00659d07: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00659d0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659d0b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659d0e: call 0x659d30 */ r_esp -= 4; W32(r_esp, 0x659d13u); f_00659d30();
L_00659d13:; BB(0x00659d13);
    /* 00659d13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659d16: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00659d18: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x659d1du); f_00686d72();
    /* 00659d1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00659d1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659d20: ret 4 */ FN_RET(0x00659cc0); r_esp += 8; return;
}

void f_00659d30(void) /* sub_659D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00659d30);
    /* 00659d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00659d33: sub esp, 0x42c */ {  u32 a = r_esp; u32 b = 0x42cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659d39: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00659d3e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00659d40: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00659d43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00659d44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659d45: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 00659d4b: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00659d52: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659d57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659d59: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00659d5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659d60: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x659d65u); f_00686fa2();
    /* 00659d65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659d68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00659d6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659d6c: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00659d71: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659d76: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659d7b: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00659d81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659d82: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x659d88u); call_ind(t); }
    /* 00659d88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659d8b: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659d90: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00659d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659d97: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x659d9cu); f_005ea9c0();
    /* 00659d9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659d9f: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 00659da5: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659dac: jne 0x659db5 */ if (!fZ) goto L_00659db5;
L_00659dae:; BB(0x00659dae);
    /* 00659dae: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00659db0: jmp 0x659f89 */ goto L_00659f89;
L_00659db5:; BB(0x00659db5);
    /* 00659db5: mov dword ptr [ebp - 0x418], 0 */ W32((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 00659dbf: jmp 0x659dd0 */ goto L_00659dd0;
L_00659dc1:; BB(0x00659dc1);
    /* 00659dc1: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00659dc7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659dca: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
L_00659dd0:; BB(0x00659dd0);
    /* 00659dd0: cmp dword ptr [ebp - 0x418], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659dd7: jge 0x659ddb */ if ((fS==fO)) goto L_00659ddb;
L_00659dd9:; BB(0x00659dd9);
    /* 00659dd9: jmp 0x659dc1 */ goto L_00659dc1;
L_00659ddb:; BB(0x00659ddb);
    /* 00659ddb: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00659de1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659de2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00659de4: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659de6: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659dec: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00659df2: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659df6: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x659dfcu); call_ind(t); }
    /* 00659dfc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659dff: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00659e05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659e06: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x659e0cu); call_ind(t); }
    /* 00659e0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659e0f: mov dword ptr [ebp - 0x41c], 0 */ W32((u32)(r_ebp+0xfffffbe4u), 0x0u);
    /* 00659e19: jmp 0x659e2a */ goto L_00659e2a;
L_00659e1b:; BB(0x00659e1b);
    /* 00659e1b: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00659e21: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659e24: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
L_00659e2a:; BB(0x00659e2a);
    /* 00659e2a: cmp dword ptr [ebp - 0x41c], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659e31: jge 0x659e35 */ if ((fS==fO)) goto L_00659e35;
L_00659e33:; BB(0x00659e33);
    /* 00659e33: jmp 0x659e1b */ goto L_00659e1b;
L_00659e35:; BB(0x00659e35);
    /* 00659e35: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00659e3a: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659e40: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x659e45u); f_005fb5e0();
    /* 00659e45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659e47: je 0x659e95 */ if (fZ) goto L_00659e95;
L_00659e49:; BB(0x00659e49);
    /* 00659e49: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00659e4e: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659e54: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x659e59u); f_005fb5e0();
    /* 00659e59: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 00659e5f: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00659e65: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00659e6b: mov dword ptr [ebp - 0x40c], edx */ W32((u32)(r_ebp+0xfffffbf4u), r_edx);
    /* 00659e71: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00659e77: sub eax, 0x186bf */ {  u32 a = r_eax; u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00659e7c: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 00659e82: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00659e88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659e89: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00659e8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659e8d: call 0x6659e0 */ r_esp -= 4; W32(r_esp, 0x659e92u); f_006659e0();
    /* 00659e92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00659e95:; BB(0x00659e95);
    /* 00659e95: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00659e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659e99: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659e9f: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659ea5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659ea6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x659eabu); f_00686d8e();
    /* 00659eab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659eae: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659eb4: mov esi, dword ptr [edx + 0x1dc] */ r_esi = R32((u32)(r_edx+0x1dcu));
    /* 00659eba: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00659ebd: mov edi, dword ptr [ebp - 0x42c] */ r_edi = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659ec3: add edi, 0x1e0 */ {  u32 a = r_edi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00659ec9: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 00659ece: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00659ed0: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659ed7: jne 0x659f45 */ if (!fZ) goto L_00659f45;
L_00659ed9:; BB(0x00659ed9);
    /* 00659ed9: cmp dword ptr [0x1630690], 0 */ {  u32 a = R32((u32)(0x1630690u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659ee0: jne 0x659f45 */ if (!fZ) goto L_00659f45;
L_00659ee2:; BB(0x00659ee2);
    /* 00659ee2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00659ee8: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x659eedu); f_006375b0();
    /* 00659eed: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
    /* 00659ef3: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659ef9: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659eff: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00659f05: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x659f0au); f_0063aac0();
    /* 00659f0a: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659f0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659f0e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x659f13u); f_00686d8e();
    /* 00659f13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659f16: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00659f1c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x659f21u); f_006375b0();
    /* 00659f21: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
    /* 00659f27: mov ecx, dword ptr [ebp - 0x428] */ r_ecx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00659f2d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x659f32u); f_0063aac0();
    /* 00659f32: mov dword ptr [eax], 3 */ W32((u32)(r_eax), 0x3u);
    /* 00659f38: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00659f3e: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x659f43u); f_00637610();
    /* 00659f43: jmp 0x659f87 */ goto L_00659f87;
L_00659f45:; BB(0x00659f45);
    /* 00659f45: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659f4c: je 0x659f66 */ if (fZ) goto L_00659f66;
L_00659f4e:; BB(0x00659f4e);
    /* 00659f4e: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659f54: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659f5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659f5b: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00659f61: call 0x65c1f0 */ r_esp -= 4; W32(r_esp, 0x659f66u); f_0065c1f0();
L_00659f66:; BB(0x00659f66);
    /* 00659f66: cmp dword ptr [0x1630690], 0 */ {  u32 a = R32((u32)(0x1630690u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659f6d: je 0x659f87 */ if (fZ) goto L_00659f87;
L_00659f6f:; BB(0x00659f6f);
    /* 00659f6f: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00659f75: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00659f7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659f7c: mov ecx, dword ptr [0x1630690] */ r_ecx = R32((u32)(0x1630690u));
    /* 00659f82: call 0x65c1f0 */ r_esp -= 4; W32(r_esp, 0x659f87u); f_0065c1f0();
L_00659f87:; BB(0x00659f87);
    /* 00659f87: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00659f89:; BB(0x00659f89);
    /* 00659f89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00659f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00659f8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659f8e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00659f90: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x659f95u); f_00686d72();
    /* 00659f95: mov esp, ebp */ r_esp = r_ebp;
    /* 00659f97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659f98: ret 4 */ FN_RET(0x00659d30); r_esp += 8; return;
}

void f_00659fa0(void) /* sub_659FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00659fa0);
    /* 00659fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00659fa3: sub esp, 0x414 */ {  u32 a = r_esp; u32 b = 0x414u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659fa9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00659fae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00659fb0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00659fb3: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 00659fb9: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00659fc0: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659fc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659fc7: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00659fcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659fce: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x659fd3u); f_00686fa2();
    /* 00659fd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659fd6: mov dword ptr [ebp - 0x40c], 0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x0u);
    /* 00659fe0: jmp 0x659ff1 */ goto L_00659ff1;
L_00659fe2:; BB(0x00659fe2);
    /* 00659fe2: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00659fe8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659feb: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
L_00659ff1:; BB(0x00659ff1);
    /* 00659ff1: cmp dword ptr [ebp - 0x40c], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659ffb: jge 0x65a075 */ if ((fS==fO)) goto L_0065a075;
L_00659ffd:; BB(0x00659ffd);
    /* 00659ffd: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0065a003: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a004: push 0x6de554 */ { u32 v = 0x6de554u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a009: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065a00c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a00d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x65a013u); call_ind(t); }
    /* 0065a013: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a016: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065a019: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a01a: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a01f: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a024: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a029: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0065a02f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a030: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x65a036u); call_ind(t); }
    /* 0065a036: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a039: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a03e: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0065a044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a045: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x65a04au); f_005ea9c0();
    /* 0065a04a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a04d: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 0065a053: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a05a: jne 0x65a060 */ if (!fZ) goto L_0065a060;
L_0065a05c:; BB(0x0065a05c);
    /* 0065a05c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0065a05e: jmp 0x65a09d */ goto L_0065a09d;
L_0065a060:; BB(0x0065a060);
    /* 0065a060: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0065a066: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a067: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x65a06du); call_ind(t); }
    /* 0065a06d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a070: jmp 0x659fe2 */ goto L_00659fe2;
L_0065a075:; BB(0x0065a075);
    /* 0065a075: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a077: push 0x6de38c */ { u32 v = 0x6de38cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a07c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65a081u); f_00630f40();
    /* 0065a081: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a085: push 0x6de534 */ { u32 v = 0x6de534u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a08a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65a08fu); f_00630f40();
    /* 0065a08f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a092: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a093: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65a098u); f_0062ff10();
    /* 0065a098: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a09b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0065a09d:; BB(0x0065a09d);
    /* 0065a09d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a0a0: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a0a2: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x65a0a7u); f_00686d72();
    /* 0065a0a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a0a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a0aa: ret 4 */ FN_RET(0x00659fa0); r_esp += 8; return;
}

