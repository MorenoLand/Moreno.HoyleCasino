#include "protos.h"

void f_00402fc0(void) /* BaccaratScorecardDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402fc0);
    /* 00402fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00402fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402fc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402fc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402fcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fce: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x402fd3u); f_005f71f0();
    /* 00402fd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fd6: mov dword ptr [eax], 0x6b2abc */ W32((u32)(r_eax), 0x6b2abcu);
    /* 00402fdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fdf: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 00402fe9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402fec: mov dword ptr [edx + 0x1c0], 0 */ W32((u32)(r_edx+0x1c0u), 0x0u);
    /* 00402ff6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402ff9: mov esp, ebp */ r_esp = r_ebp;
    /* 00402ffb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402ffc: ret  */ FN_RET(0x00402fc0); r_esp += 4; return;
}

void f_00403000(void) /* BaccaratScorecardDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403000);
    /* 00403000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403001: mov ebp, esp */ r_ebp = r_esp;
    /* 00403003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403005: push 0x69d6cb */ { u32 v = 0x69d6cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0040300a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00403010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403011: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403014: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00403019: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040301b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040301c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040301f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00403025: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00403028: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040302b: mov dword ptr [eax], 0x6b2abc */ W32((u32)(r_eax), 0x6b2abcu);
    /* 00403031: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403038: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040303b: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403042: je 0x403083 */ if (fZ) goto L_00403083;
L_00403044:; BB(0x00403044);
    /* 00403044: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403047: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0040304d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00403050: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00403053: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00403056: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040305a: je 0x40306f */ if (fZ) goto L_0040306f;
L_0040305c:; BB(0x0040305c);
    /* 0040305c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040305e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403061: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403063: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403066: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403068: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40306au); call_ind(t); }
    /* 0040306a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040306d: jmp 0x403076 */ goto L_00403076;
L_0040306f:; BB(0x0040306f);
    /* 0040306f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00403076:; BB(0x00403076);
    /* 00403076: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403079: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
L_00403083:; BB(0x00403083);
    /* 00403083: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040308a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040308d: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x403092u); f_005f7260();
    /* 00403092: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403095: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040309c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040309d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040309f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004030a0: ret  */ FN_RET(0x00403000); r_esp += 4; return;
}

