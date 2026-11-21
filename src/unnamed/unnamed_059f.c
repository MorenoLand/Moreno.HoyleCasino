#include "protos.h"

void f_0059f2e0(void) /* sub_59F2E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059f2e0);
    /* 0059f2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059f2e3: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059f2e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2e7: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0059f2ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2ee: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59f2f3u); f_0064c8a0();
    /* 0059f2f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f2f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059f2f9: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059f2fc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059f2ff: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059f302: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059f305: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059f308: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f30a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f30c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59f311u); f_0064c8a0();
    /* 0059f311: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f314: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0059f317: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0059f31a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059f31d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0059f320: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059f323: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059f326: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f328: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f32a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59f32fu); f_0064c8a0();
    /* 0059f32f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f332: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0059f335: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0059f338: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059f33b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059f33e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059f341: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059f344: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f347: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059f34a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059f34d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f351: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f356u); f_005dcb00();
    /* 0059f356: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f359: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0059f35c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059f35f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f364u); f_0063aac0();
    /* 0059f364: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f366: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0059f369: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f36d: je 0x59f38b */ if (fZ) goto L_0059f38b;
L_0059f36f:; BB(0x0059f36f);
    /* 0059f36f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059f372: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f377u); f_0063aac0();
    /* 0059f377: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059f379: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0059f37c: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f380: je 0x59f38b */ if (fZ) goto L_0059f38b;
L_0059f382:; BB(0x0059f382);
    /* 0059f382: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0059f389: jmp 0x59f392 */ goto L_0059f392;
L_0059f38b:; BB(0x0059f38b);
    /* 0059f38b: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
L_0059f392:; BB(0x0059f392);
    /* 0059f392: movzx ecx, byte ptr [ebp - 0x54] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffacu));
    /* 0059f396: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f398: je 0x59f482 */ if (fZ) goto L_0059f482;
L_0059f39e:; BB(0x0059f39e);
    /* 0059f39e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f3a0: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0059f3a6: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x59f3abu); f_005df700();
    /* 0059f3ab: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059f3ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f3b0: je 0x59f3c6 */ if (fZ) goto L_0059f3c6;
L_0059f3b2:; BB(0x0059f3b2);
    /* 0059f3b2: push 0x74f988 */ { u32 v = 0x74f988u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f3b7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f3b9: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0059f3bf: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x59f3c4u); f_0057ab80();
    /* 0059f3c4: jmp 0x59f3d1 */ goto L_0059f3d1;
L_0059f3c6:; BB(0x0059f3c6);
    /* 0059f3c6: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0059f3cc: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x59f3d1u); f_0057ae30();
L_0059f3d1:; BB(0x0059f3d1);
    /* 0059f3d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f3d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f3d5: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f3db: call 0x5a2740 */ r_esp -= 4; W32(r_esp, 0x59f3e0u); f_005a2740();
    /* 0059f3e0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059f3e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f3e5: jne 0x59f46b */ if (!fZ) goto L_0059f46b;
L_0059f3eb:; BB(0x0059f3eb);
    /* 0059f3eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f3ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f3ef: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f3f4u); f_005dcb00();
    /* 0059f3f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f3f7: mov ecx, eax */ r_ecx = r_eax;
    /* 0059f3f9: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59f3feu); f_005d5a50();
    /* 0059f3fe: mov esi, eax */ r_esi = r_eax;
    /* 0059f400: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059f405: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f407: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f40d: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0059f413: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f415u); call_ind(t); }
    /* 0059f415: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f417: jge 0x59f46b */ if ((fS==fO)) goto L_0059f46b;
L_0059f419:; BB(0x0059f419);
    /* 0059f419: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f41f: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x59f424u); f_005da7b0();
    /* 0059f424: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059f427: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f429: je 0x59f451 */ if (fZ) goto L_0059f451;
L_0059f42b:; BB(0x0059f42b);
    /* 0059f42b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f42e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f42f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f434u); f_005dcb00();
    /* 0059f434: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f437: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0059f43a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059f43d: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0059f444: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059f447: call 0x59fa00 */ r_esp -= 4; W32(r_esp, 0x59f44cu); f_0059fa00();
    /* 0059f44c: jmp 0x59f637 */ goto L_0059f637;
L_0059f451:; BB(0x0059f451);
    /* 0059f451: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f454: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f455: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f45au); f_005dcb00();
    /* 0059f45a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f45d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f45e: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f464: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x59f469u); f_005dbb70();
    /* 0059f469: jmp 0x59f47d */ goto L_0059f47d;
L_0059f46b:; BB(0x0059f46b);
    /* 0059f46b: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f470: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f472: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f478: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x59f47du); f_005db7d0();
L_0059f47d:; BB(0x0059f47d);
    /* 0059f47d: jmp 0x59f637 */ goto L_0059f637;
L_0059f482:; BB(0x0059f482);
    /* 0059f482: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059f485: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 0059f489: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f48b: jne 0x59f4b2 */ if (!fZ) goto L_0059f4b2;
