#include "protos.h"

void f_00431180(void) /* sub_431180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431180);
    /* 00431180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431181: mov ebp, esp */ r_ebp = r_esp;
    /* 00431183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431187: push 0x6b7378 */ { u32 v = 0x6b7378u; r_esp -= 4; W32(r_esp, v); }
    /* 0043118c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431191u); f_0062fde0();
    /* 00431191: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431194: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431198: je 0x4311b1 */ if (fZ) goto L_004311b1;
L_0043119a:; BB(0x0043119a);
    /* 0043119a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043119e: je 0x4311b1 */ if (fZ) goto L_004311b1;
L_004311a0:; BB(0x004311a0);
    /* 004311a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004311a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004311a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004311a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004311a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004311ac: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004311af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4311b1u); call_ind(t); }
L_004311b1:; BB(0x004311b1);
    /* 004311b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004311b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004311b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004311b7: push 0xd002 */ { u32 v = 0xd002u; r_esp -= 4; W32(r_esp, v); }
    /* 004311bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004311bf: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4311c4u); f_005cd800();
    /* 004311c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004311c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004311c7: ret 8 */ FN_RET(0x00431180); r_esp += 12; return;
}

void f_004311d0(void) /* sub_4311D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004311d0);
    /* 004311d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004311d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004311d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004311d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004311d7: push 0x6b73a0 */ { u32 v = 0x6b73a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004311dc: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4311e1u); f_0062fde0();
    /* 004311e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004311e4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004311e8: je 0x431201 */ if (fZ) goto L_00431201;
L_004311ea:; BB(0x004311ea);
    /* 004311ea: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004311ee: je 0x431201 */ if (fZ) goto L_00431201;
L_004311f0:; BB(0x004311f0);
    /* 004311f0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004311f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004311f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004311f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004311f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004311fc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004311ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431201u); call_ind(t); }
L_00431201:; BB(0x00431201);
    /* 00431201: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431203: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431206: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431207: push 0xcf21 */ { u32 v = 0xcf21u; r_esp -= 4; W32(r_esp, v); }
    /* 0043120c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043120f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431214u); f_005cd800();
    /* 00431214: mov esp, ebp */ r_esp = r_ebp;
    /* 00431216: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431217: ret 8 */ FN_RET(0x004311d0); r_esp += 12; return;
}

void f_00431220(void) /* sub_431220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431220);
    /* 00431220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431221: mov ebp, esp */ r_ebp = r_esp;
    /* 00431223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431227: push 0x6b73c8 */ { u32 v = 0x6b73c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043122c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431231u); f_0062fde0();
    /* 00431231: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431234: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431238: je 0x431251 */ if (fZ) goto L_00431251;
L_0043123a:; BB(0x0043123a);
    /* 0043123a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043123e: je 0x431251 */ if (fZ) goto L_00431251;
L_00431240:; BB(0x00431240);
    /* 00431240: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431243: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431244: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431247: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431249: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043124c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043124f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431251u); call_ind(t); }
L_00431251:; BB(0x00431251);
    /* 00431251: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431253: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431256: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431257: push 0xd4b2 */ { u32 v = 0xd4b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043125c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043125f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431264u); f_005cd800();
    /* 00431264: mov esp, ebp */ r_esp = r_ebp;
    /* 00431266: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431267: ret 8 */ FN_RET(0x00431220); r_esp += 12; return;
}

void f_00431270(void) /* sub_431270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431270);
    /* 00431270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431271: mov ebp, esp */ r_ebp = r_esp;
    /* 00431273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431277: push 0x6b73ec */ { u32 v = 0x6b73ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0043127c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431281u); f_0062fde0();
    /* 00431281: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431284: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431288: je 0x4312a1 */ if (fZ) goto L_004312a1;
L_0043128a:; BB(0x0043128a);
    /* 0043128a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043128e: je 0x4312a1 */ if (fZ) goto L_004312a1;
L_00431290:; BB(0x00431290);
    /* 00431290: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431294: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431297: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431299: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043129c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043129f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4312a1u); call_ind(t); }
L_004312a1:; BB(0x004312a1);
    /* 004312a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004312a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004312a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004312a7: push 0xd4cb */ { u32 v = 0xd4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 004312ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004312af: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4312b4u); f_005cd800();
    /* 004312b4: mov esp, ebp */ r_esp = r_ebp;
    /* 004312b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004312b7: ret 8 */ FN_RET(0x00431270); r_esp += 12; return;
}

