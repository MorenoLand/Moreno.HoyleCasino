#include "protos.h"

void f_0043d2a0(void) /* sub_43D2A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d2a0);
    /* 0043d2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d2a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2aa: mov byte ptr [eax + 0x188], 0 */ W8((u32)(r_eax+0x188u), 0x0u);
    /* 0043d2b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2b4: call 0x43da40 */ r_esp -= 4; W32(r_esp, 0x43d2b9u); f_0043da40();
    /* 0043d2b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d2bc: ret  */ FN_RET(0x0043d2a0); r_esp += 4; return;
}

void f_0043d2c0(void) /* sub_43D2C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d2c0);
    /* 0043d2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d2c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2ca: mov byte ptr [eax + 0x188], 0 */ W8((u32)(r_eax+0x188u), 0x0u);
    /* 0043d2d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2d8: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0043d2de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d2e1: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d2e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043d2e9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d2ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d2eeu); call_ind(t); }
    /* 0043d2ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2f0: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043d2f6: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0043d2fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d2fd: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043d302: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043d305: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x43d30au); f_00609870();
    /* 0043d30a: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0043d310: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 0043d31a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d31c: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 0043d322: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0043d328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d329: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0043d32f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043d332: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x43d337u); f_00609870();
    /* 0043d337: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 0043d33d: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 0043d347: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d34a: ret  */ FN_RET(0x0043d2c0); r_esp += 4; return;
}

void f_0043d350(void) /* sub_43D350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d350);
    /* 0043d350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d351: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d357: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043d35d: call 0x444ac0 */ r_esp -= 4; W32(r_esp, 0x43d362u); f_00444ac0();
    /* 0043d362: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d367: je 0x43d384 */ if (fZ) goto L_0043d384;
L_0043d369:; BB(0x0043d369);
    /* 0043d369: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d36c: movzx edx, byte ptr [ecx + 0x188] */ r_edx = (u32)R8((u32)(r_ecx+0x188u));
    /* 0043d373: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d376: jne 0x43d37e */ if (!fZ) goto L_0043d37e;
L_0043d378:; BB(0x0043d378);
    /* 0043d378: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0043d37a: jmp 0x43d386 */ goto L_0043d386;
L_0043d37e:; BB(0x0043d37e);
    /* 0043d37e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043d380: jmp 0x43d386 */ goto L_0043d386;
L_0043d384:; BB(0x0043d384);
    /* 0043d384: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043d386:; BB(0x0043d386);
    /* 0043d386: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d388: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d389: ret  */ FN_RET(0x0043d350); r_esp += 4; return;
}

void f_0043d390(void) /* sub_43D390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d390);
    /* 0043d390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d391: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d39a: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43d39fu); f_0043d350();
    /* 0043d39f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d3a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d3a4: jne 0x43d3a8 */ if (!fZ) goto L_0043d3a8;
L_0043d3a6:; BB(0x0043d3a6);
    /* 0043d3a6: jmp 0x43d40b */ goto L_0043d40b;
L_0043d3a8:; BB(0x0043d3a8);
    /* 0043d3a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d3ab: mov byte ptr [ecx + 0x188], 0 */ W8((u32)(r_ecx+0x188u), 0x0u);
    /* 0043d3b2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d3b7: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 0043d3bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3be: push 0x18aa7 */ { u32 v = 0x18aa7u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d3c6: mov edx, dword ptr [ecx + 0x1a0] */ r_edx = R32((u32)(r_ecx+0x1a0u));
    /* 0043d3cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3cd: push 0x18aa6 */ { u32 v = 0x18aa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d3d5: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d3db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3dc: call 0x43f1b0 */ r_esp -= 4; W32(r_esp, 0x43d3e1u); f_0043f1b0();
    /* 0043d3e1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d3e4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d3e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d3eb: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d3f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d3f4: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0043d3fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d3fc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d3ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d401u); call_ind(t); }
    /* 0043d401: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d404: mov byte ptr [ecx + 0x188], 1 */ W8((u32)(r_ecx+0x188u), 0x1u);
L_0043d40b:; BB(0x0043d40b);
    /* 0043d40b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d40d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d40e: ret  */ FN_RET(0x0043d390); r_esp += 4; return;
}

void f_0043d410(void) /* sub_43D410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d410);
    /* 0043d410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d411: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d413: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d416: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043d419: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d41c: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43d421u); f_0043d350();
    /* 0043d421: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d426: jne 0x43d42d */ if (!fZ) goto L_0043d42d;
L_0043d428:; BB(0x0043d428);
    /* 0043d428: jmp 0x43d528 */ goto L_0043d528;
L_0043d42d:; BB(0x0043d42d);
    /* 0043d42d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d430: mov byte ptr [ecx + 0x188], 1 */ W8((u32)(r_ecx+0x188u), 0x1u);
    /* 0043d437: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d43a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043d43d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043d444: jmp 0x43d44f */ goto L_0043d44f;
L_0043d446:; BB(0x0043d446);
    /* 0043d446: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d449: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d44c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043d44f:; BB(0x0043d44f);
    /* 0043d44f: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043d453: jge 0x43d4b1 */ if ((fS==fO)) goto L_0043d4b1;
L_0043d455:; BB(0x0043d455);
    /* 0043d455: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d458: mov dword ptr [ebp + ecx*4 - 0x1c], 0 */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), 0x0u);
    /* 0043d460: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d463: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0043d466: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043d46a: ja 0x43d49c */ if ((!fC&&!fZ)) goto L_0043d49c;
