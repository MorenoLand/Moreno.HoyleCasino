#include "protos.h"

void f_005487a0(void) /* sub_5487A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005487a0);
    /* 005487a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005487a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005487a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005487a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005487a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005487ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005487af: cmp dword ptr [ebp - 8], 0x311675 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x311675u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005487b6: je 0x5487c3 */ if (fZ) goto L_005487c3;
L_005487b8:; BB(0x005487b8);
    /* 005487b8: cmp dword ptr [ebp - 8], 0x311676 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x311676u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005487bf: je 0x5487c7 */ if (fZ) goto L_005487c7;
L_005487c1:; BB(0x005487c1);
    /* 005487c1: jmp 0x5487ce */ goto L_005487ce;
L_005487c3:; BB(0x005487c3);
    /* 005487c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005487c5: jmp 0x5487d1 */ goto L_005487d1;
L_005487c7:; BB(0x005487c7);
    /* 005487c7: mov eax, 1 */ r_eax = 0x1u;
    /* 005487cc: jmp 0x5487d1 */ goto L_005487d1;
L_005487ce:; BB(0x005487ce);
    /* 005487ce: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005487d1:; BB(0x005487d1);
    /* 005487d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005487d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005487d4: ret 4 */ FN_RET(0x005487a0); r_esp += 8; return;
}

void f_005487e0(void) /* sub_5487E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005487e0);
    /* 005487e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005487e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005487e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005487e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005487e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005487ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005487ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005487f2: sub ecx, 0x311677 */ {  u32 a = r_ecx; u32 b = 0x311677u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005487f8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005487fb: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005487ff: ja 0x548827 */ if ((!fC&&!fZ)) goto L_00548827;
L_00548801:; BB(0x00548801);
    /* 00548801: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548804: jmp dword ptr [edx*4 + 0x548830] */ { u32 t = R32((u32)(r_edx*4+0x548830u)); switch (t) { case 0x54880bu: goto L_0054880b; case 0x548812u: goto L_00548812; case 0x548819u: goto L_00548819; case 0x548820u: goto L_00548820; default: UNSUP(0x00548804, "jump table entry is not a known target"); } }
L_0054880b:; BB(0x0054880b);
    /* 0054880b: mov eax, 3 */ r_eax = 0x3u;
    /* 00548810: jmp 0x54882a */ goto L_0054882a;
L_00548812:; BB(0x00548812);
    /* 00548812: mov eax, 4 */ r_eax = 0x4u;
    /* 00548817: jmp 0x54882a */ goto L_0054882a;
L_00548819:; BB(0x00548819);
    /* 00548819: mov eax, 6 */ r_eax = 0x6u;
    /* 0054881e: jmp 0x54882a */ goto L_0054882a;
L_00548820:; BB(0x00548820);
    /* 00548820: mov eax, 8 */ r_eax = 0x8u;
    /* 00548825: jmp 0x54882a */ goto L_0054882a;
L_00548827:; BB(0x00548827);
    /* 00548827: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054882a:; BB(0x0054882a);
    /* 0054882a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054882c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054882d: ret 4 */ FN_RET(0x005487e0); r_esp += 8; return;
}

void f_00548940(void) /* sub_548940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548940);
    /* 00548940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548941: mov ebp, esp */ r_ebp = r_esp;
    /* 00548943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00548949: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0054894f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x548954u); f_006375b0();
    /* 00548954: mov ecx, eax */ r_ecx = r_eax;
    /* 00548956: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x54895bu); f_0063aae0();
    /* 0054895b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054895d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054895e: ret  */ FN_RET(0x00548940); r_esp += 4; return;
}

void f_00548960(void) /* sub_548960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548960);
    /* 00548960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548961: mov ebp, esp */ r_ebp = r_esp;
    /* 00548963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548967: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054896a: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 00548971: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548973: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00548975: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548978: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0054897b: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x548980u); f_006437d0();
    /* 00548980: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00548982: push 0x6c6ff4 */ { u32 v = 0x6c6ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 00548987: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00548989: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054898b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054898e: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00548991: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x548996u); f_00643930();
    /* 00548996: mov esp, ebp */ r_esp = r_ebp;
    /* 00548998: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548999: ret  */ FN_RET(0x00548960); r_esp += 4; return;
}

