#include "protos.h"

void f_0058b140(void) /* KenoPayoutDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058b140);
    /* 0058b140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058b141: mov ebp, esp */ r_ebp = r_esp;
    /* 0058b143: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058b146: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058b149: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058b14c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x58b151u); f_005eaaf0();
    /* 0058b151: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058b154: mov dword ptr [eax], 0x6cd28c */ W32((u32)(r_eax), 0x6cd28cu);
    /* 0058b15a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058b15d: mov dword ptr [ecx + 0x178], 0 */ W32((u32)(r_ecx+0x178u), 0x0u);
    /* 0058b167: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058b16a: mov dword ptr [edx + 0x224], 0 */ W32((u32)(r_edx+0x224u), 0x0u);
    /* 0058b174: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058b17b: jmp 0x58b186 */ goto L_0058b186;
L_0058b17d:; BB(0x0058b17d);
    /* 0058b17d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058b180: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058b183: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0058b186:; BB(0x0058b186);
    /* 0058b186: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b18a: jge 0x58b1b0 */ if ((fS==fO)) goto L_0058b1b0;
L_0058b18c:; BB(0x0058b18c);
    /* 0058b18c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058b18f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058b192: mov dword ptr [edx + ecx*4 + 0x17c], 0 */ W32((u32)(r_edx+r_ecx*4+0x17cu), 0x0u);
    /* 0058b19d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058b1a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058b1a3: mov dword ptr [ecx + eax*4 + 0x1d0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1d0u), 0x0u);
    /* 0058b1ae: jmp 0x58b17d */ goto L_0058b17d;
L_0058b1b0:; BB(0x0058b1b0);
    /* 0058b1b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058b1b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0058b1b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058b1b6: ret  */ FN_RET(0x0058b140); r_esp += 4; return;
}

