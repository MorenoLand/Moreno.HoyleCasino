#include "protos.h"

void f_005fb1b0(void) /* sub_5FB1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb1b0);
    /* 005fb1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb1b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb1b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fb1b9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fb1bc: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5fb1c1u); f_0060c9a0();
    /* 005fb1c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fb1c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fb1cb: jmp 0x5fb1d6 */ goto L_005fb1d6;
L_005fb1cd:; BB(0x005fb1cd);
    /* 005fb1cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb1d0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb1d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005fb1d6:; BB(0x005fb1d6);
    /* 005fb1d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb1d9: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fb1dc: jge 0x5fb206 */ if ((fS==fO)) goto L_005fb206;
L_005fb1de:; BB(0x005fb1de);
    /* 005fb1de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb1e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb1e2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fb1e5: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fb1eau); f_0060ca40();
    /* 005fb1ea: mov ecx, eax */ r_ecx = r_eax;
    /* 005fb1ec: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fb1f1u); f_005f5400();
    /* 005fb1f1: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb1f4: jne 0x5fb204 */ if (!fZ) goto L_005fb204;
L_005fb1f6:; BB(0x005fb1f6);
    /* 005fb1f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb1fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fb1fd: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fb202u); f_0060ca40();
    /* 005fb202: jmp 0x5fb208 */ goto L_005fb208;
L_005fb204:; BB(0x005fb204);
    /* 005fb204: jmp 0x5fb1cd */ goto L_005fb1cd;
L_005fb206:; BB(0x005fb206);
    /* 005fb206: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb208:; BB(0x005fb208);
    /* 005fb208: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb20a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb20b: ret 8 */ FN_RET(0x005fb1b0); r_esp += 12; return;
}

void f_005fb210(void) /* sub_5FB210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb210);
    /* 005fb210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb211: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb213: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb216: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb219: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb21c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb21f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb220: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb224: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb227: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb22cu); f_005fb1b0();
    /* 005fb22c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb22f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb233: je 0x5fb251 */ if (fZ) goto L_005fb251;
L_005fb235:; BB(0x005fb235);
    /* 005fb235: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb237: push 0x7050ac */ { u32 v = 0x7050acu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb23c: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb241: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb243: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb246: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb247: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb24cu); f_00686ede();
    /* 005fb24c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb24f: jmp 0x5fb253 */ goto L_005fb253;
L_005fb251:; BB(0x005fb251);
    /* 005fb251: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb253:; BB(0x005fb253);
    /* 005fb253: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb256: ret 4 */ FN_RET(0x005fb210); r_esp += 8; return;
}

void f_005fb2b0(void) /* sub_5FB2B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb2b0);
    /* 005fb2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb2b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb2b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb2b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb2bc: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb2bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb2c7: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb2ccu); f_005fb1b0();
    /* 005fb2cc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb2cf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb2d3: je 0x5fb2f1 */ if (fZ) goto L_005fb2f1;
L_005fb2d5:; BB(0x005fb2d5);
    /* 005fb2d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2d7: push 0x7050dc */ { u32 v = 0x7050dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2dc: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb2e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2e7: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb2ecu); f_00686ede();
    /* 005fb2ec: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb2ef: jmp 0x5fb2f3 */ goto L_005fb2f3;
L_005fb2f1:; BB(0x005fb2f1);
    /* 005fb2f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb2f3:; BB(0x005fb2f3);
    /* 005fb2f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb2f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb2f6: ret 4 */ FN_RET(0x005fb2b0); r_esp += 8; return;
}

void f_005fb300(void) /* sub_5FB300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb300);
    /* 005fb300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb301: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb303: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb306: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb309: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb30c: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb30f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb310: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb314: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb317: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb31cu); f_005fb1b0();
    /* 005fb31c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb31f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb323: je 0x5fb341 */ if (fZ) goto L_005fb341;
L_005fb325:; BB(0x005fb325);
    /* 005fb325: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb327: push 0x71e190 */ { u32 v = 0x71e190u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb32c: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb331: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb333: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb337: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb33cu); f_00686ede();
    /* 005fb33c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb33f: jmp 0x5fb343 */ goto L_005fb343;
