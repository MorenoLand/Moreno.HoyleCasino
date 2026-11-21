#include "protos.h"

void f_0056c370(void) /* sub_56C370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056c370);
    /* 0056c370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056c371: mov ebp, esp */ r_ebp = r_esp;
    /* 0056c373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c375: push 0x6a5e17 */ { u32 v = 0x6a5e17u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c37a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056c380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c381: sub esp, 0xf8 */ {  u32 a = r_esp; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056c387: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056c38c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c38e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c38f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056c392: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056c398: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0056c39e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c3a4: call 0x56d9d0 */ r_esp -= 4; W32(r_esp, 0x56c3a9u); f_0056d9d0();
    /* 0056c3a9: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c3af: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 0056c3b9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c3bf: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 0056c3c9: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c3cf: mov byte ptr [edx + 0x98], 1 */ W8((u32)(r_edx+0x98u), 0x1u);
    /* 0056c3d6: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c3dc: mov byte ptr [eax + 0x99], 0 */ W8((u32)(r_eax+0x99u), 0x0u);
    /* 0056c3e3: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056c3e9: jmp 0x56c3f7 */ goto L_0056c3f7;
L_0056c3eb:; BB(0x0056c3eb);
    /* 0056c3eb: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056c3ef: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056c3f3: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_0056c3f7:; BB(0x0056c3f7);
    /* 0056c3f7: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c3fb: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056c3fe: jge 0x56c417 */ if ((fS==fO)) goto L_0056c417;
L_0056c400:; BB(0x0056c400);
    /* 0056c400: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c404: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c40a: mov dword ptr [ecx + eax*4 + 0xbc], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0xbcu), 0xffffffffu);
    /* 0056c415: jmp 0x56c3eb */ goto L_0056c3eb;
L_0056c417:; BB(0x0056c417);
    /* 0056c417: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056c41d: jmp 0x56c42b */ goto L_0056c42b;
L_0056c41f:; BB(0x0056c41f);
    /* 0056c41f: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056c423: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056c427: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0056c42b:; BB(0x0056c42b);
    /* 0056c42b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c42f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056c432: jge 0x56c61a */ if ((fS==fO)) goto L_0056c61a;
L_0056c438:; BB(0x0056c438);
    /* 0056c438: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c43c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c442: cmp dword ptr [edx + ecx*4 + 8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c447: jne 0x56c4a1 */ if (!fZ) goto L_0056c4a1;
L_0056c449:; BB(0x0056c449);
    /* 0056c449: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c44e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56c453u); f_00686d82();
    /* 0056c453: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c456: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056c459: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056c460: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c464: je 0x56c476 */ if (fZ) goto L_0056c476;
L_0056c466:; BB(0x0056c466);
    /* 0056c466: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056c469: call 0x56f9b0 */ r_esp -= 4; W32(r_esp, 0x56c46eu); f_0056f9b0();
    /* 0056c46e: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0056c474: jmp 0x56c480 */ goto L_0056c480;
L_0056c476:; BB(0x0056c476);
    /* 0056c476: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0056c480:; BB(0x0056c480);
    /* 0056c480: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0056c486: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056c489: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c490: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c494: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c49a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056c49d: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
L_0056c4a1:; BB(0x0056c4a1);
    /* 0056c4a1: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c4a5: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c4ab: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c4af: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c4b3: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c4b9: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c4bd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056c4bf: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0056c4c2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c4c4u); call_ind(t); }
    /* 0056c4c4: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c4c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056c4ca: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056c4cd: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0056c4d0: lea ecx, [ecx*4 + 0x16041] */ r_ecx = (u32)(r_ecx*4+0x16041u);
    /* 0056c4d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c4d8: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c4dc: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c4e2: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056c4e6: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c4ea: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c4f0: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056c4f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056c4f6: mov ecx, edx */ r_ecx = r_edx;
    /* 0056c4f8: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0056c4fe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c500u); call_ind(t); }
    /* 0056c500: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c502: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c504: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c508: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c50e: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0056c512: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c516: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c51c: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0056c520: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c522: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056c525: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c527u); call_ind(t); }
    /* 0056c527: push 0x5dc */ { u32 v = 0x5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c52c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c530: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c536: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c53a: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c53e: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c544: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c548: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056c54a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0056c54d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c54fu); call_ind(t); }
    /* 0056c54f: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c554: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c558: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c55e: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c562: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x56c567u); f_005f53e0();
    /* 0056c567: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c56b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056c56e: jge 0x56c5b1 */ if ((fS==fO)) goto L_0056c5b1;
L_0056c570:; BB(0x0056c570);
    /* 0056c570: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c574: lea edx, [ecx*4 + 3] */ r_edx = (u32)(r_ecx*4+0x3u);
    /* 0056c57b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c57c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c580: lea ecx, [eax*4 + 2] */ r_ecx = (u32)(r_eax*4+0x2u);
    /* 0056c587: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c588: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c58c: lea eax, [edx*4 + 1] */ r_eax = (u32)(r_edx*4+0x1u);
    /* 0056c593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c594: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c598: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0056c59b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c59c: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c5a0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c5a6: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056c5aa: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x56c5afu); f_006023d0();
    /* 0056c5af: jmp 0x56c5cc */ goto L_0056c5cc;
L_0056c5b1:; BB(0x0056c5b1);
    /* 0056c5b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5b5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5b9: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c5bd: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c5c3: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c5c7: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x56c5ccu); f_006023d0();
L_0056c5cc:; BB(0x0056c5cc);
    /* 0056c5cc: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c5d0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c5d6: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0056c5da: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c5de: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c5e4: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0056c5e8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c5ea: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0056c5f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c5f2u); call_ind(t); }
    /* 0056c5f2: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c5f6: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c5fc: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c600: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c604: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c60a: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056c60e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056c610: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0056c613: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c615u); call_ind(t); }
    /* 0056c615: jmp 0x56c41f */ goto L_0056c41f;
L_0056c61a:; BB(0x0056c61a);
    /* 0056c61a: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056c620: jmp 0x56c62e */ goto L_0056c62e;
L_0056c622:; BB(0x0056c622);
    /* 0056c622: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056c626: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056c62a: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_0056c62e:; BB(0x0056c62e);
    /* 0056c62e: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c632: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056c635: jge 0x56c91a */ if ((fS==fO)) goto L_0056c91a;
L_0056c63b:; BB(0x0056c63b);
    /* 0056c63b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c63f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c645: cmp dword ptr [eax + edx*4 + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c64a: jne 0x56c6a4 */ if (!fZ) goto L_0056c6a4;
L_0056c64c:; BB(0x0056c64c);
    /* 0056c64c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c651: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56c656u); f_00686d82();
    /* 0056c656: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c659: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056c65c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056c663: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c667: je 0x56c679 */ if (fZ) goto L_0056c679;
L_0056c669:; BB(0x0056c669);
    /* 0056c669: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c66c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x56c671u); f_005eaaf0();
    /* 0056c671: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0056c677: jmp 0x56c683 */ goto L_0056c683;
L_0056c679:; BB(0x0056c679);
    /* 0056c679: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0056c683:; BB(0x0056c683);
    /* 0056c683: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0056c689: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0056c68c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c693: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c697: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c69d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056c6a0: mov dword ptr [eax + edx*4 + 0x34], ecx */ W32((u32)(r_eax+r_edx*4+0x34u), r_ecx);
L_0056c6a4:; BB(0x0056c6a4);
    /* 0056c6a4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c6a8: mov eax, dword ptr [edx*8 + 0x74889c] */ r_eax = R32((u32)(r_edx*8+0x74889cu));
    /* 0056c6af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c6b0: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c6b4: mov edx, dword ptr [ecx*8 + 0x748898] */ r_edx = R32((u32)(r_ecx*8+0x748898u));
    /* 0056c6bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c6bc: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c6c0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c6c6: mov edx, dword ptr [ecx + eax*4 + 0x34] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 0056c6ca: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c6ce: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c6d4: mov ecx, dword ptr [ecx + eax*4 + 0x34] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 0056c6d8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c6da: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056c6dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c6dfu); call_ind(t); }
    /* 0056c6df: push 0x1602f */ { u32 v = 0x1602fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c6e4: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c6e8: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c6ee: mov ecx, dword ptr [edx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056c6f2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56c6f7u); f_005eaf00();
    /* 0056c6f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c6f9: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c6fd: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c703: mov edx, dword ptr [ecx + eax*4 + 0x34] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 0056c707: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c70b: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c711: mov ecx, dword ptr [ecx + eax*4 + 0x34] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 0056c715: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c717: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056c71d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c71fu); call_ind(t); }
    /* 0056c71f: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c723: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c729: mov eax, dword ptr [edx + ecx*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056c72d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c731: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c737: mov ecx, dword ptr [edx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056c73b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056c73d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0056c740: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c742u); call_ind(t); }
    /* 0056c742: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c744: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c748: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c74e: mov edx, dword ptr [ecx + eax*4 + 0x34] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 0056c752: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c756: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c75c: mov ecx, dword ptr [ecx + eax*4 + 0x34] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 0056c760: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c762: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056c765: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c767u); call_ind(t); }
    /* 0056c767: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c76b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c771: mov eax, dword ptr [edx + ecx*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056c775: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c779: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c77f: mov ecx, dword ptr [edx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056c783: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056c785: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056c788: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c78au); call_ind(t); }
    /* 0056c78a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c78e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c794: cmp dword ptr [ecx + eax*4 + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c799: jne 0x56c7f3 */ if (!fZ) goto L_0056c7f3;
L_0056c79b:; BB(0x0056c79b);
    /* 0056c79b: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c7a0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56c7a5u); f_00686d82();
    /* 0056c7a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c7a8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056c7ab: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056c7b2: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c7b6: je 0x56c7c8 */ if (fZ) goto L_0056c7c8;
L_0056c7b8:; BB(0x0056c7b8);
    /* 0056c7b8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056c7bb: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56c7c0u); f_005f5bf0();
    /* 0056c7c0: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0056c7c6: jmp 0x56c7d2 */ goto L_0056c7d2;
L_0056c7c8:; BB(0x0056c7c8);
    /* 0056c7c8: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0056c7d2:; BB(0x0056c7d2);
    /* 0056c7d2: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0056c7d8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0056c7db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c7e2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c7e6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c7ec: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c7ef: mov dword ptr [ecx + eax*4 + 0x44], edx */ W32((u32)(r_ecx+r_eax*4+0x44u), r_edx);
L_0056c7f3:; BB(0x0056c7f3);
    /* 0056c7f3: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c7f7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056c7fa: jge 0x56c831 */ if ((fS==fO)) goto L_0056c831;
L_0056c7fc:; BB(0x0056c7fc);
    /* 0056c7fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c7fe: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c802: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0056c804: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0056c806: and ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0056c809: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c80a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c80e: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c814: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 0056c818: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c81c: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c822: mov edx, dword ptr [eax + edx*4 + 0x44] */ r_edx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 0056c826: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056c828: mov ecx, edx */ r_ecx = r_edx;
    /* 0056c82a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0056c82d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c82fu); call_ind(t); }
    /* 0056c82f: jmp 0x56c86a */ goto L_0056c86a;
L_0056c831:; BB(0x0056c831);
    /* 0056c831: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c833: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c837: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056c83a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0056c83c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0056c83e: and eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056c841: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056c846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c847: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c84b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c851: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056c855: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c859: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c85f: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056c863: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056c865: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0056c868: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c86au); call_ind(t); }
L_0056c86a:; BB(0x0056c86a);
    /* 0056c86a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056c86c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c870: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c876: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0056c87a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c87e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c884: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0056c888: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c88a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056c88d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c88fu); call_ind(t); }
    /* 0056c88f: push 0x16040 */ { u32 v = 0x16040u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c894: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c898: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c89e: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056c8a2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56c8a7u); f_005eaf00();
    /* 0056c8a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c8a9: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c8ad: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c8b3: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0056c8b7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c8bb: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c8c1: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0056c8c5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c8c7: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056c8cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c8cfu); call_ind(t); }
    /* 0056c8cf: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c8d3: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c8d9: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056c8dd: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c8e1: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c8e7: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056c8eb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056c8ed: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0056c8f0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56c8f2u); call_ind(t); }
    /* 0056c8f2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c8f6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c8fc: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0056c900: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056c904: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c90a: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0056c90e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c910: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056c913: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c915u); call_ind(t); }
    /* 0056c915: jmp 0x56c622 */ goto L_0056c622;
L_0056c91a:; BB(0x0056c91a);
    /* 0056c91a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c920: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c924: jne 0x56ca12 */ if (!fZ) goto L_0056ca12;
L_0056c92a:; BB(0x0056c92a);
    /* 0056c92a: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c92f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56c934u); f_00686d82();
    /* 0056c934: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c937: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056c93a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0056c941: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c945: je 0x56c957 */ if (fZ) goto L_0056c957;
L_0056c947:; BB(0x0056c947);
    /* 0056c947: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056c94a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56c94fu); f_005f5bf0();
    /* 0056c94f: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0056c955: jmp 0x56c961 */ goto L_0056c961;
L_0056c957:; BB(0x0056c957);
    /* 0056c957: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0056c961:; BB(0x0056c961);
    /* 0056c961: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0056c967: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0056c96a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c971: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c977: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056c97a: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0056c97d: push 0x15f97 */ { u32 v = 0x15f97u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c982: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c988: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0056c98b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56c990u); f_005eaf00();
    /* 0056c990: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c992: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c998: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0056c99b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c9a1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0056c9a4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056c9a6: mov ecx, eax */ r_ecx = r_eax;
    /* 0056c9a8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056c9ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c9adu); call_ind(t); }
    /* 0056c9ad: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c9b2: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c9b4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c9ba: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0056c9bd: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c9c3: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0056c9c6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c9c8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056c9cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c9cdu); call_ind(t); }
    /* 0056c9cd: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c9d3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0056c9d6: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c9dc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0056c9df: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c9e1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056c9e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c9e6u); call_ind(t); }
    /* 0056c9e6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c9ec: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0056c9ef: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056c9f5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0056c9f8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056c9fa: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056c9fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56c9ffu); call_ind(t); }
    /* 0056c9ff: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ca05: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0056ca08: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
L_0056ca12:; BB(0x0056ca12);
    /* 0056ca12: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ca18: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ca1c: jne 0x56ca71 */ if (!fZ) goto L_0056ca71;
L_0056ca1e:; BB(0x0056ca1e);
    /* 0056ca1e: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ca23: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56ca28u); f_00686d82();
    /* 0056ca28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ca2b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056ca2e: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0056ca35: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ca39: je 0x56ca4b */ if (fZ) goto L_0056ca4b;
L_0056ca3b:; BB(0x0056ca3b);
    /* 0056ca3b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056ca3e: call 0x56fc10 */ r_esp -= 4; W32(r_esp, 0x56ca43u); f_0056fc10();
    /* 0056ca43: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0056ca49: jmp 0x56ca55 */ goto L_0056ca55;
L_0056ca4b:; BB(0x0056ca4b);
    /* 0056ca4b: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0056ca55:; BB(0x0056ca55);
    /* 0056ca55: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0056ca5b: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0056ca5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056ca65: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ca6b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056ca6e: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_0056ca71:; BB(0x0056ca71);
    /* 0056ca71: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ca77: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0056ca7a: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ca80: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0056ca83: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056ca85: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056ca88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ca8au); call_ind(t); }
    /* 0056ca8a: push 0x16042 */ { u32 v = 0x16042u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ca8f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ca95: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0056ca98: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ca9e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0056caa1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056caa3: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0056caa9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56caabu); call_ind(t); }
    /* 0056caab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056caad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056caaf: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cab5: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0056cab8: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cabe: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0056cac1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cac3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056cac6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cac8u); call_ind(t); }
    /* 0056cac8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056caca: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cad0: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0056cad3: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cad9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0056cadc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cade: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056cae1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cae3u); call_ind(t); }
    /* 0056cae3: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cae9: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0056caec: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056caf2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0056caf5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056caf7: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0056cafd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56caffu); call_ind(t); }
    /* 0056caff: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cb05: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0056cb08: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cb0e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0056cb11: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cb13: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056cb16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cb18u); call_ind(t); }
    /* 0056cb18: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056cb1e: jmp 0x56cb2c */ goto L_0056cb2c;
L_0056cb20:; BB(0x0056cb20);
    /* 0056cb20: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056cb24: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056cb28: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_0056cb2c:; BB(0x0056cb2c);
    /* 0056cb2c: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cb30: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056cb33: jge 0x56cd9d */ if ((fS==fO)) goto L_0056cd9d;
L_0056cb39:; BB(0x0056cb39);
    /* 0056cb39: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cb3d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cb43: cmp dword ptr [ecx + eax*4 + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cb48: jne 0x56cba2 */ if (!fZ) goto L_0056cba2;
L_0056cb4a:; BB(0x0056cb4a);
    /* 0056cb4a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb4f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56cb54u); f_00686d82();
    /* 0056cb54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cb57: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056cb5a: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0056cb61: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cb65: je 0x56cb77 */ if (fZ) goto L_0056cb77;
L_0056cb67:; BB(0x0056cb67);
    /* 0056cb67: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056cb6a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x56cb6fu); f_005eaaf0();
    /* 0056cb6f: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0056cb75: jmp 0x56cb81 */ goto L_0056cb81;
L_0056cb77:; BB(0x0056cb77);
    /* 0056cb77: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_0056cb81:; BB(0x0056cb81);
    /* 0056cb81: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0056cb87: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0056cb8a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056cb91: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cb95: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cb9b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056cb9e: mov dword ptr [ecx + eax*4 + 0x54], edx */ W32((u32)(r_ecx+r_eax*4+0x54u), r_edx);
L_0056cba2:; BB(0x0056cba2);
    /* 0056cba2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cba4: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cba8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0056cbaa: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0056cbac: and eax, 0x189 */ {  u32 a = r_eax; u32 b = 0x189u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056cbb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cbb2: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cbb6: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cbbc: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0056cbc0: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cbc4: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cbca: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0056cbce: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056cbd0: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0056cbd3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56cbd5u); call_ind(t); }
    /* 0056cbd5: push 0x16030 */ { u32 v = 0x16030u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cbda: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cbde: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cbe4: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0056cbe8: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56cbedu); f_005eaf00();
    /* 0056cbed: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cbf1: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cbf7: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0056cbfb: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cbff: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cc05: mov edx, dword ptr [eax + edx*4 + 0x54] */ r_edx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0056cc09: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056cc0b: mov ecx, edx */ r_ecx = r_edx;
    /* 0056cc0d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0056cc10: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56cc12u); call_ind(t); }
    /* 0056cc12: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc14: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cc18: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cc1e: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0056cc22: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cc26: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cc2c: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0056cc30: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cc32: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056cc35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cc37u); call_ind(t); }
    /* 0056cc37: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cc3b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cc41: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0056cc45: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cc49: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cc4f: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0056cc53: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056cc55: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056cc58: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56cc5au); call_ind(t); }
    /* 0056cc5a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cc5e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cc64: cmp dword ptr [ecx + eax*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cc69: jne 0x56ccc3 */ if (!fZ) goto L_0056ccc3;