void f_004312c0(void) /* sub_4312C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004312c0);
    /* 004312c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004312c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004312c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004312c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004312c7: push 0x6b7410 */ { u32 v = 0x6b7410u; r_esp -= 4; W32(r_esp, v); }
    /* 004312cc: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4312d1u); f_0062fde0();
    /* 004312d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004312d4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004312d8: je 0x4312f1 */ if (fZ) goto L_004312f1;
L_004312da:; BB(0x004312da);
    /* 004312da: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004312de: je 0x4312f1 */ if (fZ) goto L_004312f1;
L_004312e0:; BB(0x004312e0);
    /* 004312e0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004312e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004312e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004312e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004312e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004312ec: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004312ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4312f1u); call_ind(t); }
L_004312f1:; BB(0x004312f1);
    /* 004312f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004312f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004312f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004312f7: push 0xd467 */ { u32 v = 0xd467u; r_esp -= 4; W32(r_esp, v); }
    /* 004312fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004312ff: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431304u); f_005cd800();
    /* 00431304: mov esp, ebp */ r_esp = r_ebp;
    /* 00431306: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431307: ret 8 */ FN_RET(0x004312c0); r_esp += 12; return;
}

void f_00431310(void) /* sub_431310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431310);
    /* 00431310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431311: mov ebp, esp */ r_ebp = r_esp;
    /* 00431313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431317: push 0x6b7438 */ { u32 v = 0x6b7438u; r_esp -= 4; W32(r_esp, v); }
    /* 0043131c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431321u); f_0062fde0();
    /* 00431321: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431324: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431328: je 0x431341 */ if (fZ) goto L_00431341;
L_0043132a:; BB(0x0043132a);
    /* 0043132a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043132e: je 0x431341 */ if (fZ) goto L_00431341;
L_00431330:; BB(0x00431330);
    /* 00431330: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431334: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431337: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431339: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043133c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043133f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431341u); call_ind(t); }
L_00431341:; BB(0x00431341);
    /* 00431341: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431343: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431346: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431347: push 0xd44e */ { u32 v = 0xd44eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043134c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043134f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431354u); f_005cd800();
    /* 00431354: mov esp, ebp */ r_esp = r_ebp;
    /* 00431356: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431357: ret 8 */ FN_RET(0x00431310); r_esp += 12; return;
}

void f_00431360(void) /* sub_431360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431360);
    /* 00431360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431361: mov ebp, esp */ r_ebp = r_esp;
    /* 00431363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431367: push 0x6b7460 */ { u32 v = 0x6b7460u; r_esp -= 4; W32(r_esp, v); }
    /* 0043136c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431371u); f_0062fde0();
    /* 00431371: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431374: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431378: je 0x431391 */ if (fZ) goto L_00431391;
L_0043137a:; BB(0x0043137a);
    /* 0043137a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043137e: je 0x431391 */ if (fZ) goto L_00431391;
L_00431380:; BB(0x00431380);
    /* 00431380: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431384: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431387: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431389: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043138c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043138f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431391u); call_ind(t); }
L_00431391:; BB(0x00431391);
    /* 00431391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431393: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431397: push 0xcf85 */ { u32 v = 0xcf85u; r_esp -= 4; W32(r_esp, v); }
    /* 0043139c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043139f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4313a4u); f_005cd800();
    /* 004313a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004313a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004313a7: ret 8 */ FN_RET(0x00431360); r_esp += 12; return;
}

void f_004313b0(void) /* sub_4313B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004313b0);
    /* 004313b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004313b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004313b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004313b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004313b7: push 0x6b7488 */ { u32 v = 0x6b7488u; r_esp -= 4; W32(r_esp, v); }
    /* 004313bc: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4313c1u); f_0062fde0();
    /* 004313c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004313c4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004313c8: je 0x4313e1 */ if (fZ) goto L_004313e1;
L_004313ca:; BB(0x004313ca);
    /* 004313ca: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004313ce: je 0x4313e1 */ if (fZ) goto L_004313e1;
L_004313d0:; BB(0x004313d0);
    /* 004313d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004313d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004313d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004313d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004313d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004313dc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004313df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4313e1u); call_ind(t); }
L_004313e1:; BB(0x004313e1);
    /* 004313e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004313e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004313e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004313e7: push 0xcf9e */ { u32 v = 0xcf9eu; r_esp -= 4; W32(r_esp, v); }
    /* 004313ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004313ef: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4313f4u); f_005cd800();
    /* 004313f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004313f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004313f7: ret 8 */ FN_RET(0x004313b0); r_esp += 12; return;
}