L_005fb341:; BB(0x005fb341);
    /* 005fb341: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb343:; BB(0x005fb343);
    /* 005fb343: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb345: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb346: ret 4 */ FN_RET(0x005fb300); r_esp += 8; return;
}

void f_005fb350(void) /* sub_5FB350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb350);
    /* 005fb350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb351: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb353: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb356: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb359: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb35c: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb35f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb360: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb364: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb367: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb36cu); f_005fb1b0();
    /* 005fb36c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb36f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb373: je 0x5fb391 */ if (fZ) goto L_005fb391;
L_005fb375:; BB(0x005fb375);
    /* 005fb375: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb377: push 0x74bee0 */ { u32 v = 0x74bee0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb37c: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb381: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb383: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb386: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb387: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb38cu); f_00686ede();
    /* 005fb38c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb38f: jmp 0x5fb393 */ goto L_005fb393;
L_005fb391:; BB(0x005fb391);
    /* 005fb391: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb393:; BB(0x005fb393);
    /* 005fb393: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb395: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb396: ret 4 */ FN_RET(0x005fb350); r_esp += 8; return;
}

void f_005fb3a0(void) /* sub_5FB3A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb3a0);
    /* 005fb3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb3a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb3a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb3a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb3ac: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb3af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb3b7: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb3bcu); f_005fb1b0();
    /* 005fb3bc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb3bf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb3c3: je 0x5fb3e1 */ if (fZ) goto L_005fb3e1;
L_005fb3c5:; BB(0x005fb3c5);
    /* 005fb3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3c7: push 0x75ef00 */ { u32 v = 0x75ef00u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3cc: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb3d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3d7: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb3dcu); f_00686ede();
    /* 005fb3dc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb3df: jmp 0x5fb3e3 */ goto L_005fb3e3;
L_005fb3e1:; BB(0x005fb3e1);
    /* 005fb3e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb3e3:; BB(0x005fb3e3);
    /* 005fb3e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb3e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb3e6: ret 4 */ FN_RET(0x005fb3a0); r_esp += 8; return;
}

void f_005fb3f0(void) /* sub_5FB3F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb3f0);
    /* 005fb3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb3f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb3f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb3f9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fb3fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb400: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5fb405u); f_005fb3a0();
    /* 005fb405: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb408: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb40c: je 0x5fb41c */ if (fZ) goto L_005fb41c;
L_005fb40e:; BB(0x005fb40e);
    /* 005fb40e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb411: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb412: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb415: call 0x606380 */ r_esp -= 4; W32(r_esp, 0x5fb41au); f_00606380();
    /* 005fb41a: jmp 0x5fb41e */ goto L_005fb41e;
L_005fb41c:; BB(0x005fb41c);
    /* 005fb41c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb41e:; BB(0x005fb41e);
    /* 005fb41e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb421: ret 8 */ FN_RET(0x005fb3f0); r_esp += 12; return;
}

void f_005fb430(void) /* sub_5FB430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb430);
    /* 005fb430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb431: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb433: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb436: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb439: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb43c: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb43f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb440: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb444: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb447: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb44cu); f_005fb1b0();
    /* 005fb44c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb44f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb453: je 0x5fb471 */ if (fZ) goto L_005fb471;
L_005fb455:; BB(0x005fb455);
    /* 005fb455: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb457: push 0x75eee4 */ { u32 v = 0x75eee4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb45c: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb461: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb463: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb466: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb467: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb46cu); f_00686ede();
    /* 005fb46c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb46f: jmp 0x5fb473 */ goto L_005fb473;
L_005fb471:; BB(0x005fb471);
    /* 005fb471: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb473:; BB(0x005fb473);
    /* 005fb473: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb476: ret 4 */ FN_RET(0x005fb430); r_esp += 8; return;
}

void f_005fb480(void) /* sub_5FB480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb480);
    /* 005fb480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb481: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb486: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb489: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fb48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb48d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb490: call 0x5fb430 */ r_esp -= 4; W32(r_esp, 0x5fb495u); f_005fb430();
    /* 005fb495: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb498: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb49c: je 0x5fb4ac */ if (fZ) goto L_005fb4ac;
L_005fb49e:; BB(0x005fb49e);
    /* 005fb49e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb4a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb4a5: call 0x5ff940 */ r_esp -= 4; W32(r_esp, 0x5fb4aau); f_005ff940();
    /* 005fb4aa: jmp 0x5fb4ae */ goto L_005fb4ae;
