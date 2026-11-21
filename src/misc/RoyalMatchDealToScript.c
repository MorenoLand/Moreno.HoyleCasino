#include "protos.h"

void f_005aadf0(void) /* RoyalMatchDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aadf0);
    /* 005aadf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aadf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005aadf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aadf5: push 0x6a7b88 */ { u32 v = 0x6a7b88u; r_esp -= 4; W32(r_esp, v); }
    /* 005aadfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aae00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aae01: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aae04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aae09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aae0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aae0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005aae0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005aae15: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005aae18: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005aae1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aae1c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aae1f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5aae24u); f_005fc0d0();
    /* 005aae24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aae2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aae2e: mov dword ptr [ecx], 0x6cfcd8 */ W32((u32)(r_ecx), 0x6cfcd8u);
    /* 005aae34: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aae37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aae3a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005aae3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aae40: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005aae43: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 005aae46: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aae49: mov byte ptr [eax + 0x25], 0 */ W8((u32)(r_eax+0x25u), 0x0u);
    /* 005aae4d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aae50: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005aae53: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005aae56: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005aae5a: ja 0x5aaece */ if ((!fC&&!fZ)) goto L_005aaece;
L_005aae5c:; BB(0x005aae5c);
    /* 005aae5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aae5f: jmp dword ptr [eax*4 + 0x5aaf90] */ { u32 t = R32((u32)(r_eax*4+0x5aaf90u)); switch (t) { case 0x5aae7bu: goto L_005aae7b; case 0x5aae90u: goto L_005aae90; case 0x5aae66u: goto L_005aae66; case 0x5aaea4u: goto L_005aaea4; case 0x5aaeb9u: goto L_005aaeb9; default: UNSUP(0x005aae5f, "jump table entry is not a known target"); } }
L_005aae66:; BB(0x005aae66);
    /* 005aae66: push 0x13a7 */ { u32 v = 0x13a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005aae6b: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aae71: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aae74: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aae79u); f_005eaf00();
    /* 005aae79: jmp 0x5aaee9 */ goto L_005aaee9;
L_005aae7b:; BB(0x005aae7b);
    /* 005aae7b: push 0x13a8 */ { u32 v = 0x13a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005aae80: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aae86: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005aae89: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aae8eu); f_005eaf00();
    /* 005aae8e: jmp 0x5aaee9 */ goto L_005aaee9;
L_005aae90:; BB(0x005aae90);
    /* 005aae90: push 0x13a9 */ { u32 v = 0x13a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005aae95: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aae9a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aae9d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aaea2u); f_005eaf00();
    /* 005aaea2: jmp 0x5aaee9 */ goto L_005aaee9;
L_005aaea4:; BB(0x005aaea4);
    /* 005aaea4: push 0x13aa */ { u32 v = 0x13aau; r_esp -= 4; W32(r_esp, v); }
    /* 005aaea9: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aaeaf: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aaeb2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aaeb7u); f_005eaf00();
    /* 005aaeb7: jmp 0x5aaee9 */ goto L_005aaee9;
L_005aaeb9:; BB(0x005aaeb9);
    /* 005aaeb9: push 0x13ab */ { u32 v = 0x13abu; r_esp -= 4; W32(r_esp, v); }
    /* 005aaebe: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aaec4: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005aaec7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aaeccu); f_005eaf00();
    /* 005aaecc: jmp 0x5aaee9 */ goto L_005aaee9;
L_005aaece:; BB(0x005aaece);
    /* 005aaece: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005aaed0: jne 0x5aaee9 */ if (!fZ) goto L_005aaee9;
L_005aaed2:; BB(0x005aaed2);
    /* 005aaed2: push 0x4b3 */ { u32 v = 0x4b3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaed7: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaedc: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaee1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5aaee6u); f_005e9f20();
    /* 005aaee6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aaee9:; BB(0x005aaee9);
    /* 005aaee9: push 0x13a6 */ { u32 v = 0x13a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaeee: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aaef4: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005aaef7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aaefcu); f_005eaf00();
    /* 005aaefc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaefe: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aaf03: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aaf06: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aaf0c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005aaf0f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aaf11: mov ecx, eax */ r_ecx = r_eax;
    /* 005aaf13: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aaf19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aaf1bu); call_ind(t); }
    /* 005aaf1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaf1d: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aaf23: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aaf26: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aaf2b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aaf2e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aaf30: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aaf36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aaf38u); call_ind(t); }
    /* 005aaf38: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaf3d: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aaf43: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005aaf46: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aaf4b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aaf4e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aaf50: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005aaf53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aaf55u); call_ind(t); }
    /* 005aaf55: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaf5a: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aaf60: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aaf63: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aaf68: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aaf6b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aaf6d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005aaf70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aaf72u); call_ind(t); }
    /* 005aaf72: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aaf79: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aaf7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aaf7f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aaf86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aaf87: mov esp, ebp */ r_esp = r_ebp;
    /* 005aaf89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aaf8a: ret 0xc */ FN_RET(0x005aadf0); r_esp += 16; return;
}