void f_00431400(void) /* sub_431400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431400);
    /* 00431400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431401: mov ebp, esp */ r_ebp = r_esp;
    /* 00431403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431407: push 0x6b74b0 */ { u32 v = 0x6b74b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043140c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431411u); f_0062fde0();
    /* 00431411: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431414: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431418: je 0x431431 */ if (fZ) goto L_00431431;
L_0043141a:; BB(0x0043141a);
    /* 0043141a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043141e: je 0x431431 */ if (fZ) goto L_00431431;
L_00431420:; BB(0x00431420);
    /* 00431420: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431424: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431427: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431429: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043142c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043142f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431431u); call_ind(t); }
L_00431431:; BB(0x00431431);
    /* 00431431: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431433: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431436: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431437: push 0xcf53 */ { u32 v = 0xcf53u; r_esp -= 4; W32(r_esp, v); }
    /* 0043143c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043143f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431444u); f_005cd800();
    /* 00431444: mov esp, ebp */ r_esp = r_ebp;
    /* 00431446: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431447: ret 8 */ FN_RET(0x00431400); r_esp += 12; return;
}

void f_00431450(void) /* sub_431450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431450);
    /* 00431450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431451: mov ebp, esp */ r_ebp = r_esp;
    /* 00431453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431457: push 0x6b74d4 */ { u32 v = 0x6b74d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043145c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431461u); f_0062fde0();
    /* 00431461: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431464: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431468: je 0x431481 */ if (fZ) goto L_00431481;
L_0043146a:; BB(0x0043146a);
    /* 0043146a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043146e: je 0x431481 */ if (fZ) goto L_00431481;
L_00431470:; BB(0x00431470);
    /* 00431470: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431474: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431477: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431479: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043147c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043147f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431481u); call_ind(t); }
L_00431481:; BB(0x00431481);
    /* 00431481: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431483: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431486: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431487: push 0xcf6c */ { u32 v = 0xcf6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043148c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043148f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431494u); f_005cd800();
    /* 00431494: mov esp, ebp */ r_esp = r_ebp;
    /* 00431496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431497: ret 8 */ FN_RET(0x00431450); r_esp += 12; return;
}

void f_004314a0(void) /* sub_4314A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004314a0);
    /* 004314a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004314a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004314a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004314a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004314a7: push 0x6b74fc */ { u32 v = 0x6b74fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004314ac: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4314b1u); f_0062fde0();
    /* 004314b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004314b4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004314b8: je 0x4314d1 */ if (fZ) goto L_004314d1;
L_004314ba:; BB(0x004314ba);
    /* 004314ba: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004314be: je 0x4314d1 */ if (fZ) goto L_004314d1;
L_004314c0:; BB(0x004314c0);
    /* 004314c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004314c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004314c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004314c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004314c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004314cc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004314cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4314d1u); call_ind(t); }
L_004314d1:; BB(0x004314d1);
    /* 004314d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004314d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004314d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004314d7: push 0xcf3a */ { u32 v = 0xcf3au; r_esp -= 4; W32(r_esp, v); }
    /* 004314dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004314df: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4314e4u); f_005cd800();
    /* 004314e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004314e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004314e7: ret 8 */ FN_RET(0x004314a0); r_esp += 12; return;
}

void f_004314f0(void) /* sub_4314F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004314f0);
    /* 004314f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004314f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004314f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004314f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004314f7: push 0x6b7524 */ { u32 v = 0x6b7524u; r_esp -= 4; W32(r_esp, v); }
    /* 004314fc: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431501u); f_0062fde0();
    /* 00431501: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431504: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431508: je 0x431521 */ if (fZ) goto L_00431521;
L_0043150a:; BB(0x0043150a);
    /* 0043150a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043150e: je 0x431521 */ if (fZ) goto L_00431521;
L_00431510:; BB(0x00431510);
    /* 00431510: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431514: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431517: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431519: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043151c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043151f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431521u); call_ind(t); }
L_00431521:; BB(0x00431521);
    /* 00431521: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431523: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431526: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431527: push 0xd3d1 */ { u32 v = 0xd3d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043152c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043152f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431534u); f_005cd800();
    /* 00431534: mov esp, ebp */ r_esp = r_ebp;
    /* 00431536: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431537: ret 8 */ FN_RET(0x004314f0); r_esp += 12; return;
}

