#include "protos.h"

void f_0062a070(void) /* sub_62A070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a070);
    /* 0062a070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a071: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a075: push 0x6ab6a2 */ { u32 v = 0x6ab6a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a081: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a084: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062a089: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a08b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a08c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062a08f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062a095: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062a098: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a09b: call 0x5f5010 */ r_esp -= 4; W32(r_esp, 0x62a0a0u); f_005f5010();
    /* 0062a0a0: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 0062a0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a0a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a0a7: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x62a0acu); f_005f53e0();
    /* 0062a0ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a0af: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a0b3: jne 0x62a0fc */ if (!fZ) goto L_0062a0fc;
L_0062a0b5:; BB(0x0062a0b5);
    /* 0062a0b5: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a0ba: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62a0bfu); f_00686d82();
    /* 0062a0bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a0c2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062a0c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a0cc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a0d0: je 0x62a0df */ if (fZ) goto L_0062a0df;
L_0062a0d2:; BB(0x0062a0d2);
    /* 0062a0d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a0d5: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x62a0dau); f_005f5bf0();
    /* 0062a0da: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062a0dd: jmp 0x62a0e6 */ goto L_0062a0e6;
L_0062a0df:; BB(0x0062a0df);
    /* 0062a0df: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062a0e6:; BB(0x0062a0e6);
    /* 0062a0e6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a0e9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062a0ec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a0f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a0f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062a0f9: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
L_0062a0fc:; BB(0x0062a0fc);
    /* 0062a0fc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a0ff: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0062a102: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a105: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062a108: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062a10b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a10d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062a110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a111: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062a114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a115: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062a118: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a119: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062a11c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a11d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a120: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0062a123: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x62a128u); f_005eae80();
    /* 0062a128: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a12b: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0062a12e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a131: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062a134: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062a137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a139: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062a13c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a13f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a140: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062a143: add ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a146: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a147: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062a14a: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a14d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a14e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0062a151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a152: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a155: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0062a158: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x62a15du); f_005eae80();
    /* 0062a15d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a160: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0062a163: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a166: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062a169: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0062a16c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a16e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062a171: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a175: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062a178: add ecx, dword ptr [ebp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a17b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a17c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062a17f: add edx, dword ptr [ebp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a183: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0062a186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a187: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a18a: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0062a18d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x62a192u); f_005eae80();
    /* 0062a192: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a195: cmp dword ptr [edx + 0x54], 0 */ {  u32 a = R32((u32)(r_edx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a199: jne 0x62a1e2 */ if (!fZ) goto L_0062a1e2;
L_0062a19b:; BB(0x0062a19b);
    /* 0062a19b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1a0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62a1a5u); f_00686d82();
    /* 0062a1a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a1a8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062a1ab: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062a1b2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a1b6: je 0x62a1c5 */ if (fZ) goto L_0062a1c5;
L_0062a1b8:; BB(0x0062a1b8);
    /* 0062a1b8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062a1bb: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x62a1c0u); f_005ec5a0();
    /* 0062a1c0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062a1c3: jmp 0x62a1cc */ goto L_0062a1cc;
L_0062a1c5:; BB(0x0062a1c5);
    /* 0062a1c5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0062a1cc:; BB(0x0062a1cc);
    /* 0062a1cc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062a1cf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062a1d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a1d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a1dc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a1df: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
L_0062a1e2:; BB(0x0062a1e2);
    /* 0062a1e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a1e5: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0062a1e8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a1eb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062a1ee: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062a1f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1f3: mov ecx, dword ptr [ebp + 0x58] */ r_ecx = R32((u32)(r_ebp+0x58u));
    /* 0062a1f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1f7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0062a1fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062a1fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1fe: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062a201: add eax, dword ptr [ebp + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a205: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062a208: add ecx, dword ptr [ebp + 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a20b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a20c: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0062a20f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a210: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0062a213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a214: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0062a217: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a218: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0062a21b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a21c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a21f: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0062a222: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x62a227u); f_005ec8f0();
    /* 0062a227: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a22a: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0062a22d: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 0062a230: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a233: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0062a236: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 0062a239: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a23c: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 0062a23f: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0062a242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a245: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 0062a248: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0062a24b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a24e: mov ecx, dword ptr [ebp + 0x54] */ r_ecx = R32((u32)(r_ebp+0x54u));
    /* 0062a251: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0062a254: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a257: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a25a: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0062a25d: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 0062a260: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a263: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a26a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a26b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a26d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a26e: ret 0x58 */ FN_RET(0x0062a070); r_esp += 92; return;
}

void f_0062a520(void) /* sub_62A520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a520);
    /* 0062a520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a521: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a523: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a526: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062a52b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a52d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062a530: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0062a533: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a536: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062a539: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0062a53c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a53f: call 0x62a630 */ r_esp -= 4; W32(r_esp, 0x62a544u); f_0062a630();
    /* 0062a544: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a547: cmp eax, dword ptr [edx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a54a: jne 0x62a566 */ if (!fZ) goto L_0062a566;
L_0062a54c:; BB(0x0062a54c);
    /* 0062a54c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a54f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0062a552: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a555: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0062a558: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a55a: mov ecx, eax */ r_ecx = r_eax;
    /* 0062a55c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062a562: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a564u); call_ind(t); }
    /* 0062a564: jmp 0x62a57c */ goto L_0062a57c;
L_0062a566:; BB(0x0062a566);
    /* 0062a566: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a569: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0062a56c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a56f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0062a572: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a574: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0062a57a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a57cu); call_ind(t); }
L_0062a57c:; BB(0x0062a57c);
    /* 0062a57c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a57f: call 0x62a630 */ r_esp -= 4; W32(r_esp, 0x62a584u); f_0062a630();
    /* 0062a584: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a587: cmp eax, dword ptr [ecx + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a58a: jne 0x62a5a4 */ if (!fZ) goto L_0062a5a4;
L_0062a58c:; BB(0x0062a58c);
    /* 0062a58c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a58f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0062a592: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a595: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0062a598: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a59a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062a5a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a5a2u); call_ind(t); }
    /* 0062a5a2: jmp 0x62a5ba */ goto L_0062a5ba;
L_0062a5a4:; BB(0x0062a5a4);
    /* 0062a5a4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a5a7: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0062a5aa: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a5ad: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0062a5b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a5b2: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0062a5b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a5bau); call_ind(t); }
L_0062a5ba:; BB(0x0062a5ba);
    /* 0062a5ba: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a5bd: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a5c1: jne 0x62a5c5 */ if (!fZ) goto L_0062a5c5;
L_0062a5c3:; BB(0x0062a5c3);
    /* 0062a5c3: jmp 0x62a616 */ goto L_0062a616;
L_0062a5c5:; BB(0x0062a5c5);
    /* 0062a5c5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a5c8: call 0x62a630 */ r_esp -= 4; W32(r_esp, 0x62a5cdu); f_0062a630();
    /* 0062a5cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5ce: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5d3: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0062a5d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5d7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62a5ddu); call_ind(t); }
    /* 0062a5dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a5e0: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0062a5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5e4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a5e7: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0062a5ea: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a5ed: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0062a5f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a5f2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0062a5f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a5fau); call_ind(t); }
    /* 0062a5fa: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a5fd: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x62a602u); f_005f5400();
    /* 0062a602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a603: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a606: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062a609: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062a60c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062a60f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062a611: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0062a614: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a616u); call_ind(t); }
L_0062a616:; BB(0x0062a616);
    /* 0062a616: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a619: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a61b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62a620u); f_00686d72();
    /* 0062a620: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a623: ret 4 */ FN_RET(0x0062a520); r_esp += 8; return;
}

void f_0062a980(void) /* sub_62A980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a980);
    /* 0062a980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a981: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a983: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a986: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062a989: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a98c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062a98f: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062a992: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a995: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a998: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062a99b: lea ecx, [eax*4 + 0x28] */ r_ecx = (u32)(r_eax*4+0x28u);
    /* 0062a9a2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062a9a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062a9a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9a9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62a9aeu); f_00686d82();
    /* 0062a9ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a9b1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062a9b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062a9b7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062a9ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062a9bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a9c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9c4: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x62a9c9u); f_00686fa2();
    /* 0062a9c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a9cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a9cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a9d3: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062a9d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9d7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a9da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9db: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x62a9e0u); f_00686fde();
    /* 0062a9e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a9e3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a9e6: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062a9e9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0062a9ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9f0: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62a9f5u); f_00686cae();
    /* 0062a9f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a9f8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a9fb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a9fe: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0062aa01: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062aa04: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062aa07: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062aa0a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062aa0d: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0062aa10: mov esp, ebp */ r_esp = r_ebp;
    /* 0062aa12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062aa13: ret  */ FN_RET(0x0062a980); r_esp += 4; return;
}

void f_0062aa20(void) /* sub_62AA20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062aa20);
    /* 0062aa20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa21: mov ebp, esp */ r_ebp = r_esp;
    /* 0062aa23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062aa26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062aa29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aa2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aa2f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0062aa32: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aa35: jne 0x62aa3f */ if (!fZ) goto L_0062aa3f;
L_0062aa37:; BB(0x0062aa37);
    /* 0062aa37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aa3a: call 0x62a980 */ r_esp -= 4; W32(r_esp, 0x62aa3fu); f_0062a980();
L_0062aa3f:; BB(0x0062aa3f);
    /* 0062aa3f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aa42: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062aa45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062aa48: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aa4b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062aa4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062aa51: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062aa54: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0062aa57: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aa5a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0062aa5d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062aa60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aa63: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0062aa66: mov esp, ebp */ r_esp = r_ebp;
    /* 0062aa68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062aa69: ret 4 */ FN_RET(0x0062aa20); r_esp += 8; return;
}