void f_005489a0(void) /* sub_5489A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005489a0);
    /* 005489a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005489a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005489a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005489a5: push 0x6a52be */ { u32 v = 0x6a52beu; r_esp -= 4; W32(r_esp, v); }
    /* 005489aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005489b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005489b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005489b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005489b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005489bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005489bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005489bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005489c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005489c8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005489cb: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005489cf: jne 0x548a18 */ if (!fZ) goto L_00548a18;
L_005489d1:; BB(0x005489d1);
    /* 005489d1: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 005489d6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5489dbu); f_00686d82();
    /* 005489db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005489de: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005489e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005489e8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005489ec: je 0x5489fb */ if (fZ) goto L_005489fb;
L_005489ee:; BB(0x005489ee);
    /* 005489ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005489f1: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x5489f6u); f_00642e10();
    /* 005489f6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005489f9: jmp 0x548a02 */ goto L_00548a02;
L_005489fb:; BB(0x005489fb);
    /* 005489fb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00548a02:; BB(0x00548a02);
    /* 00548a02: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00548a05: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00548a08: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00548a0f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548a12: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00548a15: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
L_00548a18:; BB(0x00548a18);
    /* 00548a18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548a1a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548a1d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00548a20: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x548a25u); f_00642e70();
    /* 00548a25: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548a28: call 0x548960 */ r_esp -= 4; W32(r_esp, 0x548a2du); f_00548960();
    /* 00548a2d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548a30: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 00548a37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548a3a: call 0x548ab0 */ r_esp -= 4; W32(r_esp, 0x548a3fu); f_00548ab0();
    /* 00548a3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548a42: call 0x548b20 */ r_esp -= 4; W32(r_esp, 0x548a47u); f_00548b20();
    /* 00548a47: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548a4a: mov byte ptr [eax + 0x1d], 1 */ W8((u32)(r_eax+0x1du), 0x1u);
    /* 00548a4e: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00548a53: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00548a59: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x548a5eu); f_005f2ba0();
    /* 00548a5e: push 0x73bf80 */ { u32 v = 0x73bf80u; r_esp -= 4; W32(r_esp, v); }
    /* 00548a63: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00548a65: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00548a6b: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x548a70u); f_0057ab80();
    /* 00548a70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00548a73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00548a7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00548a7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00548a7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548a7e: ret  */ FN_RET(0x005489a0); r_esp += 4; return;
}

void f_00548a80(void) /* sub_548A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548a80);
    /* 00548a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00548a83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548a86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00548a89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548a8c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00548a8f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548a92: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548a96: je 0x548a9c */ if (fZ) goto L_00548a9c;
L_00548a98:; BB(0x00548a98);
    /* 00548a98: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548a9a: jmp 0x548a9e */ goto L_00548a9e;
L_00548a9c:; BB(0x00548a9c);
    /* 00548a9c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00548a9e:; BB(0x00548a9e);
    /* 00548a9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00548aa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548aa1: ret  */ FN_RET(0x00548a80); r_esp += 4; return;
}

void f_00548ab0(void) /* sub_548AB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548ab0);
    /* 00548ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00548ab3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548ab6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00548ab9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00548ac0: jmp 0x548acb */ goto L_00548acb;
L_00548ac2:; BB(0x00548ac2);
    /* 00548ac2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548ac5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548ac8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00548acb:; BB(0x00548acb);
    /* 00548acb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548acf: jge 0x548b03 */ if ((fS==fO)) goto L_00548b03;
L_00548ad1:; BB(0x00548ad1);
    /* 00548ad1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00548ad8: jmp 0x548ae3 */ goto L_00548ae3;
L_00548ada:; BB(0x00548ada);
    /* 00548ada: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548add: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00548ae0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00548ae3:; BB(0x00548ae3);
    /* 00548ae3: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548ae7: jge 0x548b01 */ if ((fS==fO)) goto L_00548b01;
L_00548ae9:; BB(0x00548ae9);
    /* 00548ae9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548aec: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00548aef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00548af2: lea ecx, [eax + edx + 0x28] */ r_ecx = (u32)(r_eax+r_edx+0x28u);
    /* 00548af6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548af9: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 00548aff: jmp 0x548ada */ goto L_00548ada;
