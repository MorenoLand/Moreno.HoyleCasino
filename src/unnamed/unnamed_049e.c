#include "protos.h"

void f_0049e430(void) /* sub_49E430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049e430);
    /* 0049e430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049e431: mov ebp, esp */ r_ebp = r_esp;
    /* 0049e433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049e435: push 0x6a102e */ { u32 v = 0x6a102eu; r_esp -= 4; W32(r_esp, v); }
    /* 0049e43a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049e440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e441: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049e447: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0049e44c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049e44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e44f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0049e452: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0049e458: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0049e45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e462: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e464: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e466: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e468: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e46a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e46c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0049e46f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e470: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0049e476: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x49e47bu); f_00485940();
    /* 0049e47b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049e482: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 0049e488: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e489: lea edx, [ebp - 0x1d] */ r_edx = (u32)(r_ebp+0xffffffe3u);
    /* 0049e48c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e48d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e490: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49e495u); f_004a2160();
    /* 0049e495: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e497: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x49e49cu); f_004a1e10();
    /* 0049e49c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e49f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e4a1: je 0x49e6e4 */ if (fZ) goto L_0049e6e4;
L_0049e4a7:; BB(0x0049e4a7);
    /* 0049e4a7: mov ecx, dword ptr [0x7913d8] */ r_ecx = R32((u32)(0x7913d8u));
    /* 0049e4ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e4ae: lea edx, [ebp - 0x1e] */ r_edx = (u32)(r_ebp+0xffffffe2u);
    /* 0049e4b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e4b2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e4b5: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e4bau); f_004a2250();
    /* 0049e4ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e4bc: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e4c1u); f_004a1fb0();
    /* 0049e4c1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e4c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e4c6: je 0x49e4eb */ if (fZ) goto L_0049e4eb;
L_0049e4c8:; BB(0x0049e4c8);
    /* 0049e4c8: mov word ptr [ebp - 0x20], 0x32 */ W16((u32)(r_ebp+0xffffffe0u), 0x32u);
    /* 0049e4ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e4d5: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e4d8: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e4ddu); f_004a20f0();
    /* 0049e4dd: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 0049e4e1: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e4eb:; BB(0x0049e4eb);
    /* 0049e4eb: mov ecx, dword ptr [0x791414] */ r_ecx = R32((u32)(0x791414u));
    /* 0049e4f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e4f2: lea edx, [ebp - 0x21] */ r_edx = (u32)(r_ebp+0xffffffdfu);
    /* 0049e4f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e4f6: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e4f9: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e4feu); f_004a2250();
    /* 0049e4fe: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e500: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e505u); f_004a1fb0();
    /* 0049e505: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e50a: je 0x49e52f */ if (fZ) goto L_0049e52f;
L_0049e50c:; BB(0x0049e50c);
    /* 0049e50c: mov word ptr [ebp - 0x24], 0x33 */ W16((u32)(r_ebp+0xffffffdcu), 0x33u);
    /* 0049e512: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e519: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e51c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e521u); f_004a20f0();
    /* 0049e521: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 0049e525: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e52f:; BB(0x0049e52f);
    /* 0049e52f: mov ecx, dword ptr [0x7913a4] */ r_ecx = R32((u32)(0x7913a4u));
    /* 0049e535: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e536: lea edx, [ebp - 0x25] */ r_edx = (u32)(r_ebp+0xffffffdbu);
    /* 0049e539: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e53a: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e53d: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e542u); f_004a2250();
    /* 0049e542: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e544: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e549u); f_004a1fb0();
    /* 0049e549: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e54c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e54e: je 0x49e573 */ if (fZ) goto L_0049e573;
L_0049e550:; BB(0x0049e550);
    /* 0049e550: mov word ptr [ebp - 0x28], 0x34 */ W16((u32)(r_ebp+0xffffffd8u), 0x34u);
    /* 0049e556: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e55d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e560: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e565u); f_004a20f0();
    /* 0049e565: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 0049e569: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e573:; BB(0x0049e573);
    /* 0049e573: mov ecx, dword ptr [0x791404] */ r_ecx = R32((u32)(0x791404u));
    /* 0049e579: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e57a: lea edx, [ebp - 0x29] */ r_edx = (u32)(r_ebp+0xffffffd7u);
    /* 0049e57d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e57e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e581: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e586u); f_004a2250();
    /* 0049e586: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e588: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e58du); f_004a1fb0();
    /* 0049e58d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e592: je 0x49e5b7 */ if (fZ) goto L_0049e5b7;