L_0043d46c:; BB(0x0043d46c);
    /* 0043d46c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043d46f: jmp dword ptr [eax*4 + 0x43d530] */ { u32 t = R32((u32)(r_eax*4+0x43d530u)); switch (t) { case 0x43d476u: goto L_0043d476; case 0x43d47eu: goto L_0043d47e; case 0x43d486u: goto L_0043d486; case 0x43d48eu: goto L_0043d48e; case 0x43d496u: goto L_0043d496; default: UNSUP(0x0043d46f, "jump table entry is not a known target"); } }
L_0043d476:; BB(0x0043d476);
    /* 0043d476: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043d479: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043d47c: jmp 0x43d49c */ goto L_0043d49c;
L_0043d47e:; BB(0x0043d47e);
    /* 0043d47e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0043d481: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043d484: jmp 0x43d49c */ goto L_0043d49c;
L_0043d486:; BB(0x0043d486);
    /* 0043d486: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043d489: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043d48c: jmp 0x43d49c */ goto L_0043d49c;
L_0043d48e:; BB(0x0043d48e);
    /* 0043d48e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0043d491: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043d494: jmp 0x43d49c */ goto L_0043d49c;
L_0043d496:; BB(0x0043d496);
    /* 0043d496: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0043d499: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0043d49c:; BB(0x0043d49c);
    /* 0043d49c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d49f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d4a3: call 0x43d9b0 */ r_esp -= 4; W32(r_esp, 0x43d4a8u); f_0043d9b0();
    /* 0043d4a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d4ab: mov dword ptr [ebp + ecx*4 - 0x1c], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), r_eax);
    /* 0043d4af: jmp 0x43d446 */ goto L_0043d446;
L_0043d4b1:; BB(0x0043d4b1);
    /* 0043d4b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4b3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d4b6: mov eax, dword ptr [edx + 0x1cc] */ r_eax = R32((u32)(r_edx+0x1ccu));
    /* 0043d4bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d4c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4c1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d4c4: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0043d4ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4cb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d4ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4cf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d4d2: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0043d4d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d4dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4dd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d4e0: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0043d4e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4e7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d4ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4eb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d4ee: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0043d4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4f5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d4f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4f9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d4fc: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d503: call 0x43f1b0 */ r_esp -= 4; W32(r_esp, 0x43d508u); f_0043f1b0();
    /* 0043d508: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d50b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d50d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d50f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d512: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0043d518: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d51b: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d521: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043d523: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d526: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d528u); call_ind(t); }
L_0043d528:; BB(0x0043d528);
    /* 0043d528: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d52a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d52b: ret 0x14 */ FN_RET(0x0043d410); r_esp += 24; return;
}

void f_0043d550(void) /* sub_43D550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d550);
    /* 0043d550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d551: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d553: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d556: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043d559: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d55c: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43d561u); f_0043d350();
    /* 0043d561: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d566: jne 0x43d56d */ if (!fZ) goto L_0043d56d;
L_0043d568:; BB(0x0043d568);
    /* 0043d568: jmp 0x43d62a */ goto L_0043d62a;
L_0043d56d:; BB(0x0043d56d);
    /* 0043d56d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d570: mov byte ptr [ecx + 0x188], 1 */ W8((u32)(r_ecx+0x188u), 0x1u);
    /* 0043d577: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0043d57a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043d57d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043d584: jmp 0x43d58f */ goto L_0043d58f;
L_0043d586:; BB(0x0043d586);
    /* 0043d586: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d589: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d58c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043d58f:; BB(0x0043d58f);
    /* 0043d58f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043d593: jge 0x43d5e5 */ if ((fS==fO)) goto L_0043d5e5;
L_0043d595:; BB(0x0043d595);
    /* 0043d595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d598: mov dword ptr [ebp + ecx*4 - 0x14], 0 */ W32((u32)(r_ebp+r_ecx*4+0xffffffecu), 0x0u);
    /* 0043d5a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d5a3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0043d5a6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d5aa: je 0x43d5ba */ if (fZ) goto L_0043d5ba;
L_0043d5ac:; BB(0x0043d5ac);
    /* 0043d5ac: cmp dword ptr [ebp - 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d5b0: je 0x43d5c2 */ if (fZ) goto L_0043d5c2;
