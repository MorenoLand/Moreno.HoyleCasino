#include "protos.h"

void f_005ea040(void) /* sub_5EA040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea040);
    /* 005ea040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea041: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea043: sub esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea049: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ea04e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ea050: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea053: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea057: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 005ea05d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea05e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5ea063u); f_00686d8e();
    /* 005ea063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea066: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 005ea06c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea06d: call 0x5eaa40 */ r_esp -= 4; W32(r_esp, 0x5ea072u); f_005eaa40();
    /* 005ea072: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea075: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 005ea079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea07a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ea07d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea07e: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 005ea084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea085: call dword ptr [0x6b2064] */ { u32 t = R32((u32)(0x6b2064u)); r_esp -= 4; W32(r_esp, 0x5ea08bu); call_ind(t); }
    /* 005ea08b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea08d: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005ea090: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea093: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea095: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ea09au); f_00686d72();
    /* 005ea09a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea09c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea09d: ret  */ FN_RET(0x005ea040); r_esp += 4; return;
}

void f_005ea0a0(void) /* sub_5EA0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea0a0);
    /* 005ea0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea0a3: sub esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea0a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ea0ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ea0b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea0b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea0b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0b7: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 005ea0bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0be: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5ea0c3u); f_00686d8e();
    /* 005ea0c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea0c6: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 005ea0cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0cd: call 0x5eaa40 */ r_esp -= 4; W32(r_esp, 0x5ea0d2u); f_005eaa40();
    /* 005ea0d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea0d5: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 005ea0db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea0dc: call dword ptr [0x6b20e8] */ { u32 t = R32((u32)(0x6b20e8u)); r_esp -= 4; W32(r_esp, 0x5ea0e2u); call_ind(t); }
    /* 005ea0e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea0e4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea0e7: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005ea0ea: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005ea0ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea0ef: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea0f1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ea0f6u); f_00686d72();
    /* 005ea0f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea0f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea0f9: ret  */ FN_RET(0x005ea0a0); r_esp += 4; return;
}

void f_005ea220(void) /* sub_5EA220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea220);
    /* 005ea220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea221: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea223: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea226: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ea22d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea22f: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea234: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea239: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea23b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005ea240: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ea243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea244: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5ea249u); f_00686ede();
    /* 005ea249: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea24c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea24f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea252: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ea254: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea257: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005ea25a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ea25cu); call_ind(t); }
    /* 005ea25c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ea25f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea261: je 0x5ea272 */ if (fZ) goto L_005ea272;
L_005ea263:; BB(0x005ea263);
    /* 005ea263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea265: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea268: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ea26a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea26d: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005ea270: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ea272u); call_ind(t); }
L_005ea272:; BB(0x005ea272);
    /* 005ea272: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea274: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea279: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea27e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea280: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005ea286: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ea289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea28a: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5ea28fu); f_00686ede();
    /* 005ea28f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea292: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea295: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea299: je 0x5ea2a7 */ if (fZ) goto L_005ea2a7;
L_005ea29b:; BB(0x005ea29b);
    /* 005ea29b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea29e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 005ea2a4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ea2a7:; BB(0x005ea2a7);
    /* 005ea2a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2a9: push 0x6d4d58 */ { u32 v = 0x6d4d58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea2b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2b4: push 0x6d61f0 */ { u32 v = 0x6d61f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2bd: call dword ptr [0x6b23a8] */ { u32 t = R32((u32)(0x6b23a8u)); r_esp -= 4; W32(r_esp, 0x5ea2c3u); call_ind(t); }
    /* 005ea2c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea2c5: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ea2c8: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 005ea2cb: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005ea2cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea2cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea2d0: ret  */ FN_RET(0x005ea220); r_esp += 4; return;
}

void f_005ea2e0(void) /* sub_5EA2E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea2e0);
    /* 005ea2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2e6: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2eb: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2f2: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005ea2f7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ea2fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea2fb: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5ea300u); f_00686ede();
    /* 005ea300: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea303: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea306: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea30a: jne 0x5ea310 */ if (!fZ) goto L_005ea310;
L_005ea30c:; BB(0x005ea30c);
    /* 005ea30c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ea30e: jmp 0x5ea326 */ goto L_005ea326;
L_005ea310:; BB(0x005ea310);
    /* 005ea310: call dword ptr [0x6b2448] */ { u32 t = R32((u32)(0x6b2448u)); r_esp -= 4; W32(r_esp, 0x5ea316u); call_ind(t); }
    /* 005ea316: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea319: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea31b: cmp eax, dword ptr [edx + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea321: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005ea324: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_005ea326:; BB(0x005ea326);
    /* 005ea326: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea328: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea329: ret  */ FN_RET(0x005ea2e0); r_esp += 4; return;
}