void f_00431540(void) /* sub_431540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431540);
    /* 00431540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431541: mov ebp, esp */ r_ebp = r_esp;
    /* 00431543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431547: push 0x6b7548 */ { u32 v = 0x6b7548u; r_esp -= 4; W32(r_esp, v); }
    /* 0043154c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431551u); f_0062fde0();
    /* 00431551: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431554: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431558: je 0x431571 */ if (fZ) goto L_00431571;
L_0043155a:; BB(0x0043155a);
    /* 0043155a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043155e: je 0x431571 */ if (fZ) goto L_00431571;
L_00431560:; BB(0x00431560);
    /* 00431560: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431564: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431567: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431569: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043156c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043156f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431571u); call_ind(t); }
L_00431571:; BB(0x00431571);
    /* 00431571: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431573: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431576: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431577: push 0xd4fd */ { u32 v = 0xd4fdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043157c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043157f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431584u); f_005cd800();
    /* 00431584: mov esp, ebp */ r_esp = r_ebp;
    /* 00431586: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431587: ret 8 */ FN_RET(0x00431540); r_esp += 12; return;
}

void f_00431590(void) /* sub_431590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431590);
    /* 00431590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431591: mov ebp, esp */ r_ebp = r_esp;
    /* 00431593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431597: push 0x6b7570 */ { u32 v = 0x6b7570u; r_esp -= 4; W32(r_esp, v); }
    /* 0043159c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4315a1u); f_0062fde0();
    /* 004315a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004315a4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004315a8: je 0x4315c1 */ if (fZ) goto L_004315c1;
L_004315aa:; BB(0x004315aa);
    /* 004315aa: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004315ae: je 0x4315c1 */ if (fZ) goto L_004315c1;
L_004315b0:; BB(0x004315b0);
    /* 004315b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004315b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004315b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004315b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004315b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004315bc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004315bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4315c1u); call_ind(t); }
L_004315c1:; BB(0x004315c1);
    /* 004315c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004315c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004315c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004315c7: push 0xd41c */ { u32 v = 0xd41cu; r_esp -= 4; W32(r_esp, v); }
    /* 004315cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004315cf: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4315d4u); f_005cd800();
    /* 004315d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004315d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004315d7: ret 8 */ FN_RET(0x00431590); r_esp += 12; return;
}

void f_004315e0(void) /* sub_4315E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004315e0);
    /* 004315e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004315e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004315e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004315e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004315e7: push 0x6b7594 */ { u32 v = 0x6b7594u; r_esp -= 4; W32(r_esp, v); }
    /* 004315ec: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4315f1u); f_0062fde0();
    /* 004315f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004315f4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004315f8: je 0x431611 */ if (fZ) goto L_00431611;
L_004315fa:; BB(0x004315fa);
    /* 004315fa: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004315fe: je 0x431611 */ if (fZ) goto L_00431611;
L_00431600:; BB(0x00431600);
    /* 00431600: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431604: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431607: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431609: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043160c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043160f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431611u); call_ind(t); }
L_00431611:; BB(0x00431611);
    /* 00431611: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431613: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431616: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431617: push 0xd354 */ { u32 v = 0xd354u; r_esp -= 4; W32(r_esp, v); }
    /* 0043161c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043161f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431624u); f_005cd800();
    /* 00431624: mov esp, ebp */ r_esp = r_ebp;
    /* 00431626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431627: ret 8 */ FN_RET(0x004315e0); r_esp += 12; return;
}

void f_00431630(void) /* sub_431630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431630);
    /* 00431630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431631: mov ebp, esp */ r_ebp = r_esp;
    /* 00431633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431637: push 0x6b75bc */ { u32 v = 0x6b75bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043163c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431641u); f_0062fde0();
    /* 00431641: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431644: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431648: je 0x431661 */ if (fZ) goto L_00431661;
L_0043164a:; BB(0x0043164a);
    /* 0043164a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043164e: je 0x431661 */ if (fZ) goto L_00431661;
L_00431650:; BB(0x00431650);
    /* 00431650: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431654: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431657: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431659: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043165c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043165f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431661u); call_ind(t); }
L_00431661:; BB(0x00431661);
    /* 00431661: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431663: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431667: push 0xd386 */ { u32 v = 0xd386u; r_esp -= 4; W32(r_esp, v); }
    /* 0043166c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043166f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431674u); f_005cd800();
    /* 00431674: mov esp, ebp */ r_esp = r_ebp;
    /* 00431676: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431677: ret 8 */ FN_RET(0x00431630); r_esp += 12; return;
}