L_005fb4ac:; BB(0x005fb4ac);
    /* 005fb4ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb4ae:; BB(0x005fb4ae);
    /* 005fb4ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb4b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb4b1: ret 8 */ FN_RET(0x005fb480); r_esp += 12; return;
}

void f_005fb4c0(void) /* sub_5FB4C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb4c0);
    /* 005fb4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb4c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb4c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb4c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb4cc: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb4cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb4d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb4d7: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb4dcu); f_005fb1b0();
    /* 005fb4dc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb4df: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb4e3: je 0x5fb501 */ if (fZ) goto L_005fb501;
L_005fb4e5:; BB(0x005fb4e5);
    /* 005fb4e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4e7: push 0x75eec8 */ { u32 v = 0x75eec8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4ec: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb4f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb4f7: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb4fcu); f_00686ede();
    /* 005fb4fc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb4ff: jmp 0x5fb503 */ goto L_005fb503;
L_005fb501:; BB(0x005fb501);
    /* 005fb501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb503:; BB(0x005fb503);
    /* 005fb503: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb506: ret 4 */ FN_RET(0x005fb4c0); r_esp += 8; return;
}

void f_005fb510(void) /* sub_5FB510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb510);
    /* 005fb510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb511: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb513: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb516: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb519: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fb51c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb51d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb520: call 0x5fb4c0 */ r_esp -= 4; W32(r_esp, 0x5fb525u); f_005fb4c0();
    /* 005fb525: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb528: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb52c: je 0x5fb53c */ if (fZ) goto L_005fb53c;
L_005fb52e:; BB(0x005fb52e);
    /* 005fb52e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb531: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb532: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb535: call 0x5ff940 */ r_esp -= 4; W32(r_esp, 0x5fb53au); f_005ff940();
    /* 005fb53a: jmp 0x5fb53e */ goto L_005fb53e;
L_005fb53c:; BB(0x005fb53c);
    /* 005fb53c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb53e:; BB(0x005fb53e);
    /* 005fb53e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb540: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb541: ret 8 */ FN_RET(0x005fb510); r_esp += 12; return;
}

void f_005fb550(void) /* sub_5FB550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb550);
    /* 005fb550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb551: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb553: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb556: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb559: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb55c: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb55f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb560: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb564: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb567: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb56cu); f_005fb1b0();
    /* 005fb56c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb56f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb573: je 0x5fb591 */ if (fZ) goto L_005fb591;
L_005fb575:; BB(0x005fb575);
    /* 005fb575: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb577: push 0x706be4 */ { u32 v = 0x706be4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb57c: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb581: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb583: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb586: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb587: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb58cu); f_00686ede();
    /* 005fb58c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb58f: jmp 0x5fb593 */ goto L_005fb593;
L_005fb591:; BB(0x005fb591);
    /* 005fb591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb593:; BB(0x005fb593);
    /* 005fb593: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb596: ret 4 */ FN_RET(0x005fb550); r_esp += 8; return;
}

void f_005fb5a0(void) /* sub_5FB5A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb5a0);
    /* 005fb5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb5a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb5a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb5a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb5b0: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5fb5b5u); f_005fb550();
    /* 005fb5b5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb5b8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb5bc: je 0x5fb5d2 */ if (fZ) goto L_005fb5d2;
L_005fb5be:; BB(0x005fb5be);
    /* 005fb5be: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fb5c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb5c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fb5c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb5ca: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005fb5d0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fb5d2u); call_ind(t); }
L_005fb5d2:; BB(0x005fb5d2);
    /* 005fb5d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb5d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb5d5: ret 8 */ FN_RET(0x005fb5a0); r_esp += 12; return;
}

void f_005fb5e0(void) /* sub_5FB5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb5e0);
    /* 005fb5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb5e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb5e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb5e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb5ec: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb5f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb5f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb5f9: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb5feu); f_005fb1b0();
    /* 005fb5fe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb601: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb605: je 0x5fb623 */ if (fZ) goto L_005fb623;
