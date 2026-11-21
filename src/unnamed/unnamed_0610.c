#include "protos.h"

void f_00610350(void) /* sub_610350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00610350);
    /* 00610350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610351: mov ebp, esp */ r_ebp = r_esp;
    /* 00610353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610355: push 0x6aaeeb */ { u32 v = 0x6aaeebu; r_esp -= 4; W32(r_esp, v); }
    /* 0061035a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610361: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610364: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00610369: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061036b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061036c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061036f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00610375: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00610378: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061037b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0061037e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610382: je 0x610386 */ if (fZ) goto L_00610386;
L_00610384:; BB(0x00610384);
    /* 00610384: jmp 0x61038b */ goto L_0061038b;
L_00610386:; BB(0x00610386);
    /* 00610386: jmp 0x61043e */ goto L_0061043e;
L_0061038b:; BB(0x0061038b);
    /* 0061038b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061038d: push 0x7050dc */ { u32 v = 0x7050dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00610392: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00610397: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610399: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061039c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061039d: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x6103a2u); f_00686ede();
    /* 006103a2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006103a5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006103a8: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006103ac: jne 0x6103f2 */ if (!fZ) goto L_006103f2;
L_006103ae:; BB(0x006103ae);
    /* 006103ae: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 006103b3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6103b8u); f_00686d82();
    /* 006103b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006103bb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006103be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006103c5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006103c9: je 0x6103d8 */ if (fZ) goto L_006103d8;
L_006103cb:; BB(0x006103cb);
    /* 006103cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006103ce: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x6103d3u); f_005eaaf0();
    /* 006103d3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006103d6: jmp 0x6103df */ goto L_006103df;
L_006103d8:; BB(0x006103d8);
    /* 006103d8: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006103df:; BB(0x006103df);
    /* 006103df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006103e2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006103e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006103ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006103ef: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006103f2:; BB(0x006103f2);
    /* 006103f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006103f4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006103f9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006103fc: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006103ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610400: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610403: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00610406: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610407: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061040a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0061040d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061040e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610411: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00610414: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610415: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610418: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0061041b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061041c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061041f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00610422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610423: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00610426: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610427: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061042a: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x61042fu); f_005f9ce0();
    /* 0061042f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00610432: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00610435: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610436: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00610439: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x61043eu); f_005eb000();
L_0061043e:; BB(0x0061043e);
    /* 0061043e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610441: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610448: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610449: mov esp, ebp */ r_esp = r_ebp;
    /* 0061044b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061044c: ret  */ FN_RET(0x00610350); r_esp += 4; return;
}

void f_006104c0(void) /* sub_6104C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006104c0);
    /* 006104c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006104c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006104c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006104c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006104c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006104c9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006104cc: call 0x5fbb30 */ r_esp -= 4; W32(r_esp, 0x6104d1u); f_005fbb30();
    /* 006104d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006104d2: ret  */ FN_RET(0x006104c0); r_esp += 4; return;
}

void f_006104e0(void) /* sub_6104E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006104e0);
    /* 006104e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006104e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006104e3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006104e7: jne 0x6104eb */ if (!fZ) goto L_006104eb;
L_006104e9:; BB(0x006104e9);
    /* 006104e9: jmp 0x6104f9 */ goto L_006104f9;
L_006104eb:; BB(0x006104eb);
    /* 006104eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006104ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006104f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006104f1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006104f4: call 0x5fbb30 */ r_esp -= 4; W32(r_esp, 0x6104f9u); f_005fbb30();
L_006104f9:; BB(0x006104f9);
    /* 006104f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006104fa: ret  */ FN_RET(0x006104e0); r_esp += 4; return;
}

void f_00610570(void) /* sub_610570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00610570);
    /* 00610570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610571: mov ebp, esp */ r_ebp = r_esp;
    /* 00610573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610575: push 0x6aaf11 */ { u32 v = 0x6aaf11u; r_esp -= 4; W32(r_esp, v); }
    /* 0061057a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610581: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610584: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00610589: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061058b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061058c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061058f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00610595: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00610598: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0061059b: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061059e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006105a1: lea ecx, [ebp - 0x15] */ r_ecx = (u32)(r_ebp+0xffffffebu);
    /* 006105a4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006105a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006105a9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006105ac: call 0x5bbd80 */ r_esp -= 4; W32(r_esp, 0x6105b1u); f_005bbd80();
    /* 006105b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006105b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006105bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006105bc: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006105bf: call 0x610650 */ r_esp -= 4; W32(r_esp, 0x6105c4u); f_00610650();
    /* 006105c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006105cb: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 006105ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006105d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006105d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006105d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006105db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006105dc: ret 4 */ FN_RET(0x00610570); r_esp += 8; return;
}