void f_0062aa70(void) /* sub_62AA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062aa70);
    /* 0062aa70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa71: mov ebp, esp */ r_ebp = r_esp;
    /* 0062aa73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062aa77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062aa7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062aa80: call 0x62aae0 */ r_esp -= 4; W32(r_esp, 0x62aa85u); f_0062aae0();
    /* 0062aa85: mov esp, ebp */ r_esp = r_ebp;
    /* 0062aa87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062aa88: ret 4 */ FN_RET(0x0062aa70); r_esp += 8; return;
}

void f_0062aae0(void) /* sub_62AAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062aae0);
    /* 0062aae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062aae3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062aae6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062aae7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062aaea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062aaed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062aaf0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0062aaf3: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aaf6: jne 0x62ab00 */ if (!fZ) goto L_0062ab00;
L_0062aaf8:; BB(0x0062aaf8);
    /* 0062aaf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062aafb: call 0x62a980 */ r_esp -= 4; W32(r_esp, 0x62ab00u); f_0062a980();
L_0062ab00:; BB(0x0062ab00);
    /* 0062ab00: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ab03: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062ab06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062ab09: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ab0c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062ab0f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ab12: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062ab15: jmp 0x62ab20 */ goto L_0062ab20;
L_0062ab17:; BB(0x0062ab17);
    /* 0062ab17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ab1a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ab1d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062ab20:; BB(0x0062ab20);
    /* 0062ab20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ab23: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ab26: jl 0x62ab3d */ if ((fS!=fO)) goto L_0062ab3d;