void f_00431680(void) /* sub_431680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431680);
    /* 00431680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431681: mov ebp, esp */ r_ebp = r_esp;
    /* 00431683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431687: push 0x6b75e4 */ { u32 v = 0x6b75e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043168c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431691u); f_0062fde0();
    /* 00431691: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431694: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431698: je 0x4316b1 */ if (fZ) goto L_004316b1;
L_0043169a:; BB(0x0043169a);
    /* 0043169a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043169e: je 0x4316b1 */ if (fZ) goto L_004316b1;
L_004316a0:; BB(0x004316a0);
    /* 004316a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004316a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004316a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004316a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004316a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004316ac: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004316af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4316b1u); call_ind(t); }
L_004316b1:; BB(0x004316b1);
    /* 004316b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004316b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004316b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004316b7: push 0xd39f */ { u32 v = 0xd39fu; r_esp -= 4; W32(r_esp, v); }
    /* 004316bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004316bf: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4316c4u); f_005cd800();
    /* 004316c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004316c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004316c7: ret 8 */ FN_RET(0x00431680); r_esp += 12; return;
}

void f_004316d0(void) /* sub_4316D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004316d0);
    /* 004316d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004316d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004316d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004316d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004316d7: push 0x6b7610 */ { u32 v = 0x6b7610u; r_esp -= 4; W32(r_esp, v); }
    /* 004316dc: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4316e1u); f_0062fde0();
    /* 004316e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004316e4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004316e8: je 0x431701 */ if (fZ) goto L_00431701;
L_004316ea:; BB(0x004316ea);
    /* 004316ea: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004316ee: je 0x431701 */ if (fZ) goto L_00431701;
L_004316f0:; BB(0x004316f0);
    /* 004316f0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004316f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004316f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004316f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004316f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004316fc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004316ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431701u); call_ind(t); }
L_00431701:; BB(0x00431701);
    /* 00431701: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431703: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431706: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431707: push 0xd3b8 */ { u32 v = 0xd3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043170c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043170f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431714u); f_005cd800();
    /* 00431714: mov esp, ebp */ r_esp = r_ebp;
    /* 00431716: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431717: ret 8 */ FN_RET(0x004316d0); r_esp += 12; return;
}

void f_00431720(void) /* sub_431720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431720);
    /* 00431720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431721: mov ebp, esp */ r_ebp = r_esp;
    /* 00431723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431727: push 0x6b7638 */ { u32 v = 0x6b7638u; r_esp -= 4; W32(r_esp, v); }
    /* 0043172c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431731u); f_0062fde0();
    /* 00431731: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431734: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431738: je 0x431751 */ if (fZ) goto L_00431751;
L_0043173a:; BB(0x0043173a);
    /* 0043173a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043173e: je 0x431751 */ if (fZ) goto L_00431751;
L_00431740:; BB(0x00431740);
    /* 00431740: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431743: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431744: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431747: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431749: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043174c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043174f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431751u); call_ind(t); }
L_00431751:; BB(0x00431751);
    /* 00431751: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431753: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431757: push 0xd36d */ { u32 v = 0xd36du; r_esp -= 4; W32(r_esp, v); }
    /* 0043175c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043175f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431764u); f_005cd800();
    /* 00431764: mov esp, ebp */ r_esp = r_ebp;
    /* 00431766: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431767: ret 8 */ FN_RET(0x00431720); r_esp += 12; return;
}

void f_00431770(void) /* sub_431770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431770);
    /* 00431770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431771: mov ebp, esp */ r_ebp = r_esp;
    /* 00431773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431777: push 0x6b765c */ { u32 v = 0x6b765cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043177c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431781u); f_0062fde0();
    /* 00431781: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431784: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431788: je 0x4317a1 */ if (fZ) goto L_004317a1;
L_0043178a:; BB(0x0043178a);
    /* 0043178a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043178e: je 0x4317a1 */ if (fZ) goto L_004317a1;
