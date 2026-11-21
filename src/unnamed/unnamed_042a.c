#include "protos.h"

void f_0042a030(void) /* sub_42A030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a030);
    /* 0042a030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a031: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042a037: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042a03a: mov eax, dword ptr [eax*4 + 0x711000] */ r_eax = R32((u32)(r_eax*4+0x711000u));
    /* 0042a041: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a043: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a044: ret 4 */ FN_RET(0x0042a030); r_esp += 8; return;
}

void f_0042a050(void) /* sub_42A050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a050);
    /* 0042a050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a051: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042a057: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042a05a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a05d: cmp dword ptr [ecx + eax*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a062: je 0x42a088 */ if (fZ) goto L_0042a088;
L_0042a064:; BB(0x0042a064);
    /* 0042a064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a066: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042a069: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a06a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042a06d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a070: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042a074: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042a077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a07a: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042a07e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a080: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0042a086: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a088u); call_ind(t); }
L_0042a088:; BB(0x0042a088);
    /* 0042a088: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a08a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a08b: ret 8 */ FN_RET(0x0042a050); r_esp += 12; return;
}

void f_0042a090(void) /* sub_42A090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a090);
    /* 0042a090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a091: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a096: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042a099: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a09c: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0042a0a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a0a5: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 0042a0ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042a0ad: mov ecx, eax */ r_ecx = r_eax;
    /* 0042a0af: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042a0b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a0b4u); call_ind(t); }
    /* 0042a0b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a0b7: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 0042a0bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a0c0: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 0042a0c6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a0c8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042a0cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a0cdu); call_ind(t); }
    /* 0042a0cd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042a0d3: mov edx, dword ptr [ecx + 0xab4] */ r_edx = R32((u32)(r_ecx+0xab4u));
    /* 0042a0d9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0042a0dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a0df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a0e0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42a0e5u); f_005dcb00();
    /* 0042a0e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a0e8: mov ecx, eax */ r_ecx = r_eax;
    /* 0042a0ea: call 0x5d5780 */ r_esp -= 4; W32(r_esp, 0x42a0efu); f_005d5780();
    /* 0042a0ef: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042a0f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a0f4: je 0x42a10b */ if (fZ) goto L_0042a10b;
L_0042a0f6:; BB(0x0042a0f6);
    /* 0042a0f6: push 0xfbc */ { u32 v = 0xfbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a0fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a0fe: mov ecx, dword ptr [edx + 0x164] */ r_ecx = R32((u32)(r_edx+0x164u));
    /* 0042a104: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42a109u); f_005eaf00();
    /* 0042a109: jmp 0x42a11e */ goto L_0042a11e;
L_0042a10b:; BB(0x0042a10b);
    /* 0042a10b: push 0xfbd */ { u32 v = 0xfbdu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a110: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a113: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 0042a119: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42a11eu); f_005eaf00();
L_0042a11e:; BB(0x0042a11e);
    /* 0042a11e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a120: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a123: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 0042a129: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a12c: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 0042a132: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a134: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042a13a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a13cu); call_ind(t); }
    /* 0042a13c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a13f: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 0042a145: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a148: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 0042a14e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a150: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042a153: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a155u); call_ind(t); }
    /* 0042a155: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a158: ret  */ FN_RET(0x0042a090); r_esp += 4; return;
}

void f_0042a160(void) /* sub_42A160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a160);
    /* 0042a160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a161: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a163: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a166: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042a169: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a16c: mov ecx, dword ptr [eax + 0x158] */ r_ecx = R32((u32)(r_eax+0x158u));
    /* 0042a172: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a175: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 0042a17b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042a17d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042a17f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042a182: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a184u); call_ind(t); }
    /* 0042a184: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042a18b: jmp 0x42a196 */ goto L_0042a196;
L_0042a18d:; BB(0x0042a18d);
    /* 0042a18d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a190: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a193: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042a196:; BB(0x0042a196);
    /* 0042a196: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a19a: jge 0x42a1fc */ if ((fS==fO)) goto L_0042a1fc;
L_0042a19c:; BB(0x0042a19c);
    /* 0042a19c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a19f: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042a1a4: mov ecx, dword ptr [eax + edx*4 + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xaccu));
    /* 0042a1ab: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042a1ae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a1b1: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0042a1b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a1b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a1b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a1bb: mov edx, dword ptr [ecx + eax*4 + 0x150] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x150u));
    /* 0042a1c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a1c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a1c8: mov ecx, dword ptr [ecx + eax*4 + 0x150] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x150u));
    /* 0042a1cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a1d1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042a1d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a1d9u); call_ind(t); }
    /* 0042a1d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a1dc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a1df: mov eax, dword ptr [edx + ecx*4 + 0x150] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x150u));
    /* 0042a1e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a1e9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a1ec: mov ecx, dword ptr [edx + ecx*4 + 0x150] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x150u));
    /* 0042a1f3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042a1f5: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0042a1f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42a1fau); call_ind(t); }
    /* 0042a1fa: jmp 0x42a18d */ goto L_0042a18d;
L_0042a1fc:; BB(0x0042a1fc);
    /* 0042a1fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a1fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a1ff: ret  */ FN_RET(0x0042a160); r_esp += 4; return;
}

void f_0042a200(void) /* sub_42A200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a200);
    /* 0042a200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a201: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a203: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a206: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042a209: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a20c: mov ecx, dword ptr [eax + 0x158] */ r_ecx = R32((u32)(r_eax+0x158u));
    /* 0042a212: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a215: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 0042a21b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042a21d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042a21f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042a222: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a224u); call_ind(t); }
    /* 0042a224: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042a22b: jmp 0x42a236 */ goto L_0042a236;
L_0042a22d:; BB(0x0042a22d);
    /* 0042a22d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a230: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a233: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042a236:; BB(0x0042a236);
    /* 0042a236: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a23a: jge 0x42a261 */ if ((fS==fO)) goto L_0042a261;
L_0042a23c:; BB(0x0042a23c);
    /* 0042a23c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a23f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a242: mov ecx, dword ptr [eax + edx*4 + 0x150] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x150u));
    /* 0042a249: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a24c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a24f: mov edx, dword ptr [eax + edx*4 + 0x150] */ r_edx = R32((u32)(r_eax+r_edx*4+0x150u));
    /* 0042a256: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042a258: mov ecx, edx */ r_ecx = r_edx;
    /* 0042a25a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0042a25d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42a25fu); call_ind(t); }
    /* 0042a25f: jmp 0x42a22d */ goto L_0042a22d;