void f_004030b0(void) /* BaccaratScorecardDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004030b0);
    /* 004030b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004030b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004030b3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004030b6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004030bb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004030bd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004030c0: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004030c3: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 004030ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004030cc: push 0x31128e */ { u32 v = 0x31128eu; r_esp -= 4; W32(r_esp, v); }
    /* 004030d1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004030d4: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x4030d9u); f_005f83d0();
    /* 004030d9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004030db: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004030de: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x4030e3u); f_005f89d0();
    /* 004030e3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004030e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004030e7: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 004030e9: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004030eb: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 004030ed: push 0x6b2b80 */ { u32 v = 0x6b2b80u; r_esp -= 4; W32(r_esp, v); }
    /* 004030f2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4030f7u); f_00630f40();
    /* 004030f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004030fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004030fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004030fd: push 0x17b */ { u32 v = 0x17bu; r_esp -= 4; W32(r_esp, v); }
    /* 00403102: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00403104: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403109: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040310b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040310d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403110: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x403115u); f_005f9de0();
    /* 00403115: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403117: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040311c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040311e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403120: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00403122: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 00403124: push 0x311291 */ { u32 v = 0x311291u; r_esp -= 4; W32(r_esp, v); }
    /* 00403129: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040312b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040312d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403130: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x403135u); f_005f9ce0();
    /* 00403135: mov dword ptr [ebp - 0x10], 0xa */ W32((u32)(r_ebp+0xfffffff0u), 0xau);
    /* 0040313c: mov dword ptr [ebp - 0xc], 0x23 */ W32((u32)(r_ebp+0xfffffff4u), 0x23u);
    /* 00403143: mov dword ptr [ebp - 0x18], 0x32 */ W32((u32)(r_ebp+0xffffffe8u), 0x32u);
    /* 0040314a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040314d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403150: lea edx, [ecx + eax + 5] */ r_edx = (u32)(r_ecx+r_eax+0x5u);
    /* 00403154: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00403157: mov dword ptr [ebp - 0x34], 0x14 */ W32((u32)(r_ebp+0xffffffccu), 0x14u);
    /* 0040315e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403160: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403162: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403164: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403168: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040316b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040316c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040316e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403172: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00403174: push 0x6b2b68 */ { u32 v = 0x6b2b68u; r_esp -= 4; W32(r_esp, v); }
    /* 00403179: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40317eu); f_00630f40();
    /* 0040317e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403182: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00403184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403186: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403189: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x40318eu); f_005fa5b0();
    /* 0040318e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403190: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00403192: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403194: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403198: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040319b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040319c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040319e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004031a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004031a2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004031a4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004031a9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004031ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004031ad: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004031b0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4031b5u); f_005fa5b0();
    /* 004031b5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004031b8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004031bb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004031be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004031c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004031c2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004031c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004031c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004031c8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004031cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004031cc: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004031ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004031d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004031d2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004031d4: push 0x6b2b48 */ { u32 v = 0x6b2b48u; r_esp -= 4; W32(r_esp, v); }
    /* 004031d9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4031deu); f_00630f40();
    /* 004031de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004031e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004031e2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004031e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004031e6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004031e9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4031eeu); f_005fa5b0();
    /* 004031ee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004031f0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004031f2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004031f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004031f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004031f8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004031fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004031fc: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004031fe: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00403201: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403202: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00403204: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00403209: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040320b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040320d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403210: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x403215u); f_005fa5b0();
    /* 00403215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403218: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040321b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040321e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403220: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403222: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403224: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403228: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040322b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040322c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040322e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403231: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403232: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00403234: push 0x6b2b2c */ { u32 v = 0x6b2b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00403239: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40323eu); f_00630f40();
    /* 0040323e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403242: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00403244: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403246: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403249: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x40324eu); f_005fa5b0();
    /* 0040324e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403250: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00403252: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403254: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403257: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403258: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040325b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040325c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040325e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00403261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403262: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00403264: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00403269: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0040326b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040326d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403270: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x403275u); f_005fa5b0();
    /* 00403275: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403278: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040327b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040327e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403280: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403282: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403284: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403288: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040328b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040328c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040328e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403292: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00403294: push 0x6b2b14 */ { u32 v = 0x6b2b14u; r_esp -= 4; W32(r_esp, v); }
    /* 00403299: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40329eu); f_00630f40();
    /* 0040329e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004032a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004032a2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004032a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004032a6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004032a9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4032aeu); f_005fa5b0();
    /* 004032ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004032b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004032b2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004032b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004032b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004032b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004032bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004032bc: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004032be: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004032c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004032c2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004032c4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004032c9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004032cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004032cd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004032d0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4032d5u); f_005fa5b0();
    /* 004032d5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004032d8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004032db: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004032de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004032e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004032e2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004032e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004032e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004032e8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004032eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004032ec: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004032ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004032f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004032f2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004032f4: push 0x6b2afc */ { u32 v = 0x6b2afcu; r_esp -= 4; W32(r_esp, v); }
    /* 004032f9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4032feu); f_00630f40();
    /* 004032fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403302: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403304: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403306: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403309: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x40330eu); f_005fa5b0();
    /* 0040330e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403310: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00403312: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403314: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403317: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403318: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040331b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040331c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040331e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00403321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403322: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00403324: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00403329: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0040332b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040332d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403330: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x403335u); f_005fa5b0();
    /* 00403335: mov dword ptr [ebp - 0x38], 0xfffffffe */ W32((u32)(r_ebp+0xffffffc8u), 0xfffffffeu);
    /* 0040333c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040333f: add ecx, 0x7e */ {  u32 a = r_ecx; u32 b = 0x7eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00403342: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00403345: mov dword ptr [ebp - 0xc], 0x3c */ W32((u32)(r_ebp+0xfffffff4u), 0x3cu);
    /* 0040334c: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 00403353: mov dword ptr [ebp - 0x30], 0x14 */ W32((u32)(r_ebp+0xffffffd0u), 0x14u);
    /* 0040335a: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00403361: jmp 0x40336c */ goto L_0040336c;
L_00403363:; BB(0x00403363);
    /* 00403363: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00403366: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00403369: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0040336c:; BB(0x0040336c);
    /* 0040336c: cmp dword ptr [ebp - 0x14], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403370: jg 0x4033c8 */ if ((!fZ&&fS==fO)) goto L_004033c8;
L_00403372:; BB(0x00403372);
    /* 00403372: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00403375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403376: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0040337b: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0040337e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040337f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x403385u); call_ind(t); }
    /* 00403385: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403388: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040338b: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0040338e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403390: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00403392: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403394: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403398: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040339b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040339c: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0040339e: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004033a0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004033a2: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 004033a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004033a6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004033a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004033aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004033ac: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004033af: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4033b4u); f_005fa5b0();
    /* 004033b4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004033b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004033ba: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004033bd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004033c0: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004033c3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004033c6: jmp 0x403363 */ goto L_00403363;
L_004033c8:; BB(0x004033c8);
    /* 004033c8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004033cb: add eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004033d0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004033d3: mov dword ptr [ebp - 0xc], 0x3c */ W32((u32)(r_ebp+0xfffffff4u), 0x3cu);
    /* 004033da: mov dword ptr [ebp - 0x30], 0x28 */ W32((u32)(r_ebp+0xffffffd0u), 0x28u);
    /* 004033e1: mov dword ptr [ebp - 0x2c], 0x28 */ W32((u32)(r_ebp+0xffffffd4u), 0x28u);
    /* 004033e8: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 004033ef: jmp 0x4033fa */ goto L_004033fa;
L_004033f1:; BB(0x004033f1);
    /* 004033f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004033f4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004033f7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_004033fa:; BB(0x004033fa);
    /* 004033fa: cmp dword ptr [ebp - 0x14], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004033fe: jg 0x403496 */ if ((!fZ&&fS==fO)) goto L_00403496;
L_00403404:; BB(0x00403404);
    /* 00403404: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00403407: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0040340a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040340c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0040340e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00403410: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403414: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403417: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403418: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0040341a: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0040341c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040341e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00403423: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00403426: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403427: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403429: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040342c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x403431u); f_005fa5b0();
    /* 00403431: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00403434: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403437: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040343a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040343c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403441: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403443: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403445: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403448: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403449: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040344c: sub edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040344f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403450: push 0x311290 */ { u32 v = 0x311290u; r_esp -= 4; W32(r_esp, v); }
    /* 00403455: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403459: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040345b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040345e: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x403463u); f_005f9ce0();
    /* 00403463: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403466: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403467: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040346a: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x40346fu); f_005fb2b0();
    /* 0040346f: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00403472: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00403475: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403477: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040347a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0040347d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40347fu); call_ind(t); }
    /* 0040347f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403482: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403485: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00403488: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040348b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040348e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00403491: jmp 0x4033f1 */ goto L_004033f1;
L_00403496:; BB(0x00403496);
    /* 00403496: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00403499: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040349f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004034a2: mov dword ptr [ebp - 0xc], 0x3c */ W32((u32)(r_ebp+0xfffffff4u), 0x3cu);
    /* 004034a9: mov dword ptr [ebp - 0x30], 0x3c */ W32((u32)(r_ebp+0xffffffd0u), 0x3cu);
    /* 004034b0: mov dword ptr [ebp - 0x2c], 0x3c */ W32((u32)(r_ebp+0xffffffd4u), 0x3cu);
    /* 004034b7: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 004034be: jmp 0x4034c9 */ goto L_004034c9;
L_004034c0:; BB(0x004034c0);
    /* 004034c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004034c3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004034c6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004034c9:; BB(0x004034c9);
    /* 004034c9: cmp dword ptr [ebp - 0x14], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004034cd: jg 0x403565 */ if ((!fZ&&fS==fO)) goto L_00403565;
L_004034d3:; BB(0x004034d3);
    /* 004034d3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004034d6: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004034d9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004034db: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004034dd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004034df: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004034e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004034e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004034e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004034e7: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004034e9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004034eb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004034ed: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004034f2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004034f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004034f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004034f8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004034fb: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x403500u); f_005fa5b0();
    /* 00403500: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00403503: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00403506: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00403509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040350b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403510: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403512: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403514: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403518: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040351b: sub ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040351e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040351f: push 0x311290 */ { u32 v = 0x311290u; r_esp -= 4; W32(r_esp, v); }
    /* 00403524: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403527: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403528: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040352a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040352d: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x403532u); f_005f9ce0();
    /* 00403532: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403536: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403539: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x40353eu); f_005fb2b0();
    /* 0040353e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00403541: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00403544: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403546: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00403549: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040354c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40354eu); call_ind(t); }
    /* 0040354e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403551: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00403554: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00403557: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040355a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040355d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00403560: jmp 0x4034c0 */ goto L_004034c0;
L_00403565:; BB(0x00403565);
    /* 00403565: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403568: call 0x403630 */ r_esp -= 4; W32(r_esp, 0x40356du); f_00403630();
    /* 0040356d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403570: call 0x4035b0 */ r_esp -= 4; W32(r_esp, 0x403575u); f_004035b0();
    /* 00403575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403576: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403579: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0040357f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00403582: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00403588: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040358a: mov ecx, eax */ r_ecx = r_eax;
    /* 0040358c: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00403592: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403594u); call_ind(t); }
    /* 00403594: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00403597: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00403599: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x40359eu); f_00686d72();
    /* 0040359e: mov esp, ebp */ r_esp = r_ebp;
    /* 004035a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004035a1: ret  */ FN_RET(0x004030b0); r_esp += 4; return;
}