L_0056cc6b:; BB(0x0056cc6b);
    /* 0056cc6b: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc70: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56cc75u); f_00686d82();
    /* 0056cc75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cc78: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0056cc7b: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0056cc82: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cc86: je 0x56cc98 */ if (fZ) goto L_0056cc98;
L_0056cc88:; BB(0x0056cc88);
    /* 0056cc88: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0056cc8b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56cc90u); f_005f5bf0();
    /* 0056cc90: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0056cc96: jmp 0x56cca2 */ goto L_0056cca2;
L_0056cc98:; BB(0x0056cc98);
    /* 0056cc98: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_0056cca2:; BB(0x0056cca2);
    /* 0056cca2: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0056cca8: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0056ccab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056ccb2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056ccb6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ccbc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0056ccbf: mov dword ptr [ecx + eax*4 + 0x5c], edx */ W32((u32)(r_ecx+r_eax*4+0x5cu), r_edx);
L_0056ccc3:; BB(0x0056ccc3);
    /* 0056ccc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccc7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cccb: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ccd1: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0056ccd5: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056ccd9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ccdf: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0056cce3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cce5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056cce8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cceau); call_ind(t); }
    /* 0056ccea: push 0x16049 */ { u32 v = 0x16049u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccef: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056ccf3: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ccf9: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0056ccfd: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56cd02u); f_005eaf00();
    /* 0056cd02: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cd07: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd0b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd11: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0056cd15: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd19: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd1f: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0056cd23: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056cd25: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056cd2b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56cd2du); call_ind(t); }
    /* 0056cd2d: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd31: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd37: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0056cd3b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd3f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd45: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0056cd49: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cd4b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056cd4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cd50u); call_ind(t); }
    /* 0056cd50: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056cd52: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd56: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd5c: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0056cd60: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd64: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd6a: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0056cd6e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056cd70: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0056cd73: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56cd75u); call_ind(t); }
    /* 0056cd75: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd79: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd7f: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0056cd83: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056cd87: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cd8d: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0056cd91: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cd93: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056cd96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cd98u); call_ind(t); }
    /* 0056cd98: jmp 0x56cb20 */ goto L_0056cb20;
