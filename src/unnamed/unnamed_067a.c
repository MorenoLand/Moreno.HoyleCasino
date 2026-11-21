#include "protos.h"

void f_0067a370(void) /* sub_67A370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067a370);
    /* 0067a370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a371: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a375: push 0x6ad857 */ { u32 v = 0x6ad857u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a37a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a381: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a384: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067a389: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067a38b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a38c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067a38f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067a395: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0067a398: mov dword ptr [ebp - 0x10], 0x149 */ W32((u32)(r_ebp+0xfffffff0u), 0x149u);
    /* 0067a39f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3a1: push 0x1f53 */ { u32 v = 0x1f53u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3a6: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3ab: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067a3b0: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067a3b3: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a3b8u); f_006044b0();
    /* 0067a3b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3ba: push 0x1f54 */ { u32 v = 0x1f54u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3bf: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3c4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067a3ca: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067a3cd: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a3d2u); f_006044b0();
    /* 0067a3d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3d4: push 0x1f55 */ { u32 v = 0x1f55u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3d9: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3de: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067a3e4: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067a3e7: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a3ecu); f_006044b0();
    /* 0067a3ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3ee: push 0x249f20 */ { u32 v = 0x249f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3f3: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a3f8: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067a3fd: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067a400: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a405u); f_006044b0();
    /* 0067a405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a407: push 0x249f21 */ { u32 v = 0x249f21u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a40c: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a411: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067a417: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067a41a: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a41fu); f_006044b0();
    /* 0067a41f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0067a422: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0067a425: cmp dword ptr [ebp - 0x40], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067a429: ja 0x67a921 */ if ((!fC&&!fZ)) goto L_0067a921;
L_0067a42f:; BB(0x0067a42f);
    /* 0067a42f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067a432: jmp dword ptr [eax*4 + 0x67a934] */ { u32 t = R32((u32)(r_eax*4+0x67a934u)); switch (t) { case 0x67a439u: goto L_0067a439; case 0x67a581u: goto L_0067a581; case 0x67a5f8u: goto L_0067a5f8; case 0x67a769u: goto L_0067a769; case 0x67a7f0u: goto L_0067a7f0; case 0x67a86fu: goto L_0067a86f; case 0x67a907u: goto L_0067a907; default: UNSUP(0x0067a432, "jump table entry is not a known target"); } }
L_0067a439:; BB(0x0067a439);
    /* 0067a439: mov word ptr [0x16306e0], 0 */ W16((u32)(0x16306e0u), 0x0u);
    /* 0067a442: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a447: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67a44cu); f_00686d82();
    /* 0067a44c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067a44f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067a452: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a459: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a45d: je 0x67a46c */ if (fZ) goto L_0067a46c;
L_0067a45f:; BB(0x0067a45f);
    /* 0067a45f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067a462: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67a467u); f_005f5f50();
    /* 0067a467: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067a46a: jmp 0x67a473 */ goto L_0067a473;
L_0067a46c:; BB(0x0067a46c);
    /* 0067a46c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0067a473:; BB(0x0067a473);
    /* 0067a473: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067a476: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0067a479: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a480: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a483: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067a486: mov dword ptr [edx + 0x204], eax */ W32((u32)(r_edx+0x204u), r_eax);
    /* 0067a48c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a48f: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0067a495: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a498: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067a49b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067a49e: push 0x249f20 */ { u32 v = 0x249f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4a3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a4a6: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0067a4ac: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67a4b1u); f_005eaf00();
    /* 0067a4b1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a4b4: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0067a4ba: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a4bd: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0067a4c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a4c5: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a4c7: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067a4ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a4ccu); call_ind(t); }
    /* 0067a4cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4ce: push 0xe678 */ { u32 v = 0xe678u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067a4d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4d9: push 0x249f20 */ { u32 v = 0x249f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4de: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a4e1: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0067a4e7: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67a4ecu); f_005eae80();
    /* 0067a4ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4ef: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067a4f5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067a4f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a4f9: fld1  */ FPUSH(1.0);
    /* 0067a4fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067a4fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a500: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a502: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a504: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a506: push 0x1f53 */ { u32 v = 0x1f53u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a50b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067a510: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067a512: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067a518: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067a51e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a520u); call_ind(t); }
    /* 0067a520: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a523: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0067a529: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a52c: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0067a532: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067a534: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067a537: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a539u); call_ind(t); }
    /* 0067a539: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a53c: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0067a542: mov dword ptr [edx + 0x184], 2 */ W32((u32)(r_edx+0x184u), 0x2u);
    /* 0067a54c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a54f: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0067a555: mov dword ptr [ecx + 0x188], 0xa */ W32((u32)(r_ecx+0x188u), 0xau);
    /* 0067a55f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a561: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a563: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a566: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067a56c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a56f: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067a575: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067a577: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067a57a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a57cu); call_ind(t); }
    /* 0067a57c: jmp 0x67a921 */ goto L_0067a921;
L_0067a581:; BB(0x0067a581);
    /* 0067a581: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a583: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67a588u); f_00686d82();
    /* 0067a588: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067a58b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067a58e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067a595: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a599: je 0x67a5b0 */ if (fZ) goto L_0067a5b0;
L_0067a59b:; BB(0x0067a59b);
    /* 0067a59b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a59d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a59f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5a3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a5a6: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67a5abu); f_00606e60();
    /* 0067a5ab: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067a5ae: jmp 0x67a5b7 */ goto L_0067a5b7;
L_0067a5b0:; BB(0x0067a5b0);
    /* 0067a5b0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0067a5b7:; BB(0x0067a5b7);
    /* 0067a5b7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067a5ba: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0067a5bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a5c4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067a5c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5c8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a5cb: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0067a5d1: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67a5d6u); f_005f6050();
    /* 0067a5d6: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5d8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5da: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a5dd: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067a5e3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a5e6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067a5ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067a5ee: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067a5f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a5f3u); call_ind(t); }
    /* 0067a5f3: jmp 0x67a921 */ goto L_0067a921;
L_0067a5f8:; BB(0x0067a5f8);
    /* 0067a5f8: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a5fd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67a602u); f_00686d82();
    /* 0067a602: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067a605: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067a608: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067a60f: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a613: je 0x67a622 */ if (fZ) goto L_0067a622;
L_0067a615:; BB(0x0067a615);
    /* 0067a615: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067a618: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67a61du); f_005f5f50();
    /* 0067a61d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067a620: jmp 0x67a629 */ goto L_0067a629;
L_0067a622:; BB(0x0067a622);
    /* 0067a622: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0067a629:; BB(0x0067a629);
    /* 0067a629: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067a62c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067a62f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a636: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a639: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a63c: mov dword ptr [edx + 0x208], eax */ W32((u32)(r_edx+0x208u), r_eax);
    /* 0067a642: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a645: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0067a64b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a64e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067a651: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067a654: push 0x249f21 */ { u32 v = 0x249f21u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a659: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a65c: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 0067a662: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67a667u); f_005eaf00();
    /* 0067a667: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a66a: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0067a670: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a673: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0067a679: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a67b: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a67d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067a680: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a682u); call_ind(t); }
    /* 0067a682: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a684: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a689: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a68b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a68d: push 0x249f21 */ { u32 v = 0x249f21u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a692: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a695: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0067a69b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67a6a0u); f_005eae80();
    /* 0067a6a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6a3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067a6a9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067a6ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6ad: fld1  */ FPUSH(1.0);
    /* 0067a6af: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067a6b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6ba: push 0x1f54 */ { u32 v = 0x1f54u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6bf: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0067a6c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a6c7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067a6cd: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0067a6d3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67a6d5u); call_ind(t); }
    /* 0067a6d5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a6d8: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0067a6de: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a6e1: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0067a6e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a6e9: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a6eb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067a6ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a6f0u); call_ind(t); }
    /* 0067a6f0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a6f2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67a6f7u); f_00686d82();
    /* 0067a6f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067a6fa: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067a6fd: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067a704: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a708: je 0x67a721 */ if (fZ) goto L_0067a721;