void f_005ea400(void) /* sub_5EA400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea400);
    /* 005ea400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea401: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea403: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea408: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea40d: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea414: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005ea419: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ea41c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea41d: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5ea422u); f_00686ede();
    /* 005ea422: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea425: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea428: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea42c: jne 0x5ea430 */ if (!fZ) goto L_005ea430;
L_005ea42e:; BB(0x005ea42e);
    /* 005ea42e: jmp 0x5ea466 */ goto L_005ea466;
L_005ea430:; BB(0x005ea430);
    /* 005ea430: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea433: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ea435: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ea438: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea43b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ea43e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ea441: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ea444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea445: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea448: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005ea44e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea44f: call dword ptr [0x6b2454] */ { u32 t = R32((u32)(0x6b2454u)); r_esp -= 4; W32(r_esp, 0x5ea455u); call_ind(t); }
    /* 005ea455: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea458: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea45b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005ea45d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea460: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea463: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_005ea466:; BB(0x005ea466);
    /* 005ea466: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea468: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea469: ret  */ FN_RET(0x005ea400); r_esp += 4; return;
}

void f_005ea470(void) /* sub_5EA470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea470);
    /* 005ea470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea471: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea473: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea476: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005ea479: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea47a: call dword ptr [0x6b2458] */ { u32 t = R32((u32)(0x6b2458u)); r_esp -= 4; W32(r_esp, 0x5ea480u); call_ind(t); }
    /* 005ea480: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea483: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ea486: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea489: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ea48c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ea48f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea492: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea495: ret  */ FN_RET(0x005ea470); r_esp += 4; return;
}

void f_005ea540(void) /* sub_5EA540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea540);
    /* 005ea540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea541: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea543: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea547: je 0x5ea553 */ if (fZ) goto L_005ea553;
L_005ea549:; BB(0x005ea549);
    /* 005ea549: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea54c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ea54f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea551: jne 0x5ea558 */ if (!fZ) goto L_005ea558;
L_005ea553:; BB(0x005ea553);
    /* 005ea553: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea556: jmp 0x5ea5a3 */ goto L_005ea5a3;
L_005ea558:; BB(0x005ea558);
    /* 005ea558: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea55b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea55c: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x5ea561u); f_005ea5b0();
    /* 005ea561: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea564: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea567: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ea56a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea56c: jne 0x5ea576 */ if (!fZ) goto L_005ea576;
L_005ea56e:; BB(0x005ea56e);
    /* 005ea56e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea571: mov byte ptr [edx], 0x5c */ W8((u32)(r_edx), 0x5cu);
    /* 005ea574: jmp 0x5ea5a0 */ goto L_005ea5a0;
L_005ea576:; BB(0x005ea576);
    /* 005ea576: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea57a: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ea57fu); f_00686ecc();
    /* 005ea57f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea582: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea585: movsx edx, byte ptr [ecx + eax - 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xffffffffu));
    /* 005ea58a: cmp edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea58d: je 0x5ea5a0 */ if (fZ) goto L_005ea5a0;
L_005ea58f:; BB(0x005ea58f);
    /* 005ea58f: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea594: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea598: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5ea59du); f_00686ec6();
    /* 005ea59d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ea5a0:; BB(0x005ea5a0);
    /* 005ea5a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005ea5a3:; BB(0x005ea5a3);
    /* 005ea5a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea5a4: ret  */ FN_RET(0x005ea540); r_esp += 4; return;
}

void f_005ea5b0(void) /* sub_5EA5B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea5b0);
    /* 005ea5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea5b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea5b4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea5b8: je 0x5ea5c4 */ if (fZ) goto L_005ea5c4;
