#include "protos.h"

void f_005301d0(void) /* ShakeReelScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005301d0);
    /* 005301d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005301d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005301d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005301d5: push 0x6a472a */ { u32 v = 0x6a472au; r_esp -= 4; W32(r_esp, v); }
    /* 005301da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005301e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005301e1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005301e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005301e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005301eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005301ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005301ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005301f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005301f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005301fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005301fd: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x530202u); f_005fc0d0();
    /* 00530202: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00530209: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053020c: mov dword ptr [eax], 0x6c3dc4 */ W32((u32)(r_eax), 0x6c3dc4u);
    /* 00530212: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00530215: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00530218: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0053021b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053021e: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 00530224: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00530227: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053022a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053022d: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00530230: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00530233: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 00530239: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0053023c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053023f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00530242: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 00530245: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00530247: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53024cu); f_0062fbf0();
    /* 0053024c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053024f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00530252: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00530255: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053025c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053025f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530262: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00530269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053026a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053026c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053026d: ret 4 */ FN_RET(0x005301d0); r_esp += 8; return;
}

void f_00530270(void) /* ShakeReelScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00530270);
    /* 00530270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530271: mov ebp, esp */ r_ebp = r_esp;
    /* 00530273: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00530276: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00530279: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00530280: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530283: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x530288u); f_005fc360();
    /* 00530288: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053028b: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0053028f: ja 0x530425 */ if ((!fC&&!fZ)) goto L_00530425;
L_00530295:; BB(0x00530295);
    /* 00530295: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530298: jmp dword ptr [eax*4 + 0x53042c] */ { u32 t = R32((u32)(r_eax*4+0x53042cu)); switch (t) { case 0x53029fu: goto L_0053029f; case 0x530315u: goto L_00530315; case 0x530359u: goto L_00530359; case 0x53039fu: goto L_0053039f; case 0x5303e4u: goto L_005303e4; case 0x530418u: goto L_00530418; default: UNSUP(0x00530298, "jump table entry is not a known target"); } }
L_0053029f:; BB(0x0053029f);
    /* 0053029f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005302a5: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5302aau); f_00637630();
    /* 005302aa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005302ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005302af: je 0x5302c2 */ if (fZ) goto L_005302c2;
L_005302b1:; BB(0x005302b1);
    /* 005302b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005302b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005302b9: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5302beu); f_00637810();
    /* 005302be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005302c0: jne 0x5302d8 */ if (!fZ) goto L_005302d8;
L_005302c2:; BB(0x005302c2);
    /* 005302c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005302c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005302c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005302c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005302cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005302ce: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005302d1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5302d3u); call_ind(t); }
    /* 005302d3: jmp 0x530425 */ goto L_00530425;
L_005302d8:; BB(0x005302d8);
    /* 005302d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005302db: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005302de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005302e1: add ecx, dword ptr [edx + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005302e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005302e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005302e8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005302eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005302ec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005302ef: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005302f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005302f5: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005302f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005302fa: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005302fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5302ffu); call_ind(t); }
    /* 005302ff: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00530301: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530303: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530306: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530308: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053030b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053030e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530310u); call_ind(t); }
    /* 00530310: jmp 0x530425 */ goto L_00530425;
L_00530315:; BB(0x00530315);
    /* 00530315: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530318: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0053031b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053031c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053031e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00530320: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530323: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00530326: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00530328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00530329: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053032c: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0053032f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530330: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530333: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530336: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530339: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053033c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053033e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530341: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530343u); call_ind(t); }
    /* 00530343: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00530345: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00530347: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053034a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053034c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053034f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530352: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530354u); call_ind(t); }
    /* 00530354: jmp 0x530425 */ goto L_00530425;
L_00530359:; BB(0x00530359);
    /* 00530359: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053035c: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0053035f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00530360: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00530363: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530365: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00530368: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053036b: add eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053036e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053036f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530372: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00530375: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00530376: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530379: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0053037c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053037f: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00530382: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530384: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530387: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530389u); call_ind(t); }
    /* 00530389: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053038b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053038d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530390: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530392: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530395: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530398: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53039au); call_ind(t); }
    /* 0053039a: jmp 0x530425 */ goto L_00530425;
L_0053039f:; BB(0x0053039f);
    /* 0053039f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303a2: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005303a5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005303a6: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005303a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005303ab: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005303ae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303b1: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 005303b4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005303b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005303b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303ba: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005303bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005303be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303c1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005303c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303c7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005303ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005303cc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005303cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5303d1u); call_ind(t); }
    /* 005303d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005303d3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005303d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005303da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303dd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005303e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5303e2u); call_ind(t); }
    /* 005303e2: jmp 0x530425 */ goto L_00530425;
L_005303e4:; BB(0x005303e4);
    /* 005303e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303e7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005303ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005303eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303ee: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005303f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005303f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303f5: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005303f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005303fb: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005303fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530400: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530403: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530405u); call_ind(t); }
    /* 00530405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530407: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00530409: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053040c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053040e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530411: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530414: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530416u); call_ind(t); }
    /* 00530416: jmp 0x530425 */ goto L_00530425;
L_00530418:; BB(0x00530418);
    /* 00530418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053041a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053041d: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00530420: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x530425u); f_005f5df0();
L_00530425:; BB(0x00530425);
    /* 00530425: mov esp, ebp */ r_esp = r_ebp;
    /* 00530427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530428: ret  */ FN_RET(0x00530270); r_esp += 4; return;
}

