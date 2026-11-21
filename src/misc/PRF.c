#include "protos.h"

void f_0062af50(void) /* PRF::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062af50);
    /* 0062af50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062af51: mov ebp, esp */ r_ebp = r_esp;
    /* 0062af53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062af54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062af57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af5a: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x62af5fu); f_0062aea0();
    /* 0062af5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af62: mov dword ptr [eax], 0x6d970c */ W32((u32)(r_eax), 0x6d970cu);
    /* 0062af68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af6b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0062af72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af75: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0062af7c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af7f: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0062af86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af89: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0062af90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af93: mov byte ptr [edx + 0x18], 0 */ W8((u32)(r_edx+0x18u), 0x0u);
    /* 0062af97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062af9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062af9d: ret  */ FN_RET(0x0062af50); r_esp += 4; return;
}

void f_0062afa0(void) /* PRF::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062afa0);
    /* 0062afa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062afa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062afa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062afa5: push 0x6ab718 */ { u32 v = 0x6ab718u; r_esp -= 4; W32(r_esp, v); }
    /* 0062afaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062afb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062afb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062afb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062afb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062afbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062afbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062afbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062afc5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0062afc8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062afcb: mov dword ptr [eax], 0x6d970c */ W32((u32)(r_eax), 0x6d970cu);
    /* 0062afd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062afd8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062afdb: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062afdf: je 0x62aff1 */ if (fZ) goto L_0062aff1;
L_0062afe1:; BB(0x0062afe1);
    /* 0062afe1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062afe4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062afe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062afe8: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x62afeeu); call_ind(t); }
    /* 0062afee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062aff1:; BB(0x0062aff1);
    /* 0062aff1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062aff4: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aff8: je 0x62b00f */ if (fZ) goto L_0062b00f;
L_0062affa:; BB(0x0062affa);
    /* 0062affa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062affd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062b000: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062b003: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062b006: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b007: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62b00cu); f_00686cae();
    /* 0062b00c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b00f:; BB(0x0062b00f);
    /* 0062b00f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062b012: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b016: je 0x62b033 */ if (fZ) goto L_0062b033;
L_0062b018:; BB(0x0062b018);
    /* 0062b018: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062b01b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062b01e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062b021: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b024: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0062b027: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b02a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b02b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62b030u); f_00686cae();
    /* 0062b030: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b033:; BB(0x0062b033);
    /* 0062b033: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062b03a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062b03d: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x62b042u); f_0062aef0();
    /* 0062b042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b04c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062b04d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b04f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b050: ret  */ FN_RET(0x0062afa0); r_esp += 4; return;
}