L_0056cd9d:; BB(0x0056cd9d);
    /* 0056cd9d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cda3: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cda7: jne 0x56cdfe */ if (!fZ) goto L_0056cdfe;
L_0056cda9:; BB(0x0056cda9);
    /* 0056cda9: push 0x194 */ { u32 v = 0x194u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cdae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56cdb3u); f_00686d82();
    /* 0056cdb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cdb6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0056cdb9: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0056cdc0: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cdc4: je 0x56cdd8 */ if (fZ) goto L_0056cdd8;
L_0056cdc6:; BB(0x0056cdc6);
    /* 0056cdc6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cdc8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0056cdcb: call 0x5702e0 */ r_esp -= 4; W32(r_esp, 0x56cdd0u); f_005702e0();
    /* 0056cdd0: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0056cdd6: jmp 0x56cde2 */ goto L_0056cde2;
L_0056cdd8:; BB(0x0056cdd8);
    /* 0056cdd8: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_0056cde2:; BB(0x0056cde2);
    /* 0056cde2: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0056cde8: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0056cdeb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056cdf2: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cdf8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0056cdfb: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
L_0056cdfe:; BB(0x0056cdfe);
    /* 0056cdfe: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce04: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0056ce07: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce0d: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0056ce10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056ce12: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056ce15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ce17u); call_ind(t); }
    /* 0056ce17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce19: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce1f: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0056ce22: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56ce27u); f_005eaf00();
    /* 0056ce27: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce2c: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce31: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce37: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0056ce3a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce40: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0056ce43: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056ce45: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056ce48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ce4au); call_ind(t); }
    /* 0056ce4a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce4c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce52: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0056ce55: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce5b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0056ce5e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056ce60: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056ce63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ce65u); call_ind(t); }
    /* 0056ce65: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce6b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0056ce6e: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce74: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0056ce77: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056ce79: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056ce7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ce7eu); call_ind(t); }
    /* 0056ce7e: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ce84: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ce88: jne 0x56cedf */ if (!fZ) goto L_0056cedf;