L_0049e594:; BB(0x0049e594);
    /* 0049e594: mov word ptr [ebp - 0x2c], 0x35 */ W16((u32)(r_ebp+0xffffffd4u), 0x35u);
    /* 0049e59a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e5a1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e5a4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e5a9u); f_004a20f0();
    /* 0049e5a9: mov ax, word ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 0049e5ad: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e5b7:; BB(0x0049e5b7);
    /* 0049e5b7: mov ecx, dword ptr [0x7913f8] */ r_ecx = R32((u32)(0x7913f8u));
    /* 0049e5bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e5be: lea edx, [ebp - 0x2d] */ r_edx = (u32)(r_ebp+0xffffffd3u);
    /* 0049e5c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e5c2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e5c5: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e5cau); f_004a2250();
    /* 0049e5ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e5cc: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e5d1u); f_004a1fb0();
    /* 0049e5d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e5d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e5d6: je 0x49e5fb */ if (fZ) goto L_0049e5fb;
L_0049e5d8:; BB(0x0049e5d8);
    /* 0049e5d8: mov word ptr [ebp - 0x30], 0x36 */ W16((u32)(r_ebp+0xffffffd0u), 0x36u);
    /* 0049e5de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e5e5: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e5e8: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e5edu); f_004a20f0();
    /* 0049e5ed: mov ax, word ptr [ebp - 0x30] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd0u))) & 0xffffu);
    /* 0049e5f1: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e5fb:; BB(0x0049e5fb);
    /* 0049e5fb: mov ecx, dword ptr [0x791410] */ r_ecx = R32((u32)(0x791410u));
    /* 0049e601: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e602: lea edx, [ebp - 0x31] */ r_edx = (u32)(r_ebp+0xffffffcfu);
    /* 0049e605: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e606: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e609: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e60eu); f_004a2250();
    /* 0049e60e: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e610: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e615u); f_004a1fb0();
    /* 0049e615: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e61a: je 0x49e63f */ if (fZ) goto L_0049e63f;
L_0049e61c:; BB(0x0049e61c);
    /* 0049e61c: mov word ptr [ebp - 0x34], 0x37 */ W16((u32)(r_ebp+0xffffffccu), 0x37u);
    /* 0049e622: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e629: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e62c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e631u); f_004a20f0();
    /* 0049e631: mov ax, word ptr [ebp - 0x34] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffccu))) & 0xffffu);
    /* 0049e635: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e63f:; BB(0x0049e63f);
    /* 0049e63f: mov ecx, dword ptr [0x7913f4] */ r_ecx = R32((u32)(0x7913f4u));
    /* 0049e645: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e646: lea edx, [ebp - 0x35] */ r_edx = (u32)(r_ebp+0xffffffcbu);
    /* 0049e649: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e64a: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e64d: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e652u); f_004a2250();
    /* 0049e652: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e654: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e659u); f_004a1fb0();
    /* 0049e659: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e65c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e65e: je 0x49e680 */ if (fZ) goto L_0049e680;
L_0049e660:; BB(0x0049e660);
    /* 0049e660: mov word ptr [ebp - 0x38], 0x38 */ W16((u32)(r_ebp+0xffffffc8u), 0x38u);
    /* 0049e666: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e66d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e670: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e675u); f_004a20f0();
    /* 0049e675: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 0049e679: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e680:; BB(0x0049e680);
    /* 0049e680: mov ecx, dword ptr [0x79138c] */ r_ecx = R32((u32)(0x79138cu));
    /* 0049e686: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e687: lea edx, [ebp - 0x39] */ r_edx = (u32)(r_ebp+0xffffffc7u);
    /* 0049e68a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e68b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e68e: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e693u); f_004a2250();
    /* 0049e693: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e695: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e69au); f_004a1fb0();
    /* 0049e69a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e69d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e69f: je 0x49e6c1 */ if (fZ) goto L_0049e6c1;
L_0049e6a1:; BB(0x0049e6a1);
    /* 0049e6a1: mov word ptr [ebp - 0x3c], 0x39 */ W16((u32)(r_ebp+0xffffffc4u), 0x39u);
    /* 0049e6a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e6ae: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e6b1: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e6b6u); f_004a20f0();
    /* 0049e6b6: mov ax, word ptr [ebp - 0x3c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc4u))) & 0xffffu);
    /* 0049e6ba: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e6c1:; BB(0x0049e6c1);
    /* 0049e6c1: mov word ptr [ebp - 0x3e], 0x3a */ W16((u32)(r_ebp+0xffffffc2u), 0x3au);
    /* 0049e6c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e6ce: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e6d1: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e6d6u); f_004a20f0();
    /* 0049e6d6: mov ax, word ptr [ebp - 0x3e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc2u))) & 0xffffu);
    /* 0049e6da: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e6e4:; BB(0x0049e6e4);
    /* 0049e6e4: mov ecx, dword ptr [0x7913b0] */ r_ecx = R32((u32)(0x7913b0u));
    /* 0049e6ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e6eb: lea edx, [ebp - 0x3f] */ r_edx = (u32)(r_ebp+0xffffffc1u);
    /* 0049e6ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e6ef: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e6f2: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49e6f7u); f_004a2160();
    /* 0049e6f7: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e6f9: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x49e6feu); f_004a1e10();
    /* 0049e6fe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e703: je 0x49e96a */ if (fZ) goto L_0049e96a;