L_00548b01:; BB(0x00548b01);
    /* 00548b01: jmp 0x548ac2 */ goto L_00548ac2;
L_00548b03:; BB(0x00548b03);
    /* 00548b03: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548b09: call 0x543fc0 */ r_esp -= 4; W32(r_esp, 0x548b0eu); f_00543fc0();
    /* 00548b0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00548b10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548b11: ret  */ FN_RET(0x00548ab0); r_esp += 4; return;
}

void f_00548b20(void) /* sub_548B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548b20);
    /* 00548b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00548b23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548b26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00548b29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548b2c: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 00548b33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548b36: mov byte ptr [ecx + 0x24], 0 */ W8((u32)(r_ecx+0x24u), 0x0u);
    /* 00548b3a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548b3d: mov byte ptr [edx + 0x26], 0 */ W8((u32)(r_edx+0x26u), 0x0u);
    /* 00548b41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548b44: mov byte ptr [eax + 0x25], 0 */ W8((u32)(r_eax+0x25u), 0x0u);
    /* 00548b48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548b4b: mov byte ptr [ecx + 0x4c], 0 */ W8((u32)(r_ecx+0x4cu), 0x0u);
    /* 00548b4f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548b52: mov byte ptr [edx + 0x4d], 0 */ W8((u32)(r_edx+0x4du), 0x0u);
    /* 00548b56: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00548b5d: jmp 0x548b68 */ goto L_00548b68;
L_00548b5f:; BB(0x00548b5f);
    /* 00548b5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548b62: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548b65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00548b68:; BB(0x00548b68);
    /* 00548b68: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548b6c: jge 0x548b7e */ if ((fS==fO)) goto L_00548b7e;
L_00548b6e:; BB(0x00548b6e);
    /* 00548b6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548b71: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548b74: mov dword ptr [edx + ecx*4 + 0x50], 0 */ W32((u32)(r_edx+r_ecx*4+0x50u), 0x0u);
    /* 00548b7c: jmp 0x548b5f */ goto L_00548b5f;
L_00548b7e:; BB(0x00548b7e);
    /* 00548b7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00548b80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548b81: ret  */ FN_RET(0x00548b20); r_esp += 4; return;
}

void f_00548b90(void) /* sub_548B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548b90);
    /* 00548b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00548b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548b97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548b9a: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548b9e: jne 0x548ba4 */ if (!fZ) goto L_00548ba4;
L_00548ba0:; BB(0x00548ba0);
    /* 00548ba0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548ba2: jmp 0x548ba6 */ goto L_00548ba6;
L_00548ba4:; BB(0x00548ba4);
    /* 00548ba4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00548ba6:; BB(0x00548ba6);
    /* 00548ba6: mov esp, ebp */ r_esp = r_ebp;
    /* 00548ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548ba9: ret  */ FN_RET(0x00548b90); r_esp += 4; return;
}

void f_00548c10(void) /* sub_548C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548c10);
    /* 00548c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00548c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548c14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548c17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c1a: cmp dword ptr [eax + 0x20], 1 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548c1e: jne 0x548cb5 */ if (!fZ) goto L_00548cb5;
L_00548c24:; BB(0x00548c24);
    /* 00548c24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c27: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 00548c2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548c2d: je 0x548cb3 */ if (fZ) goto L_00548cb3;
L_00548c33:; BB(0x00548c33);
    /* 00548c33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c36: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 00548c3d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00548c3f: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548c45: call 0x545b40 */ r_esp -= 4; W32(r_esp, 0x548c4au); f_00545b40();
    /* 00548c4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00548c4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c4f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00548c52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548c53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c56: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x548c5bu); f_005492c0();
    /* 00548c5b: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548c61: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x548c66u); f_005450a0();
    /* 00548c66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c69: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00548c6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548c6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c70: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x548c75u); f_0054a6c0();
    /* 00548c75: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00548c78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548c7a: je 0x548c93 */ if (fZ) goto L_00548c93;
L_00548c7c:; BB(0x00548c7c);
    /* 00548c7c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00548c7e: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548c84: call 0x545600 */ r_esp -= 4; W32(r_esp, 0x548c89u); f_00545600();
    /* 00548c89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c8c: call 0x549750 */ r_esp -= 4; W32(r_esp, 0x548c91u); f_00549750();
    /* 00548c91: jmp 0x548cb1 */ goto L_00548cb1;