L_0067a70a:; BB(0x0067a70a);
    /* 0067a70a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a70d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067a713: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a714: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067a717: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x67a71cu); f_00600b60();
    /* 0067a71c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067a71f: jmp 0x67a728 */ goto L_0067a728;
L_0067a721:; BB(0x0067a721);
    /* 0067a721: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0067a728:; BB(0x0067a728);
    /* 0067a728: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067a72b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067a72e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a735: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067a738: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a739: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a73c: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 0067a742: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67a747u); f_005f5d50();
    /* 0067a747: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a749: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a74c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067a752: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a755: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067a75b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a75d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a75f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067a762: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a764u); call_ind(t); }
    /* 0067a764: jmp 0x67a921 */ goto L_0067a921;
L_0067a769:; BB(0x0067a769);
    /* 0067a769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a76b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a76e: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0067a774: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67a779u); f_005f5d50();
    /* 0067a779: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a77b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a77c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067a782: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067a785: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a786: fld1  */ FPUSH(1.0);
    /* 0067a788: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067a78b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a78d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a78f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a791: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a793: push 0x1f55 */ { u32 v = 0x1f55u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a798: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0067a79e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a7a0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067a7a6: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0067a7ac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67a7aeu); call_ind(t); }
    /* 0067a7ae: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a7b0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a7b3: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0067a7b9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a7bc: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0067a7c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a7c4: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a7c6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067a7cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a7ceu); call_ind(t); }
    /* 0067a7ce: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a7d0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a7d2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a7d5: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067a7db: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a7de: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067a7e4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067a7e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067a7e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a7ebu); call_ind(t); }
    /* 0067a7eb: jmp 0x67a921 */ goto L_0067a921;
L_0067a7f0:; BB(0x0067a7f0);
    /* 0067a7f0: movsx ecx, word ptr [0x16306e0] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x16306e0u));
    /* 0067a7f7: mov dx, word ptr [0x16306e0] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x16306e0u))) & 0xffffu);
    /* 0067a7fe: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0067a802: mov word ptr [0x16306e0], dx */ W16((u32)(0x16306e0u), (u16)r_edx);
    /* 0067a809: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a80c: jne 0x67a82f */ if (!fZ) goto L_0067a82f;