L_0049e709:; BB(0x0049e709);
    /* 0049e709: lea ecx, [ebp - 0x41] */ r_ecx = (u32)(r_ebp+0xffffffbfu);
    /* 0049e70c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e70d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e710: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e715u); f_004a2200();
    /* 0049e715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e716: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0049e719: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e71a: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e71d: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49e722u); f_004a21b0();
    /* 0049e722: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e724: call 0x4a2010 */ r_esp -= 4; W32(r_esp, 0x49e729u); f_004a2010();
    /* 0049e729: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e72c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e72e: je 0x49e741 */ if (fZ) goto L_0049e741;
L_0049e730:; BB(0x0049e730);
    /* 0049e730: lea ecx, [ebp - 0x42] */ r_ecx = (u32)(r_ebp+0xffffffbeu);
    /* 0049e733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e734: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e737: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e73cu); f_004a2200();
    /* 0049e73c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049e73f: jmp 0x49e788 */ goto L_0049e788;
L_0049e741:; BB(0x0049e741);
    /* 0049e741: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0049e744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e745: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e748: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e74du); f_004a2250();
    /* 0049e74d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e74e: lea eax, [ebp - 0x43] */ r_eax = (u32)(r_ebp+0xffffffbdu);
    /* 0049e751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e752: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e755: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49e75au); f_004a21b0();
    /* 0049e75a: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e75c: call 0x4a2010 */ r_esp -= 4; W32(r_esp, 0x49e761u); f_004a2010();
    /* 0049e761: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e764: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e766: je 0x49e779 */ if (fZ) goto L_0049e779;
L_0049e768:; BB(0x0049e768);
    /* 0049e768: lea edx, [ebp - 0x45] */ r_edx = (u32)(r_ebp+0xffffffbbu);
    /* 0049e76b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e76c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e76f: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49e774u); f_004a21b0();
    /* 0049e774: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049e777: jmp 0x49e788 */ goto L_0049e788;
L_0049e779:; BB(0x0049e779);
    /* 0049e779: lea eax, [ebp - 0x46] */ r_eax = (u32)(r_ebp+0xffffffbau);
    /* 0049e77c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e77d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e780: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e785u); f_004a2250();
    /* 0049e785: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0049e788:; BB(0x0049e788);
    /* 0049e788: mov ecx, dword ptr [0x7913d8] */ r_ecx = R32((u32)(0x7913d8u));
    /* 0049e78e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e78f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e792: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e797u); f_004a1fb0();
    /* 0049e797: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049e79a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e79c: je 0x49e7c1 */ if (fZ) goto L_0049e7c1;
L_0049e79e:; BB(0x0049e79e);
    /* 0049e79e: mov word ptr [ebp - 0x48], 0x32 */ W16((u32)(r_ebp+0xffffffb8u), 0x32u);
    /* 0049e7a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e7ab: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e7ae: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e7b3u); f_004a20f0();
    /* 0049e7b3: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0049e7b7: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e7c1:; BB(0x0049e7c1);
    /* 0049e7c1: mov eax, dword ptr [0x791414] */ r_eax = R32((u32)(0x791414u));
    /* 0049e7c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e7c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e7ca: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e7cfu); f_004a1fb0();
    /* 0049e7cf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e7d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e7d4: je 0x49e7f9 */ if (fZ) goto L_0049e7f9;
L_0049e7d6:; BB(0x0049e7d6);
    /* 0049e7d6: mov word ptr [ebp - 0x4a], 0x33 */ W16((u32)(r_ebp+0xffffffb6u), 0x33u);
    /* 0049e7dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e7e3: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e7e6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e7ebu); f_004a20f0();
    /* 0049e7eb: mov ax, word ptr [ebp - 0x4a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb6u))) & 0xffffu);
    /* 0049e7ef: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e7f9:; BB(0x0049e7f9);
    /* 0049e7f9: mov edx, dword ptr [0x7913a4] */ r_edx = R32((u32)(0x7913a4u));
    /* 0049e7ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e800: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e803: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e808u); f_004a1fb0();
    /* 0049e808: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e80b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e80d: je 0x49e832 */ if (fZ) goto L_0049e832;