L_00548c93:; BB(0x00548c93);
    /* 00548c93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c96: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00548c99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548c9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548c9d: call 0x54a770 */ r_esp -= 4; W32(r_esp, 0x548ca2u); f_0054a770();
    /* 00548ca2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00548ca5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548ca7: je 0x548cb1 */ if (fZ) goto L_00548cb1;
L_00548ca9:; BB(0x00548ca9);
    /* 00548ca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548cac: call 0x549750 */ r_esp -= 4; W32(r_esp, 0x548cb1u); f_00549750();
L_00548cb1:; BB(0x00548cb1);
    /* 00548cb1: jmp 0x548d12 */ goto L_00548d12;
L_00548cb3:; BB(0x00548cb3);
    /* 00548cb3: jmp 0x548cf5 */ goto L_00548cf5;
L_00548cb5:; BB(0x00548cb5);
    /* 00548cb5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548cb8: cmp dword ptr [eax + 0x20], 2 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548cbc: jne 0x548cf5 */ if (!fZ) goto L_00548cf5;
L_00548cbe:; BB(0x00548cbe);
    /* 00548cbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548cc1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00548cc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548cc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548cc8: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x548ccdu); f_0054a6c0();
    /* 00548ccd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00548cd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548cd2: je 0x548cf5 */ if (fZ) goto L_00548cf5;
L_00548cd4:; BB(0x00548cd4);
    /* 00548cd4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00548cd6: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548cdc: call 0x545600 */ r_esp -= 4; W32(r_esp, 0x548ce1u); f_00545600();
    /* 00548ce1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548ce4: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00548ceb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548cee: call 0x549750 */ r_esp -= 4; W32(r_esp, 0x548cf3u); f_00549750();
    /* 00548cf3: jmp 0x548d12 */ goto L_00548d12;
L_00548cf5:; BB(0x00548cf5);
    /* 00548cf5: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548cfb: call 0x545b90 */ r_esp -= 4; W32(r_esp, 0x548d00u); f_00545b90();
    /* 00548d00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548d03: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00548d0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548d0d: call 0x549cd0 */ r_esp -= 4; W32(r_esp, 0x548d12u); f_00549cd0();
L_00548d12:; BB(0x00548d12);
    /* 00548d12: mov esp, ebp */ r_esp = r_ebp;
    /* 00548d14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548d15: ret  */ FN_RET(0x00548c10); r_esp += 4; return;
}

void f_00548d20(void) /* sub_548D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548d20);
    /* 00548d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00548d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548d27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548d2a: mov byte ptr [eax + 0x25], 0 */ W8((u32)(r_eax+0x25u), 0x0u);
    /* 00548d2e: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00548d32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548d34: je 0x548d44 */ if (fZ) goto L_00548d44;
L_00548d36:; BB(0x00548d36);
    /* 00548d36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548d39: call 0x548e50 */ r_esp -= 4; W32(r_esp, 0x548d3eu); f_00548e50();
    /* 00548d3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548d41: mov byte ptr [edx + 0x25], al */ W8((u32)(r_edx+0x25u), (u8)r_eax);
L_00548d44:; BB(0x00548d44);
    /* 00548d44: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548d4a: call 0x544830 */ r_esp -= 4; W32(r_esp, 0x548d4fu); f_00544830();
    /* 00548d4f: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548d55: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x548d5au); f_005450a0();
    /* 00548d5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548d5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548d5f: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x548d64u); f_0054a6c0();
    /* 00548d64: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00548d67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548d69: je 0x548d7e */ if (fZ) goto L_00548d7e;
L_00548d6b:; BB(0x00548d6b);
    /* 00548d6b: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00548d71: call 0x5442b0 */ r_esp -= 4; W32(r_esp, 0x548d76u); f_005442b0();
    /* 00548d76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548d79: call 0x5493a0 */ r_esp -= 4; W32(r_esp, 0x548d7eu); f_005493a0();
L_00548d7e:; BB(0x00548d7e);
    /* 00548d7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00548d80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548d81: ret 4 */ FN_RET(0x00548d20); r_esp += 8; return;
}