L_0043d5b2:; BB(0x0043d5b2);
    /* 0043d5b2: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d5b6: je 0x43d5ca */ if (fZ) goto L_0043d5ca;
L_0043d5b8:; BB(0x0043d5b8);
    /* 0043d5b8: jmp 0x43d5d0 */ goto L_0043d5d0;
L_0043d5ba:; BB(0x0043d5ba);
    /* 0043d5ba: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043d5bd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043d5c0: jmp 0x43d5d0 */ goto L_0043d5d0;
L_0043d5c2:; BB(0x0043d5c2);
    /* 0043d5c2: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0043d5c5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043d5c8: jmp 0x43d5d0 */ goto L_0043d5d0;
L_0043d5ca:; BB(0x0043d5ca);
    /* 0043d5ca: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0043d5cd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0043d5d0:; BB(0x0043d5d0);
    /* 0043d5d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d5d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d5d7: call 0x43d9b0 */ r_esp -= 4; W32(r_esp, 0x43d5dcu); f_0043d9b0();
    /* 0043d5dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d5df: mov dword ptr [ebp + ecx*4 - 0x14], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffecu), r_eax);
    /* 0043d5e3: jmp 0x43d586 */ goto L_0043d586;
L_0043d5e5:; BB(0x0043d5e5);
    /* 0043d5e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5e7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d5ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d5ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d5f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d5f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5f7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d5fa: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d600: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d601: call 0x43f1b0 */ r_esp -= 4; W32(r_esp, 0x43d606u); f_0043f1b0();
    /* 0043d606: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d609: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d60b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0043d60e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d60f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d612: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d618: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d61b: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d621: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d623: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d625: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d628: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d62au); call_ind(t); }
L_0043d62a:; BB(0x0043d62a);
    /* 0043d62a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d62c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d62d: ret 0x14 */ FN_RET(0x0043d550); r_esp += 24; return;
}

void f_0043d630(void) /* sub_43D630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d630);
    /* 0043d630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d631: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d637: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043d63a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d63b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043d63e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d63f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d643: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d645: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d648: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 0043d64e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d64f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d652: call 0x43d550 */ r_esp -= 4; W32(r_esp, 0x43d657u); f_0043d550();
    /* 0043d657: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d65a: ret 0xc */ FN_RET(0x0043d630); r_esp += 16; return;
}

void f_0043d660(void) /* sub_43D660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d660);
    /* 0043d660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d661: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d667: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043d66a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d66b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043d66e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d66f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d672: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d673: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d675: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d678: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 0043d67e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d67f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d682: call 0x43d550 */ r_esp -= 4; W32(r_esp, 0x43d687u); f_0043d550();
    /* 0043d687: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d68a: ret 0xc */ FN_RET(0x0043d660); r_esp += 16; return;
}

void f_0043d690(void) /* sub_43D690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d690);
    /* 0043d690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d691: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d697: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043d69a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d69b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043d69e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d69f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d6a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6a3: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d6a8: mov ecx, dword ptr [eax + 0x1b8] */ r_ecx = R32((u32)(r_eax+0x1b8u));
    /* 0043d6ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d6b2: call 0x43d550 */ r_esp -= 4; W32(r_esp, 0x43d6b7u); f_0043d550();
    /* 0043d6b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d6b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d6ba: ret 0xc */ FN_RET(0x0043d690); r_esp += 16; return;
}

void f_0043d6c0(void) /* sub_43D6C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d6c0);
    /* 0043d6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d6c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d6c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d6ca: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43d6cfu); f_0043d350();
    /* 0043d6cf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d6d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d6d4: jne 0x43d6d8 */ if (!fZ) goto L_0043d6d8;
L_0043d6d6:; BB(0x0043d6d6);
    /* 0043d6d6: jmp 0x43d72a */ goto L_0043d72a;
L_0043d6d8:; BB(0x0043d6d8);
    /* 0043d6d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d6db: mov byte ptr [ecx + 0x188], 1 */ W8((u32)(r_ecx+0x188u), 0x1u);
    /* 0043d6e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d6e7: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0043d6ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043d6f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d6f5: call 0x43d9b0 */ r_esp -= 4; W32(r_esp, 0x43d6fau); f_0043d9b0();
    /* 0043d6fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d6fe: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d705: call 0x43f1b0 */ r_esp -= 4; W32(r_esp, 0x43d70au); f_0043f1b0();
    /* 0043d70a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d70d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d70f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d711: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d714: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0043d71a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d71d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d723: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043d725: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d728: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d72au); call_ind(t); }
L_0043d72a:; BB(0x0043d72a);
    /* 0043d72a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d72c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d72d: ret 4 */ FN_RET(0x0043d6c0); r_esp += 8; return;
}

void f_0043d730(void) /* sub_43D730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d730);
    /* 0043d730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d731: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d73a: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43d73fu); f_0043d350();
    /* 0043d73f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d744: jne 0x43d748 */ if (!fZ) goto L_0043d748;