L_0049e80f:; BB(0x0049e80f);
    /* 0049e80f: mov word ptr [ebp - 0x4c], 0x34 */ W16((u32)(r_ebp+0xffffffb4u), 0x34u);
    /* 0049e815: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e81c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e81f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e824u); f_004a20f0();
    /* 0049e824: mov ax, word ptr [ebp - 0x4c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb4u))) & 0xffffu);
    /* 0049e828: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e832:; BB(0x0049e832);
    /* 0049e832: mov ecx, dword ptr [0x791404] */ r_ecx = R32((u32)(0x791404u));
    /* 0049e838: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e839: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e83c: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e841u); f_004a1fb0();
    /* 0049e841: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049e844: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e846: je 0x49e86b */ if (fZ) goto L_0049e86b;
L_0049e848:; BB(0x0049e848);
    /* 0049e848: mov word ptr [ebp - 0x4e], 0x35 */ W16((u32)(r_ebp+0xffffffb2u), 0x35u);
    /* 0049e84e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e855: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e858: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e85du); f_004a20f0();
    /* 0049e85d: mov ax, word ptr [ebp - 0x4e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb2u))) & 0xffffu);
    /* 0049e861: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e86b:; BB(0x0049e86b);
    /* 0049e86b: mov eax, dword ptr [0x7913f8] */ r_eax = R32((u32)(0x7913f8u));
    /* 0049e870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e871: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e874: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e879u); f_004a1fb0();
    /* 0049e879: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e87c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e87e: je 0x49e8a3 */ if (fZ) goto L_0049e8a3;
L_0049e880:; BB(0x0049e880);
    /* 0049e880: mov word ptr [ebp - 0x50], 0x36 */ W16((u32)(r_ebp+0xffffffb0u), 0x36u);
    /* 0049e886: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e88d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e890: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e895u); f_004a20f0();
    /* 0049e895: mov ax, word ptr [ebp - 0x50] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb0u))) & 0xffffu);
    /* 0049e899: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e8a3:; BB(0x0049e8a3);
    /* 0049e8a3: mov edx, dword ptr [0x791410] */ r_edx = R32((u32)(0x791410u));
    /* 0049e8a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e8aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e8ad: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e8b2u); f_004a1fb0();
    /* 0049e8b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e8b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e8b7: je 0x49e8dc */ if (fZ) goto L_0049e8dc;
L_0049e8b9:; BB(0x0049e8b9);
    /* 0049e8b9: mov word ptr [ebp - 0x52], 0x37 */ W16((u32)(r_ebp+0xffffffaeu), 0x37u);
    /* 0049e8bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e8c6: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e8c9: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e8ceu); f_004a20f0();
    /* 0049e8ce: mov ax, word ptr [ebp - 0x52] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffaeu))) & 0xffffu);
    /* 0049e8d2: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e8dc:; BB(0x0049e8dc);
    /* 0049e8dc: mov ecx, dword ptr [0x7913f4] */ r_ecx = R32((u32)(0x7913f4u));
    /* 0049e8e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e8e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e8e6: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e8ebu); f_004a1fb0();
    /* 0049e8eb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049e8ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e8f0: je 0x49e912 */ if (fZ) goto L_0049e912;
L_0049e8f2:; BB(0x0049e8f2);
    /* 0049e8f2: mov word ptr [ebp - 0x54], 0x38 */ W16((u32)(r_ebp+0xffffffacu), 0x38u);
    /* 0049e8f8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e8ff: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e902: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e907u); f_004a20f0();
    /* 0049e907: mov ax, word ptr [ebp - 0x54] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffacu))) & 0xffffu);
    /* 0049e90b: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e912:; BB(0x0049e912);
    /* 0049e912: mov eax, dword ptr [0x79138c] */ r_eax = R32((u32)(0x79138cu));
    /* 0049e917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e918: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e91b: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e920u); f_004a1fb0();
    /* 0049e920: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e923: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e925: je 0x49e947 */ if (fZ) goto L_0049e947;
L_0049e927:; BB(0x0049e927);
    /* 0049e927: mov word ptr [ebp - 0x56], 0x39 */ W16((u32)(r_ebp+0xffffffaau), 0x39u);
    /* 0049e92d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e934: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e937: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e93cu); f_004a20f0();
    /* 0049e93c: mov ax, word ptr [ebp - 0x56] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffaau))) & 0xffffu);
    /* 0049e940: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e947:; BB(0x0049e947);
    /* 0049e947: mov word ptr [ebp - 0x58], 0x3a */ W16((u32)(r_ebp+0xffffffa8u), 0x3au);
    /* 0049e94d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e954: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e957: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e95cu); f_004a20f0();
    /* 0049e95c: mov ax, word ptr [ebp - 0x58] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffa8u))) & 0xffffu);
    /* 0049e960: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049e96a:; BB(0x0049e96a);
    /* 0049e96a: mov edx, dword ptr [0x791380] */ r_edx = R32((u32)(0x791380u));
    /* 0049e970: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e971: lea eax, [ebp - 0x59] */ r_eax = (u32)(r_ebp+0xffffffa7u);
    /* 0049e974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e975: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e978: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49e97du); f_004a2160();
    /* 0049e97d: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e97f: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x49e984u); f_004a1e10();
    /* 0049e984: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e987: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e989: je 0x49ebb8 */ if (fZ) goto L_0049ebb8;