L_0056ce8a:; BB(0x0056ce8a);
    /* 0056ce8a: push 0x194 */ { u32 v = 0x194u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce8f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56ce94u); f_00686d82();
    /* 0056ce94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ce97: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0056ce9a: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0056cea1: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cea5: je 0x56ceb9 */ if (fZ) goto L_0056ceb9;
L_0056cea7:; BB(0x0056cea7);
    /* 0056cea7: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cea9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0056ceac: call 0x5702e0 */ r_esp -= 4; W32(r_esp, 0x56ceb1u); f_005702e0();
    /* 0056ceb1: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0056ceb7: jmp 0x56cec3 */ goto L_0056cec3;
L_0056ceb9:; BB(0x0056ceb9);
    /* 0056ceb9: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_0056cec3:; BB(0x0056cec3);
    /* 0056cec3: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 0056cec9: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0056cecc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056ced3: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ced9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0056cedc: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
L_0056cedf:; BB(0x0056cedf);
    /* 0056cedf: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cee5: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0056cee8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056ceee: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0056cef1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056cef3: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056cef6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cef8u); call_ind(t); }
    /* 0056cef8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cefa: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf00: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0056cf03: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56cf08u); f_005eaf00();
    /* 0056cf08: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf0d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf0f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf15: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0056cf18: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf1e: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0056cf21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056cf23: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056cf26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cf28u); call_ind(t); }
    /* 0056cf28: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf2a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf30: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0056cf33: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf39: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0056cf3c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cf3e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056cf41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cf43u); call_ind(t); }
    /* 0056cf43: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf49: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0056cf4c: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf52: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0056cf55: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056cf57: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056cf5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cf5cu); call_ind(t); }
    /* 0056cf5c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cf62: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cf66: jne 0x56cfbd */ if (!fZ) goto L_0056cfbd;