L_0067a80e:; BB(0x0067a80e);
    /* 0067a80e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a810: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a812: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a815: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067a81b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a81e: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067a824: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a826: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a828: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067a82b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a82du); call_ind(t); }
    /* 0067a82d: jmp 0x67a86a */ goto L_0067a86a;
L_0067a82f:; BB(0x0067a82f);
    /* 0067a82f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a831: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a834: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0067a83a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a83d: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0067a843: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067a845: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067a84b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a84du); call_ind(t); }
    /* 0067a84d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a84f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a851: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a854: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067a85a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a85d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067a863: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067a865: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067a868: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a86au); call_ind(t); }
L_0067a86a:; BB(0x0067a86a);
    /* 0067a86a: jmp 0x67a921 */ goto L_0067a921;
L_0067a86f:; BB(0x0067a86f);
    /* 0067a86f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a872: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0067a878: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a87b: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0067a881: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067a883: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067a886: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a888u); call_ind(t); }
    /* 0067a888: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a88a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67a88fu); f_00686d82();
    /* 0067a88f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067a892: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067a895: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067a89c: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a8a0: je 0x67a8c2 */ if (fZ) goto L_0067a8c2;
L_0067a8a2:; BB(0x0067a8a2);
    /* 0067a8a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8a4: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8ab: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a8ae: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067a8b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8b5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067a8b8: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67a8bdu); f_00606e60();
    /* 0067a8bd: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067a8c0: jmp 0x67a8c9 */ goto L_0067a8c9;
L_0067a8c2:; BB(0x0067a8c2);
    /* 0067a8c2: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0067a8c9:; BB(0x0067a8c9);
    /* 0067a8c9: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0067a8cc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067a8cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067a8d6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067a8d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8da: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a8dd: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0067a8e3: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67a8e8u); f_005f6050();
    /* 0067a8e8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a8ea: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a8ed: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067a8f3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067a8f6: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067a8fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a8fe: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a900: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067a903: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a905u); call_ind(t); }
    /* 0067a905: jmp 0x67a921 */ goto L_0067a921;
L_0067a907:; BB(0x0067a907);
    /* 0067a907: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a909: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067a90f: call 0x5f45d0 */ r_esp -= 4; W32(r_esp, 0x67a914u); f_005f45d0();
    /* 0067a914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a916: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067a91c: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67a921u); f_00650550();
L_0067a921:; BB(0x0067a921);
    /* 0067a921: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a924: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a92b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067a92c: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a92e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a92f: ret 4 */ FN_RET(0x0067a370); r_esp += 8; return;
}