L_0062ab28:; BB(0x0062ab28);
    /* 0062ab28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ab2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ab2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ab31: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ab34: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 0062ab37: mov dword ptr [ecx + eax*4 + 4], edx */ W32((u32)(r_ecx+r_eax*4+0x4u), r_edx);
    /* 0062ab3b: jmp 0x62ab17 */ goto L_0062ab17;
L_0062ab3d:; BB(0x0062ab3d);
    /* 0062ab3d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ab40: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0062ab43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ab46: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ab49: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0062ab4c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062ab4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ab52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062ab55: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0062ab58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ab59: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ab5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ab5c: ret 8 */ FN_RET(0x0062aae0); r_esp += 12; return;
}

void f_0062ab60(void) /* sub_62AB60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ab60);
    /* 0062ab60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab61: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ab63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ab66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062ab69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ab6c: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x62ab71u); f_0062ac30();
    /* 0062ab71: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0062ab74:; BB(0x0062ab74);
    /* 0062ab74: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab78: je 0x62ab8f */ if (fZ) goto L_0062ab8f;
L_0062ab7a:; BB(0x0062ab7a);
    /* 0062ab7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ab7d: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab80: je 0x62ab8f */ if (fZ) goto L_0062ab8f;
L_0062ab82:; BB(0x0062ab82);
    /* 0062ab82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ab85: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x62ab8au); f_0062ace0();
    /* 0062ab8a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062ab8d: jmp 0x62ab74 */ goto L_0062ab74;
L_0062ab8f:; BB(0x0062ab8f);
    /* 0062ab8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ab92: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ab95: jne 0x62aba9 */ if (!fZ) goto L_0062aba9;
L_0062ab97:; BB(0x0062ab97);
    /* 0062ab97: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ab9a: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062ab9d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062aba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062aba1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062aba4: call 0x62abb0 */ r_esp -= 4; W32(r_esp, 0x62aba9u); f_0062abb0();
L_0062aba9:; BB(0x0062aba9);
    /* 0062aba9: mov esp, ebp */ r_esp = r_ebp;
    /* 0062abab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062abac: ret 4 */ FN_RET(0x0062ab60); r_esp += 8; return;
}

void f_0062abb0(void) /* sub_62ABB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062abb0);
    /* 0062abb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062abb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062abb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062abb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062abb7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062abba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062abbd: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062abc1: je 0x62ac1d */ if (fZ) goto L_0062ac1d;
L_0062abc3:; BB(0x0062abc3);
    /* 0062abc3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062abc7: jl 0x62ac1d */ if ((fS!=fO)) goto L_0062ac1d;
L_0062abc9:; BB(0x0062abc9);
    /* 0062abc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062abcc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062abcf: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062abd2: jge 0x62ac1d */ if ((fS==fO)) goto L_0062ac1d;
L_0062abd4:; BB(0x0062abd4);
    /* 0062abd4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062abd7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062abda: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062abdd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062abe0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062abe3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062abe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062abe9: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0062abec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062abef: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0062abf2: jmp 0x62abfd */ goto L_0062abfd;