void f_0058b1c0(void) /* KenoPayoutDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058b1c0);
    /* 0058b1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058b1c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1c5: push 0x6a6ead */ { u32 v = 0x6a6eadu; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058b1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1d1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058b1d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058b1d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058b1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058b1dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058b1df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058b1e5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0058b1e8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b1eb: mov dword ptr [eax], 0x6cd28c */ W32((u32)(r_eax), 0x6cd28cu);
    /* 0058b1f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058b1f8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b1fb: cmp dword ptr [ecx + 0x178], 0 */ {  u32 a = R32((u32)(r_ecx+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b202: je 0x58b243 */ if (fZ) goto L_0058b243;
L_0058b204:; BB(0x0058b204);
    /* 0058b204: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b207: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058b20d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0058b210: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058b213: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0058b216: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b21a: je 0x58b22f */ if (fZ) goto L_0058b22f;
L_0058b21c:; BB(0x0058b21c);
    /* 0058b21c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b21e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058b221: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058b223: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058b226: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058b228: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58b22au); call_ind(t); }
    /* 0058b22a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0058b22d: jmp 0x58b236 */ goto L_0058b236;
L_0058b22f:; BB(0x0058b22f);
    /* 0058b22f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0058b236:; BB(0x0058b236);
    /* 0058b236: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b239: mov dword ptr [eax + 0x178], 0 */ W32((u32)(r_eax+0x178u), 0x0u);
L_0058b243:; BB(0x0058b243);
    /* 0058b243: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b246: cmp dword ptr [ecx + 0x224], 0 */ {  u32 a = R32((u32)(r_ecx+0x224u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b24d: je 0x58b28e */ if (fZ) goto L_0058b28e;
L_0058b24f:; BB(0x0058b24f);
    /* 0058b24f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b252: mov eax, dword ptr [edx + 0x224] */ r_eax = R32((u32)(r_edx+0x224u));
    /* 0058b258: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0058b25b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058b25e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0058b261: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b265: je 0x58b27a */ if (fZ) goto L_0058b27a;
L_0058b267:; BB(0x0058b267);
    /* 0058b267: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b269: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058b26c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058b26e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058b271: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058b273: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58b275u); call_ind(t); }
    /* 0058b275: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0058b278: jmp 0x58b281 */ goto L_0058b281;
L_0058b27a:; BB(0x0058b27a);
    /* 0058b27a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0058b281:; BB(0x0058b281);
    /* 0058b281: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b284: mov dword ptr [eax + 0x224], 0 */ W32((u32)(r_eax+0x224u), 0x0u);
L_0058b28e:; BB(0x0058b28e);
    /* 0058b28e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058b295: jmp 0x58b2a0 */ goto L_0058b2a0;
L_0058b297:; BB(0x0058b297);
    /* 0058b297: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058b29a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058b29d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0058b2a0:; BB(0x0058b2a0);
    /* 0058b2a0: cmp dword ptr [ebp - 0x10], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058b2a4: jge 0x58b35d */ if ((fS==fO)) goto L_0058b35d;
L_0058b2aa:; BB(0x0058b2aa);
    /* 0058b2aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058b2ad: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b2b0: cmp dword ptr [eax + edx*4 + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b2b8: je 0x58b301 */ if (fZ) goto L_0058b301;
L_0058b2ba:; BB(0x0058b2ba);
    /* 0058b2ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058b2bd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b2c0: mov eax, dword ptr [edx + ecx*4 + 0x17c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058b2c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0058b2ca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058b2cd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0058b2d0: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b2d4: je 0x58b2e9 */ if (fZ) goto L_0058b2e9;
L_0058b2d6:; BB(0x0058b2d6);
    /* 0058b2d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b2d8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058b2db: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058b2dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058b2e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058b2e2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58b2e4u); call_ind(t); }
    /* 0058b2e4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058b2e7: jmp 0x58b2f0 */ goto L_0058b2f0;
L_0058b2e9:; BB(0x0058b2e9);
    /* 0058b2e9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0058b2f0:; BB(0x0058b2f0);
    /* 0058b2f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058b2f3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b2f6: mov dword ptr [ecx + eax*4 + 0x17c], 0 */ W32((u32)(r_ecx+r_eax*4+0x17cu), 0x0u);
L_0058b301:; BB(0x0058b301);
    /* 0058b301: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058b304: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b307: cmp dword ptr [eax + edx*4 + 0x1d0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b30f: je 0x58b358 */ if (fZ) goto L_0058b358;
L_0058b311:; BB(0x0058b311);
    /* 0058b311: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058b314: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b317: mov eax, dword ptr [edx + ecx*4 + 0x1d0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058b31e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0058b321: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058b324: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0058b327: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b32b: je 0x58b340 */ if (fZ) goto L_0058b340;
L_0058b32d:; BB(0x0058b32d);
    /* 0058b32d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b32f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058b332: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058b334: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058b337: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058b339: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58b33bu); call_ind(t); }
    /* 0058b33b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0058b33e: jmp 0x58b347 */ goto L_0058b347;
L_0058b340:; BB(0x0058b340);
    /* 0058b340: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0058b347:; BB(0x0058b347);
    /* 0058b347: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058b34a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b34d: mov dword ptr [ecx + eax*4 + 0x1d0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1d0u), 0x0u);
L_0058b358:; BB(0x0058b358);
    /* 0058b358: jmp 0x58b297 */ goto L_0058b297;
L_0058b35d:; BB(0x0058b35d);
    /* 0058b35d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058b364: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058b367: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x58b36cu); f_005eac00();
    /* 0058b36c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058b36f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058b376: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058b377: mov esp, ebp */ r_esp = r_ebp;
    /* 0058b379: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058b37a: ret  */ FN_RET(0x0058b1c0); r_esp += 4; return;
}

void f_0058d040(void) /* KenoPayoutDisplay::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d040);
    /* 0058d040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d041: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d043: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d046: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0058d049: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d04c: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058d052: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d055: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058d05b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d05d: mov ecx, eax */ r_ecx = r_eax;
    /* 0058d05f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058d062: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d064u); call_ind(t); }
    /* 0058d064: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d067: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0058d06d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d070: mov ecx, dword ptr [eax + 0x224] */ r_ecx = R32((u32)(r_eax+0x224u));
    /* 0058d076: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058d078: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058d07b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d07du); call_ind(t); }
    /* 0058d07d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058d084: jmp 0x58d08f */ goto L_0058d08f;
L_0058d086:; BB(0x0058d086);
    /* 0058d086: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d089: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d08c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0058d08f:; BB(0x0058d08f);
    /* 0058d08f: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058d093: jge 0x58d14c */ if ((fS==fO)) goto L_0058d14c;
L_0058d099:; BB(0x0058d099);
    /* 0058d099: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d09c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d09f: cmp dword ptr [eax + edx*4 + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d0a7: je 0x58d0f0 */ if (fZ) goto L_0058d0f0;
L_0058d0a9:; BB(0x0058d0a9);
    /* 0058d0a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d0ac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d0af: mov eax, dword ptr [edx + ecx*4 + 0x17c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x17cu));
    /* 0058d0b6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0058d0b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d0bc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058d0bf: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d0c3: je 0x58d0d8 */ if (fZ) goto L_0058d0d8;
L_0058d0c5:; BB(0x0058d0c5);
    /* 0058d0c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d0c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058d0ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058d0cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058d0cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d0d1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58d0d3u); call_ind(t); }
    /* 0058d0d3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058d0d6: jmp 0x58d0df */ goto L_0058d0df;
L_0058d0d8:; BB(0x0058d0d8);
    /* 0058d0d8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0058d0df:; BB(0x0058d0df);
    /* 0058d0df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d0e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d0e5: mov dword ptr [ecx + eax*4 + 0x17c], 0 */ W32((u32)(r_ecx+r_eax*4+0x17cu), 0x0u);
L_0058d0f0:; BB(0x0058d0f0);
    /* 0058d0f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d0f3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d0f6: cmp dword ptr [eax + edx*4 + 0x1d0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d0fe: je 0x58d147 */ if (fZ) goto L_0058d147;
L_0058d100:; BB(0x0058d100);
    /* 0058d100: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d103: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d106: mov eax, dword ptr [edx + ecx*4 + 0x1d0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1d0u));
    /* 0058d10d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058d110: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d113: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058d116: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d11a: je 0x58d12f */ if (fZ) goto L_0058d12f;
L_0058d11c:; BB(0x0058d11c);
    /* 0058d11c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d11e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d121: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058d123: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d126: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d128: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58d12au); call_ind(t); }
    /* 0058d12a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0058d12d: jmp 0x58d136 */ goto L_0058d136;
L_0058d12f:; BB(0x0058d12f);
    /* 0058d12f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0058d136:; BB(0x0058d136);
    /* 0058d136: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d139: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d13c: mov dword ptr [ecx + eax*4 + 0x1d0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1d0u), 0x0u);
L_0058d147:; BB(0x0058d147);
    /* 0058d147: jmp 0x58d086 */ goto L_0058d086;
L_0058d14c:; BB(0x0058d14c);
    /* 0058d14c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d14f: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x58d154u); f_005eb5a0();
    /* 0058d154: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d157: ret  */ FN_RET(0x0058d040); r_esp += 4; return;
}