L_005ea5ba:; BB(0x005ea5ba);
    /* 005ea5ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea5bd: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ea5c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea5c2: jne 0x5ea5cc */ if (!fZ) goto L_005ea5cc;
L_005ea5c4:; BB(0x005ea5c4);
    /* 005ea5c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea5c7: jmp 0x5ea66e */ goto L_005ea66e;
L_005ea5cc:; BB(0x005ea5cc);
    /* 005ea5cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea5cf: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 005ea5d2: cmp eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea5d5: jne 0x5ea5ee */ if (!fZ) goto L_005ea5ee;
L_005ea5d7:; BB(0x005ea5d7);
    /* 005ea5d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea5da: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 005ea5de: cmp edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea5e1: jne 0x5ea5ee */ if (!fZ) goto L_005ea5ee;
L_005ea5e3:; BB(0x005ea5e3);
    /* 005ea5e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea5e6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea5e9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ea5ec: jmp 0x5ea5f4 */ goto L_005ea5f4;
L_005ea5ee:; BB(0x005ea5ee);
    /* 005ea5ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea5f1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ea5f4:; BB(0x005ea5f4);
    /* 005ea5f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea5f7: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 005ea5fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea5fc: je 0x5ea646 */ if (fZ) goto L_005ea646;
L_005ea5fe:; BB(0x005ea5fe);
    /* 005ea5fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea601: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005ea604: cmp edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea607: jne 0x5ea63b */ if (!fZ) goto L_005ea63b;
L_005ea609:; BB(0x005ea609);
    /* 005ea609: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea60c: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 005ea610: cmp ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea613: jne 0x5ea63b */ if (!fZ) goto L_005ea63b;
L_005ea615:; BB(0x005ea615);
    /* 005ea615: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea618: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea61b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea61c: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ea621u); f_00686ecc();
    /* 005ea621: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea624: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea628: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea62b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea62e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea62f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea632: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea633: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5ea638u); f_00686fde();
    /* 005ea638: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ea63b:; BB(0x005ea63b);
    /* 005ea63b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea63e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ea641: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ea644: jmp 0x5ea5f4 */ goto L_005ea5f4;
L_005ea646:; BB(0x005ea646);
    /* 005ea646: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea649: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ea64c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ea64f:; BB(0x005ea64f);
    /* 005ea64f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea652: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005ea655: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea658: jne 0x5ea66b */ if (!fZ) goto L_005ea66b;
L_005ea65a:; BB(0x005ea65a);
    /* 005ea65a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea65d: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 005ea660: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea663: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea666: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ea669: jmp 0x5ea64f */ goto L_005ea64f;
L_005ea66b:; BB(0x005ea66b);
    /* 005ea66b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005ea66e:; BB(0x005ea66e);
    /* 005ea66e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea670: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea671: ret  */ FN_RET(0x005ea5b0); r_esp += 4; return;
}