L_0059f48d:; BB(0x0059f48d);
    /* 0059f48d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059f490: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 0059f494: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f496: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059f49c: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x59f4a1u); f_00637810();
    /* 0059f4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4a2: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f4a8: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x59f4adu); f_005da360();
    /* 0059f4ad: jmp 0x59f637 */ goto L_0059f637;
L_0059f4b2:; BB(0x0059f4b2);
    /* 0059f4b2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059f4b5: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 0059f4b9: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0059f4bf: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x59f4c4u); f_0057ae30();
    /* 0059f4c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f4c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4c8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f4cdu); f_005dcb00();
    /* 0059f4cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f4d0: mov ecx, eax */ r_ecx = r_eax;
    /* 0059f4d2: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59f4d7u); f_005d5a50();
    /* 0059f4d7: mov esi, eax */ r_esi = r_eax;
    /* 0059f4d9: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f4df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059f4e1: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f4e7: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0059f4ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f4efu); call_ind(t); }
    /* 0059f4ef: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f4f1: jl 0x59f5de */ if ((fS!=fO)) goto L_0059f5de;
L_0059f4f7:; BB(0x0059f4f7);
    /* 0059f4f7: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0059f4fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4fb: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0059f4fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4ff: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0059f502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f503: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f506: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f507: mov ecx, dword ptr [0x7935c0] */ r_ecx = R32((u32)(0x7935c0u));
    /* 0059f50d: call 0x59a6f0 */ r_esp -= 4; W32(r_esp, 0x59f512u); f_0059a6f0();
    /* 0059f512: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f516: jle 0x59f544 */ if ((fZ||fS!=fO)) goto L_0059f544;
L_0059f518:; BB(0x0059f518);
    /* 0059f518: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f51a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f51c: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0059f51f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f520: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059f523: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f529: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0059f52d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059f530: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f536: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 0059f53a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059f53c: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0059f542: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f544u); call_ind(t); }
L_0059f544:; BB(0x0059f544);
    /* 0059f544: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f548: jle 0x59f576 */ if ((fZ||fS!=fO)) goto L_0059f576;
L_0059f54a:; BB(0x0059f54a);
    /* 0059f54a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f54c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f54e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0059f551: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f552: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059f555: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059f55a: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0059f55e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059f561: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059f566: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0059f56a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059f56c: mov ecx, edx */ r_ecx = r_edx;
    /* 0059f56e: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0059f574: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59f576u); call_ind(t); }
L_0059f576:; BB(0x0059f576);
    /* 0059f576: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f57a: jle 0x59f5a8 */ if ((fZ||fS!=fO)) goto L_0059f5a8;
L_0059f57c:; BB(0x0059f57c);
    /* 0059f57c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f57e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f580: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0059f583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f584: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059f587: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059f58d: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0059f591: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059f594: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059f59a: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0059f59e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059f5a0: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0059f5a6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59f5a8u); call_ind(t); }
L_0059f5a8:; BB(0x0059f5a8);
    /* 0059f5a8: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f5ae: call 0x5a1ff0 */ r_esp -= 4; W32(r_esp, 0x59f5b3u); f_005a1ff0();
    /* 0059f5b3: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0059f5b6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059f5b9: mov byte ptr [eax + 0x4a0], 1 */ W8((u32)(r_eax+0x4a0u), 0x1u);
    /* 0059f5c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f5c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f5c4: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f5ca: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059f5cd: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059f5d2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059f5d5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059f5d7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059f5da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f5dcu); call_ind(t); }
    /* 0059f5dc: jmp 0x59f637 */ goto L_0059f637;
L_0059f5de:; BB(0x0059f5de);
    /* 0059f5de: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f5e4: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x59f5e9u); f_005da7b0();
    /* 0059f5e9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059f5ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f5ee: je 0x59f60b */ if (fZ) goto L_0059f60b;
L_0059f5f0:; BB(0x0059f5f0);
    /* 0059f5f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f5f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f5f4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f5f9u); f_005dcb00();
    /* 0059f5f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f5fc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0059f5ff: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059f602: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0059f609: jmp 0x59f61a */ goto L_0059f61a;
L_0059f60b:; BB(0x0059f60b);
    /* 0059f60b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f60e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f60f: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f615: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x59f61au); f_005d9570();
L_0059f61a:; BB(0x0059f61a);
    /* 0059f61a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f61c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f61e: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0059f624: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f627: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059f62d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059f630: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f632: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059f635: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f637u); call_ind(t); }
L_0059f637:; BB(0x0059f637);
    /* 0059f637: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059f638: mov esp, ebp */ r_esp = r_ebp;
    /* 0059f63a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f63b: ret 4 */ FN_RET(0x0059f2e0); r_esp += 8; return;
}

