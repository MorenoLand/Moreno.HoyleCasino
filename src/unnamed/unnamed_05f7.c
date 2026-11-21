#include "protos.h"

void f_005f7340(void) /* sub_5F7340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f7340);
    /* 005f7340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7341: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7343: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7346: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f7347: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f734a: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f734f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f7352: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f7357u); f_005f8550();
    /* 005f7357: mov esi, eax */ r_esi = r_eax;
    /* 005f7359: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f735c: call 0x5f8590 */ r_esp -= 4; W32(r_esp, 0x5f7361u); f_005f8590();
    /* 005f7361: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f7363: mov eax, esi */ r_eax = r_esi;
    /* 005f7365: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f7366: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f7368: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f736a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f736d: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f7373: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f7376: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f737bu); f_005f8570();
    /* 005f737b: mov esi, eax */ r_esi = r_eax;
    /* 005f737d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7380: call 0x5f85b0 */ r_esp -= 4; W32(r_esp, 0x5f7385u); f_005f85b0();
    /* 005f7385: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f7387: mov eax, esi */ r_eax = r_esi;
    /* 005f7389: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f738a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f738c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f738e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f7391: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 005f7395: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f7398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7399: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 005f739d: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f73a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f73a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f73a4: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x5f73a9u); f_005f8420();
    /* 005f73a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f73ac: cmp dword ptr [ecx + 0x1b4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f73b3: je 0x5f73cc */ if (fZ) goto L_005f73cc;
L_005f73b5:; BB(0x005f73b5);
    /* 005f73b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f73b8: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f73bdu); f_005f8550();
    /* 005f73bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f73be: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f73c1: mov ecx, dword ptr [edx + 0x1b4] */ r_ecx = R32((u32)(r_edx+0x1b4u));
    /* 005f73c7: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5f73ccu); f_005ecc60();
L_005f73cc:; BB(0x005f73cc);
    /* 005f73cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f73cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005f73cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f73d0: ret 8 */ FN_RET(0x005f7340); r_esp += 12; return;
}