L_00431790:; BB(0x00431790);
    /* 00431790: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431794: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431797: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431799: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043179c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043179f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4317a1u); call_ind(t); }
L_004317a1:; BB(0x004317a1);
    /* 004317a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004317a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004317a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004317a7: push 0xd3ea */ { u32 v = 0xd3eau; r_esp -= 4; W32(r_esp, v); }
    /* 004317ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004317af: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4317b4u); f_005cd800();
    /* 004317b4: mov esp, ebp */ r_esp = r_ebp;
    /* 004317b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004317b7: ret 8 */ FN_RET(0x00431770); r_esp += 12; return;
}

void f_004317c0(void) /* sub_4317C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004317c0);
    /* 004317c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004317c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004317c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004317c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004317c7: push 0x6b7684 */ { u32 v = 0x6b7684u; r_esp -= 4; W32(r_esp, v); }
    /* 004317cc: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4317d1u); f_0062fde0();
    /* 004317d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004317d4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004317d8: je 0x4317f1 */ if (fZ) goto L_004317f1;
L_004317da:; BB(0x004317da);
    /* 004317da: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004317de: je 0x4317f1 */ if (fZ) goto L_004317f1;
L_004317e0:; BB(0x004317e0);
    /* 004317e0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004317e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004317e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004317e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004317ec: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004317ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4317f1u); call_ind(t); }
L_004317f1:; BB(0x004317f1);
    /* 004317f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004317f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004317f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004317f7: push 0xd435 */ { u32 v = 0xd435u; r_esp -= 4; W32(r_esp, v); }
    /* 004317fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004317ff: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431804u); f_005cd800();
    /* 00431804: mov esp, ebp */ r_esp = r_ebp;
    /* 00431806: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431807: ret 8 */ FN_RET(0x004317c0); r_esp += 12; return;
}

void f_00431810(void) /* sub_431810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431810);
    /* 00431810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431811: mov ebp, esp */ r_ebp = r_esp;
    /* 00431813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431817: push 0x6b76a8 */ { u32 v = 0x6b76a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043181c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431821u); f_0062fde0();
    /* 00431821: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431824: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431828: je 0x431841 */ if (fZ) goto L_00431841;
L_0043182a:; BB(0x0043182a);
    /* 0043182a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043182e: je 0x431841 */ if (fZ) goto L_00431841;
L_00431830:; BB(0x00431830);
    /* 00431830: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431834: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431837: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431839: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043183c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043183f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431841u); call_ind(t); }
L_00431841:; BB(0x00431841);
    /* 00431841: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431843: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431847: push 0xd480 */ { u32 v = 0xd480u; r_esp -= 4; W32(r_esp, v); }
    /* 0043184c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043184f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x431854u); f_005cd800();
    /* 00431854: mov esp, ebp */ r_esp = r_ebp;
    /* 00431856: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431857: ret 8 */ FN_RET(0x00431810); r_esp += 12; return;
}

void f_00431860(void) /* sub_431860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431860);
    /* 00431860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431861: mov ebp, esp */ r_ebp = r_esp;
    /* 00431863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431867: push 0x6b76d0 */ { u32 v = 0x6b76d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043186c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x431871u); f_0062fde0();
    /* 00431871: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00431874: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431878: je 0x431891 */ if (fZ) goto L_00431891;
L_0043187a:; BB(0x0043187a);
    /* 0043187a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043187e: je 0x431891 */ if (fZ) goto L_00431891;
L_00431880:; BB(0x00431880);
    /* 00431880: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00431883: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431884: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431887: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431889: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043188c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043188f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x431891u); call_ind(t); }
L_00431891:; BB(0x00431891);
    /* 00431891: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00431893: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00431896: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431897: push 0xd499 */ { u32 v = 0xd499u; r_esp -= 4; W32(r_esp, v); }
    /* 0043189c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043189f: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x4318a4u); f_005cd800();
    /* 004318a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004318a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004318a7: ret 8 */ FN_RET(0x00431860); r_esp += 12; return;
}

void f_004318b0(void) /* sub_4318B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004318b0);
    /* 004318b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004318b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004318b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004318b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004318b9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004318bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004318be: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4318c3u); f_00436a00();
    /* 004318c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004318c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004318c8: je 0x43190a */ if (fZ) goto L_0043190a;
L_004318ca:; BB(0x004318ca);
    /* 004318ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004318cc: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004318cf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004318d2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004318d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004318dc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004318e1: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004318e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004318e7: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004318ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004318f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004318f4: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004318f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004318f9: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004318fc: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004318ff: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431904: je 0x43190a */ if (fZ) goto L_0043190a;