L_0049e98f:; BB(0x0049e98f);
    /* 0049e98f: lea edx, [ebp - 0x5b] */ r_edx = (u32)(r_ebp+0xffffffa5u);
    /* 0049e992: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e993: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e996: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e99bu); f_004a2250();
    /* 0049e99b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e99c: lea eax, [ebp - 0x5a] */ r_eax = (u32)(r_ebp+0xffffffa6u);
    /* 0049e99f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e9a0: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e9a3: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49e9a8u); f_004a21b0();
    /* 0049e9a8: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e9aa: call 0x4a2010 */ r_esp -= 4; W32(r_esp, 0x49e9afu); f_004a2010();
    /* 0049e9af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e9b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e9b4: je 0x49e9c7 */ if (fZ) goto L_0049e9c7;
L_0049e9b6:; BB(0x0049e9b6);
    /* 0049e9b6: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0049e9b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e9ba: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e9bd: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49e9c2u); f_004a21b0();
    /* 0049e9c2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0049e9c5: jmp 0x49e9d6 */ goto L_0049e9d6;
L_0049e9c7:; BB(0x0049e9c7);
    /* 0049e9c7: lea eax, [ebp - 0x5d] */ r_eax = (u32)(r_ebp+0xffffffa3u);
    /* 0049e9ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e9cb: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e9ce: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x49e9d3u); f_004a2250();
    /* 0049e9d3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0049e9d6:; BB(0x0049e9d6);
    /* 0049e9d6: mov ecx, dword ptr [0x7913d8] */ r_ecx = R32((u32)(0x7913d8u));
    /* 0049e9dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e9dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049e9e0: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e9e5u); f_004a1fb0();
    /* 0049e9e5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049e9e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e9ea: je 0x49ea0f */ if (fZ) goto L_0049ea0f;
L_0049e9ec:; BB(0x0049e9ec);
    /* 0049e9ec: mov word ptr [ebp - 0x60], 0x32 */ W16((u32)(r_ebp+0xffffffa0u), 0x32u);
    /* 0049e9f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e9f9: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e9fc: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ea01u); f_004a20f0();
    /* 0049ea01: mov ax, word ptr [ebp - 0x60] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffa0u))) & 0xffffu);
    /* 0049ea05: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ea0f:; BB(0x0049ea0f);
    /* 0049ea0f: mov eax, dword ptr [0x791414] */ r_eax = R32((u32)(0x791414u));
    /* 0049ea14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ea15: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049ea18: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ea1du); f_004a1fb0();
    /* 0049ea1d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049ea20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ea22: je 0x49ea47 */ if (fZ) goto L_0049ea47;
L_0049ea24:; BB(0x0049ea24);
    /* 0049ea24: mov word ptr [ebp - 0x62], 0x33 */ W16((u32)(r_ebp+0xffffff9eu), 0x33u);
    /* 0049ea2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ea31: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ea34: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ea39u); f_004a20f0();
    /* 0049ea39: mov ax, word ptr [ebp - 0x62] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff9eu))) & 0xffffu);
    /* 0049ea3d: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ea47:; BB(0x0049ea47);
    /* 0049ea47: mov edx, dword ptr [0x7913a4] */ r_edx = R32((u32)(0x7913a4u));
    /* 0049ea4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ea4e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049ea51: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ea56u); f_004a1fb0();
    /* 0049ea56: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049ea59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ea5b: je 0x49ea80 */ if (fZ) goto L_0049ea80;
L_0049ea5d:; BB(0x0049ea5d);
    /* 0049ea5d: mov word ptr [ebp - 0x64], 0x34 */ W16((u32)(r_ebp+0xffffff9cu), 0x34u);
    /* 0049ea63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ea6a: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ea6d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ea72u); f_004a20f0();
    /* 0049ea72: mov ax, word ptr [ebp - 0x64] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff9cu))) & 0xffffu);
    /* 0049ea76: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ea80:; BB(0x0049ea80);
    /* 0049ea80: mov ecx, dword ptr [0x791404] */ r_ecx = R32((u32)(0x791404u));
    /* 0049ea86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ea87: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049ea8a: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ea8fu); f_004a1fb0();
    /* 0049ea8f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049ea92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ea94: je 0x49eab9 */ if (fZ) goto L_0049eab9;