void f_0067a950(void) /* sub_67A950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067a950);
    /* 0067a950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a951: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a955: push 0x6ad888 */ { u32 v = 0x6ad888u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067a960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a961: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067a964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067a969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067a96b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067a96c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067a96f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067a975: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067a978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a97a: push 0x1f4e */ { u32 v = 0x1f4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a97f: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a984: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067a989: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067a98c: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a991u); f_006044b0();
    /* 0067a991: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a993: push 0x1f4f */ { u32 v = 0x1f4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067a998: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a99d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067a9a3: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067a9a6: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a9abu); f_006044b0();
    /* 0067a9ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9ad: push 0x1f50 */ { u32 v = 0x1f50u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9b2: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9b7: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067a9bd: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067a9c0: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a9c5u); f_006044b0();
    /* 0067a9c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9c7: push 0x1f51 */ { u32 v = 0x1f51u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9cc: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9d1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067a9d6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067a9d9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a9deu); f_006044b0();
    /* 0067a9de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9e0: push 0x1f52 */ { u32 v = 0x1f52u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9e5: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a9ea: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067a9f0: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067a9f3: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67a9f8u); f_006044b0();
    /* 0067a9f8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067a9ff: jmp 0x67aa0a */ goto L_0067aa0a;
L_0067aa01:; BB(0x0067aa01);
    /* 0067aa01: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067aa04: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067aa07: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0067aa0a:; BB(0x0067aa0a);
    /* 0067aa0a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067aa0e: jge 0x67aa4e */ if ((fS==fO)) goto L_0067aa4e;
L_0067aa10:; BB(0x0067aa10);
    /* 0067aa10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa12: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067aa15: add eax, 0x249f22 */ {  u32 a = r_eax; u32 b = 0x249f22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067aa1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa1b: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa20: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067aa26: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067aa29: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67aa2eu); f_006044b0();
    /* 0067aa2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa30: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067aa33: add edx, 0x249f69 */ {  u32 a = r_edx; u32 b = 0x249f69u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067aa39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa3a: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa3f: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067aa44: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067aa47: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67aa4cu); f_006044b0();
    /* 0067aa4c: jmp 0x67aa01 */ goto L_0067aa01;
L_0067aa4e:; BB(0x0067aa4e);
    /* 0067aa4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa50: push 0x249f2a */ { u32 v = 0x249f2au; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa55: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa5a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067aa60: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067aa63: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67aa68u); f_006044b0();
    /* 0067aa68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa6a: push 0x249f2b */ { u32 v = 0x249f2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa6f: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aa74: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067aa7a: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067aa7d: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67aa82u); f_006044b0();
    /* 0067aa82: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067aa89: jmp 0x67aa94 */ goto L_0067aa94;
L_0067aa8b:; BB(0x0067aa8b);
    /* 0067aa8b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067aa8e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067aa91: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0067aa94:; BB(0x0067aa94);
    /* 0067aa94: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067aa98: jge 0x67ac51 */ if ((fS==fO)) goto L_0067ac51;
L_0067aa9e:; BB(0x0067aa9e);
    /* 0067aa9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067aaa1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067aaa4: cmp dword ptr [edx + ecx*4 + 0x20c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067aaac: jne 0x67aafc */ if (!fZ) goto L_0067aafc;
L_0067aaae:; BB(0x0067aaae);
    /* 0067aaae: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aab3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67aab8u); f_00686d82();
    /* 0067aab8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067aabb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067aabe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067aac5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067aac9: je 0x67aad8 */ if (fZ) goto L_0067aad8;
L_0067aacb:; BB(0x0067aacb);
    /* 0067aacb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067aace: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67aad3u); f_005f5f50();
    /* 0067aad3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067aad6: jmp 0x67aadf */ goto L_0067aadf;
L_0067aad8:; BB(0x0067aad8);
    /* 0067aad8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0067aadf:; BB(0x0067aadf);
    /* 0067aadf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067aae2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067aae5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067aaec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067aaef: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067aaf2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067aaf5: mov dword ptr [edx + ecx*4 + 0x20c], eax */ W32((u32)(r_edx+r_ecx*4+0x20cu), r_eax);
L_0067aafc:; BB(0x0067aafc);
    /* 0067aafc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067aaff: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ab02: mov eax, dword ptr [edx + ecx*4 + 0x20c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0067ab09: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ab0c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0067ab0f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0067ab12: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ab15: add eax, 0x249f22 */ {  u32 a = r_eax; u32 b = 0x249f22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ab1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab1b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ab1e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ab21: mov ecx, dword ptr [edx + ecx*4 + 0x20c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20cu));
    /* 0067ab28: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67ab2du); f_005eaf00();
    /* 0067ab2d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ab30: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ab33: mov edx, dword ptr [ecx + eax*4 + 0x20c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0067ab3a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ab3d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ab40: mov ecx, dword ptr [ecx + eax*4 + 0x20c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 0067ab47: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ab49: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067ab4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ab4eu); call_ind(t); }
    /* 0067ab4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab50: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab59: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ab5c: add ecx, 0x249f22 */ {  u32 a = r_ecx; u32 b = 0x249f22u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ab62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab63: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ab66: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ab69: mov ecx, dword ptr [eax + edx*4 + 0x20c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 0067ab70: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ab75u); f_005eae80();
    /* 0067ab75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ab78: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ab7b: cmp dword ptr [edx + ecx*4 + 0x21c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x21cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ab83: jne 0x67abd3 */ if (!fZ) goto L_0067abd3;
L_0067ab85:; BB(0x0067ab85);
    /* 0067ab85: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ab8a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ab8fu); f_00686d82();
    /* 0067ab8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ab92: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067ab95: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067ab9c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067aba0: je 0x67abaf */ if (fZ) goto L_0067abaf;
L_0067aba2:; BB(0x0067aba2);
    /* 0067aba2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067aba5: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67abaau); f_005f5f50();
    /* 0067abaa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067abad: jmp 0x67abb6 */ goto L_0067abb6;
L_0067abaf:; BB(0x0067abaf);
    /* 0067abaf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0067abb6:; BB(0x0067abb6);
    /* 0067abb6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067abb9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067abbc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067abc3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067abc6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067abc9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067abcc: mov dword ptr [edx + ecx*4 + 0x21c], eax */ W32((u32)(r_edx+r_ecx*4+0x21cu), r_eax);
L_0067abd3:; BB(0x0067abd3);
    /* 0067abd3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067abd6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067abd9: mov eax, dword ptr [edx + ecx*4 + 0x21c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x21cu));
    /* 0067abe0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067abe3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0067abe6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0067abe9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067abec: add eax, 0x249f26 */ {  u32 a = r_eax; u32 b = 0x249f26u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067abf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067abf2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067abf5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067abf8: mov ecx, dword ptr [edx + ecx*4 + 0x21c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x21cu));
    /* 0067abff: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67ac04u); f_005eaf00();
    /* 0067ac04: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ac07: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ac0a: mov edx, dword ptr [ecx + eax*4 + 0x21c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0067ac11: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ac14: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ac17: mov ecx, dword ptr [ecx + eax*4 + 0x21c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x21cu));
    /* 0067ac1e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ac20: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067ac23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ac25u); call_ind(t); }
    /* 0067ac25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac27: push 0xea61 */ { u32 v = 0xea61u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ac33: add ecx, 0x249f26 */ {  u32 a = r_ecx; u32 b = 0x249f26u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ac39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac3a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ac3d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ac40: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 0067ac47: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ac4cu); f_005eae80();
    /* 0067ac4c: jmp 0x67aa8b */ goto L_0067aa8b;
L_0067ac51:; BB(0x0067ac51);
    /* 0067ac51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067ac54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067ac5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ac5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0067ac5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067ac5f: ret  */ FN_RET(0x0067a950); r_esp += 4; return;
}

void f_0067ac60(void) /* sub_67AC60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067ac60);
    /* 0067ac60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac61: mov ebp, esp */ r_ebp = r_esp;
    /* 0067ac63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac65: push 0x6ad8e5 */ { u32 v = 0x6ad8e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067ac70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac71: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067ac74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067ac79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067ac7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ac7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067ac7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067ac85: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0067ac88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067ac8b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067ac8e: cmp dword ptr [ebp - 0x44], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067ac92: ja 0x67b416 */ if ((!fC&&!fZ)) goto L_0067b416;
L_0067ac98:; BB(0x0067ac98);
    /* 0067ac98: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067ac9b: jmp dword ptr [ecx*4 + 0x67b428] */ { u32 t = R32((u32)(r_ecx*4+0x67b428u)); switch (t) { case 0x67aca2u: goto L_0067aca2; case 0x67ae4cu: goto L_0067ae4c; case 0x67af48u: goto L_0067af48; case 0x67afd7u: goto L_0067afd7; case 0x67b09eu: goto L_0067b09e; case 0x67b162u: goto L_0067b162; case 0x67b229u: goto L_0067b229; case 0x67b2b8u: goto L_0067b2b8; case 0x67b37fu: goto L_0067b37f; case 0x67b3fcu: goto L_0067b3fc; default: UNSUP(0x0067ac9b, "jump table entry is not a known target"); } }
L_0067aca2:; BB(0x0067aca2);
    /* 0067aca2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067aca5: call 0x67a950 */ r_esp -= 4; W32(r_esp, 0x67acaau); f_0067a950();
    /* 0067acaa: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067acaf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67acb4u); f_00686d82();
    /* 0067acb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067acb7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067acba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067acc1: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067acc5: je 0x67acd4 */ if (fZ) goto L_0067acd4;
L_0067acc7:; BB(0x0067acc7);
    /* 0067acc7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067acca: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67accfu); f_005f5f50();
    /* 0067accf: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067acd2: jmp 0x67acdb */ goto L_0067acdb;
L_0067acd4:; BB(0x0067acd4);
    /* 0067acd4: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0067acdb:; BB(0x0067acdb);
    /* 0067acdb: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067acde: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0067ace1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ace8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067aceb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067acee: mov dword ptr [eax + 0x22c], ecx */ W32((u32)(r_eax+0x22cu), r_ecx);
    /* 0067acf4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067acf7: mov eax, dword ptr [edx + 0x22c] */ r_eax = R32((u32)(r_edx+0x22cu));
    /* 0067acfd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ad00: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0067ad03: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0067ad06: push 0x249f2a */ { u32 v = 0x249f2au; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad0b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ad0e: mov ecx, dword ptr [eax + 0x22c] */ r_ecx = R32((u32)(r_eax+0x22cu));
    /* 0067ad14: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67ad19u); f_005eaf00();
    /* 0067ad19: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ad1c: mov edx, dword ptr [ecx + 0x22c] */ r_edx = R32((u32)(r_ecx+0x22cu));
    /* 0067ad22: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ad25: mov ecx, dword ptr [eax + 0x22c] */ r_ecx = R32((u32)(r_eax+0x22cu));
    /* 0067ad2b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ad2d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067ad30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ad32u); call_ind(t); }
    /* 0067ad32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad34: push 0xe679 */ { u32 v = 0xe679u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad3d: push 0x249f2a */ { u32 v = 0x249f2au; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad42: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ad45: mov ecx, dword ptr [ecx + 0x22c] */ r_ecx = R32((u32)(r_ecx+0x22cu));
    /* 0067ad4b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ad50u); f_005eae80();
    /* 0067ad50: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ad53: mov eax, dword ptr [edx + 0x22c] */ r_eax = R32((u32)(r_edx+0x22cu));
    /* 0067ad59: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ad5c: mov ecx, dword ptr [ecx + 0x22c] */ r_ecx = R32((u32)(r_ecx+0x22cu));
    /* 0067ad62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067ad64: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ad67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ad69u); call_ind(t); }
    /* 0067ad69: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ad6e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67ad73u); f_00686d82();
    /* 0067ad73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ad76: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067ad79: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067ad80: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ad84: je 0x67ad93 */ if (fZ) goto L_0067ad93;
L_0067ad86:; BB(0x0067ad86);
    /* 0067ad86: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067ad89: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67ad8eu); f_005f5f50();
    /* 0067ad8e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067ad91: jmp 0x67ad9a */ goto L_0067ad9a;
L_0067ad93:; BB(0x0067ad93);
    /* 0067ad93: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0067ad9a:; BB(0x0067ad9a);
    /* 0067ad9a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067ad9d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0067ada0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ada7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067adaa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067adad: mov dword ptr [edx + 0x230], eax */ W32((u32)(r_edx+0x230u), r_eax);
    /* 0067adb3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067adb6: mov edx, dword ptr [ecx + 0x230] */ r_edx = R32((u32)(r_ecx+0x230u));
    /* 0067adbc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067adbf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067adc2: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067adc5: push 0x249f2b */ { u32 v = 0x249f2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067adca: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067adcd: mov ecx, dword ptr [edx + 0x230] */ r_ecx = R32((u32)(r_edx+0x230u));
    /* 0067add3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67add8u); f_005eaf00();
    /* 0067add8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067addb: mov ecx, dword ptr [eax + 0x230] */ r_ecx = R32((u32)(r_eax+0x230u));
    /* 0067ade1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ade4: mov eax, dword ptr [edx + 0x230] */ r_eax = R32((u32)(r_edx+0x230u));
    /* 0067adea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067adec: mov ecx, eax */ r_ecx = r_eax;
    /* 0067adee: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067adf1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67adf3u); call_ind(t); }
    /* 0067adf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067adf5: push 0xe678 */ { u32 v = 0xe678u; r_esp -= 4; W32(r_esp, v); }
    /* 0067adfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067adfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067adfe: push 0x249f2b */ { u32 v = 0x249f2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae03: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ae06: mov ecx, dword ptr [ecx + 0x230] */ r_ecx = R32((u32)(r_ecx+0x230u));
    /* 0067ae0c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67ae11u); f_005eae80();
    /* 0067ae11: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ae14: mov eax, dword ptr [edx + 0x230] */ r_eax = R32((u32)(r_edx+0x230u));
    /* 0067ae1a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ae1d: mov ecx, dword ptr [ecx + 0x230] */ r_ecx = R32((u32)(r_ecx+0x230u));
    /* 0067ae23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067ae25: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067ae28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ae2au); call_ind(t); }
    /* 0067ae2a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae2e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ae31: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067ae37: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ae3a: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067ae40: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ae42: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067ae45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ae47u); call_ind(t); }
    /* 0067ae47: jmp 0x67b416 */ goto L_0067b416;
L_0067ae4c:; BB(0x0067ae4c);
    /* 0067ae4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae4f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067ae55: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ae58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae59: fld1  */ FPUSH(1.0);
    /* 0067ae5b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ae5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae60: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae66: push 0x1f4e */ { u32 v = 0x1f4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae6b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067ae71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067ae73: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067ae79: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067ae7f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ae81u); call_ind(t); }
    /* 0067ae81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae84: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067ae8a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ae8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae8e: fld1  */ FPUSH(1.0);
    /* 0067ae90: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067ae93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae95: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ae9b: push 0x1f4f */ { u32 v = 0x1f4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067aea0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067aea6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067aea8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067aeae: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067aeb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67aeb6u); call_ind(t); }
    /* 0067aeb6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067aeb9: mov edx, dword ptr [ecx + 0x21c] */ r_edx = R32((u32)(r_ecx+0x21cu));
    /* 0067aebf: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067aec2: mov ecx, dword ptr [eax + 0x21c] */ r_ecx = R32((u32)(r_eax+0x21cu));
    /* 0067aec8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067aeca: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067aecd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67aecfu); call_ind(t); }
    /* 0067aecf: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067aed1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67aed6u); f_00686d82();
    /* 0067aed6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067aed9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067aedc: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067aee3: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067aee7: je 0x67af00 */ if (fZ) goto L_0067af00;
L_0067aee9:; BB(0x0067aee9);
    /* 0067aee9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067aeec: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067aef2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067aef3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067aef6: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x67aefbu); f_00600b60();
    /* 0067aefb: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067aefe: jmp 0x67af07 */ goto L_0067af07;
L_0067af00:; BB(0x0067af00);
    /* 0067af00: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0067af07:; BB(0x0067af07);
    /* 0067af07: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067af0a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067af0d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067af14: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067af17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067af18: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af1b: mov ecx, dword ptr [edx + 0x21c] */ r_ecx = R32((u32)(r_edx+0x21cu));
    /* 0067af21: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67af26u); f_005f5d50();
    /* 0067af26: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067af28: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af2b: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067af31: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af34: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067af3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067af3c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067af3e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067af41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67af43u); call_ind(t); }
    /* 0067af43: jmp 0x67b416 */ goto L_0067b416;
L_0067af48:; BB(0x0067af48);
    /* 0067af48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067af4a: push 0x1f4e */ { u32 v = 0x1f4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067af4f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067af55: call 0x5f44e0 */ r_esp -= 4; W32(r_esp, 0x67af5au); f_005f44e0();
    /* 0067af5a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af5d: mov edx, dword ptr [ecx + 0x230] */ r_edx = R32((u32)(r_ecx+0x230u));
    /* 0067af63: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af66: mov ecx, dword ptr [eax + 0x230] */ r_ecx = R32((u32)(r_eax+0x230u));
    /* 0067af6c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067af6e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067af71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67af73u); call_ind(t); }
    /* 0067af73: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af76: mov edx, dword ptr [ecx + 0x21c] */ r_edx = R32((u32)(r_ecx+0x21cu));
    /* 0067af7c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af7f: mov ecx, dword ptr [eax + 0x21c] */ r_ecx = R32((u32)(r_eax+0x21cu));
    /* 0067af85: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067af87: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067af8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67af8cu); call_ind(t); }
    /* 0067af8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067af8e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af91: mov ecx, dword ptr [ecx + 0x21c] */ r_ecx = R32((u32)(r_ecx+0x21cu));
    /* 0067af97: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67af9cu); f_005f5d50();
    /* 0067af9c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067af9f: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0067afa5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067afa8: mov ecx, dword ptr [ecx + 0x20c] */ r_ecx = R32((u32)(r_ecx+0x20cu));
    /* 0067afae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067afb0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067afb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67afb5u); call_ind(t); }
    /* 0067afb5: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0067afb7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067afb9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067afbc: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067afc2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067afc5: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067afcb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067afcd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067afd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67afd2u); call_ind(t); }
    /* 0067afd2: jmp 0x67b416 */ goto L_0067b416;
L_0067afd7:; BB(0x0067afd7);
    /* 0067afd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067afd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067afda: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067afe0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067afe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067afe4: fld1  */ FPUSH(1.0);
    /* 0067afe6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067afe9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067afeb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067afed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067afef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aff1: push 0x1f50 */ { u32 v = 0x1f50u; r_esp -= 4; W32(r_esp, v); }
    /* 0067aff6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067affc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067affe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b004: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067b00a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b00cu); call_ind(t); }
    /* 0067b00c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b00f: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 0067b015: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b018: mov ecx, dword ptr [eax + 0x220] */ r_ecx = R32((u32)(r_eax+0x220u));
    /* 0067b01e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b020: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067b023: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b025u); call_ind(t); }
    /* 0067b025: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b027: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b02cu); f_00686d82();
    /* 0067b02c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b02f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067b032: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067b039: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b03d: je 0x67b056 */ if (fZ) goto L_0067b056;
L_0067b03f:; BB(0x0067b03f);
    /* 0067b03f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b042: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b048: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b049: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067b04c: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x67b051u); f_00600b60();
    /* 0067b051: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067b054: jmp 0x67b05d */ goto L_0067b05d;
L_0067b056:; BB(0x0067b056);
    /* 0067b056: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0067b05d:; BB(0x0067b05d);
    /* 0067b05d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0067b060: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067b063: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b06a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067b06d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b06e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b071: mov ecx, dword ptr [edx + 0x220] */ r_ecx = R32((u32)(r_edx+0x220u));
    /* 0067b077: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67b07cu); f_005f5d50();
    /* 0067b07c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b07e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b081: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b087: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b08a: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067b090: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b092: mov ecx, eax */ r_ecx = r_eax;
    /* 0067b094: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067b097: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b099u); call_ind(t); }
    /* 0067b099: jmp 0x67b416 */ goto L_0067b416;
L_0067b09e:; BB(0x0067b09e);
    /* 0067b09e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0a0: push 0x1f50 */ { u32 v = 0x1f50u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0a5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b0ab: call 0x5f44e0 */ r_esp -= 4; W32(r_esp, 0x67b0b0u); f_005f44e0();
    /* 0067b0b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0b3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067b0b9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b0bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0bd: fld1  */ FPUSH(1.0);
    /* 0067b0bf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b0c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0c4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0ca: push 0x1f51 */ { u32 v = 0x1f51u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b0d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b0d7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b0dd: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067b0e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b0e5u); call_ind(t); }
    /* 0067b0e5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b0e8: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0067b0ee: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b0f1: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0067b0f7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b0f9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067b0fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b0feu); call_ind(t); }
    /* 0067b0fe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b101: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 0067b107: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b10a: mov ecx, dword ptr [eax + 0x220] */ r_ecx = R32((u32)(r_eax+0x220u));
    /* 0067b110: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b112: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067b115: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b117u); call_ind(t); }
    /* 0067b117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b119: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b11c: mov ecx, dword ptr [ecx + 0x220] */ r_ecx = R32((u32)(r_ecx+0x220u));
    /* 0067b122: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67b127u); f_005f5d50();
    /* 0067b127: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b12a: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0067b130: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b133: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 0067b139: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067b13b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067b13e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b140u); call_ind(t); }
    /* 0067b140: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b142: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b144: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b147: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b14d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b150: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b156: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b158: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067b15b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b15du); call_ind(t); }
    /* 0067b15d: jmp 0x67b416 */ goto L_0067b416;
L_0067b162:; BB(0x0067b162);
    /* 0067b162: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b164: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b165: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067b16b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b16e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b16f: fld1  */ FPUSH(1.0);
    /* 0067b171: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b174: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b176: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b178: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b17a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b17c: push 0x1f50 */ { u32 v = 0x1f50u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b181: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b187: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b189: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b18f: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067b195: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b197u); call_ind(t); }
    /* 0067b197: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b19a: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0067b1a0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b1a3: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0067b1a9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b1ab: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067b1ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b1b0u); call_ind(t); }
    /* 0067b1b0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b1b2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b1b7u); f_00686d82();
    /* 0067b1b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b1ba: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067b1bd: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067b1c4: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b1c8: je 0x67b1e1 */ if (fZ) goto L_0067b1e1;
L_0067b1ca:; BB(0x0067b1ca);
    /* 0067b1ca: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b1cd: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b1d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b1d4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067b1d7: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x67b1dcu); f_00600b60();
    /* 0067b1dc: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0067b1df: jmp 0x67b1e8 */ goto L_0067b1e8;
L_0067b1e1:; BB(0x0067b1e1);
    /* 0067b1e1: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0067b1e8:; BB(0x0067b1e8);
    /* 0067b1e8: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067b1eb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067b1ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b1f5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067b1f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b1f9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b1fc: mov ecx, dword ptr [edx + 0x224] */ r_ecx = R32((u32)(r_edx+0x224u));
    /* 0067b202: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67b207u); f_005f5d50();
    /* 0067b207: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b209: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b20c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b212: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b215: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067b21b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b21d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067b21f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067b222: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b224u); call_ind(t); }
    /* 0067b224: jmp 0x67b416 */ goto L_0067b416;
L_0067b229:; BB(0x0067b229);
    /* 0067b229: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b22b: push 0x1f50 */ { u32 v = 0x1f50u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b230: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b236: call 0x5f44e0 */ r_esp -= 4; W32(r_esp, 0x67b23bu); f_005f44e0();
    /* 0067b23b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b23e: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0067b244: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b247: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0067b24d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b24f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067b252: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b254u); call_ind(t); }
    /* 0067b254: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b257: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0067b25d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b260: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0067b266: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b268: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067b26b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b26du); call_ind(t); }
    /* 0067b26d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b26f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b272: mov ecx, dword ptr [ecx + 0x224] */ r_ecx = R32((u32)(r_ecx+0x224u));
    /* 0067b278: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67b27du); f_005f5d50();
    /* 0067b27d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b280: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0067b286: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b289: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 0067b28f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067b291: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067b294: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b296u); call_ind(t); }
    /* 0067b296: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b298: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b29a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b29d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b2a3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b2a6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b2ac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b2ae: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067b2b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b2b3u); call_ind(t); }
    /* 0067b2b3: jmp 0x67b416 */ goto L_0067b416;
L_0067b2b8:; BB(0x0067b2b8);
    /* 0067b2b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2bb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067b2c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b2c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2c5: fld1  */ FPUSH(1.0);
    /* 0067b2c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b2ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2cc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2d2: push 0x1f52 */ { u32 v = 0x1f52u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b2d7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b2dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b2df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b2e5: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067b2eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b2edu); call_ind(t); }
    /* 0067b2ed: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b2f0: mov edx, dword ptr [ecx + 0x228] */ r_edx = R32((u32)(r_ecx+0x228u));
    /* 0067b2f6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b2f9: mov ecx, dword ptr [eax + 0x228] */ r_ecx = R32((u32)(r_eax+0x228u));
    /* 0067b2ff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b301: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067b304: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b306u); call_ind(t); }
    /* 0067b306: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b308: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b30du); f_00686d82();
    /* 0067b30d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b310: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067b313: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067b31a: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b31e: je 0x67b337 */ if (fZ) goto L_0067b337;
L_0067b320:; BB(0x0067b320);
    /* 0067b320: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b323: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b329: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b32a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067b32d: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x67b332u); f_00600b60();
    /* 0067b332: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0067b335: jmp 0x67b33e */ goto L_0067b33e;
L_0067b337:; BB(0x0067b337);
    /* 0067b337: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0067b33e:; BB(0x0067b33e);
    /* 0067b33e: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0067b341: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067b344: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b34b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067b34e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b34f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b352: mov ecx, dword ptr [edx + 0x228] */ r_ecx = R32((u32)(r_edx+0x228u));
    /* 0067b358: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67b35du); f_005f5d50();
    /* 0067b35d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b35f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b362: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b368: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b36b: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067b371: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b373: mov ecx, eax */ r_ecx = r_eax;
    /* 0067b375: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067b378: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b37au); call_ind(t); }
    /* 0067b37a: jmp 0x67b416 */ goto L_0067b416;
L_0067b37f:; BB(0x0067b37f);
    /* 0067b37f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b382: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 0067b388: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b38b: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0067b391: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b393: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067b396: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b398u); call_ind(t); }
    /* 0067b398: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b39b: mov edx, dword ptr [ecx + 0x228] */ r_edx = R32((u32)(r_ecx+0x228u));
    /* 0067b3a1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b3a4: mov ecx, dword ptr [eax + 0x228] */ r_ecx = R32((u32)(r_eax+0x228u));
    /* 0067b3aa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b3ac: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067b3af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b3b1u); call_ind(t); }
    /* 0067b3b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b3b3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b3b6: mov ecx, dword ptr [ecx + 0x228] */ r_ecx = R32((u32)(r_ecx+0x228u));
    /* 0067b3bc: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67b3c1u); f_005f5d50();
    /* 0067b3c1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b3c4: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 0067b3ca: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b3cd: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 0067b3d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067b3d5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067b3d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b3dau); call_ind(t); }
    /* 0067b3da: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b3df: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b3e1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b3e4: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b3ea: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b3ed: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b3f3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b3f5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067b3f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b3fau); call_ind(t); }
    /* 0067b3fa: jmp 0x67b416 */ goto L_0067b416;
L_0067b3fc:; BB(0x0067b3fc);
    /* 0067b3fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b3fe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b404: call 0x5f45d0 */ r_esp -= 4; W32(r_esp, 0x67b409u); f_005f45d0();
    /* 0067b409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b40b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067b411: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67b416u); f_00650550();
L_0067b416:; BB(0x0067b416);
    /* 0067b416: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067b419: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067b420: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b421: mov esp, ebp */ r_esp = r_ebp;
    /* 0067b423: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b424: ret 4 */ FN_RET(0x0067ac60); r_esp += 8; return;
}