void f_0062b220(void) /* prf::func_0062b220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b220);
    /* 0062b220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b221: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b223: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b226: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0062b229: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062b230: mov word ptr [ebp - 0x34], 0 */ W16((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0062b236: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0062b239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b23a: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0062b23d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b23e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062b241: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b242: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062b245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b246: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0062b249: call 0x62b430 */ r_esp -= 4; W32(r_esp, 0x62b24eu); f_0062b430();
    /* 0062b24e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062b251: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b255: je 0x62b410 */ if (fZ) goto L_0062b410;
L_0062b25b:; BB(0x0062b25b);
    /* 0062b25b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062b25e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b261: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062b263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b265: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b269: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b26c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b26d: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62b273u); call_ind(t); }
    /* 0062b273: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b276: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0062b279: cmp dword ptr [edx + 8], 1 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b27d: jne 0x62b2d3 */ if (!fZ) goto L_0062b2d3;
L_0062b27f:; BB(0x0062b27f);
    /* 0062b27f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b283: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b285: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b287: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0062b28a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b28b: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62b291u); call_ind(t); }
    /* 0062b291: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b294: mov edx, dword ptr [ebp - 0x2a] */ r_edx = R32((u32)(r_ebp+0xffffffd6u));
    /* 0062b297: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b29a: je 0x62b2b3 */ if (fZ) goto L_0062b2b3;
L_0062b29c:; BB(0x0062b29c);
    /* 0062b29c: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2a1: push 0x6d974c */ { u32 v = 0x6d974cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2a6: push 0x6d9720 */ { u32 v = 0x6d9720u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2ab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62b2b0u); f_005e9f20();
    /* 0062b2b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b2b3:; BB(0x0062b2b3);
    /* 0062b2b3: mov ecx, dword ptr [ebp - 0x26] */ r_ecx = R32((u32)(r_ebp+0xffffffdau));
    /* 0062b2b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062b2b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2bb: movzx edx, word ptr [ebp - 0x22] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffdeu));
    /* 0062b2bf: movzx eax, word ptr [ebp - 0x20] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe0u));
    /* 0062b2c3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b2c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b2c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2ca: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62b2d0u); call_ind(t); }
    /* 0062b2d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b2d3:; BB(0x0062b2d3);
    /* 0062b2d3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0062b2d6: cmp dword ptr [edx + 8], 1 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b2da: jne 0x62b2e4 */ if (!fZ) goto L_0062b2e4;
L_0062b2dc:; BB(0x0062b2dc);
    /* 0062b2dc: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 0062b2e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b2e2: jne 0x62b32a */ if (!fZ) goto L_0062b32a;
L_0062b2e4:; BB(0x0062b2e4);
    /* 0062b2e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b2e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b2e8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62b2edu); f_00686d82();
    /* 0062b2ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b2f0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0062b2f3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062b2f6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062b2f9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062b2fb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062b2fe: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b301: jne 0x62b30a */ if (!fZ) goto L_0062b30a;
L_0062b303:; BB(0x0062b303);
    /* 0062b303: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062b305: jmp 0x62b41b */ goto L_0062b41b;
L_0062b30a:; BB(0x0062b30a);
    /* 0062b30a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b30d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b30e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b310: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b313: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b314: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062b317: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062b319: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b31a: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62b320u); call_ind(t); }
    /* 0062b320: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b323: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062b325: jmp 0x62b41b */ goto L_0062b41b;
L_0062b32a:; BB(0x0062b32a);
    /* 0062b32a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b32d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b32e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62b333u); f_00686d82();
    /* 0062b333: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b336: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0062b339: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062b33c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0062b33f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062b341: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b344: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b348: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62b34du); f_00686d82();
    /* 0062b34d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b350: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0062b353: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0062b356: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0062b359: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b35c: mov byte ptr [edx], 0x78 */ W8((u32)(r_edx), 0x78u);
    /* 0062b35f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b362: mov byte ptr [eax + 1], 0x9c */ W8((u32)(r_eax+0x1u), 0x9cu);
    /* 0062b366: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b36a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b36c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b36f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b370: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b373: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b377: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62b37du); call_ind(t); }
    /* 0062b37d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b380: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b383: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b386: mov byte ptr [ecx + 2], 0 */ W8((u32)(r_ecx+0x2u), 0x0u);
    /* 0062b38a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b38d: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b390: mov byte ptr [edx + 3], 0 */ W8((u32)(r_edx+0x3u), 0x0u);
    /* 0062b394: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b397: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b39a: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0062b39e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b3a1: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b3a4: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 0062b3a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b3ab: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b3ae: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062b3b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b3b4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062b3b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b3ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3bb: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b3be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3bf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062b3c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3c3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062b3c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062b3c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3c9: call 0x62ccf0 */ r_esp -= 4; W32(r_esp, 0x62b3ceu); f_0062ccf0();
    /* 0062b3ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b3d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062b3d4: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062b3d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b3da: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062b3dc: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062b3df: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0062b3e2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0062b3e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b3e6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62b3ebu); f_00686cae();
    /* 0062b3eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b3ee: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b3f2: je 0x62b40c */ if (fZ) goto L_0062b40c;
L_0062b3f4:; BB(0x0062b3f4);
    /* 0062b3f4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062b3f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062b3f9: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0062b3fc: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0062b3ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b400: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62b405u); f_00686cae();
    /* 0062b405: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b408: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062b40a: jmp 0x62b41b */ goto L_0062b41b;
L_0062b40c:; BB(0x0062b40c);
    /* 0062b40c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062b40e: jmp 0x62b41b */ goto L_0062b41b;
L_0062b410:; BB(0x0062b410);
    /* 0062b410: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062b413: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0062b419: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062b41b:; BB(0x0062b41b);
    /* 0062b41b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b41d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b41e: ret 0x10 */ FN_RET(0x0062b220); r_esp += 20; return;
}

void f_0062b6a0(void) /* prf::func_0062b6a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b6a0);
    /* 0062b6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b6a3: sub esp, 0x36c */ {  u32 a = r_esp; u32 b = 0x36cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b6a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062b6ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b6b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062b6b3: mov dword ptr [ebp - 0x368], ecx */ W32((u32)(r_ebp+0xfffffc98u), r_ecx);
    /* 0062b6b9: mov eax, dword ptr [ebp - 0x368] */ r_eax = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b6bf: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b6c3: jne 0x62b6cc */ if (!fZ) goto L_0062b6cc;
L_0062b6c5:; BB(0x0062b6c5);
    /* 0062b6c5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062b6c7: jmp 0x62ba3c */ goto L_0062ba3c;
L_0062b6cc:; BB(0x0062b6cc);
    /* 0062b6cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6d0: mov ecx, dword ptr [ebp - 0x368] */ r_ecx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b6d6: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062b6d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6da: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62b6e0u); call_ind(t); }
    /* 0062b6e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b6e3: mov eax, dword ptr [ebp - 0x368] */ r_eax = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b6e9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062b6ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6ed: call dword ptr [0x6b21a8] */ { u32 t = R32((u32)(0x6b21a8u)); r_esp -= 4; W32(r_esp, 0x62b6f3u); call_ind(t); }
    /* 0062b6f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b6f6: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0062b6fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b6fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b700: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b706: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062b709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b70a: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62b710u); call_ind(t); }
    /* 0062b710: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b713: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b715: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0062b71b: sub ecx, 0x16 */ {  u32 a = r_ecx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b71e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b71f: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b725: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062b728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b729: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62b72fu); call_ind(t); }
    /* 0062b72f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b732: mov ecx, dword ptr [ebp - 0x368] */ r_ecx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b738: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062b73b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b73c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0062b73e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b740: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0062b743: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b744: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62b74au); call_ind(t); }
    /* 0062b74a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b74d: movzx ecx, word ptr [ebp - 0x12] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffeeu));
    /* 0062b751: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b754: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062b757: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b75a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b75b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62b760u); f_00686d82();
    /* 0062b760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b763: mov dword ptr [ebp - 0x35c], eax */ W32((u32)(r_ebp+0xfffffca4u), r_eax);
    /* 0062b769: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b76f: mov eax, dword ptr [ebp - 0x35c] */ r_eax = R32((u32)(r_ebp+0xfffffca4u));
    /* 0062b775: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0062b778: movzx ecx, word ptr [ebp - 0x12] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffeeu));
    /* 0062b77c: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b782: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062b785: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062b787: mov ecx, dword ptr [ebp - 0x368] */ r_ecx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b78d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062b790: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0062b797: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b79a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b79b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62b7a0u); f_00686d82();
    /* 0062b7a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b7a3: mov dword ptr [ebp - 0x360], eax */ W32((u32)(r_ebp+0xfffffca0u), r_eax);
    /* 0062b7a9: mov ecx, dword ptr [ebp - 0x360] */ r_ecx = R32((u32)(r_ebp+0xfffffca0u));
    /* 0062b7af: mov dword ptr [ebp - 0x248], ecx */ W32((u32)(r_ebp+0xfffffdb8u), r_ecx);
    /* 0062b7b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7b7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b7ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7bb: mov eax, dword ptr [ebp - 0x368] */ r_eax = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b7c1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062b7c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7c5: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62b7cbu); call_ind(t); }
    /* 0062b7cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b7ce: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b7d4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062b7d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b7db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7de: mov edx, dword ptr [ebp - 0x248] */ r_edx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0062b7e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b7e5: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62b7ebu); call_ind(t); }
    /* 0062b7eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b7ee: mov eax, dword ptr [ebp - 0x248] */ r_eax = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0062b7f4: mov dword ptr [ebp - 0x244], eax */ W32((u32)(r_ebp+0xfffffdbcu), r_eax);
    /* 0062b7fa: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0062b801: jmp 0x62b80c */ goto L_0062b80c;