L_005fb607:; BB(0x005fb607);
    /* 005fb607: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb609: push 0x75ef24 */ { u32 v = 0x75ef24u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb60e: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb613: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb615: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb618: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb619: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb61eu); f_00686ede();
    /* 005fb61e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb621: jmp 0x5fb625 */ goto L_005fb625;
L_005fb623:; BB(0x005fb623);
    /* 005fb623: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb625:; BB(0x005fb625);
    /* 005fb625: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb627: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb628: ret 4 */ FN_RET(0x005fb5e0); r_esp += 8; return;
}

void f_005fb630(void) /* sub_5FB630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb630);
    /* 005fb630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb631: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb633: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb636: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb639: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb63c: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb642: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb645: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb646: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb649: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb64eu); f_005fb1b0();
    /* 005fb64e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb651: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb655: je 0x5fb673 */ if (fZ) goto L_005fb673;
L_005fb657:; BB(0x005fb657);
    /* 005fb657: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb659: push 0x705254 */ { u32 v = 0x705254u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb65e: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb663: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb665: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb669: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb66eu); f_00686ede();
    /* 005fb66e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb671: jmp 0x5fb675 */ goto L_005fb675;
L_005fb673:; BB(0x005fb673);
    /* 005fb673: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb675:; BB(0x005fb675);
    /* 005fb675: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb677: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb678: ret 4 */ FN_RET(0x005fb630); r_esp += 8; return;
}

void f_005fb720(void) /* sub_5FB720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb720);
    /* 005fb720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb721: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb723: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb726: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb729: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb72c: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb72f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb730: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb734: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb737: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb73cu); f_005fb1b0();
    /* 005fb73c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb73f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb743: je 0x5fb761 */ if (fZ) goto L_005fb761;
L_005fb745:; BB(0x005fb745);
    /* 005fb745: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb747: push 0x75ef78 */ { u32 v = 0x75ef78u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb74c: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb751: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb753: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb756: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb757: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb75cu); f_00686ede();
    /* 005fb75c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb75f: jmp 0x5fb763 */ goto L_005fb763;
L_005fb761:; BB(0x005fb761);
    /* 005fb761: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb763:; BB(0x005fb763);
    /* 005fb763: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb766: ret 4 */ FN_RET(0x005fb720); r_esp += 8; return;
}

void f_005fb7c0(void) /* sub_5FB7C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb7c0);
    /* 005fb7c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb7c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb7c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb7c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb7cc: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb7d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb7d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb7d9: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb7deu); f_005fb1b0();
    /* 005fb7de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb7e1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb7e5: je 0x5fb803 */ if (fZ) goto L_005fb803;
L_005fb7e7:; BB(0x005fb7e7);
    /* 005fb7e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7e9: push 0x75efb0 */ { u32 v = 0x75efb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7ee: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb7f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7f9: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb7feu); f_00686ede();
    /* 005fb7fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb801: jmp 0x5fb805 */ goto L_005fb805;
L_005fb803:; BB(0x005fb803);
    /* 005fb803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb805:; BB(0x005fb805);
    /* 005fb805: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb808: ret 4 */ FN_RET(0x005fb7c0); r_esp += 8; return;
}

void f_005fb810(void) /* sub_5FB810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb810);
    /* 005fb810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb811: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb813: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb816: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb819: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb81c: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb81f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb820: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb824: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb827: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb82cu); f_005fb1b0();
    /* 005fb82c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb82f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb833: je 0x5fb851 */ if (fZ) goto L_005fb851;
L_005fb835:; BB(0x005fb835);
    /* 005fb835: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb837: push 0x7138b4 */ { u32 v = 0x7138b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb83c: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb841: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb843: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb847: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb84cu); f_00686ede();
    /* 005fb84c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb84f: jmp 0x5fb853 */ goto L_005fb853;
L_005fb851:; BB(0x005fb851);
    /* 005fb851: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb853:; BB(0x005fb853);
    /* 005fb853: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb856: ret 4 */ FN_RET(0x005fb810); r_esp += 8; return;
}

void f_005fb860(void) /* sub_5FB860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb860);
    /* 005fb860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb861: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb863: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb866: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb869: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb86c: add eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb872: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fb875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb876: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb879: call 0x5fb1b0 */ r_esp -= 4; W32(r_esp, 0x5fb87eu); f_005fb1b0();
    /* 005fb87e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb881: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb885: je 0x5fb8a3 */ if (fZ) goto L_005fb8a3;