void f_0059f640(void) /* sub_59F640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059f640);
    /* 0059f640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f641: mov ebp, esp */ r_ebp = r_esp;
    /* 0059f643: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059f646: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0059f649: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f64b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f64e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f64f: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f655: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x59f65au); f_005a3c20();
    /* 0059f65a: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059f660: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x59f665u); f_0059c2d0();
    /* 0059f665: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f668: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f669: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f66f: call 0x5a2b10 */ r_esp -= 4; W32(r_esp, 0x59f674u); f_005a2b10();
    /* 0059f674: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f677: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f678: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f67du); f_005dcb00();
    /* 0059f67d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f680: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059f683: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f686: mov byte ptr [eax + 0x4a2], 1 */ W8((u32)(r_eax+0x4a2u), 0x1u);
    /* 0059f68d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f68f: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f695: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059f698: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059f69d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059f6a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059f6a2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f6a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f6a7u); call_ind(t); }
    /* 0059f6a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0059f6a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f6aa: ret 4 */ FN_RET(0x0059f640); r_esp += 8; return;
}

void f_0059f6b0(void) /* sub_59F6B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059f6b0);
    /* 0059f6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059f6b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f6b5: push 0x6a772c */ { u32 v = 0x6a772cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f6ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059f6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f6c1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059f6c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059f6c5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059f6ca: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059f6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f6cd: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059f6d0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059f6d6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0059f6d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f6dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f6dd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f6e2u); f_005dcb00();
    /* 0059f6e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f6e5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0059f6e8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059f6eb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f6f0u); f_0063aac0();
    /* 0059f6f0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059f6f2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0059f6f5: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f6f9: je 0x59f717 */ if (fZ) goto L_0059f717;
L_0059f6fb:; BB(0x0059f6fb);
    /* 0059f6fb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059f6fe: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f703u); f_0063aac0();
    /* 0059f703: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f705: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0059f708: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f70c: je 0x59f717 */ if (fZ) goto L_0059f717;
L_0059f70e:; BB(0x0059f70e);
    /* 0059f70e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0059f715: jmp 0x59f71e */ goto L_0059f71e;
L_0059f717:; BB(0x0059f717);
    /* 0059f717: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_0059f71e:; BB(0x0059f71e);
    /* 0059f71e: movzx eax, byte ptr [ebp - 0x3c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc4u));
    /* 0059f722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f724: je 0x59f883 */ if (fZ) goto L_0059f883;
L_0059f72a:; BB(0x0059f72a);
    /* 0059f72a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f72c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0059f732: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x59f737u); f_005df700();
    /* 0059f737: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059f73a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f73c: je 0x59f761 */ if (fZ) goto L_0059f761;
L_0059f73e:; BB(0x0059f73e);
    /* 0059f73e: push 0x751198 */ { u32 v = 0x751198u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f743: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f745: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0059f74b: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x59f750u); f_0057ab80();
    /* 0059f750: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f753: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f754: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f75a: call 0x5a3c40 */ r_esp -= 4; W32(r_esp, 0x59f75fu); f_005a3c40();
    /* 0059f75f: jmp 0x59f76c */ goto L_0059f76c;
L_0059f761:; BB(0x0059f761);
    /* 0059f761: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0059f767: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x59f76cu); f_0057ae30();
L_0059f76c:; BB(0x0059f76c);
    /* 0059f76c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f76f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f770: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0059f773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f774: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f777: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059f77a: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059f77f: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0059f783: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x59f788u); f_005cb880();
    /* 0059f788: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f78b: jne 0x59f7e0 */ if (!fZ) goto L_0059f7e0;
L_0059f78d:; BB(0x0059f78d);
    /* 0059f78d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f78f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59f794u); f_00686d82();
    /* 0059f794: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f797: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059f79a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059f7a1: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f7a5: je 0x59f7b6 */ if (fZ) goto L_0059f7b6;
L_0059f7a7:; BB(0x0059f7a7);
    /* 0059f7a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059f7ac: call 0x59e5b0 */ r_esp -= 4; W32(r_esp, 0x59f7b1u); f_0059e5b0();
    /* 0059f7b1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0059f7b4: jmp 0x59f7bd */ goto L_0059f7bd;
L_0059f7b6:; BB(0x0059f7b6);
    /* 0059f7b6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0059f7bd:; BB(0x0059f7bd);
    /* 0059f7bd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059f7c0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059f7c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059f7ca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059f7cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7ce: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059f7d3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059f7d6: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59f7dbu); f_005fc420();
    /* 0059f7db: jmp 0x59f942 */ goto L_0059f942;
L_0059f7e0:; BB(0x0059f7e0);
    /* 0059f7e0: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 0059f7e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7e4: lea edx, [ebp - 0xd] */ r_edx = (u32)(r_ebp+0xfffffff3u);
    /* 0059f7e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7ec: mov ecx, dword ptr [0x7935c0] */ r_ecx = R32((u32)(0x7935c0u));
    /* 0059f7f2: call 0x59b080 */ r_esp -= 4; W32(r_esp, 0x59f7f7u); f_0059b080();
    /* 0059f7f7: mov esi, eax */ r_esi = r_eax;
    /* 0059f7f9: push 0x6ced54 */ { u32 v = 0x6ced54u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7fe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59f803u); f_00630f40();
    /* 0059f803: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f806: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f808: jne 0x59f85d */ if (!fZ) goto L_0059f85d;