void f_00548d90(void) /* sub_548D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548d90);
    /* 00548d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00548d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548d97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00548d9a: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00548d9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548da0: movzx edx, byte ptr [ecx + 0x26] */ r_edx = (u32)R8((u32)(r_ecx+0x26u));
    /* 00548da4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548da6: je 0x548daf */ if (fZ) goto L_00548daf;
L_00548da8:; BB(0x00548da8);
    /* 00548da8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548daa: jmp 0x548e3f */ goto L_00548e3f;
L_00548daf:; BB(0x00548daf);
    /* 00548daf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00548db1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548db4: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x548db9u); f_00548f80();
    /* 00548db9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548dbc: jle 0x548dc2 */ if ((fZ||fS!=fO)) goto L_00548dc2;
L_00548dbe:; BB(0x00548dbe);
    /* 00548dbe: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548dc0: jmp 0x548e3f */ goto L_00548e3f;
L_00548dc2:; BB(0x00548dc2);
    /* 00548dc2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00548dc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548dc7: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x548dccu); f_00548f80();
    /* 00548dcc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548dcf: jle 0x548dd5 */ if ((fZ||fS!=fO)) goto L_00548dd5;
L_00548dd1:; BB(0x00548dd1);
    /* 00548dd1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548dd3: jmp 0x548e3f */ goto L_00548e3f;
L_00548dd5:; BB(0x00548dd5);
    /* 00548dd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548dd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548dda: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x548ddfu); f_00548f80();
    /* 00548ddf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548de2: je 0x548de8 */ if (fZ) goto L_00548de8;
L_00548de4:; BB(0x00548de4);
    /* 00548de4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548de6: jmp 0x548e3f */ goto L_00548e3f;
L_00548de8:; BB(0x00548de8);
    /* 00548de8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548deb: call 0x548eb0 */ r_esp -= 4; W32(r_esp, 0x548df0u); f_00548eb0();
    /* 00548df0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00548df3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548df5: jne 0x548e1d */ if (!fZ) goto L_00548e1d;
L_00548df7:; BB(0x00548df7);
    /* 00548df7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548dfa: mov dx, word ptr [ecx + 0x2a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2au))) & 0xffffu);
    /* 00548dfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548dff: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x548e04u); f_00641280();
    /* 00548e04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548e07: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548e0a: jne 0x548e19 */ if (!fZ) goto L_00548e19;
L_00548e0c:; BB(0x00548e0c);
    /* 00548e0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548e0f: mov byte ptr [eax + 0x26], 1 */ W8((u32)(r_eax+0x26u), 0x1u);
    /* 00548e13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00548e16: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
L_00548e19:; BB(0x00548e19);
    /* 00548e19: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548e1b: jmp 0x548e3f */ goto L_00548e3f;
L_00548e1d:; BB(0x00548e1d);
    /* 00548e1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548e20: mov ax, word ptr [edx + 0x2a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x2au))) & 0xffffu);
    /* 00548e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548e25: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x548e2au); f_00641280();
    /* 00548e2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548e2d: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548e30: jne 0x548e3d */ if (!fZ) goto L_00548e3d;
L_00548e32:; BB(0x00548e32);
    /* 00548e32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548e35: mov byte ptr [ecx + 0x26], 1 */ W8((u32)(r_ecx+0x26u), 0x1u);
    /* 00548e39: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00548e3b: jmp 0x548e3f */ goto L_00548e3f;
L_00548e3d:; BB(0x00548e3d);
    /* 00548e3d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00548e3f:; BB(0x00548e3f);
    /* 00548e3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00548e41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548e42: ret 4 */ FN_RET(0x00548d90); r_esp += 8; return;
}

void f_00548e50(void) /* sub_548E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548e50);
    /* 00548e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00548e53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548e56: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00548e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00548e5c: call 0x548eb0 */ r_esp -= 4; W32(r_esp, 0x548e61u); f_00548eb0();
    /* 00548e61: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00548e64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548e66: jne 0x548e6c */ if (!fZ) goto L_00548e6c;
L_00548e68:; BB(0x00548e68);
    /* 00548e68: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548e6a: jmp 0x548ea7 */ goto L_00548ea7;
