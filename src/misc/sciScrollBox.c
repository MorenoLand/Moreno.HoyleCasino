#include "protos.h"

void f_00614810(void) /* sciScrollBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614810);
    /* 00614810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614811: mov ebp, esp */ r_ebp = r_esp;
    /* 00614813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614815: push 0x6ab18f */ { u32 v = 0x6ab18fu; r_esp -= 4; W32(r_esp, v); }
    /* 0061481a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00614820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614821: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614824: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00614829: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061482b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061482c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061482f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00614835: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00614838: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061483b: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x614840u); f_005f49d0();
    /* 00614840: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614847: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061484a: mov dword ptr [eax], 0x6d8584 */ W32((u32)(r_eax), 0x6d8584u);
    /* 00614850: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614853: mov dword ptr [ecx + 0x5c], 1 */ W32((u32)(r_ecx+0x5cu), 0x1u);
    /* 0061485a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061485d: mov byte ptr [edx + 0x60], 1 */ W8((u32)(r_edx+0x60u), 0x1u);
    /* 00614861: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614864: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 0061486b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061486e: mov dword ptr [ecx + 0x68], 0xffffffff */ W32((u32)(r_ecx+0x68u), 0xffffffffu);
    /* 00614875: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614878: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 0061487f: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00614884: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x614889u); f_00686d82();
    /* 00614889: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061488c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061488f: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00614893: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614897: je 0x6148a6 */ if (fZ) goto L_006148a6;
L_00614899:; BB(0x00614899);
    /* 00614899: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061489c: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x6148a1u); f_005f5bf0();
    /* 006148a1: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006148a4: jmp 0x6148ad */ goto L_006148ad;
L_006148a6:; BB(0x006148a6);
    /* 006148a6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006148ad:; BB(0x006148ad);
    /* 006148ad: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006148b0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006148b3: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006148b7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006148ba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006148bd: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 006148c0: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 006148c2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6148c7u); f_00686d82();
    /* 006148c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006148ca: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006148cd: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006148d1: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006148d5: je 0x6148e8 */ if (fZ) goto L_006148e8;
L_006148d7:; BB(0x006148d7);
    /* 006148d7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006148da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006148db: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006148de: call 0x615a20 */ r_esp -= 4; W32(r_esp, 0x6148e3u); f_00615a20();
    /* 006148e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006148e6: jmp 0x6148ef */ goto L_006148ef;
L_006148e8:; BB(0x006148e8);
    /* 006148e8: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006148ef:; BB(0x006148ef);
    /* 006148ef: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006148f2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006148f5: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006148f9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006148fc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006148ff: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00614902: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00614907: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61490cu); f_00686d82();
    /* 0061490c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061490f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00614912: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00614916: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061491a: je 0x61492f */ if (fZ) goto L_0061492f;
L_0061491c:; BB(0x0061491c);
    /* 0061491c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061491e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614921: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614922: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00614925: call 0x615b10 */ r_esp -= 4; W32(r_esp, 0x61492au); f_00615b10();
    /* 0061492a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061492d: jmp 0x614936 */ goto L_00614936;
L_0061492f:; BB(0x0061492f);
    /* 0061492f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00614936:; BB(0x00614936);
    /* 00614936: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00614939: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0061493c: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614940: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614943: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614946: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 00614949: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0061494b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0061494d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614950: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00614953: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x614958u); f_00602ef0();
    /* 00614958: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061495d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x614962u); f_00686d82();
    /* 00614962: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614965: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00614968: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0061496c: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614970: je 0x614985 */ if (fZ) goto L_00614985;
L_00614972:; BB(0x00614972);
    /* 00614972: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614974: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614978: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061497b: call 0x615b10 */ r_esp -= 4; W32(r_esp, 0x614980u); f_00615b10();
    /* 00614980: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00614983: jmp 0x61498c */ goto L_0061498c;
L_00614985:; BB(0x00614985);
    /* 00614985: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0061498c:; BB(0x0061498c);
    /* 0061498c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061498f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00614992: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614996: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614999: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061499c: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0061499f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006149a1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006149a3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006149a6: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 006149a9: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x6149aeu); f_00602ef0();
    /* 006149ae: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 006149b3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6149b8u); f_00686d82();
    /* 006149b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006149bb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006149be: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006149c2: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006149c6: je 0x6149d9 */ if (fZ) goto L_006149d9;