void f_005f73e0(void) /* sub_5F73E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f73e0);
    /* 005f73e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f73e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f73e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f73e5: push 0x6aa00e */ { u32 v = 0x6aa00eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f73ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f73f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f73f1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f73f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f73f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f73fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f73fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f73ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f7405: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f7408: mov dword ptr [ebp - 0x14], 7 */ W32((u32)(r_ebp+0xffffffecu), 0x7u);
    /* 005f740f: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 005f7416: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7419: cmp dword ptr [eax + 0x1b4], 0 */ {  u32 a = R32((u32)(r_eax+0x1b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7420: jne 0x5f746c */ if (!fZ) goto L_005f746c;
L_005f7422:; BB(0x005f7422);
    /* 005f7422: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7427: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f742cu); f_00686d82();
    /* 005f742c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f742f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f7432: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7439: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f743d: je 0x5f744c */ if (fZ) goto L_005f744c;
L_005f743f:; BB(0x005f743f);
    /* 005f743f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7442: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5f7447u); f_005ec5a0();
    /* 005f7447: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f744a: jmp 0x5f7453 */ goto L_005f7453;
L_005f744c:; BB(0x005f744c);
    /* 005f744c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f7453:; BB(0x005f7453);
    /* 005f7453: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f7456: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f7459: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f7460: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7463: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7466: mov dword ptr [edx + 0x1b4], eax */ W32((u32)(r_edx+0x1b4u), r_eax);
L_005f746c:; BB(0x005f746c);
    /* 005f746c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f746f: mov edx, dword ptr [ecx + 0x1b4] */ r_edx = R32((u32)(r_ecx+0x1b4u));
    /* 005f7475: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7478: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005f747b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f747d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005f747f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7481: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f7484: add ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7487: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7488: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f748b: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f748e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f748f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7491: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7494: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f7499u); f_005f8550();
    /* 005f7499: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f749c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f749d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f74a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f74a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f74a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f74a5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f74a8: mov ecx, dword ptr [edx + 0x1b4] */ r_ecx = R32((u32)(r_edx+0x1b4u));
    /* 005f74ae: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5f74b3u); f_005ec8f0();
    /* 005f74b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f74b6: mov ecx, dword ptr [eax + 0x1b4] */ r_ecx = R32((u32)(r_eax+0x1b4u));
    /* 005f74bc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f74bf: mov eax, dword ptr [edx + 0x1b4] */ r_eax = R32((u32)(r_edx+0x1b4u));
    /* 005f74c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f74c7: mov ecx, eax */ r_ecx = r_eax;
    /* 005f74c9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f74cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f74ceu); call_ind(t); }
    /* 005f74ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f74d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f74d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f74d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f74db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f74dc: ret 0x10 */ FN_RET(0x005f73e0); r_esp += 20; return;
}

void f_005f7d50(void) /* sub_5F7D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f7d50);
    /* 005f7d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7d53: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7d56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f7d59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7d5c: call 0x5fb0c0 */ r_esp -= 4; W32(r_esp, 0x5f7d61u); f_005fb0c0();
    /* 005f7d61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7d64: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f7d6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d6b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7d6e: call 0x5f8ce0 */ r_esp -= 4; W32(r_esp, 0x5f7d73u); f_005f8ce0();
L_005f7d73:; BB(0x005f7d73);
    /* 005f7d73: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7d76: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7d7c: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7d81u); f_0060c9a0();
    /* 005f7d81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7d83: je 0x5f7dc0 */ if (fZ) goto L_005f7dc0;
L_005f7d85:; BB(0x005f7d85);
    /* 005f7d85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d87: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7d8a: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7d90: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f7d95u); f_0060ca40();
    /* 005f7d95: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f7d98: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7d9b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f7d9e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7da2: je 0x5f7db7 */ if (fZ) goto L_005f7db7;
L_005f7da4:; BB(0x005f7da4);
    /* 005f7da4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7da6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7da9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f7dab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7dae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f7db0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7db2u); call_ind(t); }
    /* 005f7db2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f7db5: jmp 0x5f7dbe */ goto L_005f7dbe;
L_005f7db7:; BB(0x005f7db7);
    /* 005f7db7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f7dbe:; BB(0x005f7dbe);
    /* 005f7dbe: jmp 0x5f7d73 */ goto L_005f7d73;
L_005f7dc0:; BB(0x005f7dc0);
    /* 005f7dc0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7dc3: cmp dword ptr [ecx + 0x14c], 0 */ {  u32 a = R32((u32)(r_ecx+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7dca: je 0x5f7de4 */ if (fZ) goto L_005f7de4;
L_005f7dcc:; BB(0x005f7dcc);
    /* 005f7dcc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7dcf: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 005f7dd5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f7dd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7ddb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ddc: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5f7de1u); f_00686cae();
    /* 005f7de1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f7de4:; BB(0x005f7de4);
    /* 005f7de4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7de7: mov dword ptr [edx + 0x14c], 0 */ W32((u32)(r_edx+0x14cu), 0x0u);
    /* 005f7df1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7df4: mov dword ptr [eax + 0x150], 0 */ W32((u32)(r_eax+0x150u), 0x0u);
    /* 005f7dfe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7e01: mov dword ptr [ecx + 0x154], 0 */ W32((u32)(r_ecx+0x154u), 0x0u);
L_005f7e0b:; BB(0x005f7e0b);
    /* 005f7e0b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7e0e: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7e14: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7e19u); f_0060c9a0();
    /* 005f7e19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7e1b: je 0x5f7e58 */ if (fZ) goto L_005f7e58;
L_005f7e1d:; BB(0x005f7e1d);
    /* 005f7e1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e1f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7e22: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7e28: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f7e2du); f_0060ca40();
    /* 005f7e2d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f7e30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7e33: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f7e36: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7e3a: je 0x5f7e4f */ if (fZ) goto L_005f7e4f;
L_005f7e3c:; BB(0x005f7e3c);
    /* 005f7e3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e3e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f7e41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f7e43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f7e46: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f7e48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7e4au); call_ind(t); }
    /* 005f7e4a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f7e4d: jmp 0x5f7e56 */ goto L_005f7e56;
L_005f7e4f:; BB(0x005f7e4f);
    /* 005f7e4f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005f7e56:; BB(0x005f7e56);
    /* 005f7e56: jmp 0x5f7e0b */ goto L_005f7e0b;
L_005f7e58:; BB(0x005f7e58);
    /* 005f7e58: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7e5b: mov dword ptr [ecx + 0x16c], 0 */ W32((u32)(r_ecx+0x16cu), 0x0u);
    /* 005f7e65: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7e68: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f7e6du); f_005f9a80();
    /* 005f7e6d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7e6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7e70: ret  */ FN_RET(0x005f7d50); r_esp += 4; return;
}