L_0062b803:; BB(0x0062b803);
    /* 0062b803: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b806: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b809: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0062b80c:; BB(0x0062b80c);
    /* 0062b80c: movzx edx, word ptr [ebp - 0x12] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffeeu));
    /* 0062b810: cmp dword ptr [ebp - 0x20], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b813: jge 0x62ba1f */ if ((fS==fO)) goto L_0062ba1f;
L_0062b819:; BB(0x0062b819);
    /* 0062b819: mov eax, dword ptr [ebp - 0x244] */ r_eax = R32((u32)(r_ebp+0xfffffdbcu));
    /* 0062b81f: mov dword ptr [ebp - 0x24c], eax */ W32((u32)(r_ebp+0xfffffdb4u), r_eax);
    /* 0062b825: mov ecx, dword ptr [ebp - 0x244] */ r_ecx = R32((u32)(r_ebp+0xfffffdbcu));
    /* 0062b82b: add ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b82e: mov dword ptr [ebp - 0x244], ecx */ W32((u32)(r_ebp+0xfffffdbcu), r_ecx);
    /* 0062b834: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062b83a: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0062b83e: cmp eax, 0x104 */ {  u32 a = r_eax; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b843: jl 0x62b869 */ if ((fS!=fO)) goto L_0062b869;
L_0062b845:; BB(0x0062b845);
    /* 0062b845: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062b847: jne 0x62b860 */ if (!fZ) goto L_0062b860;
L_0062b849:; BB(0x0062b849);
    /* 0062b849: push 0x153 */ { u32 v = 0x153u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b84e: push 0x6d974c */ { u32 v = 0x6d974cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b853: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b858: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62b85du); f_005e9f20();
    /* 0062b85d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b860:; BB(0x0062b860);
    /* 0062b860: mov byte ptr [ebp - 0x358], 0 */ W8((u32)(r_ebp+0xfffffca8u), 0x0u);
    /* 0062b867: jmp 0x62b89d */ goto L_0062b89d;
L_0062b869:; BB(0x0062b869);
    /* 0062b869: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062b86f: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0062b873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b874: mov edx, dword ptr [ebp - 0x244] */ r_edx = R32((u32)(r_ebp+0xfffffdbcu));
    /* 0062b87a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b87b: lea eax, [ebp - 0x358] */ r_eax = (u32)(r_ebp+0xfffffca8u);
    /* 0062b881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b882: call dword ptr [0x6b22c0] */ { u32 t = R32((u32)(0x6b22c0u)); r_esp -= 4; W32(r_esp, 0x62b888u); call_ind(t); }
    /* 0062b888: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b88b: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062b891: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0062b895: mov byte ptr [ebp + edx - 0x358], 0 */ W8((u32)(r_ebp+r_edx+0xfffffca8u), 0x0u);
L_0062b89d:; BB(0x0062b89d);
    /* 0062b89d: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062b8a3: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0062b8a7: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062b8ad: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 0062b8b1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b8b3: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062b8b9: movzx eax, word ptr [edx + 0x20] */ r_eax = (u32)R16((u32)(r_edx+0x20u));
    /* 0062b8bd: add eax, dword ptr [ebp - 0x244] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdbcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b8c3: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b8c5: mov dword ptr [ebp - 0x244], eax */ W32((u32)(r_ebp+0xfffffdbcu), r_eax);
    /* 0062b8cb: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 0062b8d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8d2: lea edx, [ebp - 0x130] */ r_edx = (u32)(r_ebp+0xfffffed0u);
    /* 0062b8d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8dd: lea eax, [ebp - 0x358] */ r_eax = (u32)(r_ebp+0xfffffca8u);
    /* 0062b8e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8e4: call dword ptr [0x6b2314] */ { u32 t = R32((u32)(0x6b2314u)); r_esp -= 4; W32(r_esp, 0x62b8eau); call_ind(t); }
    /* 0062b8ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b8ed: lea ecx, [ebp - 0x130] */ r_ecx = (u32)(r_ebp+0xfffffed0u);
    /* 0062b8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b8f4: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x62b8fau); call_ind(t); }
    /* 0062b8fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b8fd: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0062b903: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 0062b909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b90a: call dword ptr [0x6b21e0] */ { u32 t = R32((u32)(0x6b21e0u)); r_esp -= 4; W32(r_esp, 0x62b910u); call_ind(t); }
    /* 0062b910: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b913: cmp dword ptr [ebp - 0x138], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b91a: je 0x62b930 */ if (fZ) goto L_0062b930;
L_0062b91c:; BB(0x0062b91c);
    /* 0062b91c: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 0062b922: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b923: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b928u); f_00686ecc();
    /* 0062b928: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b92b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b92e: jae 0x62b95e */ if (!fC) goto L_0062b95e;
L_0062b930:; BB(0x0062b930);
    /* 0062b930: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062b932: jne 0x62b94b */ if (!fZ) goto L_0062b94b;
L_0062b934:; BB(0x0062b934);
    /* 0062b934: push 0x171 */ { u32 v = 0x171u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b939: push 0x6d974c */ { u32 v = 0x6d974cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062b93e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b943: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62b948u); f_005e9f20();
    /* 0062b948: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b94b:; BB(0x0062b94b);
    /* 0062b94b: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 0062b955: mov dword ptr [ebp - 0x24], 0x203f3f3f */ W32((u32)(r_ebp+0xffffffdcu), 0x203f3f3fu);
    /* 0062b95c: jmp 0x62b9b3 */ goto L_0062b9b3;
L_0062b95e:; BB(0x0062b95e);
    /* 0062b95e: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 0062b964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b965: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b96au); f_00686ecc();
    /* 0062b96a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b96d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062b970: jbe 0x62b981 */ if ((fC||fZ)) goto L_0062b981;
L_0062b972:; BB(0x0062b972);
    /* 0062b972: movsx ecx, byte ptr [ebp - 0x23c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc4u));
    /* 0062b979: mov dword ptr [ebp - 0x36c], ecx */ W32((u32)(r_ebp+0xfffffc94u), r_ecx);
    /* 0062b97f: jmp 0x62b98b */ goto L_0062b98b;
L_0062b981:; BB(0x0062b981);
    /* 0062b981: mov dword ptr [ebp - 0x36c], 0x20000000 */ W32((u32)(r_ebp+0xfffffc94u), 0x20000000u);
L_0062b98b:; BB(0x0062b98b);
    /* 0062b98b: movsx edx, byte ptr [ebp - 0x23d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc3u));
    /* 0062b992: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062b995: add edx, dword ptr [ebp - 0x36c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffc94u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b99b: movsx eax, byte ptr [ebp - 0x23e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc2u));
    /* 0062b9a2: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062b9a5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b9a7: movsx ecx, byte ptr [ebp - 0x23f] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc1u));
    /* 0062b9ae: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b9b0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_0062b9b3:; BB(0x0062b9b3);
    /* 0062b9b3: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b9b9: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062b9bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b9bf: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062b9c2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062b9c5: mov dword ptr [eax + ecx + 8], edx */ W32((u32)(r_eax+r_ecx+0x8u), r_edx);
    /* 0062b9c9: mov eax, dword ptr [ebp - 0x368] */ r_eax = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b9cf: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062b9d2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b9d5: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062b9d8: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0062b9de: mov dword ptr [ecx + edx + 0xc], eax */ W32((u32)(r_ecx+r_edx+0xcu), r_eax);
    /* 0062b9e2: mov ecx, dword ptr [ebp - 0x368] */ r_ecx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062b9e8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062b9eb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b9ee: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062b9f1: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062b9f7: mov ecx, dword ptr [ecx + 0x2a] */ r_ecx = R32((u32)(r_ecx+0x2au));
    /* 0062b9fa: mov dword ptr [edx + eax + 0x10], ecx */ W32((u32)(r_edx+r_eax+0x10u), r_ecx);
    /* 0062b9fe: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 0062ba04: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062ba07: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062ba0a: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062ba0d: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0062ba13: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0062ba16: mov dword ptr [eax + ecx + 0x14], edx */ W32((u32)(r_eax+r_ecx+0x14u), r_edx);
    /* 0062ba1a: jmp 0x62b803 */ goto L_0062b803;
L_0062ba1f:; BB(0x0062ba1f);
    /* 0062ba1f: mov eax, dword ptr [ebp - 0x248] */ r_eax = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0062ba25: mov dword ptr [ebp - 0x364], eax */ W32((u32)(r_ebp+0xfffffc9cu), r_eax);
    /* 0062ba2b: mov ecx, dword ptr [ebp - 0x364] */ r_ecx = R32((u32)(r_ebp+0xfffffc9cu));
    /* 0062ba31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba32: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62ba37u); f_00686cae();
    /* 0062ba37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ba3a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062ba3c:; BB(0x0062ba3c);
    /* 0062ba3c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ba3f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ba41: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62ba46u); f_00686d72();
    /* 0062ba46: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ba48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ba49: ret  */ FN_RET(0x0062b6a0); r_esp += 4; return;
}

void f_0062c0c0(void) /* prf::func_0062c0c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c0c0);
    /* 0062c0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c0c3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c0c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0c7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062c0ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c0cd: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c0d1: je 0x62c0f5 */ if (fZ) goto L_0062c0f5;
L_0062c0d3:; BB(0x0062c0d3);
    /* 0062c0d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062c0d5: jne 0x62c0ee */ if (!fZ) goto L_0062c0ee;
L_0062c0d7:; BB(0x0062c0d7);
    /* 0062c0d7: push 0x242 */ { u32 v = 0x242u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0dc: push 0x6d974c */ { u32 v = 0x6d974cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0e1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0e6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62c0ebu); f_005e9f20();
    /* 0062c0eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c0ee:; BB(0x0062c0ee);
    /* 0062c0ee: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c0f0: jmp 0x62c36a */ goto L_0062c36a;
L_0062c0f5:; BB(0x0062c0f5);
    /* 0062c0f5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c0f9: jne 0x62c102 */ if (!fZ) goto L_0062c102;
L_0062c0fb:; BB(0x0062c0fb);
    /* 0062c0fb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c0fd: jmp 0x62c36a */ goto L_0062c36a;
L_0062c102:; BB(0x0062c102);
    /* 0062c102: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c105: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062c108: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c109: call dword ptr [0x6b21a4] */ { u32 t = R32((u32)(0x6b21a4u)); r_esp -= 4; W32(r_esp, 0x62c10fu); call_ind(t); }
    /* 0062c10f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c112: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062c115: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c116: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062c119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c11a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c11d: call 0x62c820 */ r_esp -= 4; W32(r_esp, 0x62c122u); f_0062c820();
    /* 0062c122: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c125: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c128: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062c12a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062c12d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c130: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c133: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062c136: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c13a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62c13fu); f_00686d82();
    /* 0062c13f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c142: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062c145: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c148: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062c14b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c14e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062c151: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062c154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c155: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c158: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c15b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c15c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c15f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c160: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x62c165u); f_00686fde();
    /* 0062c165: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c168: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c16b: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c16e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062c171: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062c174: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c175: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62c17au); f_00686cae();
    /* 0062c17a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c17d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c180: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c183: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0062c186: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c189: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c18c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062c18f: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c192: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c195: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c198: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0062c19b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c19e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c1a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062c1a3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c1a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c1a9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c1ac: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062c1ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c1b1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c1b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c1b7: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c1ba: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062c1bd: mov dword ptr [eax + ecx + 8], edx */ W32((u32)(r_eax+r_ecx+0x8u), r_edx);
    /* 0062c1c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c1c4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c1c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c1ca: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062c1cd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062c1d0: mov dword ptr [ecx + edx + 0xc], eax */ W32((u32)(r_ecx+r_edx+0xcu), r_eax);
    /* 0062c1d4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c1d7: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c1da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c1dd: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062c1e0: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062c1e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c1e6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0062c1e9: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c1ec: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062c1ef: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0062c1f2: mov edx, dword ptr [edx + eax + 0x10] */ r_edx = R32((u32)(r_edx+r_eax+0x10u));
    /* 0062c1f6: add edx, dword ptr [ecx + esi + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c1fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c1fd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c200: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c203: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062c206: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 0062c20a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c20d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c210: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c214: je 0x62c23f */ if (fZ) goto L_0062c23f;
L_0062c216:; BB(0x0062c216);
    /* 0062c216: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c21a: je 0x62c230 */ if (fZ) goto L_0062c230;
L_0062c21c:; BB(0x0062c21c);
    /* 0062c21c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062c21f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c220: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62c225u); f_00686ecc();
    /* 0062c225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c228: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c22b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062c22e: jmp 0x62c237 */ goto L_0062c237;
L_0062c230:; BB(0x0062c230);
    /* 0062c230: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0062c237:; BB(0x0062c237);
    /* 0062c237: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c23a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0062c23d: jmp 0x62c246 */ goto L_0062c246;
L_0062c23f:; BB(0x0062c23f);
    /* 0062c23f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0062c246:; BB(0x0062c246);
    /* 0062c246: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062c249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c24a: call 0x5e9fd0 */ r_esp -= 4; W32(r_esp, 0x62c24fu); f_005e9fd0();
    /* 0062c24f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c252: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c255: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c258: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c25b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c25e: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c261: mov dword ptr [edx + ecx + 0x14], eax */ W32((u32)(r_edx+r_ecx+0x14u), r_eax);
    /* 0062c265: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c268: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062c26b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c26e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c271: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c274: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c277: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0062c27a: add eax, dword ptr [edx + ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c27e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c281: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c284: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0062c287: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c289: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c28c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c28f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c292: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062c295: mov eax, dword ptr [ecx + edx + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx+0x10u));
    /* 0062c299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c29a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c29d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062c2a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2a1: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62c2a7u); call_ind(t); }
    /* 0062c2a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c2aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c2ad: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c2b0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c2b4: je 0x62c2f6 */ if (fZ) goto L_0062c2f6;
L_0062c2b6:; BB(0x0062c2b6);
    /* 0062c2b6: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c2ba: je 0x62c2e4 */ if (fZ) goto L_0062c2e4;
L_0062c2bc:; BB(0x0062c2bc);
    /* 0062c2bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c2bf: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062c2c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2c5: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062c2c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2c9: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62c2ceu); f_00686ecc();
    /* 0062c2ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c2d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2d5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0062c2d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2d9: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62c2dfu); call_ind(t); }
    /* 0062c2df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c2e2: jmp 0x62c2f6 */ goto L_0062c2f6;
L_0062c2e4:; BB(0x0062c2e4);
    /* 0062c2e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c2e7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062c2ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2ed: call dword ptr [0x6b22ec] */ { u32 t = R32((u32)(0x6b22ecu)); r_esp -= 4; W32(r_esp, 0x62c2f3u); call_ind(t); }
    /* 0062c2f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c2f6:; BB(0x0062c2f6);
    /* 0062c2f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062c2f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2fa: call 0x5e9fd0 */ r_esp -= 4; W32(r_esp, 0x62c2ffu); f_005e9fd0();
    /* 0062c2ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c303: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062c306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c307: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c30a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062c30d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c30e: call 0x62bd60 */ r_esp -= 4; W32(r_esp, 0x62c313u); f_0062bd60();
    /* 0062c313: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c316: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c319: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062c31c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c31d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c31f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c322: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062c325: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062c328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c329: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c32c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c32f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c330: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62c336u); call_ind(t); }
    /* 0062c336: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c339: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c33b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c33d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c340: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062c343: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c344: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62c34au); call_ind(t); }
    /* 0062c34a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c34d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c350: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062c353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c354: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c356: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c358: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c35b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062c35e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c35f: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62c365u); call_ind(t); }
    /* 0062c365: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c368: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062c36a:; BB(0x0062c36a);
    /* 0062c36a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c36b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c36d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c36e: ret 0x10 */ FN_RET(0x0062c0c0); r_esp += 20; return;
}

void f_0062c630(void) /* prf::func_0062c630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c630);
    /* 0062c630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c631: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c633: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c636: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062c639: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c63c: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c640: je 0x62c664 */ if (fZ) goto L_0062c664;
L_0062c642:; BB(0x0062c642);
    /* 0062c642: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062c644: jne 0x62c65d */ if (!fZ) goto L_0062c65d;
L_0062c646:; BB(0x0062c646);
    /* 0062c646: push 0x2ab */ { u32 v = 0x2abu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c64b: push 0x6d974c */ { u32 v = 0x6d974cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c650: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c655: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62c65au); f_005e9f20();
    /* 0062c65a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c65d:; BB(0x0062c65d);
    /* 0062c65d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c65f: jmp 0x62c6e6 */ goto L_0062c6e6;
L_0062c664:; BB(0x0062c664);
    /* 0062c664: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062c667: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062c669: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062c66c: jmp 0x62c677 */ goto L_0062c677;
L_0062c66e:; BB(0x0062c66e);
    /* 0062c66e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c671: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c674: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0062c677:; BB(0x0062c677);
    /* 0062c677: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c67a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c67d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c680: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c682: jae 0x62c6e4 */ if (!fC) goto L_0062c6e4;
L_0062c684:; BB(0x0062c684);
    /* 0062c684: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c687: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c68a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c68d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c690: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062c693: lea eax, [ecx + edx + 8] */ r_eax = (u32)(r_ecx+r_edx+0x8u);
    /* 0062c697: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c69a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c69d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c6a0: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c6a3: lea edx, [edx + ecx + 8] */ r_edx = (u32)(r_edx+r_ecx+0x8u);
    /* 0062c6a7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062c6a9: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0062c6ab: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062c6ae: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0062c6b1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0062c6b4: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0062c6b7: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0062c6ba: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0062c6bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c6c0: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c6c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c6c6: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062c6c9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062c6cc: mov edx, dword ptr [edx + eax + 0x10] */ r_edx = R32((u32)(r_edx+r_eax+0x10u));
    /* 0062c6d0: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062c6d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c6d5: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062c6d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c6db: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0062c6de: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 0062c6e2: jmp 0x62c66e */ goto L_0062c66e;
L_0062c6e4:; BB(0x0062c6e4);
    /* 0062c6e4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062c6e6:; BB(0x0062c6e6);
    /* 0062c6e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c6e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c6e9: ret 8 */ FN_RET(0x0062c630); r_esp += 12; return;
}

void f_0062c6f0(void) /* prf::func_0062c6f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c6f0);
    /* 0062c6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c6f3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c6f6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062c6f9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0062c700: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c703: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c707: je 0x62c72b */ if (fZ) goto L_0062c72b;
L_0062c709:; BB(0x0062c709);
    /* 0062c709: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062c70b: jne 0x62c724 */ if (!fZ) goto L_0062c724;
L_0062c70d:; BB(0x0062c70d);
    /* 0062c70d: push 0x2bc */ { u32 v = 0x2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c712: push 0x6d974c */ { u32 v = 0x6d974cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c717: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c71c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62c721u); f_005e9f20();
    /* 0062c721: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c724:; BB(0x0062c724);
    /* 0062c724: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c726: jmp 0x62c819 */ goto L_0062c819;
L_0062c72b:; BB(0x0062c72b);
    /* 0062c72b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062c72e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062c730: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062c733: jmp 0x62c73e */ goto L_0062c73e;
L_0062c735:; BB(0x0062c735);
    /* 0062c735: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c738: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c73b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0062c73e:; BB(0x0062c73e);
    /* 0062c73e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c741: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c744: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062c746: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062c749: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062c74c: jae 0x62c769 */ if (!fC) goto L_0062c769;
L_0062c74e:; BB(0x0062c74e);
    /* 0062c74e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c751: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c754: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062c757: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062c75a: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062c75d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c760: add eax, dword ptr [ecx + edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c764: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062c767: jmp 0x62c735 */ goto L_0062c735;
L_0062c769:; BB(0x0062c769);
    /* 0062c769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c76b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c76e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c771: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062c774: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062c776: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c779: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062c77c: mov edx, dword ptr [edx + ecx + 0x10] */ r_edx = R32((u32)(r_edx+r_ecx+0x10u));
    /* 0062c780: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c781: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c784: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062c787: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c788: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62c78eu); call_ind(t); }
    /* 0062c78e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c791: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c795: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62c79au); f_00686d82();
    /* 0062c79a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c79d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062c7a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062c7a3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062c7a6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c7aa: je 0x62c817 */ if (fZ) goto L_0062c817;
L_0062c7ac:; BB(0x0062c7ac);
    /* 0062c7ac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c7af: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062c7b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c7b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c7bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7bd: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62c7c3u); call_ind(t); }
    /* 0062c7c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c7c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7c8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c7cb: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c7ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062c7d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062c7d3: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062c7d6: mov eax, dword ptr [eax + edx + 0x10] */ r_eax = R32((u32)(r_eax+r_edx+0x10u));
    /* 0062c7da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7db: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c7de: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062c7e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7e2: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62c7e8u); call_ind(t); }
    /* 0062c7e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c7eb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c7ee: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062c7f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c7f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c7fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c7fc: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62c802u); call_ind(t); }
    /* 0062c802: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c805: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c808: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062c80b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c80e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c80f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62c814u); f_00686cae();
    /* 0062c814: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c817:; BB(0x0062c817);
    /* 0062c817: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062c819:; BB(0x0062c819);
    /* 0062c819: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c81b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c81c: ret 4 */ FN_RET(0x0062c6f0); r_esp += 8; return;
}

void f_0062c820(void) /* prf::func_0062c820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c820);
    /* 0062c820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c821: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c823: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c829: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062c82e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062c830: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062c833: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0062c839: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c83f: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c843: je 0x62c867 */ if (fZ) goto L_0062c867;
L_0062c845:; BB(0x0062c845);
    /* 0062c845: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062c847: jne 0x62c860 */ if (!fZ) goto L_0062c860;
L_0062c849:; BB(0x0062c849);
    /* 0062c849: push 0x2d6 */ { u32 v = 0x2d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c84e: push 0x6d974c */ { u32 v = 0x6d974cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c853: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c858: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62c85du); f_005e9f20();
    /* 0062c85d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062c860:; BB(0x0062c860);
    /* 0062c860: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c862: jmp 0x62ca8a */ goto L_0062ca8a;
L_0062c867:; BB(0x0062c867);
    /* 0062c867: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c86d: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c871: jne 0x62c87a */ if (!fZ) goto L_0062c87a;
L_0062c873:; BB(0x0062c873);
    /* 0062c873: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062c875: jmp 0x62ca8a */ goto L_0062ca8a;
L_0062c87a:; BB(0x0062c87a);
    /* 0062c87a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c880: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062c883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c884: call dword ptr [0x6b21a4] */ { u32 t = R32((u32)(0x6b21a4u)); r_esp -= 4; W32(r_esp, 0x62c88au); call_ind(t); }
    /* 0062c88a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c88d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062c890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c891: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062c894: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c895: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c89b: call 0x62b530 */ r_esp -= 4; W32(r_esp, 0x62c8a0u); f_0062b530();
    /* 0062c8a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062c8a3: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c8a9: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c8ac: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062c8ae: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c8b1: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062c8b4: ja 0x62ca88 */ if ((!fC&&!fZ)) goto L_0062ca88;
L_0062c8ba:; BB(0x0062c8ba);
    /* 0062c8ba: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 0062c8bd: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0062c8c3: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0062c8c9: movsx ecx, byte ptr [eax + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 0062c8cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8ce: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0062c8d4: movsx eax, byte ptr [edx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 0062c8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8d9: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0062c8df: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 0062c8e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8e4: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0062c8ea: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0062c8ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8ee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062c8f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8f2: push 0x6d9788 */ { u32 v = 0x6d9788u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8f7: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0062c8fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c8fe: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62c904u); call_ind(t); }
    /* 0062c904: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c907: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0062c90d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c90e: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62c913u); f_0062fde0();
    /* 0062c913: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c916: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 0062c919: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c91a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c920: call 0x62c6f0 */ r_esp -= 4; W32(r_esp, 0x62c925u); f_0062c6f0();
    /* 0062c925: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c92b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062c92e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c931: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062c934: mov eax, dword ptr [ecx + edx + 0x14] */ r_eax = R32((u32)(r_ecx+r_edx+0x14u));
    /* 0062c938: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0062c93e: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 0062c944: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c945: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 0062c948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c949: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c94f: call 0x62c630 */ r_esp -= 4; W32(r_esp, 0x62c954u); f_0062c630();
    /* 0062c954: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c95a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062c95d: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c960: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062c963: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c969: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062c96c: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0062c96f: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c975: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c978: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062c97a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c97d: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c983: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c986: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062c988: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c98e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c991: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062c994: sub eax, dword ptr [ebp - 0x94] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff6cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062c99a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c9a0: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c9a3: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0062c9a6: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c9ac: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062c9af: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c9b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9b3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62c9b8u); f_00686d82();
    /* 0062c9b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c9bb: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0062c9c1: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0062c9c7: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0062c9cd: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c9d3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062c9d6: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062c9d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9da: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c9e0: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c9e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9e4: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0062c9ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c9eb: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x62c9f0u); f_00686fde();
    /* 0062c9f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c9f3: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062c9f9: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062c9fc: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0062ca02: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0062ca08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca09: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62ca0eu); f_00686cae();
    /* 0062ca0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca11: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062ca17: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0062ca1d: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0062ca20: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062ca26: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062ca29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca2c: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062ca32: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062ca35: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062ca38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca39: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062ca3f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062ca42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca43: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62ca49u); call_ind(t); }
    /* 0062ca49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca50: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062ca56: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062ca59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca5a: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62ca60u); call_ind(t); }
    /* 0062ca60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca63: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062ca69: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062ca6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca6f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca71: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062ca77: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062ca7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca7b: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62ca81u); call_ind(t); }
    /* 0062ca81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca84: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062ca86: jmp 0x62ca8a */ goto L_0062ca8a;
L_0062ca88:; BB(0x0062ca88);
    /* 0062ca88: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062ca8a:; BB(0x0062ca8a);
    /* 0062ca8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ca8d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ca8f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62ca94u); f_00686d72();
    /* 0062ca94: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ca96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ca97: ret 8 */ FN_RET(0x0062c820); r_esp += 12; return;
}