void f_005ea680(void) /* sub_5EA680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea680);
    /* 005ea680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea681: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea683: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea686: mov dword ptr [ebp - 0x14], 0x6d61ec */ W32((u32)(r_ebp+0xffffffecu), 0x6d61ecu);
    /* 005ea68d: cmp dword ptr [0x795074], 0 */ {  u32 a = R32((u32)(0x795074u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea694: je 0x5ea6a0 */ if (fZ) goto L_005ea6a0;
L_005ea696:; BB(0x005ea696);
    /* 005ea696: mov eax, dword ptr [0x795074] */ r_eax = R32((u32)(0x795074u));
    /* 005ea69b: jmp 0x5ea74f */ goto L_005ea74f;
L_005ea6a0:; BB(0x005ea6a0);
    /* 005ea6a0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ea6a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6a4: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6a8: call dword ptr [0x6b239c] */ { u32 t = R32((u32)(0x6b239cu)); r_esp -= 4; W32(r_esp, 0x5ea6aeu); call_ind(t); }
    /* 005ea6ae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ea6b1: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6b6: call dword ptr [0x6b22b0] */ { u32 t = R32((u32)(0x6b22b0u)); r_esp -= 4; W32(r_esp, 0x5ea6bcu); call_ind(t); }
    /* 005ea6bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea6bf: mov dword ptr [0x795074], eax */ W32((u32)(0x795074u), r_eax);
    /* 005ea6c4: mov ecx, dword ptr [0x795074] */ r_ecx = R32((u32)(0x795074u));
    /* 005ea6ca: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 005ea6cd: mov edx, dword ptr [0x795074] */ r_edx = R32((u32)(0x795074u));
    /* 005ea6d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6d4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea6d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6d8: call dword ptr [0x6b23a0] */ { u32 t = R32((u32)(0x6b23a0u)); r_esp -= 4; W32(r_esp, 0x5ea6deu); call_ind(t); }
    /* 005ea6de: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ea6e1: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005ea6e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6e5: call dword ptr [0x6b23a4] */ { u32 t = R32((u32)(0x6b23a4u)); r_esp -= 4; W32(r_esp, 0x5ea6ebu); call_ind(t); }
    /* 005ea6eb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ea6ee: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea6f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea6f5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ea6f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea6fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea6fb: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 005ea6fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ea700u); call_ind(t); }
    /* 005ea700: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea703: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ea705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ea708: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea709: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ea70c: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x5ea70eu); call_ind(t); }
    /* 005ea70e: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea713: mov edx, dword ptr [0x795074] */ r_edx = R32((u32)(0x795074u));
    /* 005ea719: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea71a: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5ea71fu); f_00686ec6();
    /* 005ea71f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea722: call 0x5dca70 */ r_esp -= 4; W32(r_esp, 0x5ea727u); f_005dca70();
    /* 005ea727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea728: mov eax, dword ptr [0x795074] */ r_eax = R32((u32)(0x795074u));
    /* 005ea72d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea72e: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5ea733u); f_00686ec6();
    /* 005ea733: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea736: mov ecx, dword ptr [0x795074] */ r_ecx = R32((u32)(0x795074u));
    /* 005ea73c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea73d: push 0x6d61fc */ { u32 v = 0x6d61fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea742: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5ea747u); f_0062fde0();
    /* 005ea747: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea74a: mov eax, dword ptr [0x795074] */ r_eax = R32((u32)(0x795074u));
L_005ea74f:; BB(0x005ea74f);
    /* 005ea74f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea751: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea752: ret  */ FN_RET(0x005ea680); r_esp += 4; return;
}

void f_005ea760(void) /* sub_5EA760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea760);
    /* 005ea760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea761: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea763: mov eax, 0x7950bc */ r_eax = 0x7950bcu;
    /* 005ea768: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea769: ret  */ FN_RET(0x005ea760); r_esp += 4; return;
}

void f_005ea770(void) /* sub_5EA770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea770);
    /* 005ea770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea771: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea775: push 0x6a9b49 */ { u32 v = 0x6a9b49u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea77a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea781: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea784: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ea789: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ea78b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ea78e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea78f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ea792: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ea798: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea79c: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x5ea7a1u); f_005ea5b0();
    /* 005ea7a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea7a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea7a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7a8: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005ea7ab: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5ea7b1u); call_ind(t); }
    /* 005ea7b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea7b8: call 0x5ea760 */ r_esp -= 4; W32(r_esp, 0x5ea7bdu); f_005ea760();
    /* 005ea7bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7be: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ea7c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7c2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5ea7c7u); f_00686d8e();
    /* 005ea7c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea7ca: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005ea7cd: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x5ea7d3u); call_ind(t); }
    /* 005ea7d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea7d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea7d8: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5ea7ddu); f_00686ec6();
    /* 005ea7dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea7e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea7e3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005ea7e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea7ed: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005ea7f0: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5ea7f6u); call_ind(t); }
    /* 005ea7f6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ea7f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea7fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea803: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea804: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea807: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea809: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ea80eu); f_00686d72();
    /* 005ea80e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea810: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea811: ret  */ FN_RET(0x005ea770); r_esp += 4; return;
}