L_0056cf68:; BB(0x0056cf68);
    /* 0056cf68: push 0x194 */ { u32 v = 0x194u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf6d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56cf72u); f_00686d82();
    /* 0056cf72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cf75: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0056cf78: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0056cf7f: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cf83: je 0x56cf97 */ if (fZ) goto L_0056cf97;
L_0056cf85:; BB(0x0056cf85);
    /* 0056cf85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf87: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0056cf8a: call 0x5702e0 */ r_esp -= 4; W32(r_esp, 0x56cf8fu); f_005702e0();
    /* 0056cf8f: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0056cf95: jmp 0x56cfa1 */ goto L_0056cfa1;
L_0056cf97:; BB(0x0056cf97);
    /* 0056cf97: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0056cfa1:; BB(0x0056cfa1);
    /* 0056cfa1: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 0056cfa7: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0056cfaa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056cfb1: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cfb7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0056cfba: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_0056cfbd:; BB(0x0056cfbd);
    /* 0056cfbd: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cfc3: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0056cfc6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cfcc: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0056cfcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056cfd1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056cfd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56cfd6u); call_ind(t); }
    /* 0056cfd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cfd8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cfde: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0056cfe1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56cfe6u); f_005eaf00();
    /* 0056cfe6: push 0x111 */ { u32 v = 0x111u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cfeb: push 0x25f */ { u32 v = 0x25fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cff0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cff6: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0056cff9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056cfff: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0056d002: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d004: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d007: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d009u); call_ind(t); }
    /* 0056d009: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056d00b: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d011: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0056d014: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d01a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0056d01d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d01f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d022: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d024u); call_ind(t); }
    /* 0056d024: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d02a: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0056d02d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d033: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0056d036: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d038: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d03b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d03du); call_ind(t); }
    /* 0056d03d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d043: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d047: jne 0x56d09c */ if (!fZ) goto L_0056d09c;
L_0056d049:; BB(0x0056d049);
    /* 0056d049: push 0x194 */ { u32 v = 0x194u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d04e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d053u); f_00686d82();
    /* 0056d053: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d056: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0056d059: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0056d060: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d064: je 0x56d076 */ if (fZ) goto L_0056d076;
L_0056d066:; BB(0x0056d066);
    /* 0056d066: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0056d069: call 0x570d50 */ r_esp -= 4; W32(r_esp, 0x56d06eu); f_00570d50();
    /* 0056d06e: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0056d074: jmp 0x56d080 */ goto L_0056d080;