L_005fb887:; BB(0x005fb887);
    /* 005fb887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb889: push 0x75efcc */ { u32 v = 0x75efccu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb88e: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb895: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb898: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb899: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5fb89eu); f_00686ede();
    /* 005fb89e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb8a1: jmp 0x5fb8a5 */ goto L_005fb8a5;
L_005fb8a3:; BB(0x005fb8a3);
    /* 005fb8a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb8a5:; BB(0x005fb8a5);
    /* 005fb8a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb8a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb8a8: ret 4 */ FN_RET(0x005fb860); r_esp += 8; return;
}

void f_005fb8b0(void) /* sub_5FB8B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb8b0);
    /* 005fb8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb8b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb8b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb8b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb8bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb8bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb8c0: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x5fb8c5u); f_005fb810();
    /* 005fb8c5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb8c8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb8cc: je 0x5fb8e0 */ if (fZ) goto L_005fb8e0;
L_005fb8ce:; BB(0x005fb8ce);
    /* 005fb8ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb8d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fb8d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb8d6: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005fb8dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fb8deu); call_ind(t); }
    /* 005fb8de: jmp 0x5fb8e2 */ goto L_005fb8e2;
L_005fb8e0:; BB(0x005fb8e0);
    /* 005fb8e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005fb8e2:; BB(0x005fb8e2);
    /* 005fb8e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb8e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb8e5: ret 4 */ FN_RET(0x005fb8b0); r_esp += 8; return;
}

void f_005fb8f0(void) /* sub_5FB8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb8f0);
    /* 005fb8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb8f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb8f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fb8f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb8fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb900: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x5fb905u); f_005fb810();
    /* 005fb905: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fb908: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb90c: je 0x5fb922 */ if (fZ) goto L_005fb922;
L_005fb90e:; BB(0x005fb90e);
    /* 005fb90e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fb911: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb912: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb915: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fb917: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb91a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005fb920: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fb922u); call_ind(t); }
L_005fb922:; BB(0x005fb922);
    /* 005fb922: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb924: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb925: ret 8 */ FN_RET(0x005fb8f0); r_esp += 12; return;
}

void f_005fb930(void) /* sub_5FB930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb930);
    /* 005fb930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb931: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb933: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb936: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fb939: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fb940: jmp 0x5fb94b */ goto L_005fb94b;
L_005fb942:; BB(0x005fb942);
    /* 005fb942: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb945: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb948: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005fb94b:; BB(0x005fb94b);
    /* 005fb94b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fb94e: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5fb953u); f_0060c9a0();
    /* 005fb953: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fb956: jge 0x5fb9d6 */ if ((fS==fO)) goto L_005fb9d6;
L_005fb958:; BB(0x005fb958);
    /* 005fb958: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb95b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb95c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fb95f: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fb964u); f_0060ca40();
    /* 005fb964: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fb967: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb96a: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb96d: je 0x5fb982 */ if (fZ) goto L_005fb982;
L_005fb96f:; BB(0x005fb96f);
    /* 005fb96f: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb973: je 0x5fb9d1 */ if (fZ) goto L_005fb9d1;
L_005fb975:; BB(0x005fb975);
    /* 005fb975: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb978: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fb97du); f_005f5400();
    /* 005fb97d: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb980: jne 0x5fb9d1 */ if (!fZ) goto L_005fb9d1;
L_005fb982:; BB(0x005fb982);
    /* 005fb982: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb986: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fb989: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5fb98eu); f_0060c890();
    /* 005fb98e: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005fb992: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb994: je 0x5fb9cf */ if (fZ) goto L_005fb9cf;
L_005fb996:; BB(0x005fb996);
    /* 005fb996: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb999: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fb99b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb99e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005fb9a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fb9a3u); call_ind(t); }
    /* 005fb9a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fb9a6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fb9a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fb9ac: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fb9af: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb9b3: je 0x5fb9c8 */ if (fZ) goto L_005fb9c8;
L_005fb9b5:; BB(0x005fb9b5);
    /* 005fb9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9b7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb9ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fb9bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb9bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fb9c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fb9c3u); call_ind(t); }
    /* 005fb9c3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fb9c6: jmp 0x5fb9cf */ goto L_005fb9cf;
