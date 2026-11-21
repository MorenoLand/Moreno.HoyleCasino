#include "protos.h"

void f_005d9180(void) /* sub_5D9180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9180);
    /* 005d9180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9181: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9183: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9186: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d918b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d918d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d9190: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005d9193: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9197: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d919cu); f_005dcb00();
    /* 005d919c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d919f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d91a2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d91a6: jne 0x5d91ad */ if (!fZ) goto L_005d91ad;
L_005d91a8:; BB(0x005d91a8);
    /* 005d91a8: jmp 0x5d92d6 */ goto L_005d92d6;
L_005d91ad:; BB(0x005d91ad);
    /* 005d91ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91b0: cmp dword ptr [ecx + 0x49c], 0 */ {  u32 a = R32((u32)(r_ecx+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d91b7: je 0x5d91d3 */ if (fZ) goto L_005d91d3;
L_005d91b9:; BB(0x005d91b9);
    /* 005d91b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91bc: mov ecx, dword ptr [edx + 0x49c] */ r_ecx = R32((u32)(r_edx+0x49cu));
    /* 005d91c2: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5d91c7u); f_005f54a0();
    /* 005d91c7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d91ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d91cc: je 0x5d91d3 */ if (fZ) goto L_005d91d3;
L_005d91ce:; BB(0x005d91ce);
    /* 005d91ce: jmp 0x5d92d6 */ goto L_005d92d6;
L_005d91d3:; BB(0x005d91d3);
    /* 005d91d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91d6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d91dbu); f_0063aac0();
    /* 005d91db: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d91dd: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005d91e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d91e2: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d91e6: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d91e9: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005d91ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d91ee: jne 0x5d92d6 */ if (!fZ) goto L_005d92d6;
L_005d91f4:; BB(0x005d91f4);
    /* 005d91f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d91f7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005d91fa: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005d91fd: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9201: je 0x5d92d6 */ if (fZ) goto L_005d92d6;
L_005d9207:; BB(0x005d9207);
    /* 005d9207: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d920e: je 0x5d9277 */ if (fZ) goto L_005d9277;
L_005d9210:; BB(0x005d9210);
    /* 005d9210: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9214: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d921a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d921c: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d9222: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005d9228: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d922au); call_ind(t); }
    /* 005d922a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d922d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d922f: je 0x5d9277 */ if (fZ) goto L_005d9277;
L_005d9231:; BB(0x005d9231);
    /* 005d9231: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9234: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005d9237: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005d923a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d923d: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d9242u); f_00646f80();
    /* 005d9242: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 005d9248: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005d924b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9250: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005d9253: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9255: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005d9258: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005d925e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d9260u); call_ind(t); }
    /* 005d9260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9261: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5d9266u); f_00686ec0();
    /* 005d9266: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9269: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d926b: je 0x5d9277 */ if (fZ) goto L_005d9277;
L_005d926d:; BB(0x005d926d);
    /* 005d926d: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 005d9271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9273: jne 0x5d9277 */ if (!fZ) goto L_005d9277;
L_005d9275:; BB(0x005d9275);
    /* 005d9275: jmp 0x5d92d6 */ goto L_005d92d6;
L_005d9277:; BB(0x005d9277);
    /* 005d9277: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 005d927a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d927b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d927e: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d9283u); f_005d5a90();
    /* 005d9283: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9285: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005d9288: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005d928b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d928e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9290: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9292: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9294: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 005d9297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9298: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d929b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d929c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d929f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d92a0: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5d92a5u); f_0064c8d0();
    /* 005d92a5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d92a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d92ab: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005d92ae: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005d92b1: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d92b4: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d92b9u); f_00646f80();
    /* 005d92b9: mov eax, dword ptr [eax + 0x190] */ r_eax = R32((u32)(r_eax+0x190u));
    /* 005d92bf: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005d92c2: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 005d92c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d92c6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005d92c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d92cb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005d92ce: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005d92d4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d92d6u); call_ind(t); }
L_005d92d6:; BB(0x005d92d6);
    /* 005d92d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d92d9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d92db: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d92e0u); f_00686d72();
    /* 005d92e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d92e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d92e3: ret 8 */ FN_RET(0x005d9180); r_esp += 12; return;
}

void f_005d9570(void) /* sub_5D9570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9570);
    /* 005d9570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9571: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9573: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9576: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d9579: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005d9580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9582: je 0x5d95a4 */ if (fZ) goto L_005d95a4;
L_005d9584:; BB(0x005d9584);
    /* 005d9584: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9587: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9588: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d958du); f_005dcb00();
    /* 005d958d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9590: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d9593: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d9596: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005d9599: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d959c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d959f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d95a2: jmp 0x5d95bf */ goto L_005d95bf;
L_005d95a4:; BB(0x005d95a4);
    /* 005d95a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95a6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d95ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d95ae: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d95b4: mov edx, dword ptr [eax + 0x370] */ r_edx = R32((u32)(r_eax+0x370u));
    /* 005d95ba: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d95bcu); call_ind(t); }
    /* 005d95bc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005d95bf:; BB(0x005d95bf);
    /* 005d95bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d95c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d95c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d95d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d95d1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d95d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d95d5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d95dau); f_005dcb00();
    /* 005d95da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d95dd: mov ecx, eax */ r_ecx = r_eax;
    /* 005d95df: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x5d95e4u); f_0063a8d0();
    /* 005d95e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95e8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d95edu); f_0064c8a0();
    /* 005d95ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d95f0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d95f3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d95f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d95f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d95fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d95fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d95fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9601: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9602: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d9607u); f_005dcb00();
    /* 005d9607: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d960a: mov ecx, eax */ r_ecx = r_eax;
    /* 005d960c: call 0x5d5f80 */ r_esp -= 4; W32(r_esp, 0x5d9611u); f_005d5f80();
    /* 005d9611: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9613: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9615: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d961au); f_0064c8a0();
    /* 005d961a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d961d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d9620: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d9623: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9626: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9627: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d962a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d962b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d962e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d962f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d9634u); f_005dcb00();
    /* 005d9634: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9637: mov ecx, eax */ r_ecx = r_eax;
    /* 005d9639: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5d963eu); f_005d6050();
    /* 005d963e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9642: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d9647u); f_005dcb00();
    /* 005d9647: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d964a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d964b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d964e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9650: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9653: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 005d9659: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d965bu); call_ind(t); }
    /* 005d965b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d965e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d965f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9662: call 0x5d8f50 */ r_esp -= 4; W32(r_esp, 0x5d9667u); f_005d8f50();
    /* 005d9667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d966a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d966c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d966d: ret 4 */ FN_RET(0x005d9570); r_esp += 8; return;
}

void f_005d9960(void) /* sub_5D9960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9960);
    /* 005d9960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9961: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9966: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d9969: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d9970: jmp 0x5d997b */ goto L_005d997b;
L_005d9972:; BB(0x005d9972);
    /* 005d9972: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9975: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9978: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d997b:; BB(0x005d997b);
    /* 005d997b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9981: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9983: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9989: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005d998f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9991u); call_ind(t); }
    /* 005d9991: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9994: jge 0x5d99b5 */ if ((fS==fO)) goto L_005d99b5;
L_005d9996:; BB(0x005d9996);
    /* 005d9996: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9999: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d999a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d999fu); f_005dcb00();
    /* 005d999f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d99a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d99a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d99a6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d99a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d99ab: mov edx, dword ptr [eax + 0x264] */ r_edx = R32((u32)(r_eax+0x264u));
    /* 005d99b1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d99b3u); call_ind(t); }
    /* 005d99b3: jmp 0x5d9972 */ goto L_005d9972;
L_005d99b5:; BB(0x005d99b5);
    /* 005d99b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d99b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d99b8: ret  */ FN_RET(0x005d9960); r_esp += 4; return;
}