L_0059f80a:; BB(0x0059f80a);
    /* 0059f80a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f80c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59f811u); f_00686d82();
    /* 0059f811: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f814: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059f817: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059f81e: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f822: je 0x59f833 */ if (fZ) goto L_0059f833;
L_0059f824:; BB(0x0059f824);
    /* 0059f824: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f826: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059f829: call 0x59e5b0 */ r_esp -= 4; W32(r_esp, 0x59f82eu); f_0059e5b0();
    /* 0059f82e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0059f831: jmp 0x59f83a */ goto L_0059f83a;
L_0059f833:; BB(0x0059f833);
    /* 0059f833: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0059f83a:; BB(0x0059f83a);
    /* 0059f83a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059f83d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0059f840: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059f847: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059f84a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f84b: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059f850: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059f853: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59f858u); f_005fc420();
    /* 0059f858: jmp 0x59f942 */ goto L_0059f942;
L_0059f85d:; BB(0x0059f85d);
    /* 0059f85d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f85f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f862: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f863: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f869: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x59f86eu); f_005a3c20();
    /* 0059f86e: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059f874: call 0x59c780 */ r_esp -= 4; W32(r_esp, 0x59f879u); f_0059c780();
    /* 0059f879: jmp 0x59f942 */ goto L_0059f942;
L_0059f883:; BB(0x0059f883);
    /* 0059f883: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0059f889: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x59f88eu); f_0057ae30();
    /* 0059f88e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059f891: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 0059f895: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f897: jne 0x59f8be */ if (!fZ) goto L_0059f8be;
L_0059f899:; BB(0x0059f899);
    /* 0059f899: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059f89c: mov byte ptr [ecx + 8], 1 */ W8((u32)(r_ecx+0x8u), 0x1u);
    /* 0059f8a0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8a2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059f8a8: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x59f8adu); f_00637810();
    /* 0059f8ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8ae: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f8b4: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x59f8b9u); f_005da360();
    /* 0059f8b9: jmp 0x59f942 */ goto L_0059f942;
L_0059f8be:; BB(0x0059f8be);
    /* 0059f8be: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059f8c1: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 0059f8c5: lea eax, [ebp - 0xe] */ r_eax = (u32)(r_ebp+0xfffffff2u);
    /* 0059f8c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8c9: lea ecx, [ebp - 0xd] */ r_ecx = (u32)(r_ebp+0xfffffff3u);
    /* 0059f8cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f8d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8d1: mov ecx, dword ptr [0x7935c0] */ r_ecx = R32((u32)(0x7935c0u));
    /* 0059f8d7: call 0x59b080 */ r_esp -= 4; W32(r_esp, 0x59f8dcu); f_0059b080();
    /* 0059f8dc: mov al, byte ptr [ebp - 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 0059f8df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8e0: mov cl, byte ptr [ebp - 0xd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 0059f8e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f8e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8e8: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f8ee: call 0x5a1ea0 */ r_esp -= 4; W32(r_esp, 0x59f8f3u); f_005a1ea0();
    /* 0059f8f3: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0059f8f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f8f9: je 0x59f915 */ if (fZ) goto L_0059f915;
L_0059f8fb:; BB(0x0059f8fb);
    /* 0059f8fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f8fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8ff: movzx edx, byte ptr [ebp - 0xe] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff2u));
    /* 0059f903: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0059f905: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0059f907: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059f909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f90a: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f910: call 0x5a3b40 */ r_esp -= 4; W32(r_esp, 0x59f915u); f_005a3b40();
L_0059f915:; BB(0x0059f915);
    /* 0059f915: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f917: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059f91a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f91b: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f921: call 0x5a3b20 */ r_esp -= 4; W32(r_esp, 0x59f926u); f_005a3b20();
    /* 0059f926: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f928: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f92a: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f930: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059f933: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059f938: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059f93b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059f93d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059f940: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f942u); call_ind(t); }
L_0059f942:; BB(0x0059f942);
    /* 0059f942: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059f945: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059f94c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059f94d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059f94e: mov esp, ebp */ r_esp = r_ebp;
    /* 0059f950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f951: ret 4 */ FN_RET(0x0059f6b0); r_esp += 8; return;
}

void f_0059f960(void) /* sub_59F960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059f960);
    /* 0059f960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f961: mov ebp, esp */ r_ebp = r_esp;
    /* 0059f963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059f967: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f96a: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0059f96e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f971: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 0059f975: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f978: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 0059f97c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f97f: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0059f983: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f986: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0059f98a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f98d: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 0059f991: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f994: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 0059f998: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059f99b: mov byte ptr [ecx + 0xb], 0 */ W8((u32)(r_ecx+0xbu), 0x0u);
    /* 0059f99f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f9a3: jne 0x59f9d2 */ if (!fZ) goto L_0059f9d2;