void f_005ea820(void) /* sub_5EA820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea820);
    /* 005ea820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea821: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea825: push 0x6a9b77 */ { u32 v = 0x6a9b77u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea82a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea831: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea834: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ea839: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ea83b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ea83e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea83f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ea842: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ea848: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005ea84f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ea852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea853: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ea858u); f_00686ecc();
    /* 005ea858: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea85b: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ea85e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea85f: call dword ptr [0x6b22b0] */ { u32 t = R32((u32)(0x6b22b0u)); r_esp -= 4; W32(r_esp, 0x5ea865u); call_ind(t); }
    /* 005ea865: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea868: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ea86b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ea86e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea86f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ea872: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea873: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5ea878u); f_00686d8e();
    /* 005ea878: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea87b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ea87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea87f: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x5ea884u); f_005ea5b0();
    /* 005ea884: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea887: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ea88a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea88b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea88e: call dword ptr [0x6b2114] */ { u32 t = R32((u32)(0x6b2114u)); r_esp -= 4; W32(r_esp, 0x5ea894u); call_ind(t); }
    /* 005ea894: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ea897: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea898: call dword ptr [0x6b22bc] */ { u32 t = R32((u32)(0x6b22bcu)); r_esp -= 4; W32(r_esp, 0x5ea89eu); call_ind(t); }
    /* 005ea89e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea8a1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ea8a4: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ea8a7: cmp ecx, 0x72 */ {  u32 a = r_ecx; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea8aa: jne 0x5ea8f7 */ if (!fZ) goto L_005ea8f7;
L_005ea8ac:; BB(0x005ea8ac);
    /* 005ea8ac: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8ae: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ea8b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8b2: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x5ea8b8u); call_ind(t); }
    /* 005ea8b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea8bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea8bd: jne 0x5ea8f7 */ if (!fZ) goto L_005ea8f7;
L_005ea8bf:; BB(0x005ea8bf);
    /* 005ea8bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8c1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea8c4: call dword ptr [0x6b2110] */ { u32 t = R32((u32)(0x6b2110u)); r_esp -= 4; W32(r_esp, 0x5ea8cau); call_ind(t); }
    /* 005ea8ca: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ea8cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea8cf: je 0x5ea913 */ if (fZ) goto L_005ea913;
L_005ea8d1:; BB(0x005ea8d1);
    /* 005ea8d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8d3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea8d6: call dword ptr [0x6b2110] */ { u32 t = R32((u32)(0x6b2110u)); r_esp -= 4; W32(r_esp, 0x5ea8dcu); call_ind(t); }
    /* 005ea8dc: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ea8df: cmp ecx, 0x3a */ {  u32 a = r_ecx; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea8e2: jne 0x5ea913 */ if (!fZ) goto L_005ea913;
L_005ea8e4:; BB(0x005ea8e4);
    /* 005ea8e4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8e6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea8e9: call dword ptr [0x6b2110] */ { u32 t = R32((u32)(0x6b2110u)); r_esp -= 4; W32(r_esp, 0x5ea8efu); call_ind(t); }
    /* 005ea8ef: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005ea8f2: cmp edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea8f5: jne 0x5ea913 */ if (!fZ) goto L_005ea913;
L_005ea8f7:; BB(0x005ea8f7);
    /* 005ea8f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ea8fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea8fb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea8fe: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x5ea904u); call_ind(t); }
    /* 005ea904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea905: call dword ptr [0x6b22b4] */ { u32 t = R32((u32)(0x6b22b4u)); r_esp -= 4; W32(r_esp, 0x5ea90bu); call_ind(t); }
    /* 005ea90b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea90e: jmp 0x5ea99b */ goto L_005ea99b;
L_005ea913:; BB(0x005ea913);
    /* 005ea913: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ea916: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea917: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea91a: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x5ea920u); call_ind(t); }
    /* 005ea920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea921: call dword ptr [0x6b22b4] */ { u32 t = R32((u32)(0x6b22b4u)); r_esp -= 4; W32(r_esp, 0x5ea927u); call_ind(t); }
    /* 005ea927: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea92a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ea92d: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ea931: je 0x5ea938 */ if (fZ) goto L_005ea938;
L_005ea933:; BB(0x005ea933);
    /* 005ea933: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ea936: jmp 0x5ea99b */ goto L_005ea99b;
L_005ea938:; BB(0x005ea938);
    /* 005ea938: call 0x5ea760 */ r_esp -= 4; W32(r_esp, 0x5ea93du); f_005ea760();
    /* 005ea93d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea93e: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005ea941: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x5ea947u); call_ind(t); }
    /* 005ea947: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea94e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ea951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea952: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005ea955: call dword ptr [0x6b2108] */ { u32 t = R32((u32)(0x6b2108u)); r_esp -= 4; W32(r_esp, 0x5ea95bu); call_ind(t); }
    /* 005ea95b: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005ea95e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea95f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea962: call dword ptr [0x6b2104] */ { u32 t = R32((u32)(0x6b2104u)); r_esp -= 4; W32(r_esp, 0x5ea968u); call_ind(t); }
    /* 005ea968: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ea96b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ea96c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ea96f: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x5ea975u); call_ind(t); }
    /* 005ea975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea976: call dword ptr [0x6b22b4] */ { u32 t = R32((u32)(0x6b22b4u)); r_esp -= 4; W32(r_esp, 0x5ea97cu); call_ind(t); }
    /* 005ea97c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ea97f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ea982: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ea985: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005ea988: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ea98f: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005ea992: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5ea998u); call_ind(t); }
    /* 005ea998: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
L_005ea99b:; BB(0x005ea99b);
    /* 005ea99b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ea99e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ea9a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ea9a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ea9a9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ea9ab: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ea9b0u); f_00686d72();
    /* 005ea9b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005ea9b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ea9b3: ret  */ FN_RET(0x005ea820); r_esp += 4; return;
}

void f_005ea9c0(void) /* sub_5EA9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ea9c0);
    /* 005ea9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ea9c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9c5: push 0x6a9ba5 */ { u32 v = 0x6a9ba5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ea9d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9d1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ea9d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ea9d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ea9db: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ea9de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9df: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ea9e2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ea9e8: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005ea9eb: call dword ptr [0x6b210c] */ { u32 t = R32((u32)(0x6b210cu)); r_esp -= 4; W32(r_esp, 0x5ea9f1u); call_ind(t); }
    /* 005ea9f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ea9f8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005ea9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ea9fc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ea9ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa00: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eaa03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa04: call 0x5ea820 */ r_esp -= 4; W32(r_esp, 0x5eaa09u); f_005ea820();
    /* 005eaa09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eaa0c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005eaa0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eaa16: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005eaa19: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5eaa1fu); call_ind(t); }
    /* 005eaa1f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005eaa22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eaa25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eaa2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eaa2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eaa30: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eaa32: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5eaa37u); f_00686d72();
    /* 005eaa37: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaa39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eaa3a: ret  */ FN_RET(0x005ea9c0); r_esp += 4; return;
}

void f_005eaa40(void) /* sub_5EAA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eaa40);
    /* 005eaa40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa41: mov ebp, esp */ r_ebp = r_esp;
    /* 005eaa43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa45: push 0x6a9bd3 */ { u32 v = 0x6a9bd3u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eaa50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa51: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eaa54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005eaa59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eaa5b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005eaa5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa5f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005eaa62: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005eaa68: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005eaa6b: call dword ptr [0x6b210c] */ { u32 t = R32((u32)(0x6b210cu)); r_esp -= 4; W32(r_esp, 0x5eaa71u); call_ind(t); }
    /* 005eaa71: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eaa78: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005eaa7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa7c: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eaa84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa85: call 0x5ea820 */ r_esp -= 4; W32(r_esp, 0x5eaa8au); f_005ea820();
    /* 005eaa8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eaa8d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005eaa90: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaa94: je 0x5eaaa3 */ if (fZ) goto L_005eaaa3;
L_005eaa96:; BB(0x005eaa96);
    /* 005eaa96: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005eaa99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaa9a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5eaaa0u); call_ind(t); }
    /* 005eaaa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eaaa3:; BB(0x005eaaa3);
    /* 005eaaa3: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005eaaa6: call dword ptr [0x6b2100] */ { u32 t = R32((u32)(0x6b2100u)); r_esp -= 4; W32(r_esp, 0x5eaaacu); call_ind(t); }
    /* 005eaaac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eaab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaab1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5eaab6u); f_00686d8e();
    /* 005eaab6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eaab9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eaabc: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005eaabf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eaac6: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005eaac9: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x5eaacfu); call_ind(t); }
    /* 005eaacf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005eaad2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eaad5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eaadc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eaadd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eaae0: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eaae2: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5eaae7u); f_00686d72();
    /* 005eaae7: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eaaea: ret  */ FN_RET(0x005eaa40); r_esp += 4; return;
}

void f_005eacd0(void) /* sub_5EACD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eacd0);
    /* 005eacd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eacd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eacd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eacd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eacd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eacda: cmp dword ptr [eax + 0x174], 0 */ {  u32 a = R32((u32)(r_eax+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eace1: je 0x5eacf8 */ if (fZ) goto L_005eacf8;
L_005eace3:; BB(0x005eace3);
    /* 005eace3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eace6: mov edx, dword ptr [ecx + 0x174] */ r_edx = R32((u32)(r_ecx+0x174u));
    /* 005eacec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaced: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eacf0: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005eacf3: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5eacf8u); f_006041d0();
L_005eacf8:; BB(0x005eacf8);
    /* 005eacf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eacfb: mov dword ptr [ecx + 0x174], 0 */ W32((u32)(r_ecx+0x174u), 0x0u);
    /* 005ead05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead08: cmp dword ptr [edx + 0x4c], 0 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ead0c: jne 0x5ead2a */ if (!fZ) goto L_005ead2a;
L_005ead0e:; BB(0x005ead0e);
    /* 005ead0e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead16: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ead19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ead1a: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5ead1fu); f_00686ec0();
    /* 005ead1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ead22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ead24: je 0x5eae7c */ if (fZ) goto L_005eae7c;
L_005ead2a:; BB(0x005ead2a);
    /* 005ead2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead2d: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ead31: je 0x5ead57 */ if (fZ) goto L_005ead57;
L_005ead33:; BB(0x005ead33);
    /* 005ead33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead38: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005ead3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ead3c: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead44: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005ead47: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x5ead4cu); f_00603c50();
    /* 005ead4c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead4f: mov dword ptr [edx + 0x174], eax */ W32((u32)(r_edx+0x174u), r_eax);
    /* 005ead55: jmp 0x5ead77 */ goto L_005ead77;
L_005ead57:; BB(0x005ead57);
    /* 005ead57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead5a: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ead5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ead5e: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead66: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005ead69: call 0x603fb0 */ r_esp -= 4; W32(r_esp, 0x5ead6eu); f_00603fb0();
    /* 005ead6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead71: mov dword ptr [edx + 0x174], eax */ W32((u32)(r_edx+0x174u), r_eax);
L_005ead77:; BB(0x005ead77);
    /* 005ead77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead7a: cmp dword ptr [eax + 0x174], 0 */ {  u32 a = R32((u32)(r_eax+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ead81: je 0x5eadb9 */ if (fZ) goto L_005eadb9;
L_005ead83:; BB(0x005ead83);
    /* 005ead83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead86: mov ecx, dword ptr [ecx + 0x174] */ r_ecx = R32((u32)(r_ecx+0x174u));
    /* 005ead8c: call 0x6163c0 */ r_esp -= 4; W32(r_esp, 0x5ead91u); f_006163c0();
    /* 005ead91: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ead94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ead97: mov dword ptr [edx + 0x168], eax */ W32((u32)(r_edx+0x168u), r_eax);
    /* 005ead9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ead9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eada2: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 005eada8: call 0x6163e0 */ r_esp -= 4; W32(r_esp, 0x5eadadu); f_006163e0();
    /* 005eadad: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eadb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eadb3: mov dword ptr [ecx + 0x160], eax */ W32((u32)(r_ecx+0x160u), r_eax);
L_005eadb9:; BB(0x005eadb9);
    /* 005eadb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eadbc: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5eadc1u); f_005eb240();
    /* 005eadc1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eadc4: cmp dword ptr [edx + 0x15c], eax */ {  u32 a = R32((u32)(r_edx+0x15cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eadca: jle 0x5eaddd */ if ((fZ||fS!=fO)) goto L_005eaddd;
L_005eadcc:; BB(0x005eadcc);
    /* 005eadcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eadcf: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5eadd4u); f_005eb240();
    /* 005eadd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eadd7: mov dword ptr [ecx + 0x15c], eax */ W32((u32)(r_ecx+0x15cu), r_eax);
L_005eaddd:; BB(0x005eaddd);
    /* 005eaddd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eade0: cmp dword ptr [edx + 0x15c], 0 */ {  u32 a = R32((u32)(r_edx+0x15cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eade7: jge 0x5eadf6 */ if ((fS==fO)) goto L_005eadf6;
L_005eade9:; BB(0x005eade9);
    /* 005eade9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eadec: mov dword ptr [eax + 0x15c], 0 */ W32((u32)(r_eax+0x15cu), 0x0u);
L_005eadf6:; BB(0x005eadf6);
    /* 005eadf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eadf9: call 0x5eb130 */ r_esp -= 4; W32(r_esp, 0x5eadfeu); f_005eb130();
    /* 005eadfe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae01: cmp dword ptr [ecx + 0x164], eax */ {  u32 a = R32((u32)(r_ecx+0x164u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eae07: jle 0x5eae1a */ if ((fZ||fS!=fO)) goto L_005eae1a;
L_005eae09:; BB(0x005eae09);
    /* 005eae09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae0c: call 0x5eb130 */ r_esp -= 4; W32(r_esp, 0x5eae11u); f_005eb130();
    /* 005eae11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae14: mov dword ptr [edx + 0x164], eax */ W32((u32)(r_edx+0x164u), r_eax);
L_005eae1a:; BB(0x005eae1a);
    /* 005eae1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae1d: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eae24: jge 0x5eae33 */ if ((fS==fO)) goto L_005eae33;
L_005eae26:; BB(0x005eae26);
    /* 005eae26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae29: mov dword ptr [ecx + 0x164], 0 */ W32((u32)(r_ecx+0x164u), 0x0u);
L_005eae33:; BB(0x005eae33);
    /* 005eae33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae36: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eae38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae3b: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005eae41: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eae43u); call_ind(t); }
    /* 005eae43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eae48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae4b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005eae4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eae50u); call_ind(t); }
    /* 005eae50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae54: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eae56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae59: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005eae5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eae5eu); call_ind(t); }
    /* 005eae5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae62: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eae64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae67: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005eae6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eae6cu); call_ind(t); }
    /* 005eae6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eae71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae74: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005eae7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eae7cu); call_ind(t); }
L_005eae7c:; BB(0x005eae7c);
    /* 005eae7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005eae7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eae7f: ret  */ FN_RET(0x005eacd0); r_esp += 4; return;
}

void f_005eae80(void) /* sub_5EAE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eae80);
    /* 005eae80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eae81: mov ebp, esp */ r_ebp = r_esp;
    /* 005eae83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eae87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eae8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eae8e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5eae93u); f_005eaf00();
    /* 005eae93: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005eae96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae97: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005eae9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eae9b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eae9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eae9f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005eaea2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaea3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaea6: call 0x5f50c0 */ r_esp -= 4; W32(r_esp, 0x5eaeabu); f_005f50c0();
    /* 005eaeab: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eaeae: ret 0x14 */ FN_RET(0x005eae80); r_esp += 24; return;
}

void f_005eaec0(void) /* sub_5EAEC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eaec0);
    /* 005eaec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eaec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eaec7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eaeca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaecb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaece: call 0x5eaf60 */ r_esp -= 4; W32(r_esp, 0x5eaed3u); f_005eaf60();
    /* 005eaed3: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005eaed6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaed7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005eaeda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaedb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eaede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaedf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005eaee2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaee3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaee6: call 0x5f50c0 */ r_esp -= 4; W32(r_esp, 0x5eaeebu); f_005f50c0();
    /* 005eaeeb: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaeed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eaeee: ret 0x14 */ FN_RET(0x005eaec0); r_esp += 24; return;
}

void f_005eaf60(void) /* sub_5EAF60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eaf60);
    /* 005eaf60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf61: mov ebp, esp */ r_ebp = r_esp;
    /* 005eaf63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eaf67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf6a: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 005eaf71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf74: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eaf77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf78: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eaf7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf7c: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5eaf81u); f_00686ec0();
    /* 005eaf81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eaf84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaf86: je 0x5eafac */ if (fZ) goto L_005eafac;
L_005eaf88:; BB(0x005eaf88);
    /* 005eaf88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eaf8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf8f: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eaf92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf93: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5eaf98u); f_00686d8e();
    /* 005eaf98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eaf9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf9e: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eafa2: je 0x5eafac */ if (fZ) goto L_005eafac;
L_005eafa4:; BB(0x005eafa4);
    /* 005eafa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eafa7: call 0x5eacd0 */ r_esp -= 4; W32(r_esp, 0x5eafacu); f_005eacd0();
L_005eafac:; BB(0x005eafac);
    /* 005eafac: mov esp, ebp */ r_esp = r_ebp;
    /* 005eafae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eafaf: ret 4 */ FN_RET(0x005eaf60); r_esp += 8; return;
}