L_0043d746:; BB(0x0043d746);
    /* 0043d746: jmp 0x43d78f */ goto L_0043d78f;
L_0043d748:; BB(0x0043d748);
    /* 0043d748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d74b: mov byte ptr [ecx + 0x188], 1 */ W8((u32)(r_ecx+0x188u), 0x1u);
    /* 0043d752: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d754: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d757: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0043d75d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d75e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d761: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0043d767: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d768: call 0x43f1b0 */ r_esp -= 4; W32(r_esp, 0x43d76du); f_0043f1b0();
    /* 0043d76d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d770: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d772: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d774: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d777: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d77d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d780: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d786: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d788: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d78a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d78d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d78fu); call_ind(t); }
L_0043d78f:; BB(0x0043d78f);
    /* 0043d78f: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d792: ret  */ FN_RET(0x0043d730); r_esp += 4; return;
}

void f_0043d940(void) /* sub_43D940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d940);
    /* 0043d940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d941: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d947: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d94a: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43d94fu); f_0043d350();
    /* 0043d94f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d954: jne 0x43d958 */ if (!fZ) goto L_0043d958;
L_0043d956:; BB(0x0043d956);
    /* 0043d956: jmp 0x43d9aa */ goto L_0043d9aa;
L_0043d958:; BB(0x0043d958);
    /* 0043d958: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d95b: mov byte ptr [ecx + 0x188], 1 */ W8((u32)(r_ecx+0x188u), 0x1u);
    /* 0043d962: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 0043d968: mov byte ptr [edx + 0x25c], 1 */ W8((u32)(r_edx+0x25cu), 0x1u);
    /* 0043d96f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d971: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d974: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0043d97a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d97b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d97e: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d985: call 0x43f1b0 */ r_esp -= 4; W32(r_esp, 0x43d98au); f_0043f1b0();
    /* 0043d98a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d98d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d98f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d991: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d994: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0043d99a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d99d: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d9a3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043d9a5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d9a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d9aau); call_ind(t); }
L_0043d9aa:; BB(0x0043d9aa);
    /* 0043d9aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d9ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d9ad: ret  */ FN_RET(0x0043d940); r_esp += 4; return;
}

void f_0043da40(void) /* sub_43DA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043da40);
    /* 0043da40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043da41: mov ebp, esp */ r_ebp = r_esp;
    /* 0043da43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043da44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043da47: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043da49: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43da4eu); f_0062fbf0();
    /* 0043da4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043da51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da53: je 0x43da64 */ if (fZ) goto L_0043da64;
L_0043da55:; BB(0x0043da55);
    /* 0043da55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da58: mov dword ptr [eax + 0x184], 1 */ W32((u32)(r_eax+0x184u), 0x1u);
    /* 0043da62: jmp 0x43da71 */ goto L_0043da71;
L_0043da64:; BB(0x0043da64);
    /* 0043da64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da67: mov dword ptr [ecx + 0x184], 0 */ W32((u32)(r_ecx+0x184u), 0x0u);
L_0043da71:; BB(0x0043da71);
    /* 0043da71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da74: call 0x43dbf0 */ r_esp -= 4; W32(r_esp, 0x43da79u); f_0043dbf0();
    /* 0043da79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da7c: call 0x43dee0 */ r_esp -= 4; W32(r_esp, 0x43da81u); f_0043dee0();
    /* 0043da81: mov esp, ebp */ r_esp = r_ebp;
    /* 0043da83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043da84: ret  */ FN_RET(0x0043da40); r_esp += 4; return;
}