L_0049ea96:; BB(0x0049ea96);
    /* 0049ea96: mov word ptr [ebp - 0x66], 0x35 */ W16((u32)(r_ebp+0xffffff9au), 0x35u);
    /* 0049ea9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eaa3: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eaa6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49eaabu); f_004a20f0();
    /* 0049eaab: mov ax, word ptr [ebp - 0x66] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff9au))) & 0xffffu);
    /* 0049eaaf: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049eab9:; BB(0x0049eab9);
    /* 0049eab9: mov eax, dword ptr [0x7913f8] */ r_eax = R32((u32)(0x7913f8u));
    /* 0049eabe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049eabf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049eac2: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49eac7u); f_004a1fb0();
    /* 0049eac7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049eaca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eacc: je 0x49eaf1 */ if (fZ) goto L_0049eaf1;
L_0049eace:; BB(0x0049eace);
    /* 0049eace: mov word ptr [ebp - 0x68], 0x36 */ W16((u32)(r_ebp+0xffffff98u), 0x36u);
    /* 0049ead4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eadb: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eade: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49eae3u); f_004a20f0();
    /* 0049eae3: mov ax, word ptr [ebp - 0x68] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff98u))) & 0xffffu);
    /* 0049eae7: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049eaf1:; BB(0x0049eaf1);
    /* 0049eaf1: mov edx, dword ptr [0x791410] */ r_edx = R32((u32)(0x791410u));
    /* 0049eaf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049eaf8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049eafb: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49eb00u); f_004a1fb0();
    /* 0049eb00: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049eb03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eb05: je 0x49eb2a */ if (fZ) goto L_0049eb2a;
L_0049eb07:; BB(0x0049eb07);
    /* 0049eb07: mov word ptr [ebp - 0x6a], 0x37 */ W16((u32)(r_ebp+0xffffff96u), 0x37u);
    /* 0049eb0d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eb14: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eb17: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49eb1cu); f_004a20f0();
    /* 0049eb1c: mov ax, word ptr [ebp - 0x6a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff96u))) & 0xffffu);
    /* 0049eb20: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049eb2a:; BB(0x0049eb2a);
    /* 0049eb2a: mov ecx, dword ptr [0x7913f4] */ r_ecx = R32((u32)(0x7913f4u));
    /* 0049eb30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb31: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049eb34: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49eb39u); f_004a1fb0();
    /* 0049eb39: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049eb3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eb3e: je 0x49eb60 */ if (fZ) goto L_0049eb60;
L_0049eb40:; BB(0x0049eb40);
    /* 0049eb40: mov word ptr [ebp - 0x6c], 0x38 */ W16((u32)(r_ebp+0xffffff94u), 0x38u);
    /* 0049eb46: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eb4d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eb50: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49eb55u); f_004a20f0();
    /* 0049eb55: mov ax, word ptr [ebp - 0x6c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff94u))) & 0xffffu);
    /* 0049eb59: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049eb60:; BB(0x0049eb60);
    /* 0049eb60: mov eax, dword ptr [0x79138c] */ r_eax = R32((u32)(0x79138cu));
    /* 0049eb65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049eb69: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49eb6eu); f_004a1fb0();
    /* 0049eb6e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049eb71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eb73: je 0x49eb95 */ if (fZ) goto L_0049eb95;
L_0049eb75:; BB(0x0049eb75);
    /* 0049eb75: mov word ptr [ebp - 0x6e], 0x39 */ W16((u32)(r_ebp+0xffffff92u), 0x39u);
    /* 0049eb7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eb82: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eb85: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49eb8au); f_004a20f0();
    /* 0049eb8a: mov ax, word ptr [ebp - 0x6e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff92u))) & 0xffffu);
    /* 0049eb8e: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049eb95:; BB(0x0049eb95);
    /* 0049eb95: mov word ptr [ebp - 0x70], 0x3a */ W16((u32)(r_ebp+0xffffff90u), 0x3au);
    /* 0049eb9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eba2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eba5: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ebaau); f_004a20f0();
    /* 0049ebaa: mov ax, word ptr [ebp - 0x70] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff90u))) & 0xffffu);
    /* 0049ebae: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ebb8:; BB(0x0049ebb8);
    /* 0049ebb8: mov edx, dword ptr [0x791418] */ r_edx = R32((u32)(0x791418u));
    /* 0049ebbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ebbf: lea eax, [ebp - 0x71] */ r_eax = (u32)(r_ebp+0xffffff8fu);
    /* 0049ebc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ebc3: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ebc6: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49ebcbu); f_004a2160();
    /* 0049ebcb: mov ecx, eax */ r_ecx = r_eax;
    /* 0049ebcd: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x49ebd2u); f_004a1e10();
    /* 0049ebd2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049ebd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ebd7: je 0x49ee10 */ if (fZ) goto L_0049ee10;