void f_006105e0(void) /* sub_6105E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006105e0);
    /* 006105e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006105e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006105e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006105e5: push 0x6aaf37 */ { u32 v = 0x6aaf37u; r_esp -= 4; W32(r_esp, v); }
    /* 006105ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006105f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006105f1: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006105f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006105f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006105fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006105fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006105ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00610605: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00610608: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0061060b: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061060e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00610611: lea ecx, [ebp - 0x15] */ r_ecx = (u32)(r_ebp+0xffffffebu);
    /* 00610614: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00610617: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610619: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0061061c: call 0x5bbd80 */ r_esp -= 4; W32(r_esp, 0x610621u); f_005bbd80();
    /* 00610621: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610628: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061062b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061062c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0061062f: call 0x6106f0 */ r_esp -= 4; W32(r_esp, 0x610634u); f_006106f0();
    /* 00610634: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061063b: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0061063e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610641: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610648: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610649: mov esp, ebp */ r_esp = r_ebp;
    /* 0061064b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061064c: ret 4 */ FN_RET(0x006105e0); r_esp += 8; return;
}

void f_00610650(void) /* sub_610650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00610650);
    /* 00610650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610651: mov ebp, esp */ r_ebp = r_esp;
    /* 00610653: sub esp, 0x140 */ {  u32 a = r_esp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610659: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061065a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061065b: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 00610661: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00610664: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00610669: mov edi, dword ptr [ebp - 0x140] */ r_edi = R32((u32)(r_ebp+0xfffffec0u));
    /* 0061066f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00610671: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00610674: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00610677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610678: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0061067e: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610681: call 0x5bc040 */ r_esp -= 4; W32(r_esp, 0x610686u); f_005bc040();
    /* 00610686: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0061068c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061068f: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00610692: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00610695: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0061069b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061069e: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 006106a1: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006106a4: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 006106aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006106ad: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 006106b0: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 006106b3: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 006106b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006106bc: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006106bf: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 006106c2: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 006106c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006106cb: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 006106ce: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 006106d1: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 006106d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006106da: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006106dd: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 006106e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006106e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006106e2: mov esp, ebp */ r_esp = r_ebp;
    /* 006106e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006106e5: ret 4 */ FN_RET(0x00610650); r_esp += 8; return;
}

void f_006106f0(void) /* sub_6106F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006106f0);
    /* 006106f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006106f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006106f3: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006106f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006106fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006106fb: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 006106fe: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00610701: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00610706: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 00610709: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0061070b: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0061070e: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00610715: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0061071c:; BB(0x0061071c);
    /* 0061071c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061071f: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610723: je 0x61073f */ if (fZ) goto L_0061073f;
L_00610725:; BB(0x00610725);
    /* 00610725: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610728: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0061072b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061072e: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610732: je 0x61073f */ if (fZ) goto L_0061073f;
L_00610734:; BB(0x00610734);
    /* 00610734: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610737: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061073a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061073d: jmp 0x61071c */ goto L_0061071c;
L_0061073f:; BB(0x0061073f);
    /* 0061073f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610741: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610745: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00610748: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061074b: call 0x611930 */ r_esp -= 4; W32(r_esp, 0x610750u); f_00611930();
    /* 00610750: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00610757: jmp 0x610762 */ goto L_00610762;
L_00610759:; BB(0x00610759);
    /* 00610759: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061075c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061075f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00610762:; BB(0x00610762);
    /* 00610762: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00610765: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610768: jge 0x6107c8 */ if ((fS==fO)) goto L_006107c8;
L_0061076a:; BB(0x0061076a);
    /* 0061076a: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0061076d: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00610770: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00610773: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00610776: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061077a: jne 0x610788 */ if (!fZ) goto L_00610788;
L_0061077c:; BB(0x0061077c);
    /* 0061077c: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00610786: jmp 0x61079d */ goto L_0061079d;
L_00610788:; BB(0x00610788);
    /* 00610788: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0061078b: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0061078e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00610791: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00610794: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00610797: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
L_0061079d:; BB(0x0061079d);
    /* 0061079d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006107a0: cmp edx, dword ptr [ebp - 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff7cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006107a6: jb 0x6107ae */ if (fC) goto L_006107ae;
L_006107a8:; BB(0x006107a8);
    /* 006107a8: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6107aeu); call_ind(t); }
L_006107ae:; BB(0x006107ae);
    /* 006107ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006107b1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006107b4: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 006107b7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006107ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006107bd: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 006107c0: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 006107c3: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006107c6: jmp 0x610759 */ goto L_00610759;
L_006107c8:; BB(0x006107c8);
    /* 006107c8: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 006107cb: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 006107d2: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 006107d5: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 006107dc: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 006107df: fldz  */ FPUSH(0.0);
    /* 006107e1: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 006107e4: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 006107e7: fldz  */ FPUSH(0.0);
    /* 006107e9: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 006107ec: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 006107ef: fldz  */ FPUSH(0.0);
    /* 006107f1: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 006107f4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 006107f7: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 006107fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006107ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00610800: mov esp, ebp */ r_esp = r_ebp;
    /* 00610802: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610803: ret 4 */ FN_RET(0x006106f0); r_esp += 8; return;
}