void f_005aafb0(void) /* RoyalMatchDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aafb0);
    /* 005aafb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aafb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005aafb3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aafb6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005aafb9: mov dword ptr [ebp - 0x2c], 0x18a8b */ W32((u32)(r_ebp+0xffffffd4u), 0x18a8bu);
    /* 005aafc0: mov dword ptr [ebp - 0x28], 0x18a8c */ W32((u32)(r_ebp+0xffffffd8u), 0x18a8cu);
    /* 005aafc7: mov dword ptr [ebp - 0x24], 0x18a8d */ W32((u32)(r_ebp+0xffffffdcu), 0x18a8du);
    /* 005aafce: mov dword ptr [ebp - 0x18], 6 */ W32((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 005aafd5: mov dword ptr [ebp - 0x14], 6 */ W32((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 005aafdc: mov dword ptr [ebp - 0x10], 6 */ W32((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 005aafe3: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 005aafea: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 005aaff1: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005aaff8: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aaffd: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005ab000: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ab003: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005ab009: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005ab00c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ab00f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab012: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5ab017u); f_005fc360();
    /* 005ab017: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ab01a: cmp dword ptr [ebp - 0x34], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ab01e: ja 0x5ab3da */ if ((!fC&&!fZ)) goto L_005ab3da;
L_005ab024:; BB(0x005ab024);
    /* 005ab024: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ab027: jmp dword ptr [ecx*4 + 0x5ab3fc] */ { u32 t = R32((u32)(r_ecx*4+0x5ab3fcu)); switch (t) { case 0x5ab02eu: goto L_005ab02e; case 0x5ab0b6u: goto L_005ab0b6; case 0x5ab211u: goto L_005ab211; case 0x5ab289u: goto L_005ab289; case 0x5ab389u: goto L_005ab389; default: UNSUP(0x005ab027, "jump table entry is not a known target"); } }
L_005ab02e:; BB(0x005ab02e);
    /* 005ab02e: mov dword ptr [0x7935f0], 0 */ W32((u32)(0x7935f0u), 0x0u);
    /* 005ab038: mov dword ptr [0x7935ec], 0 */ W32((u32)(0x7935ecu), 0x0u);
    /* 005ab042: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab045: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5ab04au); f_005eb240();
    /* 005ab04a: mov dword ptr [0x7935e8], eax */ W32((u32)(0x7935e8u), r_eax);
    /* 005ab04f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab052: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5ab057u); f_005eb240();
    /* 005ab057: mov dword ptr [0x7935e4], eax */ W32((u32)(0x7935e4u), r_eax);
    /* 005ab05c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab05e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab061: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ab063: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab066: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005ab06c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ab06eu); call_ind(t); }
    /* 005ab06e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab070: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab073: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab075: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab078: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ab07e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab080u); call_ind(t); }
    /* 005ab080: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab086: call 0x5b6790 */ r_esp -= 4; W32(r_esp, 0x5ab08bu); f_005b6790();
    /* 005ab08b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab091: cmp dword ptr [ecx + 0x5b0], eax */ {  u32 a = R32((u32)(r_ecx+0x5b0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab097: jne 0x5ab0a0 */ if (!fZ) goto L_005ab0a0;
L_005ab099:; BB(0x005ab099);
    /* 005ab099: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab09c: mov byte ptr [edx + 0x25], 1 */ W8((u32)(r_edx+0x25u), 0x1u);
L_005ab0a0:; BB(0x005ab0a0);
    /* 005ab0a0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab0a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab0a4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab0a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab0a9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab0ac: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ab0af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab0b1u); call_ind(t); }
    /* 005ab0b1: jmp 0x5ab3f5 */ goto L_005ab3f5;
L_005ab0b6:; BB(0x005ab0b6);
    /* 005ab0b6: mov ecx, dword ptr [0x7935f0] */ r_ecx = R32((u32)(0x7935f0u));
    /* 005ab0bc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ab0bf: mov dword ptr [0x7935f0], ecx */ W32((u32)(0x7935f0u), r_ecx);
    /* 005ab0c5: mov edx, dword ptr [0x7935f0] */ r_edx = R32((u32)(0x7935f0u));
    /* 005ab0cb: cmp edx, dword ptr [0x7935e8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x7935e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab0d1: jg 0x5ab0e9 */ if ((!fZ&&fS==fO)) goto L_005ab0e9;
L_005ab0d3:; BB(0x005ab0d3);
    /* 005ab0d3: mov eax, dword ptr [0x7935f0] */ r_eax = R32((u32)(0x7935f0u));
    /* 005ab0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab0d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab0dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab0de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab0e1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ab0e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab0e9u); call_ind(t); }
L_005ab0e9:; BB(0x005ab0e9);
    /* 005ab0e9: mov ecx, dword ptr [0x7935f0] */ r_ecx = R32((u32)(0x7935f0u));
    /* 005ab0ef: cmp ecx, dword ptr [0x7935e4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7935e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab0f5: jg 0x5ab10e */ if ((!fZ&&fS==fO)) goto L_005ab10e;
L_005ab0f7:; BB(0x005ab0f7);
    /* 005ab0f7: mov edx, dword ptr [0x7935f0] */ r_edx = R32((u32)(0x7935f0u));
    /* 005ab0fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab0fe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab101: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab103: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab106: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ab10c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab10eu); call_ind(t); }
L_005ab10e:; BB(0x005ab10e);
    /* 005ab10e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab111: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005ab114: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 005ab118: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ab11b: cmp dword ptr [0x7935f0], eax */ {  u32 a = R32((u32)(0x7935f0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab121: jne 0x5ab164 */ if (!fZ) goto L_005ab164;
L_005ab123:; BB(0x005ab123);
    /* 005ab123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab125: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab126: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005ab12c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005ab12f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab130: fld1  */ FPUSH(1.0);
    /* 005ab132: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005ab135: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab137: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab139: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab13b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab13d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab13f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5ab144u); f_0062fbf0();
    /* 005ab144: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ab147: mov ecx, dword ptr [ebp + eax*4 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd4u));
    /* 005ab14b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab14c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005ab152: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ab154: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ab15a: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005ab160: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ab162u); call_ind(t); }
    /* 005ab162: jmp 0x5ab1a6 */ goto L_005ab1a6;
L_005ab164:; BB(0x005ab164);
    /* 005ab164: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab167: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005ab16a: mov edx, dword ptr [0x7935f0] */ r_edx = R32((u32)(0x7935f0u));
    /* 005ab170: cmp edx, dword ptr [ebp + ecx*4 - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab174: jne 0x5ab1a6 */ if (!fZ) goto L_005ab1a6;
L_005ab176:; BB(0x005ab176);
    /* 005ab176: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab178: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005ab17d: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005ab183: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x5ab188u); f_006436c0();
    /* 005ab188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab189: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab18c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005ab18f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab190: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab196: call 0x5b31b0 */ r_esp -= 4; W32(r_esp, 0x5ab19bu); f_005b31b0();
    /* 005ab19b: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ab1a1: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5ab1a6u); f_005a7ea0();
L_005ab1a6:; BB(0x005ab1a6);
    /* 005ab1a6: mov eax, dword ptr [0x7935f0] */ r_eax = R32((u32)(0x7935f0u));
    /* 005ab1ab: cmp eax, dword ptr [0x7935e8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x7935e8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab1b1: jl 0x5ab1c1 */ if ((fS!=fO)) goto L_005ab1c1;
L_005ab1b3:; BB(0x005ab1b3);
    /* 005ab1b3: mov ecx, dword ptr [0x7935f0] */ r_ecx = R32((u32)(0x7935f0u));
    /* 005ab1b9: cmp ecx, dword ptr [0x7935e4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7935e4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab1bf: jge 0x5ab1d2 */ if ((fS==fO)) goto L_005ab1d2;
L_005ab1c1:; BB(0x005ab1c1);
    /* 005ab1c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1c3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab1c6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ab1c8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab1cb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ab1ce: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ab1d0u); call_ind(t); }
    /* 005ab1d0: jmp 0x5ab1fd */ goto L_005ab1fd;
L_005ab1d2:; BB(0x005ab1d2);
    /* 005ab1d2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab1d5: movzx ecx, byte ptr [eax + 0x25] */ r_ecx = (u32)R8((u32)(r_eax+0x25u));
    /* 005ab1d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab1db: je 0x5ab1ee */ if (fZ) goto L_005ab1ee;
L_005ab1dd:; BB(0x005ab1dd);
    /* 005ab1dd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1df: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab1e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ab1e4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab1e7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ab1ea: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ab1ecu); call_ind(t); }
    /* 005ab1ec: jmp 0x5ab1fd */ goto L_005ab1fd;
L_005ab1ee:; BB(0x005ab1ee);
    /* 005ab1ee: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1f0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab1f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab1f5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab1f8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ab1fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab1fdu); call_ind(t); }
L_005ab1fd:; BB(0x005ab1fd);
    /* 005ab1fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1ff: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab202: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab204: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab207: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ab20a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab20cu); call_ind(t); }
    /* 005ab20c: jmp 0x5ab3f5 */ goto L_005ab3f5;
L_005ab211:; BB(0x005ab211);
    /* 005ab211: mov dword ptr [0x7935f0], 0 */ W32((u32)(0x7935f0u), 0x0u);
    /* 005ab21b: push 0x13af */ { u32 v = 0x13afu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab220: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab223: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5ab228u); f_005eaf00();
    /* 005ab228: push 0x13ae */ { u32 v = 0x13aeu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab22d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab230: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5ab235u); f_005eaf00();
    /* 005ab235: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab237: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab23a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab23c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab23f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ab245: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab247u); call_ind(t); }
    /* 005ab247: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab249: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab24c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab24e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab251: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ab257: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab259u); call_ind(t); }
    /* 005ab259: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab25c: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5ab261u); f_005eb240();
    /* 005ab261: mov dword ptr [0x7935e8], eax */ W32((u32)(0x7935e8u), r_eax);
    /* 005ab266: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab269: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5ab26eu); f_005eb240();
    /* 005ab26e: mov dword ptr [0x7935e4], eax */ W32((u32)(0x7935e4u), r_eax);
    /* 005ab273: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab275: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab277: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab27a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab27c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab27f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ab282: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab284u); call_ind(t); }
    /* 005ab284: jmp 0x5ab3f5 */ goto L_005ab3f5;
L_005ab289:; BB(0x005ab289);
    /* 005ab289: mov ecx, dword ptr [0x7935f0] */ r_ecx = R32((u32)(0x7935f0u));
    /* 005ab28f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ab292: mov dword ptr [0x7935f0], ecx */ W32((u32)(0x7935f0u), r_ecx);
    /* 005ab298: mov edx, dword ptr [0x7935f0] */ r_edx = R32((u32)(0x7935f0u));
    /* 005ab29e: cmp edx, dword ptr [0x7935e8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x7935e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab2a4: jg 0x5ab2bc */ if ((!fZ&&fS==fO)) goto L_005ab2bc;
L_005ab2a6:; BB(0x005ab2a6);
    /* 005ab2a6: mov eax, dword ptr [0x7935f0] */ r_eax = R32((u32)(0x7935f0u));
    /* 005ab2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab2ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab2af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab2b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab2b4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ab2ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab2bcu); call_ind(t); }
L_005ab2bc:; BB(0x005ab2bc);
    /* 005ab2bc: mov ecx, dword ptr [0x7935f0] */ r_ecx = R32((u32)(0x7935f0u));
    /* 005ab2c2: cmp ecx, dword ptr [0x7935e4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7935e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab2c8: jg 0x5ab2e1 */ if ((!fZ&&fS==fO)) goto L_005ab2e1;
L_005ab2ca:; BB(0x005ab2ca);
    /* 005ab2ca: mov edx, dword ptr [0x7935f0] */ r_edx = R32((u32)(0x7935f0u));
    /* 005ab2d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab2d1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab2d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab2d6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab2d9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ab2df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab2e1u); call_ind(t); }
L_005ab2e1:; BB(0x005ab2e1);
    /* 005ab2e1: cmp dword ptr [0x7935f0], 3 */ {  u32 a = R32((u32)(0x7935f0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab2e8: jne 0x5ab304 */ if (!fZ) goto L_005ab304;
L_005ab2ea:; BB(0x005ab2ea);
    /* 005ab2ea: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ab2f0: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005ab2f3: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005ab2f8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005ab2fb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ab2fd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005ab300: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab302u); call_ind(t); }
    /* 005ab302: jmp 0x5ab33c */ goto L_005ab33c;
L_005ab304:; BB(0x005ab304);
    /* 005ab304: mov ecx, dword ptr [0x7935f0] */ r_ecx = R32((u32)(0x7935f0u));
    /* 005ab30a: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab30d: jne 0x5ab33c */ if (!fZ) goto L_005ab33c;
L_005ab30f:; BB(0x005ab30f);
    /* 005ab30f: push 0x13b1 */ { u32 v = 0x13b1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab314: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005ab31a: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005ab31d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5ab322u); f_005eaf00();
    /* 005ab322: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005ab327: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005ab32a: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005ab330: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005ab333: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab335: mov ecx, eax */ r_ecx = r_eax;
    /* 005ab337: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005ab33a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab33cu); call_ind(t); }
L_005ab33c:; BB(0x005ab33c);
    /* 005ab33c: mov ecx, dword ptr [0x7935f0] */ r_ecx = R32((u32)(0x7935f0u));
    /* 005ab342: cmp ecx, dword ptr [0x7935e8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7935e8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab348: jl 0x5ab358 */ if ((fS!=fO)) goto L_005ab358;
L_005ab34a:; BB(0x005ab34a);
    /* 005ab34a: mov edx, dword ptr [0x7935f0] */ r_edx = R32((u32)(0x7935f0u));
    /* 005ab350: cmp edx, dword ptr [0x7935e4] */ {  u32 a = r_edx; u32 b = R32((u32)(0x7935e4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab356: jge 0x5ab369 */ if ((fS==fO)) goto L_005ab369;
L_005ab358:; BB(0x005ab358);
    /* 005ab358: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab35a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab35d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab35f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab362: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ab365: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab367u); call_ind(t); }
    /* 005ab367: jmp 0x5ab378 */ goto L_005ab378;
L_005ab369:; BB(0x005ab369);
    /* 005ab369: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab36b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab36e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab370: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab373: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ab376: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab378u); call_ind(t); }
L_005ab378:; BB(0x005ab378);
    /* 005ab378: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab37a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab37d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab37f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab382: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ab385: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab387u); call_ind(t); }
    /* 005ab387: jmp 0x5ab3f5 */ goto L_005ab3f5;
L_005ab389:; BB(0x005ab389);
    /* 005ab389: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab38e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab391: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab393: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ab396: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005ab399: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab39bu); call_ind(t); }
    /* 005ab39b: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab3a0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab3a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab3a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ab3a8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005ab3ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab3adu); call_ind(t); }
    /* 005ab3ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab3b0: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab3b4: je 0x5ab3d8 */ if (fZ) goto L_005ab3d8;
L_005ab3b6:; BB(0x005ab3b6);
    /* 005ab3b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab3b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab3bb: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005ab3be: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab3c1: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005ab3c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ab3c6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ab3c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab3cbu); call_ind(t); }
    /* 005ab3cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab3cd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ab3d0: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005ab3d3: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5ab3d8u); f_005fc420();
L_005ab3d8:; BB(0x005ab3d8);
    /* 005ab3d8: jmp 0x5ab3f5 */ goto L_005ab3f5;
L_005ab3da:; BB(0x005ab3da);
    /* 005ab3da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ab3dc: jne 0x5ab3f5 */ if (!fZ) goto L_005ab3f5;
L_005ab3de:; BB(0x005ab3de);
    /* 005ab3de: push 0x535 */ { u32 v = 0x535u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab3e3: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab3e8: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab3ed: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ab3f2u); f_005e9f20();
    /* 005ab3f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ab3f5:; BB(0x005ab3f5);
    /* 005ab3f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ab3f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab3f8: ret  */ FN_RET(0x005aafb0); r_esp += 4; return;
}