L_0049ebdd:; BB(0x0049ebdd);
    /* 0049ebdd: lea edx, [ebp - 0x73] */ r_edx = (u32)(r_ebp+0xffffff8du);
    /* 0049ebe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ebe1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ebe4: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49ebe9u); f_004a2200();
    /* 0049ebe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ebea: lea eax, [ebp - 0x72] */ r_eax = (u32)(r_ebp+0xffffff8eu);
    /* 0049ebed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ebee: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ebf1: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49ebf6u); f_004a21b0();
    /* 0049ebf6: mov ecx, eax */ r_ecx = r_eax;
    /* 0049ebf8: call 0x4a2010 */ r_esp -= 4; W32(r_esp, 0x49ebfdu); f_004a2010();
    /* 0049ebfd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049ec00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ec02: je 0x49ec15 */ if (fZ) goto L_0049ec15;
L_0049ec04:; BB(0x0049ec04);
    /* 0049ec04: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 0049ec07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ec08: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ec0b: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49ec10u); f_004a21b0();
    /* 0049ec10: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0049ec13: jmp 0x49ec24 */ goto L_0049ec24;
L_0049ec15:; BB(0x0049ec15);
    /* 0049ec15: lea eax, [ebp - 0x75] */ r_eax = (u32)(r_ebp+0xffffff8bu);
    /* 0049ec18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ec19: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ec1c: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49ec21u); f_004a2200();
    /* 0049ec21: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0049ec24:; BB(0x0049ec24);
    /* 0049ec24: mov ecx, dword ptr [0x7913d8] */ r_ecx = R32((u32)(0x7913d8u));
    /* 0049ec2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ec2b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ec2e: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ec33u); f_004a1fb0();
    /* 0049ec33: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049ec36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ec38: je 0x49ec5d */ if (fZ) goto L_0049ec5d;
L_0049ec3a:; BB(0x0049ec3a);
    /* 0049ec3a: mov word ptr [ebp - 0x78], 0x32 */ W16((u32)(r_ebp+0xffffff88u), 0x32u);
    /* 0049ec40: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ec47: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ec4a: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ec4fu); f_004a20f0();
    /* 0049ec4f: mov ax, word ptr [ebp - 0x78] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff88u))) & 0xffffu);
    /* 0049ec53: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ec5d:; BB(0x0049ec5d);
    /* 0049ec5d: mov eax, dword ptr [0x791414] */ r_eax = R32((u32)(0x791414u));
    /* 0049ec62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ec63: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ec66: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ec6bu); f_004a1fb0();
    /* 0049ec6b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049ec6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ec70: je 0x49ec95 */ if (fZ) goto L_0049ec95;
L_0049ec72:; BB(0x0049ec72);
    /* 0049ec72: mov word ptr [ebp - 0x7a], 0x33 */ W16((u32)(r_ebp+0xffffff86u), 0x33u);
    /* 0049ec78: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ec7f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ec82: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ec87u); f_004a20f0();
    /* 0049ec87: mov ax, word ptr [ebp - 0x7a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff86u))) & 0xffffu);
    /* 0049ec8b: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ec95:; BB(0x0049ec95);
    /* 0049ec95: mov edx, dword ptr [0x7913a4] */ r_edx = R32((u32)(0x7913a4u));
    /* 0049ec9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ec9c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ec9f: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49eca4u); f_004a1fb0();
    /* 0049eca4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049eca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eca9: je 0x49ecce */ if (fZ) goto L_0049ecce;
L_0049ecab:; BB(0x0049ecab);
    /* 0049ecab: mov word ptr [ebp - 0x7c], 0x34 */ W16((u32)(r_ebp+0xffffff84u), 0x34u);
    /* 0049ecb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ecb8: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ecbb: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ecc0u); f_004a20f0();
    /* 0049ecc0: mov ax, word ptr [ebp - 0x7c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff84u))) & 0xffffu);
    /* 0049ecc4: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ecce:; BB(0x0049ecce);
    /* 0049ecce: mov ecx, dword ptr [0x791404] */ r_ecx = R32((u32)(0x791404u));
    /* 0049ecd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ecd5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ecd8: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ecddu); f_004a1fb0();
    /* 0049ecdd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049ece0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ece2: je 0x49ed07 */ if (fZ) goto L_0049ed07;