L_00548e6c:; BB(0x00548e6c);
    /* 00548e6c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00548e6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548e70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00548e73: call 0x548ef0 */ r_esp -= 4; W32(r_esp, 0x548e78u); f_00548ef0();
    /* 00548e78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00548e7a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00548e7d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00548e80: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00548e83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548e86: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00548e89: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00548e8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548e8f: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00548e92: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00548e95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548e99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548e9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548e9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00548ea0: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x548ea5u); f_005d1420();
    /* 00548ea5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00548ea7:; BB(0x00548ea7);
    /* 00548ea7: mov esp, ebp */ r_esp = r_ebp;
    /* 00548ea9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548eaa: ret  */ FN_RET(0x00548e50); r_esp += 4; return;
}

void f_00548eb0(void) /* sub_548EB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548eb0);
    /* 00548eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00548eb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548eb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00548eb9: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00548ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548ebd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00548ec0: call 0x548ef0 */ r_esp -= 4; W32(r_esp, 0x548ec5u); f_00548ef0();
    /* 00548ec5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00548ec8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548ec9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00548ecb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548ecc: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00548ecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548ed0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00548ed3: call 0x5d14b0 */ r_esp -= 4; W32(r_esp, 0x548ed8u); f_005d14b0();
    /* 00548ed8: mov ecx, eax */ r_ecx = r_eax;
    /* 00548eda: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x548edfu); f_0064c7a0();
    /* 00548edf: mov esp, ebp */ r_esp = r_ebp;
    /* 00548ee1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548ee2: ret  */ FN_RET(0x00548eb0); r_esp += 4; return;
}

void f_00548ef0(void) /* sub_548EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548ef0);
    /* 00548ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00548ef3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548ef6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00548ef9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548efb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548efd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x548f02u); f_0064c8a0();
    /* 00548f02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548f05: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00548f08: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00548f0b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548f0e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00548f11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00548f14: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00548f17: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00548f1a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00548f1d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00548f20: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00548f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548f24: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00548f27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548f28: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00548f2b: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x548f30u); f_005d0c30();
    /* 00548f30: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00548f32: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00548f35: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00548f38: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00548f3b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548f3e: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00548f43: jns 0x548f4a */ if (!fS) goto L_00548f4a;
L_00548f45:; BB(0x00548f45);
    /* 00548f45: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00548f46: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00548f49: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00548f4a:; BB(0x00548f4a);
    /* 00548f4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548f4c: je 0x548f55 */ if (fZ) goto L_00548f55;
L_00548f4e:; BB(0x00548f4e);
    /* 00548f4e: mov dword ptr [ebp - 0xc], 0x32 */ W32((u32)(r_ebp+0xfffffff4u), 0x32u);
L_00548f55:; BB(0x00548f55);
    /* 00548f55: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548f58: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00548f59: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00548f5b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00548f5d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00548f60: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00548f63: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00548f66: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00548f68: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00548f6b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00548f6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00548f71: mov esp, ebp */ r_esp = r_ebp;
    /* 00548f73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548f74: ret 4 */ FN_RET(0x00548ef0); r_esp += 8; return;
}

void f_00548f80(void) /* sub_548F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548f80);
    /* 00548f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00548f83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548f86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00548f89: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00548f90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00548f97: jmp 0x548fa2 */ goto L_00548fa2;
L_00548f99:; BB(0x00548f99);
    /* 00548f99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548f9c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548f9f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00548fa2:; BB(0x00548fa2);
    /* 00548fa2: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548fa6: jge 0x548fcb */ if ((fS==fO)) goto L_00548fcb;
L_00548fa8:; BB(0x00548fa8);
    /* 00548fa8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00548fab: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00548fae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00548fb1: lea eax, [edx + ecx + 0x28] */ r_eax = (u32)(r_edx+r_ecx+0x28u);
    /* 00548fb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548fb8: movzx edx, word ptr [eax + ecx*2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 00548fbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548fbe: je 0x548fc9 */ if (fZ) goto L_00548fc9;
L_00548fc0:; BB(0x00548fc0);
    /* 00548fc0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548fc3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548fc6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00548fc9:; BB(0x00548fc9);
    /* 00548fc9: jmp 0x548f99 */ goto L_00548f99;
L_00548fcb:; BB(0x00548fcb);
    /* 00548fcb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548fce: mov esp, ebp */ r_esp = r_ebp;
    /* 00548fd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548fd1: ret 4 */ FN_RET(0x00548f80); r_esp += 8; return;
}