L_0059f9a5:; BB(0x0059f9a5);
    /* 0059f9a5: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f9ab: call 0x5a3880 */ r_esp -= 4; W32(r_esp, 0x59f9b0u); f_005a3880();
    /* 0059f9b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059f9b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f9b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f9b6: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059f9bb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059f9be: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059f9c4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f9c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059f9c9: mov ecx, eax */ r_ecx = r_eax;
    /* 0059f9cb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059f9ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f9d0u); call_ind(t); }
    /* 0059f9d0: jmp 0x59f9f4 */ goto L_0059f9f4;
L_0059f9d2:; BB(0x0059f9d2);
    /* 0059f9d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059f9d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f9d6: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f9db: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059f9e1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f9e4: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059f9ea: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059f9ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f9ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059f9f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f9f4u); call_ind(t); }
L_0059f9f4:; BB(0x0059f9f4);
    /* 0059f9f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0059f9f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f9f7: ret 4 */ FN_RET(0x0059f960); r_esp += 8; return;
}

void f_0059fa00(void) /* sub_59FA00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059fa00);
    /* 0059fa00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa01: mov ebp, esp */ r_ebp = r_esp;
    /* 0059fa03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa05: push 0x6a7752 */ { u32 v = 0x6a7752u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059fa10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa11: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059fa14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059fa19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059fa1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059fa1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059fa25: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0059fa28: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059fa2e: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x59fa33u); f_0059c2d0();
    /* 0059fa33: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fa39: call 0x5a2260 */ r_esp -= 4; W32(r_esp, 0x59fa3eu); f_005a2260();
    /* 0059fa3e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fa41: je 0x59fa50 */ if (fZ) goto L_0059fa50;
L_0059fa43:; BB(0x0059fa43);
    /* 0059fa43: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fa46: call 0x59e9b0 */ r_esp -= 4; W32(r_esp, 0x59fa4bu); f_0059e9b0();
    /* 0059fa4b: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fa50:; BB(0x0059fa50);
    /* 0059fa50: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fa53: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0059fa57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fa59: jne 0x59fa94 */ if (!fZ) goto L_0059fa94;
L_0059fa5b:; BB(0x0059fa5b);
    /* 0059fa5b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fa5e: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 0059fa62: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa64: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa66: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fa6c: call 0x5a3b40 */ r_esp -= 4; W32(r_esp, 0x59fa71u); f_005a3b40();
    /* 0059fa71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa75: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059fa7a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059fa7d: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059fa83: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059fa86: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059fa88: mov ecx, eax */ r_ecx = r_eax;
    /* 0059fa8a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059fa8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59fa8fu); call_ind(t); }
    /* 0059fa8f: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fa94:; BB(0x0059fa94);
    /* 0059fa94: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fa9a: call 0x5a2460 */ r_esp -= 4; W32(r_esp, 0x59fa9fu); f_005a2460();
    /* 0059fa9f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059faa2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059faa8: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0059faab: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 0059faae: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0059fab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fab4: je 0x59fb30 */ if (fZ) goto L_0059fb30;
L_0059fab6:; BB(0x0059fab6);
    /* 0059fab6: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059faba: je 0x59fb30 */ if (fZ) goto L_0059fb30;
L_0059fabc:; BB(0x0059fabc);
    /* 0059fabc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fabf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fac0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59fac5u); f_005dcb00();
    /* 0059fac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fac8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059facb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059face: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fad3u); f_0063aac0();
    /* 0059fad3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059fad5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059fad8: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fadc: je 0x59fafa */ if (fZ) goto L_0059fafa;
L_0059fade:; BB(0x0059fade);
    /* 0059fade: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059fae1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fae6u); f_0063aac0();
    /* 0059fae6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059fae8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059faeb: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059faef: je 0x59fafa */ if (fZ) goto L_0059fafa;
L_0059faf1:; BB(0x0059faf1);
    /* 0059faf1: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0059faf8: jmp 0x59fb01 */ goto L_0059fb01;
L_0059fafa:; BB(0x0059fafa);
    /* 0059fafa: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
L_0059fb01:; BB(0x0059fb01);
    /* 0059fb01: movzx ecx, byte ptr [ebp - 0x5c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffa4u));
    /* 0059fb05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fb07: je 0x59fb30 */ if (fZ) goto L_0059fb30;
L_0059fb09:; BB(0x0059fb09);
    /* 0059fb09: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fb0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb0d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59fb12u); f_005dcb00();
    /* 0059fb12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fb15: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0059fb18: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059fb1b: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0059fb22: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fb28: call 0x5a2460 */ r_esp -= 4; W32(r_esp, 0x59fb2du); f_005a2460();
    /* 0059fb2d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0059fb30:; BB(0x0059fb30);
    /* 0059fb30: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fb34: je 0x59fb9f */ if (fZ) goto L_0059fb9f;