L_0062abf4:; BB(0x0062abf4);
    /* 0062abf4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062abf7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062abfa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0062abfd:; BB(0x0062abfd);
    /* 0062abfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ac00: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ac03: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ac06: jge 0x62ac1d */ if ((fS==fO)) goto L_0062ac1d;
L_0062ac08:; BB(0x0062ac08);
    /* 0062ac08: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ac0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac0e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ac11: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac14: mov edx, dword ptr [esi + edx*4 + 4] */ r_edx = R32((u32)(r_esi+r_edx*4+0x4u));
    /* 0062ac18: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0062ac1b: jmp 0x62abf4 */ goto L_0062abf4;
L_0062ac1d:; BB(0x0062ac1d);
    /* 0062ac1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062ac1e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ac20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ac21: ret 4 */ FN_RET(0x0062abb0); r_esp += 8; return;
}

void f_0062ac30(void) /* sub_62AC30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ac30);
    /* 0062ac30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac31: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ac33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062ac37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac3a: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 0062ac41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac44: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0062ac4b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac51: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0062ac54: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ac57: jg 0x62ac71 */ if ((!fZ&&fS==fO)) goto L_0062ac71;
L_0062ac59:; BB(0x0062ac59);
    /* 0062ac59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac5f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062ac62: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0062ac65: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac68: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0062ac6b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0062ac6d: jmp 0x62ac7d */ goto L_0062ac7d;
L_0062ac71:; BB(0x0062ac71);
    /* 0062ac71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ac74: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0062ac7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062ac7d:; BB(0x0062ac7d);
    /* 0062ac7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ac7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ac80: ret  */ FN_RET(0x0062ac30); r_esp += 4; return;
}

void f_0062ace0(void) /* sub_62ACE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ace0);
    /* 0062ace0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ace1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ace3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ace4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062ace7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062acea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062aced: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0062acf0: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062acf3: jge 0x62ad1f */ if ((fS==fO)) goto L_0062ad1f;
L_0062acf5:; BB(0x0062acf5);
    /* 0062acf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062acf8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062acfb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062acfe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ad01: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0062ad04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ad07: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0062ad0a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ad0d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ad10: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0062ad13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ad16: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0062ad19: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062ad1b: jmp 0x62ad21 */ goto L_0062ad21;
L_0062ad1f:; BB(0x0062ad1f);
    /* 0062ad1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062ad21:; BB(0x0062ad21);
    /* 0062ad21: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ad23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ad24: ret  */ FN_RET(0x0062ace0); r_esp += 4; return;
}

void f_0062ad70(void) /* sub_62AD70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ad70);
    /* 0062ad70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad71: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ad73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ad76: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062ad79: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ad7c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062ad7f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062ad82:; BB(0x0062ad82);
    /* 0062ad82: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ad85: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ad89: je 0x62add1 */ if (fZ) goto L_0062add1;
L_0062ad8b:; BB(0x0062ad8b);
    /* 0062ad8b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ad8e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0062ad91: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ad94: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ad97: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0062ad9a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ad9d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0062ada0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ada3: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0062ada6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062ada9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062adac: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062adaf: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062adb3: je 0x62adc8 */ if (fZ) goto L_0062adc8;
L_0062adb5:; BB(0x0062adb5);
    /* 0062adb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062adb7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062adba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062adbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062adbf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062adc1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62adc3u); call_ind(t); }
    /* 0062adc3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062adc6: jmp 0x62adcf */ goto L_0062adcf;
L_0062adc8:; BB(0x0062adc8);
    /* 0062adc8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0062adcf:; BB(0x0062adcf);
    /* 0062adcf: jmp 0x62ad82 */ goto L_0062ad82;
L_0062add1:; BB(0x0062add1);
    /* 0062add1: mov esp, ebp */ r_esp = r_ebp;
    /* 0062add3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062add4: ret  */ FN_RET(0x0062ad70); r_esp += 4; return;
}

void f_0062ade0(void) /* sub_62ADE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ade0);
    /* 0062ade0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ade1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ade3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ade6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062ade9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062adec: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062adef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062adf2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062adf5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062adf8: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062adfb: jge 0x62ae0b */ if ((fS==fO)) goto L_0062ae0b;
L_0062adfd:; BB(0x0062adfd);
    /* 0062adfd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062ae00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ae03: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0062ae06: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062ae09: jmp 0x62ae12 */ goto L_0062ae12;
L_0062ae0b:; BB(0x0062ae0b);
    /* 0062ae0b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0062ae12:; BB(0x0062ae12);
    /* 0062ae12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ae15: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ae17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ae18: ret 4 */ FN_RET(0x0062ade0); r_esp += 8; return;
}