void f_00610810(void) /* sub_610810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00610810);
    /* 00610810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610811: mov ebp, esp */ r_ebp = r_esp;
    /* 00610813: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610816: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00610817: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061081a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061081d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610820: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00610822: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610824: jne 0x61088c */ if (!fZ) goto L_0061088c;
L_00610826:; BB(0x00610826);
    /* 00610826: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610829: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061082c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061082f: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610832: jne 0x61088c */ if (!fZ) goto L_0061088c;
L_00610834:; BB(0x00610834);
    /* 00610834: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610837: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 0061083b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061083e: movzx eax, byte ptr [edx + 0xc] */ r_eax = (u32)R8((u32)(r_edx+0xcu));
    /* 00610842: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610844: jne 0x61088c */ if (!fZ) goto L_0061088c;
L_00610846:; BB(0x00610846);
    /* 00610846: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610849: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061084c: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0061084f: cmp eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610852: jne 0x61088c */ if (!fZ) goto L_0061088c;
L_00610854:; BB(0x00610854);
    /* 00610854: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610857: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061085a: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0061085d: cmp eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610860: jne 0x61088c */ if (!fZ) goto L_0061088c;
L_00610862:; BB(0x00610862);
    /* 00610862: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610865: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00610868: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061086b: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0061086e: fucompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00610870: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00610872: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00610875: jp 0x61088c */ if (fP) goto L_0061088c;
L_00610877:; BB(0x00610877);
    /* 00610877: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061087a: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0061087d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610880: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00610883: fucompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00610885: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00610887: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0061088a: jnp 0x610893 */ if (!fP) goto L_00610893;
L_0061088c:; BB(0x0061088c);
    /* 0061088c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061088e: jmp 0x61096d */ goto L_0061096d;
L_00610893:; BB(0x00610893);
    /* 00610893: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0061089a:; BB(0x0061089a);
    /* 0061089a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061089d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006108a1: je 0x6108bd */ if (fZ) goto L_006108bd;
L_006108a3:; BB(0x006108a3);
    /* 006108a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006108a6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006108a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006108ac: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006108b0: je 0x6108bd */ if (fZ) goto L_006108bd;
L_006108b2:; BB(0x006108b2);
    /* 006108b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006108b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006108b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006108bb: jmp 0x61089a */ goto L_0061089a;
L_006108bd:; BB(0x006108bd);
    /* 006108bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006108c0: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006108c3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006108c6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006108c9: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006108cd: jne 0x6108d8 */ if (!fZ) goto L_006108d8;
L_006108cf:; BB(0x006108cf);
    /* 006108cf: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 006108d6: jmp 0x6108ea */ goto L_006108ea;
L_006108d8:; BB(0x006108d8);
    /* 006108d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006108db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006108de: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006108e1: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006108e4: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006108e7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_006108ea:; BB(0x006108ea);
    /* 006108ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006108ed: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006108f0: je 0x6108f6 */ if (fZ) goto L_006108f6;
L_006108f2:; BB(0x006108f2);
    /* 006108f2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006108f4: jmp 0x61096d */ goto L_0061096d;
L_006108f6:; BB(0x006108f6);
    /* 006108f6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006108fd: jmp 0x610908 */ goto L_00610908;
L_006108ff:; BB(0x006108ff);
    /* 006108ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00610902: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610905: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00610908:; BB(0x00610908);
    /* 00610908: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061090b: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061090e: jge 0x61096b */ if ((fS==fO)) goto L_0061096b;
L_00610910:; BB(0x00610910);
    /* 00610910: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610913: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00610916: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00610919: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061091c: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610920: jne 0x61092b */ if (!fZ) goto L_0061092b;
L_00610922:; BB(0x00610922);
    /* 00610922: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00610929: jmp 0x61093d */ goto L_0061093d;
L_0061092b:; BB(0x0061092b);
    /* 0061092b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061092e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00610931: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00610934: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00610937: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061093a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0061093d:; BB(0x0061093d);
    /* 0061093d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00610940: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00610943: jb 0x61094b */ if (fC) goto L_0061094b;
L_00610945:; BB(0x00610945);
    /* 00610945: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61094bu); call_ind(t); }
L_0061094b:; BB(0x0061094b);
    /* 0061094b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061094e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00610951: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00610954: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00610957: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061095a: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061095d: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00610960: cmp eax, dword ptr [ecx + esi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610963: je 0x610969 */ if (fZ) goto L_00610969;
L_00610965:; BB(0x00610965);
    /* 00610965: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00610967: jmp 0x61096d */ goto L_0061096d;
L_00610969:; BB(0x00610969);
    /* 00610969: jmp 0x6108ff */ goto L_006108ff;
L_0061096b:; BB(0x0061096b);
    /* 0061096b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0061096d:; BB(0x0061096d);
    /* 0061096d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061096e: mov esp, ebp */ r_esp = r_ebp;
    /* 00610970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610971: ret 4 */ FN_RET(0x00610810); r_esp += 8; return;
}