L_00431906:; BB(0x00431906);
    /* 00431906: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00431908: jmp 0x43190c */ goto L_0043190c;
L_0043190a:; BB(0x0043190a);
    /* 0043190a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043190c:; BB(0x0043190c);
    /* 0043190c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043190e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043190f: ret  */ FN_RET(0x004318b0); r_esp += 4; return;
}

void f_00431910(void) /* sub_431910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431910);
    /* 00431910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431911: mov ebp, esp */ r_ebp = r_esp;
    /* 00431913: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431916: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00431919: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043191b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043191e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x431923u); f_00436a00();
    /* 00431923: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00431926: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431928: je 0x43196a */ if (fZ) goto L_0043196a;
L_0043192a:; BB(0x0043192a);
    /* 0043192a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043192c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043192f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431932: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431939: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043193c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431941: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431944: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431947: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043194e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00431951: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00431954: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431957: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431959: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043195c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043195f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431964: je 0x43196a */ if (fZ) goto L_0043196a;
L_00431966:; BB(0x00431966);
    /* 00431966: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00431968: jmp 0x43196c */ goto L_0043196c;
L_0043196a:; BB(0x0043196a);
    /* 0043196a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043196c:; BB(0x0043196c);
    /* 0043196c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043196e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043196f: ret  */ FN_RET(0x00431910); r_esp += 4; return;
}

void f_00431970(void) /* sub_431970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431970);
    /* 00431970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431971: mov ebp, esp */ r_ebp = r_esp;
    /* 00431973: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431976: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00431979: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0043197b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043197e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x431983u); f_00436a00();
    /* 00431983: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00431986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431988: je 0x4319ca */ if (fZ) goto L_004319ca;
L_0043198a:; BB(0x0043198a);
    /* 0043198a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043198c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043198f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431992: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431999: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043199c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004319a1: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004319a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004319a7: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004319ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004319b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004319b4: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004319b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004319b9: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004319bc: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004319bf: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004319c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004319c4: je 0x4319ca */ if (fZ) goto L_004319ca;
L_004319c6:; BB(0x004319c6);
    /* 004319c6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004319c8: jmp 0x4319cc */ goto L_004319cc;
L_004319ca:; BB(0x004319ca);
    /* 004319ca: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004319cc:; BB(0x004319cc);
    /* 004319cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004319ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004319cf: ret  */ FN_RET(0x00431970); r_esp += 4; return;
}

void f_004319d0(void) /* sub_4319D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004319d0);
    /* 004319d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004319d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004319d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004319d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004319d9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004319db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004319de: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4319e3u); f_00436a00();
    /* 004319e3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004319e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004319e8: je 0x431a2a */ if (fZ) goto L_00431a2a;
L_004319ea:; BB(0x004319ea);
    /* 004319ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004319ec: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004319ef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004319f2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004319f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004319fc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431a01: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431a04: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431a07: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431a0e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00431a11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00431a14: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431a17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431a19: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431a1c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431a1f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431a22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431a24: je 0x431a2a */ if (fZ) goto L_00431a2a;
L_00431a26:; BB(0x00431a26);
    /* 00431a26: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00431a28: jmp 0x431a2c */ goto L_00431a2c;
L_00431a2a:; BB(0x00431a2a);
    /* 00431a2a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00431a2c:; BB(0x00431a2c);
    /* 00431a2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00431a2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431a2f: ret  */ FN_RET(0x004319d0); r_esp += 4; return;
}

void f_00431a30(void) /* sub_431A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431a30);
    /* 00431a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00431a33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431a36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00431a39: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00431a3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431a3e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x431a43u); f_00436a00();
    /* 00431a43: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00431a46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431a48: je 0x431a8a */ if (fZ) goto L_00431a8a;
L_00431a4a:; BB(0x00431a4a);
    /* 00431a4a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00431a4c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431a4f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431a52: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431a59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00431a5c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431a61: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431a64: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431a67: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431a6e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00431a71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00431a74: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431a77: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431a79: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431a7c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431a7f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431a84: je 0x431a8a */ if (fZ) goto L_00431a8a;
L_00431a86:; BB(0x00431a86);
    /* 00431a86: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00431a88: jmp 0x431a8c */ goto L_00431a8c;
L_00431a8a:; BB(0x00431a8a);
    /* 00431a8a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00431a8c:; BB(0x00431a8c);
    /* 00431a8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00431a8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431a8f: ret  */ FN_RET(0x00431a30); r_esp += 4; return;
}

