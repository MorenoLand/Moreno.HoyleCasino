#include "protos.h"

void f_005fa1e0(void) /* sub_5FA1E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fa1e0);
    /* 005fa1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa1e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1e5: push 0x6aa369 */ { u32 v = 0x6aa369u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1f1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa1f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa1f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa1fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa1ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa205: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fa208: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa20c: jne 0x5fa261 */ if (!fZ) goto L_005fa261;
L_005fa20e:; BB(0x005fa20e);
    /* 005fa20e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005fa215: jmp 0x5fa220 */ goto L_005fa220;
L_005fa217:; BB(0x005fa217);
    /* 005fa217: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa21a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa21d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005fa220:; BB(0x005fa220);
    /* 005fa220: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa223: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa226: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5fa22bu); f_0060c9a0();
    /* 005fa22b: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fa22e: jge 0x5fa261 */ if ((fS==fO)) goto L_005fa261;
L_005fa230:; BB(0x005fa230);
    /* 005fa230: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa234: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa237: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa23a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fa23fu); f_0060ca40();
    /* 005fa23f: mov ecx, eax */ r_ecx = r_eax;
    /* 005fa241: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fa246u); f_005f5400();
    /* 005fa246: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa249: jne 0x5fa25f */ if (!fZ) goto L_005fa25f;
L_005fa24b:; BB(0x005fa24b);
    /* 005fa24b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa24e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa24f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa252: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa255: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fa25au); f_0060ca40();
    /* 005fa25a: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005fa25d: jmp 0x5fa261 */ goto L_005fa261;
L_005fa25f:; BB(0x005fa25f);
    /* 005fa25f: jmp 0x5fa217 */ goto L_005fa217;
L_005fa261:; BB(0x005fa261);
    /* 005fa261: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa265: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa268: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa26b: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5fa270u); f_0060c9e0();
    /* 005fa270: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fa273: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa275: jne 0x5fa304 */ if (!fZ) goto L_005fa304;
L_005fa27b:; BB(0x005fa27b);
    /* 005fa27b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa27f: jne 0x5fa2c2 */ if (!fZ) goto L_005fa2c2;
L_005fa281:; BB(0x005fa281);
    /* 005fa281: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa283: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa288u); f_00686d82();
    /* 005fa288: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa28b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fa28e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa295: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa299: je 0x5fa2a8 */ if (fZ) goto L_005fa2a8;
L_005fa29b:; BB(0x005fa29b);
    /* 005fa29b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa29e: call 0x5ff8b0 */ r_esp -= 4; W32(r_esp, 0x5fa2a3u); f_005ff8b0();
    /* 005fa2a3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fa2a6: jmp 0x5fa2af */ goto L_005fa2af;
L_005fa2a8:; BB(0x005fa2a8);
    /* 005fa2a8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fa2af:; BB(0x005fa2af);
    /* 005fa2af: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fa2b2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005fa2b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa2bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa2bf: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005fa2c2:; BB(0x005fa2c2);
    /* 005fa2c2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa2c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa2c9: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa2cc: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fa2d1u); f_0060c840();
    /* 005fa2d1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa2d4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa2d7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005fa2da: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005fa2dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2de: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa2e1: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5fa2e6u); f_005f53e0();
    /* 005fa2e6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa2e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fa2eb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa2ee: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005fa2f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fa2f3u); call_ind(t); }
    /* 005fa2f3: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005fa2f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2f7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa2fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fa2fc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa2ff: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005fa302: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa304u); call_ind(t); }
L_005fa304:; BB(0x005fa304);
    /* 005fa304: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa308: jne 0x5fa34e */ if (!fZ) goto L_005fa34e;
L_005fa30a:; BB(0x005fa30a);
    /* 005fa30a: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa30f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa314u); f_00686d82();
    /* 005fa314: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa317: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fa31a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fa321: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa325: je 0x5fa334 */ if (fZ) goto L_005fa334;
L_005fa327:; BB(0x005fa327);
    /* 005fa327: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa32a: call 0x5ff310 */ r_esp -= 4; W32(r_esp, 0x5fa32fu); f_005ff310();
    /* 005fa32f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fa332: jmp 0x5fa33b */ goto L_005fa33b;
L_005fa334:; BB(0x005fa334);
    /* 005fa334: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005fa33b:; BB(0x005fa33b);
    /* 005fa33b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005fa33e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005fa341: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa348: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa34b: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005fa34e:; BB(0x005fa34e);
    /* 005fa34e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa352: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa355: call 0x5ff8f0 */ r_esp -= 4; W32(r_esp, 0x5fa35au); f_005ff8f0();
    /* 005fa35a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fa35d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa35e: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005fa361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa362: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005fa365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa366: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005fa369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa36a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005fa36d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa36e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa371: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5fa376u); f_005eae80();
    /* 005fa376: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005fa379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa37a: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 005fa37d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa37e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005fa381: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa382: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005fa385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa386: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005fa389: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa38a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa38d: call 0x5ff4c0 */ r_esp -= 4; W32(r_esp, 0x5fa392u); f_005ff4c0();
    /* 005fa392: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa395: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fa397: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa39a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005fa39d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fa39fu); call_ind(t); }
    /* 005fa39f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa3a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa3a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa3ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa3ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa3af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa3b0: ret 0x34 */ FN_RET(0x005fa1e0); r_esp += 56; return;
}