void f_0043da90(void) /* sub_43DA90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043da90);
    /* 0043da90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043da91: mov ebp, esp */ r_ebp = r_esp;
    /* 0043da93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043da94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043da97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043da9a: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
    /* 0043daa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043daa7: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
    /* 0043dab1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dab4: mov dword ptr [edx + 0x194], 0 */ W32((u32)(r_edx+0x194u), 0x0u);
    /* 0043dabe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dac1: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
    /* 0043dacb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dace: mov dword ptr [ecx + 0x19c], 0 */ W32((u32)(r_ecx+0x19cu), 0x0u);
    /* 0043dad8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dadb: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 0043dae5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dae8: mov dword ptr [eax + 0x1a4], 0 */ W32((u32)(r_eax+0x1a4u), 0x0u);
    /* 0043daf2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043daf5: mov dword ptr [ecx + 0x1a8], 0 */ W32((u32)(r_ecx+0x1a8u), 0x0u);
    /* 0043daff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db02: mov dword ptr [edx + 0x1ac], 0 */ W32((u32)(r_edx+0x1acu), 0x0u);
    /* 0043db0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db0f: mov dword ptr [eax + 0x1b0], 0 */ W32((u32)(r_eax+0x1b0u), 0x0u);
    /* 0043db19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db1c: mov dword ptr [ecx + 0x1b4], 0 */ W32((u32)(r_ecx+0x1b4u), 0x0u);
    /* 0043db26: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db29: mov dword ptr [edx + 0x1b8], 0 */ W32((u32)(r_edx+0x1b8u), 0x0u);
    /* 0043db33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db36: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
    /* 0043db40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db43: mov dword ptr [ecx + 0x1c0], 0 */ W32((u32)(r_ecx+0x1c0u), 0x0u);
    /* 0043db4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db50: mov dword ptr [edx + 0x1c4], 0 */ W32((u32)(r_edx+0x1c4u), 0x0u);
    /* 0043db5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db5d: mov dword ptr [eax + 0x1c8], 0 */ W32((u32)(r_eax+0x1c8u), 0x0u);
    /* 0043db67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db6a: mov dword ptr [ecx + 0x1cc], 0 */ W32((u32)(r_ecx+0x1ccu), 0x0u);
    /* 0043db74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db77: mov dword ptr [edx + 0x1d0], 0 */ W32((u32)(r_edx+0x1d0u), 0x0u);
    /* 0043db81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db84: mov dword ptr [eax + 0x1d4], 0 */ W32((u32)(r_eax+0x1d4u), 0x0u);
    /* 0043db8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db91: mov dword ptr [ecx + 0x1d8], 0 */ W32((u32)(r_ecx+0x1d8u), 0x0u);
    /* 0043db9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043db9e: mov dword ptr [edx + 0x1dc], 0 */ W32((u32)(r_edx+0x1dcu), 0x0u);
    /* 0043dba8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbab: mov dword ptr [eax + 0x1e0], 0 */ W32((u32)(r_eax+0x1e0u), 0x0u);
    /* 0043dbb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbb8: mov dword ptr [ecx + 0x1e4], 0 */ W32((u32)(r_ecx+0x1e4u), 0x0u);
    /* 0043dbc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbc5: mov dword ptr [edx + 0x1e8], 0 */ W32((u32)(r_edx+0x1e8u), 0x0u);
    /* 0043dbcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbd2: mov dword ptr [eax + 0x1ec], 0 */ W32((u32)(r_eax+0x1ecu), 0x0u);
    /* 0043dbdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043dbdf: mov dword ptr [ecx + 0x1f0], 0 */ W32((u32)(r_ecx+0x1f0u), 0x0u);
    /* 0043dbe9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043dbeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043dbec: ret  */ FN_RET(0x0043da90); r_esp += 4; return;
}