void f_00431a90(void) /* sub_431A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431a90);
    /* 00431a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00431a93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431a96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00431a99: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00431a9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431a9e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x431aa3u); f_00436a00();
    /* 00431aa3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00431aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431aa8: je 0x431aea */ if (fZ) goto L_00431aea;
L_00431aaa:; BB(0x00431aaa);
    /* 00431aaa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00431aac: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431aaf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431ab2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431ab9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00431abc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431ac1: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431ac4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431ac7: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431ace: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00431ad1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00431ad4: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431ad7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431ad9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431adc: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431adf: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431ae2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431ae4: je 0x431aea */ if (fZ) goto L_00431aea;
L_00431ae6:; BB(0x00431ae6);
    /* 00431ae6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00431ae8: jmp 0x431aec */ goto L_00431aec;
L_00431aea:; BB(0x00431aea);
    /* 00431aea: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00431aec:; BB(0x00431aec);
    /* 00431aec: mov esp, ebp */ r_esp = r_ebp;
    /* 00431aee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431aef: ret  */ FN_RET(0x00431a90); r_esp += 4; return;
}

void f_00431af0(void) /* sub_431AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431af0);
    /* 00431af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00431af3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431af6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00431af9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00431afb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431afe: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x431b03u); f_00436a00();
    /* 00431b03: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00431b06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b08: je 0x431b4a */ if (fZ) goto L_00431b4a;
L_00431b0a:; BB(0x00431b0a);
    /* 00431b0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00431b0c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431b0f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431b12: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431b19: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00431b1c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431b21: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431b24: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431b27: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431b2e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00431b31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00431b34: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431b37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431b39: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b3c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431b3f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431b42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b44: je 0x431b4a */ if (fZ) goto L_00431b4a;
L_00431b46:; BB(0x00431b46);
    /* 00431b46: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00431b48: jmp 0x431b4c */ goto L_00431b4c;
L_00431b4a:; BB(0x00431b4a);
    /* 00431b4a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00431b4c:; BB(0x00431b4c);
    /* 00431b4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00431b4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431b4f: ret  */ FN_RET(0x00431af0); r_esp += 4; return;
}

void f_00431b50(void) /* sub_431B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431b50);
    /* 00431b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00431b53: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00431b56: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00431b59: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00431b5b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431b5e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x431b63u); f_00436a00();
    /* 00431b63: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00431b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b68: je 0x431c66 */ if (fZ) goto L_00431c66;
L_00431b6e:; BB(0x00431b6e);
    /* 00431b6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00431b70: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431b73: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431b76: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431b7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00431b80: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431b85: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431b88: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431b8b: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431b92: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00431b95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00431b98: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431b9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431b9d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431ba0: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431ba3: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431ba6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431ba8: jne 0x431c62 */ if (!fZ) goto L_00431c62;
L_00431bae:; BB(0x00431bae);
    /* 00431bae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00431bb0: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431bb3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431bb6: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431bbd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00431bc0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431bc5: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431bc8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431bcb: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431bd2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00431bd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00431bd8: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431bdb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431bdd: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431be0: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431be3: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431be6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431be8: jne 0x431c62 */ if (!fZ) goto L_00431c62;
L_00431bea:; BB(0x00431bea);
    /* 00431bea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00431bec: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431bef: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431bf2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431bf9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00431bfc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431c01: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431c04: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431c07: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431c0e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00431c11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00431c14: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431c17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431c19: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431c1c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431c1f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431c22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431c24: jne 0x431c62 */ if (!fZ) goto L_00431c62;
L_00431c26:; BB(0x00431c26);
    /* 00431c26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00431c28: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431c2b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431c2e: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431c35: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00431c38: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00431c3d: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00431c40: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00431c43: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00431c4a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00431c4d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00431c50: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00431c53: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00431c55: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431c58: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00431c5b: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00431c5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431c60: je 0x431c66 */ if (fZ) goto L_00431c66;
L_00431c62:; BB(0x00431c62);
    /* 00431c62: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00431c64: jmp 0x431c68 */ goto L_00431c68;
L_00431c66:; BB(0x00431c66);
    /* 00431c66: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00431c68:; BB(0x00431c68);
    /* 00431c68: mov esp, ebp */ r_esp = r_ebp;
    /* 00431c6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431c6b: ret  */ FN_RET(0x00431b50); r_esp += 4; return;
}