L_0059fb36:; BB(0x0059fb36);
    /* 0059fb36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fb39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb3a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59fb3fu); f_005dcb00();
    /* 0059fb3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fb42: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0059fb45: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059fb48: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fb4du); f_0063aac0();
    /* 0059fb4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059fb4f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0059fb52: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fb56: je 0x59fb74 */ if (fZ) goto L_0059fb74;
L_0059fb58:; BB(0x0059fb58);
    /* 0059fb58: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059fb5b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fb60u); f_0063aac0();
    /* 0059fb60: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059fb62: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0059fb65: cmp dword ptr [ebp - 0x34], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fb69: je 0x59fb74 */ if (fZ) goto L_0059fb74;
L_0059fb6b:; BB(0x0059fb6b);
    /* 0059fb6b: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0059fb72: jmp 0x59fb7b */ goto L_0059fb7b;
L_0059fb74:; BB(0x0059fb74);
    /* 0059fb74: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_0059fb7b:; BB(0x0059fb7b);
    /* 0059fb7b: mov cl, byte ptr [ebp - 0x60] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffa0u))) & 0xffu);
    /* 0059fb7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fb82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb83: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fb89: call 0x5a3ad0 */ r_esp -= 4; W32(r_esp, 0x59fb8eu); f_005a3ad0();
    /* 0059fb8e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fb91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb92: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fb95: call 0x59f2e0 */ r_esp -= 4; W32(r_esp, 0x59fb9au); f_0059f2e0();
    /* 0059fb9a: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fb9f:; BB(0x0059fb9f);
    /* 0059fb9f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fba2: movzx edx, byte ptr [ecx + 0xb] */ r_edx = (u32)R8((u32)(r_ecx+0xbu));
    /* 0059fba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fba8: jne 0x59fbbc */ if (!fZ) goto L_0059fbbc;
L_0059fbaa:; BB(0x0059fbaa);
    /* 0059fbaa: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fbb0: call 0x5a39e0 */ r_esp -= 4; W32(r_esp, 0x59fbb5u); f_005a39e0();
    /* 0059fbb5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fbb8: mov byte ptr [eax + 0xb], 1 */ W8((u32)(r_eax+0xbu), 0x1u);
L_0059fbbc:; BB(0x0059fbbc);
    /* 0059fbbc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fbbf: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 0059fbc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fbc5: jne 0x59fbfe */ if (!fZ) goto L_0059fbfe;
L_0059fbc7:; BB(0x0059fbc7);
    /* 0059fbc7: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fbca: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 0059fbce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbd0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbd2: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fbd8: call 0x5a3b40 */ r_esp -= 4; W32(r_esp, 0x59fbddu); f_005a3b40();
    /* 0059fbdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbdf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbe1: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059fbe7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059fbea: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059fbef: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059fbf2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059fbf4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059fbf7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59fbf9u); call_ind(t); }
    /* 0059fbf9: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fbfe:; BB(0x0059fbfe);
    /* 0059fbfe: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fc04: call 0x5a29b0 */ r_esp -= 4; W32(r_esp, 0x59fc09u); f_005a29b0();
    /* 0059fc09: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059fc0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fc0e: je 0x59fc37 */ if (fZ) goto L_0059fc37;
L_0059fc10:; BB(0x0059fc10);
    /* 0059fc10: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059fc16: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x59fc1bu); f_005f2870();
    /* 0059fc1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fc1d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059fc1f: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fc25: call 0x5a3ad0 */ r_esp -= 4; W32(r_esp, 0x59fc2au); f_005a3ad0();
    /* 0059fc2a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fc2d: call 0x59e920 */ r_esp -= 4; W32(r_esp, 0x59fc32u); f_0059e920();
    /* 0059fc32: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fc37:; BB(0x0059fc37);
    /* 0059fc37: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fc3d: call 0x5a2540 */ r_esp -= 4; W32(r_esp, 0x59fc42u); f_005a2540();
    /* 0059fc42: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059fc45: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fc49: je 0x59fcc1 */ if (fZ) goto L_0059fcc1;
L_0059fc4b:; BB(0x0059fc4b);
    /* 0059fc4b: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059fc51: mov byte ptr [edx + 0x103], 0 */ W8((u32)(r_edx+0x103u), 0x0u);
    /* 0059fc58: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fc5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fc5c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59fc61u); f_005dcb00();
    /* 0059fc61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fc64: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0059fc67: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059fc6a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fc6fu); f_0063aac0();
    /* 0059fc6f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059fc71: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0059fc74: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fc78: je 0x59fc96 */ if (fZ) goto L_0059fc96;
L_0059fc7a:; BB(0x0059fc7a);
    /* 0059fc7a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059fc7d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fc82u); f_0063aac0();
    /* 0059fc82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059fc84: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0059fc87: cmp dword ptr [ebp - 0x40], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fc8b: je 0x59fc96 */ if (fZ) goto L_0059fc96;