void f_004037a0(void) /* BaccaratScorecardDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004037a0);
    /* 004037a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004037a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004037a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004037a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004037a7: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004037ad: call 0x405710 */ r_esp -= 4; W32(r_esp, 0x4037b2u); f_00405710();
    /* 004037b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004037b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004037b5: ret 4 */ FN_RET(0x004037a0); r_esp += 8; return;
}

void f_005f72f0(void) /* BaccaratScorecardDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f72f0);
    /* 005f72f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f72f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f72f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f72f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f72f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f72fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f72fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f72fe: call 0x5f7e80 */ r_esp -= 4; W32(r_esp, 0x5f7303u); f_005f7e80();
    /* 005f7303: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7306: movzx edx, byte ptr [ecx + 0x1b8] */ r_edx = (u32)R8((u32)(r_ecx+0x1b8u));
    /* 005f730d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f730f: je 0x5f7318 */ if (fZ) goto L_005f7318;
L_005f7311:; BB(0x005f7311);
    /* 005f7311: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7314: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_005f7318:; BB(0x005f7318);
    /* 005f7318: mov esp, ebp */ r_esp = r_ebp;
    /* 005f731a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f731b: ret 4 */ FN_RET(0x005f72f0); r_esp += 8; return;
}

void f_005f8340(void) /* BaccaratScorecardDialog::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8340);
    /* 005f8340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8341: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8343: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8346: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f8349: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f834d: jne 0x5f836c */ if (!fZ) goto L_005f836c;