void f_0043dbf0(void) /* sub_43DBF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043dbf0);
    /* 0043dbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043dbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043dbf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043dbf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043dbf9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dbfc: call 0x43da90 */ r_esp -= 4; W32(r_esp, 0x43dc01u); f_0043da90();
    /* 0043dc01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc04: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0043dc0a: imul ecx, ecx, 0x2710 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2710u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043dc10: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043dc13: mov edx, dword ptr [0x713620] */ r_edx = R32((u32)(0x713620u));
    /* 0043dc19: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dc1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc1f: mov dword ptr [eax + 0x18c], edx */ W32((u32)(r_eax+0x18cu), r_edx);
    /* 0043dc25: mov ecx, dword ptr [0x71362c] */ r_ecx = R32((u32)(0x71362cu));
    /* 0043dc2b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043dc2e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc31: mov dword ptr [edx + 0x190], ecx */ W32((u32)(r_edx+0x190u), r_ecx);
    /* 0043dc37: mov eax, dword ptr [0x713638] */ r_eax = R32((u32)(0x713638u));
    /* 0043dc3c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dc3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc42: mov dword ptr [ecx + 0x194], eax */ W32((u32)(r_ecx+0x194u), r_eax);
    /* 0043dc48: mov edx, dword ptr [0x713644] */ r_edx = R32((u32)(0x713644u));
    /* 0043dc4e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dc51: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc54: mov dword ptr [eax + 0x198], edx */ W32((u32)(r_eax+0x198u), r_edx);
    /* 0043dc5a: mov ecx, dword ptr [0x713650] */ r_ecx = R32((u32)(0x713650u));
    /* 0043dc60: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043dc63: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc66: mov dword ptr [edx + 0x19c], ecx */ W32((u32)(r_edx+0x19cu), r_ecx);
    /* 0043dc6c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dc6e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dc73u); f_0062fbf0();
    /* 0043dc73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dc76: mov eax, dword ptr [eax*4 + 0x71365c] */ r_eax = R32((u32)(r_eax*4+0x71365cu));
    /* 0043dc7d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dc80: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dc83: mov dword ptr [ecx + 0x1a0], eax */ W32((u32)(r_ecx+0x1a0u), r_eax);
    /* 0043dc89: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dc8b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dc90u); f_0062fbf0();
    /* 0043dc90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dc93: mov edx, dword ptr [eax*4 + 0x713668] */ r_edx = R32((u32)(r_eax*4+0x713668u));
    /* 0043dc9a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dc9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dca0: mov dword ptr [eax + 0x1a4], edx */ W32((u32)(r_eax+0x1a4u), r_edx);
    /* 0043dca6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dca8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dcadu); f_0062fbf0();
    /* 0043dcad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dcb0: mov ecx, dword ptr [eax*4 + 0x713674] */ r_ecx = R32((u32)(r_eax*4+0x713674u));
    /* 0043dcb7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043dcba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dcbd: mov dword ptr [edx + 0x1a8], ecx */ W32((u32)(r_edx+0x1a8u), r_ecx);
    /* 0043dcc3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dcc5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dccau); f_0062fbf0();
    /* 0043dcca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dccd: mov eax, dword ptr [eax*4 + 0x713680] */ r_eax = R32((u32)(r_eax*4+0x713680u));
    /* 0043dcd4: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dcd7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dcda: mov dword ptr [ecx + 0x1ac], eax */ W32((u32)(r_ecx+0x1acu), r_eax);
    /* 0043dce0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dce2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dce7u); f_0062fbf0();
    /* 0043dce7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dcea: mov edx, dword ptr [eax*4 + 0x71368c] */ r_edx = R32((u32)(r_eax*4+0x71368cu));
    /* 0043dcf1: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dcf4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dcf7: mov dword ptr [eax + 0x1b0], edx */ W32((u32)(r_eax+0x1b0u), r_edx);
    /* 0043dcfd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dcff: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dd04u); f_0062fbf0();
    /* 0043dd04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dd07: mov ecx, dword ptr [eax*4 + 0x713698] */ r_ecx = R32((u32)(r_eax*4+0x713698u));
    /* 0043dd0e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043dd11: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd14: mov dword ptr [edx + 0x1b4], ecx */ W32((u32)(r_edx+0x1b4u), r_ecx);
    /* 0043dd1a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd1c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dd21u); f_0062fbf0();
    /* 0043dd21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dd24: mov eax, dword ptr [eax*4 + 0x7136a4] */ r_eax = R32((u32)(r_eax*4+0x7136a4u));
    /* 0043dd2b: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dd2e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd31: mov dword ptr [ecx + 0x1b8], eax */ W32((u32)(r_ecx+0x1b8u), r_eax);
    /* 0043dd37: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd39: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dd3eu); f_0062fbf0();
    /* 0043dd3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dd41: mov edx, dword ptr [eax*4 + 0x7136b0] */ r_edx = R32((u32)(r_eax*4+0x7136b0u));
    /* 0043dd48: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dd4b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd4e: mov dword ptr [eax + 0x1bc], edx */ W32((u32)(r_eax+0x1bcu), r_edx);
    /* 0043dd54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd56: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dd5bu); f_0062fbf0();
    /* 0043dd5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dd5e: mov ecx, dword ptr [eax*4 + 0x7136c0] */ r_ecx = R32((u32)(r_eax*4+0x7136c0u));
    /* 0043dd65: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043dd68: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd6b: mov dword ptr [edx + 0x1c0], ecx */ W32((u32)(r_edx+0x1c0u), r_ecx);
    /* 0043dd71: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd73: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dd78u); f_0062fbf0();
    /* 0043dd78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dd7b: mov eax, dword ptr [eax*4 + 0x7136d0] */ r_eax = R32((u32)(r_eax*4+0x7136d0u));
    /* 0043dd82: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dd85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dd88: mov dword ptr [ecx + 0x1c4], eax */ W32((u32)(r_ecx+0x1c4u), r_eax);
    /* 0043dd8e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd90: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43dd95u); f_0062fbf0();
    /* 0043dd95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043dd98: mov edx, dword ptr [eax*4 + 0x7136e0] */ r_edx = R32((u32)(r_eax*4+0x7136e0u));
    /* 0043dd9f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dda2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dda5: mov dword ptr [eax + 0x1c8], edx */ W32((u32)(r_eax+0x1c8u), r_edx);
    /* 0043ddab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ddad: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43ddb2u); f_0062fbf0();
    /* 0043ddb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ddb5: mov ecx, dword ptr [eax*4 + 0x7136f0] */ r_ecx = R32((u32)(r_eax*4+0x7136f0u));
    /* 0043ddbc: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ddbf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ddc2: mov dword ptr [edx + 0x1cc], ecx */ W32((u32)(r_edx+0x1ccu), r_ecx);
    /* 0043ddc8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ddca: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43ddcfu); f_0062fbf0();
    /* 0043ddcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ddd2: mov eax, dword ptr [eax*4 + 0x713700] */ r_eax = R32((u32)(r_eax*4+0x713700u));
    /* 0043ddd9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dddc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dddf: mov dword ptr [ecx + 0x1d0], eax */ W32((u32)(r_ecx+0x1d0u), r_eax);
    /* 0043dde5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dde7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43ddecu); f_0062fbf0();
    /* 0043ddec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ddef: mov edx, dword ptr [eax*4 + 0x713714] */ r_edx = R32((u32)(r_eax*4+0x713714u));
    /* 0043ddf6: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ddf9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ddfc: mov dword ptr [eax + 0x1d4], edx */ W32((u32)(r_eax+0x1d4u), r_edx);
    /* 0043de02: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de04: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43de09u); f_0062fbf0();
    /* 0043de09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043de0c: mov ecx, dword ptr [eax*4 + 0x713728] */ r_ecx = R32((u32)(r_eax*4+0x713728u));
    /* 0043de13: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043de16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de19: mov dword ptr [edx + 0x1d8], ecx */ W32((u32)(r_edx+0x1d8u), r_ecx);
    /* 0043de1f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de21: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43de26u); f_0062fbf0();
    /* 0043de26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043de29: mov eax, dword ptr [eax*4 + 0x71373c] */ r_eax = R32((u32)(r_eax*4+0x71373cu));
    /* 0043de30: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043de33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de36: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 0043de3c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de3e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43de43u); f_0062fbf0();
    /* 0043de43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043de46: mov edx, dword ptr [eax*4 + 0x713750] */ r_edx = R32((u32)(r_eax*4+0x713750u));
    /* 0043de4d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043de50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de53: mov dword ptr [eax + 0x1e0], edx */ W32((u32)(r_eax+0x1e0u), r_edx);
    /* 0043de59: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de5b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43de60u); f_0062fbf0();
    /* 0043de60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043de63: mov ecx, dword ptr [eax*4 + 0x71375c] */ r_ecx = R32((u32)(r_eax*4+0x71375cu));
    /* 0043de6a: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043de6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de70: mov dword ptr [edx + 0x1e4], ecx */ W32((u32)(r_edx+0x1e4u), r_ecx);
    /* 0043de76: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de78: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43de7du); f_0062fbf0();
    /* 0043de7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043de80: mov eax, dword ptr [eax*4 + 0x713770] */ r_eax = R32((u32)(r_eax*4+0x713770u));
    /* 0043de87: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043de8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043de8d: mov dword ptr [ecx + 0x1e8], eax */ W32((u32)(r_ecx+0x1e8u), r_eax);
    /* 0043de93: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043de95: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43de9au); f_0062fbf0();
    /* 0043de9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043de9d: mov edx, dword ptr [eax*4 + 0x713784] */ r_edx = R32((u32)(r_eax*4+0x713784u));
    /* 0043dea4: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dea7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043deaa: mov dword ptr [eax + 0x1ec], edx */ W32((u32)(r_eax+0x1ecu), r_edx);
    /* 0043deb0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043deb2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x43deb7u); f_0062fbf0();
    /* 0043deb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043deba: mov ecx, dword ptr [eax*4 + 0x713798] */ r_ecx = R32((u32)(r_eax*4+0x713798u));
    /* 0043dec1: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043dec4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dec7: mov dword ptr [edx + 0x1f0], ecx */ W32((u32)(r_edx+0x1f0u), r_ecx);
    /* 0043decd: mov esp, ebp */ r_esp = r_ebp;
    /* 0043decf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ded0: ret  */ FN_RET(0x0043dbf0); r_esp += 4; return;
}