void f_005fa5b0(void) /* sub_5FA5B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fa5b0);
    /* 005fa5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa5b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa5b5: push 0x6aa3c0 */ { u32 v = 0x6aa3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa5ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa5c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa5c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa5c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa5c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa5cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa5cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa5cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa5d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fa5d8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa5dc: jne 0x5fa622 */ if (!fZ) goto L_005fa622;
L_005fa5de:; BB(0x005fa5de);
    /* 005fa5de: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa5e3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa5e8u); f_00686d82();
    /* 005fa5e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa5eb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fa5ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa5f5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa5f9: je 0x5fa608 */ if (fZ) goto L_005fa608;
L_005fa5fb:; BB(0x005fa5fb);
    /* 005fa5fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa5fe: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5fa603u); f_005ec5a0();
    /* 005fa603: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fa606: jmp 0x5fa60f */ goto L_005fa60f;
L_005fa608:; BB(0x005fa608);
    /* 005fa608: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fa60f:; BB(0x005fa60f);
    /* 005fa60f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa612: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fa615: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa61c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa61f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fa622:; BB(0x005fa622);
    /* 005fa622: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa625: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa626: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa629: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa62c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fa631u); f_0060c840();
    /* 005fa631: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa634: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa637: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fa63a: cmp dword ptr [ebp + 0x30], -1 */ {  u32 a = R32((u32)(r_ebp+0x30u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa63e: je 0x5fa64c */ if (fZ) goto L_005fa64c;
L_005fa640:; BB(0x005fa640);
    /* 005fa640: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005fa643: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa644: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa647: call 0x5ef3b0 */ r_esp -= 4; W32(r_esp, 0x5fa64cu); f_005ef3b0();
L_005fa64c:; BB(0x005fa64c);
    /* 005fa64c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa64f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa650: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 005fa653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa654: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005fa657: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa658: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005fa65b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa65c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005fa65f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa660: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005fa663: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa664: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005fa667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa668: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005fa66b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa66c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fa66f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa670: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa673: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5fa678u); f_005ec8f0();
    /* 005fa678: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa67b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fa67d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa680: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fa683: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa685u); call_ind(t); }
    /* 005fa685: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa68b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa692: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa693: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa696: ret 0x2c */ FN_RET(0x005fa5b0); r_esp += 48; return;
}

void f_005fa6a0(void) /* sub_5FA6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fa6a0);
    /* 005fa6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa6a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa6a5: push 0x6aa3e6 */ { u32 v = 0x6aa3e6u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa6aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa6b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa6b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa6b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa6bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa6bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa6c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fa6c8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa6cc: jne 0x5fa712 */ if (!fZ) goto L_005fa712;
L_005fa6ce:; BB(0x005fa6ce);
    /* 005fa6ce: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa6d3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa6d8u); f_00686d82();
    /* 005fa6d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa6db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fa6de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa6e5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa6e9: je 0x5fa6f8 */ if (fZ) goto L_005fa6f8;
L_005fa6eb:; BB(0x005fa6eb);
    /* 005fa6eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa6ee: call 0x60b4a0 */ r_esp -= 4; W32(r_esp, 0x5fa6f3u); f_0060b4a0();
    /* 005fa6f3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fa6f6: jmp 0x5fa6ff */ goto L_005fa6ff;
L_005fa6f8:; BB(0x005fa6f8);
    /* 005fa6f8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fa6ff:; BB(0x005fa6ff);
    /* 005fa6ff: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa702: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fa705: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa70c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa70f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fa712:; BB(0x005fa712);
    /* 005fa712: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa715: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa716: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa719: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa71c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fa721u); f_0060c840();
    /* 005fa721: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa724: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa727: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fa72a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa72d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa72e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 005fa731: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa732: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 005fa735: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa736: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005fa739: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa73a: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005fa73d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa73e: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005fa741: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa742: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005fa745: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa746: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005fa749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa74a: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005fa74d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa74e: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005fa751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa752: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fa755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa756: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fa759: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa75a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa75d: call 0x60be20 */ r_esp -= 4; W32(r_esp, 0x5fa762u); f_0060be20();
    /* 005fa762: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005fa765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa766: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa769: call 0x60c0f0 */ r_esp -= 4; W32(r_esp, 0x5fa76eu); f_0060c0f0();
    /* 005fa76e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa771: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fa773: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa776: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fa779: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa77bu); call_ind(t); }
    /* 005fa77b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa77e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa781: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa788: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa789: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa78b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa78c: ret 0x38 */ FN_RET(0x005fa6a0); r_esp += 60; return;
}

void f_005fa790(void) /* sub_5FA790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fa790);
    /* 005fa790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa791: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa793: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa795: push 0x6aa40c */ { u32 v = 0x6aa40cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa79a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa7a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa7a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa7a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa7a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa7ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa7ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa7af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa7b5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fa7b8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa7bc: jne 0x5fa7ff */ if (!fZ) goto L_005fa7ff;
L_005fa7be:; BB(0x005fa7be);
    /* 005fa7be: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa7c0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa7c5u); f_00686d82();
    /* 005fa7c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa7c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fa7cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa7d2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa7d6: je 0x5fa7e5 */ if (fZ) goto L_005fa7e5;
L_005fa7d8:; BB(0x005fa7d8);
    /* 005fa7d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa7db: call 0x625f10 */ r_esp -= 4; W32(r_esp, 0x5fa7e0u); f_00625f10();
    /* 005fa7e0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fa7e3: jmp 0x5fa7ec */ goto L_005fa7ec;
L_005fa7e5:; BB(0x005fa7e5);
    /* 005fa7e5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fa7ec:; BB(0x005fa7ec);
    /* 005fa7ec: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa7ef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fa7f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa7f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa7fc: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fa7ff:; BB(0x005fa7ff);
    /* 005fa7ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa803: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa806: add ecx, 0xa4 */ {  u32 a = r_ecx; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa80c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fa811u); f_0060c840();
    /* 005fa811: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa814: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa817: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fa81a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa81d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa81e: mov al, byte ptr [ebp + 0x44] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x44u))) & 0xffu);
    /* 005fa821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa822: mov cl, byte ptr [ebp + 0x40] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x40u))) & 0xffu);
    /* 005fa825: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa826: mov dl, byte ptr [ebp + 0x3c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x3cu))) & 0xffu);
    /* 005fa829: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa82a: mov al, byte ptr [ebp + 0x38] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x38u))) & 0xffu);
    /* 005fa82d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa82e: mov cl, byte ptr [ebp + 0x34] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x34u))) & 0xffu);
    /* 005fa831: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa832: mov dl, byte ptr [ebp + 0x30] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x30u))) & 0xffu);
    /* 005fa835: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa836: mov al, byte ptr [ebp + 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x2cu))) & 0xffu);
    /* 005fa839: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa83a: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005fa83d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa83e: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005fa841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa842: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005fa845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa846: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005fa849: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa84a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005fa84d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa84e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fa851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa852: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fa855: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa856: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa859: call 0x6260e0 */ r_esp -= 4; W32(r_esp, 0x5fa85eu); f_006260e0();
    /* 005fa85e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa861: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fa863: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa866: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005fa869: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fa86bu); call_ind(t); }
    /* 005fa86b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa86e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa871: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa878: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa879: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa87b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa87c: ret 0x40 */ FN_RET(0x005fa790); r_esp += 68; return;
}

void f_005fa880(void) /* sub_5FA880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fa880);
    /* 005fa880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa881: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa885: push 0x6aa432 */ { u32 v = 0x6aa432u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa88a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa891: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa894: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa899: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa89b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa89c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa89f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa8a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fa8a8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa8ac: jne 0x5fa8ef */ if (!fZ) goto L_005fa8ef;
L_005fa8ae:; BB(0x005fa8ae);
    /* 005fa8ae: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa8b0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa8b5u); f_00686d82();
    /* 005fa8b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa8b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fa8bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa8c2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa8c6: je 0x5fa8d5 */ if (fZ) goto L_005fa8d5;
L_005fa8c8:; BB(0x005fa8c8);
    /* 005fa8c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa8cb: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x5fa8d0u); f_005f6130();
    /* 005fa8d0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fa8d3: jmp 0x5fa8dc */ goto L_005fa8dc;
L_005fa8d5:; BB(0x005fa8d5);
    /* 005fa8d5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fa8dc:; BB(0x005fa8dc);
    /* 005fa8dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa8df: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fa8e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa8e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa8ec: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fa8ef:; BB(0x005fa8ef);
    /* 005fa8ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa8f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa8f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa8f6: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa8fc: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fa901u); f_0060c840();
    /* 005fa901: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa904: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa907: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fa90a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa90d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa90e: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005fa911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa912: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005fa915: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa916: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005fa919: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa91a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fa91d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa91e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fa921: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa922: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa925: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x5fa92au); f_005f61d0();
    /* 005fa92a: mov dl, byte ptr [ebp + 0x2c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x2cu))) & 0xffu);
    /* 005fa92d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa92e: mov al, byte ptr [ebp + 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 005fa931: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa932: mov cl, byte ptr [ebp + 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 005fa935: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa936: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa939: call 0x5f6490 */ r_esp -= 4; W32(r_esp, 0x5fa93eu); f_005f6490();
    /* 005fa93e: mov dl, byte ptr [ebp + 0x38] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x38u))) & 0xffu);
    /* 005fa941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa942: mov al, byte ptr [ebp + 0x34] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x34u))) & 0xffu);
    /* 005fa945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa946: mov cl, byte ptr [ebp + 0x30] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x30u))) & 0xffu);
    /* 005fa949: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa94a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa94d: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x5fa952u); f_005f6580();
    /* 005fa952: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa955: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fa957: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa95a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005fa95d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fa95fu); call_ind(t); }
    /* 005fa95f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa962: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa965: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa96c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa96d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa96f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa970: ret 0x34 */ FN_RET(0x005fa880); r_esp += 56; return;
}

void f_005fa980(void) /* sub_5FA980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fa980);
    /* 005fa980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa981: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa985: push 0x6aa458 */ { u32 v = 0x6aa458u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa98a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa991: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa994: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa999: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa99b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa99c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa99f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa9a5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005fa9a8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa9ac: jne 0x5fa9ef */ if (!fZ) goto L_005fa9ef;
L_005fa9ae:; BB(0x005fa9ae);
    /* 005fa9ae: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9b0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa9b5u); f_00686d82();
    /* 005fa9b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa9b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fa9bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa9c2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa9c6: je 0x5fa9d5 */ if (fZ) goto L_005fa9d5;
L_005fa9c8:; BB(0x005fa9c8);
    /* 005fa9c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa9cb: call 0x627090 */ r_esp -= 4; W32(r_esp, 0x5fa9d0u); f_00627090();
    /* 005fa9d0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fa9d3: jmp 0x5fa9dc */ goto L_005fa9dc;
L_005fa9d5:; BB(0x005fa9d5);
    /* 005fa9d5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005fa9dc:; BB(0x005fa9dc);
    /* 005fa9dc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa9df: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fa9e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa9e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa9ec: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fa9ef:; BB(0x005fa9ef);
    /* 005fa9ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa9f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9f3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa9f6: add ecx, 0xc4 */ {  u32 a = r_ecx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa9fc: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5faa01u); f_0060c840();
    /* 005faa01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faa04: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005faa07: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005faa0a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005faa0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa0e: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005faa11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faa12: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005faa15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa16: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005faa19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa1a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005faa1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faa1e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005faa21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa22: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005faa25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005faa27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faa2a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005faa30: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5faa32u); call_ind(t); }
    /* 005faa32: mov al, byte ptr [ebp + 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x2cu))) & 0xffu);
    /* 005faa35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faa36: mov cl, byte ptr [ebp + 0x28] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 005faa39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa3a: mov dl, byte ptr [ebp + 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 005faa3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa3e: lea eax, [ebp - 0x17] */ r_eax = (u32)(r_ebp+0xffffffe9u);
    /* 005faa41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faa42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faa45: call 0x627520 */ r_esp -= 4; W32(r_esp, 0x5faa4au); f_00627520();
    /* 005faa4a: mov cl, byte ptr [ebp + 0x30] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x30u))) & 0xffu);
    /* 005faa4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faa51: call 0x627620 */ r_esp -= 4; W32(r_esp, 0x5faa56u); f_00627620();
    /* 005faa56: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 005faa59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faa5d: call 0x627680 */ r_esp -= 4; W32(r_esp, 0x5faa62u); f_00627680();
    /* 005faa62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faa65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005faa67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faa6a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005faa6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5faa6fu); call_ind(t); }
    /* 005faa6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faa72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005faa75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005faa7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005faa7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005faa7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005faa80: ret 0x30 */ FN_RET(0x005fa980); r_esp += 52; return;
}

void f_005faa90(void) /* sub_5FAA90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005faa90);
    /* 005faa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005faa91: mov ebp, esp */ r_ebp = r_esp;
    /* 005faa93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005faa95: push 0x6aa47e */ { u32 v = 0x6aa47eu; r_esp -= 4; W32(r_esp, v); }
    /* 005faa9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005faaa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faaa1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005faaa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005faaa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005faaab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faaac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005faaaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005faab5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005faab8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faabc: jne 0x5fab02 */ if (!fZ) goto L_005fab02;
L_005faabe:; BB(0x005faabe);
    /* 005faabe: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 005faac3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5faac8u); f_00686d82();
    /* 005faac8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005faacb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005faace: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005faad5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faad9: je 0x5faae8 */ if (fZ) goto L_005faae8;
L_005faadb:; BB(0x005faadb);
    /* 005faadb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005faade: call 0x604b80 */ r_esp -= 4; W32(r_esp, 0x5faae3u); f_00604b80();
    /* 005faae3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005faae6: jmp 0x5faaef */ goto L_005faaef;
L_005faae8:; BB(0x005faae8);
    /* 005faae8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005faaef:; BB(0x005faaef);
    /* 005faaef: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005faaf2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005faaf5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005faafc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005faaff: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fab02:; BB(0x005fab02);
    /* 005fab02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fab05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab06: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fab09: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fab0f: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fab14u); f_0060c840();
    /* 005fab14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fab17: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fab1a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fab1d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fab20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab21: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005fab24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab25: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 005fab28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab29: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005fab2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab2d: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005fab30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab31: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005fab34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab35: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005fab38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab39: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005fab3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab3d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005fab40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab41: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005fab44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab45: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fab48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab49: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005fab4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fab50: call 0x604d80 */ r_esp -= 4; W32(r_esp, 0x5fab55u); f_00604d80();
    /* 005fab55: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fab58: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fab5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fab5d: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005fab60: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fab62u); call_ind(t); }
    /* 005fab62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fab65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fab68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fab6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fab70: mov esp, ebp */ r_esp = r_ebp;
    /* 005fab72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fab73: ret 0x34 */ FN_RET(0x005faa90); r_esp += 56; return;
}

void f_005fab80(void) /* sub_5FAB80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fab80);
    /* 005fab80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fab81: mov ebp, esp */ r_ebp = r_esp;
    /* 005fab83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fab85: push 0x6aa4a4 */ { u32 v = 0x6aa4a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fab8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fab90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab91: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fab94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fab99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fab9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fab9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005faba5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005faba8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fabac: jne 0x5fabef */ if (!fZ) goto L_005fabef;
L_005fabae:; BB(0x005fabae);
    /* 005fabae: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005fabb0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fabb5u); f_00686d82();
    /* 005fabb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fabb8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fabbb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fabc2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fabc6: je 0x5fabd5 */ if (fZ) goto L_005fabd5;
L_005fabc8:; BB(0x005fabc8);
    /* 005fabc8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fabcb: call 0x614810 */ r_esp -= 4; W32(r_esp, 0x5fabd0u); f_00614810();
    /* 005fabd0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fabd3: jmp 0x5fabdc */ goto L_005fabdc;
L_005fabd5:; BB(0x005fabd5);
    /* 005fabd5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fabdc:; BB(0x005fabdc);
    /* 005fabdc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fabdf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fabe2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fabe9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fabec: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fabef:; BB(0x005fabef);
    /* 005fabef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fabf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fabf3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fabf6: add ecx, 0xd4 */ {  u32 a = r_ecx; u32 b = 0xd4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fabfc: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fac01u); f_0060c840();
    /* 005fac01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fac04: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fac07: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fac0a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fac0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac0e: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 005fac11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac12: mov ecx, dword ptr [ebp + 0x54] */ r_ecx = R32((u32)(r_ebp+0x54u));
    /* 005fac15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac16: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 005fac19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac1a: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 005fac1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac1e: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 005fac21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac22: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 005fac25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac26: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005fac29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac2a: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 005fac2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac2e: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005fac31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac32: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 005fac35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac36: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005fac39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac3a: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 005fac3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac3e: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005fac41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac42: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005fac45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac46: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005fac49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac4a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005fac4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac4e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005fac51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac52: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005fac55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac56: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fac59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fac5d: call 0x614b60 */ r_esp -= 4; W32(r_esp, 0x5fac62u); f_00614b60();
    /* 005fac62: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fac65: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fac67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fac6a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fac6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fac6fu); call_ind(t); }
    /* 005fac6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fac72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fac75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fac7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fac7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fac7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fac80: ret 0x54 */ FN_RET(0x005fab80); r_esp += 88; return;
}

void f_005fac90(void) /* sub_5FAC90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fac90);
    /* 005fac90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fac91: mov ebp, esp */ r_ebp = r_esp;
    /* 005fac93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fac95: push 0x6aa4ca */ { u32 v = 0x6aa4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005fac9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005faca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faca1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005faca4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005faca9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005facab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005facac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005facaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005facb5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005facb8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005facbc: jne 0x5fad02 */ if (!fZ) goto L_005fad02;
L_005facbe:; BB(0x005facbe);
    /* 005facbe: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005facc3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5facc8u); f_00686d82();
    /* 005facc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005faccb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005facce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005facd5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005facd9: je 0x5face8 */ if (fZ) goto L_005face8;
L_005facdb:; BB(0x005facdb);
    /* 005facdb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005facde: call 0x6280d0 */ r_esp -= 4; W32(r_esp, 0x5face3u); f_006280d0();
    /* 005face3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005face6: jmp 0x5facef */ goto L_005facef;
L_005face8:; BB(0x005face8);
    /* 005face8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005facef:; BB(0x005facef);
    /* 005facef: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005facf2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005facf5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005facfc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005facff: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fad02:; BB(0x005fad02);
    /* 005fad02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fad05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad06: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fad09: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fad0c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fad11u); f_0060c840();
    /* 005fad11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fad14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fad17: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fad1a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fad1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad1e: mov eax, dword ptr [ebp + 0x88] */ r_eax = R32((u32)(r_ebp+0x88u));
    /* 005fad24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad25: mov cl, byte ptr [ebp + 0x84] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x84u))) & 0xffu);
    /* 005fad2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad2c: mov dl, byte ptr [ebp + 0x80] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x80u))) & 0xffu);
    /* 005fad32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad33: mov al, byte ptr [ebp + 0x7c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x7cu))) & 0xffu);
    /* 005fad36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad37: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 005fad3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad3b: mov edx, dword ptr [ebp + 0x74] */ r_edx = R32((u32)(r_ebp+0x74u));
    /* 005fad3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad3f: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 005fad42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad43: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 005fad46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad47: mov edx, dword ptr [ebp + 0x68] */ r_edx = R32((u32)(r_ebp+0x68u));
    /* 005fad4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad4b: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 005fad4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad4f: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005fad52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad53: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 005fad56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad57: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 005fad5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad5b: mov ecx, dword ptr [ebp + 0x54] */ r_ecx = R32((u32)(r_ebp+0x54u));
    /* 005fad5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad5f: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 005fad62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad63: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 005fad66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad67: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 005fad6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad6b: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 005fad6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad6f: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005fad72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad73: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 005fad76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad77: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005fad7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad7b: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 005fad7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad7f: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005fad82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad83: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 005fad86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad87: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005fad8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad8b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005fad8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad8f: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005fad92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad93: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005fad96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fad97: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005fad9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad9b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005fad9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad9f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fada2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fada3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fada6: call 0x628540 */ r_esp -= 4; W32(r_esp, 0x5fadabu); f_00628540();
    /* 005fadab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fadae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fadb0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fadb3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fadb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fadb8u); call_ind(t); }
    /* 005fadb8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fadbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fadbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fadc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fadc6: mov esp, ebp */ r_esp = r_ebp;
    /* 005fadc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fadc9: ret 0x84 */ FN_RET(0x005fac90); r_esp += 136; return;
}

void f_005fadd0(void) /* sub_5FADD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fadd0);
    /* 005fadd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fadd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fadd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fadd5: push 0x6aa4f0 */ { u32 v = 0x6aa4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fadda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fade0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fade1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fade4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fade9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fadeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fadec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fadef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fadf5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fadf8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fadfc: jne 0x5fae3f */ if (!fZ) goto L_005fae3f;
L_005fadfe:; BB(0x005fadfe);
    /* 005fadfe: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005fae00: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fae05u); f_00686d82();
    /* 005fae05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fae08: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fae0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fae12: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fae16: je 0x5fae25 */ if (fZ) goto L_005fae25;
L_005fae18:; BB(0x005fae18);
    /* 005fae18: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fae1b: call 0x629e40 */ r_esp -= 4; W32(r_esp, 0x5fae20u); f_00629e40();
    /* 005fae20: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fae23: jmp 0x5fae2c */ goto L_005fae2c;
L_005fae25:; BB(0x005fae25);
    /* 005fae25: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fae2c:; BB(0x005fae2c);
    /* 005fae2c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fae2f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fae32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fae39: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fae3c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fae3f:; BB(0x005fae3f);
    /* 005fae3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fae42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae43: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fae46: add ecx, 0x84 */ {  u32 a = r_ecx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fae4c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fae51u); f_0060c840();
    /* 005fae51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fae54: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fae57: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fae5a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fae5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae5e: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 005fae61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fae62: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 005fae65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae66: mov edx, dword ptr [ebp + 0x58] */ r_edx = R32((u32)(r_ebp+0x58u));
    /* 005fae69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae6a: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 005fae6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fae6e: mov ecx, dword ptr [ebp + 0x50] */ r_ecx = R32((u32)(r_ebp+0x50u));
    /* 005fae71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae72: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 005fae75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae76: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 005fae79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fae7a: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 005fae7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae7e: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 005fae81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae82: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 005fae85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fae86: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 005fae89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae8a: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 005fae8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae8e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005fae91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fae92: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 005fae95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae96: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005fae99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fae9a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005fae9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fae9e: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005faea1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faea2: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005faea5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faea6: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005faea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faeaa: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005faead: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faeae: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005faeb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faeb2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faeb5: call 0x62a070 */ r_esp -= 4; W32(r_esp, 0x5faebau); f_0062a070();
    /* 005faeba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faebd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005faebf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faec2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005faec5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5faec7u); call_ind(t); }
    /* 005faec7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faeca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005faecd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005faed4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005faed5: mov esp, ebp */ r_esp = r_ebp;
    /* 005faed7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005faed8: ret 0x5c */ FN_RET(0x005fadd0); r_esp += 96; return;
}

void f_005faee0(void) /* sub_5FAEE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005faee0);
    /* 005faee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005faee1: mov ebp, esp */ r_ebp = r_esp;
    /* 005faee3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005faee5: push 0x6aa516 */ { u32 v = 0x6aa516u; r_esp -= 4; W32(r_esp, v); }
    /* 005faeea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005faef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faef1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005faef4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005faef9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005faefb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faefc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005faeff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005faf05: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005faf08: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faf0c: jne 0x5faf5e */ if (!fZ) goto L_005faf5e;
L_005faf0e:; BB(0x005faf0e);
    /* 005faf0e: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005faf13: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5faf18u); f_00686d82();
    /* 005faf18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005faf1b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005faf1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005faf25: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faf29: je 0x5faf44 */ if (fZ) goto L_005faf44;
L_005faf2b:; BB(0x005faf2b);
    /* 005faf2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005faf2d: mov al, byte ptr [ebp + 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 005faf30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faf31: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005faf33: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005faf36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faf37: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005faf3a: call 0x605b90 */ r_esp -= 4; W32(r_esp, 0x5faf3fu); f_00605b90();
    /* 005faf3f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005faf42: jmp 0x5faf4b */ goto L_005faf4b;
L_005faf44:; BB(0x005faf44);
    /* 005faf44: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005faf4b:; BB(0x005faf4b);
    /* 005faf4b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005faf4e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005faf51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005faf58: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005faf5b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005faf5e:; BB(0x005faf5e);
    /* 005faf5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faf61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faf62: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005faf65: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005faf6b: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5faf70u); f_0060c840();
    /* 005faf70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005faf73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005faf76: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005faf79: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005faf7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faf7d: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005faf80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faf81: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005faf84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faf85: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005faf88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005faf89: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005faf8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005faf8d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005faf90: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5faf95u); f_005eae80();
    /* 005faf95: cmp dword ptr [ebp + 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0x2cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faf99: je 0x5fafc3 */ if (fZ) goto L_005fafc3;
L_005faf9b:; BB(0x005faf9b);
    /* 005faf9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005faf9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005faf9f: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005fafa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fafa3: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 005fafa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fafa7: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005fafaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fafab: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005fafae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fafaf: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005fafb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fafb3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fafb6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fafb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fafbb: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005fafc1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fafc3u); call_ind(t); }
L_005fafc3:; BB(0x005fafc3);
    /* 005fafc3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fafc6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fafc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fafcb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fafce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fafd0u); call_ind(t); }
    /* 005fafd0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fafd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fafd6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fafdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fafde: mov esp, ebp */ r_esp = r_ebp;
    /* 005fafe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fafe1: ret 0x34 */ FN_RET(0x005faee0); r_esp += 56; return;
}