L_005f834f:; BB(0x005f834f);
    /* 005f834f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f8351: jne 0x5f836a */ if (!fZ) goto L_005f836a;
L_005f8353:; BB(0x005f8353);
    /* 005f8353: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8358: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f835d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8362: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f8367u); f_005e9f20();
    /* 005f8367: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f836a:; BB(0x005f836a);
    /* 005f836a: jmp 0x5f83be */ goto L_005f83be;
L_005f836c:; BB(0x005f836c);
    /* 005f836c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8373: jmp 0x5f837e */ goto L_005f837e;
L_005f8375:; BB(0x005f8375);
    /* 005f8375: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8378: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f837b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005f837e:; BB(0x005f837e);
    /* 005f837e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8381: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8387: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f838cu); f_0060c9a0();
    /* 005f838c: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f838f: jge 0x5f83be */ if ((fS==fO)) goto L_005f83be;
L_005f8391:; BB(0x005f8391);
    /* 005f8391: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8395: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8398: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f839e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f83a3u); f_0060ca40();
    /* 005f83a3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f83a6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f83aa: je 0x5f83bc */ if (fZ) goto L_005f83bc;
L_005f83ac:; BB(0x005f83ac);
    /* 005f83ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f83af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f83b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f83b4: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005f83ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f83bcu); call_ind(t); }
L_005f83bc:; BB(0x005f83bc);
    /* 005f83bc: jmp 0x5f8375 */ goto L_005f8375;