L_006149c8:; BB(0x006149c8);
    /* 006149c8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006149cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006149cc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006149cf: call 0x615bb0 */ r_esp -= 4; W32(r_esp, 0x6149d4u); f_00615bb0();
    /* 006149d4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006149d7: jmp 0x6149e0 */ goto L_006149e0;
L_006149d9:; BB(0x006149d9);
    /* 006149d9: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006149e0:; BB(0x006149e0);
    /* 006149e0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006149e3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006149e6: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006149ea: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006149ed: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006149f0: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 006149f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006149fa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006149fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614a00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00614a07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614a08: mov esp, ebp */ r_esp = r_ebp;
    /* 00614a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614a0b: ret  */ FN_RET(0x00614810); r_esp += 4; return;
}

void f_00614a10(void) /* sciScrollBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614a10);
    /* 00614a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00614a13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614a15: push 0x6ab1b2 */ { u32 v = 0x6ab1b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00614a1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00614a20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614a21: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614a24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00614a29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00614a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614a2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00614a2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00614a35: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00614a38: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614a3b: mov dword ptr [eax], 0x6d8584 */ W32((u32)(r_eax), 0x6d8584u);
    /* 00614a41: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614a48: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614a4b: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00614a4e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00614a51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00614a54: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00614a57: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614a5b: je 0x614a70 */ if (fZ) goto L_00614a70;
L_00614a5d:; BB(0x00614a5d);
    /* 00614a5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614a5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00614a62: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614a64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00614a67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00614a69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614a6bu); call_ind(t); }
    /* 00614a6b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00614a6e: jmp 0x614a77 */ goto L_00614a77;
L_00614a70:; BB(0x00614a70);
    /* 00614a70: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00614a77:; BB(0x00614a77);
    /* 00614a77: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614a7a: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00614a7d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00614a80: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00614a83: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00614a86: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614a8a: je 0x614a9f */ if (fZ) goto L_00614a9f;
L_00614a8c:; BB(0x00614a8c);
    /* 00614a8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614a8e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00614a91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614a93: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00614a96: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00614a98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614a9au); call_ind(t); }
    /* 00614a9a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00614a9d: jmp 0x614aa6 */ goto L_00614aa6;
L_00614a9f:; BB(0x00614a9f);
    /* 00614a9f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00614aa6:; BB(0x00614aa6);
    /* 00614aa6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614aa9: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00614aac: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00614aaf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00614ab2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00614ab5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614ab9: je 0x614ace */ if (fZ) goto L_00614ace;
L_00614abb:; BB(0x00614abb);
    /* 00614abb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614abd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614ac0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614ac2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614ac5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00614ac7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614ac9u); call_ind(t); }
    /* 00614ac9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00614acc: jmp 0x614ad5 */ goto L_00614ad5;
L_00614ace:; BB(0x00614ace);
    /* 00614ace: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00614ad5:; BB(0x00614ad5);
    /* 00614ad5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614ad8: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00614adb: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00614ade: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00614ae1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614ae4: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614ae8: je 0x614afd */ if (fZ) goto L_00614afd;
L_00614aea:; BB(0x00614aea);
    /* 00614aea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614aec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00614aef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614af1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00614af4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00614af6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614af8u); call_ind(t); }
    /* 00614af8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00614afb: jmp 0x614b04 */ goto L_00614b04;
L_00614afd:; BB(0x00614afd);
    /* 00614afd: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00614b04:; BB(0x00614b04);
    /* 00614b04: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614b07: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00614b0a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00614b0d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00614b10: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00614b13: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614b17: je 0x614b2c */ if (fZ) goto L_00614b2c;
L_00614b19:; BB(0x00614b19);
    /* 00614b19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614b1b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614b1e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614b20: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614b23: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00614b25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614b27u); call_ind(t); }
    /* 00614b27: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00614b2a: jmp 0x614b33 */ goto L_00614b33;
L_00614b2c:; BB(0x00614b2c);
    /* 00614b2c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00614b33:; BB(0x00614b33);
    /* 00614b33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00614b3a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00614b3d: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x614b42u); f_005f4ad0();
    /* 00614b42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614b45: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00614b4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614b4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00614b4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614b50: ret  */ FN_RET(0x00614a10); r_esp += 4; return;
}