L_0056d076:; BB(0x0056d076);
    /* 0056d076: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_0056d080:; BB(0x0056d080);
    /* 0056d080: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 0056d086: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0056d089: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d090: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d096: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0056d099: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
L_0056d09c:; BB(0x0056d09c);
    /* 0056d09c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d09e: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d0a4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0056d0a7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d0acu); f_005eaf00();
    /* 0056d0ac: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d0b2: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056d0b5: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d0bb: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0056d0be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056d0c0: mov ecx, eax */ r_ecx = r_eax;
    /* 0056d0c2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056d0c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d0c7u); call_ind(t); }
    /* 0056d0c7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d0cd: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0056d0d0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d0d6: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056d0d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d0db: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d0de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d0e0u); call_ind(t); }
    /* 0056d0e0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d0e6: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d0ea: jne 0x56d13f */ if (!fZ) goto L_0056d13f;
L_0056d0ec:; BB(0x0056d0ec);
    /* 0056d0ec: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0f1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d0f6u); f_00686d82();
    /* 0056d0f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d0f9: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0056d0fc: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0056d103: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d107: je 0x56d119 */ if (fZ) goto L_0056d119;
L_0056d109:; BB(0x0056d109);
    /* 0056d109: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0056d10c: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56d111u); f_005f5bf0();
    /* 0056d111: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0056d117: jmp 0x56d123 */ goto L_0056d123;
L_0056d119:; BB(0x0056d119);
    /* 0056d119: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_0056d123:; BB(0x0056d123);
    /* 0056d123: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0056d129: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0056d12c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d133: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d139: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0056d13c: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
L_0056d13f:; BB(0x0056d13f);
    /* 0056d13f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d141: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d143: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d149: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0056d14c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d152: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0056d155: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d157: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d15a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d15cu); call_ind(t); }
    /* 0056d15c: push 0x1602e */ { u32 v = 0x1602eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d161: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d167: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0056d16a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d16fu); f_005eaf00();
    /* 0056d16f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d171: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d177: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0056d17a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d180: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0056d183: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d185: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056d18b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d18du); call_ind(t); }
    /* 0056d18d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056d18f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d195: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0056d198: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d19e: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0056d1a1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d1a3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d1a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d1a8u); call_ind(t); }
    /* 0056d1a8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d1ae: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0056d1b1: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d1b7: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0056d1ba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d1bc: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056d1bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d1c1u); call_ind(t); }
    /* 0056d1c1: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d1c7: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0056d1ca: mov dword ptr [edx + 0x178], 8 */ W32((u32)(r_edx+0x178u), 0x8u);
    /* 0056d1d4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d1da: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0056d1dd: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d1e3: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0056d1e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056d1e8: mov ecx, eax */ r_ecx = r_eax;
    /* 0056d1ea: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056d1ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d1efu); call_ind(t); }
    /* 0056d1ef: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d1f5: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d1f9: jne 0x56d24e */ if (!fZ) goto L_0056d24e;
L_0056d1fb:; BB(0x0056d1fb);
    /* 0056d1fb: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d200: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d205u); f_00686d82();
    /* 0056d205: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d208: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0056d20b: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0056d212: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d216: je 0x56d228 */ if (fZ) goto L_0056d228;
L_0056d218:; BB(0x0056d218);
    /* 0056d218: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0056d21b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56d220u); f_005f5bf0();
    /* 0056d220: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0056d226: jmp 0x56d232 */ goto L_0056d232;
L_0056d228:; BB(0x0056d228);
    /* 0056d228: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_0056d232:; BB(0x0056d232);
    /* 0056d232: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0056d238: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0056d23b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d242: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d248: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0056d24b: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0056d24e:; BB(0x0056d24e);
    /* 0056d24e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d250: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d252: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d258: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0056d25b: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d261: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0056d264: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d266: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d269: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d26bu); call_ind(t); }
    /* 0056d26b: push 0x1603c */ { u32 v = 0x1603cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d270: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d276: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0056d279: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d27eu); f_005eaf00();
    /* 0056d27e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d280: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d286: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0056d289: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d28f: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0056d292: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d294: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056d29a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d29cu); call_ind(t); }
    /* 0056d29c: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d2a2: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0056d2a5: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d2ab: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056d2ae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d2b0: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056d2b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d2b5u); call_ind(t); }
    /* 0056d2b5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056d2b7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d2bd: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0056d2c0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d2c6: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056d2c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d2cb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d2ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d2d0u); call_ind(t); }
    /* 0056d2d0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d2d6: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0056d2d9: mov dword ptr [edx + 0x178], 0xb */ W32((u32)(r_edx+0x178u), 0xbu);
    /* 0056d2e3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d2e5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d2eau); f_00686d82();
    /* 0056d2ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d2ed: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0056d2f0: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0056d2f7: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d2fb: je 0x56d30f */ if (fZ) goto L_0056d30f;
L_0056d2fd:; BB(0x0056d2fd);
    /* 0056d2fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d2ff: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0056d302: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x56d307u); f_00600a70();
    /* 0056d307: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0056d30d: jmp 0x56d319 */ goto L_0056d319;
L_0056d30f:; BB(0x0056d30f);
    /* 0056d30f: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0056d319:; BB(0x0056d319);
    /* 0056d319: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 0056d31f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0056d322: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d329: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0056d32c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d32d: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d333: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 0056d336: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56d33bu); f_005f5d50();
    /* 0056d33b: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d341: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056d344: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d34a: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0056d34d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056d34f: mov ecx, eax */ r_ecx = r_eax;
    /* 0056d351: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d354: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d356u); call_ind(t); }
    /* 0056d356: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d35c: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d360: jne 0x56d3c4 */ if (!fZ) goto L_0056d3c4;
L_0056d362:; BB(0x0056d362);
    /* 0056d362: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d367: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d36cu); f_00686d82();
    /* 0056d36c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d36f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0056d375: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0056d37c: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d383: je 0x56d398 */ if (fZ) goto L_0056d398;