L_005f83be:; BB(0x005f83be);
    /* 005f83be: mov esp, ebp */ r_esp = r_ebp;
    /* 005f83c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f83c1: ret  */ FN_RET(0x005f8340); r_esp += 4; return;
}

void f_005f86a0(void) /* BaccaratScorecardDialog::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f86a0);
    /* 005f86a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f86a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f86a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f86a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f86a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f86ac: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5f86b1u); f_005f8910();
    /* 005f86b1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f86b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f86b6: je 0x5f8705 */ if (fZ) goto L_005f8705;
L_005f86b8:; BB(0x005f86b8);
    /* 005f86b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f86bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f86be: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005f86c1: cmp eax, dword ptr [edx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x108u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f86c7: jl 0x5f8705 */ if ((fS!=fO)) goto L_005f8705;
L_005f86c9:; BB(0x005f86c9);
    /* 005f86c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f86cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f86cf: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005f86d2: cmp eax, dword ptr [edx + 0x110] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f86d8: jg 0x5f8705 */ if ((!fZ&&fS==fO)) goto L_005f8705;
L_005f86da:; BB(0x005f86da);
    /* 005f86da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f86dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f86e0: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005f86e3: cmp eax, dword ptr [edx + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f86e9: jl 0x5f8705 */ if ((fS!=fO)) goto L_005f8705;
L_005f86eb:; BB(0x005f86eb);
    /* 005f86eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f86ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f86f1: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005f86f4: cmp eax, dword ptr [edx + 0x10c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f86fa: jg 0x5f8705 */ if ((!fZ&&fS==fO)) goto L_005f8705;
L_005f86fc:; BB(0x005f86fc);
    /* 005f86fc: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005f8703: jmp 0x5f870c */ goto L_005f870c;
L_005f8705:; BB(0x005f8705);
    /* 005f8705: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005f870c:; BB(0x005f870c);
    /* 005f870c: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005f870f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8711: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8712: ret 4 */ FN_RET(0x005f86a0); r_esp += 8; return;
}

void f_005f92e0(void) /* BaccaratScorecardDialog::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f92e0);
    /* 005f92e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f92e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f92e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f92e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f92e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f92ec: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f92f2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f92f5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f92f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f92fa: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 005f9300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9301: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005f9304: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9305: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f9308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9309: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f930c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f930d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f9310: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9311: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f9314: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005f9317: call 0x624780 */ r_esp -= 4; W32(r_esp, 0x5f931cu); f_00624780();
    /* 005f931c: mov esp, ebp */ r_esp = r_ebp;
    /* 005f931e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f931f: ret 0x10 */ FN_RET(0x005f92e0); r_esp += 20; return;
}

void f_005fb030(void) /* BaccaratScorecardDialog::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb030);
    /* 005fb030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb031: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fb037: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb03e: je 0x5fb057 */ if (fZ) goto L_005fb057;
L_005fb040:; BB(0x005fb040);
    /* 005fb040: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb044: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb04a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fb04c: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb052: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005fb055: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fb057u); call_ind(t); }
L_005fb057:; BB(0x005fb057);
    /* 005fb057: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb05a: ret 4 */ FN_RET(0x005fb030); r_esp += 8; return;
}

void f_005fb060(void) /* BaccaratScorecardDialog::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb060);
    /* 005fb060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb061: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fb067: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb06e: je 0x5fb087 */ if (fZ) goto L_005fb087;
L_005fb070:; BB(0x005fb070);
    /* 005fb070: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb074: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb07a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fb07c: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb082: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005fb085: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fb087u); call_ind(t); }
L_005fb087:; BB(0x005fb087);
    /* 005fb087: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb089: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb08a: ret 4 */ FN_RET(0x005fb060); r_esp += 8; return;
}

void f_005fb090(void) /* BaccaratScorecardDialog::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb090);
    /* 005fb090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb091: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fb097: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb09e: je 0x5fb0b7 */ if (fZ) goto L_005fb0b7;
L_005fb0a0:; BB(0x005fb0a0);
    /* 005fb0a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0a4: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb0aa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fb0ac: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb0b2: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005fb0b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fb0b7u); call_ind(t); }
L_005fb0b7:; BB(0x005fb0b7);
    /* 005fb0b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb0b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb0ba: ret 4 */ FN_RET(0x005fb090); r_esp += 8; return;
}