void f_0043dee0(void) /* sub_43DEE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043dee0);
    /* 0043dee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043dee1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043dee3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043dee6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043dee9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043deec: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43def1u); f_0043d350();
    /* 0043def1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043def4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043def6: je 0x43e2b1 */ if (fZ) goto L_0043e2b1;
L_0043defc:; BB(0x0043defc);
    /* 0043defc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043defe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df01: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0043df07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043df08: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043df0d: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043df12: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043df15: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43df1au); f_006044b0();
    /* 0043df1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043df1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df1f: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0043df25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043df26: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043df2b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043df30: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043df33: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43df38u); f_006044b0();
    /* 0043df38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043df3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df3d: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0043df43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043df44: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043df49: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043df4e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043df51: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43df56u); f_006044b0();
    /* 0043df56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043df58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df5b: mov edx, dword ptr [ecx + 0x198] */ r_edx = R32((u32)(r_ecx+0x198u));
    /* 0043df61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043df62: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043df67: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043df6c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043df6f: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43df74u); f_006044b0();
    /* 0043df74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043df76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df79: mov edx, dword ptr [ecx + 0x19c] */ r_edx = R32((u32)(r_ecx+0x19cu));
    /* 0043df7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043df80: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043df85: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043df8a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043df8d: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43df92u); f_006044b0();
    /* 0043df92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043df94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043df97: mov edx, dword ptr [ecx + 0x1a0] */ r_edx = R32((u32)(r_ecx+0x1a0u));
    /* 0043df9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043df9e: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfa3: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043dfa8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043dfab: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43dfb0u); f_006044b0();
    /* 0043dfb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dfb5: mov edx, dword ptr [ecx + 0x1a4] */ r_edx = R32((u32)(r_ecx+0x1a4u));
    /* 0043dfbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfbc: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfc1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043dfc6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043dfc9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43dfceu); f_006044b0();
    /* 0043dfce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dfd3: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 0043dfd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfda: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfdf: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043dfe4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043dfe7: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43dfecu); f_006044b0();
    /* 0043dfec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043dfee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043dff1: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0043dff7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043dff8: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043dffd: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e002: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e005: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e00au); f_006044b0();
    /* 0043e00a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e00c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e00f: mov edx, dword ptr [ecx + 0x1b0] */ r_edx = R32((u32)(r_ecx+0x1b0u));
    /* 0043e015: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e016: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e01b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e020: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e023: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e028u); f_006044b0();
    /* 0043e028: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e02a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e02d: mov edx, dword ptr [ecx + 0x1b4] */ r_edx = R32((u32)(r_ecx+0x1b4u));
    /* 0043e033: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e034: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e039: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e03e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e041: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e046u); f_006044b0();
    /* 0043e046: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e048: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e04b: mov edx, dword ptr [ecx + 0x1b8] */ r_edx = R32((u32)(r_ecx+0x1b8u));
    /* 0043e051: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e052: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e057: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e05c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e05f: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e064u); f_006044b0();
    /* 0043e064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e066: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e069: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0043e06f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e070: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e075: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e07a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e07d: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e082u); f_006044b0();
    /* 0043e082: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e084: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e087: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0043e08d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e08e: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e093: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e098: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e09b: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e0a0u); f_006044b0();
    /* 0043e0a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e0a5: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0043e0ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0ac: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0b1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e0b6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e0b9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e0beu); f_006044b0();
    /* 0043e0be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e0c3: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 0043e0c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0ca: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0cf: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e0d4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e0d7: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e0dcu); f_006044b0();
    /* 0043e0dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e0e1: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0043e0e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0e8: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0ed: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e0f2: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e0f5: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e0fau); f_006044b0();
    /* 0043e0fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e0fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e0ff: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 0043e105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e106: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e10b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e110: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e113: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e118u); f_006044b0();
    /* 0043e118: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e11a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e11d: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0043e123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e124: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e129: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e12e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e131: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e136u); f_006044b0();
    /* 0043e136: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e138: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e13b: mov edx, dword ptr [ecx + 0x1d8] */ r_edx = R32((u32)(r_ecx+0x1d8u));
    /* 0043e141: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e142: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e147: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e14c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e14f: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e154u); f_006044b0();
    /* 0043e154: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e156: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e159: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0043e15f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e160: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e165: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e16a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e16d: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e172u); f_006044b0();
    /* 0043e172: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e174: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e177: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0043e17d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e17e: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e183: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e188: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e18b: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e190u); f_006044b0();
    /* 0043e190: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e192: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e195: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0043e19b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e19c: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1a1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e1a6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e1a9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e1aeu); f_006044b0();
    /* 0043e1ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e1b3: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0043e1b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1ba: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1bf: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e1c4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e1c7: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e1ccu); f_006044b0();
    /* 0043e1cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e1d1: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0043e1d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1d8: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1dd: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e1e2: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e1e5: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e1eau); f_006044b0();
    /* 0043e1ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e1ef: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0043e1f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1f6: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1fb: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e200: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e203: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e208u); f_006044b0();
    /* 0043e208: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043e20b: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0043e211: imul edx, edx, 0x2710 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2710u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043e217: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043e21a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e21c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e21f: add eax, 0x24a4e */ {  u32 a = r_eax; u32 b = 0x24a4eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e224: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e225: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e22a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0043e230: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0043e233: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e238u); f_006044b0();
    /* 0043e238: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e23a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e23d: add edx, 0x24a4f */ {  u32 a = r_edx; u32 b = 0x24a4fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043e243: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e244: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e249: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e24e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e251: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e256u); f_006044b0();
    /* 0043e256: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e258: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e25b: add ecx, 0x24a50 */ {  u32 a = r_ecx; u32 b = 0x24a50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e262: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e267: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0043e26d: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0043e270: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e275u); f_006044b0();
    /* 0043e275: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e277: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e27a: add eax, 0x24a51 */ {  u32 a = r_eax; u32 b = 0x24a51u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e27f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e280: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e285: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0043e28b: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0043e28e: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e293u); f_006044b0();
    /* 0043e293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e295: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043e298: add edx, 0x24a52 */ {  u32 a = r_edx; u32 b = 0x24a52u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043e29e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e29f: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2a4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0043e2a9: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043e2ac: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x43e2b1u); f_006044b0();
L_0043e2b1:; BB(0x0043e2b1);
    /* 0043e2b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e2b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e2b4: ret  */ FN_RET(0x0043dee0); r_esp += 4; return;
}