L_005fb9c8:; BB(0x005fb9c8);
    /* 005fb9c8: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005fb9cf:; BB(0x005fb9cf);
    /* 005fb9cf: jmp 0x5fb9d6 */ goto L_005fb9d6;
L_005fb9d1:; BB(0x005fb9d1);
    /* 005fb9d1: jmp 0x5fb942 */ goto L_005fb942;
L_005fb9d6:; BB(0x005fb9d6);
    /* 005fb9d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb9d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb9d9: ret 0x10 */ FN_RET(0x005fb930); r_esp += 20; return;
}

void f_005fb9e0(void) /* sub_5FB9E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb9e0);
    /* 005fb9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb9e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fb9e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb9ec: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9f0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fb9f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fb9f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb9fb: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fba00u); f_005fb930();
    /* 005fba00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba05: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fba08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fba09: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fba0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba0d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fba10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba14: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fba19u); f_005fb930();
    /* 005fba19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba1e: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fba21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fba22: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fba25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba26: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fba29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba2d: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fba32u); f_005fb930();
    /* 005fba32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba37: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fba3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fba3b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fba3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fba42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba46: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fba4bu); f_005fb930();
    /* 005fba4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba50: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fba53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fba54: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fba57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba58: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fba5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba5f: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fba64u); f_005fb930();
    /* 005fba64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba69: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fba6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fba6f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fba72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba73: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fba76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba7a: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fba7fu); f_005fb930();
    /* 005fba7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba84: add eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fba89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fba8a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fba8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba8e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fba91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba95: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fba9au); f_005fb930();
    /* 005fba9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fba9f: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbaa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbaa3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbaa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbaa7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbaaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbaab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbaae: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbab3u); f_005fb930();
    /* 005fbab3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbab5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbab8: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbabb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbabc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbabf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbac0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbac3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbac4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbac7: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbaccu); f_005fb930();
    /* 005fbacc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbace: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbad1: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbad7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbada: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbadb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbade: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbadf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbae2: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbae7u); f_005fb930();
    /* 005fbae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbae9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbaec: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbaf2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbaf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbaf6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbaf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbafa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbafd: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbb02u); f_005fb930();
    /* 005fbb02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb07: add eax, 0xa4 */ {  u32 a = r_eax; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbb0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb0d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbb10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb11: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbb14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb18: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbb1du); f_005fb930();
    /* 005fbb1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbb1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbb20: ret 8 */ FN_RET(0x005fb9e0); r_esp += 12; return;
}

void f_005fbb30(void) /* sub_5FBB30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbb30);
    /* 005fbb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb31: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbb33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbb37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb3c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbb3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb40: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbb43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb44: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbb47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb4b: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbb50u); f_005fb930();
    /* 005fbb50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb55: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb59: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbb5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbb60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb64: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbb69u); f_005fb930();
    /* 005fbb69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb6e: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbb71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb72: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbb75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb76: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbb79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb7d: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbb82u); f_005fb930();
    /* 005fbb82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb87: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbb8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb8b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbb8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb8f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbb92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbb96: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbb9bu); f_005fb930();
    /* 005fbb9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbba0: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbba4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbba7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbba8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbbab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbbaf: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbbb4u); f_005fb930();
    /* 005fbbb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbb6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbbb9: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbbbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbbf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbbc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbbc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbbca: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbbcfu); f_005fb930();
    /* 005fbbcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbd1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbbd4: add eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbbd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbda: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbbdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbde: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbbe1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbbe5: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbbeau); f_005fb930();
    /* 005fbbea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbbef: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbbf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbf3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbbf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbf7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbbfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbbfe: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbc03u); f_005fb930();
    /* 005fbc03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc08: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbc0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc0c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbc0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc10: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbc13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc17: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbc1cu); f_005fb930();
    /* 005fbc1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc21: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbc26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc27: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbc2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc2b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbc2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc32: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbc37u); f_005fb930();
    /* 005fbc37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc3c: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbc41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc42: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbc45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbc49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc4d: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbc52u); f_005fb930();
    /* 005fbc52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc57: add eax, 0xa4 */ {  u32 a = r_eax; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbc5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc5d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbc60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc61: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbc64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc68: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbc6du); f_005fb930();
    /* 005fbc6d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbc6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbc70: ret 8 */ FN_RET(0x005fbb30); r_esp += 12; return;
}