L_0042a261:; BB(0x0042a261);
    /* 0042a261: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a264: ret  */ FN_RET(0x0042a200); r_esp += 4; return;
}

void f_0042a270(void) /* sub_42A270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a270);
    /* 0042a270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a271: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a273: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a276: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042a279: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042a280: jmp 0x42a28b */ goto L_0042a28b;
L_0042a282:; BB(0x0042a282);
    /* 0042a282: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a285: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042a288: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042a28b:; BB(0x0042a28b);
    /* 0042a28b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a28f: jge 0x42a2a2 */ if ((fS==fO)) goto L_0042a2a2;
L_0042a291:; BB(0x0042a291);
    /* 0042a291: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a294: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a297: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042a29b: call 0x42c390 */ r_esp -= 4; W32(r_esp, 0x42a2a0u); f_0042c390();
    /* 0042a2a0: jmp 0x42a282 */ goto L_0042a282;
L_0042a2a2:; BB(0x0042a2a2);
    /* 0042a2a2: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a2a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a2a5: ret  */ FN_RET(0x0042a270); r_esp += 4; return;
}

void f_0042a2b0(void) /* sub_42A2B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a2b0);
    /* 0042a2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a2b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a2b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042a2b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042a2c0: jmp 0x42a2cb */ goto L_0042a2cb;
L_0042a2c2:; BB(0x0042a2c2);
    /* 0042a2c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a2c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042a2c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042a2cb:; BB(0x0042a2cb);
    /* 0042a2cb: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a2cf: jge 0x42a2fc */ if ((fS==fO)) goto L_0042a2fc;
L_0042a2d1:; BB(0x0042a2d1);
    /* 0042a2d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a2d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a2d7: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042a2db: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0042a2e1: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42a2e6u); f_005f5400();
    /* 0042a2e6: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a2e9: jne 0x42a2fa */ if (!fZ) goto L_0042a2fa;
L_0042a2eb:; BB(0x0042a2eb);
    /* 0042a2eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a2ee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a2f1: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042a2f5: call 0x42c410 */ r_esp -= 4; W32(r_esp, 0x42a2fau); f_0042c410();
L_0042a2fa:; BB(0x0042a2fa);
    /* 0042a2fa: jmp 0x42a2c2 */ goto L_0042a2c2;
L_0042a2fc:; BB(0x0042a2fc);
    /* 0042a2fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a2fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a2ff: ret 4 */ FN_RET(0x0042a2b0); r_esp += 8; return;
}

void f_0042a310(void) /* sub_42A310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a310);
    /* 0042a310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a311: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a316: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042a319: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042a320: jmp 0x42a32b */ goto L_0042a32b;
L_0042a322:; BB(0x0042a322);
    /* 0042a322: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a325: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042a328: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042a32b:; BB(0x0042a32b);
    /* 0042a32b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a32f: jge 0x42a35c */ if ((fS==fO)) goto L_0042a35c;
L_0042a331:; BB(0x0042a331);
    /* 0042a331: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a334: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a337: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042a33b: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0042a341: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42a346u); f_005f5400();
    /* 0042a346: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a349: jne 0x42a35a */ if (!fZ) goto L_0042a35a;
L_0042a34b:; BB(0x0042a34b);
    /* 0042a34b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a34e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a351: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042a355: call 0x42c4b0 */ r_esp -= 4; W32(r_esp, 0x42a35au); f_0042c4b0();
L_0042a35a:; BB(0x0042a35a);
    /* 0042a35a: jmp 0x42a322 */ goto L_0042a322;
L_0042a35c:; BB(0x0042a35c);
    /* 0042a35c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a35e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a35f: ret 4 */ FN_RET(0x0042a310); r_esp += 8; return;
}

void f_0042a370(void) /* sub_42A370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a370);
    /* 0042a370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a371: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042a377: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a37b: je 0x42a383 */ if (fZ) goto L_0042a383;
L_0042a37d:; BB(0x0042a37d);
    /* 0042a37d: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a381: jne 0x42a402 */ if (!fZ) goto L_0042a402;