L_0056d385:; BB(0x0056d385);
    /* 0056d385: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0056d38b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56d390u); f_005f5bf0();
    /* 0056d390: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0056d396: jmp 0x56d3a2 */ goto L_0056d3a2;
L_0056d398:; BB(0x0056d398);
    /* 0056d398: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0056d3a2:; BB(0x0056d3a2);
    /* 0056d3a2: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0056d3a8: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0056d3ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d3b5: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d3bb: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0056d3c1: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
L_0056d3c4:; BB(0x0056d3c4);
    /* 0056d3c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3c8: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d3ce: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d3d1: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d3d7: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056d3da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d3dc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d3df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d3e1u); call_ind(t); }
    /* 0056d3e1: push 0x1603d */ { u32 v = 0x1603du; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3e6: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d3ec: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056d3ef: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d3f4u); f_005eaf00();
    /* 0056d3f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3f6: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d3fc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d3ff: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d405: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056d408: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d40a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056d410: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d412u); call_ind(t); }
    /* 0056d412: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d418: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0056d41b: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d421: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056d424: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d426: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056d429: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d42bu); call_ind(t); }
    /* 0056d42b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056d42d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d433: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0056d436: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d43c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056d43f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d441: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d444: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d446u); call_ind(t); }
    /* 0056d446: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d44c: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0056d44f: mov dword ptr [edx + 0x178], 0xd */ W32((u32)(r_edx+0x178u), 0xdu);
    /* 0056d459: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d45b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d460u); f_00686d82();
    /* 0056d460: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d463: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0056d469: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0056d470: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d477: je 0x56d48e */ if (fZ) goto L_0056d48e;
L_0056d479:; BB(0x0056d479);
    /* 0056d479: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d47b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0056d481: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x56d486u); f_00600a70();
    /* 0056d486: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0056d48c: jmp 0x56d498 */ goto L_0056d498;
L_0056d48e:; BB(0x0056d48e);
    /* 0056d48e: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0056d498:; BB(0x0056d498);
    /* 0056d498: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 0056d49e: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0056d4a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d4ab: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0056d4b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d4b2: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d4b8: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0056d4bb: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56d4c0u); f_005f5d50();
    /* 0056d4c0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d4c6: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056d4c9: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d4cf: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d4d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056d4d4: mov ecx, eax */ r_ecx = r_eax;
    /* 0056d4d6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d4d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d4dbu); call_ind(t); }
    /* 0056d4db: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d4e1: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d4e5: jne 0x56d549 */ if (!fZ) goto L_0056d549;
L_0056d4e7:; BB(0x0056d4e7);
    /* 0056d4e7: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d4ec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d4f1u); f_00686d82();
    /* 0056d4f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d4f4: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0056d4fa: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 0056d501: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d508: je 0x56d51d */ if (fZ) goto L_0056d51d;
L_0056d50a:; BB(0x0056d50a);
    /* 0056d50a: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0056d510: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x56d515u); f_005f5bf0();
    /* 0056d515: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0056d51b: jmp 0x56d527 */ goto L_0056d527;
L_0056d51d:; BB(0x0056d51d);
    /* 0056d51d: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_0056d527:; BB(0x0056d527);
    /* 0056d527: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0056d52d: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0056d533: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d53a: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d540: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0056d546: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
L_0056d549:; BB(0x0056d549);
    /* 0056d549: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d54b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d54d: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d553: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056d556: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d55c: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0056d55f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d561: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d564: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d566u); call_ind(t); }
    /* 0056d566: push 0x1603f */ { u32 v = 0x1603fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d56b: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d571: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0056d574: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d579u); f_005eaf00();
    /* 0056d579: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d57b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d581: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056d584: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d58a: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0056d58d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d58f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056d595: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d597u); call_ind(t); }
    /* 0056d597: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d59d: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0056d5a0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d5a6: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0056d5a9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d5ab: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056d5ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d5b0u); call_ind(t); }
    /* 0056d5b0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5b2: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d5b8: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0056d5bb: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d5c1: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0056d5c4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d5c6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d5c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d5cbu); call_ind(t); }
    /* 0056d5cb: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d5d1: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0056d5d4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d5da: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0056d5dd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d5df: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d5e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d5e4u); call_ind(t); }
    /* 0056d5e4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d5ea: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d5ee: jne 0x56d652 */ if (!fZ) goto L_0056d652;
L_0056d5f0:; BB(0x0056d5f0);
    /* 0056d5f0: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5f5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d5fau); f_00686d82();
    /* 0056d5fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d5fd: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0056d603: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 0056d60a: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d611: je 0x56d626 */ if (fZ) goto L_0056d626;
L_0056d613:; BB(0x0056d613);
    /* 0056d613: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0056d619: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x56d61eu); f_005eaaf0();
    /* 0056d61e: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0056d624: jmp 0x56d630 */ goto L_0056d630;
L_0056d626:; BB(0x0056d626);
    /* 0056d626: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_0056d630:; BB(0x0056d630);
    /* 0056d630: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0056d636: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0056d63c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d643: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d649: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0056d64f: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
L_0056d652:; BB(0x0056d652);
    /* 0056d652: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d654: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d656: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d65c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d65f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d665: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0056d668: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d66a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d66d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d66fu); call_ind(t); }
    /* 0056d66f: push 0x1603b */ { u32 v = 0x1603bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d674: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d67a: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0056d67d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d682u); f_005eaf00();
    /* 0056d682: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d684: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d68a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d68d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d693: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0056d696: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d698: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056d69e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d6a0u); call_ind(t); }
    /* 0056d6a0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d6a6: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0056d6a9: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d6af: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0056d6b2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d6b4: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056d6b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d6b9u); call_ind(t); }
    /* 0056d6b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d6bb: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d6c1: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0056d6c4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d6ca: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0056d6cd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d6cf: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d6d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d6d4u); call_ind(t); }
    /* 0056d6d4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d6da: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0056d6dd: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d6e3: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0056d6e6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d6e8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d6eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d6edu); call_ind(t); }
    /* 0056d6ed: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d6f3: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d6f7: jne 0x56d75b */ if (!fZ) goto L_0056d75b;