void f_005fbc80(void) /* sub_5FBC80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbc80);
    /* 005fbc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc81: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbc87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc8c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbc8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc90: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbc93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbc97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbc9b: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbca0u); f_005fb930();
    /* 005fbca0: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbca2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbca3: ret 8 */ FN_RET(0x005fbc80); r_esp += 12; return;
}

void f_005fbcb0(void) /* sub_5FBCB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbcb0);
    /* 005fbcb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbcb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbcb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbcbc: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcc0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbcc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbcc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbccb: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbcd0u); f_005fb930();
    /* 005fbcd0: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbcd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbcd3: ret 8 */ FN_RET(0x005fbcb0); r_esp += 12; return;
}

void f_005fbce0(void) /* sub_5FBCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbce0);
    /* 005fbce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbce7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbce9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbcec: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbcef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcf0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbcf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcf4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbcf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbcfb: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbd00u); f_005fb930();
    /* 005fbd00: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbd02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbd03: ret 8 */ FN_RET(0x005fbce0); r_esp += 12; return;
}

void f_005fbd10(void) /* sub_5FBD10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbd10);
    /* 005fbd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd11: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbd13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbd17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbd1c: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd20: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbd23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd24: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbd27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbd2b: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbd30u); f_005fb930();
    /* 005fbd30: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbd32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbd33: ret 8 */ FN_RET(0x005fbd10); r_esp += 12; return;
}

void f_005fbd40(void) /* sub_5FBD40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbd40);
    /* 005fbd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd41: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbd47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbd4c: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbd4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd50: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbd53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd54: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbd57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbd5b: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbd60u); f_005fb930();
    /* 005fbd60: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbd62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbd63: ret 8 */ FN_RET(0x005fbd40); r_esp += 12; return;
}

void f_005fbd70(void) /* sub_5FBD70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbd70);
    /* 005fbd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd71: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbd73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbd77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbd7c: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbd81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd82: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbd85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd86: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbd89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbd8d: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbd92u); f_005fb930();
    /* 005fbd92: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbd94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbd95: ret 8 */ FN_RET(0x005fbd70); r_esp += 12; return;
}

void f_005fbdd0(void) /* sub_5FBDD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbdd0);
    /* 005fbdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbdd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbdd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbdd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbdd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbdd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbddc: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbde0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbde4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbde7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbde8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbdeb: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbdf0u); f_005fb930();
    /* 005fbdf0: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbdf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbdf3: ret 8 */ FN_RET(0x005fbdd0); r_esp += 12; return;
}

void f_005fbe00(void) /* sub_5FBE00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbe00);
    /* 005fbe00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe01: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbe03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbe07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbe0c: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbe0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe10: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbe13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbe17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbe1b: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbe20u); f_005fb930();
    /* 005fbe20: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbe22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbe23: ret 8 */ FN_RET(0x005fbe00); r_esp += 12; return;
}

void f_005fbe30(void) /* sub_5FBE30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbe30);
    /* 005fbe30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe31: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbe33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbe37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbe3c: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbe41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe42: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbe45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbe49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbe4d: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbe52u); f_005fb930();
    /* 005fbe52: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbe54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbe55: ret 8 */ FN_RET(0x005fbe30); r_esp += 12; return;
}

void f_005fbe60(void) /* sub_5FBE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbe60);
    /* 005fbe60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe61: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbe63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbe67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbe6c: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbe71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe72: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbe75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe76: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbe79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbe7d: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbe82u); f_005fb930();
    /* 005fbe82: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbe84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbe85: ret 8 */ FN_RET(0x005fbe60); r_esp += 12; return;
}

void f_005fbe90(void) /* sub_5FBE90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbe90);
    /* 005fbe90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe91: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbe93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fbe97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbe9c: add eax, 0xa4 */ {  u32 a = r_eax; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fbea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbea2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fbea5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbea6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fbea9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbeaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fbead: call 0x5fb930 */ r_esp -= 4; W32(r_esp, 0x5fbeb2u); f_005fb930();
    /* 005fbeb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbeb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbeb5: ret 8 */ FN_RET(0x005fbe90); r_esp += 12; return;
}