L_0059fc8d:; BB(0x0059fc8d);
    /* 0059fc8d: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0059fc94: jmp 0x59fc9d */ goto L_0059fc9d;
L_0059fc96:; BB(0x0059fc96);
    /* 0059fc96: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
L_0059fc9d:; BB(0x0059fc9d);
    /* 0059fc9d: mov al, byte ptr [ebp - 0x64] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff9cu))) & 0xffu);
    /* 0059fca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fca1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fca4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fca5: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fcab: call 0x5a3ad0 */ r_esp -= 4; W32(r_esp, 0x59fcb0u); f_005a3ad0();
    /* 0059fcb0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fcb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fcb4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fcb7: call 0x59f6b0 */ r_esp -= 4; W32(r_esp, 0x59fcbcu); f_0059f6b0();
    /* 0059fcbc: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fcc1:; BB(0x0059fcc1);
    /* 0059fcc1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fcc4: movzx ecx, byte ptr [eax + 6] */ r_ecx = (u32)R8((u32)(r_eax+0x6u));
    /* 0059fcc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fcca: jne 0x59fd65 */ if (!fZ) goto L_0059fd65;
L_0059fcd0:; BB(0x0059fcd0);
    /* 0059fcd0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fcd3: mov byte ptr [edx + 6], 1 */ W8((u32)(r_edx+0x6u), 0x1u);
    /* 0059fcd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fcd9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fcdb: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fce1: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x59fce6u); f_005a3c20();
    /* 0059fce6: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fce8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59fcedu); f_00686d82();
    /* 0059fced: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fcf0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059fcf3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059fcfa: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fcfe: je 0x59fd0d */ if (fZ) goto L_0059fd0d;
L_0059fd00:; BB(0x0059fd00);
    /* 0059fd00: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059fd03: call 0x59d4d0 */ r_esp -= 4; W32(r_esp, 0x59fd08u); f_0059d4d0();
    /* 0059fd08: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0059fd0b: jmp 0x59fd14 */ goto L_0059fd14;
L_0059fd0d:; BB(0x0059fd0d);
    /* 0059fd0d: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0059fd14:; BB(0x0059fd14);
    /* 0059fd14: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0059fd17: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059fd1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059fd21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059fd24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd25: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059fd2b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0059fd2e: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59fd33u); f_005fc420();
    /* 0059fd33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd35: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd37: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fd3d: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x59fd42u); f_005a3c20();
    /* 0059fd42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd46: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059fd4b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059fd4e: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059fd54: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059fd57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059fd59: mov ecx, eax */ r_ecx = r_eax;
    /* 0059fd5b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059fd5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59fd60u); call_ind(t); }
    /* 0059fd60: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fd65:; BB(0x0059fd65);
    /* 0059fd65: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fd6b: call 0x5a2290 */ r_esp -= 4; W32(r_esp, 0x59fd70u); f_005a2290();
    /* 0059fd70: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059fd73: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd77: je 0x59fe8c */ if (fZ) goto L_0059fe8c;
L_0059fd7d:; BB(0x0059fd7d);
    /* 0059fd7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd7f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fd82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd83: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fd89: call 0x5a3ad0 */ r_esp -= 4; W32(r_esp, 0x59fd8eu); f_005a3ad0();
    /* 0059fd8e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fd91: movzx eax, byte ptr [edx + 0xa] */ r_eax = (u32)R8((u32)(r_edx+0xau));
    /* 0059fd95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd97: jne 0x59fde9 */ if (!fZ) goto L_0059fde9;
L_0059fd99:; BB(0x0059fd99);
    /* 0059fd99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fd9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd9d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fda3: call 0x5a3e80 */ r_esp -= 4; W32(r_esp, 0x59fda8u); f_005a3e80();
    /* 0059fda8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059fdab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fdad: je 0x59fde9 */ if (fZ) goto L_0059fde9;
L_0059fdaf:; BB(0x0059fdaf);
    /* 0059fdaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fdb1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fdb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fdb5: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fdbb: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x59fdc0u); f_005a3c20();
    /* 0059fdc0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fdc3: mov byte ptr [ecx + 0xa], 1 */ W8((u32)(r_ecx+0xau), 0x1u);
    /* 0059fdc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fdc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fdcb: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059fdd1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059fdd4: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059fdda: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059fddd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059fddf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059fde2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59fde4u); call_ind(t); }
    /* 0059fde4: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fde9:; BB(0x0059fde9);
    /* 0059fde9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fdec: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 0059fdf0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fdf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fdf4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059fdf7: call 0x59f640 */ r_esp -= 4; W32(r_esp, 0x59fdfcu); f_0059f640();
    /* 0059fdfc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fdff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe00: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59fe05u); f_005dcb00();
    /* 0059fe05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fe08: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0059fe0b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059fe0e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fe13u); f_0063aac0();
    /* 0059fe13: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059fe15: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0059fe18: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fe1c: je 0x59fe3a */ if (fZ) goto L_0059fe3a;