void f_00614ea0(void) /* sciScrollBox::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614ea0);
    /* 00614ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00614ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614ea7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00614eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614eab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614eae: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x614eb3u); f_005f5300();
    /* 00614eb3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614eb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614eb7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614eba: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00614ebd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614ec0: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00614ec3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00614ec5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00614ec8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614ecau); call_ind(t); }
    /* 00614eca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614ecd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614ed0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614ed1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614ed4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614ed7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614eda: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00614edd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00614edf: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00614ee2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614ee4u); call_ind(t); }
    /* 00614ee4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614ee7: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614eea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614eeb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614eee: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00614ef1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614ef4: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00614ef7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00614ef9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00614efc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614efeu); call_ind(t); }
    /* 00614efe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614f01: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614f04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614f05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f08: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00614f0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f0e: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00614f11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00614f13: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00614f16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614f18u); call_ind(t); }
    /* 00614f18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614f1b: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614f1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f22: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00614f25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f28: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00614f2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00614f2d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00614f30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614f32u); call_ind(t); }
    /* 00614f32: mov esp, ebp */ r_esp = r_ebp;
    /* 00614f34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614f35: ret 4 */ FN_RET(0x00614ea0); r_esp += 8; return;
}

void f_00614f40(void) /* sciScrollBox::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614f40);
    /* 00614f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00614f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f4a: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x614f4fu); f_005f5440();
    /* 00614f4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f52: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00614f55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f58: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00614f5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614f5d: mov ecx, eax */ r_ecx = r_eax;
    /* 00614f5f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00614f62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614f64u); call_ind(t); }
    /* 00614f64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f67: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00614f6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f6d: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00614f70: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614f72: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00614f75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614f77u); call_ind(t); }
    /* 00614f77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f7a: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00614f7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f80: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00614f83: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614f85: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00614f88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614f8au); call_ind(t); }
    /* 00614f8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f8d: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00614f90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614f93: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00614f96: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614f98: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00614f9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614f9du); call_ind(t); }
    /* 00614f9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614fa0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00614fa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614fa6: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00614fa9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614fab: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00614fae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614fb0u); call_ind(t); }
    /* 00614fb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614fb3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614fb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614fb8: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00614fbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614fc0u); call_ind(t); }
    /* 00614fc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00614fc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614fc3: ret  */ FN_RET(0x00614f40); r_esp += 4; return;
}

void f_00614fd0(void) /* sciScrollBox::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614fd0);
    /* 00614fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00614fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614fd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614fda: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x614fdfu); f_005f5420();
    /* 00614fdf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614fe2: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00614fe5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614fe8: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00614feb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614fed: mov ecx, eax */ r_ecx = r_eax;
    /* 00614fef: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00614ff2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614ff4u); call_ind(t); }
    /* 00614ff4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614ff7: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00614ffa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614ffd: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00615000: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615002: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00615005: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615007u); call_ind(t); }
    /* 00615007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061500a: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0061500d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615010: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00615013: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615015: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00615018: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61501au); call_ind(t); }
    /* 0061501a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061501d: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00615020: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615023: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00615026: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615028: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0061502b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61502du); call_ind(t); }
    /* 0061502d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615030: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00615033: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615036: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00615039: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0061503b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0061503e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615040u); call_ind(t); }
    /* 00615040: mov esp, ebp */ r_esp = r_ebp;
    /* 00615042: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615043: ret  */ FN_RET(0x00614fd0); r_esp += 4; return;
}

void f_00615080(void) /* sciScrollBox::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615080);
    /* 00615080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615081: mov ebp, esp */ r_ebp = r_esp;
    /* 00615083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061508a: mov byte ptr [eax + 0x60], 1 */ W8((u32)(r_eax+0x60u), 0x1u);
    /* 0061508e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615091: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00615094: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615097: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0061509a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0061509c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0061509f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6150a1u); call_ind(t); }
    /* 006150a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006150a4: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 006150a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006150aa: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006150ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006150af: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006150b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6150b7u); call_ind(t); }
    /* 006150b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006150ba: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 006150bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006150c0: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006150c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006150c5: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006150cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6150cdu); call_ind(t); }
    /* 006150cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006150cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006150d0: ret  */ FN_RET(0x00615080); r_esp += 4; return;
}

