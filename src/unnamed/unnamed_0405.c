#include "protos.h"

void f_004055f0(void) /* sub_4055F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004055f0);
    /* 004055f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004055f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004055f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004055f5: push 0x69d803 */ { u32 v = 0x69d803u; r_esp -= 4; W32(r_esp, v); }
    /* 004055fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00405600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405601: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00405609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040560b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040560c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040560f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00405615: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00405618: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040561c: jne 0x40562c */ if (!fZ) goto L_0040562c;
L_0040561e:; BB(0x0040561e);
    /* 0040561e: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405624: call 0x408460 */ r_esp -= 4; W32(r_esp, 0x405629u); f_00408460();
    /* 00405629: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0040562c:; BB(0x0040562c);
    /* 0040562c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405630: jge 0x405639 */ if ((fS==fO)) goto L_00405639;
L_00405632:; BB(0x00405632);
    /* 00405632: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_00405639:; BB(0x00405639);
    /* 00405639: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040563d: jle 0x405646 */ if ((fZ||fS!=fO)) goto L_00405646;
L_0040563f:; BB(0x0040563f);
    /* 0040563f: mov dword ptr [ebp + 8], 3 */ W32((u32)(r_ebp+0x8u), 0x3u);
L_00405646:; BB(0x00405646);
    /* 00405646: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00405649: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405650: jne 0x4056e3 */ if (!fZ) goto L_004056e3;
L_00405656:; BB(0x00405656);
    /* 00405656: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040565b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x405660u); f_00686d82();
    /* 00405660: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405663: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00405666: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040566d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405671: je 0x405680 */ if (fZ) goto L_00405680;
L_00405673:; BB(0x00405673);
    /* 00405673: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405676: call 0x402fc0 */ r_esp -= 4; W32(r_esp, 0x40567bu); f_00402fc0();
    /* 0040567b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040567e: jmp 0x405687 */ goto L_00405687;
L_00405680:; BB(0x00405680);
    /* 00405680: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00405687:; BB(0x00405687);
    /* 00405687: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040568a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040568d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00405694: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00405697: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040569a: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 004056a0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004056a3: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004056a9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004056ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004056af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004056b2: mov dword ptr [eax + 0x1c0], ecx */ W32((u32)(r_eax+0x1c0u), r_ecx);
    /* 004056b8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004056bb: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004056c1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004056c4: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 004056ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004056cc: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004056cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4056d1u); call_ind(t); }
    /* 004056d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004056d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004056d5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004056d8: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 004056de: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x4056e3u); f_005f7340();
L_004056e3:; BB(0x004056e3);
    /* 004056e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004056e6: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 004056ec: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x4056f1u); f_005f85d0();
    /* 004056f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004056f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004056fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004056fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004056fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004056ff: ret 4 */ FN_RET(0x004055f0); r_esp += 8; return;
}

void f_00405710(void) /* sub_405710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405710);
    /* 00405710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405711: mov ebp, esp */ r_ebp = r_esp;
    /* 00405713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040571a: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405721: je 0x40573e */ if (fZ) goto L_0040573e;
L_00405723:; BB(0x00405723);
    /* 00405723: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405726: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 0040572c: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x405731u); f_005f8990();
    /* 00405731: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405734: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
L_0040573e:; BB(0x0040573e);
    /* 0040573e: mov esp, ebp */ r_esp = r_ebp;
    /* 00405740: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405741: ret  */ FN_RET(0x00405710); r_esp += 4; return;
}