L_0059fe1e:; BB(0x0059fe1e);
    /* 0059fe1e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059fe21: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59fe26u); f_0063aac0();
    /* 0059fe26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059fe28: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0059fe2b: cmp dword ptr [ebp - 0x4c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fe2f: je 0x59fe3a */ if (fZ) goto L_0059fe3a;
L_0059fe31:; BB(0x0059fe31);
    /* 0059fe31: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0059fe38: jmp 0x59fe41 */ goto L_0059fe41;
L_0059fe3a:; BB(0x0059fe3a);
    /* 0059fe3a: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
L_0059fe41:; BB(0x0059fe41);
    /* 0059fe41: movzx eax, byte ptr [ebp - 0x6c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff94u));
    /* 0059fe45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fe47: je 0x59fe52 */ if (fZ) goto L_0059fe52;
L_0059fe49:; BB(0x0059fe49);
    /* 0059fe49: mov dword ptr [ebp - 0x70], 0xffffffff */ W32((u32)(r_ebp+0xffffff90u), 0xffffffffu);
    /* 0059fe50: jmp 0x59fe58 */ goto L_0059fe58;
L_0059fe52:; BB(0x0059fe52);
    /* 0059fe52: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059fe55: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
L_0059fe58:; BB(0x0059fe58);
    /* 0059fe58: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0059fe5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe5c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe5e: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fe64: call 0x5a3b40 */ r_esp -= 4; W32(r_esp, 0x59fe69u); f_005a3b40();
    /* 0059fe69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe6d: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059fe72: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059fe75: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059fe7b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059fe7e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059fe80: mov ecx, eax */ r_ecx = r_eax;
    /* 0059fe82: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059fe85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59fe87u); call_ind(t); }
    /* 0059fe87: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059fe8c:; BB(0x0059fe8c);
    /* 0059fe8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe8e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe90: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fe96: call 0x5a3ad0 */ r_esp -= 4; W32(r_esp, 0x59fe9bu); f_005a3ad0();
    /* 0059fe9b: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059fea1: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x59fea6u); f_005da7b0();
    /* 0059fea6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059fea9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059feab: je 0x59feed */ if (fZ) goto L_0059feed;
L_0059fead:; BB(0x0059fead);
    /* 0059fead: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059feb0: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 0059feb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059feb6: jne 0x59feed */ if (!fZ) goto L_0059feed;
L_0059feb8:; BB(0x0059feb8);
    /* 0059feb8: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059febb: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 0059febf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059fec1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fec3: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fec9: call 0x5a3b40 */ r_esp -= 4; W32(r_esp, 0x59feceu); f_005a3b40();
    /* 0059fece: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fed0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fed2: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059fed8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059fedb: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059fee1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059fee4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059fee6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059fee9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59feebu); call_ind(t); }
    /* 0059feeb: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059feed:; BB(0x0059feed);
    /* 0059feed: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059feef: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059fef5: call 0x5a3e30 */ r_esp -= 4; W32(r_esp, 0x59fefau); f_005a3e30();
    /* 0059fefa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059fefd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059feff: jne 0x59ff2f */ if (!fZ) goto L_0059ff2f;
L_0059ff01:; BB(0x0059ff01);
    /* 0059ff01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ff03: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ff05: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ff0b: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x59ff10u); f_005a3c20();
    /* 0059ff10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ff12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ff14: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059ff1a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059ff1d: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ff23: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059ff26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059ff28: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059ff2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59ff2du); call_ind(t); }
    /* 0059ff2d: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059ff2f:; BB(0x0059ff2f);
    /* 0059ff2f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059ff35: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0059ff38: mov byte ptr [ebp - 0x51], dl */ W8((u32)(r_ebp+0xffffffafu), (u8)r_edx);
    /* 0059ff3b: movzx eax, byte ptr [ebp - 0x51] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffafu));
    /* 0059ff3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ff41: je 0x59ff52 */ if (fZ) goto L_0059ff52;
L_0059ff43:; BB(0x0059ff43);
    /* 0059ff43: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ff48: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059ff4b: call 0x59f960 */ r_esp -= 4; W32(r_esp, 0x59ff50u); f_0059f960();
    /* 0059ff50: jmp 0x59ff5d */ goto L_0059ff5d;
L_0059ff52:; BB(0x0059ff52);
    /* 0059ff52: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059ff58: call 0x59ca00 */ r_esp -= 4; W32(r_esp, 0x59ff5du); f_0059ca00();
L_0059ff5d:; BB(0x0059ff5d);
    /* 0059ff5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ff60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059ff67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ff68: mov esp, ebp */ r_esp = r_ebp;
    /* 0059ff6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ff6b: ret  */ FN_RET(0x0059fa00); r_esp += 4; return;
}