void f_006150e0(void) /* sciScrollBox::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006150e0);
    /* 006150e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006150e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006150e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006150e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006150e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006150ea: mov byte ptr [eax + 0x60], 0 */ W8((u32)(r_eax+0x60u), 0x0u);
    /* 006150ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006150f1: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006150f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006150f7: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006150fa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006150fc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006150ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615101u); call_ind(t); }
    /* 00615101: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615104: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00615107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061510a: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0061510d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0061510f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00615115: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615117u); call_ind(t); }
    /* 00615117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061511a: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0061511d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615120: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00615123: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615125: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0061512b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61512du); call_ind(t); }
    /* 0061512d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061512f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615130: ret  */ FN_RET(0x006150e0); r_esp += 4; return;
}

void f_00615180(void) /* sciScrollBox::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615180);
    /* 00615180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615181: mov ebp, esp */ r_ebp = r_esp;
    /* 00615183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615187: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061518a: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0061518d: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615190: jne 0x615197 */ if (!fZ) goto L_00615197;
L_00615192:; BB(0x00615192);
    /* 00615192: jmp 0x615222 */ goto L_00615222;
L_00615197:; BB(0x00615197);
    /* 00615197: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061519a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061519d: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 006151a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151a3: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006151a7: jge 0x6151ab */ if ((fS==fO)) goto L_006151ab;
L_006151a9:; BB(0x006151a9);
    /* 006151a9: jmp 0x615222 */ goto L_00615222;
L_006151ab:; BB(0x006151ab);
    /* 006151ab: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 006151af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006151b1: je 0x615202 */ if (fZ) goto L_00615202;
L_006151b3:; BB(0x006151b3);
    /* 006151b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151b6: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 006151b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006151ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151bd: call 0x6152a0 */ r_esp -= 4; W32(r_esp, 0x6151c2u); f_006152a0();
    /* 006151c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006151c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006151c7: jne 0x6151d8 */ if (!fZ) goto L_006151d8;
L_006151c9:; BB(0x006151c9);
    /* 006151c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151cc: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 006151cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006151d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151d3: call 0x615540 */ r_esp -= 4; W32(r_esp, 0x6151d8u); f_00615540();
L_006151d8:; BB(0x006151d8);
    /* 006151d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006151db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006151dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151df: call 0x6152a0 */ r_esp -= 4; W32(r_esp, 0x6151e4u); f_006152a0();
    /* 006151e4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006151e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006151e9: jne 0x615202 */ if (!fZ) goto L_00615202;
L_006151eb:; BB(0x006151eb);
    /* 006151eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151ee: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 006151f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006151f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151f5: call 0x6152f0 */ r_esp -= 4; W32(r_esp, 0x6151fau); f_006152f0();
    /* 006151fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006151fd: call 0x615740 */ r_esp -= 4; W32(r_esp, 0x615202u); f_00615740();
L_00615202:; BB(0x00615202);
    /* 00615202: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615205: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00615207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061520a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00615210: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615212u); call_ind(t); }
    /* 00615212: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615215: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061521a: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00615220: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615222u); call_ind(t); }
L_00615222:; BB(0x00615222);
    /* 00615222: mov esp, ebp */ r_esp = r_ebp;
    /* 00615224: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615225: ret 8 */ FN_RET(0x00615180); r_esp += 12; return;
}

void f_00615230(void) /* sciScrollBox::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615230);
    /* 00615230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615231: mov ebp, esp */ r_ebp = r_esp;
    /* 00615233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615237: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061523a: mov dword ptr [eax + 0x68], 0xffffffff */ W32((u32)(r_eax+0x68u), 0xffffffffu);
    /* 00615241: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615244: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615246: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615249: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0061524f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615251u); call_ind(t); }
    /* 00615251: mov esp, ebp */ r_esp = r_ebp;
    /* 00615253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615254: ret  */ FN_RET(0x00615230); r_esp += 4; return;
}