L_0056d6f9:; BB(0x0056d6f9);
    /* 0056d6f9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d6fe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d703u); f_00686d82();
    /* 0056d703: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d706: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0056d70c: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 0056d713: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d71a: je 0x56d72f */ if (fZ) goto L_0056d72f;
L_0056d71c:; BB(0x0056d71c);
    /* 0056d71c: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0056d722: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x56d727u); f_005eaaf0();
    /* 0056d727: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0056d72d: jmp 0x56d739 */ goto L_0056d739;
L_0056d72f:; BB(0x0056d72f);
    /* 0056d72f: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_0056d739:; BB(0x0056d739);
    /* 0056d739: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 0056d73f: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0056d745: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d74c: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d752: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0056d758: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
L_0056d75b:; BB(0x0056d75b);
    /* 0056d75b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d75d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d75f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d765: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0056d768: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d76e: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 0056d771: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056d773: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d776: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d778u); call_ind(t); }
    /* 0056d778: push 0x16047 */ { u32 v = 0x16047u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d77d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d783: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 0056d786: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d78bu); f_005eaf00();
    /* 0056d78b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d791: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0056d797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d798: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d79e: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0056d7a1: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d7a7: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0056d7aa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d7ac: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056d7b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d7b4u); call_ind(t); }
    /* 0056d7b4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d7ba: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0056d7bd: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d7c3: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0056d7c6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d7c8: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0056d7cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d7cdu); call_ind(t); }
    /* 0056d7cd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056d7cf: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d7d5: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0056d7d8: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d7de: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0056d7e1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d7e3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d7e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d7e8u); call_ind(t); }
    /* 0056d7e8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d7ee: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0056d7f1: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d7f7: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0056d7fa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d7fc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056d7ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d801u); call_ind(t); }
    /* 0056d801: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056d807: jmp 0x56d815 */ goto L_0056d815;
L_0056d809:; BB(0x0056d809);
    /* 0056d809: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0056d80d: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056d811: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_0056d815:; BB(0x0056d815);
    /* 0056d815: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d819: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d81c: jge 0x56d971 */ if ((fS==fO)) goto L_0056d971;
L_0056d822:; BB(0x0056d822);
    /* 0056d822: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d826: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d82c: cmp dword ptr [ecx + eax*4 + 0x7c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d831: jne 0x56d89a */ if (!fZ) goto L_0056d89a;
L_0056d833:; BB(0x0056d833);
    /* 0056d833: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d838: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56d83du); f_00686d82();
    /* 0056d83d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d840: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0056d846: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 0056d84d: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d854: je 0x56d869 */ if (fZ) goto L_0056d869;
L_0056d856:; BB(0x0056d856);
    /* 0056d856: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0056d85c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x56d861u); f_005eaaf0();
    /* 0056d861: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 0056d867: jmp 0x56d873 */ goto L_0056d873;
L_0056d869:; BB(0x0056d869);
    /* 0056d869: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_0056d873:; BB(0x0056d873);
    /* 0056d873: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0056d879: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0056d87f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d886: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d88a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d890: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056d896: mov dword ptr [ecx + eax*4 + 0x7c], edx */ W32((u32)(r_ecx+r_eax*4+0x7cu), r_edx);
L_0056d89a:; BB(0x0056d89a);
    /* 0056d89a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d89c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d89e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d8a2: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d8a8: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056d8ac: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d8b0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d8b6: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056d8ba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d8bc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056d8bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d8c1u); call_ind(t); }
    /* 0056d8c1: push 0x1603e */ { u32 v = 0x1603eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8c6: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d8ca: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d8d0: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056d8d4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x56d8d9u); f_005eaf00();
    /* 0056d8d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8db: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d8df: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d8e5: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056d8e9: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d8ed: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d8f3: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056d8f7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d8f9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056d8ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d901u); call_ind(t); }
    /* 0056d901: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d905: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d90b: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056d90f: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d913: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d919: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056d91d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056d91f: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0056d922: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56d924u); call_ind(t); }
    /* 0056d924: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056d926: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d92a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d930: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056d934: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d938: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d93e: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056d942: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d944: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056d947: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d949u); call_ind(t); }
    /* 0056d949: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d94d: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d953: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056d957: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056d95b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056d961: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056d965: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056d967: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056d96a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56d96cu); call_ind(t); }
    /* 0056d96c: jmp 0x56d809 */ goto L_0056d809;
L_0056d971:; BB(0x0056d971);
    /* 0056d971: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d973: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056d978: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056d97b: mov edx, dword ptr [0x79344c] */ r_edx = R32((u32)(0x79344cu));
    /* 0056d981: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056d984: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056d986: mov ecx, eax */ r_ecx = r_eax;
    /* 0056d988: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056d98b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d98du); call_ind(t); }
    /* 0056d98d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d98f: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056d995: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056d998: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056d99d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056d9a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056d9a2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0056d9a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56d9a7u); call_ind(t); }
    /* 0056d9a7: push 0x749848 */ { u32 v = 0x749848u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9ac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9ae: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0056d9b4: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x56d9b9u); f_0057ab80();
    /* 0056d9b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056d9bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056d9c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056d9c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056d9c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d9c7: ret  */ FN_RET(0x0056c370); r_esp += 4; return;
}