L_0042a383:; BB(0x0042a383);
    /* 0042a383: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a386: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0042a389: cmp dword ptr [ecx + 0xae4], 0 */ {  u32 a = R32((u32)(r_ecx+0xae4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a390: je 0x42a3bf */ if (fZ) goto L_0042a3bf;
L_0042a392:; BB(0x0042a392);
    /* 0042a392: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a395: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0042a398: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 0042a39e: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x42a3a3u); f_005eafc0();
    /* 0042a3a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a3a5: je 0x42a3bf */ if (fZ) goto L_0042a3bf;
L_0042a3a7:; BB(0x0042a3a7);
    /* 0042a3a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a3aa: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0042a3ad: mov ecx, dword ptr [edx + 0xae4] */ r_ecx = R32((u32)(r_edx+0xae4u));
    /* 0042a3b3: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x42a3b8u); f_005f54a0();
    /* 0042a3b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042a3bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a3bd: jne 0x42a3fb */ if (!fZ) goto L_0042a3fb;
L_0042a3bf:; BB(0x0042a3bf);
    /* 0042a3bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a3c2: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0042a3c5: cmp dword ptr [edx + 0xae4], 0 */ {  u32 a = R32((u32)(r_edx+0xae4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a3cc: je 0x42a402 */ if (fZ) goto L_0042a402;
L_0042a3ce:; BB(0x0042a3ce);
    /* 0042a3ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a3d1: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0042a3d4: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 0042a3da: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x42a3dfu); f_005eafc0();
    /* 0042a3df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a3e1: je 0x42a402 */ if (fZ) goto L_0042a402;
L_0042a3e3:; BB(0x0042a3e3);
    /* 0042a3e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a3e6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0042a3e9: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 0042a3ef: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x42a3f4u); f_005f54a0();
    /* 0042a3f4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042a3f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a3f9: je 0x42a402 */ if (fZ) goto L_0042a402;
L_0042a3fb:; BB(0x0042a3fb);
    /* 0042a3fb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0042a3fd: jmp 0x42a48c */ goto L_0042a48c;
L_0042a402:; BB(0x0042a402);
    /* 0042a402: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a406: je 0x42a40e */ if (fZ) goto L_0042a40e;
L_0042a408:; BB(0x0042a408);
    /* 0042a408: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a40c: jne 0x42a48a */ if (!fZ) goto L_0042a48a;
L_0042a40e:; BB(0x0042a40e);
    /* 0042a40e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a411: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042a414: cmp dword ptr [eax + 0xae4], 0 */ {  u32 a = R32((u32)(r_eax+0xae4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a41b: je 0x42a44a */ if (fZ) goto L_0042a44a;
L_0042a41d:; BB(0x0042a41d);
    /* 0042a41d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a420: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0042a423: mov ecx, dword ptr [edx + 0xae4] */ r_ecx = R32((u32)(r_edx+0xae4u));
    /* 0042a429: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x42a42eu); f_005eafc0();
    /* 0042a42e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a430: je 0x42a44a */ if (fZ) goto L_0042a44a;
L_0042a432:; BB(0x0042a432);
    /* 0042a432: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a435: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0042a438: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 0042a43e: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x42a443u); f_005f54a0();
    /* 0042a443: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042a446: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a448: jne 0x42a486 */ if (!fZ) goto L_0042a486;
L_0042a44a:; BB(0x0042a44a);
    /* 0042a44a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a44d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0042a450: cmp dword ptr [ecx + 0xae4], 0 */ {  u32 a = R32((u32)(r_ecx+0xae4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a457: je 0x42a48a */ if (fZ) goto L_0042a48a;
L_0042a459:; BB(0x0042a459);
    /* 0042a459: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a45c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0042a45f: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 0042a465: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x42a46au); f_005eafc0();
    /* 0042a46a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a46c: je 0x42a48a */ if (fZ) goto L_0042a48a;
L_0042a46e:; BB(0x0042a46e);
    /* 0042a46e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a471: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0042a474: mov ecx, dword ptr [edx + 0xae4] */ r_ecx = R32((u32)(r_edx+0xae4u));
    /* 0042a47a: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x42a47fu); f_005f54a0();
    /* 0042a47f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042a482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a484: je 0x42a48a */ if (fZ) goto L_0042a48a;
L_0042a486:; BB(0x0042a486);
    /* 0042a486: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0042a488: jmp 0x42a48c */ goto L_0042a48c;
L_0042a48a:; BB(0x0042a48a);
    /* 0042a48a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0042a48c:; BB(0x0042a48c);
    /* 0042a48c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a48e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a48f: ret 4 */ FN_RET(0x0042a370); r_esp += 8; return;
}

void f_0042a4a0(void) /* sub_42A4A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a4a0);
    /* 0042a4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a4a3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a4a6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042a4a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a4ac: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a4b2: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42a4b7u); f_005eb220();
    /* 0042a4b7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042a4ba: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0042a4bc: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0042a4be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042a4c1: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0042a4c4: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042a4ca: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0042a4d0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042a4d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a4d5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a4d9: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0042a4dc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042a4df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a4e1: je 0x42a605 */ if (fZ) goto L_0042a605;
L_0042a4e7:; BB(0x0042a4e7);
    /* 0042a4e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042a4e9: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042a4ec: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042a4f1: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042a4f8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042a4fb: mov edx, 1 */ r_edx = 0x1u;
    /* 0042a500: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042a503: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042a508: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042a50f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042a512: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a515: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042a518: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a51a: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a51d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042a520: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042a523: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a525: jne 0x42a57c */ if (!fZ) goto L_0042a57c;
L_0042a527:; BB(0x0042a527);
    /* 0042a527: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042a52d: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 0042a533: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042a536: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a538: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042a53b: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042a541: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0042a548: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042a54b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0042a550: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042a553: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042a559: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0042a560: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042a563: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042a566: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a569: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042a56b: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a56e: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042a571: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0042a574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a576: je 0x42a600 */ if (fZ) goto L_0042a600;
L_0042a57c:; BB(0x0042a57c);
    /* 0042a57c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a57f: mov ecx, dword ptr [ecx + 0x15c] */ r_ecx = R32((u32)(r_ecx+0x15cu));
    /* 0042a585: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42a58au); f_005eb220();
    /* 0042a58a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a58c: jne 0x42a5c3 */ if (!fZ) goto L_0042a5c3;
L_0042a58e:; BB(0x0042a58e);
    /* 0042a58e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a591: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0042a597: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042a59a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a59b: fld1  */ FPUSH(1.0);
    /* 0042a59d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042a5a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5a2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5a8: push 0x18a9a */ { u32 v = 0x18a9au; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5ad: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0042a5b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042a5b5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042a5bb: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0042a5c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42a5c3u); call_ind(t); }
L_0042a5c3:; BB(0x0042a5c3);
    /* 0042a5c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a5c8: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a5ce: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a5d1: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 0042a5d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042a5d9: mov ecx, eax */ r_ecx = r_eax;
    /* 0042a5db: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042a5e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a5e3u); call_ind(t); }
    /* 0042a5e3: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5e5: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a5e7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a5ea: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a5f0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a5f3: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a5f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a5fb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a5fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a600u); call_ind(t); }
L_0042a600:; BB(0x0042a600);
    /* 0042a600: jmp 0x42a7f0 */ goto L_0042a7f0;
L_0042a605:; BB(0x0042a605);
    /* 0042a605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a607: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a60a: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a610: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a613: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a619: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a61b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042a621: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a623u); call_ind(t); }
    /* 0042a623: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042a626: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042a629: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042a62c: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0042a62f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0042a632: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042a636: ja 0x42a718 */ if ((!fC&&!fZ)) goto L_0042a718;
L_0042a63c:; BB(0x0042a63c);
    /* 0042a63c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042a63f: jmp dword ptr [eax*4 + 0x42a7f8] */ { u32 t = R32((u32)(r_eax*4+0x42a7f8u)); switch (t) { case 0x42a646u: goto L_0042a646; case 0x42a668u: goto L_0042a668; case 0x42a68du: goto L_0042a68d; case 0x42a718u: goto L_0042a718; case 0x42a6b2u: goto L_0042a6b2; case 0x42a6d4u: goto L_0042a6d4; case 0x42a6f6u: goto L_0042a6f6; default: UNSUP(0x0042a63f, "jump table entry is not a known target"); } }
L_0042a646:; BB(0x0042a646);
    /* 0042a646: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a648: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a64a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a64d: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a653: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a656: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a65c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a65e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a661: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a663u); call_ind(t); }
    /* 0042a663: jmp 0x42a753 */ goto L_0042a753;
L_0042a668:; BB(0x0042a668);
    /* 0042a668: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a66a: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 0042a66f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a672: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a678: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a67b: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a681: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a683: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a686: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a688u); call_ind(t); }
    /* 0042a688: jmp 0x42a753 */ goto L_0042a753;
L_0042a68d:; BB(0x0042a68d);
    /* 0042a68d: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a68f: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a694: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a697: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a69d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6a0: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a6a6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a6a8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a6ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a6adu); call_ind(t); }
    /* 0042a6ad: jmp 0x42a753 */ goto L_0042a753;
L_0042a6b2:; BB(0x0042a6b2);
    /* 0042a6b2: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a6b4: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a6b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6bc: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a6c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6c5: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a6cb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a6cd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a6d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a6d2u); call_ind(t); }
    /* 0042a6d2: jmp 0x42a753 */ goto L_0042a753;
L_0042a6d4:; BB(0x0042a6d4);
    /* 0042a6d4: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a6d6: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a6db: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6de: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a6e4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a6e7: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a6ed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a6ef: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a6f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a6f4u); call_ind(t); }
    /* 0042a6f4: jmp 0x42a753 */ goto L_0042a753;
L_0042a6f6:; BB(0x0042a6f6);
    /* 0042a6f6: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a6f8: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a6fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a700: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a706: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a709: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a70f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a711: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a714: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a716u); call_ind(t); }
    /* 0042a716: jmp 0x42a753 */ goto L_0042a753;
L_0042a718:; BB(0x0042a718);
    /* 0042a718: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a71a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a71d: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a723: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a726: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a72c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a72e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042a734: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a736u); call_ind(t); }
    /* 0042a736: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a738: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a73a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a73d: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0042a743: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a746: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 0042a74c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a74e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042a751: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a753u); call_ind(t); }
L_0042a753:; BB(0x0042a753);
    /* 0042a753: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a756: mov ecx, dword ptr [ecx + 0x15c] */ r_ecx = R32((u32)(r_ecx+0x15cu));
    /* 0042a75c: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42a761u); f_005eb220();
    /* 0042a761: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a763: jne 0x42a7a1 */ if (!fZ) goto L_0042a7a1;
L_0042a765:; BB(0x0042a765);
    /* 0042a765: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0042a769: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a76b: je 0x42a7a1 */ if (fZ) goto L_0042a7a1;
L_0042a76d:; BB(0x0042a76d);
    /* 0042a76d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a76f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a770: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0042a776: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042a779: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a77a: fld1  */ FPUSH(1.0);
    /* 0042a77c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042a77f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a781: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a785: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a787: push 0x18a9a */ { u32 v = 0x18a9au; r_esp -= 4; W32(r_esp, v); }
    /* 0042a78c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0042a791: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042a793: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042a799: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0042a79f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a7a1u); call_ind(t); }
L_0042a7a1:; BB(0x0042a7a1);
    /* 0042a7a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042a7a4: mov ecx, dword ptr [ecx + 0x15c] */ r_ecx = R32((u32)(r_ecx+0x15cu));
    /* 0042a7aa: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42a7afu); f_005eb220();
    /* 0042a7af: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a7b2: jne 0x42a7f0 */ if (!fZ) goto L_0042a7f0;
L_0042a7b4:; BB(0x0042a7b4);
    /* 0042a7b4: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0042a7b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a7ba: jne 0x42a7f0 */ if (!fZ) goto L_0042a7f0;
L_0042a7bc:; BB(0x0042a7bc);
    /* 0042a7bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7bf: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0042a7c5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042a7c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7c9: fld1  */ FPUSH(1.0);
    /* 0042a7cb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042a7ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7d0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7d6: push 0x18a9a */ { u32 v = 0x18a9au; r_esp -= 4; W32(r_esp, v); }
    /* 0042a7db: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0042a7e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042a7e2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042a7e8: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0042a7ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a7f0u); call_ind(t); }
L_0042a7f0:; BB(0x0042a7f0);
    /* 0042a7f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a7f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a7f3: ret 4 */ FN_RET(0x0042a4a0); r_esp += 8; return;
}

void f_0042a820(void) /* sub_42A820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a820);
    /* 0042a820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a821: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a823: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a826: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042a82b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a82d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042a830: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0042a833: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0042a836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a837: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042a83a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a83b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42a840u); f_005dcb00();
    /* 0042a840: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a843: mov ecx, eax */ r_ecx = r_eax;
    /* 0042a845: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x42a84au); f_005d6020();
    /* 0042a84a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a84e: jne 0x42a868 */ if (!fZ) goto L_0042a868;
L_0042a850:; BB(0x0042a850);
    /* 0042a850: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a854: jne 0x42a868 */ if (!fZ) goto L_0042a868;
L_0042a856:; BB(0x0042a856);
    /* 0042a856: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 0042a859: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a85a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a85d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a85e: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x42a863u); f_006311e0();
    /* 0042a863: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a866: jmp 0x42a8bc */ goto L_0042a8bc;
L_0042a868:; BB(0x0042a868);
    /* 0042a868: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a86c: jge 0x42a879 */ if ((fS==fO)) goto L_0042a879;
L_0042a86e:; BB(0x0042a86e);
    /* 0042a86e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a871: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042a874: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0042a877: jmp 0x42a87f */ goto L_0042a87f;
L_0042a879:; BB(0x0042a879);
    /* 0042a879: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042a87c: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
L_0042a87f:; BB(0x0042a87f);
    /* 0042a87f: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0042a882: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0042a885: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a889: jge 0x42a896 */ if ((fS==fO)) goto L_0042a896;
L_0042a88b:; BB(0x0042a88b);
    /* 0042a88b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a88e: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042a891: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0042a894: jmp 0x42a89c */ goto L_0042a89c;
L_0042a896:; BB(0x0042a896);
    /* 0042a896: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042a899: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
L_0042a89c:; BB(0x0042a89c);
    /* 0042a89c: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0042a89f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0042a8a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8a8: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0042a8ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8ac: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042a8af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8b0: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0042a8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8b4: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x42a8b9u); f_0064c8d0();
    /* 0042a8b9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042a8bc:; BB(0x0042a8bc);
    /* 0042a8bc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a8c0: jne 0x42a8de */ if (!fZ) goto L_0042a8de;
L_0042a8c2:; BB(0x0042a8c2);
    /* 0042a8c2: push 0x6b6b54 */ { u32 v = 0x6b6b54u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42a8ccu); f_00630f40();
    /* 0042a8cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a8cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8d0: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0042a8d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8d4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x42a8d9u); f_00686d8e();
    /* 0042a8d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a8dc: jmp 0x42a925 */ goto L_0042a925;
L_0042a8de:; BB(0x0042a8de);
    /* 0042a8de: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a8e2: jle 0x42a8f6 */ if ((fZ||fS!=fO)) goto L_0042a8f6;
L_0042a8e4:; BB(0x0042a8e4);
    /* 0042a8e4: push 0x6b6b44 */ { u32 v = 0x6b6b44u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8e9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42a8eeu); f_00630f40();
    /* 0042a8ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a8f1: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0042a8f4: jmp 0x42a906 */ goto L_0042a906;
L_0042a8f6:; BB(0x0042a8f6);
    /* 0042a8f6: push 0x6b6b30 */ { u32 v = 0x6b6b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a8fb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42a900u); f_00630f40();
    /* 0042a900: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a903: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_0042a906:; BB(0x0042a906);
    /* 0042a906: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0042a909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a90a: push 0x6b6b18 */ { u32 v = 0x6b6b18u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a90f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42a914u); f_00630f40();
    /* 0042a914: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a918: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0042a91b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a91c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x42a922u); call_ind(t); }
    /* 0042a922: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042a925:; BB(0x0042a925);
    /* 0042a925: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042a92b: mov edx, dword ptr [ecx + 0xab4] */ r_edx = R32((u32)(r_ecx+0xab4u));
    /* 0042a931: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0042a934: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042a937: cmp eax, dword ptr [ebp - 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042a93a: jne 0x42a955 */ if (!fZ) goto L_0042a955;
L_0042a93c:; BB(0x0042a93c);
    /* 0042a93c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042a93f: mov edx, dword ptr [ecx + 0x160] */ r_edx = R32((u32)(r_ecx+0x160u));
    /* 0042a945: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0042a948: mov ecx, dword ptr [eax + 0x160] */ r_ecx = R32((u32)(r_eax+0x160u));
    /* 0042a94e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042a950: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042a953: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42a955u); call_ind(t); }
L_0042a955:; BB(0x0042a955);
    /* 0042a955: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0042a958: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a959: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0042a95c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a95d: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042a962: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042a965: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a966: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042a969: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042a96a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42a96fu); f_005dcb00();
    /* 0042a96f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042a972: mov ecx, eax */ r_ecx = r_eax;
    /* 0042a974: call 0x5d67d0 */ r_esp -= 4; W32(r_esp, 0x42a979u); f_005d67d0();
    /* 0042a979: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042a97c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042a97e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x42a983u); f_00686d72();
    /* 0042a983: mov esp, ebp */ r_esp = r_ebp;
    /* 0042a985: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042a986: ret 4 */ FN_RET(0x0042a820); r_esp += 8; return;
}

void f_0042a990(void) /* sub_42A990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042a990);
    /* 0042a990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042a991: mov ebp, esp */ r_ebp = r_esp;
    /* 0042a993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042a995: push 0x69e4d3 */ { u32 v = 0x69e4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a99a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042a9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a9a1: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042a9a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042a9a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042a9ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042a9ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042a9af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042a9b5: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0042a9b8: mov dword ptr [ebp - 0x38], 0xf */ W32((u32)(r_ebp+0xffffffc8u), 0xfu);
    /* 0042a9bf: mov dword ptr [ebp - 0x34], 0x82 */ W32((u32)(r_ebp+0xffffffccu), 0x82u);
    /* 0042a9c6: mov dword ptr [ebp - 0x30], 0xf */ W32((u32)(r_ebp+0xffffffd0u), 0xfu);
    /* 0042a9cd: mov dword ptr [ebp - 0x2c], 0x82 */ W32((u32)(r_ebp+0xffffffd4u), 0x82u);
    /* 0042a9d4: mov dword ptr [ebp - 0x28], 0xf */ W32((u32)(r_ebp+0xffffffd8u), 0xfu);
    /* 0042a9db: mov dword ptr [ebp - 0x24], 0x82 */ W32((u32)(r_ebp+0xffffffdcu), 0x82u);
    /* 0042a9e2: mov dword ptr [ebp - 0x20], 0xf */ W32((u32)(r_ebp+0xffffffe0u), 0xfu);
    /* 0042a9e9: mov dword ptr [ebp - 0x1c], 0x82 */ W32((u32)(r_ebp+0xffffffe4u), 0x82u);
    /* 0042a9f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042a9f2: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042a9f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042a9fa: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042aa00: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042aa03: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042aa05: mov ecx, eax */ r_ecx = r_eax;
    /* 0042aa07: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042aa0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42aa0cu); call_ind(t); }
    /* 0042aa0c: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0042aa13: jmp 0x42aa1e */ goto L_0042aa1e;
L_0042aa15:; BB(0x0042aa15);
    /* 0042aa15: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aa18: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042aa1b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0042aa1e:; BB(0x0042aa1e);
    /* 0042aa1e: cmp dword ptr [ebp - 0x18], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042aa22: jge 0x42abf3 */ if ((fS==fO)) goto L_0042abf3;
L_0042aa28:; BB(0x0042aa28);
    /* 0042aa28: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aa2b: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042aa30: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042aa34: cmp dword ptr [ecx + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042aa3b: je 0x42aa3f */ if (fZ) goto L_0042aa3f;
L_0042aa3d:; BB(0x0042aa3d);
    /* 0042aa3d: jmp 0x42aa15 */ goto L_0042aa15;
L_0042aa3f:; BB(0x0042aa3f);
    /* 0042aa3f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0042aa46: jmp 0x42aa51 */ goto L_0042aa51;
L_0042aa48:; BB(0x0042aa48);
    /* 0042aa48: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aa4b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042aa4e: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
L_0042aa51:; BB(0x0042aa51);
    /* 0042aa51: cmp dword ptr [ebp - 0x40], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042aa55: jge 0x42abee */ if ((fS==fO)) goto L_0042abee;
L_0042aa5b:; BB(0x0042aa5b);
    /* 0042aa5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042aa5d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aa60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042aa61: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aa64: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042aa67: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042aa6b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aa6e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042aa71: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042aa75: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042aa77: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 0042aa7d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42aa7fu); call_ind(t); }
    /* 0042aa7f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aa82: add eax, dword ptr [ebp + ecx*8 - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042aa86: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042aa89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042aa8b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aa8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042aa8f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aa92: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042aa95: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042aa99: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aa9c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042aa9f: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042aaa3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042aaa5: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0042aaab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42aaadu); call_ind(t); }
    /* 0042aaad: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aab0: add eax, dword ptr [ebp + ecx*8 - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042aab4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0042aab7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042aab9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aabc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042aabd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aac0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042aac3: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042aac7: call 0x42c8a0 */ r_esp -= 4; W32(r_esp, 0x42aaccu); f_0042c8a0();
    /* 0042aacc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042aace: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aad1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042aad2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aad5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042aad8: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042aadc: call 0x42ca40 */ r_esp -= 4; W32(r_esp, 0x42aae1u); f_0042ca40();
    /* 0042aae1: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0042aae8: jmp 0x42aaf3 */ goto L_0042aaf3;
L_0042aaea:; BB(0x0042aaea);
    /* 0042aaea: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0042aaed: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042aaf0: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_0042aaf3:; BB(0x0042aaf3);
    /* 0042aaf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042aaf5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042aaf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042aaf9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aafc: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042aaff: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042ab03: call 0x5ccdf0 */ r_esp -= 4; W32(r_esp, 0x42ab08u); f_005ccdf0();
    /* 0042ab08: cmp dword ptr [ebp - 0x44], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ab0b: jg 0x42abe9 */ if ((!fZ&&fS==fO)) goto L_0042abe9;
L_0042ab11:; BB(0x0042ab11);
    /* 0042ab11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ab14: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042ab17: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042ab1b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042ab1e: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042ab24: lea ecx, [edx + eax + 0x17c] */ r_ecx = (u32)(r_edx+r_eax+0x17cu);
    /* 0042ab2b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0042ab2e: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0042ab31: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042ab34: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab38: jne 0x42ab3f */ if (!fZ) goto L_0042ab3f;
L_0042ab3a:; BB(0x0042ab3a);
    /* 0042ab3a: jmp 0x42abe9 */ goto L_0042abe9;
L_0042ab3f:; BB(0x0042ab3f);
    /* 0042ab3f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ab41: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042ab47: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x42ab4cu); f_00637810();
    /* 0042ab4c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ab4f: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 0042ab55: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ab58: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab5f: je 0x42abcf */ if (fZ) goto L_0042abcf;
L_0042ab61:; BB(0x0042ab61);
    /* 0042ab61: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042ab67: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x42ab6cu); f_00637630();
    /* 0042ab6c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042ab6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab71: je 0x42abcf */ if (fZ) goto L_0042abcf;
L_0042ab73:; BB(0x0042ab73);
    /* 0042ab73: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ab75: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42ab7au); f_00686d82();
    /* 0042ab7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ab7d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042ab80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042ab87: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ab8b: je 0x42abad */ if (fZ) goto L_0042abad;
L_0042ab8d:; BB(0x0042ab8d);
    /* 0042ab8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ab8f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042ab92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ab93: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042ab96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ab97: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042ab9c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042ab9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042aba0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0042aba3: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x42aba8u); f_00606e60();
    /* 0042aba8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0042abab: jmp 0x42abb4 */ goto L_0042abb4;
L_0042abad:; BB(0x0042abad);
    /* 0042abad: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0042abb4:; BB(0x0042abb4);
    /* 0042abb4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0042abb7: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0042abba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042abc1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0042abc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042abc5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042abc8: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x42abcdu); f_005f6050();
    /* 0042abcd: jmp 0x42abe4 */ goto L_0042abe4;
L_0042abcf:; BB(0x0042abcf);
    /* 0042abcf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042abd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042abd3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042abd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042abd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042abda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042abdc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042abdf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042abe2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42abe4u); call_ind(t); }
L_0042abe4:; BB(0x0042abe4);
    /* 0042abe4: jmp 0x42aaea */ goto L_0042aaea;
L_0042abe9:; BB(0x0042abe9);
    /* 0042abe9: jmp 0x42aa48 */ goto L_0042aa48;
L_0042abee:; BB(0x0042abee);
    /* 0042abee: jmp 0x42aa15 */ goto L_0042aa15;
L_0042abf3:; BB(0x0042abf3);
    /* 0042abf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042abf5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042abfb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042abfe: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042ac03: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042ac06: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042ac08: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042ac0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ac0du); call_ind(t); }
    /* 0042ac0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ac10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ac17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042ac18: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ac1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ac1b: ret  */ FN_RET(0x0042a990); r_esp += 4; return;
}

void f_0042ac20(void) /* sub_42AC20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042ac20);
    /* 0042ac20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ac21: mov ebp, esp */ r_ebp = r_esp;
    /* 0042ac23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ac26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042ac29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ac2b: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042ac30: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042ac33: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042ac39: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ac3c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042ac3e: mov ecx, eax */ r_ecx = r_eax;
    /* 0042ac40: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ac43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ac45u); call_ind(t); }
    /* 0042ac45: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042ac4b: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x42ac50u); f_00637630();
    /* 0042ac50: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042ac53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ac55: je 0x42ac72 */ if (fZ) goto L_0042ac72;
L_0042ac57:; BB(0x0042ac57);
    /* 0042ac57: movzx edx, byte ptr [0x795f94] */ r_edx = (u32)R8((u32)(0x795f94u));
    /* 0042ac5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ac60: jne 0x42ac72 */ if (!fZ) goto L_0042ac72;
L_0042ac62:; BB(0x0042ac62);
    /* 0042ac62: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ac65: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 0042ac6b: call 0x42dcf0 */ r_esp -= 4; W32(r_esp, 0x42ac70u); f_0042dcf0();
    /* 0042ac70: jmp 0x42accc */ goto L_0042accc;
L_0042ac72:; BB(0x0042ac72);
    /* 0042ac72: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042ac79: jmp 0x42ac84 */ goto L_0042ac84;
L_0042ac7b:; BB(0x0042ac7b);
    /* 0042ac7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ac7e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042ac81: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042ac84:; BB(0x0042ac84);
    /* 0042ac84: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ac88: jge 0x42acb2 */ if ((fS==fO)) goto L_0042acb2;
L_0042ac8a:; BB(0x0042ac8a);
    /* 0042ac8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ac8d: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ac92: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042ac96: cmp dword ptr [ecx + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ac9d: jne 0x42acb0 */ if (!fZ) goto L_0042acb0;
L_0042ac9f:; BB(0x0042ac9f);
    /* 0042ac9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042aca2: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042aca7: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042acab: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x42acb0u); f_005cb9b0();
L_0042acb0:; BB(0x0042acb0);
    /* 0042acb0: jmp 0x42ac7b */ goto L_0042ac7b;
L_0042acb2:; BB(0x0042acb2);
    /* 0042acb2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0042acb4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042acba: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042acbd: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042acc2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042acc5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042acc7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042acca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42acccu); call_ind(t); }
L_0042accc:; BB(0x0042accc);
    /* 0042accc: mov esp, ebp */ r_esp = r_ebp;
    /* 0042acce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042accf: ret  */ FN_RET(0x0042ac20); r_esp += 4; return;
}

void f_0042acd0(void) /* sub_42ACD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042acd0);
    /* 0042acd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042acd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042acd3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042acd6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042acd9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042ace0: jmp 0x42aceb */ goto L_0042aceb;
L_0042ace2:; BB(0x0042ace2);
    /* 0042ace2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ace5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ace8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0042aceb:; BB(0x0042aceb);
    /* 0042aceb: cmp dword ptr [ebp - 8], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042acef: jge 0x42ad7b */ if ((fS==fO)) goto L_0042ad7b;
L_0042acf5:; BB(0x0042acf5);
    /* 0042acf5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0042acfc: jmp 0x42ad07 */ goto L_0042ad07;
L_0042acfe:; BB(0x0042acfe);
    /* 0042acfe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ad01: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042ad04: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0042ad07:; BB(0x0042ad07);
    /* 0042ad07: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ad0b: jge 0x42ad76 */ if ((fS==fO)) goto L_0042ad76;
L_0042ad0d:; BB(0x0042ad0d);
    /* 0042ad0d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0042ad14: jmp 0x42ad1f */ goto L_0042ad1f;
L_0042ad16:; BB(0x0042ad16);
    /* 0042ad16: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042ad19: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042ad1c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0042ad1f:; BB(0x0042ad1f);
    /* 0042ad1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad21: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ad24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ad28: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ad2b: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042ad2f: call 0x5ccdf0 */ r_esp -= 4; W32(r_esp, 0x42ad34u); f_005ccdf0();
    /* 0042ad34: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ad37: jg 0x42ad74 */ if ((!fZ&&fS==fO)) goto L_0042ad74;
L_0042ad39:; BB(0x0042ad39);
    /* 0042ad39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ad3c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ad3f: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042ad43: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ad46: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042ad4c: lea ecx, [edx + eax + 0x17c] */ r_ecx = (u32)(r_edx+r_eax+0x17cu);
    /* 0042ad53: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042ad56: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0042ad59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042ad5c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ad60: je 0x42ad72 */ if (fZ) goto L_0042ad72;
L_0042ad62:; BB(0x0042ad62);
    /* 0042ad62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ad65: call 0x5f60e0 */ r_esp -= 4; W32(r_esp, 0x42ad6au); f_005f60e0();
    /* 0042ad6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ad6c: je 0x42ad72 */ if (fZ) goto L_0042ad72;
L_0042ad6e:; BB(0x0042ad6e);
    /* 0042ad6e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0042ad70: jmp 0x42ad7d */ goto L_0042ad7d;
L_0042ad72:; BB(0x0042ad72);
    /* 0042ad72: jmp 0x42ad16 */ goto L_0042ad16;
L_0042ad74:; BB(0x0042ad74);
    /* 0042ad74: jmp 0x42acfe */ goto L_0042acfe;
L_0042ad76:; BB(0x0042ad76);
    /* 0042ad76: jmp 0x42ace2 */ goto L_0042ace2;
L_0042ad7b:; BB(0x0042ad7b);
    /* 0042ad7b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0042ad7d:; BB(0x0042ad7d);
    /* 0042ad7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ad7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ad80: ret  */ FN_RET(0x0042acd0); r_esp += 4; return;
}

void f_0042ad90(void) /* sub_42AD90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042ad90);
    /* 0042ad90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad91: mov ebp, esp */ r_ebp = r_esp;
    /* 0042ad93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad95: push 0x69e4f9 */ { u32 v = 0x69e4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ad9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042ada0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ada1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ada4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042ada9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042adab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042adac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042adaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042adb5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0042adb8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042adbb: cmp dword ptr [eax + 0x168], 0 */ {  u32 a = R32((u32)(r_eax+0x168u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042adc2: je 0x42addd */ if (fZ) goto L_0042addd;
L_0042adc4:; BB(0x0042adc4);
    /* 0042adc4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042adc7: mov edx, dword ptr [ecx + 0x168] */ r_edx = R32((u32)(r_ecx+0x168u));
    /* 0042adcd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042add0: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 0042add6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042add8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042addb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42adddu); call_ind(t); }
L_0042addd:; BB(0x0042addd);
    /* 0042addd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042addf: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042ade5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042ade8: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042aded: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042adf0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042adf2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042adf5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42adf7u); call_ind(t); }
    /* 0042adf7: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0042adfe: jmp 0x42ae09 */ goto L_0042ae09;
L_0042ae00:; BB(0x0042ae00);
    /* 0042ae00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042ae03: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042ae06: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0042ae09:; BB(0x0042ae09);
    /* 0042ae09: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ae0d: jge 0x42affe */ if ((fS==fO)) goto L_0042affe;
L_0042ae13:; BB(0x0042ae13);
    /* 0042ae13: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0042ae1a: jmp 0x42ae25 */ goto L_0042ae25;
L_0042ae1c:; BB(0x0042ae1c);
    /* 0042ae1c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ae1f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042ae22: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0042ae25:; BB(0x0042ae25);
    /* 0042ae25: cmp dword ptr [ebp - 0x18], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ae29: jge 0x42aff9 */ if ((fS==fO)) goto L_0042aff9;
L_0042ae2f:; BB(0x0042ae2f);
    /* 0042ae2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ae32: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042ae38: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042ae3c: cmp dword ptr [edx + 0x110], 1 */ {  u32 a = R32((u32)(r_edx+0x110u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ae43: je 0x42ae5d */ if (fZ) goto L_0042ae5d;
L_0042ae45:; BB(0x0042ae45);
    /* 0042ae45: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ae48: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042ae4e: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042ae52: cmp dword ptr [edx + 0x110], 3 */ {  u32 a = R32((u32)(r_edx+0x110u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ae59: je 0x42ae5d */ if (fZ) goto L_0042ae5d;
L_0042ae5b:; BB(0x0042ae5b);
    /* 0042ae5b: jmp 0x42ae1c */ goto L_0042ae1c;
L_0042ae5d:; BB(0x0042ae5d);
    /* 0042ae5d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ae60: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042ae66: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042ae6a: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42ae6fu); f_005f5400();
    /* 0042ae6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ae70: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042ae76: call 0x438870 */ r_esp -= 4; W32(r_esp, 0x42ae7bu); f_00438870();
    /* 0042ae7b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042ae7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ae80: je 0x42ae99 */ if (fZ) goto L_0042ae99;
L_0042ae82:; BB(0x0042ae82);
    /* 0042ae82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ae84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042ae87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ae88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ae8b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ae8e: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042ae92: call 0x42c8a0 */ r_esp -= 4; W32(r_esp, 0x42ae97u); f_0042c8a0();
    /* 0042ae97: jmp 0x42ae1c */ goto L_0042ae1c;
L_0042ae99:; BB(0x0042ae99);
    /* 0042ae99: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042ae9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ae9d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042aea3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042aea5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042aeab: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0042aeb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42aeb3u); call_ind(t); }
    /* 0042aeb3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042aeb6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042aeb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042aeba: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042aec0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042aec2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042aec8: mov edx, dword ptr [eax + 0x1c8] */ r_edx = R32((u32)(r_eax+0x1c8u));
    /* 0042aece: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42aed0u); call_ind(t); }
    /* 0042aed0: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042aed3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042aed6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042aed8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042aedb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042aedc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042aedf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042aee2: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042aee6: call 0x42c8a0 */ r_esp -= 4; W32(r_esp, 0x42aeebu); f_0042c8a0();
    /* 0042aeeb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0042aef2: jmp 0x42aefd */ goto L_0042aefd;
L_0042aef4:; BB(0x0042aef4);
    /* 0042aef4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042aef7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042aefa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0042aefd:; BB(0x0042aefd);
    /* 0042aefd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042aeff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042af02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042af03: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042af06: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042af09: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 0042af0d: call 0x5ccdf0 */ r_esp -= 4; W32(r_esp, 0x42af12u); f_005ccdf0();
    /* 0042af12: cmp dword ptr [ebp - 0x24], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042af15: jg 0x42aff4 */ if ((!fZ&&fS==fO)) goto L_0042aff4;
L_0042af1b:; BB(0x0042af1b);
    /* 0042af1b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042af1e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042af21: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042af25: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042af28: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042af2e: lea edx, [eax + ecx + 0x17c] */ r_edx = (u32)(r_eax+r_ecx+0x17cu);
    /* 0042af35: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042af38: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0042af3b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042af3e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042af42: jne 0x42af49 */ if (!fZ) goto L_0042af49;
L_0042af44:; BB(0x0042af44);
    /* 0042af44: jmp 0x42aff4 */ goto L_0042aff4;
L_0042af49:; BB(0x0042af49);
    /* 0042af49: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042af4b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042af51: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x42af56u); f_00637810();
    /* 0042af56: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042af59: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
    /* 0042af5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042af62: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042af69: je 0x42afda */ if (fZ) goto L_0042afda;
L_0042af6b:; BB(0x0042af6b);
    /* 0042af6b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042af71: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x42af76u); f_00637630();
    /* 0042af76: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042af79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042af7b: je 0x42afda */ if (fZ) goto L_0042afda;
L_0042af7d:; BB(0x0042af7d);
    /* 0042af7d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042af7f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42af84u); f_00686d82();
    /* 0042af84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042af87: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042af8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042af91: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042af95: je 0x42afb8 */ if (fZ) goto L_0042afb8;
L_0042af97:; BB(0x0042af97);
    /* 0042af97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042af99: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042af9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042af9d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042afa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042afa1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042afa7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042afaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042afab: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042afae: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x42afb3u); f_00606e60();
    /* 0042afb3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0042afb6: jmp 0x42afbf */ goto L_0042afbf;
L_0042afb8:; BB(0x0042afb8);
    /* 0042afb8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0042afbf:; BB(0x0042afbf);
    /* 0042afbf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0042afc2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042afc5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042afcc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042afcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042afd0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042afd3: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x42afd8u); f_005f6050();
    /* 0042afd8: jmp 0x42afef */ goto L_0042afef;
L_0042afda:; BB(0x0042afda);
    /* 0042afda: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042afdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042afde: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042afe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042afe2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042afe5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042afe7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042afea: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042afed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42afefu); call_ind(t); }
L_0042afef:; BB(0x0042afef);
    /* 0042afef: jmp 0x42aef4 */ goto L_0042aef4;
L_0042aff4:; BB(0x0042aff4);
    /* 0042aff4: jmp 0x42ae1c */ goto L_0042ae1c;
L_0042aff9:; BB(0x0042aff9);
    /* 0042aff9: jmp 0x42ae00 */ goto L_0042ae00;
L_0042affe:; BB(0x0042affe);
    /* 0042affe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b000: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042b006: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042b009: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042b00e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042b011: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042b013: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042b016: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42b018u); call_ind(t); }
    /* 0042b018: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b01b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042b022: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042b023: mov esp, ebp */ r_esp = r_ebp;
    /* 0042b025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042b026: ret  */ FN_RET(0x0042ad90); r_esp += 4; return;
}