L_0049ece4:; BB(0x0049ece4);
    /* 0049ece4: mov word ptr [ebp - 0x7e], 0x35 */ W16((u32)(r_ebp+0xffffff82u), 0x35u);
    /* 0049ecea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ecf1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ecf4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ecf9u); f_004a20f0();
    /* 0049ecf9: mov ax, word ptr [ebp - 0x7e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff82u))) & 0xffffu);
    /* 0049ecfd: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ed07:; BB(0x0049ed07);
    /* 0049ed07: mov eax, dword ptr [0x7913f8] */ r_eax = R32((u32)(0x7913f8u));
    /* 0049ed0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ed0d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ed10: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ed15u); f_004a1fb0();
    /* 0049ed15: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049ed18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ed1a: je 0x49ed3f */ if (fZ) goto L_0049ed3f;
L_0049ed1c:; BB(0x0049ed1c);
    /* 0049ed1c: mov word ptr [ebp - 0x80], 0x36 */ W16((u32)(r_ebp+0xffffff80u), 0x36u);
    /* 0049ed22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ed29: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ed2c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ed31u); f_004a20f0();
    /* 0049ed31: mov ax, word ptr [ebp - 0x80] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff80u))) & 0xffffu);
    /* 0049ed35: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ed3f:; BB(0x0049ed3f);
    /* 0049ed3f: mov edx, dword ptr [0x791410] */ r_edx = R32((u32)(0x791410u));
    /* 0049ed45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ed46: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ed49: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ed4eu); f_004a1fb0();
    /* 0049ed4e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049ed51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ed53: je 0x49ed7e */ if (fZ) goto L_0049ed7e;
L_0049ed55:; BB(0x0049ed55);
    /* 0049ed55: mov word ptr [ebp - 0x82], 0x37 */ W16((u32)(r_ebp+0xffffff7eu), 0x37u);
    /* 0049ed5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ed65: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ed68: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ed6du); f_004a20f0();
    /* 0049ed6d: mov ax, word ptr [ebp - 0x82] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff7eu))) & 0xffffu);
    /* 0049ed74: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ed7e:; BB(0x0049ed7e);
    /* 0049ed7e: mov ecx, dword ptr [0x7913f4] */ r_ecx = R32((u32)(0x7913f4u));
    /* 0049ed84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ed85: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ed88: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49ed8du); f_004a1fb0();
    /* 0049ed8d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049ed90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ed92: je 0x49edb7 */ if (fZ) goto L_0049edb7;
L_0049ed94:; BB(0x0049ed94);
    /* 0049ed94: mov word ptr [ebp - 0x84], 0x38 */ W16((u32)(r_ebp+0xffffff7cu), 0x38u);
    /* 0049ed9d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eda4: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eda7: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49edacu); f_004a20f0();
    /* 0049edac: mov ax, word ptr [ebp - 0x84] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff7cu))) & 0xffffu);
    /* 0049edb3: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049edb7:; BB(0x0049edb7);
    /* 0049edb7: mov eax, dword ptr [0x79138c] */ r_eax = R32((u32)(0x79138cu));
    /* 0049edbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049edbd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049edc0: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49edc5u); f_004a1fb0();
    /* 0049edc5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049edc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049edca: je 0x49edef */ if (fZ) goto L_0049edef;
L_0049edcc:; BB(0x0049edcc);
    /* 0049edcc: mov word ptr [ebp - 0x86], 0x39 */ W16((u32)(r_ebp+0xffffff7au), 0x39u);
    /* 0049edd5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049eddc: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049eddf: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ede4u); f_004a20f0();
    /* 0049ede4: mov ax, word ptr [ebp - 0x86] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff7au))) & 0xffffu);
    /* 0049edeb: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049edef:; BB(0x0049edef);
    /* 0049edef: mov word ptr [ebp - 0x88], 0x3a */ W16((u32)(r_ebp+0xffffff78u), 0x3au);
    /* 0049edf8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049edff: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ee02: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ee07u); f_004a20f0();
    /* 0049ee07: mov ax, word ptr [ebp - 0x88] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff78u))) & 0xffffu);
    /* 0049ee0e: jmp 0x49ee2f */ goto L_0049ee2f;
L_0049ee10:; BB(0x0049ee10);
    /* 0049ee10: mov word ptr [ebp - 0x8a], 0xffff */ W16((u32)(r_ebp+0xffffff76u), 0xffffu);
    /* 0049ee19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049ee20: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049ee23: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49ee28u); f_004a20f0();
    /* 0049ee28: mov ax, word ptr [ebp - 0x8a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff76u))) & 0xffffu);
L_0049ee2f:; BB(0x0049ee2f);
    /* 0049ee2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049ee32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0049ee39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049ee3a: mov esp, ebp */ r_esp = r_ebp;
    /* 0049ee3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ee3d: ret  */ FN_RET(0x0049e430); r_esp += 4; return;
}

